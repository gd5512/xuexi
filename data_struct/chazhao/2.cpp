#include <iostream>
using namespace std;

//折半查找（2分查找） 
int BinarySearch1(int array[],int value,int n)
{
  int low,high,mid;
  low=0;
  high=n-1;
  while(low<=high)
  {
    mid=(low+high)/2;
    if(array[mid]==value)
      return mid;
    else if(array[mid]<value)
      low=mid+1;
    else
      high=mid-1;
  }
  return -1;
}
 
//递归实现的折半查找
int BinarySearch2(int array[],int value,int low,int high)
{
 
  while(low<=high)
  {
  int mid=(high+low)/2;
  if(array[mid]==value)
    return mid;
  if(array[mid]<value)
    return BinarySearch2(array,value,mid+1,high);
  if(array[mid]>value)  
    return BinarySearch2(array,value,low,mid-1);
  }
}
 
int main()
{
  int a[5] = {10,20,30,40,50};
  int v1=BinarySearch1(a,20,5);
  int v2=BinarySearch2(a,20,0,4);
  cout<<v1<<endl;
  cout<<v2<<endl;
}
//算法复杂度log(n)
