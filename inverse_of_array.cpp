//degree question
#include <iostream>
#include <climits>
#include <math.h>
using namespace std;
int main() { 
	int n,k,m,w;
    w=0;
	cin>>n;
    int arr1[100];
    int arr2[100];
    for (int i = 0; i < n; ++i)
    {
        cin>>k;
        arr1[i]=k;
    }
    for (int l = 0; l < n; ++l)
    {
        cin>>m;
        arr2[l]=m;
    }
    for (int g = 0; g < n; ++g)
    {
        if (arr2[arr1[g]]==g){
            w=w+1;
        }
        
    }
    if (w==n){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
	return 0;

  }
