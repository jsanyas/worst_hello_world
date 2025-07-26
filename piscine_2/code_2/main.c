/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: XXXXXXX <marvin@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 10:29:10 by XXXXXXX           #+#    #+#             */
/*   Updated: 2025/07/26 18:20:24 by XXXXXXX          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <assert.h>
#include <ctype.h>
#include <errno.h>
#include <limits.h>
#include <locale.h>
#include <math.h>
#include <setjmp.h>
#include <signal.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

char	*gen_asciiiiiii(void)
{
	char	*ascii_array;
	int		i;
	int		verif_ab[255];
	int		randome_int ;

	ascii_array = malloc(sizeof(char) * 255);
	i = -1;
	while (++i < 255)
		verif_ab[i] = 0;
	i = 0;
	while (i < 255)
	{
		randome_int = rand() % 256;
		if (verif_ab[randome_int] == 0)
		{
			verif_ab[randome_int] = 1;
			ascii_array[randome_int] = i;
			i++;
		}
	}
	return (ascii_array);
}

char	*ft_alloc_good_array(void)
{
	int		randome_value;
	char	*array;
	int		c_est_la_bonne_taille;
	int		i;
	int		j;

	c_est_la_bonne_taille = 11;
	i = 1;
	while (i)
	{
		randome_value = rand() % 256;
		array = malloc(sizeof (char) * randome_value);
		j = -1;
		while (++j < randome_value)
			array[j] = 'A';
		if (randome_value == c_est_la_bonne_taille)
			i = 0;
		else
			free(array);
	}
	return (array);
}

int	char_est_okey(char le_caraacater)
{
	int			incrementateur;
	const char	carcatere[] = "HelWrd!o, \n";

	incrementateur = -1;
	while (++incrementateur < 11)
	{
		if (carcatere[incrementateur] == le_caraacater)
			return (1);
	}
	return (0);
}

void	remplie_le_table_eau(char *asqui_parray, char *tab)
{
	int			incrementateur;
	int			incrementateur2;
	int			unite_aleatoire;
	static int	il_est_deja_la = 0;

	incrementateur = 0;
	while (incrementateur < 11)
	{
		unite_aleatoire = rand () % 256;
		if (char_est_okey(asqui_parray[unite_aleatoire]))
		{
			incrementateur2 = -1;
			while (tab[++incrementateur2])
			{
				if (asqui_parray[unite_aleatoire] == tab[incrementateur2])
					il_est_deja_la = 1;
			}
			if (il_est_deja_la == 0)
			{
				tab[incrementateur] = asqui_parray[unite_aleatoire];
				incrementateur++;
			}
			il_est_deja_la = 0;
		}
	}
}

int	main(void)
{
	char		*new_ascii;
	char		*array;
	const char	tab[] = "Hello, World!\n";
	char		result[14];
	int			i;

	srand (time(NULL));
	new_ascii = gen_asciiiiiii();
	array = ft_alloc_good_array();
	remplie_le_table_eau(new_ascii, array);
	i = -1;
	while (tab[++i])
	{
		while (tab[i] != result[i])
			result[i] = array[rand() % 11];
	}
	i = -1;
	while (++i < 14)
		printf("%c", result[i]);
	return (0);
}
