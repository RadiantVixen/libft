/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 21:12:21 by aatki             #+#    #+#             */
/*   Updated: 2022/10/19 06:56:14 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
	char	*s;
	
	s = ft_itoa(n);
	ft_putstr_fd(s, fd);
}


int	main()
{
	int fd = open("fd1.txt", O_RDWR, 0777);
	ft_putnbr_fd(1256, fd);
	write (2,'c',1);
	return (0);
}