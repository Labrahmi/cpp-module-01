/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabrahm <ylabrahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 18:09:53 by ylabrahm          #+#    #+#             */
/*   Updated: 2023/07/17 18:15:11 by ylabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
    Harl harl;

    harl.complain("WARNING");
    harl.complain("ERROR");
    harl.complain("DEBUG");
    harl.complain("INFO");
    return 0;
}
