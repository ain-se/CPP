#include<iostream>
using namespace std;
class Animal
{
	public:
		Animal()
		{
			cout<<"Animal created\n";
		}
		virtual ~Animal()
		{
			cout<<"Animal destroyed\n";
		}
		virtual void speak() const
		{
			cout<<"Some animal sound\n";
		}
};
class Mammal:virtual public Animal
{
	public:
		Mammal()
		{
			cout<<"Mammal created\n";
		}
		~Mammal()
		{
			cout<<"Mammal destroyed\n";
		}
		void speak() const override
		{
			cout<<"Mammal sound\n";
		}
};
class Bird:virtual public Animal
{
	public:
		Bird()
		{
			cout<<"Bird created\n";
		}
		~Bird()
		{
			cout<<"Bird destroyed\n";
		}
		void speak() const override
		{
			cout<<"Bird sound\n";
		}
};
class Dog:public Mammal,public Bird
{
	public:
		Dog()
		{
			cout<<"Dog created\n";
		}
		~Dog()
		{
			cout<<"Dog destroyed\n";
		}
		void speak() const override
		{
			cout<<"Woof!";
		}
};
int main()
{
	Dog myDog;
	myDog.speak();
	myDog.Animal::speak();
	return 0;
}
