# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    test_jo                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ajurczyn <ajurczyn@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/08/09 03:10:32 by ajurczyn          #+#    #+#              #
#    Updated: 2015/08/09 11:02:45 by ajurczyn         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#nclude <unistd.h>

int     ft_putchar (char addchar)
{
	    write (1, &addchar, 1);
		    return (0);
	}

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
	  return (0);
}

int        main ()
{
	    colle(5);
		    return (0);
}
