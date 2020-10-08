/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   triBulle.c
 * @Author: Anthony
 *
 * Created on October 7, 2020, 11:45 AM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * @return fonction du tri par bulle 
 */
void triBulle(float tab[], int tailletab) {
    int i, j, tmp;

    for (i = 0; i < tailletab - 1; i++) {
        for (j = 0; j < tailletab - 1; j++) {
            if (tab[j] > tab[j + 1]) {
                tmp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = tmp;
            }
        }
    }
}


