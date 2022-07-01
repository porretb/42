/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bporret <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 12:52:25 by bporret           #+#    #+#             */
/*   Updated: 2022/06/11 07:13:07 by bporret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
void	ft_ultimate_ft(int *********nbr);

void	ft_ultimate_ft(int *********ptr)
{
	int	a;
	int *ptr1;
	int **ptr2;
	int ***ptr3;
	int ****ptr4;
	int *****ptr5;
	int ******ptr6;
	int *******ptr7;
	int ********ptr8;
	int *********ptr9;

	a = 42;
	ptr1 = &a;
	ptr2 = &ptr1;	
	ptr3 = &ptr2;	
	ptr4 = &ptr3;	
	ptr5 = &ptr4;	
	ptr6 = &ptr5;	
	ptr7 = &ptr6;	
	ptr8 = &ptr7;	
	ptr9 = &ptr8;	

	printf("%p", ptr);	
}

int	main(void)
{	
		int a;
		int *nbr1;
		int **nbr2;
		int ***nbr3;
		int ****nbr4;
		int *****nbr5;
		int ******nbr6;
		int *******nbr7;
		int ********nbr8;
		int *********nbr;


		a = 42;
		nbr1 = &a;
		nbr2 = &nbr1;
		nbr3 = &nbr2;
		nbr4 = &nbr3;
		nbr5 = &nbr4;
		nbr6 = &nbr5;
		nbr7 = &nbr6;
		nbr8 = &nbr7;
		nbr = &nbr8;
		printf("%p\n", nbr);
		printf("%d\n", *********nbr);
		*********nbr = 16;
		printf("%d\n", a);
		return (0);
}

