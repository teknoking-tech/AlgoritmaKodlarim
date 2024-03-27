#include <iostream>

using namespace std;
int main ()
{
	int n;
	cout<<"kac sayi girilsin:"<<endl;
	cin>>n;
	int eksis=0;
	int artis=0; 
	int sifirs=0;
	for(int i = 0;i<n;i++)
	{
	int g;
	cin>>g;
	if(g<0){
	eksis++;
	}
	
	else if(g>0)
{
	artis++;
}

	else
	sifirs++;

}
	
	cout<<"pozitif: "<<(float)artis/n<<endl;
	cout<<"negatif: "<<(float)eksis/n<<endl;
	cout<<"sifir: "<<(float)sifirs/n<<endl;	
}
