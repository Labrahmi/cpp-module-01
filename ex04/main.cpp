/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabrahm <ylabrahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 20:17:17 by ylabrahm          #+#    #+#             */
/*   Updated: 2023/08/14 10:19:42 by ylabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

std::string ft_replace(const std::string content, const std::string s1, const std::string s2)
{
    std::string modifiedContent = content;
    size_t pos = 0;
    size_t s1_length = s1.length();
    size_t s2_length = s2.length();
    while (1 && s1_length)
    {
        pos = modifiedContent.find(s1, pos);
        if (pos == std::string::npos)
            break;
        modifiedContent.erase(pos, s1_length);
        modifiedContent.insert(pos, s2);
        pos += s2_length;
    }
    return (modifiedContent);
}

int main(int argc, char const *argv[])
{
    std::string line;
    std::string content;
    std::string filename;
    std::string s1;
    std::string s2;

    if (argc == 4)
    {
        filename = argv[1];
        s1 = argv[2];
        s2 = argv[3];
        std::ifstream input_file(filename);
        if (!input_file)
        {
            std::cout << "Failed to open input file: " << filename << std::endl;
            return (1);
        }
        while (std::getline(input_file, line))
        {
            content += line;
            if (!input_file.eof())
                content += "\n";
        }
        input_file.close();
        content = ft_replace(content, s1, s2);
        std::ofstream output_file(filename + ".replace");
        if (!output_file)
        {
            std::cout << "Failed to create output file: " << filename + ".replace" << std::endl;
            return (1);
        }
        output_file << content;
        output_file.close();
        std::cout << "Replacement complete. Modified content saved to " << filename + ".replace" << std::endl;
    }
    else
    {
        std::cout << "Error: Usage [./losers <filename> <s1> <s2>]" << std::endl;
        return (1);
    }
    return (0);
}
