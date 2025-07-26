/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hello.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: XXXXXXX <marvin@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 13:35:42 by XXXXXXX           #+#    #+#             */
/*   Updated: 2025/07/26 18:24:13 by XXXXXXX          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HELLO_H
# define HELLO_H
# define OOOO 10
# define OOO 0
# define JJJ asm
# define III 80

static inline void	dhgdfgj(int oo);
static inline void	ioioioioioi(void);
static inline void	nothing(void);
static inline void	alkjvliglg(void);

static inline void	erwfge(int oo)
{
	int	afsfag;

	oo = oo * oo + oo - oo;
	JJJ(
		"nop\n\t"
		"push %%rax\n\t"
		"push %%rbx\n\t"
		"push %%rcx\n\t"
		"pop %%rax\n\t"
		"pop %%rbx\n\t"
		"pop %%rcx\n\t"
		"mov %%rax, %%rax\n\t"
		"add %%rbx, %%rax\n\t"
		"sub %%rax, %%rax\n\t"
		"nop\n\t"
		:
		:
		: "%rax", "%rbx", "%rcx"
		);
	afsfag = OOO;
	if (afsfag != OOOO)
		afsfag = oo;
	afsfag = oo - oo;
	oo *= oo;
	dhgdfgj(oo);
}

static inline void	dhgdfgj(int oo)
{
	JJJ(
		"mov %%rax, %%rax\n\t"
		"nop\n\t"
		:
		:
		:"rax"
		);
	oo = OOO;
	JJJ(
		"add $5, %[gadfafd]"
		: [gadfafd] "=r" (oo)
		: "[gadfafd]" (oo)
		);
	if (oo != OOO)
	{
		JJJ(
			"mov %%rbx, %%rbx\n\t"
			"xor %%rax, %%rax\n\t"
			"add %%rax, %%rbx\n\t"
			:
			:
			: "%rax", "%rbx"
			);
	}
	ioioioioioi();
}

static inline void	ioioioioioi(void)
{
	int	i;
	int	ii;
	int	iii;
	int	iiii;

	i = OOO;
	ii = OOO;
	iii = OOO;
	iiii = OOO;
	while (OOO == OOO)
	{
		break ;
	}
	nothing();
	JJJ(
		"push %%rax\n\t"
		"mov %%rax, %%rax\n\t"
		"pop %%rax\n\t"
		"mov %%rbx, %%rbx\n\t"
		"mov %%rcx, %%rcx\n\t"
		:
		:
		:"%rax", "%rbx", "%rcx"
		);
}

static inline void	nothing(void)
{
	asm(
		"nop\n\t"
		"nop\n\t"
		"nop\n\t"
		"nop\n\t"
		"nop\n\t"
		"nop\n\t"
		"nop\n\t"
		"nop\n\t"
		"nop\n\t"
		"nop\n\t"
		"nop\n\t"
		"nop\n\t"
		"nop\n\t"
		"nop\n\t"
		"nop\n\t"
		"nop\n\t"
		"nop\n\t"
		"nop\n\t"
		"nop\n\t"
		"nop\n\t"
		"nop\n\t"
		"nop\n\t"
		);
	alkjvliglg();
}

static inline void	alkjvliglg(void)
{
	int	vhmgchnc;
	int	dsbf;

	vhmgchnc = OOO;
	dsbf = OOO;
	JJJ(
		"push %%rax\n\t"
		"mov %%rax, %%rax\n\t"
		"pop %%rax\n\t"
		:
		:
		:"%rax", "%rbx", "%rcx"
		);
	JJJ(
		"mov %%rbx, %%rbx\n\t"
		"add %%rax, %%rbx\n\t"
		:
		:
		: "%rax", "%rbx"
		);
	JJJ("sub $5, %[glliu]"
		: [glliu] "=r" (vhmgchnc)
		: "[glliu]" (dsbf)
		);
}
#endif
