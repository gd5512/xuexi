#include<iostream>
#include<cmath>
using namespace std;
float TriangleArea(float a,float b,float c)
{
   if((a+b<=c)||(a+c<=b)||(b+c<=a))return -1;
   float s;
   s=(a+b+c)/2;
   return sqrt(s*(s-a)*(s-b)*(s-c));
}
int main()
{
  float a,b,c,area;
  cout<<"�������������߳�a,b,c:"<<endl;
  cin>>a>>b>>c;
  area=TriangleArea(a,b,c);
  if(area==-1)
	  cout<<"���ܹ��������Σ�"<<endl;
  else
	  cout<<"���Ϊ��"<<area<<endl;
  return 0;
}