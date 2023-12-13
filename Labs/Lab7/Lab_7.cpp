//Lab_7.cpp
/**
 * CSE 2010 Fall 2023
 * Lab #7
 * Wyatt Rivas #008181609
 * 12-12-2023
 * 
 * Description of the lab: In this lab we will learn how to use generic programming via
 * templates. This will enable us to expand previous classes to have members that can hold
 * and process through various data types. Lastly, we will learn the difference between
 * implicit and explicit instantiations.
 * Most challenging part: The most challenging part of this lab was trying to understand
 * how templates and class templates work.
 * 
 */



#include <iostream>
#include "ArrayVec.h"
#include "DisplayArr.h"
using namespace std;
int main()
{
    // initialize arr
    const int CAPACITY = 10;
    double test_arr[CAPACITY];

    string data_type = "float";
    //initialize ArrayVec and DisplayArr
    DisplayArr<double> disp = DisplayArr<double>(data_type);
    ArrayVec<double> av = ArrayVec<double>();

    // populate with values
    int range = 15;
    int num_elem = 10;
    av.randGenArr(test_arr, num_elem, range);

    // display contents
    int test_arr_size = av.getSize(test_arr, CAPACITY);
    cout << "Array Elements\n";
    disp.printArray(test_arr, test_arr_size);
    cout << "Array Memsize\n";
    disp.printMetaArray(test_arr, test_arr_size);
}
