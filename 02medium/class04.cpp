#include <iostream>

using namespace std;

class Person {
public:
    void setName(string name) {
        m_Name = name;
    }

    //获取年龄
    int getAge() {
        return m_Age;
    }

    //设置年龄
    void setAge(int age) {
        if (age < 0 || age > 150) {
            cout << "你个老妖精!" << endl;
            return;
        }
        m_Age = age;
    }

    //情人设置为只写
    void setLover(string lover) {
        m_Lover = lover;
    }


    string getName() {
        return m_Name;
    }


private:
    string m_Name;
    int m_Age;
    string m_Lover;
};


int main() {

    Person p;
    //姓名设置
    p.setName("张三");
    cout << "姓名： " << p.getName() << endl;

    //年龄设置
    p.setAge(50);
    cout << "年龄： " << p.getAge() << endl;

    //情人设置
    p.setLover("苍井");
    //cout << "情人： " << p.m_Lover << endl;  //只写属性，不可以读取

    system("pause");

    return 0;
}