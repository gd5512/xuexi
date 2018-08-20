#include<iostream>
 #include<iomanip>

using namespace std;


int main()
{
	int i,j,k;
	double ans;
	int n;
	int len[110];
	while(cin>>n)
	{
	  for(i=1;i<=n;i++)
		  cin>>len[i];
	  ans=-1;
	  for(i=1;i<=n;i++)
	  {
	    for(j=i+1;j<=n;j++)
		{
		   for(k=j+1;k<=n;k++)
		   {
		      if(len[i]*len[i]+len[j]*len[j]==len[k]*len[k])
			  {
			    if(0.5*len[i]*len[j]>ans)
					ans=0.5*len[i]*len[j];
			  }
		   }
		}
	  }
	}
	if(ans==-1)
		cout<<"My GOD!"<<endl;
	else
		cout<<setiosflags(ios::fixed) << setprecision(3) <<ans<<endl;
  return 0;
}

