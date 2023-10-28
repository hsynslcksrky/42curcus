/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsarikay <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 19:24:45 by hsarikay          #+#    #+#             */
/*   Updated: 2023/09/05 19:28:44 by hsarikay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	c;

	c = 0 ;
	while (str[c] != '\0')
	{
		if ((str[c] >= '0' && str[c] <= '9'))
		{
			c++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
