/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 10:13:19 by adelille          #+#    #+#             */
/*   Updated: 2023/03/22 10:48:25 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	sum(unsigned int tree);

int	main(void)
{
	return (!(
			sum(0) == 0
			&& sum(3) == 5
			&& sum(5) == 15
		));
}
