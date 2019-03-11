//
//  main.c
//  esercizio 1 - lettera minuscola
//
//  Created by Roberto Vecchio on 06/03/2019.
//  Copyright © 2019 Roberto Vecchio. All rights reserved.
//

#include <stdio.h>

#define POT 32

char low_upp(char);
char upper(char);

int main(int argc, const char * argv[]) {
    char lettera;
    
    printf("Inserisci la lettera maiuscola che vuoi cambiare: ");
    scanf("%c", &lettera);
    
    lettera = low_upp(lettera);
    printf("la lettera in minuscolo e':  %c\n\n", lettera);
    
    lettera = upper(lettera);
    printf("la lettera in maiuscolo e': %c\n\n", lettera);
    
    return 0;
}

char low_upp(char lettera){
    lettera = lettera | POT;
    
    return lettera;
}

char upper(char lettera){
    lettera = lettera ^ POT;
    return lettera;
}
