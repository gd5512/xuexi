#include <iostream>

using namespace std;

//// 写法1
void insertSort_0(int arr[], int length)
{
    int i, j, key;
    for (i = 0; i < length; i++){
        key = arr[i];
        for (j = i - 1; j >= 0; j--){
            if (arr[j] > key) {
                arr[j + 1] = arr[j];
            }
            else
                break;
        }
        arr[j + 1] = key;
    }
}

//// 写法2
void insertSort_1(int arr[], int length)
{
    int j, key;
    for (int i = 1; i < length; i++){
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}



int main()
{
    int iArr[] = { 7, 8, 9, 5, 2, 0, 12, 6 };
    int len = sizeof iArr / sizeof(iArr[0]);

    cout << "排序前：";
    for (int i = 0; i < len; i++)    {
        cout <<  iArr[i] << " ";
    }

    cout << "\n排序后：";
    insertSort_0(iArr, len);
    for (int j = 0; j < len; j++)    {
        cout << iArr[j] << " ";
    }
    cout << endl;

    system("pause");
    return 0;
}
