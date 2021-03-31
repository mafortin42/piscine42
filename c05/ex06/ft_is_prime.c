/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 14:23:30 by mafortin          #+#    #+#             */
/*   Updated: 2021/03/25 15:14:50 by mafortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (nb <= 0)
		return (0);
	if (nb == 2 || nb == 3 || nb == 5)
		return (1);
	while (i != nb)
	{
		i++;
		if (nb % i == 0)
			j++;
	}
	if (j == 2)
		return (1);
	else
		return (0);
}