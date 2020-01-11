#!/bin/bash
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

DIRECTORY='testcase_outputs/'

if [ -d "$DIRECTORY" ]; then
    rm -rf "$DIRECTORY"     # remove directory if already present
fi
mkdir "$DIRECTORY"

lex -l scanner.l && gcc lex.yy.c lib/Tables.c -lfl -o scanner.out   # run commands and save file as scanner.out

for testcase in $(ls Test_Cases); do         # run on all tesr cases
    TEMP_OUTPUT="$DIRECTORY$testcase"
    ./scanner.out < Test_Cases/$testcase > $TEMP_OUTPUT    # run testcase on scanner.out and save it in temp output
    printf "********************************************************************************************************************************\n\n\n"
    printf "\t\t\t\t\t\t\t\t\tScanning $testcase ↓\n"
  spin

	printf "\n\t\t\t\t\t\t\t\t\tScanning completed. ✔️ \n"
    sleep 0.2
    FILTERED_OUTPUT='sed -r "s/\x1B\[([0-9]{1,2}(;[0-9]{1,2})?)?[m|K]//g" $TEMP_OUTPUT'
    FINAL_OUTPUT="${TEMP_OUTPUT%.*}.tokens"
    eval $FILTERED_OUTPUT > $FINAL_OUTPUT     # save the output in file
    cat $TEMP_OUTPUT   # print output on terminal
    rm $TEMP_OUTPUT    # remove temporary output

    printf "\t\t\t\t\t\t\t\t\t$testcase scanned. ✔️ \n\n\n"
done
printf "\t\t\t\t\t\t\t\t\tTesting done successfully ✔️ \n\n"
