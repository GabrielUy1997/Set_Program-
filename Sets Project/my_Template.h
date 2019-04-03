#pragma once
#include <vector>
#include <iostream>
#include <string>
using namespace std;

template <typename T>
class myTemplate
{
private:
	vector<T> lists;
	vector<int>::iterator it, it1, it2;
	int sizeOfList;
	bool check;

public:
	myTemplate();
	void addToList(T item);
	void removeFromList(T item);
	void returnSizeOfList();
	bool doesItemExist(T item);
	void findUnion(myTemplate<T> firstset, myTemplate<T> secondset);
	void findIntersection(myTemplate<T> firstset, myTemplate<T> secondset);
	void emptySet();
	void displayContents();

};