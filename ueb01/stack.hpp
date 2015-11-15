#ifndef STACK_H
#define STACK_H

#include <list>

class Stack
{
public:
	Stack();
	Stack(std::list<char>);
	~Stack();
	
	void push_top(char value);
	void pop_top();
	char top() const;
	bool empty() const;

private:
	std::list<char> list_;

};

#endif