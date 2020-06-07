#!/bin/bash

# alias ccat='pygmentize -g'
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
for testcase in $(ls testcases); do
    echo "============================================================================================================="
    printf "\n"
    spin
    printf "\n"
    printf "Source code for: $testcase:\n"
    pygmentize -g testcases/$testcase
    printf "\n\n\n"
    ./run.sh testcases/$testcase
    echo "============================================================================================================="
    printf "\n\n\n"
done
