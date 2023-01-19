//
// Created by chris on 1/18/23.
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int randchar(){
    int i = rand() % 25;
    char letters[] ="ABCDEFGHIJLKMNOPQRSTUVWXYZ";
    return letters[i];

    /*
    srand((unsigned) time(&t));

    for(i=0; i<1; i++){
        return ("%d\n", rand() % 25);
    }
     */
}