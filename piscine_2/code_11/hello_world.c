/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hello_world.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: XXXXXXX <marvin@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 10:34:00 by XXXXXXX           #+#    #+#             */
/*   Updated: 2025/07/26 18:23:19 by XXXXXXX          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hello_world.h"

t_p	pppp(t_pp t[P])
{
	t_pp	i;
	t_ppp	c;

	i = PP;
	while (i < P)
	{
		if (t[i] < PPP && t[i] != PPPP)
			c = t[i] + (PPPPPP - PPPPP);
		else
			c = t[i];
		write(PPPPP, &c, PPPPP);
		i++;
	}
}

t_pp	np(t_pp n)
{
	t_pp	p;
	t_pp	pp;
	t_pp	ppp;
	t_pp	pppp;

	p = PP;
	pp = PPPPP + PPPPP;
	while (p < n)
	{
		pppp = PPPPP;
		ppp = PPPPP + PPPPP;
		while (ppp * ppp <= pp)
		{
			if (pp % ppp == PP)
			{
				pppp = PP;
				break ;
			}
			ppp++;
		}
		if (pppp)
			p++;
		pp++;
	}
	return (pp - PPPPP);
}

t_p	pol(t_pp cc[PPPPP + PPPPP + PPPPP], t_pp x, t_pp p, t_pp s)
{
	t_pp	a;
	t_pp	b;
	t_pp	c;

	a = PP;
	while (a++ < PPPP + PPPP)
	{
		b = PP;
		while (b++ < PPPP + PPPP)
		{
			c = PP;
			while (c++ < PPPP + PPPP)
			{
				if (a * x * x + b * x + c == PP && a * b * c == p && a + b == s)
				{
					cc[PP] = a;
					cc[PPPPP] = b;
					cc[PPPPP + PPPPP] = c;
					return ;
				}
			}
		}
	}
}

t_pp	m(t_pp a, t_pp b, t_pp mod)
{
	t_pp	p;

	p = PP;
	while (((a * p) % mod) != b)
		p++;
	return (p);
}

t_pp	main(void)
{
	t_pp	h[P];
	t_pp	abc[PPPPP + PPPPP + PPPPP];

	h[PPP / (PPPPP + PPPPP)] = np(np(PPPPP)) + np(np(PPPPP) * np(PPPPP));
	pol(abc, -PPPPP - PPPPP, np(np(np(PPPPPPP) - PPPPP)) - PPPPP, np(PPPPPPP));
	h[PPPPP] = abc[PP];
	h[PPPPP + PPPPP] = abc[PPPPP];
	h[PPPPP + PPPPP + PPPPP] = abc[PPPPP];
	h[PPPP] = abc[PPPPP];
	h[PPPP + PPPPP] = abc[PPPPP + PPPPP];
	h[0] = np(np(8) + PPPPP) + PPPPP;
	h[4] = m(3, 5, 20);
	h[8] = m(3, 5, 20);
	h[12] = m(13, 41, 97);
	h[6] = m(2, 31, 33);
	h[5] = m(2, 88, 100);
	h[7] = 2 * np(np(1) * np(np(1) * np(1))) + 1;
	h[9] = 0b00010010;
	pppp(h);
}
