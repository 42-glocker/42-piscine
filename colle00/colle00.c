/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle00.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajurczyn <ajurczyn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/09 01:13:49 by ajurczyn          #+#    #+#             */
/*   Updated: 2015/08/09 02:08:54 by ajurczyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     colle (int x)
{
    int tmp;
	 int i;

	 if (x == 1)
{
	ft_putchar('o');
	ft_putchar('\n');
}
	else if(x == 2)
		
	{
		ft_putchar('o');
		ft_putchar('o');
		ft_putchar('\n');
	}
	else if(x >= 3)
{
	tmp = x - 2;
	ft_putchar('o');

 	while (i < tmp)

	{
		ft_putchar('-');
		ft_putchar('\n');
		i++;
	}
}

ft_putchar('o');
	return (0)