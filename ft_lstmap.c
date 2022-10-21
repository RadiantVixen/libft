/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 11:49:36 by aatki             #+#    #+#             */
/*   Updated: 2022/10/21 19:26:54 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*t;
	t_list	*tmp;
	t_list	*res;

	t = malloc (sizeof(t_list) * ft_lstsize(lst));
	if (!t)
		return (NULL);
	t = NULL;
	while (lst)
	{
		res = ft_lstnew(f(lst->content));
		ft_lstadd_back(&t, res);
		tmp = lst;
		lst = lst->next;
		if (!res)
			ft_lstdelone(tmp, del);
	}
	return (t);
}

// void	del(void *p)
// {
// 	free (p);
// }
// void	*f(void *p)
// {
// 	return (ft_memmove(p + 2, p, 1));
// }
// int main()
// {
// 	int i = 0;
// 	t_list *lst = ft_lstnew(ft_strdup("Hello"));
// 	lst->next = ft_lstnew(ft_strdup("WorldLL"));
// 	lst->next->next = ft_lstnew(ft_strdup("!!!!"));
// 	t_list *tmp = ft_lstmap(lst,f,del);
// 	while (tmp)
// 	{
// 		printf("%s\n", tmp->content);
// 		tmp = tmp->next;
// 	}
// }
// void freeList(t_list *head) {if (head) freeList(head->next); free(head);}
// void * addOne(void * p) {
// 	void * r = malloc(sizeof(int)); *(int*)r = *(int*)p + 1;
// 	return (r);
// }
// int main ()
// {
// 	int tab[] = {0, 1, 2, 3};
// 	t_list * l =  ft_lstnew((void*)tab);
// 	for (int i = 1; i < 4; ++i)
// 		ft_lstadd_back(&l, ft_lstnew(tab + i));
// 	t_list * m = ft_lstmap(l, addOne, free);
// 	t_list * tmp = l;
// 	tmp = m;
// 	for (int i = 0; i < 4; ++i)
// 	{
// 		printf("%d",(*(int*)tmp->content == i + 1));
// 		tmp = tmp->next;
// 	}	
// }