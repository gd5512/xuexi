#include<iostream>
using namespace std;
void move(char,char);
void hanoi(int,char,char,char);
int main()
{
   int n;
   cout<<"ÊäÈëÅÌ×ÓÊý£º"<<endl;
   cin>>n;
   hanoi(n,'A','B','C');
   cout<<endl;
    return 0; 
	
}
void hanoi(int n,char source,char temp,char target)
{
  if(n==1)move(source,target);
  else
  {
    hanoi(n-1,source,target,temp);
	move(source,target);
	hanoi(n-1,temp,source,target);
  }
}
void move(char source,char target)
{
   cout<<source<<"->"<<target<<endl;
}
