#include<bits/stdc++.h>
#include<iostream>
#include<stdio.h>
using namespace std;

typedef long long ll;

ll n,k,top,sayi_k,top_50,aranan;

double ort;

ll notlar[20];

int main()
{
	n=20;
	for(int i=0; i<n; ++i){
		cin>>notlar[i];
		top+=notlar[i];
	}
	ort=1.0*top/n;
	cout<<"not toplami:"<<top<<endl;
	cout<<"not ortalamasi: "<<ort<<endl;
	
	sort(notlar,notlar+n);
	
	for(int i=0; i<n; ++i)
	{
		if(notlar[i]>=50){
			k=i;
			sayi_k=i-1;
			break;
		}
	}
	cout<<"50 den küçük not sayisi: "<<sayi_k<<endl;
	for(int i=k; i<n; ++i)
	{
		if(notlar[i]!=50){
			k=i;
			break;
		}
		top_50+=50;
		
			}
			cout<<"50 ye eþit notlarin toplami:"<<top_50<<endl;
			
			cout<<"50  den büyük sayilar:";
			for(int i=k; i<n;++i)
			{
				cout<<notlar[i]<<" ";
			}
			cout<<endl;
			ll s;
			cin>>s;
			while(s!=-1){
				aranan=0;
				for (int i=0; i<n; ++i)
				{
					if(notlar[i]==s){
						k=i;
						break;
					}
				}
				for (int i=k; i<n;++i)
				{
					if(notlar[i]!=s)break;
					aranan++;
				}
				cout<<s<<"sayisindan"<<aranan<<"tane var\n";
				cin>>s;
			}
			return 0;
		}
