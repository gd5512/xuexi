#include<iostream>


using namespace std;

void Move(int n,char x,char y)//�ѵ�n�����Ӵ�x�Ƶ�y;
{
  cout<<"move "<<n<<" from "<<x<<" to "<<y<<endl;
}
void Hannoi(int n,char a,char b,char c)//n�����ӣ�����b����a�Ƶ�c
{
  if(n==1)
	  Move(1,a,c);//ֻ��1������
  else
  {
     Hannoi(n-1,a,c,b);//n-1�����ӣ�����c����a�Ƶ�b
	 Move(n,a,c);//������̣���a�Ƶ�c
     Hannoi(n-1,b,a,c);//����a����b�Ƶ�c
  }
}
int main()
{
	int n;
	cin>>n;
	Hannoi(n,'a','b','c');

  return 0;
}

//�����⺺ŵ���ĵݹ飿 - Tim Shen�Ļش� - ֪��
//https://www.zhihu.com/question/24385418/answer/107761723