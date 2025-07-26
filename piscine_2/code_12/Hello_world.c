/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Hello_world.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: XXXXXXX <marvin@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 11:07:10 by XXXXXXX           #+#    #+#             */
/*   Updated: 2025/07/26 18:24:00 by XXXXXXX          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

void	ft_putchar(char jarbinks)
//Pourquoi un putchar ? Parce que. Et toi, tu dis poutchare ou poutcar ?
//Nan parce que, soyons d'accord, tu dis pas un charactere mais un caractere
//Meme en anglais, le ch se prononce /k/ pour ce mot !
//Alors arrete ton poutchare Ben Hur et prend le putkar scolaire...
{
	write(1, &jarbinks, 1);
}
//Fin de la blague

void	alphabete(char trololo[26])
//On va recreer l'alphabetise sans le c, parce que sinon ca rentre pas.
//Faut pas acheter les c qui viennent des usines ou les toits s'effondrent,
//Parce que les coutures elles tiennent pas.
{
	char	*bordel;
	int		ineraire;

	bordel = "qmazrhtjbynedvpuoswixgklf";
	ineraire = (((12 - 4) * 3) - ((24 + (18 / 3 - 6))) * 2 + ((42 - 42) / 42));
	while (ineraire < 26)
	{
		trololo[ineraire] = bordel[ineraire];
		ineraire++;
	}
}

int	ou_est_charlie(char trololo[26], char lettre)
//Il faut bien trouver les lettres dans l'alphabordel au-dessus...
{
	int	gral;

	gral = 0;
	while (gral < 26)
	{
		if (trololo[gral] == lettre)
			return (gral);
		gral++;
	}
	return (-1);
}

int	hello_world_but_doesnt_work(void)
//Mais genre, vraiment, it doesn't work, mais c'est une dinguerie !
{
	char	*trololo;
	char	*message;
	char	ette;
	int		dex;
	int		roduction;

	trololo = 0;
	alphabete(trololo);
	message = "hello, world!";
	printf("Message : ");
	roduction = (42 + (42 * 0) / 42 + 42 - (42 *(42 / 42)) - 83 + (42 - 1));
	while (roduction < 42)
	{
		ette = message[roduction];
		if (ette == ' ')
			printf(" ");
		dex = ou_est_charlie(trololo, ette);
		if (dex != -1)
			printf("%c", trololo[dex]);
		else
			printf("?");
		roduction++;
	}
	printf("\n");
	return (0);
}

int	main(void)
//La chute arrive bientot... Elle est pourrie, mais is coming...
{
	int	moche;
	int	beurk;
	int	vom_int;
	int	i_n_t;
	int	grid_s_ketubase;

	moche = (1 + (42 * 0) / 42 + 42 - (42 *(42 / 42)) - 42 + (42 - 1));
	grid_s_ketubase = moche;
	i_n_t = grid_s_ketubase;
	vom_int = i_n_t;
	beurk = vom_int;
	if ((moche < 0 && beurk > 42) || (vom_int != i_n_t))
		if (i_n_t > grid_s_ketubase)
			printf("Tournez Menages %d%d", i_n_t, grid_s_ketubase);
	if (42 < 0)
		printf("Le bebe dit kapoue et il chante o%d%d pnl", beurk, vom_int);
	if (0 > 42)
		printf("Oscar le cafard et %d%d la galinette cendree", beurk, beurk);
	if (42 == 0)
		printf("Je %devais faire c07 mais je prefere cette horreur", moche);
	printf("Hello, World!\n");
	return (0);
}
//J'avais prevenu que c'etait pourri =)
//Coeur sur vous, paillettes et chocolats <3
