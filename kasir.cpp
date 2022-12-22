#include <iostream>
#include <string>
#include "proses.h"
using namespace std;

int main(){
	Prosess x;
	Node z;
	char ulang;

	Prosess* a = new Prosess();
	a->inisialisasi();
	a->hapus();
	a->cetak_inorder();
	a->cetak_postorder();
	a->cetak_preorder();
	a->isEmpty1();
	
	Prosess BinaryTree;

			
			{
				char pilih, ulang, pilih2;
				int pilihanmakanan, i, pilihanminuman, pembayaran;
				string nama, kode, jenis, tanggal, bulan, nama1, tahun, JenisMakanan, JenisMinuman, namaatm;
				int semuamakanan=0, semuaminuman=0, total, totalsemua;
				double jumlah1, jumlah2, bayar, kembalian;
				double hargamakanan, hargaminuman, harga2, harga1;
				long int harga;
				double nomoratm;
				char yt;
				int pilih3,data;
				double tmp,tmp1;
				Prosess BinaryTree;
				int makanan, minuman, jumlah;
				semuamakanan=semuamakanan+total;
				total=jumlah1*harga1;
				
				menu:		
					system("cls");
					cout<<"+-----------------------------------------+"<<endl;
					cout<<"|-- 	  KASIR RESTORAN IKAN CHAGIYA	--|"<<endl;
					cout<<"+-----------------------------------------+"<<endl;
					cout<<"|--       DAFTAR MENU		        --|" << endl;
					cout<<"+-----------------------------------------+"<<endl;
					cout<<"|          1. Entry Data                  |"<<endl;
					cout<<"|          2. Hapus Data                  |"<<endl;
					cout<<"|          3. Cetak Data                  |"<<endl;
					cout<<"|          4. Pohon Biner                 |"<<endl;
					cout<<"|          5. Exit Program                |"<<endl;
					cout<<"+-----------------------------------------+"<<endl;
					cout<<"Masukan Pilihan anda : ";
					cin>>pilih;
					cin.ignore();
							
					switch(pilih){
						case '1':
							system("cls");
							cout<<"Masukkan Nama\t\t: ";
							getline(cin, nama);
							cout<<"Kode Kasir\t\t: ";
							getline(cin, kode);
							cout<<"Masukkan Jenis Kelamin\t: ";
							getline(cin, jenis);
							cout<<"Masukkan Tanggal\t: ";
							getline(cin, tanggal);
							cout<<"Masukkan Bulan\t\t: ";
							getline(cin, bulan);
							cout<<"Masukkan Tahun\t\t: ";
							getline(cin, tahun);
							
								system("cls");
							cout<<"\t\t\t\t\t\t\t\t\t\t\t=============================================="<<endl;
							cout<<"\t\t\t\t\t\t\t\t\t\t\t|   SELAMAT DATANG RESTORAN IKAN CHAGIYA     |"<<endl;
							cout<<"\t\t\t\t\t\t\t\t\t\t\t|      BERBAGAI MACAM IKAN ADA DI SINI       |"<<endl;
							cout<<"\t\t\t\t\t\t\t\t\t\t\t==============================================\n\n"<<endl;
					        cout << endl;
			                cout<<"\t\t\t\t\t\t\t    ==========================================\t\t==========================================\t\t"<<endl;
			                cout<<"\t\t\t\t\t\t\t    |                Menu Makanan            |\t\t|                Menu Minuman            |\t\t"<<endl;
			                cout<<"\t\t\t\t\t\t\t    ==========================================\t\t==========================================\t\t"<<endl;
			                cout<<"\t\t\t\t\t\t\t    |1. Ikan Kakap Bakar        Rp. 50.000,- |\t\t|1. Lee Mineral              Rp. 4.000,- |\t\t"<<endl;
			                cout<<"\t\t\t\t\t\t\t    |2. Ikan Tuna Bakar         Rp. 30.000,- |\t\t|2. Es Jeruk		     Rp. 5.000,- |\t\t"<<endl;
			                cout<<"\t\t\t\t\t\t\t    |3. Ikan Gurame             Rp. 60.000,- |\t\t|3. Es Teh                   Rp. 4.000,- |\t\t"<<endl;
			                cout<<"\t\t\t\t\t\t\t    |4. Ikan Lele               Rp. 70.000,- |\t\t|4. Jeruk Hangat             Rp. 2.000,- |\t\t"<<endl;
			                cout<<"\t\t\t\t\t\t\t    |5. Ikan Mujaer		Rp. 80.000,- |\t\t|5. Teh Hangat               Rp. 3.000,- |\t\t"<<endl;
			                cout<<"\t\t\t\t\t\t\t    |6. Ikan cuma temen:v	Rp. 75.000,- |\t\t|6. Coca Cola                Rp. 6.000,- |\t\t"<<endl;
			                cout<<"\t\t\t\t\t\t\t    |7. Cha Kangkung            Rp. 10.000,- |\t\t|7. Sprits                   Rp. 9.000,- |\t\t"<<endl;
			                cout<<"\t\t\t\t\t\t\t    |8. Cha Jamur               Rp. 10.000,- |\t\t|8. Fanta                    Rp. 9.000,- |\t\t"<<endl;
			                cout<<"\t\t\t\t\t\t\t    |9. Cha Toge                Rp. 10.000,- |\t\t|9. Milo                     Rp. 8.000,- |\t\t"<<endl;
			                cout<<"\t\t\t\t\t\t\t    |10.Nasi		        Rp. 5.000,-  |\t\t|10. Susu                    Rp. 8.000,- |\t\t"<<endl;
			                cout<<"\t\t\t\t\t\t\t    ==========================================\t\t==========================================\t\t\n\n"<<endl;
			                
			                //Program Data
							program:
								cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\t<SILAKAN MASUKAN DATA ANDA>"<<endl;
								cout<<"\t\t\t\t\t\t\t\t\t\t\t\tNama Pembeli     : ";
								getline(cin, nama1);
							
							//pemesanan
							pemesanan:
					            cout<<"\n\n\n\n\n\t\t\t\t\t\t\t    MAU PESAN MAKANAN (Y/T) ? "; cin>>yt;
					            cout<<"\n\t\t\t\t\t\t\t    ============================================="<<endl;
					            if(yt=='Y'||yt=='y') {goto YA;}     if(yt=='T'||yt=='t') {goto TIDAK;}
					
					            YA:
					              cout<<"\n\n\t\t\t\t\t\t\t    Banyak jenis makanan yang di pesan  : "; cin>>makanan;
					
					            pemesanan_makanan:
					            for(i=1; i<=makanan; i++)
					            {
					                cout<<"\n\n\t\t\t\t\t\t\t    Jenis makanan ke-"<<i<<"   : "; cin >> pilihanmakanan;
					                switch(pilihanmakanan)
					                {
					                    case 1:
					                        {
					                            harga1=50000;
					                            JenisMakanan    = "Ikan Kakap Bakar";
					                            cout<<"\n\t\t\t\t\t\t\t    Makanan                      : Ikan Kakap Bakar"<<endl; break;
					                        }
					
					                    case 2:
					                        {
					                            harga1=30000;
					                            JenisMakanan    = "Ikan Tuna Bakar";
					                            cout<<"\n\t\t\t\t\t\t\t    Makanan                      : Ikan Tuna Bakar"<<endl; break;
					                        }
					
					                    case 3:
					                        {
					                            harga1=60000;
					                            JenisMakanan    = "Ikan Gurame";
					                            cout<<"\n\t\t\t\t\t\t\t    Makanan                      : Sirip Hiu Bakar"<<endl; break;
					                        }
					
					                    case 4:
					                        {
					                            harga1=70000;
					                            JenisMakanan    = "Ikan Lele";
					                            cout<<"\n\t\t\t\t\t\t\t    Makanan                      : Kerapu Goreng"<<endl; break;
					                        }
					
					                    case 5:
					                        {
					                            harga1=80000;
					                            JenisMakanan    = "Ikan Mujaer";
					                            cout<<"\n\t\t\t\t\t\t\t    Makanan                      : Ikan Sirip Kuning"<<endl; break;
					                        }
					
					                    case 6:
					                        {
					                            harga1=75000;
					                            JenisMakanan    = "Ikan cuma temen";
					                            cout<<"\n\t\t\t\t\t\t\t    Makanan                      : Udang Bakar"<<endl; break;
					                        }
					
					                    case 7:
					                        {
					                            harga1=10000;
					                            JenisMakanan    = "Cha Kangkung";
					                            cout<<"\n\t\t\t\t\t\t\t    Makanan                      : Cha Kangkung"<<endl; break;
					                        }
					
					                    case 8:
					                        {
					                            harga1=10000;
					                            JenisMakanan    = "Cha Jamur";
					                            cout<<"\n\t\t\t\t\t\t\t    Makanan                      : Cha Jamur"<<endl; break;
					                        }
					
					                    case 9:
					                        {
					                            harga1=10000;
					                            JenisMakanan    = "Cha Toge";
					                            cout<<"\n\t\t\t\t\t\t\t    Makanan                      : Cha Toge"<<endl; break;
					                        }
					
					                    case 10:
					                        {
					                            harga1=5000;
					                            JenisMakanan    = "Nasi";
					                            cout<<"\n\t\t\t\t\t\t\t    Makanan                      : Nasi"<<endl; break;
					                        }
					
					                    default:
					                        {
					                            cout<<"\t\t\t\t\t\t\t    Maaf jenis makanan tersebut tidak ada pada daftar menu"; break;
					                        }
					                }
					                    cout<<"\n\t\t\t\t\t\t\t    Jumlah pemesanan             : "; cin>>jumlah1;
					                    hargamakanan=jumlah1*harga1;
					                    cout<<"\n\t\t\t\t\t\t\t    Harga                        : "<<hargamakanan<<endl;
					                    cout<<"\n\t\t\t\t\t\t\t    ---------------------------------------------"<<endl;
					
					                total=jumlah1*harga1;
					                semuamakanan=semuamakanan+total;
					            }
					
					                cout<<"\n\n\t\t\t\t\t\t\t    TOTAL HARGA MAKANAN        = "<<semuamakanan<<endl;
					                cout<<"\t\t\t\t\t\t\t    *********************************************"<<endl;
					        
					
					
					
					        TIDAK:
					         //Program Minuman
					            cout<<"\n\n\t\t\t\t\t\t\t    MAU PESAN MINUMAN (Y/T) ? "; cin>>yt;
					            cout<<"\n\t\t\t\t\t\t\t    ============================================="<<endl;
					            if(yt=='Y'||yt=='y') {goto YA1;}    if(yt=='T'||yt=='t') {goto BAYAR;}
					
					            YA1:
					            cout<<"\n\n\t\t\t\t\t\t\t    Banyak jenis minuman yang di pesan  : "; cin>>minuman;
					
					            for(int i=1; i<=minuman; i++)
					            {
					                cout<<"\n\n\t\t\t\t\t\t\t    Jenis minuman ke-"<<i<<"   : "; cin>>pilihanminuman;
					
					                switch(pilihanminuman)
					                {
					                    case 1:
					                        {
					                            harga2=4000;
					                            JenisMinuman    = "Lee Mineral";
					                            cout<<"\n\t\t\t\t\t\t\t    Minuman                      : Lee Mineral"<<endl; break;
					                        }
					
					                    case 2:
					                        {
					                            harga2=5000;
					                            JenisMinuman    = "Nescafe";
					                            cout<<"\n\t\t\t\t\t\t\t    Minuman                      : Nescafe"<<endl; break;
					                        }
					
					                    case 3:
					                        {
					                            harga2=3000;
					                            JenisMinuman    = "Teh Kotak";
					                            cout<<"\n\t\t\t\t\t\t\t    Minuman                      : Teh Kotak"<<endl; break;
					                        }
					
					                    case 4:
					                        {
					                            harga2=3000;
					                            JenisMinuman    = "Teh Botol";
					                            cout<<"\n\t\t\t\t\t\t\t    Minuman                      : Teh Botol"<<endl; break;
					                        }
					
					                    case 5:
					                        {
					                            harga2=4000;
					                            JenisMinuman    = "Big Cola";
					                            cout<<"\n\t\t\t\t\t\t\t    Minuman                      : Big Cola"<<endl; break;
					                        }
					
					                    case 6:
					                        {
					                            harga2=6000;
					                            JenisMinuman    = "Coca Cola";
					                            cout<<"\n\t\t\t\t\t\t\t    Minuman                      : Coca Cola"<<endl; break;
					                        }
					
					                    case 7:
					                        {
					                            harga2=7000;
					                            JenisMinuman    = "Sprits";
					                            cout<<"\n\t\t\t\t\t\t\t    Minuman                      : Sprits"<<endl; break;
					                        }
					
					                    case 8:
					                        {
					                            harga2=9000;
					                            JenisMinuman    = "Kawa Kawa Hijau";
					                            cout<<"\n\t\t\t\t\t\t\t    Minuman                      : Kawa Kawa Hijau"<<endl; break;
					                        }
					
					                    case 9:
					                        {
					                            harga2=10000;
					                            JenisMinuman    = "Milo";
					                            cout<<"\n\t\t\t\t\t\t\t    Minuman                      : Milo"<<endl; break;
					                        }
					
					                    case 10:
					                        {
					                            harga2=15000;
					                            JenisMinuman    = "Nutriboost";
					                            cout<<"\n\t\t\t\t\t\t\t    Minuman                      : Nutriboost"<<endl; break;
					                        }
					
					                    default:
					                        {
					                            cout<<"\t\t\t\t\t\t\t    Maaf jenis minuman tersebut tidak ada pada daftar menu"; break;
					                        }
					                }
					
					                    cout<<"\n\t\t\t\t\t\t\t    Jumlah pemesanan             : "; cin>>jumlah2;
					                    hargaminuman=jumlah2*harga2;
					                    cout<<"\n\t\t\t\t\t\t\t    Harga                        : "<<hargaminuman<<endl;
					                    cout<<"\n\t\t\t\t\t\t\t    ---------------------------------------------"<<endl;
					
					                total=jumlah2*harga2;
					                semuaminuman=semuaminuman+total;
					            }
					
					            cout<<"\n\n\t\t\t\t\t\t\t    TOTAL HARGA MINUMAN            = "<<semuaminuman<<endl;
					            cout<<"\t\t\t\t\t\t\t    *********************************************"<<endl;
					        
					        BAYAR:
								bayar:
									int i;
									totalsemua=semuamakanan+semuaminuman;
				                	cout<<"\n\n\t\t\t\t\t\t\t    -> TOTAL PEMBAYARAN        : "<<totalsemua<<endl;
				                	cout<<"\n\n\t\t\t\t\t\t\t    MAU MELAKUKAN PEMBAYARAN (Y/T) ? "; cin>>yt;
				                	cout<<"\n\t\t\t\t\t\t\t    ============================================="<<endl;
				                	if(yt=='Y'||yt=='y') {goto TIDAK1;}    if(yt=='T'||yt=='t') {goto pemesanan;}
				            
				            TIDAK1:
				            	total:
					                system("cls");
					
					                cout<<"\t\t\t\t\t\t\t\t\t\t\t====================================="<<endl;
					                cout<<"\t\t\t\t\t\t\t\t\t\t\t|     SILAKAN LAKUKAN PEMBAYARAN    |"<<endl;
					                cout<<"\t\t\t\t\t\t\t\t\t\t\t=====================================\n\n"<<endl;
					
					                cout<<"\n\n\t\t\t\t\t\t\t    -> TOTAL PEMBAYARAN : "<<totalsemua<<endl;
					
					                cout<<"\n\n\t\t\t\t\t\t\t    Jenis Pembayaran : "<<endl;
					                cout<<"\t\t\t\t\t\t\t    1. Cash"<<endl;
					                cout<<"\t\t\t\t\t\t\t    2. BCA"<<endl;
					                cout<<"\t\t\t\t\t\t\t    3. Mandiri"<<endl;
					                cout<<"\t\t\t\t\t\t\t    4. BRI"<<endl;
					                cout<<"\t\t\t\t\t\t\t    5. BNI"<<endl;
					                cout<<"\t\t\t\t\t\t\t    6. BTN"<<endl;
					
					                cout<<"\n\t\t\t\t\t\t\t    Pilih jenis pembayaran   : "; cin>>pembayaran;
					
					                if (pembayaran==1)
					                {
					                    cout<<"\n\n\t\t\t\t\t\t\t    Pembayaran menggunakan uang cash"<<endl;
					                    cout<<"\t\t\t\t\t\t\t    Dibayar dengan jumlah uang   : "; cin>>bayar;
					                    if (bayar==totalsemua)
					                    {
					                        cout<<"\t\t\t\t\t\t\t    Uangnya Pas"<<endl;
					                    }
					
					                    else if(bayar>totalsemua)
					                    {
					                        kembalian=bayar-totalsemua;
					                        cout<<"\t\t\t\t\t\t\t    Uang kembaliannya            : "<<kembalian<<endl;
					                    }
					                }
					
					                else if (pembayaran==2)
					                {
					                    cout<<"\n\n\t\t\t\t\t\t\t    Pembayaran menggunakan ATM BCA"<<endl;
					                    cout<<"\t\t\t\t\t\t\t    Nomor ATM        : "; cin>>nomoratm;
					                    cout<<"\t\t\t\t\t\t\t    Nama             : "; cin>>namaatm;
					                    cout<<"\t\t\t\t\t\t\t    Total Pembayaran : "; cin>>bayar;
					                }
					
					                else if (pembayaran==3)
					                {
					                    cout<<"\n\n\t\t\t\t\t\t\t    Pembayaran menggunakan ATM Mandiri"<<endl;
					                    cout<<"\t\t\t\t\t\t\t    Nomor ATM        : "; cin>>nomoratm;
					                    cout<<"\t\t\t\t\t\t\t    Nama             : "; cin>>namaatm;
					                    cout<<"\t\t\t\t\t\t\t    Total Pembayaran : "; cin>>bayar;
					                }
					
					                else if (pembayaran==4)
					                {
					                    cout<<"\n\n\t\t\t\t\t\t\t    Pembayaran menggunakan ATM BRI"<<endl;
					                    cout<<"\t\t\t\t\t\t\t    Nomor ATM        : "; cin>>nomoratm;
					                    cout<<"\t\t\t\t\t\t\t    Nama             : "; cin>>namaatm;
					                    cout<<"\t\t\t\t\t\t\t    Total Pembayaran : "; cin>>bayar;
					                }
					
					                else if (pembayaran==5)
					                {
					                    cout<<"\n\n\t\t\t\t\t\t\t    Pembayaran menggunakan ATM BNI"<<endl;
					                    cout<<"\t\t\t\t\t\t\t    Nomor ATM        : "; cin>>nomoratm;
					                    cout<<"\t\t\t\t\t\t\t    Nama             : "; cin>>namaatm;
					                    cout<<"\t\t\t\t\t\t\t    Total Pembayaran : "; cin>>bayar;
					                }
					
					                else if (pembayaran==6)
					                {
					                    cout<<"\n\n\t\t\t\t\t\t\t    Pembayaran menggunakan ATM BTN"<<endl;
					                    cout<<"\t\t\t\t\t\t\t    Nomor ATM        : "; cin>>nomoratm;
					                    cout<<"\t\t\t\t\t\t\t    Nama             : "; cin>>namaatm;
					                    cout<<"\t\t\t\t\t\t\t    Total Pembayaran : "; cin>>bayar;
					                }
							
							a->input(nama, kode, jenis, tanggal, bulan, tahun, nama1, jumlah1, JenisMakanan, pilihanmakanan, semuamakanan, makanan, harga1, harga2, JenisMinuman, semuaminuman, jumlah2, totalsemua, bayar, kembalian);
							cout<<"\n Data pembeli A/N : "<<nama1<<"  Telah Ditambahkan kedalam cetak"<<endl;
							break;
						case '2':
							a->hapus();
							break;
						case '3':
							system("cls");
							a->cetak(nama, kode, jenis, tanggal, bulan, tahun, nama1, totalsemua, JenisMakanan, makanan, harga1, jumlah1, semuamakanan, harga2, jumlah2, JenisMinuman, semuaminuman, bayar, kembalian);
							break;
						case '4':
							int pilih3,data;
							char tmp,tmp1;
							
							Prosess BinaryTree;
							while(1){
								system("cls");
								cout<<"+----------------------------------------+"<<endl;
								cout<<"|              POHON BINER               |"<<endl;
								cout<<"+----------------------------------------+"<<endl;
								cout<<"|          1. Insert Data                |"<<endl;
								cout<<"|          2. InOrder                    |"<<endl;
								cout<<"|          3. PreOrder                   |"<<endl;
								cout<<"|          4. PostOrder                  |"<<endl;
								cout<<"|          5. Back To Menu Awal          |"<<endl;
								cout<<"+----------------------------------------+"<<endl;
								cout<<"Masukan Pilihan anda : ";
								cin>>pilih3;
								switch(pilih3)
								{
									case 1 :
										cout<<"Masukkan Banyaknya Ikan : ";
										cin>>data;
										for (int i=0; i<data; i++)
										{
											cout<<"Data ke "<<i+1<<": ";
											cin>>tmp;
											BinaryTree.insert_data(tmp);
										}
										system("PAUSE");
										cout<<endl;
										break;
									case 2 : 
										cout<<endl;
										cout<<"InOrder : ";
										BinaryTree.cetak_inorder();
										cout<<endl;
										system("PAUSE");
										cout<<endl;
										break;
									case 3 :
										cout<<endl;
										cout<<"PreOrder : ";
										BinaryTree.cetak_preorder();
										cout<<endl;
										system("PAUSE");
										break;
									case 4 :
										cout<<endl;
										cout<<"PostOrder : ";
										BinaryTree.cetak_postorder();
										cout<<endl;
										system("PAUSE");
										break;
									case 5 :
										goto menu;
								}
								break;
							}
						case '5':
							system("cls");
							cout<<"---Terima kasih atas pesanan Anda---"<<endl;
							cout<<"---Mohon ditunggu---"<<endl;
							exit(0);
						default:
							cout<<"==========================="<<endl;
							cout<<"PILIHAN ERROR"<<endl;
							cout<<"==========================="<<endl;
							goto menu;
					}
					cout<<"Kembali Ke Menu? (y/n)";
					cin>>ulang;
					if(ulang=='Y'||ulang=='y') {goto menu;} 
				
				}
}
