#include "MyForm.h"
#include "MainForm.h"
#include "StudentForm.h"
#include "StaffForm.h"
#include"AcademicForm.h"

using namespace System;
using namespace System::Windows::Forms;

void main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Student_Managment_System::MyForm myform;


	User^ user = nullptr;
	myform.ShowDialog();
	user = myform.user;
	
	if (user!= nullptr)
	{
		if (user->actor == "admin") {
			User^ admin = myform.userAdmin;
			Student_Managment_System::MainForm mainForm(admin);
			Application::Run(% mainForm);
		}
		else if (user->actor == "student")
		{
			User^ student = myform.userStudent;
			student->name = user->name;
			student->email = user->email;


			Student_Managment_System::StudentForm studentForm(student);
			Application::Run(% studentForm);
		}
		else if (user->actor == "staff")
		{
			User^ staff = myform.userStaff;
			Student_Managment_System::StaffForm staffForm(staff);
			Application::Run(% staffForm);

		}
		else if (user->actor == "academic")
		{
			User^ academic = myform.userStudent;
			Student_Managment_System::AcademicForm academicForm(academic);
			Application::Run(% academicForm);

		}
		else {
			MessageBox::Show("Authentication Canceled",
				"Program.cpp", MessageBoxButtons::OK);
		}
	}

	
}








