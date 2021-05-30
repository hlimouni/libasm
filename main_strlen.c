/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlimouni <hlimouni@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 17:08:42 by hlimouni          #+#    #+#             */
/*   Updated: 2021/05/30 12:42:04 by hlimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

extern	size_t ft_strlen(const char *str);

int	main(void)
{
	char *str = "The quick brown fox jumps over the lazy dog\n\t";

	printf("asm ft_strlen => len of %s is %lu\n", str, ft_strlen(str));
	printf("strlen => len of %s is %lu\n", str, strlen(str));
	return (0);
}
