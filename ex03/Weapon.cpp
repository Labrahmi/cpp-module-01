/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabrahm <ylabrahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 12:28:36 by ylabrahm          #+#    #+#             */
/*   Updated: 2023/07/17 12:52:21 by ylabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
}

Weapon::Weapon(std::string type_)
{
    type = type_;
}

Weapon::~Weapon()
{
}

const std::string& Weapon::getType()
{
    std::string &typeRef = type;

    return (typeRef);
}

void Weapon::setType(std::string type_)
{
    type = type_;
}
