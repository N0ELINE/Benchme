/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * @Author: noeline
 *
 * Created on October 8, 2020, 8:25 AM
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "triParTas.h"
#include "triSelection.h"
#include "utils.h"

/*
 * @return moyenne des temps dexecution des 3 tests pour le tri par selection
 */
int testSelec() {
    int timeSelec1 = 0;
    float tableauSelection100[100];
    for (int i=0;i<100;i++){
        tableauSelection100[i]=randomeur();
    }
    triSelection(tableauSelection100,100);
    timeSelec1 = clock();
    
    int timeSelec2 = 0;
    float tableauSelection1000[1000];
    for (int i=0;i<1000;i++){
        tableauSelection1000[i]=randomeur();
    }
    triSelection(tableauSelection1000,1000);
    timeSelec2 = clock();
    
    int timeSelec3 = 0;
    float tableauSelection10000[10000];
    for (int i=0;i<10000;i++){
        tableauSelection10000[i]=randomeur();
    }
    triSelection(tableauSelection10000,10000);
    timeSelec3 = clock();
    
    float moyenneSelec = (timeSelec1+timeSelec2+timeSelec3)/3;
    return moyenneSelec;
}

/*
 * @return moyenne des temps dexecution des 3 tests pour le tri par selection
 */
int testTas() {
    int timeTas1 = clock();
    float tableauTas100[100];
    for (int i=0;i<100;i++){
        tableauTas100[i]=randomeur();
    }
    triParTas(tableauTas100,100);
    timeTas1= clock();
    
    int timeTas2 = clock();
    float tableauTas1000[1000];
    for (int i=0;i<1000;i++){
        tableauTas1000[i]=randomeur();
    }
    triParTas(tableauTas1000,1000);
    timeTas2= clock();
    
    int timeTas3 = clock();
    float tableauTas10000[10000];
    for (int i=0;i<10000;i++){
        tableauTas10000[i]=randomeur();
    }
    triParTas(tableauTas10000,10000);
    timeTas3= clock();
    
    float moyenneTas = (timeTas1+timeTas2+timeTas3)/3;
}

int main(int argc, char** argv) {
    
    int tempsSelec = testSelec();
    int tempsTas = testTas();
    
    return (EXIT_SUCCESS);
}
