#include<iostream>
#include<string>
using namespace std;
int main()
{
   
	string str[1000];
    string str1;
	int i,a=1,n,j;
	cin>>n;
	for(i=0;i<n;i++)
	{
	   cin>>str[i];
	}
	//ц╟ещеепР
   	for(i=1;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
		   if(str[j]>str[j+1])
		   {
		     str1=str[j];
		     str[j]=str[j+1];
		     str[j+1]=str1;
		   }
		}
	}
	
    for(i=0;i<n;i++)
	{
	  cout<<str[i]<<endl;
	}
    return 0;
}
