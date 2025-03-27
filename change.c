#include <stdio.h>


int calculate_change(int amount_paid, int total_cost) {
   if (amount_paid < total_cost) {
       printf("Insufficient amount paid.\n");
       return -1; // Indicate an error
   }


   int change = amount_paid - total_cost;
   int quarters = change / 25;
   change %= 25;
   int dimes = change / 10;
   change %= 10;
   int nickels = change / 5;
   change %= 5;
   int pennies = change / 1;
   change %= 1;


   printf("Change:\n");
   printf("Quarters: %d\n", quarters);
   printf("Dimes: %d\n", dimes);
   printf("Nickels: %d\n", nickels);
   printf("Pennies: %d\n", pennies);


   return 0;
}


int main(void) {
   int amount_paid = 100;
   int total_cost = 75;  


   calculate_change(amount_paid, total_cost);
  
   return 0;
}
  


