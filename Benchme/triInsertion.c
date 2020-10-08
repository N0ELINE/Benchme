
/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   triInsertion.c
 * Author: student
 * @author: Anthony
 * Created on October 7, 2020, 11:45 AM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * @return fonction tri par insertion
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
