#pragma once
#include<map>
#include"Dish.h"
typedef std::string dish_name;
class Waiter{
private:
	std::map<dish_name, Dish> orders;
	std::map<dish_name, Dish> dishes;
public:
	Waiter();
	Dish get_order_and_process(Dish order);
	void get_dish(Dish order);
	Dish give_dish(Dish order);
	~Waiter();
};

