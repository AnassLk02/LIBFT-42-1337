/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anel-kam <anel-kam@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 09:01:38 by anel-kam          #+#    #+#             */
/*   Updated: 2026/11/01 18:23:01 by anel-kam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	index;
	size_t	index_2;
	char	*ptr;

	index = 0;
	index_2 = 0;
	if (!s1 || !s2)
		return (NULL);
	ptr = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!ptr)
		return (NULL);
	while (s1[index])
	{
		ptr[index] = s1[index];
		index++;
	}
	while (s2[index_2])
	{
		ptr[index] = s2[index_2];
		index++;
		index_2++;
	}
	ptr[index] = '\0';
	return (ptr);
}
