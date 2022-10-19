/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 08:16:18 by aatki             #+#    #+#             */
/*   Updated: 2022/10/19 08:36:03 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
}

// int main()
// {
// 	t_list *l=ft_lstnew("aicha");
// 	t_list *lst=ft_lstnew("test");
// 	ft_lstadd_front(&lst, l);
// 	printf("%s",l->next->content);
// }