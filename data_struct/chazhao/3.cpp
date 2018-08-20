#include <iostream>
using namespace std;
 
int InsertionSearch(int array[],int value,int low,int high)
{
  int mid=low+(value-array[low])/(array[high]-array[low])*(high-low);
  if(array[mid]==value)
    return mid;
  if(array[mid]>value)
    return InsertionSearch(array,value,low,mid-1);
  if(array[mid]<value)
    return InsertionSearch(array,value,mid+1,high);
}
 
int main()
{
  int a[5] = {10,20,30,40,50};
  int v=InsertionSearch(a,40,0,4);
  cout<<v<<endl;
  return 0;
}
