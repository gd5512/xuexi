#include<iostream>
#include<string>
using namespace std;
int n;
int main()
{   
	string str[1000];
	string str1;
	int num[1000]={0},i=0;
	int k=0,len=0;
	int jishu[1000]={0};
	while(cin>>str[n]>>num[n])
	{
		if(str[n].size()>16)
			str[n]=str[n].substr(str[n].size()-16,str[n].size());
	   k=str[n].find_last_of("\\"); 
	   len=str[n].size();
       str1=str[n].substr(k+1,len-k);
	   str[n]=str1;
	   n++; 
	}

//	cout<<"n="<<n<<endl;
	if(n>1)
	{
		for(i=1;i<n;i++)
		{	
		//	cout<<"i="<<i<<endl;
		  for(int j=0;j<i;j++)
		  {
			//  cout<<"j="<<j<<endl;
			 if((str[i]==str[j])&&(num[i]==num[j]))
			 {
				 jishu[j]++;
				 for(int s=i;s<n-1;s++)//删除i
				 {
					str[s]=str[s+1];
					num[s]=num[s+1];
				 }
				 i--;//str删除了一个就-1
				 n--;
			 }	
		  }
		}
	}
//	cout<<"n="<<n<<endl;
	if(n>8)
	{
		for(i=n-8;i<n;i++)
		{
		   cout<<str[i]<<' '<<num[i]<<' '<<jishu[i]+1<<endl;
		}
	}
	else
	{
	     for(i=0;i<n;i++)
		 {
		   cout<<str[i]<<' '<<num[i]<<' '<<jishu[i]+1<<endl;
		 }
	}
  return 0;
}