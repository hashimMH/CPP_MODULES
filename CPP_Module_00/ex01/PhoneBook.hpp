/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 14:46:26 by hmohamed          #+#    #+#             */
/*   Updated: 2023/05/11 19:46:31 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <sstream>

class PhoneBook
{
	private:
		Contact contact[8];
		int	counter;
	public:
		PhoneBook();
		~PhoneBook();
		void set_contact(void);
		void search(void);
		void indexSearch(void);
};