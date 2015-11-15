#include "stack.hpp"

Stack::Stack()
{}

Stack::Stack(std::list<char> list): list_{list}
{}

Stack::~Stack()
{}

void Stack::push_top(char value)
{
	list_.push_back(value);
}

void Stack::pop_top()
{
	list_.pop_back();
}

char Stack::top() const
{
	return list_.back();
}

bool Stack::empty() const
 {
 	return list_.empty();
 }
