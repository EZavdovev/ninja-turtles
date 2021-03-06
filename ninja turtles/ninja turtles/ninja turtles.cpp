// ninja turtles.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include"Client.h"
#include"Kitchen.h"
#include"Dish.h"
#include"RestaurantBase.h"
#include"Statistic.h"
#include"Waiter.h"
int main(){
	setlocale(LC_ALL, "Russian");
	RestaurantBase RB;
	RB.add_cooker("Splinter");
	RB.add_type("Italian");
	RB.add_dish("Fried nails", "Italian");
	RB.put_menu();
	Client Rafael("Rafael");
	Waiter Splinter;
	Kitchen Sewerage;
	Dish order;
	Statistic table;
	order.chefname_ = "Splinter";
	order.foodname_ = "Fried nails";
	order.typename_ = "Italian";
	Rafael.add_ready_for_order(order);
	order = Rafael.give_order(order); 
	if (RB.find_cooker(order) && RB.find_dish(order)) {
		order = Splinter.get_order_and_process(order);
		Sewerage.get_order(order);
		Sewerage.cooking(order);
		order = Sewerage.give_dish(order);
		Splinter.get_dish(order);
		order = Splinter.give_dish(order);
		Rafael.get_dish(order);
		double rate = 10;
		order = Rafael.add_rate(order, rate);
		table.add_dish_to_statistic(order);
		table.liar_check();
		table.show_rate_cooker_dish(order);
	}
	return 0;
}

