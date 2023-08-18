/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabrahm <ylabrahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 13:10:26 by ylabrahm          #+#    #+#             */
/*   Updated: 2023/07/15 17:05:47 by ylabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <string>

int main(void)
{
    Zombie  *newZ = newZombie("Ahmed");

    randomChump("Solix");
    newZ->announce();
    delete newZ; 
    return (0);
}
