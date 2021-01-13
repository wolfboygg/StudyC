#include <__bit_reference>
//
// Created by 郭磊 on 2021/1/13.
//

#ifndef STUDYC_PERSON_H
#define STUDYC_PERSON_H


class Person {
    friend Person operator+(Person &p1, Person &p2);
public:
    Person();

    __unused Person(int age, int score) : mAge(age), mScore(score) {}

    ~Person();

public:
//    Person &operator+(Person &person);

private:
    int mAge;
    int mScore;

public:
    int getAge();
    void setAge(int age);

    int getScore();
    void setScore(int score);

};


#endif //STUDYC_PERSON_H
