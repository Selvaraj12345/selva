#include<stdio.h>
main()
{
int a,b,c;
printf("Enter the value of a,b,c\n");
scanf("%d%d%d",&a,&b,&c);
if((a>c)&&(a>b))
printf("a is bigger");
elseif(b>c)
printf("B is bigger");
else
printf("C is bigger");
}
