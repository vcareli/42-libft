/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinvieir <vinvieir@student.42quebec.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 16:32:43 by vinvieir          #+#    #+#             */
/*   Updated: 2023/01/09 16:32:43 by vinvieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isdigit(int str)
{
	int	v;

	v = 0;
	if (str < 0)
		str *= -1;
	if (str >= '0' && str <= '9')
		v = 1;
	return (v);
}