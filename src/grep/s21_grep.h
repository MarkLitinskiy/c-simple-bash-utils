#include <getopt.h>
#include <regex.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

struct flags {
  int e;
  int eCount;
  int i;
  int v;
  int c;
  int l;
  int n;
  int filesCount;
  int activationFlags;
  int counterElem;
  int flagEndFile;
  int numberPattern;
  int countSimilar;  // Количество совпадающих строк для флага c
  int flagL;  // Флаг вывода названия файла при активации -l
  int countStr;  // Счётчик строчек в файле
  int flagV;  // Флаг для регулирования инверсии при нескольких шаблонах
  int counterArgumStr;  // счётчик позиции в строке шаблонов
  char eArg[1024];  // Строка шаблонов
};                  // активированные флаги

int parser(int *numb, int argc, char **argv, struct flags *grep, int *error);
int grepOut(int argc, char **argv, struct flags *grep);
int isArgumentE(char *prev);
int isArgumentFlag(char *prev);
void forCL(struct flags *grep, char **argv);
void forRegex(struct flags *grep, char **argv, int n, char *textStr);