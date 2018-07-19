#include <iostream>
#include <string>
using namespace std;

// BF (Brute Force) algorithm
// worst time complexity : O(m*n)
 int bf (string s, string t);
 int bf2(string s, string t);

int main(void)
{
    string str = "ababcabcacbab";
    string ptn = "abcac";

	int t;
	t=bf(str, ptn);
	cout<<t<<endl;
    int t2;
	t2=bf(str, ptn);
	cout<<t2<<endl;

    return 0;
}

int bf(string s,string t)
{
    int m, n, i, j;

	m = s.length();
	n = t.length();

    i = 0; j = 0;
    while(i<m && j<n)
    {
        if(s[i] ==t[j])
        {
         
            ++i;  ++j; 
        }
        else
        {
            
            i = i-j+1; j = 0; 
        }
    }

    if(j >= n)
        return i-n;
    else
        return -1;
}



int bf2(string s, string t)
{
    int m, n, i, j;

	m = s.length();
	n = t.length();

    i = 0; j = 0;
    for(i=0; i<=(m-n); ++i)
    {
        for(j=0; j<n; ++j)
        {
            if(s[i+j] != t[j])
                break;
        }
        if(n == j)  return i;
    }

    return -1;
}