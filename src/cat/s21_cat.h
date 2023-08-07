#include <getopt.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

struct flags {
  int b;
  int e;
  int n;
  int s;
  int t;
  int v;
  int E;
  int T;
};  // активированные флаги

int parser(int *numb, int argc, char **argv, struct flags *cat, int *error);
int catOut(int argc, char **argv, struct flags *cat);
void catN(char currentPrev, int counterStr, int flag);
void catB(char current, char currentPrev, int counterStr, int flag);
void catS(char current, char currentPrev);
void catE(char current);
void unvisibleSym(char current);