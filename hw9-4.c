/*
Lantrès Timo
Student ID: z125560
Lesson Number: 9
Date: 03/12/2025
*/

#include <stdio.h>

int main(void)
{
    int a[3] ;
    char RGB[16] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'} ;
    char R1, R2, G1, G2, B1, B2 ;
    int i ;

    for(i = 0 ; i < 3 ; i++)
    {
        scanf("%d", &a[i]) ;
    }

    R1 = RGB[a[0] / 16] ;
    R2 = RGB[a[0] % 16] ;

    G1 = RGB[a[1] / 16] ;
    G2 = RGB[a[1] % 16] ;

    B1 = RGB[a[2] / 16] ;
    B2 = RGB[a[2] % 16] ;

    printf("The hex code is #%c%c%c%c%c%c\n", R1, R2, G1, G2, B1, B2) ;

    return 0 ;
}


