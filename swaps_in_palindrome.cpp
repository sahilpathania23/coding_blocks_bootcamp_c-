	#include <iostream>
	#include <climits>
	using namespace std;
	int main(){
		char a[10000];
		cin>>a;
		int k;
		for (int i = 0; a[i]!='\0';++i)
		{
			k++;
		}
		int c=0;
		for(int i=0;i<k/2;++i){	
			if(a[i]==a[k-1-i]){
				continue;
			}else{
				if (a[i+1]==a[k-1-i]){
					swap(a[i],a[i+1]);
					c++;
				}
				else if(a[i]==a[k-1-1-i]){
					swap(a[k-1-i],a[k-1-1-i]);
					c++;
				}
				else{
					cout<<"-1";
					break;
				}
			}
		}
		cout<<c;
		return 0;
	}


