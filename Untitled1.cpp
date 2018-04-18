// ConsoleApplication1.cpp: определяет точку входа для консольного приложения. 
// 

#include "stdafx.h" 
#include<iostream> 
#include<string.h> 
#include<Windows.h> 

// подключаем пространство имен std, в котором 
// реализованы стандартные потоки ввода/вывода 
using namespace std;

struct Device { // Описание класса "ЖИВОТНЫЕ" 
				// внутренние свойства и методы класса 
private:
	char name[20]; // имя 
	char adres[20]; // класс 
	int god; // средний вес 
			 // внешне доступные свойства и методы класса 
public:
	// методустановкинаименования 
	void set_name(char *new_name) {
		strcpy_s(name, new_name); // копируемстроку 
	}
	// методустановкитипа 
	void set_type(char *new_type) {
		strcpy_s(adres, new_type); // копируемстроку 
	}
	// методустановкимощности 
	void set_ws(int new_ws) {
		god = new_ws; // копируем значение 
	}
	// метод для получения наименования 
	char *get_name() {
		return name; // возвращаем указатель на строку 
	}
	// метод для получения типа 
	char *get_type() {
		return adres; // возвращаем указатель на строку 
	}
	// метод для получения мощности 
	int get_ws() {
		return god; // возвращаем значение 
	}
	// метод вывода свойств класса на экран 
	void print() {
		// cout - поток вывода на экран 
		// « - указывает направление вывода, т.е. в поток 
		// endl - указывает на конец строки 
		cout << "Название: " << name << " Адрес: " << adres << " Год основания: " << god << endl;
	}
};
int main() {
	SetConsoleOutputCP(1251); // для корректного отображения русской кодировки 
	SetConsoleCP(1251); // для корректного ввода русской кодировки 

	Device arr[5]; // массив классов 

	char name[20]; // переменные для ввода информации 
	char adres[20];
	int god;

	for (int i = 0; i < 3; i++) { // циклвводаинформации 
								  // вводим данные о приборах 
		cout << "Номер " << i+1 << endl;
		// вводим наименование 
		cout << "Название: ";
		// cin - поток ввода 
		// » - указывает на направление ввода, т.е. из потока 
		cin >> name;
		// вводимтип 
		cout << "Адрес: ";
		cin >> adres;
		// вводим мощность 
		cout << "Год: ";
		cin >> god;

		// устанавливаем свойства класса в массиве 
		arr[i].set_name(name);
		arr[i].set_type(adres);
		arr[i].set_ws(god);
	}
	for (int i = 0; i < 3; i++) { // циклвыводаинформации 
		cout << "Название: " << arr[i].get_name() << " Адрес: " << arr[i].get_type() << " год основания: " << arr[i].get_ws() << endl;
	}
	system("pause");
	return 0;
}
