#include <iostream>

using namespace std;

class Animal
{
public:
	Animal() {};
	virtual void makeSound() = 0;
	~Animal() {};
};

class Dog : public Animal
{
public:
	void makeSound()
	{
		cout << "Dog Dog" << endl;
	}
};

class Cat : public Animal
{
public:
	void makeSound()
	{
		cout << "Cat Cat" << endl;
	}
};

class Cow : public Animal
{
public:
	void makeSound()
	{
		cout << "Cow Cow" << endl;
	}
};

int main()
{
	Animal* myanimal[3];

	myanimal[0] = new Dog();
	myanimal[1] = new Cat();
	myanimal[2] = new Cow();

	for (int i = 0; i < 3; i++)
	{
		myanimal[i]->makeSound();
	}

	return 0;
}
