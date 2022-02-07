// 2019-cs-237.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<iomanip>
#include<string>
using namespace std;
class Person
{
public:
	Person();
	Person(string, string);
	Person(const Person&);
	~Person();
	string takeName();
	void setName(string);
	string getName();
	string takeAddress();
	void setAddress(string);
	string getAddress();
	string validName(string ttr);

private:
	string name;
	string address;
};
////////////////////////////////////////////////////////////default constructor////////////////////////////////////////////
Person::Person()
{
	
	name = "null";
	address = "null";
}
////////////////////////////////////////////////////////////destructor//////////////////////////////////////////////////////
Person::~Person()
{
	
}
////////////////////////////////////////////////////////////parameterized  constructor////////////////////////////////////////////
Person::Person(string str, string adr)
{
	cout << "\nParameterized constructor of Person is called";
	this->name = str;
	this->address = adr;
}
////////////////////////////////////////////////////////////copy constructor///////////////////////////////////////////////
Person::Person(const Person& obj)
{
	this->name = obj.name;
	this->address = obj.address;
}
////////////////////////////////////////////////////////////taking name////////////////////////////////////////////////////
string Person::takeName()
{
	string ftr;
	cout << "\nEnter the name of student : ";
	cin >> ws;
	getline(cin, ftr);
	return ftr;
}
////////////////////////////////////////////////////////////taking address//////////////////////////////////////////////////
string Person::takeAddress()
{
	string far;
	cout << "\nEnter the address of student : ";
	cin >> ws;
	getline(cin, far);
	return far;
}
////////////////////////////////////////////////////////////setter of name/////////////////////////////////////////////////
void Person::setName(string abr)
{
	this->name = validName(abr);
}
////////////////////////////////////////////////////////////setter of Address///////////////////////////////////////////////
void Person::setAddress(string gbr)
{
	this->address = gbr;
}
////////////////////////////////////////////////////////////getter opf name/////////////////////////////////////////////////
string Person::getName()
{
	return this->name;
}
////////////////////////////////////////////////////////////getter opf ADDRESS//////////////////////////////////////////////
string Person::getAddress()
{
	return this->address;
}
////////////////////////////////////////////////////////////valid Name///////////////////////////////////////////////////////
string Person::validName(string name)
{

	bool flag = true;

	int length = name.length();                  //getting length of name

	for (int i = 0; i < length; i++)
	{
		if ((name[i] >= 65 && name[i] <= 90) || (name[i] >= 97 && name[i] <= 122) || (name[i] == ' '))
		{

			flag = false;

		}
		else
		{

			flag = true;

		}
		if (flag == true)
			break;
	}
	if (flag == false)
	{

		return name;

	}
	else
	{

		cout << "\nYou have entered wrong name ";

		string str = takeName();//CALLING 'takeName' OF NAME IF USER ENTER INVALID INPUT AND ASSIGNING THE VALUE RETURN BY GETTER TO 'str'

		string ffr = validName(str);

		return ffr;

	}

}
class courseResult
{
public:
	courseResult();
	courseResult(string, string, int, int, int);
	courseResult(const courseResult&);
	~courseResult();
	string takeCoursename();
	void setCoursename(string);
	string getCoursename();
	string validCourseName(string);
	string takeCourseId();
	void setCourseId(string);
	string getCourseId();
	string validCourseId(string);
	int takeSamester();
	void setSamester(int);
	int validSamester(int);
	int getSamester();
	int takeMarks();
	void setMarks(int);
	int validmarks(int);
	int getMarks();
	int takeCreditHours();
	void setcreditHours(int);
	int validCreditHours(int);
	int getCreditHours();
	string getGrade();
	double getGradePoints();
	void toString();
	void takeInput();
	void deletedata();

private:

