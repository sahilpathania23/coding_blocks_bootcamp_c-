	#include <iostream>
	#include <climits>
	using namespace std;

	int main(){
		
		int m,n;
		int arr[100][100];
		cin>>m>>n;
		for(int j=0;j<m;++j)
		{
			for(int y=0;y<n;++y){
				cin>>arr[j][y];
			}
		}
		for(int cols=0;cols<n;++cols)
		{
			if (cols%2==0)
			{
				for(int rows=0;rows<m;++rows){
					cout<<arr[rows][cols]<<","<<" ";
				}
			}else
			{
				for(int rows=m-1;rows>=0;--rows){
					cout<<arr[rows][cols]<<","<<" ";
				}
				
			}
		} cout<<"END";
	return 0;

	}
