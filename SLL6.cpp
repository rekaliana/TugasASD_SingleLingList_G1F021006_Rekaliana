#include<iostream>

using namespace std;

struct laptop{
	string merek, jenis;
	int harga;
	
	laptop *next;
	
};

laptop *head, *tail, *cur, *newNode,*del, *after;


void createSingleLinkedList(string merek, string jenis, int harga){
	head = new laptop();
	head->merek = merek;
	head->jenis = jenis;
	head->harga = harga;
	head->next = NULL;
	tail = head;
	
}

int countSingleLinkedList(){
	cur = head;
	int NO = 0;
	while(cur != NULL){
		NO++;
		cur = cur->next;
	}
	return NO;
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

void removeMiddle(int posisi){
	if ( posisi < 1 || posisi > countSingleLinkedList() ){
		cout << "Posisi Diluar jangkauan " << endl;
	}else if( posisi == 1 || posisi == countSingleLinkedList() ){
		cout << "Posisi bukan posisi tengah " << endl;
	} else {
	int NO = 1;
	cur = head;
	while (NO <= posisi){
		if (NO == posisi -1){
			after = cur;
		}
		if (NO == posisi){
			del = cur;
		}
		cur = cur->next;
		NO++;
	}
	after->next = cur;
	delete del;
	}
}

void printSingleLinkedList(){
	cout << "Nomor data ada : " << countSingleLinkedList() << endl;
	cur = head;
	while(cur != NULL){
		cout << "Merek laptop : "<< cur->merek <<endl;
		cout << "Jenis laptop : "<< cur->jenis <<endl;
		cout << "harga laptop : "<< cur->harga <<endl;
		
		cur = cur->next;
	}
}

int main(){
	
	createSingleLinkedList("Asus", "ChromeBook ", 8000000);
	
	printSingleLinkedList();
	
	cout <<"\n\n"<<endl;
	
	addFirst("Xiaomi", "RedmiBook 15", 9000000);
	printSingleLinkedList();
	
	cout <<"\n\n"<<endl;
	
	addMiddle("HP", "Pavilion Gaming Laptop 15-ec1071A", 12000000, 2);
	printSingleLinkedList();
	
	cout <<"\n\n"<<endl;
	
	addMiddle("Apple", "MacBook Pro 13-inch", 17499000, 2);
	printSingleLinkedList();
	
	cout <<"\n\n"<<endl;
	
	removeMiddle(2);
	printSingleLinkedList();
	
	cout <<"\n\n"<<endl;
}
