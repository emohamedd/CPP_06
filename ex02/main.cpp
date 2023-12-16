/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 18:28:49 by emohamed          #+#    #+#             */
/*   Updated: 2023/12/16 17:18:41 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bases.hpp"

int main()
{
    Base *base = generate();
    identify(base);
    identify(*base);
    delete base;
       return 0;
}