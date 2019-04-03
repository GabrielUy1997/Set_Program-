#include "my_Template.h"

template <class T>
myTemplate<T>::myTemplate()
{
	sizeOfList = 0;
	check = 0;
}


template <class T>
void myTemplate <T>::addToList(T item)
{
	/**
	 *Add a specified item to the list
	 *@param any item
	 *@return N/A
	 */
	check = doesItemExist(item); //check if the item already exists in the set
	if (check == 1)
	{
		return; // if the item already exists in the set do not add
	}
	lists.push_back(item);
	++sizeOfList; //increment size of list
}

template <class T>
void myTemplate <T>::removeFromList(T item)
{
	/**
	 *Remove a specified item from the list
	 *@param any tiem
	 *@return N/A
	 */
	for (int i = 0; i < sizeOfList; i++)
	{
		check = doesItemExist(item); //check if the item exists in the set
		if (check == 0)
		{
			return; // if the item does not exist 
		}
		if (item == lists[i])
		{
			cout << "Item " << item << " removed" << endl;
			cout << endl;
			lists.erase(lists.begin() + i);
			return;
		}
	}
}

template <class T>
void myTemplate <T>::returnSizeOfList()
{
	/**
	 *Returns the size of a list
	 *@param N/A
	 *@return N/A
	 */
	cout << "The size of this set is: " << sizeOfList << endl;
	cout << endl;
}

template <class T>
bool myTemplate <T>::doesItemExist(T item)
{
	/**
	 *Checks if item exists
	 *@param any item
	 *@return true or false
	 */
	bool exists = 0;

	for (int i = 0; i < sizeOfList; i++)
	{
		if (item == lists[i])
		{
			cout << "Item " << item << " exists in the set" << endl;
			cout << endl;
			exists = 1;
		}
	}

	return exists;
}

template <class T>
void myTemplate <T>::findUnion(myTemplate<T> firstset, myTemplate<T> secondset)
{
	/**
	 *Find the Union of two sets
	 *@param two sets
	 *@return N/A
	 */
	myTemplate<T> unionSet;
	for (int i = 0; i < sizeOfList; i++)
	{
		if (firstset.doesItemExist(lists[i]) == 1 || secondset.doesItemExist(lists[i]) == 1)
		{
			unionSet.addToList(lists[i]);
		}
	}
	cout << "This is the Union of both sets: " << endl;
	unionSet.displayContents();
}

template <class T>
void myTemplate <T>::findIntersection(myTemplate<T> firstset, myTemplate<T> secondset)
{
	/**
	 *Finds the intersection of two sets
	 *@param two sets
	 *@return N/A
	 */
	myTemplate<T> intersectSet;
	for (int i = 0; i < sizeOfList; i++)
	{
		if (firstset.doesItemExist(lists[i]) == 1 && secondset.doesItemExist(lists[i]) == 1)
			//if the item exists in both sets add to the intersection set
		{
			intersectSet.addToList(lists[i]);
		}
	}
	cout << "This is the intersection of both sets: " << endl;
	intersectSet.displayContents();
	cout << endl;
}

template <class T>
void myTemplate <T>::emptySet()
{
	/**
	 *Empties the specified set
	 *@param N/A
	 *@return N/A
	 */
	it1 = lists.begin();
	it2 = lists.end();
	lists.erase(it1, it2);
	//erase between the beginning and the end of the list
}

template <class T>
void myTemplate <T>::displayContents()
{
	/**
	 *Displays the content of a certain list
	 *@param N/A
	 *@return N/A
	 */
	if (lists.empty())
	{
		cout << "This set is empty" << endl;
		return;
	}
	cout << "Contents of set: " << endl;
	for (int i = 0; i < sizeOfList; i++)
	{
		cout << '\t';
		cout << "Positon in the set: " << i << " Item: " << lists[i] << endl;
	}
}