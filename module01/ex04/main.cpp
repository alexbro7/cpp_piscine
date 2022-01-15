/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebross <alebross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 18:25:15 by alebross          #+#    #+#             */
/*   Updated: 2021/12/22 17:09:35 by alebross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

bool    readFile(char * const filename, std::string *fileContent) {
    std::string     s;
    std::ifstream   ifs(filename);

    if (!ifs) {
        std::cerr << "Can't open " << filename << "." << std::endl;
        return (1);
    }
    getline(ifs, s);
    if (s == "") {
        std::cerr << "Empty file." << std::endl;
        ifs.close();
        return (1);
    }
    *fileContent += s;
    while(getline(ifs, s))
    {
        *fileContent += "\n";
        *fileContent += s;
    }
    ifs.close();
    return (0);
}

std::string sed(std::string src, std::string s1, std::string s2) {
    std::string::size_type  n;
    std::string             ret;

    n = src.find(s1);
    while (n != std::string::npos)
    {
        ret += src.substr(0, n);
        src.erase(0, n + s1.length());
        ret += s2;
        n = src.find(s1);
    }
    ret += src;
    return (ret);
}

bool    writeFile(std::string const str, std::string filename)
{
    std::ofstream ofs(filename.c_str());

    if (!ofs) {
        std::cerr << "Can't open " << filename << "." << std::endl;
        return (1);
    }
    ofs << str;
    ofs.close();
    return (0);
}

int     main(int ac, char **av){
    std::string fileContent;
    if (ac != 4 || !av[1][0] || !av[2][0] || !av[3][0])
    {
        std::cerr << "Wrond arguments." << std::endl;
        return (1);
    }
    if (readFile(av[1], &fileContent))
        return (1);
    fileContent = sed(fileContent, av[2], av[3]);
    if (writeFile(fileContent, (std::string)av[1] + ".replace"))
        return (1);
    return (0);
}