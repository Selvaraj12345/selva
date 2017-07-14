#include <stdio.h>
int main()
{
   int num;
    int c = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    while(num != 0)
    {
        n /= 10;
        ++c;
    }

    printf("Number of digits: %d", c);
}
