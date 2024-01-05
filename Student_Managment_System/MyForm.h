#pragma once

#include "User.h"

namespace Student_Managment_System {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	internal: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(373, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(118, 46);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Login";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(37, 123);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(86, 32);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Email";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(181, 132);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(639, 22);
			this->textBox1->TabIndex = 2;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(181, 185);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(639, 22);
			this->textBox2->TabIndex = 4;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(37, 176);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(138, 32);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Password";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(240, 266);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(102, 43);
			this->button1->TabIndex = 5;
			this->button1->Text = L"OK";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(486, 266);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(102, 43);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Cancel";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(869, 435);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	public:User^ user = nullptr;
		  User^ userAdmin = nullptr;
		  User^ userStudent = nullptr;
		  User^ userStaff = nullptr;
		  User^ useracademic = nullptr;


	protected: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ email = this->textBox1->Text;
		String^ password = this->textBox2->Text;

		if (email->Length == 0 || password->Length == 0)
		{
			MessageBox::Show("password or email is empty", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		try
		{
			String^ connString = "Data Source=ISURU-PRADEEP;Initial Catalog=mysampledatabase;Integrated Security=True";
			SqlConnection sqlConn(connString);
			sqlConn.Open();

			String^ sqlQueryUser= "SELECT * FROM [dbo].[User] WHERE email=@email AND password=@pwd;";
			SqlCommand command(sqlQueryUser, % sqlConn);
			command.Parameters->AddWithValue("@email", email);
			command.Parameters->AddWithValue("@pwd", password);

			SqlDataReader^ reader = command.ExecuteReader();
			if (reader->Read())
			{
				user = gcnew User;
				user->id = reader->GetInt32(0);
				user->name = reader->GetString(1);
				user->email = reader->GetString(2);
				user->phone = reader->GetString(3);
				user->address = reader->GetString(4);
				user->password = reader->GetString(5);
				user->actor = reader->GetString(6);

				this->Close();
				if (user->actor == "admin")
				{
					userAdmin = gcnew User;
					userAdmin->id = user->id;
					userAdmin->name = user->name;
					userAdmin->email = user->email;
					userAdmin->phone = user->phone;
					userAdmin->address = user->address;
					userAdmin->password = user->password;
				}
				if (user->actor == "student")
				{
					userStudent = gcnew Student;
					userStudent->id = user->id;
					userStudent->name = user->name;
					userStudent->email = user->email;
					userStudent->phone = user->phone;
					userStudent->address = user->address;
					userStudent->password = user->password;

				}
				if (user->actor == "staff")
				{
					userStaff = gcnew User;
					userStaff->id = user->id;
					userStaff->name = user->name;
					userStaff->email = user->email;
					userStaff->phone = user->phone;
					userStaff->address = user->address;
					userStaff->password = reader->GetString(5);


				}
				if (user->actor == "academic")
				{
					useracademic = gcnew User;
					useracademic->id = user->id;
					useracademic->name = user->name;
					useracademic->email = user->email;
					useracademic->phone = user->phone;
					useracademic->address = user->address;
					useracademic->password = user->password;
				}
			}
			else {
				MessageBox::Show("Email or password is incorrect", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);

			}
			

		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	protected: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
};
}