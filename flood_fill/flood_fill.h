/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snechaev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 14:20:43 by snechaev          #+#    #+#             */
/*   Updated: 2019/04/15 17:35:15 by snechaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLOOD_FILL_H
# define FLOOD_FILL_H

 typedef struct  s_point
  {
    int           x;
    int           y;
  }               t_point;
# define ELEM (tab, x, y) (tab)[y][(x)*2]
#endif
