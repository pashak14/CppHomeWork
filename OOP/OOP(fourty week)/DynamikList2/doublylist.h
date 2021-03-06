#pragma once

class doublylist {
	struct item {
		int data;
		item* next;
		item* prev;
	};
	int size = 0; // size list for sorting 
public:
	item* firstitem = nullptr; // first item of the list
	item* list = nullptr; // the el with which we move
	item* temp = nullptr; // to create el


	doublylist(); // create empty list
	doublylist( int number ); // create a list with several el

	int out(); // output items of the list

	int push( int el ); // add item to the end of the list
	int unshift( int el ); // add item to the beginning of the list 

	int pop(); // remove item to the end of the list
	int shift(); // remove item to the beginning of the list

	int del( int el ); // remove item 

	int sortadd( int el ); // sorting list & add item 

	~doublylist(); // remove memory 
};

