//degree question
#include <iostream>
#include <climits>
#include <math.h>
using namespace std;
int main() { 
	int n,i,k;

	cin>>n;
	for ( i = 1; i <= n; ++i)
	{
		for(int j=n;j>i;--j){
			cout<<"  ";
		}
		k=i;
		for (int o=0;o<i;++o){
			cout<<k<<" ";
			k++;

		}
		k=k-2;
		for(int y=0; y<i-1;++y){
			cout<<k<<" ";
			k--;
		}
		cout<<endl;
	}
	
		
	
	return 0;

  }
