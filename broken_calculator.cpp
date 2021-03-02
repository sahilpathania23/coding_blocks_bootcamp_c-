	#include <iostream>
	#include <climits>
	using namespace std;
	void multipy(int arr[],int &n,int k){
			int carry=0;
			for(int i=0;i<n;i++){
				int product=arr[i]*k+carry;
				arr[i]=product%10;
				carry=product/10;
			}
			while(carry!=0){
				arr[n]=carry%10;
				carry=carry/10;
				n++;
			}
	}
	void factorial(int n){
		int arr[100000];
		for (int i = 0; i <100000 ; ++i)
		{
			arr[i]=0;

		}
		arr[0]=1;
		int noit=1;
		for(int k=2;k<=n;k++){
	         multipy(arr,noit,k);
		}
		for(int h=noit-1;h>=0;h--){
			cout<<arr[h];
		}
	}

	int main(){
		int n;
		cin>>n;
		factorial(n);

		
		return 0;
	}


