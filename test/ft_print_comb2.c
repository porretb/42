/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bporret <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 15:51:43 by bporret           #+#    #+#             */
/*   Updated: 2022/06/15 18:40:45 by bporret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void);
void	ft_putchar(char c);

int	main(void)
{
	ft_print_comb2();
}
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	ft_print_comb2(void)
{
	int	nb1;
	int	nb2;
	int	nb3;
	int	nb4;

	nb1 = 48;
	nb2 = 48;
	nb3 = 48;
	nb4 = 48;
	
	while (nb4 <= 57)
	{
			ft_putchar(nb1);
			ft_putchar(nb2);
			ft_putchar(' ');
			ft_putchar(nb3);
			ft_putchar(nb4);
			ft_putchar(',');
			ft_putchar(' ');
			nb4++;
			if (nb4 > 57)
				while (nb3 <= 57)
				{
					nb4 = nb3 + 1;
					ft_putchar(nb1);
					ft_putchar(nb2);
					ft_putchar(' ');
					ft_putchar(nb3);
					ft_putchar(nb4);
					ft_putchar(',');
					ft_putchar(' ');
					nb3++;
				}
	}
}
