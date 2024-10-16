#include <iostream>
#include <algorithm>
using std::copy;
template<typename T>
class DynamicArray
{
	private:
		T* data;
		size_t size,capacity;
		void ensureCapacity(size_t requiredCapacity)
		{
			if(requiredCapacity>capacity)
			{
				size_t newCapacity=requiredCapacity>capacity?capacity*2:requiredCapacity;
				T* newData=new T[newCapacity];
					 copy(data,data+size,newData);
					 delete[] data;
					 data=newData;
					 capacity=newCapacity;
				 }
			 }
	public:
			 DynamicArray():data(nullptr),size(0),capacity(0){}
			 ~DynamicArray(){
				 delete[] data;
			 }
			 DynamicArray(const DynamicArray&)=delete;
			 DynamicArray& operator=(const DynamicArray&)=delete;
			 DynamicArray(DynamicArray&& other)noexcept:data(other.data),size(other.size),capacity(other.capacity)
			 {
				 other.data=nullptr;
				 other.size=0;
				 other.capacity=0;
			 }
			 DynamicArray& operator=(DynamicArray&& other)noexcept
			 {
				 if(this!=&other)
				 {
					 delete[] data;
					 data=other.data;
					 size=other.size;
					 capacity=other.capacity;
					 other.data=nullptr;
					 other.size=0;
					 other.capacity=0;
				 }
				 return *this;
			 }
			 T& operator[](size_t index)
			 {
				 if(index>=size)
					 throw std::out_of_range("Index out of range");
				 return data[index];
			 }
			 const T& operator[](size_t index) const
			 {
				 if(index>=size)
					 throw std::out_of_range("Index out of range");
				 return data[index];
			 }
			 void pushBack(const T& value)
			 {
				 ensureCapacity(size+1);
				 data[size++]=value;
			 }
			 size_t getSize() const
			 {
				 return size;
			 }
			 size_t getCapacity() const
			 {
				 return capacity;
			 }
			 void clear()
			 {
				 delete[] data;
				 data=nullptr;
				 size=0;capacity=0;
			 }
};
int main()
{
	DynamicArray<int> arr;
	arr.pushBack(1);
	arr.pushBack(2);
	arr.pushBack(3);
	for (size_t i=0;i<arr.getSize();++i)
		std::cout<<arr[i]<<" ";
	std::cout<<std::endl;
	return 0;
}
