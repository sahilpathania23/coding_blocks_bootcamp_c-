//degree question
#include <iostream>
#include <climits>
#include <math.h>
using namespace std;
int main() { 
	int n,f,i,l;

	cin>>n;
	
		for (l = 1; l <= n/2; ++l)
		{
			for (int d=l;d<=n/2;++d){
				cout<<"  ";
			}
			for(int h=0;h<(2*l)-1;++h){
				cout<<"* ";
			}
			cout<<endl;

		}
		for(int y=(n/2)+1;y>0;--y){

			for (int r=(n/2)+1;r>y;--r){
				cout<<"  ";
				}
			for (int q=0;q<(2*y)-1;++q){
				cout<<"* ";
			}
			cout<<endl;
		}
		
	
	return 0;

  }
