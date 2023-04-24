/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 10:13:19 by adelille          #+#    #+#             */
/*   Updated: 2023/04/24 15:06:46 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

char	*ft_strcpy(char *dest, const char *src);

// true if test passes
bool	test(const char *src)
{
	char	*dest;

	dest = malloc(sizeof(char) * strlen(src));
	if (!dest)
		return (!write(2, "malloc failed\n", 14));
	return (strcmp(strcpy(dest, src), src) == 0);
}

int	main(void)
{
	bool	res;

	res = false;
	res |= !test("hello");
	res |= !test("");
	res |= !test("1");
	res |= !test("somewhat loooooooooooooooooooooooooooooooooooong");
	return (res);
}
