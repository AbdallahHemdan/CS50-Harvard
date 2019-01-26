#include <stdio.h>
#include <cs50.h>
/*
Example : 

Height: 8
       #
      ##
     ###
    ####
   #####
  ######
 #######
########
  */
/*
Take Care about The User bad input
Height: -1
Height: 0
Height: 42
Height: 50
Height: 4
   #
  ##
 ###
####
  */
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
