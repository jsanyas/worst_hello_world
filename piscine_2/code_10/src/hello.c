/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hello.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: XXXXXXX <marvin@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 14:11:48 by XXXXXXX           #+#    #+#             */
/*   Updated: 2025/07/26 18:23:06 by XXXXXXX          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/hello.h"
#include <stdlib.h>
#include <unistd.h>

t_pepe	*new_pepe(char c)
{
	t_pepe	*p;

	p = malloc(sizeof(t_pepe) + 1);
	if (!p)
		return ((void *)0);
	p->blblblbl = (long)(rand() % 128);
	p->ahahahah = c ^ p->blblblbl;
	p->next = NULL;
	return (p);
}

void	pepe_printers(t_pepe *pepe)
{
	int		i;
	char	tmp;

	i = 0;
	while (pepe)
	{
		tmp = (pepe->ahahahah ^ pepe->blblblbl);
		write(1, &tmp, 1);
		pepe = pepe->next;
	}
}

int	main(void)
{
	int		i;
	char	*msg;
	t_pepe	*tmp;
	t_pepe	*head;
	t_pepe	*last;

	i = 0;
	msg = HelloCommaSpaceWorldExcMarkBackSlashN;
	head = NULL;
	last = NULL;
	while (msg[i])
	{
		tmp = new_pepe(msg[i]);
		if (!tmp)
			return (1);
		if (!head)
			head = tmp;
		else
			last->next = tmp;
		last = tmp;
		i++;
	}
	pepe_printers(head);
	return (0);
}
