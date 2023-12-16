/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BaseS.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 18:28:47 by emohamed          #+#    #+#             */
/*   Updated: 2023/12/16 15:49:55 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #pragma once
#ifndef BASES_HPP
#define BASES_HPP
#include <iostream>
#include <string.h>
#include <time.h>
#include <stdlib.h>


class Base{
    public:
        virtual ~Base();
};
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

    Base * generate(void);
    void identify(Base* p);
    void identify(Base& p);

#endif