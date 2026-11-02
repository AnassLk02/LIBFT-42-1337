/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anel-kam <anel-kam@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 09:45:39 by anel-kam          #+#    #+#             */
/*   Updated: 2026/11/01 18:29:24 by anel-kam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t				index;
	const unsigned char	*str1;
	const unsigned char	*str2;

	index = 0;
	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	while (index < n && str1[index] && str1[index] == str2[index])
		index++;
	if (index == n)
		return (0);
	return (str1[index] - str2[index]);
}
