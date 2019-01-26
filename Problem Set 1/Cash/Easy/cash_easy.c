#include <stdio.h>
#include <cs50.h>

int main(void) {
  float dollars_owned;
  int cents_owed;
  do {
    dollars_owned = get_float("Change owed: ");
    cents_owed = round(dollars_owned * 100);
  } while (cents_owed <= 0);

  int quarters = cents_owed / 25;
  int dims = (cents_owed % 25) / 10;
  int nickels = ((cents_owed % 25) % 10) / 5;
  int pennies = (((cents_owed % 25) % 10)) % 5;
  printf("%d\n", quarters + dims + nickels + pennies);
}
