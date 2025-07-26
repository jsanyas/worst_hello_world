/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   worst_hw.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: XXXXXXX <marvin@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 15:06:16 by XXXXXXX           #+#    #+#             */
/*   Updated: 2025/07/26 18:25:36 by XXXXXXX          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strlen(base) <= 1)
		return (1);
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+')
			return (1);
		i++;
	}
	i = 0;
	while (i < ft_strlen(base))
	{
		j = i + 1;
		while (j < ft_strlen(base))
		{
			if (base[j] == base[i])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	ft_putnbr_base(long nbr, char *base)
{
	int		i;
	int		len;

	i = 0;
	if (check_base(base) == 1)
		return ;
	len = ft_strlen(base);
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
	}
	if (nbr >= len)
		ft_putnbr_base(nbr / len, base);
	ft_putchar(base[nbr % len]);
}

int	main(void)
{
	ft_putnbr_base(123345647389, "aHelo Wrd\n");
}
