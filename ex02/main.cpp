/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayaman <ayaman@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 19:42:05 by ayaman            #+#    #+#             */
/*   Updated: 2023/12/20 20:42:59 by ayaman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "MutantStack.hpp"

void	MutanStackSelfTest( void )
{
	std::cout << "********* SelfTest Area *********"\
		<< std::flush << std::endl;

	MutantStack<int>	mstack;

	std::cout << "mstack.size(): " << mstack.size()\
		<< std::flush << std::endl;
	mstack.push(5);
	std::cout << "mstack.size(): " << mstack.size()\
		<< std::flush << std::endl;
	mstack.push(17);
	std::cout << "mstack.size(): " << mstack.size()\
		<< std::flush << std::endl << std::endl;

	std::cout << "mstack.top(): " << mstack.top()\
		<< std::flush << std::endl << std::endl;

	std::cout << "mstack.size(): " << mstack.size()\
		<< std::flush << std::endl;
	mstack.pop();
	std::cout << "mstack.size(): " << mstack.size()\
		<< std::flush << std::endl << std::endl;

	mstack.push(3);
	mstack.push(8);
	mstack.push(737);
	// [...]
	mstack.push(0);

	MutantStack<int>::iterator	it = mstack.begin();
	MutantStack<int>::iterator	ite = mstack.end();

	std::cout << std::flush << std::endl;
	std::cout << "it: " << *it << std::flush << std::endl;
	++it;
	std::cout << "++it: " << *it << std::flush << std::endl;
	--it;
	std::cout << "--it: " << *it << std::flush << std::endl << std::endl;

	std::cout << "it = mstack.begin(): " << *mstack.begin()\
		<< std::flush << std::endl;
	std::cout << "ite = mstack.end(): " << *mstack.end()\
		<< std::flush << std::endl;
	std::cout << "while...  NOT: mstack.size(): " << mstack.size()\
		<< std::flush << std::endl;
	int	i = 0;
	while (it != ite)
	{
		std::cout << "i[" << i++ << "]: " << std::flush;
		std::cout << *it << std::flush << std::endl;
		++it;
	}
	std::stack<int>	s(mstack);
	std::cout << std::flush << std::endl;
	std::cout << "1-> s.size(): " << s.size() << std::flush << std::endl;
	std::cout << "1-> s.top(): " << s.top() << std::flush << std::endl << std::endl;

	s.pop();
	std::cout << "2-> s.size(): " << s.size() << std::flush << std::endl;
	std::cout << "2-> s.top(): " << s.top() << std::flush << std::endl;

}

void	MutantStackMendatoryTest( void )
{
	std::cout << "********* MendatoryTest Area *********"\
		<< std::flush << std::endl;

	MutantStack<int>	mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << mstack.top() << std::flush << std::endl;

	mstack.pop();

	std::cout << mstack.size() << std::flush << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	// [...]
	mstack.push(0);

	MutantStack<int>::iterator	it = mstack.begin();
	MutantStack<int>::iterator	ite = mstack.end();

	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::flush << std::endl;
		++it;
	}
	std::stack<int>	s(mstack);

}

int	main()
{
	MutantStackMendatoryTest();
	MutanStackSelfTest();
	return (0);
}
