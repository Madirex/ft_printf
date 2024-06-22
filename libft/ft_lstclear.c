/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmateo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 10:17:12 by anmateo-          #+#    #+#             */
/*   Updated: 2023/10/02 10:23:03 by anmateo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*icurrent;
	t_list	*inext;

	if (*lst)
	{
		icurrent = *lst;
		while (icurrent)
		{
			inext = icurrent->next;
			ft_lstdelone(icurrent, del);
			icurrent = inext;
		}
	}
	*lst = 0;
}
