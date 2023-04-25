/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 17:35:02 by msloot            #+#    #+#             */
/*   Updated: 2023/04/25 18:17:50 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <sys/types.h>

ssize_t	ft_putstr(const char *str)
{
	size_t	count;

	count = 0;
	while (str[count] != '\0')
		++count;
	return (write(1, str, count));
}
