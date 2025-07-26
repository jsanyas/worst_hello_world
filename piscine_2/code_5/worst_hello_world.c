/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   worst_hello_world.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: XXXXXXX <marvin@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 10:15:48 by XXXXXXX           #+#    #+#             */
/*   Updated: 2025/07/26 18:22:07 by XXXXXXX          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <assert.h>
#include <complex.h>
#include <ctype.h>
#include <errno.h>
#include <fenv.h>
#include <inttypes.h>
#include <iso646.h>
#include <limits.h>
#include <locale.h>
#include <math.h>
#include <setjmp.h>
#include "fgryg.h"
#include <signal.h>
#include <stdalign.h>
#include <stdarg.h>
#include <stdatomic.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdnoreturn.h>
#include <string.h>
#include <tgmath.h>
#include <threads.h>
#include <time.h>
#include <uchar.h>
#include <wchar.h>
#include <wctype.h>

void	splash(struct s_00 what)
{
	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c", \
		what.biosd, what.afsgh, what.aufkb, what.aufkb, what.vlabb, \
			what.fbusa, what.vibys, what.oabvo, what.vlabb, what.ygfea, \
				what.aufkb, what.iapvb, what.sugvb, what.uagff);
}

int	main(void)
{
	struct s_00	trash;

	trash.afsgh = 101;
	trash.aufkb = 108;
	trash.biosd = 72;
	trash.fbusa = 44;
	trash.vibys = 32;
	trash.uagff = 10;
	trash.oabvo = 87;
	trash.sugvb = 33;
	trash.vlabb = 111;
	trash.ygfea = 114;
	trash.iapvb = 100;
	splash(trash);
	return (0);
}
