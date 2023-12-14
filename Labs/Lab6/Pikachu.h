 #ifndef PIKACHU_H
 #define PIKACHU_H

 #include <string>
 #include <vector>
 #include "Pokemon.h"
 using namespace std;

 class Pikachu : public Pokemon{
    public:
        // -------- Constructors --------
        Pikachu();
        Pikachu(string name, int hp, int att, int def, vector<string> t);
        // -------- Mutator Functions --------
        void speak();
        void printStats();
    private:
        vector<string> skills;

};
#endif

