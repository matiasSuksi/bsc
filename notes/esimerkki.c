

#include <stdio.h>
#include <stdlib.h>

int i;                                             //Alustamaton muuttuja --> alustamaton data
int n = 1;                                         //Alustettu muuttuja --> alustettu data

int main(void)                                     //Funktiokutsu --> Pino
{  
    int numero = 10;                               //Paikallinen muuttuja --> Pino
    int* osoitin = (int*)malloc(n * sizeof(int));  //Dynaamisesti allokoitu muistilohko --> Keko
    free(osoitin);                                 //Dynaamisesti vapautettu muistilohko --> Vapautettu keosta
    return 0;
}