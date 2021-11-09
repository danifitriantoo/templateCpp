#include <iostream>

using namespace std;

// model data
struct hargaRumah {
	int tipe_rumah,luas,lebih_tanah,harga_jual,diskon,harga_bayar;
	int hargaCamelia = 500000000, hargaMelati = 900000000;
};

// method prototype
void funcOutput(hargaRumah);

// main function
int main() 
{
	// creating model
	struct hargaRumah model;
		
	// user input
	cout << " Tipe Rumah(1 = Camelia, 2 = Melati) : "; cin >> model.tipe_rumah; 
	
	
	// business logic with if else
	if(model.tipe_rumah == 1) 
	{
		// user input
		cout << " Luas Bangunan(36m2,45m2,60m2 dan > 90m2) : ";
		cin >> model.luas;

		if(model.luas > 90)
		{
			model.lebih_tanah = model.luas - 90;	
			model.harga_jual = model.hargaCamelia + (model.lebih_tanah * 1000000);

			// print output
			funcOutput(model);
		} 
		else if(model.luas < 90)
		{
			if(model.luas == 36)	
			{
				model.diskon = model.hargaCamelia * 0.02;
				model.harga_jual = model.hargaCamelia - model.diskon;

				// print output
				funcOutput(model);
			} 
			else if(model.luas == 45)
			{
				model.diskon = model.hargaCamelia * 0.05;
				model.harga_jual = model.hargaCamelia - model.diskon;

				// print output
				funcOutput(model);
			}
			else if(model.luas == 60)
			{
				model.diskon = model.hargaCamelia * 0.07;
				model.harga_jual = model.hargaCamelia - model.diskon;

				// print output
				funcOutput(model);
			}
			else 
			{
				cout << " Model Rumah Tidak Tersedia!";
			}
		} 
		else if(model.luas == 90)
		{
			model.harga_jual = 500000000;
			// print output
			funcOutput(model);
		}
		else
		{
			cout << " Luas Rumah Tidak Tersedia!";
		}
	} 
	else if(model.tipe_rumah == 2) 
	{

		// user input
		cout << " Luas Bangunan(60m2,80m2,100m2 dan > 120m2) : ";
		cin >> model.luas;

		if(model.luas > 120)
		{
			model.lebih_tanah = model.luas - 120;	
			model.harga_jual = 500000000 + (model.lebih_tanah * 1500000);	

			// print output
			funcOutput(model);
		}
		else if(model.luas < 120)
		{
			if(model.luas == 60)	
			{
				model.diskon = model.hargaMelati * 0.05;
				model.harga_jual = model.hargaMelati - model.diskon;

				// print output
				funcOutput(model);
			} 
			else if(model.luas == 80)
			{
				model.diskon = model.hargaMelati * 0.07;
				model.harga_jual = model.hargaMelati - model.diskon;

				// print output
				funcOutput(model);
			}
			else if(model.luas == 100)
			{
				model.diskon = model.hargaMelati * 0.09;
				model.harga_jual = model.hargaMelati - model.diskon;

				// print output
				funcOutput(model);
			} 
			else 
			{
				cout << " Luas Rumah Tidak Tersedia!";
			}
		} 
		else if(model.luas == 120) 
		{
			model.harga_jual = 900000000;

			// print output
			funcOutput(model);
		} 
		else
		{
			cout << " Masukan Luas Rumah >= 60!";
		}
	} 
	else 
	{
		cout << " Data Rumah Tidak ada!";
	}
	
	// return
	return 0;
}

// method function Output
void funcOutput(struct hargaRumah model) {
	
	// system count and output
	cout << "\n\n";
	cout << " Harga Jual\t: Rp." <<model.harga_jual << endl;
	cout << " Diskon\t\t: Rp." << model.diskon << endl;
	cout << " Harga Bayar\t: Rp."; cin >> model.harga_bayar;
	cout << " Kembali\t: Rp." << model.harga_bayar - model.harga_jual; 
}
