// ConsoleApplication1.cpp: ���������� ����� ����� ��� ����������� ����������. 
// 

#include "stdafx.h" 
#include<iostream> 
#include<string.h> 
#include<Windows.h> 

// ���������� ������������ ���� std, � ������� 
// ����������� ����������� ������ �����/������ 
using namespace std;

struct Device { // �������� ������ "��������" 
				// ���������� �������� � ������ ������ 
private:
	char name[20]; // ��� 
	char adres[20]; // ����� 
	int god; // ������� ��� 
			 // ������ ��������� �������� � ������ ������ 
public:
	// �������������������������� 
	void set_name(char *new_name) {
		strcpy_s(name, new_name); // �������������� 
	}
	// ������������������ 
	void set_type(char *new_type) {
		strcpy_s(adres, new_type); // �������������� 
	}
	// ���������������������� 
	void set_ws(int new_ws) {
		god = new_ws; // �������� �������� 
	}
	// ����� ��� ��������� ������������ 
	char *get_name() {
		return name; // ���������� ��������� �� ������ 
	}
	// ����� ��� ��������� ���� 
	char *get_type() {
		return adres; // ���������� ��������� �� ������ 
	}
	// ����� ��� ��������� �������� 
	int get_ws() {
		return god; // ���������� �������� 
	}
	// ����� ������ ������� ������ �� ����� 
	void print() {
		// cout - ����� ������ �� ����� 
		// � - ��������� ����������� ������, �.�. � ����� 
		// endl - ��������� �� ����� ������ 
		cout << "��������: " << name << " �����: " << adres << " ��� ���������: " << god << endl;
	}
};
int main() {
	SetConsoleOutputCP(1251); // ��� ����������� ����������� ������� ��������� 
	SetConsoleCP(1251); // ��� ����������� ����� ������� ��������� 

	Device arr[5]; // ������ ������� 

	char name[20]; // ���������� ��� ����� ���������� 
	char adres[20];
	int god;

	for (int i = 0; i < 3; i++) { // ������������������� 
								  // ������ ������ � �������� 
		cout << "����� " << i+1 << endl;
		// ������ ������������ 
		cout << "��������: ";
		// cin - ����� ����� 
		// � - ��������� �� ����������� �����, �.�. �� ������ 
		cin >> name;
		// ��������� 
		cout << "�����: ";
		cin >> adres;
		// ������ �������� 
		cout << "���: ";
		cin >> god;

		// ������������� �������� ������ � ������� 
		arr[i].set_name(name);
		arr[i].set_type(adres);
		arr[i].set_ws(god);
	}
	for (int i = 0; i < 3; i++) { // �������������������� 
		cout << "��������: " << arr[i].get_name() << " �����: " << arr[i].get_type() << " ��� ���������: " << arr[i].get_ws() << endl;
	}
	system("pause");
	return 0;
}
