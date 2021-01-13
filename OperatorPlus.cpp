//
// Created by 郭磊 on 2021/1/13.
//

#include <iostream>
#include "Person.h"

using namespace std;


int main1(int argc, char *argv[]) {
    Person p1(28, 98);
    Person p2(27, 56);
    Person p3 = operator+(p1, p2);
    p3 = p1 + p2;
    cout << "person:age:" << p3.getAge() << ",score:" << p3.getScore() << endl;
}

// 全局函数运算符重载需要将成员函数注释掉，否则会报错
Person operator+(Person &p1, Person &p2) {
    Person temp;
    temp.setAge(p1.getAge() + p2.getAge());
    temp.setScore(p1.getScore() + p2.getScore());
    return temp;
}