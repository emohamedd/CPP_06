/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 17:09:16 by emohamed          #+#    #+#             */
/*   Updated: 2023/11/30 17:52:24 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::~ScalarConverter()
{
    std::cout <<  "destructor called " << std::endl;
}
ScalarConverter& ScalarConverter::operator=(ScalarConverter const &other)
{
    (void)other;
    return (*this);
}

void ScalarConverter::convert(std::string av)
{
        std::cout << "char: " << av << std::endl;
        std::cout << "int: " << av << std::endl;
        std::cout << "float: " << av << std::endl;
         std::cout << "double: " << av << std::endl;
}
