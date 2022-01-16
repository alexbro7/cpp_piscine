/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebross <alebross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 18:42:28 by alebross          #+#    #+#             */
/*   Updated: 2022/01/15 21:16:35 by alebross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>

class Base{
	public :
	virtual ~Base(){}
};

class A : public Base{};
class B : public Base{};
class C : public Base{};

Base*	generate(void){
	Base* b;
	int	r = std::rand() % 3;
	if (r == 0){
		b = new A;
		std::cout << "A created" << std::endl;
	}
	else if (r == 1){
		b = new B;
		std::cout << "B created" << std::endl;
	}
	else{
		b = new C;
		std::cout << "C created" << std::endl;
	}
	return (b);
}

void	identify(Base* p){
	if (dynamic_cast<A *>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "C" << std::endl;
	else
		std::cout << "Unknown type" << std::endl;
}

void identify(Base& p)
{
	try {
		(void)dynamic_cast<A &>(p);
		std::cout << "A" << std::endl;
		return ;
	}
	catch (std::bad_cast &bc) {}
	try {
		(void)dynamic_cast<B &>(p);
		std::cout << "B" << std::endl;
		return ;
	}
	catch (std::bad_cast &bc) {}
	try {
		(void)dynamic_cast<C &>(p);
		std::cout << "C" << std::endl;
		return ;
	}
	catch (std::bad_cast &bc) {std::cout << "Unknow type" << std::endl;}
}


int		main(){
	srand(time(0));
	Base *base;
	base = generate();
	Base &ref = *base;
	identify(base);
	identify(ref);
	delete base;
	std::cout << std::endl;
	return (0);
}