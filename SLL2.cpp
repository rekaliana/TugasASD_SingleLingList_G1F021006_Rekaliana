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

void addLast(string merek, string jenis, int harga){
	newNode = new laptop();
	newNode->merek = merek;
	newNode->jenis = jenis;
	newNode->harga = harga;
	newNode->next = NULL;
	tail->next = newNode;
	tail=newNode;
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
	
	createSingleLinkedList("Asus", "ChromBook", 8000000);
	
	printSingleLinkedList();
	
	cout <<"\n\n"<<endl;
	
	addLast("xiaomi", "RedmiBook 15", 9000000);
	printSingleLinkedList();
	
	cout <<"\n\n"<<endl;
	
	
	
}
