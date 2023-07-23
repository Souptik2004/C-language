
#include<stdio.h>

struct employee {
  int code;
  char gender;
  char name[20];
  int salary;
};

int main() {
  struct employee a = {
    .code = 1,
    .gender = 'M',
    .name = "souptik",
    .salary = 10000,
  };

  struct employee b = {
    .code = 2,
    .gender = 'M',
    .name = "sopik",
    .salary = 20000,
  };

  struct employee c = {
    .code = 3,
    .gender = 'M',
    .name = "soutik",
    .salary = 30000,
  };

  for (struct employee e = a; e != c; e++) {
    printf("%s\n", e.name);
    printf("%c\n", e.gender);
    printf("%d\n", e.code);
    printf("%d\n", e.salary);
  }

  return 0;
}