/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 22:34:26 by hmohamed          #+#    #+#             */
/*   Updated: 2024/01/02 17:51:41 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"


int main() {

	// Create an instance of the Data structure
    Data myData(42);

    // Serialize the pointer to the Data object
    uintptr_t serializedValue = Serializer::serialize(&myData);

    // Deserialize the serialized value
    Data* deserializedData = Serializer::deserialize(serializedValue);

    // Check if the deserialized pointer is equal to the original pointer
    if (deserializedData == &myData) {
        std::cout << "Serialization and deserialization successful. Original and deserialized pointers are equal." << std::endl;
    } else {
        std::cout << "Serialization and deserialization failed. Pointers are not equal." << std::endl;
    }

    return 0;
}