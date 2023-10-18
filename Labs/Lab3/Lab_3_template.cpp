/***
 * CSE 2010 Fall 2023
 * Lab #3
 * Wyatt Rivas #008181609
 * 10/13/2023
 *
 * {Description of lab AKA paraphrase "abstract" section from lab}
 * For this lab we will create our own class object. 
 * We will have to creat a class interface within a header file, implement member functions within a .cpp file, and test our class within a main file.
 * We will learen about private variables and ways to manipulate them using mutator function and access them via accessor functions with respect to scope.
 * We will also learn to link our files together.
 * {Describe 1) what was most challenging and 2) how you solved/overcame the problem OR
 * the directions of how you PLAN to solve it}
 *
***/

#include <iostream>
#include <string>
#include "Person.h"

using namespace std;

/**
 * The structure of the files are as follows:
 * Lab_3_template.cpp -> calls the class and is considered the "main" program
 * Person.cpp -> implements and contains the functionalities of the class
 * Person.h -> contains the interface, declarations of the class, and  includes 
 * the private variables and member functions
 */

/**
 *  Following the examples below, create your own class objects that calls ALL
 *  the functions. 
 * 
 *  Initialize your objects of type Person.
 *  Use the mutator functions to modify the private variables of your Person.
 *  Display the variables associated with your Person using the accessor functions
 *  and cout or print.
 */

int main()
{
    Person bob = Person("Bob", 100, "retired", true);
    cout << bob.getName() << endl;
    Person unknown = Person(); //Person unknown; // 
    cout << unknown.getName() << endl;
    
    cout << "Testing Age\n";
    cout << bob.getAge() << endl;
    bob.updateAge(101);
    cout << bob.getAge() << endl;

    cout << "Testing Occupation\n";
    cout << bob.getOccupation() << endl;
    bob.updateOccupation("cop");
    cout << bob.getOccupation() << endl;

    cout << "Testing lives_in_IE\n";
    cout << bob.getLivesInIE() << endl;
    bob.movedLocation();
    cout << bob.getLivesInIE() << endl;

    cout << "Testing isOlderThan\n";
    cout << bob.getName() << ':' << bob.getAge() << endl;
    
}

