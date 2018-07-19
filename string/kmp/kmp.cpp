/*  
完整代码  
*/  
#include <iostream>  
#include <string>  

  
using namespace std;  
 
const int maxn = 255;  
 
int next1[maxn];  
void GetNext(string str,int next1[])  
{  
	int len_p = str.length();  
    next1[0] = -1;  
    int k = -1,j = 0 ;  
    while(j<len_p)  
    {  
        if(k == -1||str[j] ==str[k])  
        {  
            ++k;++j; 
			/*if(str[j] !=str[k])
	            next1[j] = k;  
			else
				  next1[j] = next1[k];*/  //kmp算法改进
			next1[j] = k; 
        }  
        else  
            k = next1[k];  
    }  
}  
int KMP(string S,string T,int next1[])  
{  
    int ans=-1,i = 0,j = 0;  
	int len_p = T.length(),n=S.length();

    while(i<n)  
    {  
        if(j==-1||S[i] == T[j])  
        {  
            ++i;++j;  
        }  
        else  
            j = next1[j];  
        if(j == len_p){  
            return i-len_p;  
            break;  
        }  
    }  
    return ans;  
}  
int main()  
{  

	string S="aaaabcde";
	string T="cd";
      
        GetNext(T,next1);  
		for(int i = 0; i <T.length(); i++)  
           cout<<next1[i]<<endl;  
     
       int n= KMP(S,T,next1)  ;
	   cout<<n<<endl;

    return 0;  
}  