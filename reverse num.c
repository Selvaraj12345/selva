#include<stdio.h>
void main()
{
int num,sum=0,rem;
while(num>0)
{
rem=num%10;
sum=sum*10+rem;
num=num/10;
}
printf("%d",sum);
}
