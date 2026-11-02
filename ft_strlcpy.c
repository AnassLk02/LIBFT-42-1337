/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anel-kam <anel-kam@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 12:35:14 by anel-kam          #+#    #+#             */
/*   Updated: 2026/11/01 18:07:36 by anel-kam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	index;
	size_t	s_len;

	index = 0;
	s_len = ft_strlen(src);
	if (size == 0)
		return (s_len);
	while ((index < size - 1) && src[index])
	{
		dst[index] = src[index];
		index++;
	}
	dst[index] = '\0';
	return (s_len);
}
