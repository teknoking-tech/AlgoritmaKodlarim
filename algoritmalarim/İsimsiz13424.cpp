#include <stdio.h>
#include <math.h>
int filip (int x){
int y;	
	if(x<0){
	y=1;
	printf("%d",y);	
	}
else if(x<2)
{
	y=(x*x)-(2*x);
	printf("%d",y);
	}	
	else
	{
	y=-(pow(x,2))-(sqrt(x))+x;
	printf("%d",y);	
	}
	
	
		
	
}
int main(){
	filip(5);
	
	
}
