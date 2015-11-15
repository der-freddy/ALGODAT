#include "queue.hpp"

Queue::Queue()
{}

Queue::Queue(std::list<char> list): list_{list}
{}

Queue::~Queue()
{}

void Queue::push_back(char value)
{
	list_.push_back(value);
}

void Queue::pop_front()
{
	list_.pop_front();
}

char Queue::front() const
{
	return list_.front();
}

bool Queue::empty() const
 {
 	return list_.empty();
 }
