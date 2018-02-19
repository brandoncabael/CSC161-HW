#include "arrayListType.h"
#include "unorderedArrayListType.h"

#include <iostream>
#include <limits.h>

using namespace std;

void unorderedArrayListType::insertAt(int location,
	int insertItem)
{
	if (location < 0 || location >= maxSize)
		cout << "The position of the item to be inserted "
		<< "is out of range." << endl;
	else if (length >= maxSize)			//list is full
		cout << "Cannot insert in a full list" << endl;
	else
	{
		for (int i = length; i > location; i--)
			list[i] = list[i - 1];		//move the elements down
		list[location] = insertItem;		//insert the item at 
							//the specified position
		length++;				//increment the length
	}
} //end insertAt

void unorderedArrayListType::insertEnd(int insertItem)
{
	if (length >= maxSize)				//the list is full
		cout << "Cannot insert in a full list." << endl;
	else
	{
		list[length] = insertItem;		//insert the item at the end
		length++;				//increment the length
	}
} //end insertEnd

int unorderedArrayListType::min()
{
    int smaller = INT_MAX;
	int length = listSize();

	for(int x = 1; x < length; x++)
	{
		if(list[x-1] < smaller)
		{
			smaller = list[x - 1];
		}
	}

	return smaller;
    
}

int unorderedArrayListType::seqSearch(int searchItem) const
{
	int loc;
	bool found = false;
	loc = 0;
	while (loc < length && !found)
		if (list[loc] == searchItem)
			found = true;
		else
			loc++;
	if (found)
		return loc;
	else
		return -1;
} //end seqSearch

void unorderedArrayListType::remove(int  removeItem)
{
	int loc;
	if (length == 0)
		cout << "Cannot delete from an empty list." << endl;
	else
	{
		int loc = seqSearch(removeItem);
		if (loc != -1)
			removeAt(loc);
		else
			cout << "The item to be deleted is not in the list."
			<< endl;
	}
} //end remove

void unorderedArrayListType::replaceAt(int location, int repItem)
{
	if (location < 0 || location >= length)
		cout << "The location of the item to be "
		<< "replaced is out of range." << endl;
	else
		list[location] = repItem;
} //end replaceAt

unorderedArrayListType::unorderedArrayListType(int size)
	: arrayListType(size)
{
}  //end constructor