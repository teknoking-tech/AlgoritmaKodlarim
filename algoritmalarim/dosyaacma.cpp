/*#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  FILE *fp;
  int id;

  if ((fp = fopen ("dosya.txt", "w")) == NULL) {
      printf("Dosya açma hatasý!");
      exit(1);
  }

  for (id=0; id<10; id++) fputc ('a', fp);
  fclose(fp);

  if ((fp = fopen ("dosya.txt", "r")) == NULL) {
      printf("Dosya açma hatasý!");
      exit(1);
  }

  for (id=0; id<10; id++) printf("%c", fgetc(fp));
  
  fclose(fp);
  
  return 0;
}*/
#include<stdio.h>
#include<stdlib.h>
int main (void)
{
	FILE *fp;
	int id;
	if((fp = fopen ("dosya.txt","w")) == NULL)
	{
	printf("Dosya acma hatasi!");
	exit(1);	
	}
	for(id=0;id<10;id++) fputc ('a',fp);
	fclose(fp);
	if((fp = fopen ("dosya.txt","r")) == NULL)
	{
		printf("dosya acma hatasi");
		exit(1);
	}
	for (id=0; id<10; id++) printf("%c",fgetc(fp));
	fclose(fp);
	return 0;
}
	

