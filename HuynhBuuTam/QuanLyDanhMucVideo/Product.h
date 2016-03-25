#include <string>

#pragma once

using namespace std;

class Product
{
private:
    string TenPhim;
    string TenDienVienNuChinh;
    int NamSanXuat;
    string HangSanXuat;
public:
	string TheLoai;
	string TenDaoDien;
	string TenDienVienNamChinh;
	void Set();
	void Get();
	string CorrectGenre(string str);

	Product(void);
	~Product(void);
};

