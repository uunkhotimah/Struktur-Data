#include<iostream>
#include <string>
#ifndef proses_H_
#define proses_H_
#include "proses.h"
using namespace std;

struct Node{
	string nama, nama1, kode, jenis, barang, jmlh, tanggal, bulan, tahun;
	int makanan;
	long int hrg;
	int enter;
    int  jumlah;
    double harga, harga1, hargamakanan, hargaminuman, harga2;
    double jumlah1, jumlah2, totalsemua;
    int bayar, bayar1, kembalian, kekurangan, total;
    int pilihanminuman;
    char data;
    int semuamakanan=0,semuaminuman=0;
    int pembayaran;
    double nomoratm;
    string JenisMakanan, JenisMinuman;
    char namaatm[25];
	char yt, pilihanmakanan;
    char ch;
	int i;


	Node* next;
	Node* prev;
};
	Node* head;
	Node* tail;
	Node* print;
	Node* del;
	Node* insert;
	Node* curr;
	

class Prosess{
	private:
		int i;
		struct nodeTree{ //Struct nodeTree untuk program pohon
			nodeTree* left;
			nodeTree* right;
			char data;
		};
		nodeTree* root;
	public:
		void pohon(){ //Parameter pohon digunakan untuk program pohon
			root = NULL;
		}
		
		bool isEmpty1() const{ //sebuah fungsi untuk nodeTree* root
			return root==NULL; 
		}
		
		void cetak_inorder();// fungsi yang akan digunakan untuk cetak inorder di program pohon
		void inorder(nodeTree*);// fungsi yang akan digunakan untuk inorder di program pohon
		void cetak_preorder();// fungsi yang akan digunakan untuk cetak preorder di program pohon
		void preorder(nodeTree*);// fungsi yang akan digunakan untuk preorder di program pohon
		void cetak_postorder();// fungsi yang akan digunakan untuk cetak postorder di program pohon
		void postorder(nodeTree*);// fungsi yang akan digunakan untuk postorder di program pohon
		void insert_data(char);// fungsi yang akan digunakan untuk insert data sebelum di inorder preorder dan postorder di program pohon
		
		void inisialisasi(){
		head = NULL;
		tail = NULL;
		}
		
		int isEmpt(){
			if(head == NULL){
				return 1; //class
			} else {
				return 0;
			}
		}
		
		void input(string nama, string kode, string jenis, string tanggal, string bulan, string tahun, string nama1, double jumlah1, string JenisMakanan, int pilihanmakanan, int semuamakanan, int makanan, double harga1, double harga2, string JenisMinuman, int semuaminuman, double jumlah2, int totalsemua, double bayar, int kembalian){
			insert = new Node;
			insert -> nama = nama;
			insert -> kode = kode;
			insert -> jenis = jenis;
			insert -> tanggal = tanggal;
			insert -> bulan = bulan;
			insert -> tahun = tahun;
			insert -> nama1 = nama1;
			insert -> jumlah1 = jumlah1;
			insert -> JenisMakanan = JenisMakanan;
			insert -> pilihanmakanan = pilihanmakanan;
			insert -> semuamakanan = semuamakanan;
			insert -> makanan = makanan;
			insert -> harga1 = harga1;
			insert -> harga2 = harga2;
			insert -> JenisMinuman = JenisMinuman;
			insert -> semuaminuman = semuaminuman;
			insert -> jumlah2 = jumlah2;
			insert -> totalsemua = totalsemua;
			insert -> bayar = bayar;
			insert -> kembalian = kembalian;
			insert -> next = NULL;
			insert -> prev = NULL;
			
			if(isEmpt()==1){
				head = insert;
				head->next = NULL;
				head->prev = NULL;
				tail = head;
			} else {
				tail->next = insert;
				insert->prev = tail;
				tail = insert;
			}
		}
		
