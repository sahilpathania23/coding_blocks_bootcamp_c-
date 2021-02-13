//degree question

#include <iostream>
#include <climits>
#include <math.h>
using namespace std;

int main() {
   
   int n,k,i,n1,j;
   cin>>n;
   int one[1000];
   for (i = 0; i < n; ++i)
   {
      cin>>one[i];
   }
   cin>>n1;
   int two[10005];
   for ( j = 0; j < n1; ++j)
   {
      cin>>two[j];
   }
   
   int carry=0;
   int q=n-1;
   int w=n1-1;
   int third[10005];

   while(q>=0||w>=0){
      int sum=carry;
      if (q>=0)
      {
         sum=sum+one[q];
      }
      if (w>=0)
      {
         sum=sum+two[w];
      }
      int rem=sum%10;
      third[k]=rem;
      carry=sum/10;
      k++;
      q--;
      w--;

   }
   if(carry!=0){
      while(carry!=0){
         third[k]=carry%10;
         k++;
         carry=carry/10;
      }
   }
   for (int l=k-1; l>=0; l--)
   {
      cout<<third[l]<<", ";
   }
   cout<<"END";

   return 0;
}

    