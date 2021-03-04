#include <iostream>
#include <climits>
using namespace std;
void vowels(char a[])
{
	int h=0;
	int g=0;
	
	for(int k=0;a[k]!='\0';k++){
		if (a[k]=='a' or a[k]=='e' or a[k]=='i' or a[k]=='o' or a[k]=='u'){
			h++;
			g=max(g,h);
			

		}
		else{
			h=0;
		}
		
	}
	cout<<g;
}
int main(){
	char j[100000];
	cin>>j;
	vowels(j);
	

	return 0;
}
