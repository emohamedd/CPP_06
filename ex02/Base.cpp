/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 18:28:44 by emohamed          #+#    #+#             */
/*   Updated: 2023/12/15 00:27:15 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::~Base()
{
    std::cout << "Destructor called" << std::endl;
}

Base * generate(void)
{
    srand(time(NULL));
    int i = rand() % 3;
    if (i == 0)
        return (new A);
    else if (i == 1)
        return (new B);
    else
        return (new C);
}

void identify(Base* p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "C" << std::endl;
}

void identify(Base& p)
{
  
  try{
    A &a = dynamic_cast<A&>(p);
    std::cout << "A" << std::endl;
    (void)a;
  }
  catch(std::exception &e)
  {
    std::cout << e.what() << std::endl;
  }
   
   try{
    B &b = dynamic_cast<B&>(p);
    std::cout << "B" << std::endl;
    (void)b;
   }
    catch(std::exception &e)
    {
      std::cout << e.what() << std::endl;
    }

    try{
    C &c = dynamic_cast<C&>(p);
    std::cout << "C" << std::endl;
    (void)c;
    }
    catch(std::exception &e)
    {
      std::cout << e.what() << std::endl;
    }
}