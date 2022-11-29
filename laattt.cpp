#include <iostream>
using namespace std;
int main(){
	bool found = false;
	string key;
	int n, min, temp;
	struct Student {
		string niu;
		string name;
		float score;
};

	Student studentList[] = {{"498000", "Adi", 94.02}, {"590123", "Mona", 88.77}, {"501222", "Amy", 87.32}, {"500213", "Salma", 44.99}, 
							{"487123", "Agus", 90.23}, {"487900", "Bunga", 89.88}, {"512000", "Chika", 77.99}, {"488092", "Joko", 77.93}, 
							{"522109", "Wulan", 45.90}, {"488822", "Karina", 86.44}, {"491222", "Sinta", 78.09}, {"512000", "Ova", 61.49},
							{"479311", "Lia", 72.65}, {"499000", "Bagas", 87.00}, {"478111", "Putra", 77.00}, {"499012", "Bayu", 66.99},
							{"512033", "Aldi", 88.99}, {"521000", "Roni", 67.09}, {"501233", "Yuda", 90.22}, {"511002", "Azka", 92.00}};
						

	cout << "Insert key of NIU: ";
	cin >> key;

	int amount_ofstud = sizeof(studentList)/sizeof(studentList[0]);
	for(int i=0; i<amount_ofstud; i++){
		if(studentList[i].niu==key){
				found = true; 
			cout << "Student ID\t: "<< studentList[i].niu << endl;
			cout << "Student Name\t: "<< studentList[i].name << endl;
			cout << "Score\t\t: "<< studentList[i].score << endl;
			break;
		}
	}

	if(!found){ 
		cout<<"The data is not found";
	}
	return 0;
}

