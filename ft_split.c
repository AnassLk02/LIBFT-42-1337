/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anel-kam <anel-kam@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 10:18:39 by anel-kam          #+#    #+#             */
/*   Updated: 2026/11/01 17:23:53 by anel-kam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	word_count(char const *s, char c)
{
	size_t	index;
	size_t	count;

	index = 0;
	count = 0;
	while (s[index])
	{
		while (s[index] && s[index] == c)
			index++;
		if (s[index])
		{
			count++;
			while (s[index] && s[index] != c)
				index++;
		}
	}
	return (count);
}

static int	word_len(char const *s, int i, char c)
{
	int	count;

	count = 0;
	while (s[i] && s[i] != c)
	{
		i++;
		count++;
	}
	return (count);
}

static char	*alloc_words(char const *s, int *original_index, char c)
{
	int		len;
	int		index;
	char	*ptr_to_heap;

	len = word_len(s, *original_index, c);
	ptr_to_heap = malloc(len + 1);
	if (!ptr_to_heap)
		return (NULL);
	index = 0;
	while (s[*original_index] && s[*original_index] != c)
	{
		ptr_to_heap[index] = s[*original_index];
		(*original_index)++;
		index++;
	}
	ptr_to_heap[index] = '\0';
	return (ptr_to_heap);
}

static char	**free_all(char **copy, int i)
{
	while (i > 0)
	{
		i--;
		free(copy[i]);
	}
	free(copy);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**copy;

	if (!s)
		return (NULL);
	copy = malloc((word_count(s, c) + 1) * sizeof(char *));
	if (!copy)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] == '\0')
			break ;
		copy[j] = alloc_words(s, &i, c);
		if (!copy[j])
			return (free_all(copy, j));
		j++;
	}
	copy[j] = NULL;
	return (copy);
}
