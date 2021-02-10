//degree question
#include <iostream>
#include <climits>
#include <math.h>
using namespace std;
int main() { 
	int n;
	cin>>n;
	for (int i = 0; i < ((n*2)+1)/2; ++i)
	{
		for (int l = 0; l <i; ++l)
		{
			cout<<"  ";
		}
		for (int p = n-i; p >0 ; --p)
		{
			cout<<p<<" ";
		}
		for(int o=0;o<=n-i;++o){
			cout<<o<<" ";

		}
		cout<<endl;
	}
	for(int y=(((n*2)+1)/2)+1;y>0;--y)
	{
		for(int l1=0;l1<y-1;++l1){
			cout<<"  ";
		}
		for(int p1=((((n*2)+1)/2)+1)-y;p1>0;--p1){
			cout<<p1<<" ";
		}
		for(int r=0;r<=((((n*2)+1)/2)+1)-y;++r){
			cout<<r<<" ";
		}
		cout<<endl;
	}

	
	
	return 0;

  }
