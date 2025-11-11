#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;

//#write Pclass Person {
#include<iostream>
private:
    string name;
    int id;
public:
    Person(string name, int id) {
        this->name = name;
        this->id = id;
    }
    Person() {
        name="";
        id=0;
    }

#include<ostream>
    void dispaly() {
        std::cout<<name<<std::endl;
        cout<<id<<endl;

    }
};







#endif
