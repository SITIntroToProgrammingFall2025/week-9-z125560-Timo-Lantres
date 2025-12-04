/*
Lantrès Timo
Student ID: z125560
Lesson Number: 9
Date: 03/12/2025
*/

# include <stdio.h>
# include <math.h>

int main(void)
{
    int i, j, temp ;

    int a[5] ;

    for (i = 0 ; i < 5 ; i++)
    {
        scanf("%d", &a[i]) ;
    }

    for (i = 0 ; i < 4 ; i++)
    {
        for (j = 0 ; j < 4 ; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j] ;
                a[j] = a[j + 1] ;
                a[j + 1] = temp ;
            }
        }
    }

    printf("sorted array:\n") ;
    for (i = 0 ; i < 5 ; i++)
    {
        printf("%d ", a[i]) ;
    }

    return 0 ;
}



