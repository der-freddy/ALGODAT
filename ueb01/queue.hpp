#ifndef QUEUE_H
#define QUEUE_H

#include <list>

class Queue
{
public:
	Queue();
	Queue(std::list<char>);
	~Queue();
	
	void push_back(char value);
	void pop_front();
	char front() const;
	bool empty() const;

private:
	std::list<char> list_;

};

#endif