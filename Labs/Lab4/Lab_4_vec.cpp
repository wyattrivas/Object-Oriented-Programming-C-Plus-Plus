/***
 * CSE 2010 Fall 2023
 * Lab #4
 * Wyatt Rivas #008181609
 * 10/30/2023
 *
 * For this lab we will be learning how to organize data using the data structures, arrays and vectors. 
 * We will also learn the similarities and differences between the two of them in terms of how they contain, access and updates elements and how to pass them into functions. 
 * Lastly, we will learn and understand how the data structures allocate memory and their relation to pointers.
 * {Describe 1) what was most challenging and 2) how you solved/overcame the problem OR
 * the directions of how you PLAN to solve it}
 *
***/

#include <iostream>
#include "ArrayVec.h"
#include "DisplayVec.h"
using namespace std;



int main()
{
    // initialize vec
    //vector<int> v;
    const int CAPACITY = 10;
    vector<int> test_vec(CAPACITY);

    //initialize ArrayVec and DisplayVec
    DisplayVec disp = DisplayVec();
    ArrayVec av = ArrayVec();

    // populate with values
    int range = 15;
    int num_elem = 10;
    av.randGenVec(test_vec, num_elem, range);

    // display contents
    int test_vec_size = test_vec.size();
    cout << "Array Elements\n";
    disp.printVector(test_vec);
    cout << "Array Memsize\n";
    disp.printMetaVector(test_vec);
}

