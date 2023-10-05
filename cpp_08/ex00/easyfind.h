/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 11:16:17 by eabdelha          #+#    #+#             */
/*   Updated: 2022/08/27 16:19:43 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_H
#define EASYFIND_H

# include <exception>
# include <algorithm>
# include <iostream>
# include <string>

class notFound : public std::exception
{
    public:
        const char *what() const throw() {
            return ("intger not found!.");
    }
};

template<typename T> typename T::iterator easyfind(T &cont, int tof)
{
    typename T::iterator ret = std::find(cont.begin(), cont.end(), tof);
    if (ret != cont.end())
        return(ret);
    throw notFound();
}

#endif