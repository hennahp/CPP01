/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hparveen <hparveen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 09:25:12 by hparveen          #+#    #+#             */
/*   Updated: 2025/10/30 10:40:16 by hparveen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Sed.hpp"

int main(int ac, char **av)
{
    if(ac !=4)
    {
        std::cerr << "Usage: " << av[0] << " <filename> <string_to_replace> <replacement_string>" << std::endl;
        return 1;
    }
    std::string filename = av[1];
    std::string s1 = av[2];
    std::string s2 = av[3];

    if(s1.empty())
    {
        std::cerr << "Error: String to replace cannot be empty." << std::endl;
        return 1;
    }

    Sed sed(filename, s1, s2);
    sed.process();

    return 0;
}
