#include <stdio.h>

int main() {
  char str[100], ch;
  int first_occurrence = -1, last_occurrence = -1;
  int i = 0, c;

  printf("Enter a string (maximum 99 characters): ");

  // Read characters one by one using getchar()
  while ((c = getchar()) != '\n' && i < 99) {
    str[i++] = c;
  }

  // Add null terminator manually
  str[i] = '\0';

  printf("Enter the character to search: ");
  scanf(" %c", &ch);

  // Iterate through the string
  for (i = 0; str[i] != '\0'; i++) {
    if (str[i] == ch) {
      if (first_occurrence == -1) {
        first_occurrence = i;
      }
      last_occurrence = i;
    }
  }

  // Print results
  if (first_occurrence == -1) {
    printf("Character '%c' not found in the string.\n", ch);
  } else {
    printf("Character '%c' first occurs at position %d and last occurs at position %d.\n", ch, first_occurrence + 1, last_occurrence + 1);
  }

  return 0;
}
