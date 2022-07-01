/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bporret <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 15:30:17 by bporret           #+#    #+#             */
/*   Updated: 2022/06/13 17:27:49 by bporret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_putchar(char c);
void	ft_nputchar(char c, int x);

int main(void)
{
	ft_putchar('a');
	ft_putchar('\n');
	ft_putchar('-');
	ft_putchar('-');
	ft_putchar('-');
	ft_putchar('\n');
	ft_nputchar('a', 5);	
}

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_nputchar(char c, int x)
{
	int count;
	count = 0;

	while (count < x)
	{
		write(1, &c, 1);
		count++;
	}

}
