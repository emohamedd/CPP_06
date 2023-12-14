/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 17:50:36 by emohamed          #+#    #+#             */
/*   Updated: 2023/12/15 00:22:04 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serialize::Serialize()
{
}

Serialize::~Serialize()
{
}

Serialize &Serialize::operator=(Serialize const &rhs)
{
    (void)rhs;
    return *this;
}

uintptr_t Serialize::serialize(Data* ptr)
{
    return reinterpret_cast<uintptr_t>(ptr);
}

Data* Serialize::deserialize(uintptr_t raw)
{
    return reinterpret_cast<Data*>(raw);
}
