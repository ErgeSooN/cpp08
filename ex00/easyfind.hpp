/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayaman <ayaman@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 20:32:32 by ayaman            #+#    #+#             */
/*   Updated: 2023/12/16 20:32:46 by ayaman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>
# include <vector>
# include <list>

template<typename T>
void	easyfind( T &container, int value )
{

	if (std::find(container.begin(), container.end(), value) != container.end())
		std::cout << "Found!" << std::flush << std::endl;
	else
		std::cout <<"Not Found!" << std::flush << std::endl;
}

template<typename T>
void	printArray( T &arr )
{
	int	i = -1;

	while (arr[++i] != '\0')
	{
			std::cout << arr[i] << std::flush;
		if (arr[i + 1] != '\0')
			std::cout << ", " << std::flush;
	}
	std::cout << std::flush << std::endl;
}


#endif 