/*
Lantrès Timo
Student ID: z125560
Lesson Number: 9
Date: 03/12/2025
*/

# include <stdio.h>

int main(void)
{
    int a[3][3], b[3][3] ;
    int i, j ;

    for(i = 0 ; i < 3 ; i++)
    {
        for (j = 0 ; j < 3 ; j++)
        {
            //printf("Enter the element in [%d][%d]: ", i, j) ;
            scanf("%d", &a[i][j]) ;
        }
    }

    printf("You entered\n") ;

    for(i = 0 ; i < 3 ; i++)
    {
        for(j = 0 ; j < 3 ; j++)
        {
            printf("%d ", a[i][j]) ;
        }
        printf("\n") ;
    }

    printf("Output\n") ;
    for(i = 0 ; i < 3 ; i++)
    {
        b[i][0] = a[i][2] ;
        b[i][1] = a[i][1] ;
        b[i][2] = a[i][0] ;

        for(j = 0 ; j < 3 ; j++)
        {
            printf("%d ", b[i][j]) ;
        }
        printf("\n") ;
    }
    return 0 ;
}


