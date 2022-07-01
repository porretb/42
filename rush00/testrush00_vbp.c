/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testrush00.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmastrog <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 16:23:31 by mmastrog          #+#    #+#             */
/*   Updated: 2022/06/12 08:43:12 by bporret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int main(void)
{
	int x;//nb de colonne
	int y;//nb de ligne
	int countx;//compteur de nb de colonne
	int county;//compteur de nb de ligne
	int c;

	x = 2;
	y = 2;

	county = y - 1;
	countx = x - 1;

	if(x > 0 && y > 0)
	{
		write(1, "o", 1);
		if(countx == 1)
		{
			write(1, "o", 1);
		}
		else
		{
			while(countx > 1)
			{
				write(1, "-", 1);
				countx--;
				if(countx == 1)
				{
					write(1, "o", 1);
					write(1, "\n", 1);
				}
			}		
		}
		if(county == 1)
		{
			write(1, "|", 1);
		}
		else
		{
			while(county > 1)
			{
				write(1, " ", 1);
				county--;
				if(county == 1)
				{
					write(1, "|", 1);
				}
			}
		}
	}
return(0);
}
