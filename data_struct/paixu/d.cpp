//ϣ��������ֱ�Ӳ�������ĸĽ������Ĳ����������Ա仯������Ϊ2��shell�����ʱ����ۿ��Դﵽ��(n��3/2�η�)���е��������Դﵽ��(n��7/6�η�)���ܽӽ���(n)��
//������ĳ�������������зָ�󣬷ֱ����ֱ�Ӳ�����������
#include <iostream>
using namespace std;
void ShellSort(int array[], int n)
{
	int i, j;
	int increment = n;
	do
	{
		increment = increment / 3 + 1;//��������
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
	cout << "������Ҫ�����Ԫ�أ�" << endl;
	for ( i = 0; i < 10; i++)
	{
		cin >> arr[i];
		//cout << "����ǰ����������Ԫ��:" << arr[i] << ' ';
	}
	cout<<endl;

	ShellSort(arr, 10);
	cout << "����������Ԫ��:" << endl;
	for ( i = 0; i < 10; i++)
	{
		cout << arr[i] << ' ';
	}
	cout<<endl;
	system("pause");
}


//ע�⣺arr[0]���ڱ�������������