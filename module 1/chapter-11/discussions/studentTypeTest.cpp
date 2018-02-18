/////////////////////////////////////////////////////////////////////////
//Student type class test
//Author: Brandon Cabael
//Date: February 5, 2018
//File Name: studentTypeTest.cpp
/////////////////////////////////////////////////////////////////////////


#include "studentType.h"

#include <iostream>
#include <string>

using namespace std;

int main() 
{

//Instantiate studentType objects
    studentType studentOne;
    studentType studentTwo("John", "Doe");
    studentType studentThree("Jane", "Doe", 80, 100);

//Set variables for studentType object 1
    studentOne.setTestScore(90);
    studentOne.setProgrammingScore(80);
    studentOne.setName("Marilyn", "Monroe");

//Set scores for studentType object 2
    studentTwo.setTestScore(50);
    studentTwo.setProgrammingScore(75);

//Calculate course grades and GPA for student type objects
    studentOne.calculateCourseGrade();
    studentOne.calculateGPA();

    studentTwo.calculateCourseGrade();
    studentTwo.calculateGPA();    

    studentThree.calculateCourseGrade();
    studentThree.calculateGPA();

//Print results
    studentOne.print();
    studentTwo.print();
    studentThree.print();
}