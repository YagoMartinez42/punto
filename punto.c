/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   punto.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samartin <samartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 16:48:20 by samartin          #+#    #+#             */
/*   Updated: 2022/12/14 16:53:10 by samartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(void)
{
	while(1)
	{
		write(1,".", 1);
		return (0);
	}
}
