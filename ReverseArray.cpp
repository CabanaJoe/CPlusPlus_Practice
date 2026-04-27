#include <iostream>


using namespace std;



void ReverseArray(int* arr, int size)
{
    // storing the first and last elements of the array so we can swap towards the middle,
    int* first_element = arr;
    int* last_element = arr + (size - 1);


    while(first_element < last_element)
    {
        // we need a temporary variable to swap
        int temp = *first_element;
        // swap the first and last elements
        *first_element = *last_element;
        *last_element = temp;
        // increment first_element index
        first_element++;
        // decrement last_element index
        last_element--;
    }
}



int main()
{
    // create a sample array

    int myArray[] = {1,2,3,4,5,6,7,8,9};

    // not the most fancy way to print the arrays, practicing with proper cout output structure.

    // now we print the initial array we just created.

    cout << "initial array: " << "{";

    for(int i = 0; i < sizeof(myArray)/sizeof(myArray[0]); i++)
    {
            cout << myArray[i];
            if( i < sizeof(myArray)/sizeof(myArray[0]) - 1)
            {
                cout << ",";
            }

    }

    cout << "}" << endl;


    // call the void function we created that modifies the array directly.

    ReverseArray(myArray,sizeof(myArray)/sizeof(myArray[0]));


    // printing new array that is now reversed thanks to the function we created earlier.

    cout << "reversed array: " << "{";

    for(int i = 0; i < sizeof(myArray)/sizeof(myArray[0]); i++)
    {
            cout << myArray[i];
            if( i < sizeof(myArray)/sizeof(myArray[0]) - 1)
            {
                cout << ",";
            }

    }

    cout << "}" << endl;


    return 0;

}