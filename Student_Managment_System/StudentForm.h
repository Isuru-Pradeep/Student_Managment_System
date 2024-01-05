#pragma once
#include "MainForm.h"
#include "StudentForm.h"
#include "User.h"
#include "AcademicForm.h"
#include "MyForm.h"
#include "User.h"

namespace Student_Managment_System {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for StudentForm
	/// </summary>
	public ref class StudentForm : public System::Windows::Forms::Form
	{
	public:
		String^ em;
	public:
		StudentForm(User ^student)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
	
			startComboBox();
			welcomeBanner(student);
			em = student->email;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~StudentForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Button^ okButton;
	private: System::Windows::Forms::Label^ welcomeLabel;
	private: System::Windows::Forms::Label^ label3;


	protected:


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->okButton = (gcnew System::Windows::Forms::Button());
			this->welcomeLabel = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(-1, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(879, 55);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Student\'s Dashboard";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Click += gcnew System::EventHandler(this, &StudentForm::label1_Click);
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(12, 142);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(148, 55);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Register for";
			this->label2->Click += gcnew System::EventHandler(this, &StudentForm::label2_Click_1);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(212, 149);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 24);
			this->comboBox1->TabIndex = 2;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &StudentForm::comboBox1_SelectedIndexChanged);
			// 
			// okButton
			// 
			this->okButton->Location = System::Drawing::Point(258, 229);
			this->okButton->Name = L"okButton";
			this->okButton->Size = System::Drawing::Size(75, 23);
			this->okButton->TabIndex = 3;
			this->okButton->Text = L"OK";
			this->okButton->UseVisualStyleBackColor = true;
			this->okButton->Click += gcnew System::EventHandler(this, &StudentForm::okButton_Click);
			// 
			// welcomeLabel
			// 
			this->welcomeLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->welcomeLabel->Location = System::Drawing::Point(207, 77);
			this->welcomeLabel->Name = L"welcomeLabel";
			this->welcomeLabel->Size = System::Drawing::Size(148, 55);
			this->welcomeLabel->TabIndex = 4;
			this->welcomeLabel->Text = L"...";
			this->welcomeLabel->Click += gcnew System::EventHandler(this, &StudentForm::label3_Click);
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(12, 77);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(148, 55);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Welcome";
			this->label3->Click += gcnew System::EventHandler(this, &StudentForm::label3_Click_1);
			// 
			// StudentForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(877, 452);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->welcomeLabel);
			this->Controls->Add(this->okButton);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"StudentForm";
			this->Text = L"StudentForm";
			this->Load += gcnew System::EventHandler(this, &StudentForm::StudentForm_Load);
			this->ResumeLayout(false);

		}

		Void update() {
			try
			{

				String^ selectedCourse = comboBox1->SelectedItem->ToString();
				String^ email = em;

				String^ connString = "Data Source=ISURU-PRADEEP;Initial Catalog=mysampledatabase;Integrated Security=True";
				SqlConnection^ sqlConn = gcnew SqlConnection(connString);
			
				sqlConn->Open();

				String^ sqlQueryUser = "SELECT [CId] FROM [dbo].[Cource] WHERE [couse_name]=@selectedCourse;";
				SqlCommand command(sqlQueryUser, sqlConn);
				command.Parameters->AddWithValue("@selectedCourse", selectedCourse);



				SqlDataReader^ reader = command.ExecuteReader();
				if (reader->Read())
				{
					int^ courseid = reader->GetInt32(0);

					SqlCommand^ cmd1 = gcnew SqlCommand("UPDATE [dbo].[User] SET [c_id]=@courseid WHERE [email]=@email;", sqlConn);

					cmd1->Parameters->Add("@courseid", SqlDbType::VarChar)->Value = courseid;
					cmd1->Parameters->Add("@email", SqlDbType::VarChar)->Value = email;
					reader->Close();
					cmd1->ExecuteNonQuery();
					sqlConn->Close();
					MessageBox::Show("Student data enterd", "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);
				}
				else
				{
					MessageBox::Show("Student data enterd halfly", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
				sqlConn->Close();

			}
			catch (Exception^ exce)
			{
				MessageBox::Show(exce->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
#pragma endregion
	private:System::Void welcomeBanner(User^ student) {
		try
		{
			welcomeLabel->Text = student->name;
		}
		catch (Exception^ exce)
		{
			MessageBox::Show(exce->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	

	private:System::Void startComboBox() {
		try
		{
			// Define the connection string
			String^ connectionString = "Data Source=ISURU-PRADEEP;Initial Catalog=mysampledatabase;Integrated Security=True";

			// Create a SqlConnection object and open the connection
			SqlConnection^ connection = gcnew SqlConnection(connectionString);
			connection->Open();

			// Define the SELECT statement
			String^ selectQuery = "SELECT DISTINCT [couse_name] FROM [dbo].[Cource]";

			// Create a SqlCommand object and set its Connection and CommandText properties
			SqlCommand^ command = gcnew SqlCommand(selectQuery, connection);

			// Create a SqlDataReader object to execute the SELECT statement and read the results
			SqlDataReader^ reader = command->ExecuteReader();

			

			// Loop through the results and add each row to the ComboBox
			while (reader->Read())
			{
				comboBox1->Items->Add(reader->GetString(0)); // replace 0 with the column index of the value you want to display in the ComboBox
			}

			// Close the reader and the connection
			reader->Close();
			connection->Close();

		}
		catch (Exception^ exce)
		{
			MessageBox::Show(exce->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void StudentForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void wlcomeLabel_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	//public:System::String outputEmail(User^ student) {
		//student->email;

//	}

	private: System::Void okButton_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ selectedCourse = comboBox1->SelectedItem->ToString();

		update();
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
};



}