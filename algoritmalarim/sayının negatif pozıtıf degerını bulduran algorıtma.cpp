#  include  <stdio.h>

int main()
{
	int a;
	printf("sayiyi gir:") ;
	scanf("%d" ,&a);
	if (a==0) printf("sayi=0 dir");
	else if (a>0) printf("pozitif");
	else printf("negatif");
}
