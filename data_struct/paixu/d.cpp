#include<iostream>
using namespace std;


void select_sort(int *array, int n);

int main()
{
	 //数组
    int array[9] = {4, 2, 1, 3, 6, 9, 8, 7, 5};
    //数组元素个数
    int n = sizeof(array) / sizeof(array[0]);
   //排序
    select_sort(array, n);
    for(int i = 0; i < n; i++)
	{
		cout<<array[i];
       
	}
	cout<<endl;

   return 0;
}





void select_sort(int *array, int n)
{
    int i = 0, j = 0, min,tmp;
 
    for (i=0; i < n-1; i++)
    {
        min = i;
        for (j=i+1; j < n; j++)
        {
            if (array[min] > array[j])
            {
                min = j;
            }
        }
 
	if (min != i)
	{
	    tmp=array[min];
	    array[min]=array[i];
	    array[i]=tmp;
	}
    }
}
