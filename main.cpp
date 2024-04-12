#include <iostream>
#include "Payment.h"
#include"Claim.h"
#include"Dependant.h"
#include"Feedback.h"
#include"HealthcareProvider.h"
#include"Policy.h"
#include"PolicyBenifits.h"
#include"PolicyHolder.h"
#include"Report.h"
#include"Staff.h"

using namespace std;

int main()
{
	Payment* p1 = new Payment();

	p1->setPaymentDetails(1050, "2024-04-13", "Card");
	p1->setPolicyDetails("SI2055", 25000.00);
	p1->displayPaymentDetails();

	delete p1;

	Report* r1 = new Report();

	r1->setReportDetails(103, "2024-04-01", "Monthly-user-activities", "New user enrollment,Number of banned users, Number of website visits during March");
	r1->getReportStatus(int rStatus);
	r1->generateReport();


	return 0;
}

