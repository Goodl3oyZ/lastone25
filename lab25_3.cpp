#include<iostream>
#include <set>
using namespace std;

//Write function count() here.
int count(int a[],int N){
    set<int>diffnum;
    for(int i=0;i<N;i++)
        diffnum.insert(a[i]);
    return diffnum.size();
}

int main(){	
	int data[] = {1,2,4,5,4,8,2,1,2,4,6,1,4,4,4,2,1,0,12}; 
	
	cout << "There are " << count(data,sizeof(data)/sizeof(int)); 
	cout << " different numbers in data.";
	
	return 0;
}
