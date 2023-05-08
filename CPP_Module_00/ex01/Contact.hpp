/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 14:46:12 by hmohamed          #+#    #+#             */
/*   Updated: 2023/05/08 16:35:27 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Contact
{
	private:
		int index;
		std::string FirstName;
		std::string LastName;
		std::string Nickname;
		std::string PhoneNumber;
		std::string DarkSecret;
		
	public:
		Contact();
		~Contact();
		void setFname(std::string fname);
		void setLname(std::string lname);
		void setNickname(std::string nickname);
		void setPhoneNumber(std::string phn);
		void setDarkSecret(std::string darks);
		void setIndex(int ind);
		std::string getFname(void);
		std::string getLname(void);
		std::string getNickname(void);
		std::string getPhoneNumber(void);
		std::string getDarkSecret(void);
		int getIndex(void);
};
