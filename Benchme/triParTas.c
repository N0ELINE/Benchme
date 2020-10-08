/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   triParTas.c
 * @Author: noeline
 *
 * Created on October 7, 2020, 11:46 AM
 */

#include <stdio.h>
#include <stdlib.h>
#include "utils.h"

/*
 * @param float *tab tableau à trier, int n taille du tableau
 */
void tamiser(float *tab, int n) {

    int i, j, fils, fils2;
    float temp;

    //on range le tableau pour faire un tas
    for (i = 0; i < n / 2; i++) {

        //on calcule la position de la valeur fils
        fils = 2 * i + 1;
        fils2 = 2 * i + 2;

        //on compare la valeur fils et la valeur pere
        if (tab[fils] > tab[i]) {

            j = fils;

            //tant que la valeur fils est plus grande que la valeur pere et valeur pere > 0 on echange
            while (j > 0 && tab[j] > tab[(j - 1) / 2]) {
                temp = tab[j];
                tab[j] = tab[(j - 1) / 2];
                tab[(j - 1) / 2] = temp;

                j = (j - 1) / 2;
            }
        }

        //meme comparaison mais on verifie en plus que la valeur fils de cette position existe
        if (tab[fils2] > tab[i] && fils2 < n) {
            j = fils2 ;
            //tant que la valeur fils est plus grande que la valeur pere et valeur pere > 0 on echange
            while (j > 0 && tab[j] > tab[(j - 1) / 2]) {
                temp = tab[j];
                tab[j] = tab[(j - 1) / 2];
                tab[(j - 1) / 2] = temp;
                j = (j - 1) / 2;
            }
        }

    }
    
}

/*
 * @param float *t tableau à trier, int n taille du tableau
 */
void triParTas(float *tab, int n) {
    tamiser(tab,n);
    
    int i, j, fils, fils2;
    float temp;
    
     //parcours le tableau a l'envers
    for (i = n - 1; i > 0; i--) {
        fils = 2 * i + 1;

        for (j = 0; j < i / 2; j++) {

            int fils2 = 2 * j + 1;

            //on fait remonter la valeur la plus grande en haut de l'arbre
            if (tab[fils2] > tab[j]) {
                temp = tab[j];
                tab[j] = tab[fils2];
                tab[fils2] = temp;
            }
            if (tab[fils2 + 1] > tab[j]) {
                temp = tab[j];
                tab[j] = tab[fils2 + 1];
                tab[fils2 + 1] = temp;
            }
        }

        //on echange la valeur en haut de l'arbre et celle a la position i
        temp = tab[i];
        tab[i] = tab[0];
        tab[0] = temp;

    }
    
    
    
    
}
