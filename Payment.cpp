#include "Payment.h"
#include<iostream>
using namespace std;

void Payment::setPaymentDetails(int pId, string pDate, string pMethod) {
	paymentId = pId;
	paymentDate = pDate;
	paymentMethod = pMethod;
}
void Payment::setPolicyDetails(string pNumber, double pAmount) {
	policyNumber = pNumber;
	paymentAmount = pAmount;
}
/*void Payment::paymentStatus() {
	if () {
		cout<<"Payment Successful!"
	}
	else {
		cout << "Payment Declined!";
	}
}*/
void Payment::displayPaymentDetails() {
	cout << "****** |PAYMENT DETAILS| ******" << endl;
	cout << "-------------------------------" << endl;
	cout << "Payment ID:     " << paymentId << endl;
	cout << "Policy Number:  " << policyNumber << endl;
	cout << "Payment Date:   " << paymentDate << endl;
	cout << "Payment Amount: " << paymentAmount << endl;
	cout << "Payment Method: " << paymentMethod << endl;
	cout << "*******************************" << endl;
	cout << endl;
	cout << endl;

}
