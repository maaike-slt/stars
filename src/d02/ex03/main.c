/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 10:13:19 by adelille          #+#    #+#             */
/*   Updated: 2023/03/23 11:53:38 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	first_letter(char *pony_name);

int	main(void)
{
	return (!(
			first_letter("Parthenia") == 'P'
			&& first_letter("Spurgeon") == 'S'
			&& first_letter("Zaby") == 'Z'
			&& first_letter("Ab") == 'A'
		));
}
