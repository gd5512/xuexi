#include<iostream>


using namespace std;

void Move(int n,char x,char y)//把第n个盘子从x移到y;
{
  cout<<"move "<<n<<" from "<<x<<" to "<<y<<endl;
}
void Hannoi(int n,char a,char b,char c)//n个盘子，借助b，从a移到c
{
  if(n==1)
	  Move(1,a,c);//只有1个盘子
  else
  {
     Hannoi(n-1,a,c,b);//n-1个盘子，借助c，从a移到b
	 Move(n,a,c);//把最大盘，从a移到c
     Hannoi(n-1,b,a,c);//借助a，从b移到c
  }
}
int main()
{
	int n;
	cin>>n;
	Hannoi(n,'a','b','c');

  return 0;
}

//如何理解汉诺塔的递归？ - Tim Shen的回答 - 知乎
//https://www.zhihu.com/question/24385418/answer/107761723