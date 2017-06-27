#include <stdio.h>
 
int main()
{
  char chr;
 
  printf("Enter a character\n");
  scanf("%c", &chr);
 
  if (chr == 'a' || chr == 'A' || chr == 'e' || chr == 'E' || chr == 'i' || chr == 'I' || chr =='o' || chr=='O' || chr == 'u' || chr == 'U')
    printf("%c is a vowel.\n", chr);
  else
    printf("%c is not a vowel.\n", chr);
 
  return 0;
}
