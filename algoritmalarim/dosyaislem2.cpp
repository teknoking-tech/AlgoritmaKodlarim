#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  FILE *fp1, *fp2;
  char cd;

  if (argc!=3) {
      printf("Kullaným: deneme <Kaynak dosya> <Hedef dosya>");
      exit(1);
  }

  if ((fp1=fopen(argv[1], "rb")) == NULL) {
      printf("Kaynak dosya açýlamadý!\n");
      exit(1);
  }
  if ((fp2=fopen(argv[2], "wb")) == NULL) {
      printf("Hedef dosya açýlamadý!\n");
      exit(1);
  }

  while (!feof(fp1)) {
     cd = fgetc(fp1);
     if (ferror(fp1)) {
         printf("Kaynak dosyadan okuma hatasý!\n");
         exit(1);
     }
     if (!feof(fp1)) fputc (cd, fp2);
     if (ferror(fp2)) {
         printf("Hedef dosyaya yazma hatasý!\n");
         exit(1);
     }
  }

  fclose (fp1);
  fclose (fp2);
  
  return 0;
}
#include<stdio.h>
#include<stdlib.h>

	int main(int argc, char *argv[])
	{
		FILE *fp1, *fp2;
		char cd;
		if(argc)
	}

