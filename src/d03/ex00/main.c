/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 10:13:19 by adelille          #+#    #+#             */
/*   Updated: 2023/04/01 11:51:03 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	find_char(char *word, char letter);

int	main(void)
{
	return (!(
			find_char("hello", 'e') == 1
			&& find_char("world", 'w') == 0
			&& find_char("last", 't') == 3
			&& find_char("but wait, what if?", '?') == 17
		));
}
