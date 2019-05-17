#pragma once
#include<string>
#include<map>
#include"Dish.h"
class Client{
private:
	std::string name_;
	std::map<std::string, Dish> ready_for_order;
	std::map<std::string, Dish> ready_for_rate;

public:
	Client(std::string name);

	void add_ready_for_order(Dish order);

	Dish give_order_to_waiter(Dish order);

	void get_dish(Dish order);

	Dish add_rate(Dish order, double rate);

	~Client();
};

