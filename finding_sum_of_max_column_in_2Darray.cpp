#include <iostream>
#include <climits>
using namespace std;

int main(){
	int cols,rows;
	int arr[100][100];
	cin>>rows>>cols;
	int sum=INT_MIN;
	int result;
	for (int i = 0; i < rows; ++i)
	{
		for(int t=0;t<cols;++t){
			cin>>arr[i][t];
		}
	}
	for(int h=0;h<cols;++h){
		result=0;
		for(int l=0;l<rows;++l){
			result=result+arr[l][h];
		}
		sum=max(result,sum);
	}
	cout<<sum;
	return 0;
}
