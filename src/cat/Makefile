all: build check

build: s21_cat

s21_cat: s21_cat.c
		gcc -Wall -Werror -Wextra s21_cat.c -o s21_cat

check:
		cp ../../materials/linters/CPPLINT.cfg CPPLINT.cfg
		python3 ../../materials/linters/cpplint.py --extension=c *.c >> styleLog.txt
		rm -rf *.cfg
		sh test_func_cat.sh >> funcLog.txt
		sh test_leak_cat.sh >> leakLog.txt

clean:
		rm ./s21_cat
