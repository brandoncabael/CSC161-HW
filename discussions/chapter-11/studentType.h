/////////////////////////////////////////////////////////////////////////
//Student type class definition
//Author: Brandon Cabael
//Date: February 5, 2018
//File Name: studentType.h
/////////////////////////////////////////////////////////////////////////



#ifndef STUDENTTYPE_H
#define STUDENTTYPE_H

#include <iostream>
#include <string>

using namespace std;

class studentType 
{

    //Define public class members
    public:
    void setName(string, string);
    void setTestScore(int);
    void setProgrammingScore(int);
    void print();
    void calculateGPA();
    void calculateCourseGrade();
    void getName(string&, string&);
    studentType();
    studentType(string, string);
    studentType(string, string, int, int);
    
    //Private class member variables
    private:
    string firstName;
    string lastName;
    char courseGrade;
    int testScore;
    int programmingScore;
    double GPA;
};
#endif