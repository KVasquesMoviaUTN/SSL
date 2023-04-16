#include <stdio.h>
int main() {
	char cadena[] = "hola mundo";
	FILE *f;
  printf("Hello, World!");
	f = fopen("output.txt", "w");
	fwrite(cadena, 1, sizeof(cadena), f);
	fclose(f);
  return 0;
}
