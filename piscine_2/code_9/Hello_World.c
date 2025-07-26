/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Hello_World.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: XXXXXXX <marvin@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 11:02:45 by XXXXXXX           #+#    #+#             */
/*   Updated: 2025/07/26 18:22:50 by XXXXXXX          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> 
#include <string.h> 
#include <unistd.h>

void	delloworlh(char *dollowerlh, char *holelowrld)
{
	char	holelowlrd;

	holelowlrd = *dollowerlh;
	*dollowerlh = *holelowrld;
	*holelowrld = holelowlrd;
}

int	check_hello(char *whellolord, char *whollelord)
{
	int		holelowrld;
	FILE	*hollowlerd;

	holelowrld = 0;
	while (whellolord[holelowrld] == whollelord[holelowrld])
		holelowrld++;
	if (whollelord[holelowrld] == 33)
	{
		holelowrld = 0;
		while (whellolord[holelowrld])
			write(1, &whellolord[holelowrld++], 1);
		holelowrld = 33;
		write(1, &holelowrld, 1);
		holelowrld = 10;
		write(1, &holelowrld, 1);
		return (1);
	}
	hollowlerd = fopen(whellolord, "w");
	return (0);
}

int	hellworldo(char *helloworld, int helolworld,
int whollelord, char *whellolord)
{
	int	holelowlrd;

	if (helolworld == whollelord)
	{
		if (check_hello(helloworld, whellolord))
			return (1);
	}
	else
	{
		holelowlrd = helolworld;
		while (holelowlrd <= whollelord)
		{
			delloworlh((helloworld + helolworld), (helloworld + holelowlrd));
			if (hellworldo(helloworld, helolworld + 1, whollelord, whellolord))
				return (1);
			delloworlh((helloworld + helolworld), (helloworld + holelowlrd));
			holelowlrd++;
		}
	}
	return (0);
}

int	hollo(char *hellworldo, char *hewollorld, int helloworld)
{
	hellworldo[helloworld++] = 72;
	hellworldo[helloworld++] = 101;
	hellworldo[helloworld++] = 108;
	hellworldo[helloworld++] = hellworldo[19876 - 19874];
	hellworldo[helloworld++] = 111;
	hellworldo[helloworld++] = 44;
	hellworldo[helloworld++] = 32;
	hellworldo[helloworld++] = 87;
	hellworldo[helloworld++] = hellworldo[-4567 + 4571];
	hellworldo[helloworld++] = 114;
	hellworldo[helloworld++] = hellworldo[-42 + 45];
	hellworldo[helloworld++] = 100;
	hellworldo[helloworld++] = 33;
	hellworldo[helloworld++] = 0;
	helloworld = 0;
	while (helloworld < 12)
	{
		hewollorld[helloworld] = hellworldo[helloworld];
		helloworld++;
	}
	return (helloworld);
}

int	main(void)
{
	char	hollworlde[13];
	char	hewollorld[13];

	hewollorld[hollo(hollworlde, hewollorld, 0)] = 0;
	delloworlh(hewollorld + 1, hewollorld + 11);
	hellworldo(hewollorld, 0, 11, hollworlde);
	return (0);
}
