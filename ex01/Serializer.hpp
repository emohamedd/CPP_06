/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 17:50:34 by emohamed          #+#    #+#             */
/*   Updated: 2023/12/15 00:21:33 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>


struct Data{

    int age;
    std::string name;
    int number;
};

class  Serialize{ 
    public:
        ~Serialize();
        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);
        Serialize &operator=(Serialize const &rhs);

    private:
        Serialize();
};