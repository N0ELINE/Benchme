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

int main(int argc, char** argv) {

    char chemincsv[500];
    printf("veuillez entrer le lien du fichier resultat.csv");
    if (scanf("%254s", chemincsv) != 1) {
        printf("Erreur lors de la saisie\n");
        return EXIT_FAILURE;
    }
    FILE* fichier = NULL;
    fichier = fopen(strcat("resultat.csv", chemincsv), "w+");
    fprintf(fichier, "%s,%f,%f,%f", "TypeTri",100,1000,10000);
    
    
    int timeSelec1 = 0;
    float tableauSelection100[100];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 100; j++) {
            tableauSelection100[i] = randomeur();
        }
        triSelection(tableauSelection100, 100);
    }
    timeSelec1 = clock() / 3;

    int timeSelec2 = 0;
    float tableauSelection1000[1000];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 100; j++) {
            tableauSelection1000[i] = randomeur();
        }
        triSelection(tableauSelection1000, 1000);
    }
    timeSelec2 = clock() / 3;

    int timeSelec3 = 0;
    float tableauSelection10000[10000];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 100; j++) {
            tableauSelection10000[i] = randomeur();
        }
        triSelection(tableauSelection10000, 10000);
    }
    timeSelec3 = clock() / 3;

    fprintf(fichier, "%s,%f,%f,%f", "triSelection",timeSelec1,timeSelec2,timeSelec3);



    int timeTas1 = clock();
    float tableauTas100[100];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 100; j++) {
            tableauTas100[j] = randomeur();
        }
        triParTas(tableauTas100, 100);
    }
    timeTas1 = clock() / 3;

    int timeTas2 = clock();
    float tableauTas1000[1000];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 1000; j++) {
            tableauTas1000[j] = randomeur();
        }
        triParTas(tableauTas1000, 1000);
    }
    timeTas2 = clock() / 3;

    int timeTas3 = clock();
    float tableauTas10000[10000];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 10000; j++) {
            tableauTas10000[i] = randomeur();
        }
        triParTas(tableauTas10000, 10000);
    }
    timeTas3 = clock() / 3;

    fprintf(fichier, "%s,%f,%f,%f", "triTas",timeTas1,timeTas2,timeTas3);
    
    
    return (EXIT_SUCCESS);
}
