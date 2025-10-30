/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hparveen <hparveen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 13:27:09 by hparveen          #+#    #+#             */
/*   Updated: 2025/10/30 13:34:55 by hparveen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <string>
# include <iostream>

# define RESET   "\033[0m"
# define RED     "\033[31m"
# define YELLOW  "\033[33m"
# define GREEN   "\033[32m"
# define BLUE    "\033[34m"
# define MAGENTA "\033[35m"

class Harl
{
    private:
        void debug( void );
        void info( void );
        void warning( void );
        void error( void );
        int getLevel(std::string level);

    public:
        Harl();
        ~Harl();
        void complain( std::string level );
};

#endif