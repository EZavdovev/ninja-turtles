#pragma once
#include<string>
#include<map>
#include"Dish.h"
typedef std::string name_dish;

class Client{
private:
	std::string name_;
	std::map<name_dish, Dish> ready_for_order;
	std::map<name_dish, Dish> ready_for_rate;

public:
	Client(std::string name);

	void add_ready_for_order(Dish order);

	Dish give_order(Dish order);

	void get_dish(Dish order);

	Dish add_rate(Dish order, double rate);

	~Client();
};

