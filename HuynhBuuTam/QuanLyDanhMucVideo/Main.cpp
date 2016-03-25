#include <iostream>
#include <string>
#include <vector>
#include <Windows.h>
#include "Func.h"
#include "Product.h"

using namespace std;

void AddProduct(vector<Product>& L)
{
        Product *vd;

		cout << "=============== NHAP DU LIEU ===============\n";

        do
        {
            cout << "Nhap thong tin video:\n";
			vd = new Product();
            vd->Set();
            L.push_back(*vd);
            cout << "Nhan phim bat ky de tiep tuc. Nhan Escape de ket thuc.\n\n";
			system("pause > nul");
        } while (!GetAsyncKeyState(VK_ESCAPE));

		delete(vd);
}

int main()
{
	vector<Product> DS;
	string keyword;
	Func F;
	
	AddProduct(DS);

	do
	{
		cout << "================= TIM KIEM =================\n";
		cout << ">>> Nhap the loai phim can tim: ";
		fflush(stdin);
		getline(cin, keyword);
		keyword = F.NormalizeString(keyword);
		cout << "Ket qua: \n";
		for (Product v : DS)
		{
			if (v.TheLoai == v.CorrectGenre(keyword))
			{
				v.Get();
			}
		}
		cout << "\n";

		cout << ">>> Nhap ten dien vien nam chinh can tim: ";
		fflush(stdin);
		getline(cin, keyword);
		keyword = F.NormalizeString(keyword);
		cout << "Ket qua: \n";
		for (Product v : DS)
		{
			if (v.TenDienVienNamChinh == keyword)
			{
				v.Get();
			}
		}
		cout << "\n";

		cout << ">>> Nhap ten dao dien can tim: ";
		fflush(stdin);
		getline(cin, keyword);
		keyword = F.NormalizeString(keyword);
		cout << "Ket qua: \n";
		for (Product v : DS)
		{
			if (v.TenDaoDien == keyword)
			{
				v.Get();
			}
		}
		cout << "\nNhan phim bat ky de tim tiep. Nhan Escape de ket thuc.\n\n";
		system("pause > nul");
	} while (!GetAsyncKeyState(VK_ESCAPE));

	//cout << ">>> KET THUC CHUONG TRINH <<< ";
	//system("pause > nul");
	return 0;
}