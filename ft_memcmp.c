/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anel-kam <anel-kam@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 11:06:09 by anel-kam          #+#    #+#             */
/*   Updated: 2026/11/01 17:49:33 by anel-kam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	index;

	index = 0;
	if (n == 0)
		return (0);
	while (index < n
		&& ((unsigned char *)s1)[index] == ((unsigned char *)s2)[index])
	{
		index++;
	}
	if (index == n)
		return (0);
	return (((unsigned char *)s1)[index] - ((unsigned char *)s2)[index]);
}
