#pragma once
#include "User.h"
#include "MyForm.h"

namespace Student_Managment_System {


	
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AcademicForm
	/// </summary>
	public ref class AcademicForm : public System::Windows::Forms::Form
	{

	public:
		String^ connectionString = "Data Source=ISURU-PRADEEP;Initial Catalog=mysampledatabase;Integrated Security=True";
	public:
		AcademicForm(User^ academic)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			studentUploadAcademic();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AcademicForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:

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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
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
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(1032, 55);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Academic\'s Dashboard";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Click += gcnew System::EventHandler(this, &AcademicForm::label1_Click_1);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 81);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(1032, 428);
			this->dataGridView1->TabIndex = 2;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &AcademicForm::dataGridView1_CellContentClick);
			// 
			// AcademicForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1056, 538);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label1);
			this->Name = L"AcademicForm";
			this->Text = L"AcademicForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}

	
	private:System::Void studentUploadAcademic() {
		try
		{
			//String^ connectionString = "Data Source=ISURU-PRADEEP;Initial Catalog=mysampledatabase;Integrated Security=True";

			// Create a SqlConnection object and open the connection
			SqlConnection^ connection = gcnew SqlConnection(connectionString);
			connection->Open();

			// Define the SQL query to retrieve data from the table
			String^ query = "SELECT [dbo].[User].[Id],[dbo].[User].[name],[dbo].[User].[email],[dbo].[User].[phone],[dbo].[User].[address] FROM[dbo].[User] INNER JOIN[dbo].[Cource] ON[dbo].[User].[c_id] = [dbo].[Cource].[CId]; ";
			

			// Create a SqlCommand object and set its Connection and CommandText properties
			SqlCommand^ command = gcnew SqlCommand(query, connection);

			// Create a SqlDataAdapter object and set its SelectCommand property
			SqlDataAdapter^ adapter1 = gcnew SqlDataAdapter();
			adapter1->SelectCommand = command;

			// Create a DataTable object to store the retrieved data
			DataTable^ table = gcnew DataTable();

			// Fill the DataTable with data from the database
			adapter1->Fill(table);

			// Set the ReadOnly property of the DataGridView to true
			dataGridView1->ReadOnly = true;

			// Bind the DataTable to the DataGridView control
			dataGridView1->DataSource = table;

			// Close the connection
			connection->Close();


		}
		catch (Exception^ exc)
		{
			MessageBox::Show(exc->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

	}

	};


}
