//degree question
#include <iostream>
#include <climits>
#include <math.h>
using namespace std;
int main() { 
	int n,i,k,l;

	cin>>n;
	i=0;
	k=1;
	l=0;
	
	for (int e = 0; e <n ; ++e)
	
	{
		for (int p = 0; p <=e; ++p)
		{
			cout<<l<<" ";
			
			
			i=k;
			k=l;
			l=k+i;

		}
		cout<<endl;
		
	}
	
	
	return 0;

  }
