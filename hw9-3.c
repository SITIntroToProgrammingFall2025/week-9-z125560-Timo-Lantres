/*
Lantrès Timo
Student ID: z125560
Lesson Number: 9
Date: 03/12/2025
*/

# include <stdio.h>

int main(void)
{
    float a[2][3], b[3][2], c[2][2] ;
    int i, j, k ;

    for(i = 0 ; i < 2 ; i++)
    {
        for (j = 0 ; j < 3 ; j++)
        {
            //printf("Enter the element in [%d][%d]: ", i, j) ;
            scanf("%.f", &a[i][j]) ;
        }
    }

    for(i = 0 ; i < 3 ; i++)
    {
        for (j = 0 ; j < 2 ; j++)
        {
            //printf("Enter the element in [%d][%d]: ", i, j) ;
            scanf("%.f", &b[i][j]) ;
        }
    }

    printf("The first matrix you entered is\n") ;

    for(i = 0 ; i < 2 ; i++)
    {
        for(j = 0 ; j < 3 ; j++)
        {
            printf("%.f ", a[i][j]) ;
        }
        printf("\n") ;
    }

    printf("The second matrix you entered is\n") ;

    for(i = 0 ; i < 3 ; i++)
    {
        for(j = 0 ; j < 2 ; j++)
        {
            printf("%.f ", b[i][j]) ;
        }
        printf("\n") ;
    }

    for(i = 0 ; i < 2 ; i++)
    {
        for(j = 0 ; j < 2 ; j++)
        {
            c[i][j] = 0 ;
            for(k = 0 ; k < 3 ; k++)
            {
                c[i][j] += a[i][k] * b[k][j] ;
            }
        }
    }

    printf("The multiplication product of matrix A and matrix B:\n") ;

    for(i = 0 ; i < 2 ; i++)
    {
        for(j = 0 ; j < 2 ; j++)
        {
            printf("%.f ", c[i][j]) ;
        }
        printf("\n") ;
    }

    return 0 ;
}
