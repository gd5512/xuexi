#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
/*�ú����������±�[l1,r1]��[l2,r2]���������кϲ���һ����������*/
void merge(vector<int>& nums, int l1, int r1, int l2, int r2 ) {
	int i = l1;                                               //������ʼλ��
	int j = l2;                                               //�Ұ����ʼλ��
	int n = (r1 - l1 + 1) + (r2 - l2 + 1);                    //Ҫ�ϲ�Ԫ�صĸ���
	vector<int> temp(n);                                      //��������
	int k = 0;	                                          //����������ʼλ��
	while (i <= r1&&j <= r2) {                                //��ѡ��������СԪ�ط�������
		if (nums[i] < nums[j])
			temp[k++] = nums[i++];
		else
			temp[k++] = nums[j++];
	}
	//�������ʣ�ֱ࣬�ӷ��븨��������
	while (i <= r1)
		temp[k++] = nums[i++];
	while (j <= r2)
		temp[k++] = nums[j++];
	//����ԭʼ����Ԫ��
	for ( i = 0; i < n;i++)
	{
		nums[l1 + i] = temp[i];
	}
}
 
/*��·�鲢���򣨵ݹ�ʵ�֣�*/
void MergeSort(vector<int>& nums,int start, int end) {
	if (start < end) {
		int mid = (start + end) >> 1;				//�ָ�����
		MergeSort(nums, start, mid);				//��������벿�ֽ��й鲢����
		MergeSort(nums, mid + 1, end);				//�������Ұ벿�ֽ��й鲢����
		merge(nums, start, mid, mid + 1, end);                  //�ϲ������Ѿ������������
	}
}
 
/*��·�鲢���򣨵���ʵ�֣�*/
void MergeSort1(vector<int>& nums, int start, int end)
{
	int n = nums.size();
	if (start < end) {
		//stepΪ����Ԫ�ظ���,step/2Ϊ��������Ԫ�ظ���
		for (int step = 2; step/2 <n; step *= 2) {
			//ÿstep��Ԫ��һ��,����ǰstep/2�ͺ�step/2��Ԫ�ؽ��кϲ�
			for (int i = 0; i < n; i += step) {
				int mid = i + step / 2 - 1;					//��������Ԫ�ظ���Ϊstep/2
				if(mid+1<n)							//�����������Ԫ�ظ�����ϲ�
					//��������[i,mid],��������[mid+1, min(i+step-1, n-1)]
					merge(nums, i, mid, mid + 1, _cpp_min(i + step - 1, n-1));//@!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!min()
			}
		}
	}
}
 
int main() {

	int a[10]={20,73,1,8,9,3,4,0,5,6}; 

    vector <int>nums(a,a+10);

//	MergeSort(nums,0,9);
	
	MergeSort1(nums, 0, nums.size());
	
	for(int i=0;i<nums.size();i++)
		cout<<nums[i]<<' ';
	cout << endl;
	return 0;
}
