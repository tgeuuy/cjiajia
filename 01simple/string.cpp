#include <iostream>
#include <string>

using namespace std;

int main() {
    char str1[] = "hello world";
    cout << str1 << endl;
    string str = "hello world";
    cout << str << endl;
    bool flag = true;
    cout << flag << endl; // 1

    flag = false;
    cout << flag << endl; // 0

    cout << "size of bool = " << sizeof(bool) << endl; //1

    system("pause");


    return 0;
}