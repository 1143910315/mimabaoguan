#ifndef LIST_H
#define LIST_H

template  <class T>
class list
{
public:
	list();
	list(T data);
	bool ru(T data);
	bool chu(T &data);
private:
	T indata;
	list<T> *next;
};

#endif // LIST_H
