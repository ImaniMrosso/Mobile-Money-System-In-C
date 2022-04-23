#include <stdio.h>
#include <stdlib.h>
#include <sqlite3.h>
#include <string.h>

#include "hasher.h"


void hashpin(int pin){

     printf("PRIN HASH THE PIN %i", pin);

     BackendPinHasher(pin);





}




void BackendPinHasher(int pin){

     unsigned long
     hash (unsigned char *str){

          unsigned long hash = pin;
          int c;

          while(c = *str++)
               hash =  ((hash << 5) + hash) + c;

          return hash;

     }

     printf("Do wather i want %i", hash);

}






