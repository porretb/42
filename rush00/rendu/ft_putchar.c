/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bporret <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 20:49:33 by bporret           #+#    #+#             */
/*   Updated: 2022/06/12 07:48:35 by bporret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>


void ft_putchar(char c)
{
	write(1, &c, 1);
}
