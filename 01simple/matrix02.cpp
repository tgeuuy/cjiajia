#include <iostream>

using namespace std;


int main() {

    //��������;
    //1�����Ի�ȡ��������ռ���ڴ�ռ��С
    int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

    cout << "����������ռ�ڴ�ռ�Ϊ�� " << sizeof(arr) << endl;
    cout << "ÿ��Ԫ����ռ�ڴ�ռ�Ϊ�� " << sizeof(arr[0]) << endl;
    cout << "�����Ԫ�ظ���Ϊ�� " << sizeof(arr) / sizeof(arr[0]) << endl;

    //2������ͨ����������ȡ�������׵�ַ
    cout << "�����׵�ַΪ�� " << arr << endl;
    cout << "�����е�һ��Ԫ�ص�ַΪ�� " << &arr[0] << endl;
    cout << "�����еڶ���Ԫ�ص�ַΪ�� " << &arr[1] << endl;

    //arr = 100; �����������ǳ�������˲����Ը�ֵ


    system("pause");

    return 0;
}