#include <iostream>
#include <climits>
using namespace std;
void leaders(int a[],int g){
	int u;
	int k=0;
	int gh[100000];
	for(u=0;u<g-1;u++){
		int j=0;
		for(int t=u+1;t<g;++t){
			if(a[u]<a[t]){
				j=0;
				break;
				
			}
			else{
				j++;
			}

		}
		if(j!=0){
			gh[k]=a[u];
			k++;
		}
	}
	gh[k]=a[u];
	for(int f=k;f>=0;--f){
		cout<<gh[f]<<" ";
	}

}
int main(){
	int g;
	cin>>g;
	int arr[100000];
	for(int y=0;y<g;++y){
		cin>>arr[y];
	}
	leaders(arr,g);

	return 0;
}
