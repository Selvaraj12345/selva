#include <stdio.h>
int power(int n1, int n2);
int main()
{
int b, p, result;
printf("Enter base number: ");
scanf("%d",&b);
printf("Enter power number(positive integer): ");
scanf("%d",&p);
result = power(b, p);
printf("%d^%d = %d", b, p, result);
return 0;
}
int power(int b, int p)
{
if (p != 0)
return (b*power(b, p-1));
else
return 1;
}
