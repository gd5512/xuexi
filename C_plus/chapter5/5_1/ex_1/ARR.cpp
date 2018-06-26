#include<iostream>
#include<cstdlib>
using namespace std;
const int SIZE=15;
int main()
{
   int arr[SIZE];
   int i,high,low;
   for(i=0;i<SIZE;i++)arr[i]=rand()%100;
   cout<<"Here are the "<<SIZE<<" random numbers:"<<endl;
   for(i=0;i<SIZE;i++)cout<<arr[i]<<'\t';
   cout<<endl;
   high=arr[0];
   low=arr[0];
   for(i=0;i<SIZE;i++)
   {
      if(arr[i]>high)high=arr[i];
	  if(arr[i]<low)low=arr[i];
   }
   cout<<"highest value is:"<<high<<endl;
   cout<<"lowest value is:"<<low<<endl;
   return 0;
}