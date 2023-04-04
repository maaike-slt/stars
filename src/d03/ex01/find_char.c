/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_char.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 15:37:10 by msloot            #+#    #+#             */
/*   Updated: 2023/04/04 16:50:40 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>

ssize_t	find_char(char *word, char letter)
{
	ssize_t	i;

	i = 0;
	while (word[i] != '\0')
	{
		if (word[i] == letter)
			return (i);
		i++;
	}
	return (-1);
}
