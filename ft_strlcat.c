/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anel-kam <anel-kam@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 14:14:36 by anel-kam          #+#    #+#             */
/*   Updated: 2026/11/01 10:08:55 by anel-kam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	index;
	size_t	dst_len;
	size_t	src_len;

	src_len = ft_strlen(src);
	dst_len = 0;
	while (dst[dst_len] && dst_len < size)
		dst_len++;
	if (dst_len >= size)
		return (size + src_len);
	index = 0;
	while (src[index] && (dst_len + index) < (size - 1))
	{
		dst[dst_len + index] = src[index];
		index++;
	}
	dst[dst_len + index] = '\0';
	return (dst_len + src_len);
}
