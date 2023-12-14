/***
 * CSE 2010 Fall 2023
 * Lab #6
 * Wyatt Rivas #008181609
 * 11-27-2023
 *
 * {Description of lab AKA paraphrase "abstract" section from lab}
 * We will learn how to derive a class from a base class and understand how member functions and variables can be passed down to the derived class. 
 * We will be learning how to apply virtual and overloaded functions in order to practice polymorphism. 
 * Lastly, we will create UML diagrams to connect classes and visualize their member functions and variables.
 * {Describe 1) what was most challenging and 2) how you solved/overcame the problem OR
 * the directions of how you PLAN to solve it} 
 * The most challenging part of this lab for me was trying to understand everything from the comprehension questions.
 *
***/

#include <iostream>
#include "Charmander.h"
#include "Pikachu.h"
using namespace std;

int main()
{  
    // Charmander first = Charmander();
    vector<string> pokemonType;
    pokemonType.push_back("Fire");

    cout << "-------Constructor Created---------\n";
    Charmander charlie = Charmander("Charlie", 100, 4, 4, pokemonType);

    // Pikachu first = Pikachu();
    vector<string> pokemonTypes;
    pokemonType.push_back("Electric");

    cout << "-------Constructor Created---------\n";
    Pikachu pika = Pikachu("Pika", 100, 4, 4, pokemonTypes);

    // Charmander
    cout << "\n-------Direct Speak---------\n";
    charlie.speak();

    //Pikachu
    cout << "\n-------Direct Speak---------\n";
    pika.speak();
    
    // Pokemon pointer to Charmander
    Pokemon * p1 = &charlie ;
    cout << "\n------- Speak called from Pokemon Pointer---------\n";
    (*p1).speak();

    // Charmander pointer to Charmander
    Charmander * c1 = &charlie ;
    cout << "\n------- Speak called from Charmander Pointer---------\n";
    (*c1).speak();

    //Pokemon pointer to Pikachu
    Pikachu * p2 = &pika ;
    cout << "\n------- Speak called from Pokemon Pointer---------\n";
    (*p2).speak();

    // Pikachu pointer to Pikachu
    Pikachu * p3 = &pika ;
    cout << "\n------- Speak called from Pikachu Pointer---------\n";
    (*p3).speak();

    // Charmander
    cout << "\n------- Print Stats---------\n";
    charlie.printStats();

    // Pikachu
    cout << "\n------- Print Stats---------\n";
    pika.printStats();
}

