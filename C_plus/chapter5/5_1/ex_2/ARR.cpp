#include<iostream>
#include<cmath>
using namespace std;



int main()
{
   int queen[8];
   int total=0;
   int i,j,k;
   for(i=0;i<8;i++)queen[i]=0;
   for(i=1;;){
	   if(queen[i]<8){
	       k=0;
		   while(k<i&&(queen[k]-queen[i])&&(abs(queen[k]-queen[i])-abs(k-i)))k++;
		   if(k<=i-1)
		   {
		       queen[i]++;continue;
		   }
		   i++;
		   if(i<8)continue;
		   for(j=0;j<8;j++)cout<<queen[j];
		   cout<<" ";
		   total++;
		   if(total%5==0)cout<<endl;
		   queen[7]++;
		   i=7;
	   }
	   else
	   {
	      queen[i]=0;
		  i--;
		  if(i<0){
		     cout<<"×ÜÊý£º"<<total<<endl;return 0;
		  }
		  else
			  queen[i]++;
	   }
   }
   return 0;
}