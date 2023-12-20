/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayaman <ayaman@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 19:42:16 by ayaman            #+#    #+#             */
/*   Updated: 2023/12/20 20:41:29 by ayaman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <algorithm>
# include <list>
# include <stack>
# include <deque>


template<typename T, class Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
	public:
		MutantStack( void );
		MutantStack( const MutantStack &rhs );
		~MutantStack( void );

		MutantStack	&operator=( const MutantStack &rhs );


		typedef typename Container::iterator	iterator;
		iterator	begin( void ) { return (this->c.begin()); }
		iterator	end( void ) { return (this->c.end()); }

};

# include "MutantStack.tpp"

#endif