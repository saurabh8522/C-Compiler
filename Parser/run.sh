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
      echo -ne "\r\t\t\t\t     Loading $i";
      sleep 0.1
    done;
    break;
  done
}
YELLOW='\033[1;33m'
NOCOLOR='\033[0m'

function run() {
	flex scanner.l && yacc -d parser.y && gcc y.tab.c lex.yy.c -w
	local total_testcases="$1"
	echo "Running: $total_testcases"
	local start=1
	while [ $start -le $total_testcases ]
	do
		printf "\n\n"
		for i in {1..35}
		do
			echo -ne "#"
		done
		echo -ne "  ${WHITE}Running TestCase  $start${NOCOLOR}  "
		for i in {1..35}
		do
			echo -ne "#"
		done


		for i in {1..35}
		do
			echo -ne "#"
		done
		printf "\n"
			spin
		sleep 0.2
		printf "\n"
		local filename="tests/test"$start".c"
		./a.out $filename
		((start++))
			printf "\n"
				printf "\n"
	done
}

number_of_files=`ls -l ./tests/ | egrep -c '^-'`
run $number_of_files
