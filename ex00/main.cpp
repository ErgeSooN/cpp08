/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayaman <ayaman@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 20:32:25 by ayaman            #+#    #+#             */
/*   Updated: 2023/12/20 19:49:25 by ayaman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"


int	main( int argc, char **argv )
{
	if (argc != 2)
	{
		std::cout << "You must be enter just one numbered arguments."\
			<< std::flush << std::endl;
		std::cout << "Sample: ./easyfind 5" << std::flush << std::endl;
		return (EXIT_FAILURE);
	}
	int i = 0;
	while(argv[1][i])
	{
		if (argv[1][i] < 50 || argv[1][i] > 57)
		{
			std::cout << "You must be enter just one numbered arguments."\
				<< std::flush << std::endl;
			std::cout << "Sample: ./easyfind 5" << std::flush << std::endl;
			return (EXIT_FAILURE);
		}
		i++;
	}

	int	arr[] = { 1, 2, 3, 4, 6, 7, 8, 9, 10, 1000, 235923, 11111, 99999, 88, 6666666, 177, 23234, 5, 149};

	printArray(arr);
	std::cout << "index count: " << sizeof(arr) / sizeof(int) << std::flush << std::endl;

	std::cout <<"----------- Vector Int Array Area ----------"<< std::flush << std::endl;
	std::vector<int>	vectorInt(arr, arr + sizeof(arr) / sizeof(int));
	easyfind(vectorInt, std::atoi(argv[1]));
	std::cout <<"--------------------------------------------"<< std::flush << std::endl;

	std::cout <<"------------ List Int Array Area -----------"<< std::flush << std::endl;
	std::list<int>	listInt(arr, arr + sizeof(arr) / sizeof(int));
	easyfind(listInt, std::atoi(argv[1]));
	std::cout <<"--------------------------------------------"<< std::flush << std::endl;
	return (EXIT_SUCCESS);
}