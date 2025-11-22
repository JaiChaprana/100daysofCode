/* Q124: Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().

/*
Sample Test Cases:
Input 1:
Source File: source.txt (Content: Learning C File Handling)
Output 1:
File copied successfully to destination.txt

*/

#include <stdio.h>

int main() {
  char src[100], destination[100];
  printf("Enter source filename: ");
  scanf("%s", src);
  printf("Enter destination filename: ");
  scanf("%s", destination);
  FILE *source = fopen(src, "r");
  FILE *dest = fopen(destination, "w");
  if (source == NULL) {
    printf("Error opening file!\n");
    return 1;
  }
  if (dest == NULL) {
    printf("Error writing into file!!!\n");
    return 1;
  }

  int c;
  while ((c = fgetc(source)) != EOF) {
    fputc(c, dest);
  }

  fclose(source);
  fclose(dest);

  printf("File copied successfully to %s", destination);
  return 0;
}