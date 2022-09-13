#include "kernel/types.h"
#include "user/user.h"

const int N = 20;
int main() {
  int k = getmem();
  fprintf(1, "Memory Free: %d bytes, %d KB, %d MB\n", k, k / 1024,
          k / 1024 / 1024);
  return 0;
}
