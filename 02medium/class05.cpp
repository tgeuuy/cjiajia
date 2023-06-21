#include <iostream>

using namespace std;


class Person{
public:
    Person(){
        cout << "Person的构造函数调用" << endl;
    }
    ~Person(){
        cout << "Person的析构函数调用" << endl;
    }
};

void test01()
{
    Person p;
}

int main() {

    test01();

    system("pause");

    return 0;
}