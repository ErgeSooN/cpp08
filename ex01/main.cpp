/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayaman <ayaman@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 20:45:09 by ayaman            #+#    #+#             */
/*   Updated: 2023/12/20 20:45:12 by ayaman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(int, char **)
{
	try
	{
		Span a(4);

		a.addNumber(23);
		a.addNumber(44);
		a.addNumber(2);
		a.addNumber(33);


		int shortestSpan = a.shortestSpan();
		int longestSpan = a.longestSpan();

		std::cout << "a shortestSpan --> ( " << shortestSpan << " )" << std::endl;
		std::cout << "a longestSpan --> ( " << longestSpan << " )" << std::endl;
	
		Span b(5);

		b.addNumber(24);
		
		b.shortestSpan();

	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}