	string courseName;
	string courseCode;
	int samester;
	int marks;
	int creditHours;
};
////////////////////////////////////////////////////////////Default constructor///////////////////////////////////////////////////////
courseResult::courseResult()
{
	
	courseName = '\0';
	courseCode = '\0';
	samester = 0;
	marks = 0;
	creditHours = 0;
}
////////////////////////////////////////////////////////////Parameterized constructor///////////////////////////////////////////////////////
courseResult::courseResult(string ffr, string hhr, int sam, int mar, int ch)
{
	this->courseName = ffr;
	this->courseCode = hhr;
	this->samester = sam;
	this->marks = mar;
	this->creditHours = ch;
}
////////////////////////////////////////////////////////////Copy constructor///////////////////////////////////////////////////////
courseResult::courseResult(const courseResult& obk)
{
	this->courseName = obk.courseName;
	this->courseCode = obk.courseCode;
	this->samester = obk.samester;
	this->marks = obk.marks;
	this->creditHours = obk.creditHours;
}
////////////////////////////////////////////////////////////Destructor///////////////////////////////////////////////////////
courseResult::~courseResult()
{
	
}
////////////////////////////////////////////////////////////taking Name///////////////////////////////////////////////////////
string courseResult::takeCoursename()
{
	string cnmr;
	cout << "\nEnter the course name : ";
	cin >> ws;
	getline(cin, cnmr);
	return cnmr;
}
////////////////////////////////////////////////////////////Taking Id///////////////////////////////////////////////////////
string courseResult::takeCourseId()
{
	string cid;
	cout << "\nEnter the course Id : ";
	cin >> ws;
	getline(cin, cid);
	return cid;
}
////////////////////////////////////////////////////////////Taking samester///////////////////////////////////////////////////////
int courseResult::takeSamester()
{
	int sam;
	cout << "\nEnter the samester : ";
	cin >> sam;
	return sam;
}
////////////////////////////////////////////////////////////Taking marks///////////////////////////////////////////////////////
int courseResult::takeMarks()
{
	int mar;
	cout << "\nEnter the marks : ";
	cin >> mar;
	return mar;

}
////////////////////////////////////////////////////////////validation of Course Name///////////////////////////////////////////////////////
string courseResult::validCourseName(string cname)
{
	bool flag = true;
	int length = cname.length();
	if (length < 8||length>35)             //Checking length
	{
		cout << "\n\nYou have entered invalid course name";
		string ggr= validCourseName(takeCoursename());
		return ggr;
	}
	else
	{
		for (int i = 0; i < length; i++)
		{
			if ((cname[i] >= 65 && cname[i] <= 90) || (cname[i] >= 97 && cname[i] <= 122) || (cname[i] == ' '))
			{
				flag = false;

			}
			else
			{

				flag = true;

			}
			if (flag == true)

				break;

		}
		if (flag == false)
		{

			return cname;

		}
		else
		{

			cout << "\n\nYou have entered wrong course name ";

			string wwe = validCourseName(takeCoursename());//CALLING 'takeName' OF NAME IF USER ENTER INVALID INPUT AND ASSIGNING THE VALUE RETURN BY GETTER TO 'str'

			return wwe;

		}
	}

}
////////////////////////////////////////////////////////////Setting courseName///////////////////////////////////////////////////////
void courseResult::setCoursename(string ptr)
{
	this->courseName = validCourseName(ptr);
}
////////////////////////////////////////////////////////////getter of course Name///////////////////////////////////////////////////////
string courseResult::getCoursename()
{
	return this->courseName;
}
////////////////////////////////////////////////////////////validation of Course Id///////////////////////////////////////////////////////
string courseResult::validCourseId(string cId)
{
	int c = 0;
	int k = 0;
	bool flag = true;
	int len = cId.length();
	if (len < 2 || len>8)
	{
		cout << "\n\nInvalid id";
		string ptr=validCourseId(takeCourseId());     //calling of validation function
		return ptr;
	} 
	else
	{
		for (int i = 0; i < 2; i++)
		{
			if (cId[i]>='A'&&cId[i]<='Z')            //checking first two character must be upper case alphabets
			{
				c++;
			}
		}
		
			if (cId[2] >= 'A' && cId[2] <= 'Z')
			{
				k++;
			}
			if (cId[len - 1] >= 'A' && cId[len - 1] <= 'Z')
			{

				if (k == 1)
				{
					for (int k = 3; k < len - 1; k++)
					{
						if (!(cId[k] >= '0' && cId[k] <= '9'))
						{
							flag = false;
						}
						if (flag == false)

							break;
					}
				}
				else
				{

					for (int k = 2; k < len - 1; k++)
					{
						if (!(cId[k] >= '0' && cId[k] <= '9'))
						{
							flag = false;
						}
						if (flag == false)

							break;
					}
				}
			}
			else
			{
				if (k == 1)
				{
					for (int k = 3; k < len; k++)
					{
						if (!(cId[k] >= '0' && cId[k] <= '9'))
						{
							flag = false;
						}
						if (flag == false)

							break;
					}
				}
				else
				{
					for (int k = 2; k < len; k++)
					{
						if (!(cId[k] >= '0' && cId[k] <= '9'))
						{
							flag = false;
						}
						if (flag == false)

							break;
					}
				}
			}
	
		if (c == 2&&flag == true)
		{
			
				return cId;
	
		}
		else
		{
			cout << "\nInvalid Course Id";
			string ptr = validCourseId(takeCourseId());
			return ptr;
		}
	}
}
////////////////////////////////////////////////////////////validation of marks///////////////////////////////////////////////////////
int courseResult::validmarks(int mer)
{
	if (mer >= 0 && mer <= 100)
	{
		return mer;
	}
	else
	{
		cout << "\ninvalid marks";
		return validmarks(takeMarks());
	}
}
////////////////////////////////////////////////////////////vtaking cours credit hours///////////////////////////////////////////////////////
int courseResult::takeCreditHours()
{
	int ch;
	cout << "\nEnter the cridit hours : ";
	cin >> ch;
	return ch;
}
////////////////////////////////////////////////////////////validtion of credit hours///////////////////////////////////////////////////////
int courseResult::validCreditHours(int chs)
{
	if (chs >= 1 && chs <= 3)
	{
		return chs;
	}
	else
	{
		cout << "\nInvalid Credit hours";
		return validCreditHours(takeCreditHours());
	}
}
////////////////////////////////////////////////////////////Setting Credit hours///////////////////////////////////////////////////////
void courseResult::setcreditHours(int chrs)
{
	this->creditHours = validCreditHours(chrs);
}
////////////////////////////////////////////////////////////getting credit hours///////////////////////////////////////////////////////
int courseResult::getCreditHours()
{
	return this->creditHours;
}
////////////////////////////////////////////////////////////setting marks///////////////////////////////////////////////////////
void courseResult::setMarks(int mr)
{
	this->marks = validmarks(mr);
}
////////////////////////////////////////////////////////////getting marks///////////////////////////////////////////////////////
int courseResult::getMarks()
{
	return marks;
}
////////////////////////////////////////////////////////////deleting Course///////////////////////////////////////////////////////
void courseResult::deletedata()
{
	string kkr = getCourseId();            //assigning value return by getCourseId into kkr

	int length = getCourseId().length();


	for (int v = 0; v < length; v++)
	{
		kkr[v] = '\0';                    //assining every of course id element to null character
	}
	this->courseCode = kkr;

	string name = getCoursename();          //assigning value into k return by getter ok course name

	int len = getCoursename().length();


	for (int x = 0; x < len; x++)
	{
		name[x] = '\0';                    // //assining every of course name element to null character
	}

	this->courseName = name;

	int k = getCreditHours();               //assigning value into k return by getter ok credit hours

	k = '\0';                 

	this->creditHours = k;

	int f = getSamester();                  //assigning value into k return by getter ok samester
	
	f = '\0';

	this->samester = f;

	int m = getMarks();

	m = '\0';

	this->marks = m;

	
	
}
///////////////////////////////////////////////////////////validation of samester///////////////////////////////////////////////////////
int courseResult::validSamester(int sam)
{
	if (sam > 0 && sam <= 8)
	{
		return sam;
	}
	else
	{
		cout << "\nInvalid input ";
		return validSamester(takeSamester());
	}
}
///////////////////////////////////////////////////////////setter of samester///////////////////////////////////////////////////////
void courseResult::setSamester(int sem)
{
	this->samester = validSamester(sem);
}
///////////////////////////////////////////////////////////getter of samester///////////////////////////////////////////////////////
int courseResult::getSamester()
{
	return samester;
}
///////////////////////////////////////////////////////////stter of Id///////////////////////////////////////////////////////
void courseResult::setCourseId(string qqw)
{
	this->courseCode = validCourseId(qqw);
}
///////////////////////////////////////////////////////////getter of Course Id///////////////////////////////////////////////////////
string courseResult::getCourseId()
{
	return this->courseCode;
}
///////////////////////////////////////////////////////////getting of grade///////////////////////////////////////////////////////
string courseResult::getGrade()
{
	string pter;
	int grade = getMarks();
	if (grade >= 80)
	{
		pter = "A";
	}
	else
		if (grade >= 70 && grade < 80)
		{
			pter = "A-";
		}
		else
			if (grade >= 65 && grade < 70)
			{
				pter = "B+";
			}
			else
				if (grade >= 60 && grade < 65)
				{
					pter = "B-";
				}
				else
					if (grade >= 55 && grade < 60)
					{
						pter = "C+";
					}
					else
						if (grade >= 50 && grade < 55)
						{
							pter = "C";
						}
						else
							if (grade >= 40 && grade < 50)
							{
								pter = "D";
							}
							else
								if (grade < 40)
								{
									pter = "F";
								}
								else
									if (grade == '\0')
									{
										pter = '\0';
									}
	return pter;
}
///////////////////////////////////////////////////////////getting of Grade points///////////////////////////////////////////////////////
double courseResult::getGradePoints()
{
	double poi=0;
	string points = getGrade();
	if (points == "A")
	{
		poi = 4.0;
	}
	else
		if (points == "A-")
		{
			poi = 3.7;
		}
		else
			if (points == "B+")
			{
				poi = 3.3;
			}
			else
				if (points == "B-")
				{
					poi = 3.0;
				}
				else
					if (points == "C+")
					{
						poi = 2.7;
					}
					else
						if (points == "C")
						{
							poi = 2.3;
						}
						else
							if (points == "D")
							{
								poi = 1.0;
							}
							else
								if (points == "F")
								{
									poi = 0.0;
								}

	poi = poi * getCreditHours();

	return poi;
}
///////////////////////////////////////////////////////////Taking course Input///////////////////////////////////////////////////////
void courseResult::takeInput()
{
	
	setCourseId(takeCourseId());
	
	setCoursename(takeCoursename());
	
	setcreditHours(takeCreditHours());
	
	setSamester(takeSamester());
	
	setMarks(takeMarks());
}
///////////////////////////////////////////////////////////Printing Course output///////////////////////////////////////////////////////
void courseResult::toString()
{
	cout << left;
	cout  <<setw(15)<< getCourseId() << setw(35) << getCoursename() << setw(10) << getCreditHours() << setw(10) << getMarks() << setw(10) << getGrade();
}
///////////////////////////////////////////////////////////defination of student class///////////////////////////////////////////////////////
class Student: public Person
{
public:
	Student();
	~Student();
	string takeRegNo();
	string ValidRegNo(string);
	void setRegNo(string);
	string getRegNo();
	string takeDegree();
	string validDegree(string);
	void setDegree(string);
	string getDegree();
	string getSession();
	string getDicipline();
	double getSemesterGPA(int);
	void takeCourseinput();
	int getTotalCreditHours();
	double getCGPA();
	int getSemesterCreditHours(int);
	void basicInput();
	void update();
	void deleteCourse();
	void showDCM();
	void courseOutput();
	void Operations();
	void CheckingTwosameIDs();
private:
	string regNO;
	string Degree;
	courseResult course[15];
};
///////////////////////////////////////////////////////////Defaqult constructor///////////////////////////////////////////////////////
Student::Student():course()
{
	
	regNO = '\0';
	Degree = '\0';
}
///////////////////////////////////////////////////////////destructor///////////////////////////////////////////////////////
Student::~Student()
{
	
}
///////////////////////////////////////////////////////////Taking registration No///////////////////////////////////////////////////////
string Student::takeRegNo()
{
	string reg;
	cout << "\nEnter the registration No : ";
	cin >> ws;
	getline(cin, reg);
	return reg;
}
///////////////////////////////////////////////////////////validation of Registration///////////////////////////////////////////////////////
string Student::ValidRegNo(string regNo)
{
	int c = 0;

	int length = regNo.length();

	if (length < 11)
	{

		cout << "\nYoy have entered wrong Formate of Registration No";

		string ptr = takeRegNo();//CALLING GETTER OF REGISTRATION NUMBER IF USER ENTER INVALID INPUT AND ASSIGNING THE VALUE RETURN BY GETTER TO 'ptr'

		string kkr = ValidRegNo(ptr);

		return kkr;

	}
	else
	{
	for (int i = 0; i < 3; i++)
	{
		if (regNo[i] >= '0' && regNo[i] <= '9')
		{
			c++;                      //INNCREAMEMNT IN 'c'
		}
	}

	if (regNo[0] == '0' && regNo[1] == '0' && regNo[2] == '0')
	{
		if (regNo[3] >= 49 && regNo[3] <= 58)
		{
			c++;
		}
	}
	else
		if (regNo[3] >= 48 && regNo[3] <= 58)
		{
			c++;
		}

	if (regNo[4] == '-')
	{
		c++;
	}

	for (int j = 4; j < 7; j++)
	{
		if (regNo[j] >= 65 && regNo[j] <= 90)
		{
			c++;
		}
	}

	if (regNo[7] == '-')
	{
		c++;
	}

	for (int k = 8; k < (length - 1); k++)
	{
		if (regNo[k] >= 48 && regNo[k] <= 58)
		{
			c++;
		}
	}

	if (regNo[7] == '0' && regNo[8] == '0' && regNo[9] == '0')
	{
		if (regNo[length - 1] >= '1' && regNo[length - 1] <= '9')
		{
			c++;
		}
	}
	else
		if (regNo[length - 1] >= 48 && regNo[length - 1] <= 58)
		{
			c++;
		}


	if (c == length)
	{
		return regNo;
	}
	else
	{
		cout << "\nYou Have entered invalid formate of Registration number";

		string gtr = takeRegNo(); // CALLING GETTER OF REGISTRATION NUMBER IF USER ENTER INVALID INPUT AND ASSIGNING THE VALUE RETURN BY GETTER TO 'ptr'

		string kkr = ValidRegNo(gtr); //CALLING VALID 'regNo' AND PASSING 'kkr' AS ARGUMENT

		return kkr;

	}
    }
}
///////////////////////////////////////////////////////////Setting registration///////////////////////////////////////////////////////
void Student::setRegNo(string rno)
{
	this->regNO = ValidRegNo(rno);
}
///////////////////////////////////////////////////////////getter of registration///////////////////////////////////////////////////////
string Student::getRegNo()
{
	return regNO;
}
///////////////////////////////////////////////////////////taking degree///////////////////////////////////////////////////////////////
string Student::takeDegree()
{
	string degree;
	cout << "\nEnter the degree : ";
	cin >> ws;
	getline(cin, degree);
	return degree;
}
///////////////////////////////////////////////////////////validation of registration///////////////////////////////////////////////////////
string Student::validDegree(string rNo)
{
	if (rNo == "BS" || rNo == "MS" || rNo == "BE")
	{
		return rNo;
	}
	else
	{
		cout << "\nInvalid Degree";
		return validDegree(takeDegree());
	}
}
///////////////////////////////////////////////////////////getter of session///////////////////////////////////////////////////////
string Student::getSession()
{
	string Session="Null";
	string session = getRegNo();
	for (int i = 0; i < 4; i++)
	{
		Session[i] = session[i]; 
	}
	return Session;
}
///////////////////////////////////////////////////////////getter of Discipline///////////////////////////////////////////////////////
string Student::getDicipline()
{
	int i = 4;
	string Discipline = "00";                //Just for convinence
	string dis = getRegNo();
	
		for (int k = 0; k < 2; k++)
		{
			i++;                     //increament in c to reach the index where Discipline is present
			Discipline[k] = dis[i];
		}
		
	
	return Discipline;
}
///////////////////////////////////////////////////////////Setter of degree///////////////////////////////////////////////////////
void Student::setDegree(string deg)
{
	this->Degree = validDegree(deg);
}
////////////////////////////////////////////////////////////getter of degree//////////////////////////////////////////////////////
string Student::getDegree()
{
	return Degree;
}
////////////////////////////////////////////////////////////getter of samester gpa//////////////////////////////////////////////////////
double Student::getSemesterGPA(int samester)
{
	double k = 0.0;
	int j = 0;
	double gpa = 0.0;

	for (int i = 0; i < 15; i++)
	{
		if (course[i].getSamester() == samester)
		{
			
			k =k+ course[i].getGradePoints();       //calculating total grade points of specific samester
			j = j + course[i].getCreditHours();     //calculating total credit hours of specific samester
		}
		
	}
	
	gpa = k / j;                                  //calculating gpa
	return gpa;
}
////////////////////////////////////////////////////////////getter of samester gpa//////////////////////////////////////////////////////
void Student::takeCourseinput()
{
	int c = 0;
	cout << "\n*********************************COURSES INFORMATION********************************************\n";
	char inp;
	for (int i = 0; i < 15; i++)
	{
		course[i].takeInput();
		cout << "\n\nPress any key if want to add further data of courses of student. OR  press 'N' to Not : ";

		cin >> inp;

		if (inp == 'N' || inp == 'n')
		{
			break;
		}
		else
			c++;
		
	}

}
////////////////////////////////////////////////////////////getter of total credit hours///////////////////////////////////////
int Student::getTotalCreditHours()
{
	int tch=0;
	for (int i = 0; i < 15; i++)
	{
		tch = tch + course[i].getCreditHours();
	}
	return tch;
}
////////////////////////////////////////////////////////////getter Samester credit hours///////////////////////////////////////
int Student::getSemesterCreditHours(int sam)
{
	int j = 0;
	for (int i = 0; i < 15; i++)
	{
		if (course[i].getSamester() == sam)
		{

			j = j + course[i].getCreditHours();

		}

	}
	return j;
}
////////////////////////////////////////////////////////////getter of CGPA//////////////////////////////////////////////////
double Student::getCGPA()
{
	double sa = 0.0;
	for (int s = 0; s < 15; s++)
	{
		sa = sa + course[s].getGradePoints();
	}
	sa = sa / getTotalCreditHours();
	return sa;
}
////////////////////////////////////////////////////////////Basic input////////////////////////////////////////////////////////
void Student::basicInput()
{
	cout << "\n*********************************BASIC  INFORMATION********************************************\n";
	setName(takeName());
	setRegNo(takeRegNo());
	setDegree(takeDegree());
	setAddress(takeAddress());
}
////////////////////////////////////////////////////////////Delete course//////////////////////////////////////////////////
void Student::deleteCourse()
{
	int c = 15;
	string str;
	cout << "\nEnter the course Id you want to delete : ";
	cin >> ws;
	getline(cin, str);
	for (int g = 0; g < 15; g++)
	{
		if (str == course[g].getCourseId())
		{
			course[g].deletedata();
			c--;
			cout << "\nYour Course has been deleted ";
			break;
		}
	}
	if (c == 15)
	{
		cout << "\nId you want to delete is not present in Student record";
	}
}
////////////////////////////////////////////////////////////gUpdate////////////////////////////////////////////////////////
void Student::update()
{
	int a = 15;
	string str;
	cout << "\nEnter the course Id you want to update : ";
	cin >> ws;
	getline(cin, str);
	for (int g = 0; g < 15; g++)
	{
		if (str == course[g].getCourseId())
		{
			a--;
			course[g].deletedata();
			course[g].takeInput();
			cout << "\nYou course has been updated ";
			break;
		}
	}
	if (a == 15)
	{
		cout << "\nId you want to update is not present in Student record";
	}
}
////////////////////////////////////////////////////////////DCM///////////////////////////////////////////////////////////////
void Student::showDCM()
{
	cout << "\n*************************************STUDENT DCM********************************************\n";
	int g = 0;
	cout << "\nName : " << getName();
	cout << "\tDegree : " << getDegree() << " " << getDicipline();
	cout << "\nRegistration No : " << getRegNo();
	cout << "\nSession : " << getSession();
	for (int n = 1; n < 9; n++)
	{
		for (int a = 0; a < 15; a++)
		{
			if (course[a].getSamester() == n)
			{
				cout << "\n\nSamester " << n << ":\n";
				cout << left;
				cout << "\n\t"<<setw(15)<<"Id"<<setw(35)<<"Name"<<setw(10)<<"CH"<<setw(10)<<"Marks"<<setw(10)<<"Grade\n";
				break;
			}
		}
		for (int s = 0; s < 15; s++)
		{
			if (course[s].getSamester() == n)
			{
				cout << "\t";
				course[s].toString();
				cout << "\n";
				g = s;
			}
		}
		if (course[g].getSamester() == n)
		{
			cout << "\n\t\t\t\t\t\t\t\tGPA = " << getSemesterGPA(n);
		}
	}
	cout<<"\n\t\t\t\t\t\t\t\tCGPA = "<<getCGPA();
}
////////////////////////////////////////////////////////////Similarity b/w ID's/////////////////////////////////////////////
void Student::CheckingTwosameIDs()
{
	bool flag = true;
	int k = 0;
	int l = 0;
	for (int i = 0; i < 15; i++)
	{
		if (course[i].getCourseId() == course[i + 1].getCourseId())
		{
			int k = i;
			int l = i + 1;
			flag = false;
		}
		if (flag == false)
			break;
	}
	if (flag == false)
	{
		cout << "\nYou have entered two same courses id's.Please eneter again ";
		course[l].takeInput();
	//	CheckingTwosameIDs();
	}

}
////////////////////////////////////////////////////////////course output//////////////////////////////////////////////////
void Student::courseOutput()
{
	cout << "\n*********************************COURSE OUTPUT********************************************\n";
	cout << left;
	cout << "\n   " << setw(15) << "Id" << setw(35) << "Name" << setw(10) << "CH" << setw(10) << "Marks" << setw(10) << "Grade\n\n";
	for (int f = 0; f < 15; f++)
	{
		string j = course[f].getCourseId();
		if (course[f].getCourseId()[0] != '\0')
		{
			course[f].toString();
			cout << "\n";
			cout << "   ";
		}
		else
			if (j[0] != '\0')
			{
				course[f].toString();
				cout << "\n";
				cout << "   ";
		    }
	}
}
////////////////////////////////////////////////////////////Opeartions/////////////////////////////////////////////////////
void Student::Operations()
{
	int num = 0;
	char str;
	    cout<<"..............................Choose the following options.......................\nYou must Perform First two operation to avoid errors :";
		cout << "\nChoose 1 to set basic information of student\n";
		cout << "Choose 2 to add new course for the student\n";
		cout << "Choose 3 to edit a course]\n";
		cout << "Choose 4 to delete a course\n";
		cout << "Choose 5 to view all course\n";
		cout << "Choose 6 to view CGPA\n";
		cout << "Choose 7 to view detailed marks sheet\n\n";
		for (int i = 0; i < 7; i++)
		{
			cout << "\nEnter the operation you want to select : ";
			cin >> num;
			switch (num)
			{
			case 1:
				basicInput();
				break;
			case 2:
				takeCourseinput();
				break;
			case 3:
				update();
				break;
			case 4:
				deleteCourse();
				break;
			case 5:
				courseOutput();
				break;
			case 6:
				getCGPA();
				break;
			case 7:
				showDCM();
				break;
			default:
				cout << "\nYou have entered wrong value";
				break;
			}
			cout << "\nPress any key to perform futher operation OR 'N' to not perform operations :  ";
			cin >> str;
			if (str == 'N' || str == 'n')
				break;
		}
}
int main()
{
	Student s1;
	s1.Operations();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
