#include <stdio.h>
void main()
{
    int number, a, sum = 0;
    
    printf("Enter a positive integer: ");
    scanf("%d",&number);

    for(a=1; a <= number; a++)
    {
        sum =sum+a;   
    }

    printf("Sum Of N = %d",sum);

  }
