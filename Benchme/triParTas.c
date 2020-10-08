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
 * @param float *t tableau à trier, int k noeud de travail, int n taille du tableau
 */
void tamiser(float *t, int k, int n) {

    int j = 2 * k;
    float temp;

    while (j <= n) {
        if (j < n && t[j] < t[j + 1]) {
            j++;
        }
        if (t[k] < t[j]) {
            temp = t[k];
            t[k] = t[j];
            t[j] = temp;
            k = j;
            j = 2 * k;
        } else {
            j = n + 1;
        }
        for (int i = 0; i < 4; i++) {
            printf(" %f ", t[i]);
           
        }
         printf("\n");
    }
}

/*
 * @param float *t tableau à trier, int n taille du tableau
 */
void triParTas(float *t, int n) {

    for (int i = 0; i < n/2; i++) {
        tamiser(t, i, n);
    }
//    for (int i = n; i >= 2; i--) {
//        int temp = t[1];
//        t[1] = t[i];
//        t[i] = temp;
//        tamiser(t, 1, i - 1);
//    }
}
