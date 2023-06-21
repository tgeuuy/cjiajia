#include <iostream>

using namespace std;


//值传递
void swap1(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

//地址传递
void swap2(int *p1, int *p2) {
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}


//冒泡排序函数
void bubbleSort(int *arr, int len)  //int * arr 也可以写为int arr[]
{
    for (int i = 0; i < len - 1; i++) {
        for (int j = 0; j < len - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

//打印数组函数
void printArray(int arr[], int len) {
    for (int i = 0; i < len; i++) {
        cout << arr[i] << "  ";
    }
    cout << endl;
}

int main() {

    int a = 10;
    int b = 20;
    swap1(a, b); // 值传递不会改变实参

    swap2(&a, &b); //地址传递会改变实参

    cout << "a = " << a << endl;

    cout << "b = " << b << endl;


    int arr[10] = {4, 3, 6, 9, 1, 2, 10, 8, 7, 5};
    int len = sizeof(arr) / sizeof(int);

    bubbleSort(arr, len);

    printArray(arr, len);

    system("pause");

    return 0;
}