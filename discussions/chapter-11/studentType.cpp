/////////////////////////////////////////////////////////////////////////
//Student type class implementation
//Author: Brandon Cabael
//Date: February 5, 2018
//File Name: studentType.cpp
/////////////////////////////////////////////////////////////////////////


#include "studentType.h"

#include <iostream>
#include <string>

using namespace std;

//Set name of studentType object
    void studentType::setName(string fName, string lName)
    {
        firstName = fName;
        lastName = lName;
    }

//Set test score for studentType object
    void studentType::setTestScore(int tScore)
    {
        testScore = tScore;
    }

//Set programming score for studentType object
    void studentType::setProgrammingScore(int pScore)
    {
        programmingScore = pScore;
    }

//Print results
    void studentType::print()
    {
        cout << "Student: " << lastName << ", " << firstName << " had a test score of: " << testScore << " and a programming score of: " << programmingScore
        << " for a course grade of " << courseGrade << " and a GPA of " << GPA << "." << endl;
    }

//Calculate studentType object GPA
    void studentType::calculateGPA()
    {
        switch(courseGrade) {
            case 'A' :
                GPA = 4.0;
                break;
            
            case 'B' :
                GPA = 3.0;
                break;

            case 'C' :
                GPA = 2.0;
                break;

            case 'D' :
                GPA = 1.0;
                break;
            
            case 'F' :
                GPA = 0;
                break;

            default :
                cout << "Invalid Grade";
                break;
        }
    }

//Calculate course grade for studentType object
    void studentType::calculateCourseGrade()
    {
        double percentage;
        percentage = (programmingScore * 0.4) + (testScore * 0.6);

        if (percentage <= 100 && percentage >= 90)
        {
            courseGrade = 'A';
        }

        else if (percentage < 90 && percentage >= 80)
        {
            courseGrade = 'B';
        }

        else if (percentage < 80 && percentage >= 70)
        {
            courseGrade = 'C';
        }

        else if (percentage < 70 && percentage >= 60)
        {
            courseGrade = 'D';
        }

        else
        {
            courseGrade = 'F';
        }
    }

//Accessor function for name of studentType object
    void studentType::getName(string& fName, string& lName)
    {
        fName = firstName;
        lName = lastName;
    }

//Default Constructor
    studentType::studentType()
    {
        firstName = "";
        lastName = "";
        courseGrade = '*';
        testScore = 0;
        programmingScore = 0;
        GPA = 0.0;
    }

//Constructors for only name, and name with scores
    studentType::studentType(string fName, string lName)
    {
        firstName = fName;
        lastName = lName;
    }

    studentType::studentType(string fName, string lName, int tScore, int pScore)
    {
        firstName = fName;
        lastName = lName;
        testScore = tScore;
        programmingScore = pScore;
    }