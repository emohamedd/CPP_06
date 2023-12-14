/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 17:50:38 by emohamed          #+#    #+#             */
/*   Updated: 2023/12/15 00:20:33 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
    Data data = {42, "Emohamed", 42};
    std::cout << "Data: " << std::endl;
    std::cout << "Age: " << data.age << std::endl;
    std::cout << "Name: " << data.name << std::endl;
    std::cout << "Number: " << data.number << std::endl;
    
    uintptr_t raw = Serialize::serialize(&data);
    std::cout << "Raw: " << raw << std::endl;
    
    Data* ptr = Serialize::deserialize(raw);
    std::cout << "Data: " << std::endl;
    std::cout << "Age: " << ptr->age << std::endl;
    std::cout << "Name: " << ptr->name << std::endl;
    std::cout << "Number: " << ptr->number << std::endl;
    
    return 0;
}