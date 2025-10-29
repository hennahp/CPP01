/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hparveen <hparveen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 08:33:12 by hparveen          #+#    #+#             */
/*   Updated: 2025/10/29 08:49:51 by hparveen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : name(name){}

Zombie::~Zombie(){
    std::cout << "Zombie " << name << " is destroyed" << std::endl;
}

void Zombie::announce(void){
    std::cout << name << "   :BraiiiiiiinnnzzzZ..." << std::endl;
}
