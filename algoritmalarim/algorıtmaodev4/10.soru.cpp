#include<iostream>
#include<stdio.h>
#include<math.h>
#include <stdlib.h>
#include<conio.h>
//furkan yorgun 2020717019
int main()
{
setlocale(LC_ALL, "Turkish");	
   int i,j;
    int n,x,enk,s;
      int dizi[10];

         printf(" s�n�ftaki ki�i Say�s� :");
           scanf("%d",&n);

             for(i=1;i<=n;i++)
{
    
               printf("s�n�ftaki %d ki�inin boyu : ",i);
                  scanf("%d",&dizi[i]);
}
                     printf("istedi�iniz en yak�n boy :");
                       scanf("%d",&x);
                         enk=abs(dizi[1]- x);
                      s=dizi[1];
                   for(i=2;i<=n;i++)
{
                 if(enk>abs(dizi[i]-x))
{
            enk=abs(dizi[i]-x);
           s=dizi[i];
}
}
         printf("En Yak�n boy : %d",s);
return 0;
}

