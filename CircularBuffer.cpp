// Implement a fixed - size circular buffer using a static array. Provide operations for push,
// pop, isFull, and isEmpty. Ensure correct wrap - around behavior and distinguish between
// full and empty states. No dynamic memory allocation is allowed. Simulate a producer


// Things to know 
// Circular buffering makes a good implementation strategy for a queue that has fixed
// maximum size. (operates well as a First in, First out buffer)

// uses a pointer and four integers
// Buffer start in memory, buffer capacity(length), write to buffer index(end), read
// from buffer index(start)

#include <iostream>

using namespace std;


// using an enumerator to set the size of the circular buffer
// CIRCULAR_BUFFER_SIZE is the size of our circular buffer.
// we just create the
// 
//enum {C = 20};


#define CIRCULAR_BUFFER_SIZE 20

static int Circular_buffer[CIRCULAR_BUFFER_SIZE]; // only (CIRCULAR_BUFFER_SIZE - 1) elements can be stored at a given time
int writeIndex = 0;
int readIndex = 0;


/*
// putting an element into the circular buffer.
int put(int item)
{
	// why is it modulo N?
	// 
	if ((writeIndex + 1) % CIRCULAR_BUFFER_SIZE == readIndex)
	{
		// Buffer is full, avoid overflow
		return 0;
	}

	Circular_buffer[writeIndex] = item;

	// reset writeIndex
	writeIndex = (writeIndex + 1) % CIRCULAR_BUFFER_SIZE;
	return 1;
}

// getting the value of the element at the buffer index of interest.
int get(int* value)
{
	if (readIndex == writeIndex)
	{
		//buffer is empty
		return 0;
	}

	*value = Circular_buffer[readIndex];
	readIndex = (readIndex + 1) % CIRCULAR_BUFFER_SIZE;
	// since this is inside a function it represents a true value. The functions
	// return type is an int or a bool. this case int.
	return 1;
}
*/

// adding elements to the end of the queu
int push(int item)
{



}

// This will remove the front element (the first and oldest element that was added to the queue)
int pop()
{

}

void isFull()
{

}

void isEmpty()
{

}

// original main function
/*

int main()
{

	// test circular buffer
	int value = 1001;
	// if we go to the function we can see the update of the value to be put into the buffer.
	while (put(value++));
	// going to the function we can see the value to be read is updated.
	while (get(&value))
		cout << "read: " << value << endl;
	// return 1 indicates the program has encountered an error or abnormal termination.
	// return 0 signifies successful execution.
	return 0;
	
}
*/