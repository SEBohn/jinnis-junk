#pragma once

//template stuff

template <class T>
class ArrayList
{
private:
	//attributes

	const static int DEFAULT_SIZE = 5;
	T* list;
	int count;
	int capacity;

public:
	//constructs and destructs

	ArrayList(void)
	{
		this->list = new T[DEFAULT_SIZE];
		this->capacity = DEFAULT_SIZE;
		this->count = 0;
	}

	ArrayList(int initialCapacity)
	{
		this->list = new T[initialCapacity];
		this->capacity = initialCapacity;
		this->count = 0;
	}

	~ArrayList(void)
	{
		if (this->list != nullptr)
		{
			delete[] this->list;
			this->list = nullptr;
		}
	}

	//check if arraylist is empty
	bool isEmpty(void)
	{
		return count == 0;
	}

	//get item at a certain position
	T get(int position)
	{
		if (position < count)
			return list[position];
		else
			return NULL;

	}

	//add item to arraylist
	void add(T data)
	{
		//if array is full, double it
		if (count == capacity)
		{
			capacity = 2 * capacity;
			T* temp = new T[capacity];

			//copy items into bigger array
			for (int i = 0; i < count; i++)
			{
				temp[i] = list[i];
			}

			//delete smaller array
			delete[] list;

			//rename bigger array to old array
			list = temp;
		}

		//add data to array
		list[count] = data;

		//increment count
		count++;

	}

	//subtract item from arraylist
	void removeAt(int position)
	{
		//move items into the correct positons
		for (int i = position; i < count; i++)
		{
			list[i] = list[i + 1];
		}

		//decrease amount
		count--;
	}

	//get count of items currently in arraylist
	int getCount(void)
	{
		return count;
	}

	//get current capacity of arraylist
	int getCapacity(void)
	{
		return capacity;
	}
};

