//Headers files Gave many ERRORS
#ifndef COURSE_H
#define COURSE_H

#include <iostream>
#include <string>

//#include <student.h>
using namespace std;

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

#endif
