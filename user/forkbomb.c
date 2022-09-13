#include "kernel/types.h"
#include "user/user.h"

int main() {
  static int a = 0;
  while (1) {
    if (fork() == 0) {
      fprintf(2, "%d\n", a);
      sleep(1);
      return 0;
    }
  }
  return 0;
}
