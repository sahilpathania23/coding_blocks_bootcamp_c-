#include <iostream>
#include <climits>
using namespace std;

int main(){
	int arr[100][100];
	int m,n;
	cin>>m>>n;
	for(int y=0;y<m;++y){
		for(int h=0;h<n;h++){
			cin>>arr[y][h];
		}
	}
	int k=0;
	while(k<=(m+n)-2)
	{
		if (k%2!=0)
		{
			for(int y=0;y<m;++y)
			{
				for(int h=0;h<n;h++)
				{
					if(y+h==k)
					{
							cout<<arr[y][h]<<" ";
					}
				}

			}

		}else{
			for(int j=m-1;j>=0;--j){
				for(int h=0;h<n;++h){
					if(j+h==k){
							cout<<arr[j][h]<<" ";
					}
				}
			}
		}
		k++;

	}


}
