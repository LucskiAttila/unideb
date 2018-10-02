#include "../std_lib_facilities.h"

#define m2cm 100
#define in2cm 2.54
#define ft2in 12

static bool sort_func(double a, double b){
	return a > b;
}

int main()
{
	map<string, int> units;
	units["cm"] = 1;
	units["in"] = 2;
	units["m"] = 3;
	units["ft"] = 4;

	vector<double> list;
	double value = 0;
	string unit = "";
	while (1) {
		cin >> value >> unit;

		if (unit == "quit" || value == 0 || unit == "")
			break;

		switch(units[unit]){
			case 1:
				list.push_back(value);
				break;
			case 2:
				list.push_back(value * (double)in2cm);
				break;
			case 3:
				list.push_back(value * (double)m2cm);
				break;
			case 4:
				list.push_back(value * (double)ft2in * (double)in2cm);
				break;
			default:
				cout << "A mértékegység nem felismerhető!" << endl;
		}
	}

	sort(list.begin(), list.end(), sort_func);
	
	cout << "Legkisebb: " << *min_element(list.begin(), list.end()) << endl;
	cout << "Legnagyobb: " << *max_element(list.begin(), list.end()) << endl;
	cout << "Összeg: " << accumulate(list.begin(), list.end(), 0) << endl;

	cout << endl << "Kiírás növekvő sorrendben: " << endl;

	bool first = true;
	for(auto &elem : list){
		cout << (first ? "" : ", ") << elem << " cm";
		if (first)
			first = false;
	}
	cout << endl;
}
