/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   name_len.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 18:43:31 by msloot            #+#    #+#             */
/*   Updated: 2023/03/30 18:54:21 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	name_len(char *pony_name)
{
	size_t	i;

	i = 0;
	while (pony_name[i] != '\0')
		i++;
	return (i);
}
