/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   newmain.c
 * Author: student
 *
 * Created on October 8, 2020, 8:32 AM
 */

#include <stdio.h>
#include <stdlib.h>
#include "triBulle.h"
#include "triInsertion.h"

/*
 * 
 */

int main(int argc, char** argv) {

    int tailleTab = 4;
    int i = 0;
    float tab[] = {5, 6, 4, 1.245};
    triBulle(tab, tailleTab);
    for (i = 0; i < tailleTab; i++) {
        printf("%f\n", tab[i]);
    }

    //    for (i = 0; i < tailletab; ++i) {
    //        float tab = 0;
    //        printf("Combien de tab avez vous?");
    //        scanf("%d", &tailletab);

    //        if (tailletab > 0) 
    //    {
    //        tab = malloc(tailletab * sizeof(int)); 
    //        if (tab == NULL) 
    //        {
    //            exit(0); 
    //        }
    //        
    //        for (i = 0; i < tailletab; i++) {
    //            printf("Quel est la tab numero %d ? ", i + 1);
    //        }
    //        triBulle(tab, tailletab);
    //        printf("\n\n Voici les tabs triées dans l'ordre croissant:\n");
    //        for (i = 0; i < tailletab; i++) {
    //            printf("%f",tab[i]);
    //        }
    //
    //        
    //}
}



//    
//    
//    int tailletab = 0,i = 0;
//    for (i=0; i < tailletab; ++i)
//   {
//      
//    float* tab = NULL;
//    void tri = 0;
//    printf("Combien de tab avez vous?");
//    scanf("%f", &tailletab);
//
//    if (tailletab > 0) 
//    {
//        tab = malloc(tailletab * sizeof(int)); 
//        if (tab == NULL) 
//        {
//            exit(0); 
//        }
//        
//        for (i = 0 ; i < tailletab ; i++)
//        {
//            printf("Quel est la tab numero %f ? ", i + 1);
//            scanf("%f", &tab[i]);
//        }
//        tri = triInsert(tab,tailletab);
//        printf("\n\n Voici les tabs triées dans l'ordre croissant:\n");
//        for (i = 0 ; i < tailletab ; i++)
//        {
//            printf("%f ans\n", tab[i]);
//        }
//
//        free(tab);
//    }
//   }
//    
//    return (EXIT_SUCCESS);
//}

