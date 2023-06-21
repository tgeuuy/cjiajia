#include <iostream>

using namespace std;



int main() {

    int a = 10;
    int &b = a;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    b = 100;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;



    int a1 = 10;
    int b1 = 20;
    //int &c; //错误，引用必须初始化
    int &c1 = a1; //一旦初始化后，就不可以更改
    c1 = b1; //这是赋值操作，不是更改引用

    cout << "a1 = " << a1 << endl;
    cout << "b1 = " << b1 << endl;
    cout << "c1 = " << c1 << endl;

    system("pause");

    return 0;
}