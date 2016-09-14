#include "list.h"
/*
list::list()
{

}

list::list(T data)
{
	indata=data;
}


*/
template  <class T>
list<T>::list()
{

}
template  <class T>
list<T>::list(T data)
{
	indata=data;
}
template  <class T>
bool list<T>::ru(T data)
{
		if(next==nullptr){
			next=new list(data);
		}else{
			list temp=next;
			while (temp.next!=nullptr) {
				temp=temp.next;
			}
			temp.next=new list(data);
		}
		return true;
}
template  <class T>
bool list<T>::chu(T &data)
{

}
