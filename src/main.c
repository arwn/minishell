/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awindham <awindham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/01 09:08:11 by zfaria            #+#    #+#             */
/*   Updated: 2019/03/01 13:16:44 by awindham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <minishell.h>

void repl()
{
	char *buf;
	char **tokens;
	char *err;

	buf = read_line();
	tokens = tokenize(buf);
	err = eval(tokens);
	error(err);
}

int	main()
{
	repl();
	return (0);
}
