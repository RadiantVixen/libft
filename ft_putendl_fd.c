/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 21:09:58 by aatki             #+#    #+#             */
/*   Updated: 2022/10/18 21:33:17 by aatki            ###   ########.fr       */
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
// 	int fd = open("fd.txt", O_RDWR, 0777);
// 	ft_putendl_fd("done!", fd);
// 	return (0);
// }