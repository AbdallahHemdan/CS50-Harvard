#include <stdio.h>
#include <cs50.h>

void Mario_Show(int heigth) {
  for (int i = 0; i < heigth; i++) {
    for (int j = 0; j < heigth - i - 1; j++) {
      printf("");
    }
    for (int k = 0; k < i + 1; k++) {
      printf("#");
    }
    printf("\n");
  }
}
int main() {
  int heigth;
  do {
    heigth = get_int("Height: ");
  } while (heigth < 1 || heigth > 8);
  Show_Sol(heigth);
}
