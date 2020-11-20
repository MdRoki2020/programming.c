#include <stdio.h>
#include <string.h>
int check_vowel(char);

int main()
{
  char s[100], t[100];
  int c, d = 0;

  printf("Enter a string to delete vowels\n");
  gets(s);

  for (c = 0; s[c] != '\0'; c++) {
    if (check_vowel(s[c]) == 0) {
      t[d] = s[c];
      d++;
   }
  }

  t[d] = '\0';

  strcpy(s, t);

  printf("String after deleting vowels: %s\n", s);

  return 0;
}

int check_vowel(char t)
{
  if (t == 'a' || t == 'A' || t == 'e' || t == 'E' || t == 'i' || t == 'I' || t =='o' || t=='O' || t == 'u' || t == 'U')
    return 1;

  return 0;
}
