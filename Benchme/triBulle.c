/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   triBulle.c
 * Author: student
 *
 * Created on October 7, 2020, 11:45 AM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
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
//int main(int argc, char** argv) {
//    int tailletab = 0,i = 0;
//    for (i=0; i < tailletab; ++i)
//   {
//      
//    float * valeur = NULL;
//    float tri = 0;
//    printf("Combien de valeur avez vous?");
//    scanf("%f", &tailletab);
//
//    if (tailletab > 0) 
//    {
//        valeur = malloc(tailletab * sizeof(int)); 
//        if (valeur == NULL) 
//        {
//            exit(0); 
//        }
//        
//        for (i = 0 ; i < tailletab ; i++)
//        {
//            printf("Quel est la valeur numero %f ? ", i + 1);
//            scanf("%f", &valeur[i]);
//        }
//        tri = triBulle(valeur,tailletab);
//        printf("\n\n Voici les valeurs triées dans l'ordre croissant:\n");
//        for (i = 0 ; i < tailletab ; i++)
//        {
//            printf("%f ans\n", valeur[i]);
//        }
//
//        free(valeur);
//    }
//   }
//    return (EXIT_SUCCESS);
//}

