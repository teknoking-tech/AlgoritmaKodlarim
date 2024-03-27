#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//furkan yorgun 2020717019
int main(int argc, char*argv[]){
	int satir,sutun;
 	   srand(time(NULL));
       	printf("sirasiyla satir ve sutun sayisini giriniz:");
          	scanf("%d%d",&satir,&sutun);
	           int dizi[satir][sutun];
                	int i,j;
	                   int maksimumsayi=dizi[0][0];
	
	                      for(i=0;i<satir;i++){
		               for(j=0;j<sutun;j++){
		
	               	dizi[i][j]=rand()%500;
                  	}
                    }
                printf("matris elemanlari:\n");
             for(i=0;i<satir;i++){
           	for(j=0;j<sutun;j++){
	}
	    	for(j=0;j<sutun;j++){
		printf("%d ",dizi[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<satir;i++){
		for(j=0;j<sutun;j++){
			if(maksimumsayi<dizi[i][j]){
				maksimumsayi= dizi[i][j];
			}
		}
	}
	printf("matrisin en buyuk elemani: %d",maksimumsayi);
	
	return 0;
}
