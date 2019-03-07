/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zfaria <zfaria@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/01 13:08:30 by awindham          #+#    #+#             */
/*   Updated: 2019/03/06 17:07:06 by zfaria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
# define MINISHELL_H

typedef struct	s_builtin
{
	char		*cmd;
	int			(*cmdf)(char **);
}				t_builtin;

char			**g_path;
char			*g_home;

char			*read_line(void);
char			**tokenize(char *buf);
char			*eval(char **tokens);
void			cleanup(char *buf, char **tokens, char *err);
void			error(char *error);
void			prompt(void);
void			set_path(void);
void			set_home(void);
void			cd(char *path);
void			signal_handle(int sig);
void			proc_signal_handle(int sig);
void			expand_var(char **tokens);

int				cd_builtin(char **token);
int				exit_builtin(char **tokens);
int				builtin_setenv(char **tokens);

#endif
