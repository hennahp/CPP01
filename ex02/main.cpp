/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hparveen <hparveen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 12:49:27 by hparveen          #+#    #+#             */
/*   Updated: 2025/10/29 13:09:03 by hparveen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string* stringPTR = &str;
    std::string& stringREF = str;

    std::cout << "Address of str                :" << &str << std::endl;
    std::cout << "Address held by stringPTR     :" << stringPTR << std::endl;
    std::cout << "Address held by stringREF     :" << &stringREF << std::endl;

    std::cout << "-----------------------------------------------" << std::endl;

    std::cout << "Value of str                  :" << str << std::endl;
    std::cout << "Value pointed to by stringPTR :" << *stringPTR << std::endl;
    std::cout << "Value pointed to by stringREF :" << stringREF << std::endl;
}
