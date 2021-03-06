/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ad_factorial.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsmolii <vsmolii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/14 18:02:23 by vsmolii           #+#    #+#             */
/*   Updated: 2018/12/15 21:13:42 by vsmolii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_ad_factorial(int n)
{
	int a;

	a = n;
	if (n == 0 || n == 1)
		return (1);
	while (n > 1)
	{
		a = a * (n - 1);
		n--;
	}
	return (a);
}
