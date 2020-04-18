/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rabin_karp.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jko <jko@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/18 14:32:09 by jko               #+#    #+#             */
/*   Updated: 2020/04/18 20:50:40 by jko              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RABIN_KARP_H
# define RABIN_KARP_H

# define POWER 2

long long	get_hash_value(const char *str, unsigned int len);
char		*find_str(const char *haystack, const char *needle);

#endif
