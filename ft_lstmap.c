/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 11:49:36 by aatki             #+#    #+#             */
/*   Updated: 2022/10/19 12:13:21 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*f(void *p)
{
	return (ft_memmove(p+2,p,1));
}

void	del(void *p)
{
	free (p);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*t;

	t = malloc (sizeof(t_list) * ft_lstsize(lst));
	if (!t)
		return (NULL);
	while (lst)
	{
		t = f(lst->content);
		if (0)
		{
			ft_lstdelone(lst, del);
		}
		lst = lst->next;
		t= t->next;
	}
	return (t);
}

int main()
{
	int i = 0;
	
	t_list *lst = ft_lstnew(ft_strdup("Hello"));
	lst->next = ft_lstnew(ft_strdup("WorldLL"));
	lst->next->next = ft_lstnew(ft_strdup("!!!!"));
	t_list *tmp = ft_lstmap(lst,f,del);
	while (tmp)
	{
		printf("%s\n", tmp->content);
		tmp = tmp->next;
	}
}