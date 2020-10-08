/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   triInsertion.c
 * Author: student
 **@author
 * Created on October 7, 2020, 11:45 AM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
void triInsertion(float tab[],int n)
{
    int i,j;
    float x;
    
    for (i=1; i <= n-1;i++)
    {
        x = tab[i];
        j=i;
        while (j>0 && tab[j-1]>x)
        {
            tab[j] = tab[j-1];
            j = j-1;  
        }
        tab[j]=x;
    }
}

//int main(int argc, char** argv) {
//int tailletab = 0,i = 0;
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
//    return (EXIT_SUCCESS);
//}

