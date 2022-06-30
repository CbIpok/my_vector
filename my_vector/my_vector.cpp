#include "my_vector.h"

MyVector::MyVector(const MyVector& myVector)
{

}

MyVector::~MyVector()
{
	delete[] data;
}

MyVector::MyVector(size_t n)
{

}

void MyVector::reserve(size_t n)
{

}

int& MyVector::operator[](size_t i)
{
	return *data;
}

void MyVector::push_back(int i)
{
}


