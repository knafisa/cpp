#include <iostream>
using namespace std;
int main(){
	
	bool found = false;
	string key;
	float data;
	
	struct Student {
		string niu;
		string name;
		float score;
	};

	Student studentList[20] = {{"498000", "Adi", 94.02}, {"590123", "Mona", 88.77}, {"501222", "Amy", 87.32}, {"500213", "Salma", 44.99}, 
							{"487123", "Agus", 90.23}, {"487900", "Bunga", 89.88}, {"512000", "Chika", 77.99}, {"488092", "Joko", 77.93}, 
							{"522109", "Wulan", 45.90}, {"488822", "Karina", 86.44}, {"491222", "Sinta", 78.09}, {"512000", "Ova", 61.49},
							{"479311", "Lia", 72.65}, {"499000", "Bagas", 87.00}, {"478111", "Putra", 77.00}, {"499012", "Bayu", 66.99},
							{"512033", "Aldi", 88.99}, {"521000", "Roni", 67.09}, {"501233", "Yuda", 90.22}, {"511002", "Azka", 92.00}};
						
	//sorting data dengan nilai
	
	string tempNIU, tempName;
	float tempScore;
	
	for(int i=0; i<20; i++){
		for(int j=i+1; j<20; j++){
			if(studentList[i].score > studentList[j].score){
				
				//tukar nilai
				tempScore = studentList[i].score;
				studentList[i].score = studentList[j].score;
				studentList[j].score = tempScore;
				
				//tukar niu
				tempNIU = studentList[i].niu;
				studentList[i].niu = studentList[j].niu;
				studentList[j].niu = tempNIU;
				
				//tukar nama
				tempName = studentList[i].name;
				studentList[i].name = studentList[j].name;
				studentList[j].name = tempName;	
			}
		}
	}
	
	cout<<"\tUrutan nilai dari yang terendah ke tertinggi adalah :"<<endl;
	
	for(int i=0;i<20;i++){
		cout<< studentList[i].niu << " " << studentList[i].name << " " << studentList[i].score << endl;
		
	}

	cout << endl;
	
	cout << "Insert key of NIU: ";
	cin >> key;

	for(int i=0; i<20; i++){
		if(studentList[i].niu==key){
				found = true; 
			cout << "NIU\t: "<< studentList[i].niu << endl;
			cout << "Name\t: "<< studentList[i].name << endl;
			cout << "Score\t: "<< studentList[i].score << endl;
			break;
		}
	}

	if(!found){ 
		cout<<"Sorry, the data is not found";
	}
	return 0;
}

