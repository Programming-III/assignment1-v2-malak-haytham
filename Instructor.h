#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include "Person.h"
using namespace std;
//#write Instructor class here



class Instructor: public Person {
        private:
        string department;
        int experienceYears;
        public:
        Instructor(string department, int experienceYears) {
            this-> department = department;
            this-> experienceYears = experienceYears;
        }
        Instructor() {
            experienceYears=0;
           department="";
        }
        void dispaly() {
            cout<<department<<endl;
            cout<<experienceYears<<endl;
        }



    };








#endif
