/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_input_valid.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbiernac <jbiernac@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 14:22:03 by jbiernac          #+#    #+#             */
/*   Updated: 2023/12/03 14:27:03 by jbiernac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str);

void	ft_putstr(char *str);

void	ft_throw_error(int mod, char *example);

char	*ft_is_input_valid(int argc, char *argv[])
{
	char *example = "1 2 3 4 1 2 3 4 1 2 3 4 1 2 3 4";
	int arg_len = ft_strlen(example);
	
	if (argc < 2){
		ft_throw_error(0, example);
		return ("");
	}

	char *input = argv[1];
	if (arg_len != ft_strlen(input)) {
		ft_throw_error(1, example);
		return ("");
	}

	/*
	while (*input != '\0')
	{
		if (!(*input >= '1'
			&& *input <='4'))
		{
			ft_throw_error(1, example);
			return (0);
		}

		input += 2;
	}
	*/

	return (input);
}
