/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 13:09:33 by jalombar          #+#    #+#             */
/*   Updated: 2025/02/04 14:01:12 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

# include <iostream>

class Brain
{
    private:
        std::string ideas[100];
        
    public:
        Brain();
        ~Brain();
        Brain(const Brain &other);
	    Brain &operator=(const Brain &other);

        void addIdea(std::string new_idea);
};

#endif