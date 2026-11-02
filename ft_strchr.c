/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anel-kam <anel-kam@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 21:13:43 by anel-kam          #+#    #+#             */
/*   Updated: 2026/11/01 18:14:01 by anel-kam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	index;

	index = 0;
	if (!s)
		return (NULL);
	while (1337)
	{
		if ((unsigned char)s[index] == (unsigned char)c)
			return ((char *)&s[index]);
		if (s[index] == '\0')
			return (NULL);
		index++;
	}
}
