//Headers files Gave many ERRORS
#ifndef COURSE_H
#define COURSE_H

#include <iostream>
#include <string>

//#include <student.h>
using namespace std;

class Person {
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


class Course {
    private:
    string courseCode;
    string courseName;
    int maxStudents;
    Student* students;
    int currentStudent;
    public:
    Course(string courseCode,string courseName, int maxStudents, Student* students,int currentStudent) {
        this-> courseCode = courseCode;
        this-> courseName = courseName;
        this-> maxStudents = maxStudents;
        this-> students = students;
        currentStudent=currentStudent;

    }
    Course() {
        courseName="CS101- Introduction to programming";
        maxStudents=3;
        students=new Student[maxStudents];
        currentStudent=2;


    }
    void addStudent(const Student& s) {
        if (maxStudents < currentStudent){
            maxStudents += currentStudent;
        }
        else{
            cout<<"Course is full"<<endl;
        }
    }
    void dispaly() {
        cout<<courseCode<<endl;
        cout<<courseName<<endl;
        cout<<maxStudents<<endl;
        cout<<students<<endl;
        cout<<currentStudent<<endl;

    }

};

int CourseName;

int main() {

    cout<<"Course: "<< CourseName<<endl;
    int maxStudents;
    cout<<"Max Students: "<< maxStudents<<endl;
int name;
int id;
    cout<<"Currently Enrolled: "<<name <<id<<endl;
    cout<<"Instructor Info: "<<endl;
    cout<<"Name: "<<endl;
    cout<<"Department: "<<endl;
    cout<<"Expereince years: "<<endl;
    cout<<"Student Info: "<<endl;
    cout<<"Name: "<<endl;
    cout<<"Year: "<<endl;
    cout<<"Major: "<<endl;


}

