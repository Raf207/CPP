/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafnasci <rafnasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 15:57:35 by rafnasci          #+#    #+#             */
/*   Updated: 2025/02/04 19:41:09 by rafnasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_HPP
# define TEST_HPP

class	test{

	public :
	
		test(void);
		~test(void);
		
		int		publicint;
		void	publicfonc(void);
		void	printint(int a);
		int		getstat(void);
	
	private :

		int _privateint;
		void	privatefonc(void);
		static int _stat;
};


#endif