/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hparveen <hparveen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 09:37:16 by hparveen          #+#    #+#             */
/*   Updated: 2025/10/29 10:02:19 by hparveen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    int N = 5;
    
    Zombie* horde = zombieHorde(N, "HordeZombie");
    
    if (horde == NULL)
        return 1;
    for (int i = 0; i < N; i++)
        horde[i].announce();
    delete[] horde;
    return 0;
}

