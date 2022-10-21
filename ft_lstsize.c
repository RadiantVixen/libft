/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 08:33:35 by aatki             #+#    #+#             */
/*   Updated: 2022/10/21 11:34:27 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

// int main()
// {
// 	t_list *l=ft_lstnew("aicha");
// 	t_list *lst=ft_lstnew("test");
// 	ft_lstadd_front(&lst, l);
// 	//ft_lstadd_front(&lst, l);
// 	printf("%s\n",l->next->content);
// 	printf("%d",ft_lstsize(l));
// }