/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 10:13:19 by adelille          #+#    #+#             */
/*   Updated: 2023/04/03 17:49:42 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>

ssize_t	find_char(char *word, char letter);

int	main(void)
{
	return (!(
			find_char("hello", 'e') == 1
			&& find_char("world", 'w') == 0
			&& find_char("last", 't') == 3
			&& find_char("but wait, what if?", '?') == 17
			&& find_char("banana", 'n') == 3
			&& find_char("banana", 'e') == -1
			&& find_char("", 'a') == -1
		));
}
