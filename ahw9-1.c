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
    int a[3] ;
    int colorname[5][3] = {{0, 0, 0}, {255, 0, 0}, {0, 255, 0}, {0, 0, 255}, {255, 255, 255}} ;
    double d, min ;
    int i, j ;
    int nearest = 0 ;

    for (i = 0 ; i < 3 ; i++)
    {
        scanf("%d", &a[i]) ;
    }

    min = sqrt(
               pow((a[0] - colorname[0][0]), 2) +
               pow((a[1] - colorname[1][1]), 2) +
               pow((a[2] - colorname[2][2]), 2)
               ) ;

    nearest = 0 ;


    for (j = 1 ; j < 5 ; j++)
    {
        d = sqrt(
                 pow((a[0] - colorname[j][0]), 2) +
                 pow((a[1] - colorname[j][1]), 2) +
                 pow((a[2] - colorname[j][2]), 2)
                 ) ;

        if(d < min)
        {
            min = d ;
            nearest = j ;
        }
    }

    printf("\n") ;

    if (nearest == 0)
        printf("The nearest color is Black\n") ;
    else if (nearest == 1)
        printf("The nearest color is Red\n") ;
    else if (nearest == 2)
        printf("The nearest color is Green\n") ;
    else if (nearest == 3)
        printf("The nearest color is Blue\n") ;
    else if (nearest == 4)
        printf("The nearest color is White\n") ;


    return 0 ;
}


