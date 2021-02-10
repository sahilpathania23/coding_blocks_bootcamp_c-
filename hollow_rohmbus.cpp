//degree question
#include <iostream>
#include <climits>
#include <math.h>
using namespace std;
int main() { 
	int n,k;

	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 1; j < n-i; ++j)
		{
			cout<<" ";
		}
		if(i==0 or i==n-1){
			for(int e=0;e<n;++e){
				cout<<"*";
			}

		}
		else{
			for(int u=0;u<n;++u){
				if(u==0 or u==n-1){
					cout<<"*";

				}else{
					cout<<" ";
				}
			}
		}
		cout<<endl;
	}
	return 0;

  }
