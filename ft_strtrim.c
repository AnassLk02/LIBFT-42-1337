/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anel-kam <anel-kam@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/01 11:13:03 by anel-kam          #+#    #+#             */
/*   Updated: 2026/11/01 12:11:28 by anel-kam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	s_start(char const *s1, char const *set)
{
	int	start;
	int	j;

	start = 0;
	while (s1[start])
	{
		j = 0;
		while (set[j] && s1[start] != set[j])
			j++;
		if (!set[j])
			break ;
		start++;
	}
	return (start);
}

static int	s_end(char const *s1, char const *set)
{
	int	end;
	int	j;

	end = ft_strlen(s1);
	while (end > 0)
	{
		j = 0;
		while (set[j] && s1[end - 1] != set[j])
			j++;
		if (!set[j])
			break ;
		end--;
	}
	return (end);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	int		start;
	int		end;
	int		n_bytes;
	int		index;

	index = 0;
	if (!s1 || !set)
		return (NULL);
	start = s_start(s1, set);
	end = s_end(s1, set);
	n_bytes = end - start;
	if (n_bytes < 0)
		n_bytes = 0;
	ptr = malloc((n_bytes + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	while (index < n_bytes)
	{
		ptr[index] = s1[start + index];
		index++;
	}
	ptr[index] = '\0';
	return (ptr);
}
