/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 16:34:53 by emohamed          #+#    #+#             */
/*   Updated: 2023/11/30 17:24:50 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
int main(int ac , char **av)
{
    try
    {
        if (ac < 2 || ac > 2)
            throw std::invalid_argument("Invalid number of arguments");
        else
            ScalarConverter::convert(av[1]);
        
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    return (0);    
}