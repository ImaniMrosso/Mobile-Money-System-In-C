#include <stdio.h>
#include <stdlib.h>

#include "financialservice.h"

#include "menu.h"

#include "authentication.h"


void FPanel(){

     printf("\n\n ===== !C PROGRAMMING BANKING SYSTEM! - FINANCIAL SERVICES ===== \n\n");

     puts("1. LOANS");

     puts("2. ATM CASH-OUT");

     puts("3. SAVING");

     puts("4. VISA CARD\n");

     puts("99. GO-TO MAIN MENU");


     int choice = UserChoice();

     switch (choice) {
               case 1:
                    return Loan();
                    break;
               case 2:
                    return ATMCashOut();
                    break;
               case 3:
                    return Saving();
                    break;
               case 4:
                    return VisaCard();
                    break;

               case 99:
                    return home();
                    break;

               default:
                    puts("\n\n ----- ERROR :: SELECT WITH THE RANGE ----- ");
                    return FPanel();
                    break;
               }




}


void Loan(){

     printf("LOAN ----");

}



void ATMCashOut(){

     printf("ATM CASH AOUT");
}


void Saving(){
     printf("SAVINGD");
}


void VisaCard(){
     printf("VISA CARD");

}

