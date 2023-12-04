/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 16:31:22 by emohamed          #+#    #+#             */
/*   Updated: 2023/12/01 12:32:54 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <iomanip>
#include <string>
#include <exception>
class ScalarConverter
{
    public:
        ~ScalarConverter();
        ScalarConverter &operator=(ScalarConverter const &other);
        static void convert(std::string av);
    private:
        ScalarConverter();
        std::string str;
};

char str_to_char(std::string str);
int str_to_int(std::string str);
float str_to_float(std::string str);
double str_to_double(std::string str);
