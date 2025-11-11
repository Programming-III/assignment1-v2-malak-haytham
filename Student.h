#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include <string>
#using namespace std;
//#write student class here


 class Student: public Person {
        int yearLevel;
        string major;
        public:

        Student(int yearLevel, string major) {
            this-> yearLevel = yearLevel;
            this-> major = major;
        }
        Student() {
            yearLevel=0;
            major="";
        }
        string getMajor() {
            return major;
        }

        void dispaly() {
            cout<<major<<endl;

        }

    };










#endif
