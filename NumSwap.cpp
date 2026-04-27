#include <iostream>



using namespace std;


void swap(int* first_num, int* second_num)
{
    // create a temporary variable so we can swap two integers passed into our swap function.
    // preserve first number value so we dont lose the value of first_num during variable swap.
    int temp = *first_num;
    // set our first_num pointer equal to the dereferenced second_num pointer to begin swap.
    *first_num = *second_num;
    // use temporary variable we created earlier to set the second_num pointer to the value being
    // store in temp.
    *second_num = temp;    

}


int main()
{
    int a, b;

    a = 5;
    b = 10;

    cout << "a = " << a << " " << "b = " << b << endl;


    swap(a,b);


    cout << "a = " << a << " " << "b = " << b << endl;


    return 0;

}