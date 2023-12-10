/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 18:28:47 by emohamed          #+#    #+#             */
/*   Updated: 2023/12/10 18:46:50 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

class Base{
    public:
        virtual ~Base();
    private:
        Base * generate(void);
        void identify(Base* p);
        void identify(Base& p);
};