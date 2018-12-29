#pragma once


const int TWO = 2;


class MyVector
{
	int* parr = nullptr;
	int size;
	int capacity;
	static int countAllVec;
	static int countNowVec;
public:
	MyVector();
	MyVector(int[], const int);
	MyVector(const MyVector&);
	MyVector(MyVector&&);
	virtual ~MyVector();

	int getCountAllVec();
	int getCountNowVec();

	bool empty() const;
	int get_size() const;
	int get_capacity() const;
	void push_back(int);
	int pop_back();
	int& at(int) const;
	void print() const;

	MyVector& operator=(const MyVector&);
	MyVector& operator=(MyVector&&);
	int& operator[ ](const int);
	
	bool operator==(const MyVector&);
	bool operator!=(const MyVector&);
	bool operator>(const MyVector&);
	bool operator<(const MyVector&);
	bool operator>=(const MyVector&);
	bool operator<=(const MyVector&);

	//MyVector operator+(const MyVector& obj);
};



