#include <stdio.h>

int main(int argc,char **argv) {
  if (argc < 2) {
    printf("Err: please enter a name.\n");
  }

  int i, j;
  char **k = argv;

  for (j = 1; j < argc; j += 1) {
    for (i = 0; i != -1; i += 1) {
      if (k[j][i] == '\0') {
        i = -2;
      } else {
        if((k[j][i] == 'a') || (k[j][i] == 'e') || (k[j][i] == 'i') ||
           (k[j][i] == 'o') || (k[j][i] == 'u') || (k[j][i] == 'y') ||
           (k[j][i] == 'A') || (k[j][i] == 'E') || (k[j][i] == 'I') ||
           (k[j][i] == 'O') || (k[j][i] == 'U') || (k[j][i] == 'Y')) {
          printf("oodle");
        } else {
          printf("%c", k[j][i]);
        }
      }
    }

    printf(" ");
  }

  printf("\n");
}

