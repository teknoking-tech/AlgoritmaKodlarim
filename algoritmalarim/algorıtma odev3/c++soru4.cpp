#include <iostream>
#include <math.h>
/* furkan yorgun 2020717019 */
int main() {
	
	float x,y;
	int n;
	
	  printf("1. sayiyi giriniz:");
	   scanf("%f" ,&x);
	     printf("2. sayiyi giriniz:");
	       scanf("%f" ,&y);
	          
	          printf("toplama icin    (1) \n");
	             printf("cikarma icin    (2) \n");
	                printf("bolme icin    (3) \n");
	                   printf("carpma icin    (4) \n");
	                      printf("x ussu y icin    (5) \n");
	                         printf("1. sayinin karesini almak icin    (6) \n");
	                            printf("1. sayinin karekokunu almak icin   (7) \n");
	                               printf("f(x,y)=x^2+2*y fonksiyon islemi icin   (8) e basiniz \n");
	                               
	                                printf("yapmak istediginiz islemi seciniz:");
	                                    scanf("%d" ,&n);
	                                    
	                                 switch(n)
									 {
									case 1: 	
								    printf("toplam: %.2f", x+y); break;
								case 2:
								printf("fark: %.2f", x-y); break;	
							case 3:
	   						printf("bolme: %.2f", x/y); break;
						case 4:
						printf("carpma: %.2f", x*y); break;		 
					case 5:
					printf("us alma: %.2f" , pow(x,y)); break;
				case 6:
				printf("1. sayinin karesi: %.2f " , x*x); break;
			case 7:
			printf("1. sayinin karekoku: %.3f" , sqrt(x)); break;			
		case 8:
		printf("f fonksiyonu: %.2f" , pow(x,2)+2*y); break;
		
	default:
	printf("islem basarisiz tekrar deneyiniz");
	 }      
	                                    
	                                    	return 0;
	                                    	
}
