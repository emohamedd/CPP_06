/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 17:09:16 by emohamed          #+#    #+#             */
/*   Updated: 2023/12/04 16:15:59 by emohamed         ###   ########.fr       */
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

char str_to_char(std::string str)
{
    if (str.length() == 1 && !std::isdigit(str[0]))
        return static_cast<char>(str[0]);
    int char_to_int = std::atoi(str.c_str());
    char c = static_cast<char>(char_to_int);
    return c;
}

int str_to_int(std::string str)
{
    const char *s = str.c_str();
    if (str.length() == 1 && !std::isdigit(str[0]))
        return static_cast<int>(str[0]);
    int char_to_int = std::atoi(s);
    return char_to_int;
}

float str_to_float(std::string str)
{
    char *endptr;
    float value = std::strtof(str.c_str(), &endptr);
    return value;
}

double str_to_double(std::string str)
{
    char *endptr;
    double value = std::strtod(str.c_str(), &endptr);
    return value;
}
void ScalarConverter::convert(std::string av)
{
        char c = str_to_char(av);
        int i = str_to_int(av);
        float f = str_to_float(av);
        double d = str_to_double(av);
        // std::cout << c << std::endl << i << std::endl << f << std::endl << d << std::endl;
        if (c == 0 && i == 0 && f == 0 && d == 0)
            throw std::invalid_argument("Invalid argument");
        else
        {
            std::cout << "char: ";
            if (c >= 32 && c <= 126)
                std::cout  << c  << std::endl;
            else
                std::cout << "impossible" << std::endl;
            std::cout << "int: ";
                std::cout  << i  << std::endl;
            std::cout << "float: "  << f << "f" << std::endl;
            std::cout << "double: "  << d << std::endl;
        }
}
