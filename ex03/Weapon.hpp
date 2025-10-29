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

# define RED "\033[31m"
# define GREEN "\033[32m"
# define YELLOW "\033[33m"
# define RESET "\033[0m"

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
