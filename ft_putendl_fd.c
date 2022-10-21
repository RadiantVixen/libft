/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 21:09:58 by aatki             #+#    #+#             */
/*   Updated: 2022/10/21 11:36:00 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}

// int	main()
// {
// 	int fd = open("fd.txt",O_CREAT, O_RDWR,777);
// 	ft_putendl_fd("done!", fd);
// 	printf("%d",fd);
// 	return (0);
// }