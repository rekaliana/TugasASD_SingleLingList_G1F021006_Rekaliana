#include<iostream>

using namespace std;

struct laptop{
	string merek, jenis;
	int harga;
	
	laptop *next;
	
};

laptop *head, *tail, *cur, *newNode;


void createSingleLinkedList(string merek, string jenis, int harga){
	head = new laptop();
	head->merek = merek;
	head->jenis = jenis;
	head->harga = harga;
	head->next = NULL;
	tail = head;
	
}

void addFirst(string merek, string jenis, int harga){
	newNode = new laptop();
	newNode->merek = merek;
	newNode->jenis = jenis;
	newNode->harga = harga;
	newNode->next = head;
	head = newNode;
}

void addMiddle(string merek, string jenis, int harga, int posisi){
	newNode = new laptop();
	newNode->merek = merek;
	newNode->jenis = jenis;
	newNode->harga = harga;
	
	cur = head;
	int NO = 1;
	while(NO < posisi - 1 ){
		cur = cur->next;
		NO++;
	}
	
	newNode->next = cur->next;
	cur->next = newNode;
}

void printSingleLinkedList(){
	cur = head;
	while(cur != NULL){
		cout << "Merek Laptop : "<< cur->merek <<endl;
		cout << "Jenis Laptop : "<< cur->jenis <<endl;
		cout << "Harga Laptop : "<< cur->harga <<endl;
		
		cur = cur->next;
	}
}

int main(){
	
	createSingleLinkedList("Asus", "ChromeBook", 8000000);
	
	printSingleLinkedList();
	
	cout <<"\n\n"<<endl;
	
	addFirst("Xiaomi", "RedmiBook 15", 9000000);
	printSingleLinkedList();
	
	cout <<"\n\n"<<endl;
	
	addMiddle("HP", "Pavilion Gaming Laptop 15-ec1071A", 12000000, 2);
	printSingleLinkedList();
	
	cout <<"\n\n"<<endl;
}
