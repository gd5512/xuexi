
#include <iostream>
using namespace std;
void MaxHeapFixDown(int a[], int i, int n);
void HeapSort(int a[], int n);

void main()
{
	int i;
	int arr[10]={50,10,90,30,70,40,80,60,20,100};
	//cout << "请输入要排序的元素：" << endl;
	cout<<"原始数据："<<endl;
	for ( i = 0; i < 10; i++)
	{
		cout <<arr[i]<<" ";
	
	}
    cout<<endl;

	HeapSort(arr, 10);
	cout << "排序后的数组元素:" << endl;
	for ( i = 0; i < 10; i++)
	{
		cout << arr[i] << ' ';
	}
	cout<<endl;
//	system("pause");
}





//构造最大堆
void MaxHeapFixDown(int a[], int i, int n){
    int j = 2*i+1;
    int temp = a[i];
    while(j<n){
        if(j+1<n&&a[j]<a[j+1])
            ++j;
        if(temp>a[j])
            break;
        else{
            a[i]=a[j];
            i=j;
            j=2*i+1;
        }
    }
    a[i]=temp;
}

//堆排序
void HeapSort(int a[], int n){
	int i;
    for( i= n/2-1;i>=0;i--)
        MaxHeapFixDown(a,i,n);
    for( i=n-1;i>=1;i--){
        swap(a[i],a[0]);
        MaxHeapFixDown(a,0,i);
    }
}
