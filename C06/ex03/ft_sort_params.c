/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bporret <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 09:56:30 by bporret           #+#    #+#             */
/*   Updated: 2022/06/28 05:48:54 by bporret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_putnb(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * -1;
	}
	if (nb > 0)
	{
		ft_putchar(nb + 48);
	}
	if (nb > 9)
	{
		ft_putnb(nb / 10);
	}
	ft_putchar(nb % 10);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_sort_string(int num, char **str)
{
	int		i;
	int		j;
	char	*temp;

	i = 0;
	j = 0;
	while (i < num)
	{
		while (j > 0 && ft_strcmp(str[j - 1], str[j]) > 0)
		{
			temp = str[j - 1];
			str[j - 1] = str[j];
			str[j] = temp;
		}
		i++;
	}
}

void	ft_put_param(char *param)
{
	int	i;

	i = 0;
	while (param[i] != '\0')
	{
		ft_putchar(param[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = argc;
	while (*argv)
		ft_sort_string(argc -1, argv + 1);
	while (i > 1)
	{
		ft_put_param(argv[i - 1]);
		ft_putchar('\n');
		i--;
	}
	return (0);
}
