#include<fstream>
#include<iomanip>
using namespace std;
int main()
{
  int i,j,k;
  ofstream ofile;//��������ļ�
  ofile.open("d:\\myfile.txt");//����ļ���
  ofile<<"  ����   ĸ��   С��"<<endl;
  for(i=0;i<=20;i++)
	  for(j=0;j<=33;j++)
	  {
	    k=100-i-j;
		if((5*i+3*j+k/3==100)&&(k%3==0))
			ofile<<setw(6)<<i<<setw(10)<<j<<setw(10)<<k<<endl;//����д���ļ�
	  }
	  ofile.close();
 return 0;
}