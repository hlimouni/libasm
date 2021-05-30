/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_write.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlimouni <hlimouni@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 12:06:37 by hlimouni          #+#    #+#             */
/*   Updated: 2021/05/30 15:42:44 by hlimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h> 
#include <stdlib.h>
#include <errno.h>

extern size_t ft_write(int fildes, const void *buf, size_t nbyte);

int main(void)
{
int retft = ft_write(-1, "test", 4);
// int ret = write(-1, "test", 4);
// printf("ret == %d\n", ret);
printf("retft == %d\n", retft);
// ft_write(tmp[1], NULL, 5);
// ft_write(tmp[1], NULL, 2);
// ft_write(-1, "tt", 2);
// ft_write(OPEN_MAX + 1, "tt", 2);
// ft_read(-1, buf_read, 2);
// ft_read(tmp[0], NULL, 2);
// ft_read(-1, buf_read, 2);
// ft_read(OPEN_MAX + 1, buf_read, 2);
    return (0);
}