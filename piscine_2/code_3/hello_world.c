/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hello_world.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: XXXXXXX <marvin@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 10:31:30 by XXXXXXX           #+#    #+#             */
/*   Updated: 2025/07/26 18:20:49 by XXXXXXX          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hello_world.h"

void	p(char c)
{
	write(1, &c, 1);
}

char	**gen(void)
{
	char	**helloworld;
	int		hello_world;

	hello_world = 0;
	helloworld = malloc(HELLO_WORLD_B);
	while (HELLO_WORLD_B > hello_world)
	{
		helloworld[hello_world] = malloc(1);
		helloworld[hello_world][0] = HELLO_WORLD[hello_world];
		hello_world++;
	}
	hello_world = 0;
	return (helloworld);
}

void	hello_world(char **hello)
{
	int	r;
	int	r2;
	int	d2;

	d2 = 0;
	while (hello[d2])
	{
		r = rand() % 424242;
		r2 = rand() % 424242;
		while (r == d2)
		{
			r2 = rand() % 42424242;
			while (r2 == d2)
			{
				p(HELLO_WORLD[d2++]);
			}
		}
	}
}

int	main(void)
{
	char	**s;
	int		i;

	s = gen();
	hello_world(s);
	i = 0;
	return (1);
}
