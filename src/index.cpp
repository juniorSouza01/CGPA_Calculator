#include <iostream>
using namespace std;

int main() {
    int totalMarks, obtainMarks;
    float percent = 0.0, gpa;

    cout<<"Enter your total Marks" <<endl;
    cin>> totalMarks;

    cout<<"Enter your obtain Marks" <<endl;
    cin>> obtainMarks;

    if(obtainMarks <= totalMarks){
        percent = 100*float(obtainMarks) / float(totalMarks);
    }else{
        cout<<"Incorrect obtain Marks";
    }
    if(percent > 0){
        if((percent >= 90) && (percent <= 100)){

            gpa = 4.00;
            cout<<"Your GPA is: "<< gpa<< endl;
            cout<<"Your Grade is \"A+\" "<<endl;
            cout<<"Your Percentage is: "<< percent<<endl;
        } else if((percent >= 85) && (percent <= 89.99)){

            gpa = 4.00;
            cout<<"Your GPA is: "<< gpa<< endl;
            cout<<"Your Grade is \"A\" "<< endl;
            cout<<"Your Percentage is: "<< percent<< endl;
        }
    }
    return 0;
}