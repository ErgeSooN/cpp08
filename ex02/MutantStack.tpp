/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayaman <ayaman@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 19:42:23 by ayaman            #+#    #+#             */
/*   Updated: 2023/12/20 20:42:43 by ayaman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_TPP
# define MUTANTSTACK_TPP
 
# include "MutantStack.hpp"

template<typename T, class Container>
MutantStack<T, Container>::MutantStack( void )
{

}

template<typename T, class Container>
MutantStack<T, Container>::MutantStack( const MutantStack &rhs )
{
	*this = rhs;
}

template<typename T, class Container>
MutantStack<T, Container>::~MutantStack( void )
{

}

template<typename T, class Container>
MutantStack<T, Container>	&MutantStack<T, Container>::operator=\
	( const MutantStack<T, Container> &rhs )
{

	this = std::stack<T, Container>::operator=(rhs);
	return (*this);
}



#endif // MUTANTSTACK_TPP