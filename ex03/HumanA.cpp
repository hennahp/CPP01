/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hparveen <hparveen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 09:24:43 by hparveen          #+#    #+#             */
/*   Updated: 2025/10/30 09:24:44 by hparveen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(const std::string& name, Weapon& weapon) :name(name), weapon(weapon){}

HumanA::~HumanA() {}

void HumanA::attack() const
{
    std::cout << GREEN << name << " attacks with their " << weapon.getType() << RESET << std::endl;
}
