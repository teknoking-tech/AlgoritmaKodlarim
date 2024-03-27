#include <stdio.h>
//furkan yorgun 2020717019
int main() {
 
 int a,b,c,d,e,g,f=0;
 int toplam=0;
 int ortalama;
 int i=0;
 int elli;
 int notlar[20];
 int x;
 
 printf("1.ogrencinin notunu giriniz:");
   scanf("%d",&notlar[0]);
      printf("2.ogrencinin notunu giriniz:");
        scanf("%d",&notlar[1]);
          printf("3.ogrencinin notunu giriniz:");
              scanf("%d",&notlar[2]);
                 printf("4.ogrencinin notunu giriniz:");
                    scanf("%d",&notlar[3]);
                       printf("5.ogrencinin notunu giriniz:");
                         scanf("%d",&notlar[4]);
                           printf("6.ogrencinin notunu giriniz:");
                               scanf("%d",&notlar[5]);
                                  printf("7.ogrencinin notunu giriniz:");
                                      scanf("%d",&notlar[6]);
                                        printf("8.ogrencinin notunu giriniz:");
                                     scanf("%d",&notlar[7]);
                                  printf("9.ogrencinin notunu giriniz:");
                                scanf("%d",&notlar[8]);
                             printf("10.ogrencinin notunu giriniz:");
                           scanf("%d",&notlar[9]);
                          printf("11.ogrencinin notunu giriniz:");
                        scanf("%d",&notlar[10]);
                      printf("12.ogrencinin notunu giriniz:");
                    scanf("%d",&notlar[11]);
                   printf("13.ogrencinin notunu giriniz:");
                 scanf("%d",&notlar[12]);
              printf("14.ogrencinin notunu giriniz:");
             printf("15.ogrencinin notunu giriniz:");
            scanf("%d",&notlar[14]);
           printf("16.ogrencinin notunu giriniz:");
         scanf("%d",&notlar[15]);
        printf("17.ogrencinin notunu giriniz:");
       scanf("%d",&notlar[16]);
      printf("18.ogrencinin notunu giriniz:");
     scanf("%d",&notlar[17]);
    printf("19.ogrencinin notunu giriniz:");
   scanf("%d",&notlar[18]);
  printf("20.ogrencinin notunu giriniz:");
 scanf("%d",&notlar[19]);
 
 printf("\n hangi notu aramak istersiniz?");
 scanf("%d",&x);
     
      
 while(g<20){
 
        if(notlar[g]==x){
         f=f+1;
         g++;
     }
  else{
   g++;
  }
 }
 printf("\n %d notundan toplam %d tane vardir.",x,f);
 
    
 return 0;
 
}
