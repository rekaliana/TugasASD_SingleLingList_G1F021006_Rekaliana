#include<iostream>

using namespace std;

struct laptop{
	string merek, jenis;
	int harga;
	
	laptop *next;
	
};

laptop *head, *tail, *cur, *newNode, *del;


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

void removeFirst(){
	del = head;
	head = head->next;
	delete del;
}

void printSingleLinkedList(){
	cur = head;
	while(cur != NULL){
		cout << "Merek laptop : "<< cur->merek <<endl;
		cout << "Jenis laptop : "<< cur->jenis <<endl;
		cout << "harga laptop : "<< cur->harga <<endl;
		
		cur = cur->next;
	}
}

int main(){
	
	createSingleLinkedList("Asus", "ChromeBook", 8000000);
	
	printSingleLinkedList();
	
	cout <<"\n\n"<<endl;
	
	addLast("Xiaomi", "RedmiBook 15", 9000000);
	printSingleLinkedList();
	
	cout <<"\n\n"<<endl;
	
	removeFirst();
	printSingleLinkedList();
	
	cout <<"\n\n"<<endl;
	
}
