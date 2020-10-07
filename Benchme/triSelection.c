/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   triSelection.c
 * Author: student
 *
 * Created on October 7, 2020, 11:45 AM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    float tableau[]=[10,23,505,8];
    int newtab = selection(tableau, 4);  
    for (int i = 0; i < 4; i++) {
        printf("\n%d\n", newtab[i]);
    }

    float tableau[]=[25,52,36,1,2,4];
    int newtab = selection(tableau, 6);
    for (int i = 0; i < 6; i++) {
        printf("\n%d\n", newtab[i]);
    }
    
    float tableau[]=[2,5,32,8,1,65];
    int newtab = selection(tableau, 6);
    for (int i = 0; i < 6; i++) {
        printf("\n%d\n", newtab[i]);
    }
    
    return (EXIT_SUCCESS);
}

/*
 *
 */
float *selection(float *t, int taille) {
    int i, mini, j, x;

    for (i = 0; i < taille - 1; i++) {
        mini = i;
        for (j = i + 1; j < taille; j++) {
            if (t[j] < t[mini]) {
                mini = j;
            }
        }

        x = t[i];
        t[i] = t[mini];
        t[mini] = x;
    }
    for (int i = 0; i < 5; i++) {
        printf("\n%d\n", t[i]);
    }
    return t;
}
