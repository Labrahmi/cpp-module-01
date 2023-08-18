/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabrahm <ylabrahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 13:10:36 by ylabrahm          #+#    #+#             */
/*   Updated: 2023/07/17 18:19:12 by ylabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class Zombie
{
private:
    std::string name;
public:
    Zombie(std::string name);
    Zombie(void);
    ~Zombie();

    void announce(void);
    void setName(std::string name);
};

Zombie* zombieHorde(int N, std::string name);
