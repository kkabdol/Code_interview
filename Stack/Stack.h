//
//  Stack.h
//  interview
//
//  Created by Shaun Choe on 5/6/14.
//  Copyright (c) 2014 Shaun Choe. All rights reserved.
//

#ifndef interview_Stack_h
#define interview_Stack_h

#include <iostream>

template <class T>
class Stack
{
public:
	Stack();
	~Stack();
	bool push(T data);
	bool pop(T* data);
    
protected:
	typedef struct Element {
		struct Element *next;
		T data;
	} Element;
	
	Element* head;
};

template <class T> Stack<T>::Stack() {
	head = NULL;
	return;
}

template <class T> Stack<T>::~Stack() {
	while( head ) {
		Element* next = head->next;
		delete head;
		head = next;
	}
    
	return;
}

template <class T> bool Stack<T>::push(T data) {
	Element* e = new Element;
	if( e == NULL ) {
		return false;
	}
    
	e->data = data;
	e->next = head;
	head = e;
	
	return true;
}

template <class T> bool Stack<T>::pop(T* data) {
	if ( head == NULL ) {
		return false;
	}
    
	Element *poped = head;
	*data = poped->data;
	head = head->next;
	delete poped;
    
	return true;
}


#endif
