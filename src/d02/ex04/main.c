/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 10:13:19 by adelille          #+#    #+#             */
/*   Updated: 2023/03/25 15:44:15 by adelille         ###   ########.fr       */
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
			&& printf("you see a pony come to the small small elf.\nyou hear the pony saying: 'I am very thankful for everything you do for us, I hope we can be friends'\nthe small elf is jumping everywhere\n\nyou are very happy for the small elf and the ponies\nyou decide to continue your adventure, you leave the barn and walk towards 
		));
}
