/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: student
 *
 * Created on October 8, 2020, 8:25 AM
 */

#include <stdio.h>
#include <stdlib.h>
#include "triParTas.h"
#include "triSelection.h"
#include "utils.h"

/*
 * 
 */



int main(int argc, char** argv) {
    //génération tableau aléatoire
    float tableauSelection100[100];
    for (int i=0;i<100;i++){
        tableauSelection100[i]=randomeur();
    }
    //test triSelection avec un tableau de 100 valeurs
    triSelection(tableauSelection100,100);
    //Affichage su retultat
    afficherTab(tableauSelection100,100);
    
    return (EXIT_SUCCESS);
}

