/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anel-kam <anel-kam@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 11:39:35 by anel-kam          #+#    #+#             */
/*   Updated: 2026/11/01 17:43:23 by anel-kam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				index;
	unsigned char		*_destination;
	const unsigned char	*_source;

	index = 0;
	_destination = (unsigned char *)dest;
	_source = (const unsigned char *)src;
	if (_destination == _source)
		return (dest);
	while (n > 0 && _destination > _source)
	{
		_destination[n - 1] = _source[n - 1];
		n--;
	}
	while (index < n)
	{
		_destination[index] = _source[index];
		index++;
	}
	return (dest);
}
