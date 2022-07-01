/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bporret <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 07:11:55 by bporret           #+#    #+#             */
/*   Updated: 2022/06/10 09:25:57 by bporret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int main(void)
{
	int	a;
	int b;
	int *ptr;
	int *ptr2;
	int **ptr3;

	a = 2;
	ptr = &a;
	printf("%p\n", ptr);
	printf("%d\n", a);
	ptr = &b;
	printf("%p\n", ptr);
	ptr2 = ptr;
	printf("%p\n", ptr2);
	ptr3 = &ptr;
	printf("%p\n", ptr3);
	return (0);
}

