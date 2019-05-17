#pragma once
#include<map>
#include"Dish.h"

class Waiter{
private:
	std::map<std::string, Dish> client_order;
	std::map<std::string, Dish> client_dish;
public:
	Waiter();
	Dish get_order_and_give_kitchen(Dish order);
	void get_dish(Dish order);
	Dish give_client_dish(Dish order);
	~Waiter();
};

