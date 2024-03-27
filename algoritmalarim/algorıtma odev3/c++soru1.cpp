#include <iostream>
/* furkan yorgun 2020717019 */
int main(int argc, char** argv)  {
	
	int A;
	
	printf("bir sayi giriniz: ");
	
	scanf("%d" ,&A);
	
	
	
	if (A>50) printf("sayi 50 den buyuk.Sayinin yarisinin 1 eksigi: %d ",A=(A/2)-1);
	 
	 
	      else if(A<10) printf("sayi 10 dan kucuk.Sayinin 2 ye gore modu: %d " ,A=A%2);
	
	
	            else printf("sayi 10 ile 50 arasinda.Sayinin karesi: %d" ,A=A*A);
	return 0;        
	
}
