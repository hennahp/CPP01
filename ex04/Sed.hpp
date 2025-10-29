#ifndef SED_HPP
# define SED_HPP

#include <string>
#include <fstream>
#include <iostream>

class Sed
{
    private:
        std::string filename;
        std::string s1;
        std::string s2;
        std::string replaceAll(const std::string& str, const std::string& s1, const std::string& s2) const;

    public:
        Sed(const std::string& filename, const std::string& s1, const std::string& s2);
        ~Sed();

        void process() const;
};

#endif