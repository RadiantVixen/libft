/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 11:33:13 by aatki             #+#    #+#             */
/*   Updated: 2022/10/21 11:31:18 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	f(void *d)
// {
// 	ft_bzero(d, 5);
// }

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

// int main()
// {
// 	int i = 0;
// 	t_list *lst = ft_lstnew(ft_strdup("Hello"));
// 	lst->next = ft_lstnew(ft_strdup("WorldLL"));
// 	lst->next->next = ft_lstnew(ft_strdup("!!!!"));
// 	ft_lstiter(lst,f);
// 	while (lst)
// 	{
// 		printf("%s\n", lst->content);
// 		lst = lst->next;
// 	}
// }