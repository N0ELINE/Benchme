/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   inverser.c
 * Author: student
 *
 * Created on October 8, 2020, 10:44 AM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Inversion d'un tableau
 * @param t tableau à inverser, n taille du tableau à inverser
 */
void inverser(int *t, int n) {
    int i, j, temp;
    for (i = 0, j = n - 1; i < j; i++, j--) {
        temp = t[i];
        t[i] = t[j];
        t[j] = temp;
    }
}

/*
 * Generation d'un float aléatoire
 * @return float aléatoire
 */
float randomeur() {
    float x = ("%d\n", rand() % 50000000);
    x = x / 103.53;
    return x;
}

/*
 * Affichage d'un tableau
 * @param t tableau à inverser, n taille du tableau à inverser
 */
void afficherTab(float *tab, int n){
    for (int i=0;i<n;i++){
        printf("%f\n",tab[i]);
    }
}

