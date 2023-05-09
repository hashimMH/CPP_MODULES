/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 14:46:26 by hmohamed          #+#    #+#             */
/*   Updated: 2023/05/09 12:33:34 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

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