/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   triParTas.c
 * Author: student
 *
 * Created on October 7, 2020, 11:46 AM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    float tableau[] = [10, 23, 505, 8];
    int newtab = triParTas(tableau, 4);
    for (int i = 0; i < 4; i++) {
        printf("\n%d\n", newtab[i]);
    }

    float tableau[] = [25, 52, 36, 1, 2, 4];
    int newtab = triParTas(tableau, 6);
    for (int i = 0; i < 6; i++) {
        printf("\n%d\n", newtab[i]);
    }

    float tableau[] = [2, 5, 32, 8, 1, 65];
    int newtab = triParTas(tableau, 6);
    for (int i = 0; i < 6; i++) {
        printf("\n%d\n", newtab[i]);
    }



    return (EXIT_SUCCESS);
}

float *tamiser(float *t, int noeud, int n) {

    int k = noeud;
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
        return t;
    }
}

float *triParTas(float *t, int n) {

    int temp;
    for (int i = n / 2; i < 1; i--) {
        t = tamiser(t, i, n);
    }
    for (int i = n; i < 1; i--) {
        temp = t[1];
        t[1] = t[i];
        t[i] = temp;
        t = tamiser(t, 1, i - 1);
    }
    return t;
}
