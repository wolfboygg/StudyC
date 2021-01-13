//
// Created by 郭磊 on 2021/1/13.
//

#include "Person.h"

Person::Person() {

}

Person::~Person() {

}

//Person &Person::operator+(Person &person) {
//    this->mScore += person.mScore;
//    this->mAge += person.mAge;
//    return *this;
//}

int Person::getAge() {
    return this->mAge;
}

int Person::getScore() {
    return this->mScore;
}

void Person::setAge(int age) {
    this->mAge = age;
}

void Person::setScore(int score) {
    this->mScore = score;
}
