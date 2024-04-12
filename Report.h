#pragma once
#include<string>
using namespace std;


class Report
{
private:
	int reportId;
	string reportDate;
	string reportType;
	string reportDescription;
	int reportStatus;

public:
	void setReportDetails(int rId, string rDate, string rType, string rDescription);
	int getReportStatus(int rStatus);
	void generateReport();

};



