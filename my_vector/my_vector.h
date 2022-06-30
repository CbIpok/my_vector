#pragma once
class MyVector
{
public:
	MyVector() = default;

	~MyVector();

	//todo copy constructor
	MyVector(const MyVector& myVector);

	//todo создать вектор размера n элементов. При этом элементы инициализируются нулями. 
	MyVector(size_t n);

	void reserve(size_t n);

	int& operator [](size_t i);

	void push_back(int i);

private:
	int* data {nullptr};
	int len {0};
	int cap {0};
};

