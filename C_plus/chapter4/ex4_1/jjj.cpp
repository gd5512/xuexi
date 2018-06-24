#include<iostream>
#include"rect.h"
using namespace std;
int main()
{
   Rectangle rect;
   
   cout<<"由默认的构造函数生成的rect:"<<endl;
   rect.Show();
   rect.Assign(100,200,300,400);
   cout<<"由赋值函数处理后的rect:"<<endl;
   rect.Show();
   Rectangle rect1(0,0,200,200);
   cout<<"由构造函数生成的rect1:"<<endl;
   rect1.Show();
   return 0;
}