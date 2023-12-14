#include <iostream>
#include <stdio.h>
#include "Pikachu.h"

/**
 * @brief Construct a new Pikachu:: Pikachu object
 * 
 */
Pikachu::Pikachu() : Pokemon() {
    type.push_back("Electric");
    skills.push_back("Thunder");
    skills.push_back("Spark");

    cout << "Default Constructor (Pikachu)\n";
}

/**
 * @brief Construct a new Pikachu:: Pikachu object
 * 
 * @param name 
 * @param hp 
 * @param att 
 * @param def 
 * @param t 
 */
Pikachu::Pikachu(string name, int hp, int att, int def, vector<string> t) : Pokemon(name, hp, att, def, t) {
    type.push_back("Electric");
    skills.push_back("Thunder");
    skills.push_back("Spark");

    cout << "Overloaded Default Constructor (Pikachu)\n";
}

/**
 * @brief says what a Pikachu says
 * 
 */
void Pikachu::speak(){
    cout << "Pikachu-pika\n";
}

/**
 * @brief calls printStats from the parent class (Pokemon) and appends the skills used for Pikachu
 * 
 */
void Pikachu::printStats(){
    Pokemon::printStats();
    cout << "Skills: ";
    for(int i = 0; i < skills.size(); i++){
        cout << skills[i] << "\t";
    }
    cout << endl;
}