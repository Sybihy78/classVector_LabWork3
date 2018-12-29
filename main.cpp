#include <iostream> //
#include "Test.h"
#include "MyVector.h"


int main(int argc, char* argv[])
{
	
	Test t;
	t.test();
	/*
	//std::cout << create(100).get_capacity() << std::endl;
	
	MyVector vec1;
	std::cout << "size = " << vec1.get_size() << std::endl;
	std::cout << "capacity = " << vec1.get_capacity() << std::endl;
	for (int i = 0; i < 100; ++i) {
		vec1.push_back(i);
	}
	std::cout << "size = " << vec1.get_size() << std::endl;
	std::cout << "capacity = " << vec1.get_capacity() << std::endl;
	std::cout << vec1[vec1.get_size() - 1] << std::endl;
	std::cout << vec1[1000] << std::endl;
	std::cout << vec1[1] << std::endl;
	
	
	MyVector vec8 = vec1;
	std::cout << "size = " << vec8.get_size() << std::endl;
	std::cout << "capacity = " << vec8.get_capacity() << std::endl;
	vec8.push_back(1);
	
	const int sz = 1024;
	int myVec[sz];
	for (int i = 0; i < sz; ++i) {
		myVec[i] = i;
	}
	std::cout << " == " << std::endl;
	std::cout << "size = " << vec1.get_size() << std::endl;
	std::cout << "size = " << vec8.get_size() << std::endl;
	if (vec1 == vec8) {
		std::cout << "OK" << std::endl;
	}
	else { std::cout << "Error" << std::endl; }

	std::cout << " + " << std::endl;
	std::cout << "size = " << vec1.get_size() << std::endl;
	std::cout << "size = " << vec8.get_size() << std::endl;
	MyVector vec11 = vec1 + vec8;
	std::cout << "size vec11 = " << vec11.get_size() << std::endl;
	std::cout << "capacity vec11 = " << vec11.get_capacity() << std::endl;
	MyVector vec7 = MyVector(myVec, sz);
	std::cout << "size = " << vec7.get_size() << std::endl;
	std::cout << "capacity = " << vec7.get_capacity() << std::endl;
	//vec7.print();
	
	vec1.print();
	std::cout << std::endl;
	vec1.pop_back();
	vec1.print();
	std::cout << std::endl;
	int a = vec1.pop_back();
	std::cout << "a " << a << std::endl;
	vec1.print();
	std::cout << std::endl;
	std::cout << std::endl;
	
	MyVector vec4 = vec1;
	vec4.print();
	std::cout << std::endl;
	std::cout << "size = " << vec4.get_size() << std::endl;
	std::cout << "capacity = " << vec4.get_capacity() << std::endl;
	for (int i = 0; i < vec4.get_size(); ++i) {
		std::cout << vec4.at(i) << ' ';
	}
	std::cout << std::endl;
	
	int size2 = 1024;
	MyVector vec2 = MyVector();
	for (int i = 0; i < size2; ++i) {
		vec2.push_back(i);
	}
	for (int i = size2 - 1; i > 5; --i) {
		vec2.pop_back();
	}
	std::cout << "size = " << vec2.get_size() << std::endl;
	std::cout << "capacity = " << vec2.get_capacity() << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	
	MyVector vec3 = MyVector();
	for (int i = 0; i < 32; ++i) {
		vec3.push_back(i);
	}
	std::cout << "size = " << vec3.get_size() << std::endl;
	std::cout << "capacity = " << vec3.get_capacity() << std::endl;
	std::cout << std::endl;

	vec3.push_back(100);
	std::cout << "size = " << vec3.get_size() << std::endl;
	std::cout << "capacity = " << vec3.get_capacity() << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	*/
	
	
	system("pause"); //
	return 0;
}
