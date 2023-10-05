/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 11:39:20 by eabdelha          #+#    #+#             */
/*   Updated: 2022/08/18 16:52:50 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.h"

Replace::Replace(const std::string &file, const std::string &s1, const std::string &s2) :
        fileName(file), s1(s1), s2(s2){}

Replace::~Replace(){}

void Replace::replace()
{
    std::ifstream   infile (fileName);
    std::string     strFile;
    size_t index;

    if (infile.is_open())
    {
        std::ofstream   outfile (fileName + ".replace");
        if (outfile.is_open())
        {
            strFile.assign((std::istreambuf_iterator<char>(infile)), (std::istreambuf_iterator<char>()));
            index = strFile.find(s1);
            while (index != std::string::npos && s1[0])
            {
                strFile.erase(index, s1.length());
                strFile.insert(index, s2);
                index = strFile.find(s1, index + 1);
            }
            outfile << strFile << std::flush;
        }
        else
            std::cerr << fileName + ".replace: " << std::strerror(errno) << std::endl;
    }
    else
        std::cerr << fileName << ": " << std::strerror(errno) << std::endl;
}
