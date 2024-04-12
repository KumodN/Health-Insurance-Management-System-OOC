#pragma once
#include<string>
using namespace std;

class Payment
{
private:
	int paymentId;
	string paymentType;
	double paymentAmount;
	string policyNumber;
	string paymentDate;
	string paymentMethod;
	string paymentStatus;

public:
	void setPaymentDetails(int pId, string pDate, string pMethod);
	void setPolicyDetails(string pNumber, double pAmount);
	//void paymentStatus();
	void displayPaymentDetails();
};



