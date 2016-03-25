#include "Product.h"
#include "Func.h"
#include <iostream>

using namespace std;

void Product::Set()
{
	Func F;

	//cout << "Ten phim: ";
	//fflush(stdin);
	//getline(cin, TenPhim);
	//TenPhim = F.NormalizeString(TenPhim);

	cout << "The loai (1 - Hinh su, 2 - Tinh cam, 3 - Hai): ";
	fflush(stdin);
	getline(cin, TheLoai);
	TheLoai = CorrectGenre(F.NormalizeString(TheLoai));

	cout << "Ten dao dien: ";
	fflush(stdin);
	getline(cin, TenDaoDien);
	TenDaoDien = F.NormalizeString(TenDaoDien);

	cout << "Ten dien vien nam chinh: ";
	fflush(stdin);
	getline(cin, TenDienVienNamChinh);
	TenDienVienNamChinh = F.NormalizeString(TenDienVienNamChinh);

	//cout << "Ten dien vien nu chinh: ";
	//fflush(stdin);
	//getline(cin, TenDienVienNuChinh);
	//TenDienVienNuChinh = F.NormalizeString(TenDienVienNuChinh);

	//cout << "Nam san xuat: ";
	//cin >> NamSanXuat;

	//cout << "Hang san xuat: ";
	//fflush(stdin);
	//getline(cin, HangSanXuat);
	//HangSanXuat = F.NormalizeString(HangSanXuat);

	cout << endl;
}

void Product::Get()
{
	//cout << "Ten phim: " << TenPhim << "\n";
	cout << "The loai: " << TheLoai << endl;
	cout << "Ten dao dien: " << TenDaoDien << "\n";
	cout << "Ten dien vien nam chinh: " << TenDienVienNamChinh << "\n";
	//cout << "Ten dien vien nu chinh: " << TenDienVienNuChinh << "\n";
	//cout << "Nam san xuat: " << NamSanXuat << "\n";
	//cout << "Hang san xuat: " << HangSanXuat << "\n";
}

string Product::CorrectGenre(string str)
{
	if (str == "1") return "Hinh Su";
	if (str == "2") return "Tinh Cam";
	if (str == "3") return "Hai";
	if (str == "Hinh Su" || str == "Tinh Cam" || str == "Hai") return str;
	return str;
}

Product::Product(void)
{
}


Product::~Product(void)
{
}
