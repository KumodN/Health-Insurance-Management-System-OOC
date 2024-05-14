#include "Report.h"
#include<iostream>
using namespace std;

void Report::setReportDetails(int rId, string rDate, string rType, string rDescription) {
	reportId = rId;
	reportDate = rDate;
	reportType = rType;
	reportDescription = rDescription;
}

void Report::generateReport() {
	cout << "************ |Report| ************" << endl;
	cout << endl;
	cout << "Report ID\t" << "Date\t" << "Type\t" << "Description" << endl;
	cout << reportId << "\t" << reportDate << "\t" << reportType << "\t" << reportDescription << endl;
	cout << endl;
	cout << "**********************************" << endl;
	cout << endl;

}
