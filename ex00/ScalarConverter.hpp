/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 16:31:22 by emohamed          #+#    #+#             */
/*   Updated: 2023/11/30 17:09:33 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>


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