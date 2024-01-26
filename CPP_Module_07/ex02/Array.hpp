/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 12:53:24 by hmohamed          #+#    #+#             */
/*   Updated: 2024/01/26 15:34:02 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>


template <typename T> class Array
{
	private:
	    T* ptr;
	    unsigned int sz;
	
	public:
		Array();
	    Array(int s);
		Array(const Array& cp);
		Array& operator=(const Array& cp);
		~Array();
		unsigned int size(void) const;
		T& operator[](unsigned int index);
	    void print();
};
 

template <typename T> Array<T>::Array()
{
   ptr = NULL;
   sz = 0;
}

template <typename T> Array<T>::Array(int s): sz (s) 
{
    ptr = new T[sz];
	for (unsigned int i = 0; i < sz; i++)
           ptr[i] = T();
}

template <typename T> Array<T>::Array(const Array& cp) : sz(cp.sz)
{
	ptr = new T[sz];
	for (unsigned int i = 0; i < sz; ++i) {
	    ptr[i] = cp.ptr[i];
	}
}

template <typename T> Array<T>& Array<T>::operator=(const Array& cp)
{
	if (this != &cp) {
        delete[] ptr;
        sz = cp.sz;
        ptr = new T[sz];
        for (unsigned int i = 0; i < sz; ++i)
		{
            ptr[i] = cp.ptr[i];
    	}
    }
    return (*this);
};

template <typename T> Array<T>::~Array()
{
   delete [] ptr;
}

 
template <typename T> void Array<T>::print()
{
    for (unsigned int i = 0; i < sz; i++)
        std::cout << " " << *(ptr + i);
    std::cout << std::endl;
}

template <typename T> unsigned int Array<T>::size(void) const{
	return sz;
}

template <typename T> T& Array<T>::operator[](unsigned int index)
{
    if (index >= sz) {
        throw std::out_of_range("Index out of bounds");
    }
    return ptr[index];
}

#endif