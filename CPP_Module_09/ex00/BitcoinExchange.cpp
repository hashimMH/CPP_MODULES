/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 14:42:21 by hmohamed          #+#    #+#             */
/*   Updated: 2024/04/04 02:00:34 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"


double stringToDouble(const string& str) {
    double result;
    istringstream iss(str);
    iss >> result;
    return result;
}

void parseLine(const string& line, map<string, string>& keyValueMap) {
   
	//cout << line << endl;
    size_t pos = line.find(',');
    if (pos != string::npos) {
        string key = line.substr(0, pos);
        string value = line.substr(pos + 1);
        keyValueMap[key] = value;
    }
}

BitcoinExchange::BitcoinExchange()
{
	
};

void BitcoinExchange::excute(std::string inputFile)
{
	try
	{
		 ifstream file1("data.csv");
  		 ifstream file2(inputFile.c_str());
		  map<string, string> keyValueMap;

		    if (!file1.is_open() || !file2.is_open()) 
			{
				throw std::logic_error("error opening the files"); 
    		}

	    // Read contents of file1 and store key-value pairs in the map
	    string line;
	    while (getline(file1, line)) {
	        parseLine(line, keyValueMap);
	    }
		// cout<< inputFile << endl;
		
		//    for (map<string, string>::iterator its = keyValueMap.begin(); its != keyValueMap.end(); ++its)
		//    {
		// 		cout << its->first << " : " << its->second <<endl;
		//    }

	    // Compare contents of file2 with the map
	    while (getline(file2, line)) {
	        string key;
			string val;
			float vl;
	        size_t pos = line.find(' ');
	        if (pos != string::npos) {
	            key = line.substr(0, pos);
				val = line.substr(pos + 3);
	        } else {
	            key = line;
	        }
			vl = stringToDouble(val);
			if(val.empty())
				cerr <<"Error: bad input => " << key <<endl;
			else if (vl < 0 )
				cerr <<"Error: not a positive number." << endl;
			else if (vl > 1000)
				cerr <<"Error: too large a number." << endl;
			else
			{
		        map<string, string>::iterator it = keyValueMap.lower_bound(key);
		        if (it != keyValueMap.end())
				{
		            cout << key << " => " << val << " = " << vl * stringToDouble(it->second) << endl;
		        }
			}
	    }

	    file1.close();
	    file2.close();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

};

BitcoinExchange::BitcoinExchange(const BitcoinExchange& cp)
{
	(void)cp;
	std::cout << "Copy constructor called" << std::endl;
};
BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& cp)
{
	std::cout << "Copy assignment operator called" << std::endl;
	(void)cp;
	return (*this);
};

BitcoinExchange::~BitcoinExchange()
{
	
};
