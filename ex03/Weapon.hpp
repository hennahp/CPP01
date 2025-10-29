/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hparveen <hparveen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 13:27:33 by hparveen          #+#    #+#             */
/*   Updated: 2025/10/29 13:34:57 by hparveen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include<string>

class Weapon
{
    private:
        std::string type;
        
    public:
        Weapon(std::string weapontype);
        ~Weapon();
        
        const std::string& getType() const;
        void setType(const std::string& newType);
};

#endif
