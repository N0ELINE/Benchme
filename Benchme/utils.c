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
 * 
 */
void inverser(int *T, int N) {
    int i, j, temp;
    for (i = 0, j = N - 1; i < j; i++, j--) {
        temp = T[i];
        T[i] = T[j];
        T[j] = temp;
    }
}

float randomeur() {
    float x = ("%d\n", rand() % 50000000);
    x = x / 103.5;
    return x;
}

void afficherTab(float *tab, int n){
    for (int i=0;i<n;i++){
        printf("%f\n",tab[i]);
    }
}

