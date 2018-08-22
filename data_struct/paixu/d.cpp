#include<iostream>
using namespace std;


void swap(int *array, int i, int j);

void bubble_sort0(int *array, int n);
void bubble_sort1(int *array, int n);
void bubble_sort2(int *array, int n);

int main()
{
	 //数组
    int array[9] = {4, 2, 1, 3, 6, 9, 8, 7, 5};
    //数组元素个数
    int n = sizeof(array) / sizeof(array[0]);
   //排序
    bubble_sort2(array, n);
    for(int i = 0; i < n; i++)
	{
		cout<<array[i];
       
	}
	cout<<endl;

   return 0;
}


//交换数组中的值
void swap(int *array, int i, int j)
{
    int temp = array[i];
    array[i] = array[j];
    array[j] = temp;
}


//冒泡排序    初级版
void bubble_sort0(int *array, int n)
{
    
    for (int i = 0; i < n-1; i++){

        for(int j = i; j < n; j++){
            if(array[i] > array[j]){
                swap(array, i, j);
            }
        }
    }
}



//冒泡排序    正宗版
void bubble_sort1(int *array, int n)
{
    
    for (int i = 0; i < n-1; i++){
        
        for(int j = n-2; j >=i ; j--){
            if(array[j] > array[j+1]){
                swap(array, j, j+1);
            }
        }
    }
}




//冒泡排序    优化版
void bubble_sort2(int *array, int n)
{
    int flag=1;
    for (int i = 0; i < n-1 && flag; i++){
       	flag=0;
        for(int j = n-2; j >=i ; j--){
            if(array[j] > array[j+1]){
                swap(array, j, j+1);
				flag=1;
            }
        }
    }
}