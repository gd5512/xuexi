#include<iostream>
#include"rect.h"
using namespace std;
int main()
{
   Rectangle rect;
   
   cout<<"��Ĭ�ϵĹ��캯�����ɵ�rect:"<<endl;
   rect.Show();
   rect.Assign(100,200,300,400);
   cout<<"�ɸ�ֵ����������rect:"<<endl;
   rect.Show();
   Rectangle rect1(0,0,200,200);
   cout<<"�ɹ��캯�����ɵ�rect1:"<<endl;
   rect1.Show();
   return 0;
}