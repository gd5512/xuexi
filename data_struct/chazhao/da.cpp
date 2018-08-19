#include <iostream>
using namespace std;
 
//顺序查找算法

int SequenceSearch(int array[],int value,int n)
{
  int i;
  for(i=0;i<n;i++)
  {
    if(array[i]==value)
        return i+1;
  }
  return -1;
}

//顺序查找算法优化

int SequenceSearch2(int array[],int value,int n)
{
  int i;
  array[0]=value;
  while(array[i]!=value)
  {
      i--;
  }
  return i;
}

 
int main()
{
  int a[5] = {10,20,30,40,50};
  int v1=SequenceSearch(a,30,5);
  cout<<v1<<endl;

  int v2=SequenceSearch(a,10,5);
  cout<<v2<<endl;
  return 0;
}
