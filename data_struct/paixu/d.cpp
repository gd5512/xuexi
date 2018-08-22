#include<iostream>
using namespace std;


void swap(int *array, int i, int j);

void bubble_sort0(int *array, int n);
void bubble_sort1(int *array, int n);
void bubble_sort2(int *array, int n);

int main()
{
	 //����
    int array[9] = {4, 2, 1, 3, 6, 9, 8, 7, 5};
    //����Ԫ�ظ���
    int n = sizeof(array) / sizeof(array[0]);
   //����
    bubble_sort2(array, n);
    for(int i = 0; i < n; i++)
	{
		cout<<array[i];
       
	}
	cout<<endl;

   return 0;
}


//���������е�ֵ
void swap(int *array, int i, int j)
{
    int temp = array[i];
    array[i] = array[j];
    array[j] = temp;
}


//ð������    ������
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



//ð������    ���ڰ�
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




//ð������    �Ż���
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