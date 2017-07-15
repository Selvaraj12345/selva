#include<stdio.h>
#include<conio.h>
#include<math.h>
void prime(int n);
void main()
{
  int num;
  printf("\n Enter a number:");
  scanf("%d",&n);
  prime(n);
  getch();
} 
void prime(int n)
{
  for(int i=2; i<=sqrt(n);i++)
  {
    if(num%i==0)
    break;
  }
  if(i>sqrt(n))
    printf("\n %d is prime number",n);
  else
    printf("\n %d is not prime number",n);
}
