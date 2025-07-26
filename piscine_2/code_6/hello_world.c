/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hello_world.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: XXXXXXX <marvin@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 10:17:00 by XXXXXXX           #+#    #+#             */
/*   Updated: 2025/07/26 18:22:17 by XXXXXXX          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	eniahc_am_ed_ruegnol_al(char *ruegnol)
{
	int	xedni;
	int	stgiod_sem_ceva_etpmoc_ej;

	xedni = 0;
	stgiod_sem_ceva_etpmoc_ej = 0;
	while (ruegnol[xedni + stgiod_sem_ceva_etpmoc_ej])
	{
		if (ruegnol[xedni] % 5 == 0)
		{
			stgiod_sem_ceva_etpmoc_ej += 4;
			xedni = 0;
		}
		else
			xedni++;
	}
	return (xedni + stgiod_sem_ceva_etpmoc_ej);
}

void	tnadnopserroc_eretcarac_el_erirce_tf(char *str)
{
	int	xedni;
	int	ruegnol;

	ruegnol = eniahc_am_ed_ruegnol_al(str);
	xedni = ruegnol -1;
	while (str[xedni] > 0)
	{
		write(1, &str[xedni], 1);
		xedni--;
	}
}

char	*dlrow_olleh_dnif(char *str)
{
	char	*dnif_ot;
	int		i;
	int		j;

	dnif_ot = "!dlroW ,olleH";
	i = 0;
	while (str[i])
	{
		j = 0;
		while (str[i + j] == dnif_ot[j] && dnif_ot[j] && str[i + j])
			j++;
		if (dnif_ot[j] == '\0')
			return (dnif_ot);
		i++;
	}
	return (0);
}

void	dlrow_olleh_elbiro__ereimam_ed_erirce(char *str)
{
	int	gnol_port_neib_xedni_nu_tse_icec;
	int	car_ruegnol;
	int	xedni_dnoces_nom_tse_c_sirpmoc_sa;
	int	euqaionarap_firev_ed_ruetnoc;

	gnol_port_neib_xedni_nu_tse_icec = 0;
	car_ruegnol = eniahc_am_ed_ruegnol_al(str);
	xedni_dnoces_nom_tse_c_sirpmoc_sa = car_ruegnol - 1;
	euqaionarap_firev_ed_ruetnoc = 0;
	while (str[gnol_port_neib_xedni_nu_tse_icec])
	{
		if ((euqaionarap_firev_ed_ruetnoc == 2000) && (dlrow_olleh_dnif(str)))
		{
			tnadnopserroc_eretcarac_el_erirce_tf(dlrow_olleh_dnif(str));
			return ;
		}
		if (str[gnol_port_neib_xedni_nu_tse_icec] == 0)
			while (str[gnol_port_neib_xedni_nu_tse_icec] != (car_ruegnol -1))
				gnol_port_neib_xedni_nu_tse_icec++;
		euqaionarap_firev_ed_ruetnoc++;
		if (str[gnol_port_neib_xedni_nu_tse_icec] == (car_ruegnol - 1))
			while (str[xedni_dnoces_nom_tse_c_sirpmoc_sa] >= 0)
				gnol_port_neib_xedni_nu_tse_icec--;
	}
}

int	main(void)
{
	char	*str;

	str = "!dlroW ,olleH";
	dlrow_olleh_elbiro__ereimam_ed_erirce(str);
	write(1, "\n", 1);
	return (0);
}
