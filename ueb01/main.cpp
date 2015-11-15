#include "stack.hpp"
#include "queue.hpp"
#include <memory>
#include <iostream>
#include <ctype.h>

using namespace std;

int main(int argc, char *argv[])
{

	// Stuff for Stack
	shared_ptr<Stack> stack = make_shared<Stack>(Stack()); // declarat stack
	string palin = string(argv[1]); // get word form in stream
	string::iterator i;

	for(i = palin.begin(); i!=palin.end(); ++i) // Put word on stack
	{
		stack->push_top(*i); // Push_back on stack

	}

	for(i = palin.begin(); i!=palin.end(); ++i) // get form Stack
	{
		if(*i == stack->top()) // what is on top
		{
			stack->pop_top(); //clear top element
			if(stack->empty())
			{
				cout << "Stack: Palindrom" << endl;
			}
		}
		else
		{
			cout << "Stack: Kein Palindrom" << endl;
			break;

		}
	}

	//Stuff for Queue
	shared_ptr<Queue> queue = make_shared<Queue>(Queue());

	string::reverse_iterator k;

	for(i=palin.begin(); i!=palin.end(); ++i)
	{
		queue->push_back(*i);
	}

	for(k=palin.rbegin(); k!=palin.rend(); ++k)
	{
		
		if(*k == queue->front())
		{
			queue->pop_front();
			if(queue->empty())
			{
				cout << "Queue: Palindorm" << endl;

			}
		}
		else
		{
			cout << "Queue: Kein Palindrom" << endl;
			break;
		}
	}



 return 0;
}