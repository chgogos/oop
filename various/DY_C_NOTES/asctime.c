#include <stdio.h>
#include <time.h>

int main() {
  struct tm t;
  t.tm_sec = 10;
  t.tm_min = 10;
  t.tm_hour = 6;
  t.tm_mday = 25;
  t.tm_mon = 2;
  t.tm_year = 89;
  t.tm_wday = 6;

  struct tm t2=t;
  t.tm_year=100;
  char *date1 = asctime(&t);
  char *date2 = asctime(&t2); // date1 and date2 pointers will point to one place
  printf("date1: %s\n", date1);
  printf("date2: %s\n", date2);
}

/*
date1: Sat Mar 25 06:10:10 1989

date2: Sat Mar 25 06:10:10 1989
*/