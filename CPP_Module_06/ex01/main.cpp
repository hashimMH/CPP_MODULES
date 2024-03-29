/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 22:34:26 by hmohamed          #+#    #+#             */
/*   Updated: 2024/01/08 11:20:00 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"


int main() {

    Data myData(42);

    uintptr_t serializedValue = Serializer::serialize(&myData);
    Data* deserializedData = Serializer::deserialize(serializedValue);
    if (deserializedData == &myData) {
        std::cout << "Serialization and deserialization successful. Original and deserialized pointers are equal." << std::endl;
    } else {
        std::cout << "Serialization and deserialization failed. Pointers are not equal." << std::endl;
    }

    return 0;
}