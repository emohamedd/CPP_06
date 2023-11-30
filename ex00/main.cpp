/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 16:34:53 by emohamed          #+#    #+#             */
/*   Updated: 2023/11/30 17:06:18 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
int main(int ac , char **av)
{
    if (ac > 2)
        std::cerr << "Invalid Param" << std::endl;
    else
        ScalarConverter::convert(av[1]);
    return (0);    
}