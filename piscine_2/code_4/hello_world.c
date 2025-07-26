/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hello_world.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: XXXXXXX <marvin@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 18:21:45 by XXXXXXX           #+#    #+#             */
/*   Updated: 2025/07/26 18:21:51 by XXXXXXX          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	sommeil_check(int day, int h_sleep, int minot, int reve)
{
	int	qualite;

	minot *= -1;
	qualite = (day + h_sleep + minot + reve);
	if (qualite < 0)
	{
		write(1, "Fuck it im staying in bed\n", 26);
		return (0);
	}
	return (1);
}

int	reveil_check(int day, int h_sleep, int minot, int pati)
{
	int	qualite;

	if (day == 1)
		day = -50;
	if (h_sleep >= 12)
	{
		write(1, "Where the fuck im i?!\n", 22);
		return (0);
	}
	minot *= -5;
	qualite = (day + minot + pati);
	if (qualite < 0)
	{
		write(1, "Fuck it im going back to bed\n", 29);
		return (0);
	}
	return (1);
}

int	main(void)
{
	int	day;
	int	h_sleep;
	int	minot;
	int	reve;
	int	pati;

	day = 4;
	h_sleep = 7;
	minot = 2;
	reve = -5;
	pati = 15;
	h_sleep = sommeil_check(day, h_sleep, minot, reve);
	if (h_sleep == 0)
		return (0);
	pati = reveil_check(day, h_sleep, minot, pati);
	if (pati == 0)
		return (0);
	write (1, "Hello, World!\n", 14);
	return (0);
}
