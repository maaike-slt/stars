/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 10:13:19 by adelille          #+#    #+#             */
/*   Updated: 2023/04/01 11:48:34 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	name_len(char *pony_name);

int	main(void)
{
	return (!(
			name_len("Parthenia") == 9
			&& name_len("Spurgeon") == 8
			&& name_len("Zaby") == 4
			&& name_len("Ab") == 2
		));
}
