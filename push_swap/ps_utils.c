/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toantune <toantune@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 15:58:23 by toantune          #+#    #+#             */
/*   Updated: 2023/08/11 14:51:49 by toantune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_duplicats(char **argv)
{
	int	i;
	int	j;

	i = 0;
	while (argv[i])
	{
		j = i + 1;
		while (argv[j])
		{
			if (argv[i] == argv[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	check_input(char **argv)
