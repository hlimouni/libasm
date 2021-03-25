/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlimouni <hlimouni@1337.student.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 17:08:42 by hlimouni          #+#    #+#             */
/*   Updated: 2021/02/12 17:35:37 by hlimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

extern	size_t ft_strlen(const char *str);

int	main(void)
{
	char *str = "alksjf alskjf lljl\n\t";

	printf("asm ft_strlen => len of %s is %lu\n", str, ft_strlen(str));
	printf("strlen => len of %s is %lu\n", str, strlen(str));
	return (0);
}
