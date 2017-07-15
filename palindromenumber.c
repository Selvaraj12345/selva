#include <stdio.h>
int main()
{
int num, rev_num=0, rem,t;
printf("Enter an integer: ");
scanf("%d", &num);
t=num;
while(t!=0)
{
rem=t%10;
rev_num=rev_num*10+rem;
t/=10;
} 
if(rev_num==num) 
printf("%d is a palindrome number",num);
else
printf("%d is not a palindrome number",num);
return 0;
}
