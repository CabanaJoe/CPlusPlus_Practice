#include <iostream>

using namespace std;

// command to compile C++ code: g++ MaxElement.cpp -o MaxElement

// Write a function findMax that takes an integer pointer (array) and its size,
// and returns a pointer to the largest element.
int* findmax(int* arr, int size)
{
    int* PointerMax = arr; // assume first element is max

    for(int i = 0; i < size; i++)
    {
        if(*PointerMax < *(arr + i))
        {
            PointerMax = arr + i; // update pointer to new max
        }
    }

    return PointerMax;
}



int main()
{
    int myarray[] = {3,2,9,5,1,0,10};

    // save the max result of the array using the pointer function findmax that we created above.
    // we pass an array and the size of the array as parameters.
    int* result = findmax(myarray,sizeof(myarray)/sizeof(myarray[0]));

    // we want to print the max result which is a point we created above.

    cout << *result << endl;

}