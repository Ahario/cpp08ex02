#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template <class T>
class MutantStack{
	public:
 		 using iterator=typename container::iterator;
		MutantStack()
		{
			first = 0;
			last = 0;
		}
		~MutantStack()
		{
		}
		MutantStack(const MutantStack& a)
		{
			*this = a;
		}
		MutantStack &operator=(const MutantStack& a)
		{
			this->first = a.first;
			this->last = a.last;
			return (*this);
		}
		void push(T n)
		{
			this->array[last]  = new int(<int>n);
			last += 1;
		}
		void top()
		{
			std::cout << this->array[first] << std::endl;
		}
		T begin()
		{
			return (&array[first]);
		}
		T end()
		{
			return (&array[last]);
		}
		int size()
		{
			return (last - first);
		}
	private:
		int first;
		int last;
		int *array;
};

#endif