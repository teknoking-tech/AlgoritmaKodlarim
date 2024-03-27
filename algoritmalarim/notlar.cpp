#include<stdio.h>
//furkan yorgun
int main()
{
int x[5][3] ={
{ 60,70,95 },
{ 85,40,25},
{ 55,90,50 },
{ 45,75,35},
{ 60,55,100},
};

for (int i = 0; i < 5; i++)
{

for (int j = 0; j < 3; j++)
{

printf("kisinin ara sinav ve final notlari (%d,%d,%d)=%d\n",i,j,x[i][j]);
}
}
return 0;
}
