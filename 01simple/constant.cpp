//
// Created by tgeuuy on 2023/6/18.
//
//1、宏常量

#include <iostream>
using namespace std;

#define day 7

int main() {

    cout << "一周里共有 " << day << " 天" << endl;
    //day = 8;  //报错，宏常量不可以修改

    //2、const修饰变量
    const int month = 12;
    cout << "一年里总共有 " << month << " 个月份" << endl;
    //month = 24; //报错，常量是不可以修改的
//    cout << endl;

    system("pause");

    return 0;
}
