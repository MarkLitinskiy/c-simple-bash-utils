all: build check

build: s21_grep

s21_grep: s21_grep.c
		gcc -Wall -Werror -Wextra s21_grep.c -o s21_grep

check:
		cp ../../materials/linters/CPPLINT.cfg CPPLINT.cfg
		python3 ../../materials/linters/cpplint.py --extension=c *.c >> styleLog.txt
		rm -rf *.cfg
		sh test_func_grep.sh >> funcLog.txt
		sh test_leak_grep.sh >> leakLog.txt

clean:
		rm ./s21_grep
