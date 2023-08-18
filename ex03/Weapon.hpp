/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabrahm <ylabrahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 12:28:34 by ylabrahm          #+#    #+#             */
/*   Updated: 2023/07/17 12:50:27 by ylabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class Weapon
{
private:
    std::string type;
public:
    Weapon(std::string type_);
    Weapon();
    ~Weapon();

    const std::string& getType();
    void setType(std::string type);
};
