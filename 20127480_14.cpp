#include<iostream>
using namespace std;
int main()
{
	int a,b,i,k,m,n,same;
	int arr1[a],arr2[b];
	cout<<"Nhap a: ";
	cin>>a;
	cout<<"Nhap day a: ";
	for(i=0;i<=a-1;i++) 
	{
		cin>>arr1[i];
	};
	cout<<"Nhap b: ";
	cin>>b;
	cout<<"Nhap day b: ";
	for(i=0;i<=b-1;i++)
	{
		cin>>arr2[i];
	};
	

		for(i=0;i<=a-1;++i)
		{
			m=arr1[i];
			for(k=0;k<=b-1;++k)
			{
				n=arr2[k];
				if(m==n)
				{
					same=m;
					cout<<same<<" ";
				}
			};
			
		}
		return 0;
		
	
}
