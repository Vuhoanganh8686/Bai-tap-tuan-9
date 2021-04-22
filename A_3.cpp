#include<iostream>
using namespace std;
int main(){
	char* s = new char[10];
	char* a = s + 3 ;
	cout<< sizeof(a)<<endl;
	for (int i = 0; i < 9; i++) s[i] = 'a'; 
	s[9] = '\0';
	cerr <<"s: " << "-" << a << "-" << endl;
	cerr <<"a: " << "-" << c << "-" << endl;
	delete a;
	cerr << "a after deleting c:" << "-" << s << "-" << endl; // cerr nay loi, do delete bo nho dong a ma con tro mang c dag tro vo
}
