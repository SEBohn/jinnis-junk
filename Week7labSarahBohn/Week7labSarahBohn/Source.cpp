/*
Week 7 Lab Templates
Sarah Bohn
*/

#include<iostream>
#include<string>
#include<conio.h>
#include"ArrayList.h"

using namespace std;

int main()
{
	//check for memory leakage
#if defined(DEBUG) | defined(_DEBUG)
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
#endif

	//int array list
	ArrayList<int> intList;
	intList.add(16);
	intList.add(22);
	intList.add(45);
	intList.add(82);
	intList.add(68);
	intList.add(99);

	for (int i = 0; i < intList.getCount(); i++)
	{
		cout << intList.get(i) << ", ";
	}

	cout << "\n" << endl;
	cout << "Count: " << intList.getCount() << endl;
	cout << "Capacity: " << intList.getCapacity() << endl;

	cout << "\n\n" << endl;

	//string array list
	ArrayList<string> strList;
	strList.add("Sarah");
	strList.add("Mike");
	strList.add("Bastet");
	strList.add("Anubis");

	//display list data
	for (int i = 0; i < strList.getCount(); i++)
	{
		cout << strList.get(i) << ", ";
	}

	cout << "\n" << endl;
	cout << "Count: " << strList.getCount() << endl;
	cout << "Capacity: " << strList.getCapacity() << endl;


	system("pause");
	return 0;
}