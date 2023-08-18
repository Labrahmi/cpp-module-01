/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabrahm <ylabrahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 12:39:56 by ylabrahm          #+#    #+#             */
/*   Updated: 2023/07/18 11:08:18 by ylabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include "Weapon.hpp"

class HumanA
{
public:
    std::string name;
    Weapon &weapon;
public:
    HumanA(std::string nameObj, Weapon &weaponObj);
    ~HumanA();

    void attack();
};
