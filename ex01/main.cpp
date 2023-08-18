/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabrahm <ylabrahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 17:12:57 by ylabrahm          #+#    #+#             */
/*   Updated: 2023/07/15 17:53:05 by ylabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie *Z = zombieHorde(7, "Suuuuuiiiiiiiii");

    int i = 0;
    while (i < 7)
    {
        Z[i].announce();
        i++;
    }
    delete[] Z;
    return 0;
}
