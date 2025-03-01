#include <iostream>

using namespace std;

class Input {
public:
    int p,i; 
    int result, day, month, year, strength, absent,roll,y=0;
    string name;

    void get() {
        cout << "Enter date to mark attendance: "<<endl;
        cout<<"Day:";
        cin>>day;
        cout<<"Month:";
        cin>>month;
        cout<<"Year:";
        cin>>year;

        cout << "Enter strength of the class: ";
        cin >> y;

       result=0;
        for ( i = 1; i <= y; i++) 
		{ 
            cout << "Roll number " << i << " is Present/Absent (1 for Present, 0 for Absent): ";
            cin >> p;
			  result = result + p;
        }
        absent = y - result; 
}
   void disp() 
	{
        cout << "Date: " << day << "/" << month << "/" << year << endl;
        cout << "Total strength of the class: " << y << endl;
        cout << "Total present students: " << result << endl;
        cout << "Total absent students: " << absent << endl;
    }
		void percentage() {
    float percentPresent = (result * 100.0) / y; 
    float percentAbsent = (absent * 100.0) / y; 

    cout << "Percentage of present students: " << percentPresent << "%" << endl;
    cout << "Percentage of absent students: " << percentAbsent << "%" << endl;

	}
   
};

int main() {
    int choice,target,size=0;
    Input in[100]; 
    do {
        cout << "----------------------------------------------" << endl;
        cout << "1. Attendance Sheet" << endl;
        cout << "2. Attendance Marked Sheet" << endl;
        cout << "3. Percentage" << endl;
        cout<<"4.Exit"<<endl;
        cout << "______________________________________________" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) 
		{
        case 1:
            cout << "Enter how many days of attendance you want to mark: ";
            cin >> size;

            for (int i = 1; i <= size; i++) 
			{ 
                cout << "Marking attendance for day: " <<i<< endl;
                in[i].get();
            }
            break;

        case 2:
            cout << "Enter the day on which you want to check the attendance: ";
            cin >> target;

            for (int i = 1; i <= size; i++) 
			{
                if (target == in[i].day) 
				{
                    in[i].disp();
                }
            }
            break;
        case 3:
        	cout << "Enter the day on which you want to check the attendance: ";
            cin >> target;

            for (int i = 1; i <= size; i++) 
			{
                if (target == in[i].day) 
				{
                    in[i].percentage();
                }
            }
        	break;
        	cout<<"Thank you!!!!!";
        	
        	break;
      case 4:
        		cout<<"Exit";
        	break;
    } 
}while(choice<4);



    
    return 0;
}
    
         

