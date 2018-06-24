#include<iostream>
#include"rect.h"
using namespace std;
Rectangle::Rectangle(int l,int t,int r,int b){
   left=l;top=t;
   right=r;bottom=b;
}
void Rectangle::Assign(int l,int t,int r,int b )
{
     left=l;top=t;
   right=r;bottom=b;
}
void Rectangle::Show()
{
   cout<<"left-top point is("<<left<<","<<top<<")"<<'\n';
   cout<<"right-bottom point is("<<right<<","<<bottom<<")"<<'\n';
}