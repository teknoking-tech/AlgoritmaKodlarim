#include <iostream>
/* furkan yorgun 2020717019 */
int main(int argc, char** argv) {
	char a;
	float m, mk;
	
	 printf("hali tipi giriniz \n tweety T\n bugs bunny B\n spiderman S:");
	   scanf("%c",&a);
     printf("hali metrekaresini giriniz:");
       scanf("%f" ,&mk);
       
           if (a=='T') printf("odenmesi gerek ucret : %.2f" , m=mk*18.80);
                   if (a=='B') printf("odenmesi gereken ucret : %.2f" , m=mk*17.80);
				            if (a=='S') printf("odenmesi gereken : %.2f" , m=mk*19.20);       
	
	
	return 0;
}
