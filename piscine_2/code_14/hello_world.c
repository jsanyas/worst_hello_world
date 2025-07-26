/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hello_world.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: XXXXXXX <marvin@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 14:27:17 by XXXXXXX           #+#    #+#             */
/*   Updated: 2025/07/26 18:24:21 by XXXXXXX          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	hello_world(long w, char *world);

long	function_world(void);

void	hello_world(long w, char *world);

int		main(void);

void	hello_world(long w, char *world);
/* __   __  _______  ___      ___      _______ 
|  | |  ||       ||   |    |   |    |       |
|  |_|  ||    ___||   |    |   |    |   _   |
|       ||   |___ |   |    |   |    |  | |  |
|       ||    ___||   |___ |   |___ |  |_|  |
|   _   ||   |___ |       ||       ||       |
|__| |__||_______||_______||_______||_______|
*/
void	hello_world(long w, char *world);

int		main(void);

int		main(void);

void	hello_world(long w, char *world);

int	main(void)
{
	hello_world(1022345637289, "eHlo, wrd!");
}

int		function_hello(char *world);

void	hello_world(long w, char *world);

int		main(void);

int		main(void);

long	function_world(void);
/*
_      _  _______  ______    ___      ______     __  
| | _ | ||       ||    _ |  |   |    |      |   |  | 
| || || ||   _   ||   | ||  |   |    |  _    |  |  | 
|       ||  | |  ||   |_||_ |   |    | | |   |  |  | 
|       ||  |_|  ||    __  ||   |___ | |_|   |  |__| 
|   _   ||       ||   |  | ||       ||       |   __  
|__| |__||_______||___|  |_||_______||______|   |__| 
*/
long	function_world(void);

int		main(void);

int		main(void);

void	hello_world(long w, char *world)
{
	int		hello;

	hello = function_hello(world);
	if (w < 0)
	{
		write(1, "-", 1);
		w = w * -1;
	}
	if (w >= 0 && w < hello)
		write(1, &world[w], 1);
	else
	{
		hello_world(w / hello, world);
		hello_world(w % hello, world);
	}
}

void	hello_world(long w, char *world);

void	hello_world(long w, char *world);

int	function_hello(char *world)
{
	int	i;

	i = 0;
	while (world[i])
	{
		if (world[i] == '+' || world[i] == '-'
			|| !((world[i] > 31 && world[i] < 127)))
			return (-1);
		i++;
	}
	return (i);
}

void	hello_world(long w, char *world);
