#include "MyVector.h"
#include <iostream>

int MyVector::countAllVec = 0;
int MyVector::countNowVec = 0;


MyVector::MyVector():
	size(0),
	capacity(32)
{
	growCapacity();
	
	parr = new int[capacity];
	
	++countAllVec;
	++countNowVec;
}

MyVector::MyVector(int myVec[], const int user_size = 10):
	size(user_size),
	capacity(32)
{
	growCapacity();
	
	parr = new int[size];
	for (int i = 0; i < size; ++i) {
		parr[i] = myVec[i];
	}
	
	++countAllVec;
	++countNowVec;
}

MyVector::MyVector(const MyVector& copyArr) :
	size(copyArr.size),
	capacity(copyArr.capacity)
{
	growCapacity();

	parr = new int[capacity];
	for (int i = 0; i < copyArr.size; ++i) {
		parr[i] = copyArr.parr[i];
	}
	
	++countAllVec;
	++countNowVec;
}

MyVector::MyVector(MyVector&& moveArr) :
	size(moveArr.size),
	capacity(moveArr.capacity)
{
	growCapacity();
	
	parr = new int[size]; 
	for (int i = 0; i < moveArr.size; ++i) {
		parr[i] = moveArr.parr[i];
	}
	moveArr.parr = nullptr;
	moveArr.size = 0;
	
	++countAllVec;
	++countNowVec;
}

MyVector::~MyVector()
{
	delete[] parr;
	--countNowVec;
}

void MyVector::growCapacity() {
	while (capacity < size) {
		capacity *= TWO;
	}
}

int MyVector::getCountAllVec() {
	return countAllVec;
}

int MyVector::getCountNowVec() {
	return countNowVec;
}

bool MyVector::empty() const {
	if (size == 0) {
		return true;
	}
	return false;
}

int MyVector::get_size() const {
	return size;
}

int MyVector::get_capacity() const {
	return capacity;
}

void MyVector::push_back(int add_element) {

	if (size != capacity) {
		parr[size] = add_element;
		++size;
	}
	else {
		capacity *= TWO;
		int* new_ptr = new int[capacity];
		for (int i = 0; i < size; ++i) {
			new_ptr[i] = parr[i];
		}
		new_ptr[size] = add_element;
		++size;
		delete[] parr;
		parr = new_ptr;
	}
}

int MyVector::pop_back() {
	
	if (size == 0) {
		std::cout << "Not elements in array" << std::endl;
	}
	
	size = size - 1;
	return parr[size];
	
}

int& MyVector::at(int index) const {
	return parr[index];
}

void MyVector::print() const {
	for (int i = 0; i < size; ++i) {
		std::cout << parr[i] << ' ';
	}
}

MyVector& MyVector::operator=(const MyVector& copy) {
	if (this == &copy) {
		return *this;
	}
	size = copy.size;
	delete[] parr;
	parr = new int[size];
	for (int i = 0; i < size; ++i) {
		parr[i] = copy.parr[i];
	}
	return *this;
}

MyVector& MyVector::operator=(MyVector&& move) {
	if (this == &move) {
		return *this;
	}
	size = move.size;
	delete[] parr;
	parr = move.parr;
	move.size = 0;
	move.parr = nullptr;
	return *this;
}
int& MyVector::operator[ ](const int index) {
	for (int i = 0; i < size; ++i) {
		if (i == index) {
			return parr[i];
		}
	}
}
bool MyVector::operator==(const MyVector& obj) {
	return size == obj.size;
}
bool MyVector::operator!=(const MyVector& obj) {
	return size != obj.size;
}
bool MyVector::operator>(const MyVector& obj) {
	return size > obj.size;
}
bool MyVector::operator<(const MyVector& obj) {
	return size < obj.size;
}
bool MyVector::operator>=(const MyVector& obj) {
	return size >= obj.size;
}
bool MyVector::operator<=(const MyVector& obj) {
	return size <= obj.size;
}

MyVector MyVector::operator+(const MyVector& obj) {
	MyVector tmp;
	growCapacity();
	
	for (int i = 0; i < size; ++i) {
		tmp.push_back(parr[i]);
	}
	for (int i = 0; i < obj.size; ++i) {
		tmp.push_back(obj.parr[i]);
	}
	
	return tmp;
}

std::ostream& operator<<(std::ostream& os, const MyVector& obj)
{
	for (int i = 0; i < obj.get_size(); ++i) {
		os << obj.at(i) << ' ';
	}
	return os;
}
