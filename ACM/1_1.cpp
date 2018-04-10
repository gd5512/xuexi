#include<iostream>
//#include<vector>
#include<string>
using namespace std;



const int N=11;
int d[N];//0-9出现的次数
int value;//权值

void deal(int n);
void deal(int n)
{
  if(n<=0)return;
  int one,ten,i;
  one=n%10;
  n/=10;
  ten=n;
  for( i=0;i<=one;i++)
	  d[i]+=value;
  while(ten)
  {
     d[ten%10]+=(one+1)*value;
	 ten/=10;
  }
  for( i=0;i<10;i++)
	  d[i]+=value*n;
  d[0]-=value;
  value*=10;
  deal(n-1);
}
int main()
{
	int a,b;
	while(cin>>a>>b)
	{
	  if(a==0&&b==0)break;
	  if(a<b){
	    int tmp=b;
		b=a;
		a=tmp;
	  }
	  for(int i=0;i<10;i++)
		  d[i]=0;
	  value=1;
	  deal(a);
	  value=-1;
	  deal(b-1);
	  cout<<d[1]<<endl;
	}

  return 0;
}