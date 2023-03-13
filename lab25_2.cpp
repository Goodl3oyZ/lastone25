#include<iostream>
#include<list>
#include<algorithm>

using namespace std;

void printList(list<string> s){
	list<string>::iterator i;
	for( i = s.begin(); i != s.end(); i++){
		cout << *i << " ";
	}		
	cout << "\n";	
}

int main(){
	
	list<string> line_up;
	list<string>::iterator loc;
	
	line_up.push_back("Alice"); //คนแรก
	line_up.push_back("Bob");   //มาต่อแถว
	
	loc = find(line_up.begin(),line_up.end(),"Bob");//หาตำแหน่ง bob
	line_up.insert(loc,"Oscar");    //แทนที่ตำแหน่งที่ bob เคยอยู่
	
	//Write your code here
	//Luffy Sanji Nami มาต่อ
	
	line_up.push_back("Luffy"); 
	line_up.push_back("Sanji"); 
	line_up.push_back("Nami");
	for(int i=0;i<2;i++)
	    line_up.pop_front();
	    
	loc = find(line_up.begin(),line_up.end(),"Luffy");
	line_up.insert(next(loc),"Narutu");
	
	line_up.push_front("Prayath");
	loc = find(line_up.begin(),line_up.end(),"Prayath");
	line_up.insert(next(loc),"Tony");
	
    loc = find(line_up.begin(),line_up.end(),"Bob");
	line_up.erase(loc);
	for(int i=0;i<3;i++)
	    line_up.pop_front();
	printList(line_up);
		
	return 0;
}