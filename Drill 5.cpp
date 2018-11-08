#include "std_lib_facilities.h"





int main()

{

int i = 0;

try {

//1.

cout <<++i<<". Success!\n"; //wrong version: Cout << "Success!\n";

//2.

cout<<++i<<". Success!\n"; //wrong version: cout<<"Success!\n;

//3.

cout <<++i<<". Success" << "!\n"; //wrong version: cout << "Success" << !\n"

//4.

cout <<++i<<". Success!" << '\n'; //wrong version: cout << success << '\n';

//5.

int res = 7; vector<int> v(10); v[5] = res; cout <<++i<<". Success!\n"; //wrong version: string res = 7;

//6.

vector<int> v1(10); v1[5] = 7; if (v1[5]==7) cout <<++i<<". Success!\n";  //wrong version: vector<int> v1(10); v1(5) = 7; if (v1(5)!=7) cout << "Success!\n";

//7.

bool cond = true; if (cond) cout <<++i<<". Success!\n"; else cout << "Fail!\n"; //wrong version: if (cond) cout << "Success!\n"; else cout << "Fail!\n";

//8.

bool c = false; if (!c) cout <<++i<<". Success!\n"; else cout << "Fail!\n"; //wrong: bool c = false; if (c) cout << "Success!\n"; else cout << "Fail!\n";

//9.

string s = "ape"; bool c1 = "fool"<s; if (!c1) cout <<++i<<". Success!\n"; //wrong: string s = "ape"; boo c1 = "fool"<s; if (c1) cout << "Success!\n";

//10.

string s1 = "ape"; if (s1!="fool") cout <<++i<<". Success!\n"; //wrong: string s1 = "ape"; if (s1=="fool") cout <<++i<<". Success!\n";

//11.

string s2 = "ape"; if (s2!="fool") cout <<++i<<". Success!\n"; //string s2 = "ape"; if (s2=="fool") cout < "Success!\n";

//12.

string s3 = "ape"; if (s3<"fool") cout <<++i<<". Success!\n"; //wrong: string s3 = "ape"; if (s3+"fool") cout < "Success!\n";

//13.

vector<char> v2(5); for (int i=0; i<v2.size(); ++i); cout <<++i<<". Success!\n"; //wrong: vector<char> v2(5); for (int i=0; 0<v2.size(); ++i); cout <<++i<<".Success!\n";

//14.

vector<char> v3(5); for (int i=0; i<v3.size(); ++i) ; cout <<++i<<". Success!\n"; //wrong: vector<char> v3(5); for (int i=0; i<=v3.size(); ++i) ; cout <<++i<<". Success!\n";

//15.

cout<<++i<<". ";

string s4 = "Success!\n"; for (int i=0; i<s4.length(); ++i) cout << s4[i]; //string s4 = "Success!\n"; for (int i=0; i<6; ++i) cout << s4[i];

//16.

if (true) cout <<++i<<". Success!\n"; else cout << "Fail!\n"; //if (true) then cout <<++i<<". Success!\n"; else cout << "Fail!\n";

//17.

int x = 2000; char c2 = x; if (c2 != 2000) cout <<++i<<". Success!\n"; //int x = 2000; char c2 = x; if (c2 == 2000) cout <<++i<<". Success!\n";

//18.

cout<<++i<<". ";

string s5 = "Success!\n"; for (int i=0; i<s5.length(); ++i) cout << s5[i]; //no problem

//19.

vector <string> v4(5); for (int i=0; i<=v.size(); ++i); cout <<++i<<". Success!\n"; //vector v4(5); for (int i=0; i<=v.size(); ++i) ; cout << "Success!\n";

//20.

int i1=0; int j = 9; while (i1 != 10) ++i1; if (j<i1) cout <<++i<<". Success!\n"; //int i1=0; int j = 9; while (i<10) ++j; if (j<i) cout << "Success!\n";

//21.

int x1 = 2; double d = 5/double(x1); if (d==2+0.5) cout <<++i<<". Success!\n"; //int x1 = 2; double d = 5/(x1-2); if (d==2*x1+0.5) cout << "Success!\n";

//22.

cout<<++i<<". ";

string s6 = "Success!\n"; for (int i=0; i<=10; ++i) cout << s6[i]; //string <char> s6 = "Success!\n"; for (int i=0; i<=10; ++i) cout << s[i];

//23.

int i2=0; int j2 = 9; while (i2<10) ++i2; if (j2<i2) cout <<++i<<". Success!\n"; //int i2=0; while (i<10) ++j2; if (j2<i) cout << "Success!\n";

//24.

int x2 = 4; double d2 = 5/double(x2-2); if (d2==2+0.5) cout <<++i<<". Success!\n"; //int x2 = 4; double d = 5/(x2–2); if (d=2*x2+0.5) cout << "Success!\n";

//25.

cout <<++i<<". Success!\n"; 

keep_window_open();

return 0;

}

catch (exception& e) {

cerr << "error: " << e.what() << '\n';

keep_window_open();

return 1;

}

catch (...) {

cerr << "Oops: unknown exception!\n";

keep_window_open();

return 2;

}

}
