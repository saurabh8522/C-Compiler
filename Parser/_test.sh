#!/bin/bash
# Usage ./runtests.sh for redirecting outputs to file,
# and with an arguement to print on commandline as well
spinner=(🔹◽️◽️◽️◽️ ◽️🔹◽️◽️◽️ ◽️◽️🔹◽️◽️ ◽️◽️◽️🔹◽️ ◽️◽️◽️◽️🔹 ◽️◽️◽️🔹◽️ ◽️◽️🔹◽️◽️ ◽️🔹◽️◽️◽️);
count(){
  spin &
  pid=$!

  for i in `seq 1 5`
  do
    sleep 1;
  done
}
spin(){
  while [ rah ]
  do
    for i in ${spinner[@]};
    do
      echo -ne "\r\t\t\t\t\t\t\t\t\tLoading $i";
      sleep 0.1
    done;
    break;
  done
}
spin
DIRECTORY='outputs/'

if [ -d "$DIRECTORY" ]; then
    rm -rf "$DIRECTORY"
fi
mkdir "$DIRECTORY"

yacc -d parser.y
lex scanner.l

gcc lex.yy.c y.tab.c lib/symbol_table.c -w -lm -o parser.out

for testcase in $(ls testcases); do
    TEMP_OUTPUT="$DIRECTORY$testcase"

    ./parser.out < testcases/$testcase > $TEMP_OUTPUT
    if [ $1 ]; then
        printf "===============================================\n\n\n"
        printf "Parsing $testcase ↓\n"
        spin

        cat $TEMP_OUTPUT
    fi
    spin
    sleep 0.2
    FILTERED_OUTPUT='sed -r "s/\x1B\[([0-9]{1,2}(;[0-9]{1,2})?)?[m|K]//g" $TEMP_OUTPUT'
    FINAL_OUTPUT="${TEMP_OUTPUT%.*}.parse"
    eval $FILTERED_OUTPUT > $FINAL_OUTPUT
    rm $TEMP_OUTPUT

    printf "$testcase parsed. ✔️ \n"
done
