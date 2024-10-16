#include<cstddef>
#include<iostream>
#include<cstdlib>
#include<new>
using namespace std;
size_t totalAllocatedMemory=0;
void* operator new(size_t size)
{
	void* ptr=malloc(size);
	if(!ptr)
		throw bad_alloc();
	totalAllocatedMemory+=size;
	cout<<"Allocated "<<size<<" bytes at"<<endl;
	return ptr;
}
void* operator new[](size_t size)
{
	void* ptr=malloc(size);
	if(!ptr)
		throw bad_alloc();
	totalAllocatedMemory+=size;
	cout<<"Allocated "<<size<<" bytes for an array at "<<ptr<<endl;
	return ptr;
}
void operator delete(void* ptr) noexcept
{
	cout<<"Deleting memory at "<<ptr<<endl;
	free(ptr);
}

void operator delete[](void* ptr) noexcept
{
	cout<<"Deleting memory for an array at "<<ptr<<endl;
	free(ptr);
}
class MyClass
{
	public:
		MyClass()
		{
			cout<<"MyClass object created"<<endl;
		}
		~MyClass()
		{
			cout<<"MyClass object destroyed"<<endl;
		}
};
int main()
{
	cout<<"Program started"<<endl;
	MyClass* obj=new MyClass;
	delete obj;
	cout<<"Program ended"<<endl;
	return 0;
}
