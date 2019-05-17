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
	order = Rafael.give_order_to_waiter(order);
	if (RB.find_cooker(order) && RB.find_dish(order)) {
		order = Splinter.get_order_and_give_kitchen(order);
		Sewerage.get_order_from_waiter(order);
		Sewerage.cooking(order);
		order = Sewerage.give_dish_for_waiter(order);
		Splinter.get_dish(order);
		order = Splinter.give_client_dish(order);
		Rafael.get_dish(order);
		double rate = 10;
		order = Rafael.add_rate(order, rate);
		table.add_dish_to_statistic(order);
		table.liar_check();
		table.show_rate_cooker_dish(order);
	}
	return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
