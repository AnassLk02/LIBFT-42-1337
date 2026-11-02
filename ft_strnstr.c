/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anel-kam <anel-kam@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 11:43:10 by anel-kam          #+#    #+#             */
/*   Updated: 2026/11/01 14:18:55 by anel-kam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (!little[0])
		return ((char *)big);
	i = 0;
	while (i < len && big[i])
	{
		j = 0;
		while ((i + j < len) && (big[i + j] == little[j]) && little[j])
		{
			j++;
			if (!little[j])
				return ((char *)(big + i));
		}
		i++;
	}
	return (NULL);
}
