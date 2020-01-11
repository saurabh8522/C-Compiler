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

  kill $pid
}

spin(){
  while [ 1 ]
  do
    for i in ${spinner[@]};
    do
      echo -ne "\rLoading$i";
      sleep 0.1
    done;
  done
}


DIRECTORY='outputs/'

if [ -d "$DIRECTORY" ]; then
    rm -rf "$DIRECTORY"
fi
mkdir "$DIRECTORY"

lex -l scanner.l && gcc lex.yy.c lib/symbol_table.c -lfl -o scanner.out

for testcase in $(ls Test_Cases); do
    TEMP_OUTPUT="$DIRECTORY$testcase"
    ./scanner.out < Test_Cases/$testcase > $TEMP_OUTPUT

    if [ $1 ]; then
        printf "===============================================\n\n\n"
        printf "Scanning $testcase ↓\n"
        cat $TEMP_OUTPUT
    fi
    printf "===============================================\n\n\n"
    printf "Scanning $testcase ↓\n"
	count
	printf "\nLoading completed. ✔️ \n"
    sleep 2
    cat $TEMP_OUTPUT

    FILTERED_OUTPUT='sed -r "s/\x1B\[([0-9]{1,2}(;[0-9]{1,2})?)?[m|K]//g" $TEMP_OUTPUT'
    FINAL_OUTPUT="${TEMP_OUTPUT%.*}.tokens"
    eval $FILTERED_OUTPUT > $FINAL_OUTPUT
    rm $TEMP_OUTPUT

    printf "$testcase scanned. ✔️ \n"
done

printf "Successful Testing ✔️ \n"
