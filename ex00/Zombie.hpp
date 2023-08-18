/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabrahm <ylabrahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 13:10:36 by ylabrahm          #+#    #+#             */
/*   Updated: 2023/07/17 18:18:57 by ylabrahm         ###   ########.fr       */
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
    ~Zombie();

    void announce(void);
};

Zombie  *newZombie(std::string name);
void    randomChump(std::string name);

