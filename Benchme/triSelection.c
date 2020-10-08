/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   triSelection.c
 * @Author: noeline
 *
 * Created on October 7, 2020, 11:45 AM
 */

#include <stdio.h>
#include <stdlib.h>
#include "utils.h"

/*
 * @param float *t tableau à trier, int n taille du tableau
 */
void triSelection(float *t, int n) {
    int i, mini, j, temp;

    for (i = 0; i < n - 1; i++) {
        mini = i;
        for (j = i; j < n; j++) {
            if (t[j] < t[mini]) {
                mini = j;
            }
        }
        temp = t[i];
        t[i] = t[mini];
        t[mini] = temp;
    }
}
