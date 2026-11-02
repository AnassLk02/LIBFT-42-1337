/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anel-kam <anel-kam@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 14:12:53 by anel-kam          #+#    #+#             */
/*   Updated: 2026/11/01 17:54:14 by anel-kam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	unsigned int	index;

	index = 0;
	if (!s)
		return ;
	while (s[index])
	{
		write(fd, &s[index], 1);
		index++;
	}
	write(fd, "\n", 1);
}
