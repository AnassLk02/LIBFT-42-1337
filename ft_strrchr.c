/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anel-kam <anel-kam@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 08:36:45 by anel-kam          #+#    #+#             */
/*   Updated: 2026/11/01 18:02:58 by anel-kam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		index;
	char	*temp_p;

	index = 0;
	temp_p = NULL;
	while (s[index])
	{
		if (s[index] == (char)c)
			temp_p = (char *)&s[index];
		index++;
	}
	if (s[index] == c)
		temp_p = (char *)&s[index];
	return (temp_p);
}
