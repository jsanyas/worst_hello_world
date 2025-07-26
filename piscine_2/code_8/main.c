/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: XXXXXXX <marvin@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 10:35:08 by XXXXXXX           #+#    #+#             */
/*   Updated: 2025/07/26 18:22:41 by XXXXXXX          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// Que fait mon programme ? 
// Il dechiffre un message code en soustrayant a chaque caractere 
//une valeur derivee d'une cle alphabetique de 14 lettres 
//correspondant exactement a la longueur du message, 
//puis affiche le texte "Hello, World!" avec un retour a la ligne

//********************************************************

//La fonction init_encrypted va remplir le tableau encrypted 
//avec les caracteres codes.
// J'utilise unsigned char pour autoriser 
//des valeurs entre 0 et 255.
// Chaque ligne ajoute une valeur 
//dans le tableau encrypted.
// Ces nombres representent des caracteres ASCII chiffres
//encodes avec une cle.

void	init_encrypted(unsigned char *encrypted)
{
	encrypted[0] = 73;
	encrypted[1] = 105;
	encrypted[2] = 121;
	encrypted[3] = 117;
	encrypted[4] = 111;
	encrypted[5] = 56;
	encrypted[6] = 34;
	encrypted[7] = 94;
	encrypted[8] = 122;
	encrypted[9] = 128;
	encrypted[10] = 112;
	encrypted[11] = 119;
	encrypted[12] = 47;
	encrypted[13] = 22;
}

// Ma fonction Init_key initie la cle de dechiffrement.
// Elle est composee de lettres majuscules
// On passe un tableau key qui va contenir cette cle de 14 lettres
// On remplit chaque case du tableau key aavec une lettre

void	init_key(char *key)
{
	key[0] = 'B';
	key[1] = 'E';
	key[2] = 'N';
	key[3] = 'J';
	key[4] = 'A';
	key[5] = 'M';
	key[6] = 'C';
	key[7] = 'H';
	key[8] = 'L';
	key[9] = 'O';
	key[10] = 'E';
	key[11] = 'T';
	key[12] = 'O';
	key[13] = 'M';
}

// La fontion decrypt va decrypter le essage a l'aide de la cle. 
// Elle prend le tableau chiffre, la cle et la longueur du message.
// Je declare trois variables
// i pour la boucle
// c pour stocker le caractere dechiffre
// shift pour calculer combien il faut decaler chaque lettre

void	decrypt(unsigned char *encrypted, char *key, int length)
{
	int		i;
	char	c;
	int		shift;

	i = 0;
	while (i < length)
	{
		shift = key[i % 14] - 'A';
		c = encrypted[i] - shift;
		write(1, &c, 1);
		i++;
	}
}

int	main(void)
{
	unsigned char	encrypted[14];
	char			key[14];

	init_encrypted(encrypted);
	init_key(key);
	decrypt(encrypted, key, 14);
	write(1, "\n", 1);
	return (0);
}
