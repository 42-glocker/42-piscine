/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recrsive_factorial.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajurczyn <ajurczyn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/10 15:52:09 by ajurczyn          #+#    #+#             */
/*   Updated: 2015/08/10 15:52:14 by ajurczyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
int nbr(int i)
{
	if (i <= 0)
	{
		i += 1;
		nbr(i);
		write( 1, 0, 1);
		return (0);
	}
	else
	{
		return (0);
	}

}

int main()
{
	nbr(0);
	return (0);
}