		void cetak(string nama, string kode, string jenis, string tanggal, string bulan, string tahun, string nama1, int totalsemua, string JenisMakanan, int makanan, double harga1, double jumlah1, int semuamakanan, double harga2, double jumlah2, string JenisMinuman, int semuaminuman, double bayar, int kembalian) {
		    int i=1;
			print = head;
			if(head == NULL){
				system("cls");
				cout<<"\nDaftar riwayat transaksi tidak ditemukan"<<endl;
			}else {
			    while(print!=NULL) {
					cout<<"No.   :" <<i<< endl;
					cout<<">>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<"<<endl;
					cout<<"=========================================================="<<endl;
					cout<<"||\t\t\t Data Kasir   \t\t\t||"<<endl;
					cout<<"=========================================================="<<endl;
					cout<<"|| Nama	 	  : "<<print->nama <<" \t\t\t\t||"<<endl;
					cout<<"|| Nomor Kasir : "<<print->kode<<" \t\t\t\t\t||"<<endl;
					cout<<"|| Jenis Kelamin 	  : "<<print->jenis<<"    \t\t\t||"<<endl;
					cout<<"|| Tanggal - Bulan - Tahun  : "<< print->tanggal << " - " << print->bulan << " - " << print->tahun << " \t\t||" <<endl;
					cout<<"=========================================================="<<endl;
					cout<<"|| Nama Pembeli : " << print-> nama1 << endl;
					cout<<"|| Nama makanan yang dibeli : "<< print->JenisMakanan << endl;
					cout<<"|| Jumlah makanan yang dibeli : "<< print->jumlah1 << endl;
					cout<<"|| Harga satuan makanan : Rp. "<< print->harga1 << endl;
					cout<<"|| Total Harga makanan : Rp. " << print->semuamakanan<< endl;
					cout<<"=========================================================="<<endl;
					cout<<"|| Nama minuman yang dibeli : "<< print->JenisMinuman << endl;
					cout<<"|| Jumlah minuman yang dibeli : "<< print->jumlah2 << endl;
					cout<<"|| Harga satuan minuman : Rp. "<< print->harga2 << endl;
					cout<<"|| Total Harga minuman : Rp. " << print->semuaminuman<< endl;
					cout<<"=========================================================="<<endl;
					cout<<"|| Total pembayaran yang harus dilakukan : Rp. " << print->totalsemua<< endl;
					cout<<"|| Total uang bayar : Rp. "<< print->bayar << endl;
					cout<<"|| Kembalian : Rp. " << print->kembalian << endl;
					cout<<"=========================================================="<<endl;
					cout<<">>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<"<<endl;
					print = print->next;
					if(print!= NULL) {
					    cout<<endl;
					}
					i++;
				}
			}
		}
		
		void hapus(){
			string name;
			if(head!=NULL){
				if(head->next!=NULL){
					del = head;
					name = head->nama;
					cout<<"\n"<<name<<" Telah dihapus"<<endl;
					head = head->next;
					head->prev = NULL;
					delete del;
				} else {
					name = head->nama;
					cout<<"\n"<<name<<" Telah dihapus"<<endl;
					head = NULL;
				}
			} else {
				system("cls");
				cout<<"\nDaftar transaksi kosong penghapusan tidak dapat dilakukan"<<endl;
			}
		}
		       
};

void Prosess::insert_data(char d)
{
	nodeTree* t = new nodeTree;
	nodeTree* parent;
	t->data = d;
	t->left = NULL;
	t->right = NULL;
	parent = NULL;

	if(isEmpty1())
	{
		root = t;	
	}
	else
	{
		nodeTree* current;
		current = root;
		
		while(current)
		{
			parent = current;
			if(t->data > current->data) current = current->right;
			else current = current->left;
		}
		
		if(t->data < parent->data)
			parent->left = t;
		else
			parent->right = t;
	}
}

void Prosess::cetak_inorder()
{
	inorder(root);
}

void Prosess::inorder(nodeTree* p)
{
	if(p != NULL)
	{
		if(p->left) inorder(p->left);
			cout<<" "<<p->data<<" ";
		if(p->right) inorder(p->right);
	}
	else return;
}

void Prosess::cetak_preorder()
{
	preorder(root);
}

void Prosess::preorder(nodeTree* p)
{
	if(p != NULL)
	{
		cout<<" "<<p->data<<" ";
		if(p->left) preorder(p->left);
		if(p->right) preorder(p->right);
	}
	else return;
}

void Prosess::cetak_postorder()
{
	postorder(root);
}

void Prosess::postorder(nodeTree* p)
{
	if(p != NULL)
	{
		if(p->left) postorder(p->left);
		if(p->right) postorder(p->right);
		cout<<" "<<p->data<<" ";
	}
	else return;
}
#endif
