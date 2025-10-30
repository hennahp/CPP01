/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hparveen <hparveen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 09:25:17 by hparveen          #+#    #+#             */
/*   Updated: 2025/10/30 09:25:18 by hparveen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Sed.hpp"

Sed::Sed(const std::string& filename, const std::string& s1, const std::string& s2)
    : filename(filename), s1(s1), s2(s2) {}

Sed::~Sed() {}

void Sed::process() const
{
    std::ifstream infile(filename.c_str());
    if(!infile)
    {
        std::cerr << "Error: Could not open file " << filename << std::endl;
        return;
    }
    std::ofstream outfile((filename + ".replace").c_str());
    if(!outfile)
    {
        std::cerr << "Error : Could not create output file." << std::endl;
        infile.close();
        return;
    }
    std::string line;
    while(std::getline(infile, line))
        outfile << replaceAll(line, s1, s2) << std::endl;
    infile.close();
    outfile.close();
}

std::string Sed::replaceAll(const std::string& str, const std::string& s1, const std::string& s2) const
{
    std::string result;
    size_t pos = 0;
    size_t found;

    while((found = str.find(s1, pos)) != std::string::npos)
    {
        result += str.substr(pos, found - pos);
        result += s2;
        pos = found + s1.length();
    }
    result += str.substr(pos);
    return result;
}
