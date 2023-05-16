/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 00:19:15 by hmohamed          #+#    #+#             */
/*   Updated: 2023/05/17 01:45:00 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include <fstream>

std::string replaceWords(std::string inputString, std::string oldWord, std::string newWord) {
    std::ostringstream os;
    std::istringstream is(inputString);
    std::string word;

    while (is >> word) {
        if (word == oldWord) {
            os << newWord << " ";
        } else {
            os << word << " ";
        }
    }
	 return os.str();

};

int main(int ac, char **av)
{
	if(ac == 4)
	{
		std::ostringstream text;
		std::ostringstream tmp;
		std::ifstream iFile(av[1]);
		std::string otext;

	    if (iFile.is_open()) {
	        std::string line;
	        while (std::getline(iFile, line))
			{
	            tmp << line << std::endl;
				std::string mData = replaceWords(tmp.str(), av[2], av[3]);
				mData.erase(mData.size() - 1);
				text << mData << std::endl;
				tmp.str("");
	        }
	        iFile.close();
			otext = text.str();
			if (!otext.empty()) 
			{
       			 otext.erase(otext.size() - 1);
    		}
			std::string re = ".replace";
			std::string outp = av[1] + re;
	        std::ofstream oFile(outp.c_str());
	        if (oFile.is_open()) {
	            oFile << otext;
	            oFile.close();
	            std::cout << "success." << std::endl;
	        } else {
	            std::cout << "Failed to create output file." << std::endl;
	        }
    	} 
		else 
		{
      		std::cout << "Failed to open the input file." << std::endl;
  		}
	}
	return (0);
}