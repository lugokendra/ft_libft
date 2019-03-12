/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kendralugo <kendralugo@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 20:51:28 by kelugo            #+#    #+#             */
/*   Updated: 2019/03/11 21:19:35 by kendralugo       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int ndx;
	int sign;
	int nbr;

	ndx = 0;
	sign = 1;
	nbr = 0;
	if (!str[ndx])
		return (0);
	while (str[ndx] == '\t' || str[ndx] == '\v' || str[ndx] == '\n' ||
			str[ndx] == '\r' || str[ndx] == '\f' || str[ndx] == ' ')
		ndx++;
	if (str[ndx] == '-' || str[ndx] == '+')
		if (str[ndx++] == '-')
			sign = -1;
	while (str[ndx] >= '0' && str[ndx] <= '9')
		nbr = (nbr * 10) + (str[ndx++] - '0');
	return (nbr * sign);
}
