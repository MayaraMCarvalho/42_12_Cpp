/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 18:43:39 by macarval          #+#    #+#             */
/*   Updated: 2024/03/20 21:10:13 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
}

Contact::~Contact(void)
{
}

std::string	Contact::getFirstName(void)
{
	return (firstName);
}

std::string	Contact::getLastName(void)
{
	return (lastName);
}

std::string	Contact::getNickname(void)
{
	return (nickname);
}

std::string	Contact::getNumber(void)
{
	return (number);
}

std::string	Contact::getDarkSecret(void)
{
	return (darkSecret);
}

void Contact::setFirstName(std::string firstName)
{
	this->firstName = firstName;
}

void Contact::setLastName(std::string lastName)
{
	this->lastName = lastName;
}

void Contact::setNickname(std::string nickname)
{
	this->nickname = nickname;
}

void Contact::setNumber(std::string number)
{
	this->number = number;
}

void Contact::setDarkSecret(std::string darkSecret)
{
	this->darkSecret = darkSecret;
}
