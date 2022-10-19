/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 07:53:50 by aatki             #+#    #+#             */
/*   Updated: 2022/10/19 10:19:42 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
	t_list	*l;
	
	l = malloc (sizeof(t_list));
	l->content = content;
	l->next = NULL;
	return (l);
}

// int main()
// {
// 	char *p="aicha";
// 	printf("%s",ft_lstnew(p)->content);
// }