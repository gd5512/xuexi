#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
/*该函数将数组下标[l1,r1]和[l2,r2]的有序序列合并成一个有序序列*/
void merge(vector<int>& nums, int l1, int r1, int l2, int r2 ) {
	int i = l1;                                               //左半边起始位置
	int j = l2;                                               //右半边起始位置
	int n = (r1 - l1 + 1) + (r2 - l2 + 1);                    //要合并元素的个数
	vector<int> temp(n);                                      //辅助数组
	int k = 0;	                                          //辅助数组起始位置
	while (i <= r1&&j <= r2) {                                //挑选两部分最小元素放入数组
		if (nums[i] < nums[j])
			temp[k++] = nums[i++];
		else
			temp[k++] = nums[j++];
	}
	//如果还有剩余，直接放入辅助数组中
	while (i <= r1)
		temp[k++] = nums[i++];
	while (j <= r2)
		temp[k++] = nums[j++];
	//更新原始数组元素
	for ( i = 0; i < n;i++)
	{
		nums[l1 + i] = temp[i];
	}
}
 
/*二路归并排序（递归实现）*/
void MergeSort(vector<int>& nums,int start, int end) {
	if (start < end) {
		int mid = (start + end) >> 1;				//分割序列
		MergeSort(nums, start, mid);				//对序列左半部分进行归并排序
		MergeSort(nums, mid + 1, end);				//对序列右半部分进行归并排序
		merge(nums, start, mid, mid + 1, end);                  //合并两个已经有序的子序列
	}
}
 
/*二路归并排序（迭代实现）*/
void MergeSort1(vector<int>& nums, int start, int end)
{
	int n = nums.size();
	if (start < end) {
		//step为组内元素个数,step/2为左子区间元素个数
		for (int step = 2; step/2 <n; step *= 2) {
			//每step个元素一组,组内前step/2和后step/2个元素进行合并
			for (int i = 0; i < n; i += step) {
				int mid = i + step / 2 - 1;					//左子区间元素个数为step/2
				if(mid+1<n)							//右子区间存在元素个数则合并
					//左子区间[i,mid],右子区间[mid+1, min(i+step-1, n-1)]
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
