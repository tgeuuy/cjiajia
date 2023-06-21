#include <iostream>

using namespace std;


int main() {

    int a = 10;

    int * p;
    p = &a; //指针指向数据a的地址

    cout << *p << endl; //* 解引用
    cout << sizeof(p) << endl;
    cout << sizeof(char *) << endl;
    cout << sizeof(float *) << endl;
    cout << sizeof(double *) << endl;


    //指针变量p1指向内存地址编号为0的空间
    int * p1 = NULL;

    //访问空指针报错
    //内存编号0 ~255为系统占用内存，不允许用户访问
    cout << *p1 << endl;

    //野指针
    //指针变量p指向内存地址编号为0x1100的空间
    int * p2 = (int *)0x1100;

    //访问野指针报错
    cout << *p2 << endl;

    system("pause");

    return 0;
}