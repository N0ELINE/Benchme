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
#include "triBulle.h"
#include "triInsertion.h"
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
    fprintf(fichier, "%s,%f,%f,%f", "TypeTri", 100, 1000, 10000);

    float tab1[100];
    for (int j = 0; j < 100; j++) {
        tab1[100] = randomeur();
    }

    float tab2[1000];
    for (int j = 0; j < 1000; j++) {
        tab2[1000] = randomeur();
    }

    float tab3[10000];
    for (int j = 0; j < 10000; j++) {
        tab3[10000] = randomeur();
    }


    int timeSelec1 = 0;
    float tableauSelection100[100];
    for (int i = 0; i < 3; i++) {
        float tab1b[100] = tab1;
        triSelection(tableauSelection100, 100);
    }
    timeSelec1 = clock() / 3;

    int timeSelec2 = 0;
    float tableauSelection1000[1000];
    for (int i = 0; i < 3; i++) {
        float tab2b[1000] = tab2;
        triSelection(tableauSelection1000, 1000);
    }
    timeSelec2 = clock() / 3;

    int timeSelec3 = 0;
    float tableauSelection10000[10000];
    for (int i = 0; i < 3; i++) {
        float tab3b[10000] = tab3;
        triSelection(tableauSelection10000, 10000);
    }
    timeSelec3 = clock() / 3;

    fprintf(fichier, "%s,%f,%f,%f", "triSelection", timeSelec1, timeSelec2, timeSelec3);



    int timeTas1 = clock();
    float tableauTas100[100];
    for (int i = 0; i < 3; i++) {
        float tab1b[10000] = tab1;
        triParTas(tableauTas100, 100);
    }
    timeTas1 = clock() / 3;

    int timeTas2 = clock();
    float tableauTas1000[1000];
    for (int i = 0; i < 3; i++) {
        float tab2b[10000] = tab2;
        triParTas(tableauTas1000, 1000);
    }
    timeTas2 = clock() / 3;

    int timeTas3 = clock();
    float tableauTas10000[10000];
    for (int i = 0; i < 3; i++) {
        float tab3b[10000] = tab3;
        triParTas(tableauTas10000, 10000);
    }
    timeTas3 = clock() / 3;

    fprintf(fichier, "%s,%f,%f,%f", "triTas", timeTas1, timeTas2, timeTas3);



    int timeInsert1 = clock();
    float tableauInsert100[100];
    for (int i = 0; i < 3; i++) {
        float tab1b[10000] = tab1;
        triInsertion(tableauInsert100, 100);
    }
    timeInsert1 = clock() / 3;

    int timeInsert2 = clock();
    float tableauInsert1000[1000];
    for (int i = 0; i < 3; i++) {
        float tab2b[10000] = tab2;
        triInsertion(tableauInsert1000, 1000);
    }
    timeInsert2 = clock() / 3;

    int timeInsert3 = clock();
    float tableauInsert10000[10000];
    for (int i = 0; i < 3; i++) {
        float tab3b[10000] = tab3;
        triInsertion(tableauInsert10000, 10000);
    }
    timeInsert3 = clock() / 3;

    fprintf(fichier, "%s,%f,%f,%f", "triInsert", timeInsert1, timeInsert2, timeInsert3);
    
    
    
    
    
    int timeBulle1 = clock();
    float tableauBulle100[100];
    for (int i = 0; i < 3; i++) {
        float tab1b[10000] = tab1;
        triBulle(tableauBulle100, 100);
    }
    timeBulle1 = clock() / 3;

    int timeBulle2 = clock();
    float tableauBulle1000[1000];
    for (int i = 0; i < 3; i++) {
        float tab2b[10000] = tab2;
        triBulle(tableauBulle1000, 1000);
    }
    timeBulle2 = clock() / 3;

    int timeBulle3 = clock();
    float tableauBulle10000[10000];
    for (int i = 0; i < 3; i++) {
        float tab3b[10000] = tab3;
        triBulle(tableauBulle10000, 10000);
    }
    timeBulle3 = clock() / 3;

    fprintf(fichier, "%s,%f,%f,%f", "triBulle", timeBulle1, timeBulle2, timeBulle3);


    return (EXIT_SUCCESS);
}
