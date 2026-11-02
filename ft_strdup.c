/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anel-kam <anel-kam@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 11:05:40 by anel-kam          #+#    #+#             */
/*   Updated: 2026/11/01 18:09:55 by anel-kam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char			*ptr;
	unsigned int	len;
	unsigned int	index;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	ptr = malloc(len + 1);
	index = 0;
	if (!ptr)
		return (NULL);
	while (s[index])
	{
		ptr[index] = s[index];
		index++;
	}
	ptr[index] = 0;
	return (ptr);
}
