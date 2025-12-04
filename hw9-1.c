/*
Lantrès Timo
Student ID: z125560
Lesson Number: 9
Date: 03/12/2025
*/

# include <stdio.h>

int main(void)
{
    int a[2][2] ;
    int i, j ;
    double det ;

    for(i = 0 ; i < 2 ; i++)
    {
        for (j = 0 ; j < 2 ; j++)
        {
            //printf("Enter the element in [%d][%d]: ", i, j) ;
            scanf("%d", &a[i][j]) ;
        }
    }

    printf("You entered\n") ;

    for(i = 0 ; i < 2 ; i++)
    {
        for(j = 0 ; j < 2 ; j++)
        {
            printf("%d ", a[i][j]) ;
        }
        printf("\n") ;
    }

    det = a[0][0] * a[1][1] - a[1][0] * a[0][1] ;

    printf("Determinant is %f", det) ;

    return 0 ;

}


