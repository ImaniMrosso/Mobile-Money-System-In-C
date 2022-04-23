#include <stdio.h>
#include <stdlib.h>


#include "menu.h"

#include "authentication.h"

#include "financialservice.h"

#include "borrowing.h"


void home(int phone){


     printf("\n\n ===== !C PROGRAMMING BANKING SYSTEM! - HOMEPAGE ===== \n\n");

     puts(" 1. FINANCIAL SERVICES");

     puts(" 2. REQUEST MONEY");

     puts(" 3. DEPOSIT");

     puts(" 4. WITHDRAW");

     puts(" 5. SEND MONEY");

     puts(" 6. BORROWING");

     puts(" 6. TRANSACTIONS");

     puts(" 7. MY ACCOUNT\n");

     puts(" 99. LOG OUT");


     int choice = UserChoice();


     switch (choice) {
               case 1:
                    return FPanel();
                    break;
               case 6:
                    return BPanel(phone);
                    break;
               default:
                    puts("\n\n ----- ERROR :: SELECT WITH THE RANGE ----- ");
                    return home(phone);
                    break;
               }

}





