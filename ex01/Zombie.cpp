/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hparveen <hparveen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 09:17:08 by hparveen          #+#    #+#             */
/*   Updated: 2025/10/29 09:51:08 by hparveen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::Zombie(std::string name)
{
    std::cout << "🧟  Zombie " << name << " has risen from the dead!" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << RED << "💀  Zombie " << name << " is destroyed" << RESET << std::endl;
}

void Zombie::announce(void)
{
    std::cout << CYAN << name << "   :BraiiiiiiinnnzzzZ..." << RESET << std::endl;
}

void Zombie::setName(std::string name)
{
    this->name = name;
}
