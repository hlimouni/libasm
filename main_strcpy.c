/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlimouni <hlimouni@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 09:48:02 by hlimouni          #+#    #+#             */
/*   Updated: 2021/03/20 10:00:20 by hlimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

extern	char *ft_strcpy(char * dst, const char * src);

int	main(void)
{
	char *src = "the quick brown fox jumps over the lazy dog";
	char *dst = malloc(strlen(src) + 1);
	char *dst_asm = malloc(strlen(src) + 1);

	dst = strcpy(dst, src);
	dst_asm = ft_strcpy(dst_asm, src);
	printf("[%s]\n", dst_asm);
	printf("[%s]\n", dst);
	free(dst_asm);
	free(dst);
	return (0);
}
