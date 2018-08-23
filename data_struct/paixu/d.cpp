//希尔排序是直接插入排序的改进，它的插入增量可以变化，增量为2的shell排序的时间代价可以达到θ(n的3/2次方)，有的增量可以达到θ(n的7/6次方)，很接近θ(n)。
//将距离某个增量的子序列分割后，分别进行直接插入排序排序。
#include <iostream>
using namespace std;
void ShellSort(int array[], int n)
{
	int i, j;
	int increment = n;
	do
	{
		increment = increment / 3 + 1;//增量序列
		for (i = increment + 1; i <= n; i++)
		{
			if (array[i] < array[i - increment])
			{
				array[0] = array[i];
				for (j = i - increment; j>0 && array[0] < array[j]; j -= increment)
					array[j + increment] = array[j];
				array[j + increment] = array[0];
			}
		}
	} 
	while (increment>1);
}
void main()
{
	int arr[10],i;
	cout << "请输入要排序的元素：" << endl;
	for ( i = 0; i < 10; i++)
	{
		cin >> arr[i];
		//cout << "排序前的无序数组元素:" << arr[i] << ' ';
	}
	cout<<endl;

	ShellSort(arr, 10);
	cout << "排序后的数组元素:" << endl;
	for ( i = 0; i < 10; i++)
	{
		cout << arr[i] << ' ';
	}
	cout<<endl;
	system("pause");
}


//注意：arr[0]是哨兵，不参与排序