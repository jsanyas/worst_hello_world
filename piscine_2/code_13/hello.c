/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hello.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: XXXXXXX <marvin@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 11:37:27 by XXXXXXX           #+#    #+#             */
/*   Updated: 2025/07/26 18:24:07 by XXXXXXX          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "hello.h"

int		gggggggggg(int nb);
int		aergahbt(int nb);

int	______(int OOOOOOO)
{
	int		afdfa;
	int		awrgaf;

	afdfa = OOOOOOO;
	awrgaf = 2;
	JJJ("add $5, %[asdaf]"
		: [asdaf] "=r" (awrgaf)
		: "[asdaf]" (afdfa)
		);
	JJJ("sub $5, %[glliu]"
		: [glliu] "=r" (awrgaf)
		: "[glliu]" (afdfa)
		);
	JJJ(
		"nop\n\t"
		"mov %%rax, %%rax\n\t"
		"add $0, %%rdx\n\t"
		"sub $0, %%rcx\n\t"
		"nop\n\t"
		"nop\n\t"
		:
		:
		: "%rax", "%rbx", "%rcx", "%rdx"
		);
	return (awrgaf - afdfa);
}

void	printmsg(void)
{
	int				uuuu;
	unsigned int	i;
	char			uuuuuu[14];

	i = 0;
	strcpy(uuuuuu, "Hello, World!");
	uuuu = OOO + 1;
	uuuu = gggggggggg(uuuu);
	if (uuuu != 0)
	{
		while (i < sizeof(uuuuuu))
		{
			JJJ(
				"movq $1, %%rax\n\t"
				"movq $1, %%rdi\n\t"
				"movq %0, %%rsi\n\t"
				"movq $1, %%rdx\n\t"
				"syscall"
				:
				: "r"(uuuuuu + i)
				:"%rax", "%rdi", "%rsi", "%rdx"
				);
			i++;
		}
	}
}

int	gggggggggg(int asdfghkj)
{
	int	bmvnm;

	bmvnm = asdfghkj;
	bmvnm = 4;
	if (bmvnm != 0)
	{
		JJJ(
			"nop\n\t"
			"mov %%rax, %%rax\n\t"
			"add $0, %%rbx\n\t"
			"sub $0, %%rcx\n\t"
			"mov %%rbx, %%rbx\n\t"
			"mov %%rcx, %%rcx\n\t"
			"mov %%rdx, %%rdx\n\t"
			"add $0, %%rdx\n\t"
			"sub $0, %%rcx\n\t"
			"mov %%rdi, %%rdi\n\t"
			"nop\n\t"
			"nop\n\t"
			:
			:
			: "%rax", "%rbx", "%rcx", "%rcx", "%rdi"
			);
	}
	return (asdfghkj);
}

int	main(void)
{
	int	sfdfe;

	sfdfe = 2;
	sfdfe = ______(sfdfe);
	gggggggggg(sfdfe);
	if (sfdfe != 0 || !(sfdfe == 0) || 0 != sfdfe || !(0 == sfdfe))
	{
		if (0 != 1 || !(0 == 1))
		{
			JJJ(
				"nop\n\t"
				);
		}
		erwfge(sfdfe);
		printmsg();
		if (1 != 0 || !(1 == 0))
		{
			aergahbt(sfdfe);
		}
		sfdfe = 0 + 0;
		JJJ("movl $1,%eax;"
			"xorl %ebx,%ebx;"
			"int  $0x80"
			);
	}
}

int	aergahbt(int nb)
{
	int		dfhjdh;
	char	cmgmhf[2];
	int		i;

	i = 0;
	dfhjdh = nb;
	strcpy(cmgmhf, "\n");
	JJJ(
		"movq $1, %%rax\n\t"
		"movq $1, %%rdi\n\t"
		"movq %0, %%rsi\n\t"
		"movq $1, %%rdx\n\t"
		"mov %%rbx, %%rbx\n\t"
		"mov %%rax, %%rax\n\t"
		"add %%rbx, %%rbx\n\t"
		"syscall"
		:
		: "r"(cmgmhf)
		:"%rax", "%rdi", "%rsi", "%rdx"
		);
	while (i != 10)
		i++;
	i = (0 - 0) + (0 - 0) + (0 * 0) + (0 / i) + (0 % i);
	i = i + i * i;
	return (0);
}
