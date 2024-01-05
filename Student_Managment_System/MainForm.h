#pragma once
#include "User.h"
#include"MyForm.h"

namespace Student_Managment_System {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		String^ connectionString = "Data Source=ISURU-PRADEEP;Initial Catalog=mysampledatabase;Integrated Security=True";

		MainForm(User ^admin)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			studentUpload();
			startComboBox();
			courseUpload();
			label4->Enabled = false;
			comboBox1->Enabled = false;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::Panel^ panel1;


	private: System::Windows::Forms::TabPage^ tabPage2;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::TextBox^ phoneBox;

	private: System::Windows::Forms::Label^ phone;

	private: System::Windows::Forms::TextBox^ emailBox;

	private: System::Windows::Forms::Label^ email;

	private: System::Windows::Forms::TextBox^ nameBox;
	private: System::Windows::Forms::Label^ name;
	private: System::Windows::Forms::Label^ label;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ passwordBox;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ addressBox;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::RadioButton^ adminButton;
	private: System::Windows::Forms::RadioButton^ academicButton;


	private: System::Windows::Forms::RadioButton^ staffButton;

	private: System::Windows::Forms::RadioButton^ studentButton;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Button^ createButton;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::Button^ refresh2;
	private: System::Windows::Forms::TabPage^ tabPage4;
	private: System::Windows::Forms::TextBox^ createCourseTextBox;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ courseDesriptionTextBox;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label7;

















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
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->academicButton = (gcnew System::Windows::Forms::RadioButton());
			this->adminButton = (gcnew System::Windows::Forms::RadioButton());
			this->studentButton = (gcnew System::Windows::Forms::RadioButton());
			this->staffButton = (gcnew System::Windows::Forms::RadioButton());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->createButton = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->passwordBox = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->addressBox = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->phoneBox = (gcnew System::Windows::Forms::TextBox());
			this->phone = (gcnew System::Windows::Forms::Label());
			this->emailBox = (gcnew System::Windows::Forms::TextBox());
			this->email = (gcnew System::Windows::Forms::Label());
			this->nameBox = (gcnew System::Windows::Forms::TextBox());
			this->name = (gcnew System::Windows::Forms::Label());
			this->label = (gcnew System::Windows::Forms::Label());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->courseDesriptionTextBox = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->createCourseTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->refresh2 = (gcnew System::Windows::Forms::Button());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->panel1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->tabPage4->SuspendLayout();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Location = System::Drawing::Point(12, 79);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1173, 601);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->panel1);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1165, 572);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Create Accounts";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->groupBox1);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->createButton);
			this->panel1->Controls->Add(this->comboBox1);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->passwordBox);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->addressBox);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->phoneBox);
			this->panel1->Controls->Add(this->phone);
			this->panel1->Controls->Add(this->emailBox);
			this->panel1->Controls->Add(this->email);
			this->panel1->Controls->Add(this->nameBox);
			this->panel1->Controls->Add(this->name);
			this->panel1->Controls->Add(this->label);
			this->panel1->Location = System::Drawing::Point(18, 18);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1131, 526);
			this->panel1->TabIndex = 0;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->academicButton);
			this->groupBox1->Controls->Add(this->adminButton);
			this->groupBox1->Controls->Add(this->studentButton);
			this->groupBox1->Controls->Add(this->staffButton);
			this->groupBox1->Location = System::Drawing::Point(177, 350);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(703, 53);
			this->groupBox1->TabIndex = 20;
			this->groupBox1->TabStop = false;
			this->groupBox1->Enter += gcnew System::EventHandler(this, &MainForm::groupBox1_Enter);
			// 
			// academicButton
			// 
			this->academicButton->AutoSize = true;
			this->academicButton->Location = System::Drawing::Point(542, 21);
			this->academicButton->Name = L"academicButton";
			this->academicButton->Size = System::Drawing::Size(88, 20);
			this->academicButton->TabIndex = 16;
			this->academicButton->TabStop = true;
			this->academicButton->Text = L"academic";
			this->academicButton->UseVisualStyleBackColor = true;
			this->academicButton->CheckedChanged += gcnew System::EventHandler(this, &MainForm::academicButton_CheckedChanged);
			// 
			// adminButton
			// 
			this->adminButton->AutoSize = true;
			this->adminButton->Location = System::Drawing::Point(62, 21);
			this->adminButton->Name = L"adminButton";
			this->adminButton->Size = System::Drawing::Size(65, 20);
			this->adminButton->TabIndex = 13;
			this->adminButton->TabStop = true;
			this->adminButton->Text = L"admin";
			this->adminButton->UseVisualStyleBackColor = true;
			this->adminButton->CheckedChanged += gcnew System::EventHandler(this, &MainForm::radioButton1_CheckedChanged);
			// 
			// studentButton
			// 
			this->studentButton->AutoSize = true;
			this->studentButton->Location = System::Drawing::Point(229, 21);
			this->studentButton->Name = L"studentButton";
			this->studentButton->Size = System::Drawing::Size(71, 20);
			this->studentButton->TabIndex = 14;
			this->studentButton->TabStop = true;
			this->studentButton->Text = L"student";
			this->studentButton->UseVisualStyleBackColor = true;
			this->studentButton->CheckedChanged += gcnew System::EventHandler(this, &MainForm::studentButton_CheckedChanged);
			// 
			// staffButton
			// 
			this->staffButton->AutoSize = true;
			this->staffButton->Location = System::Drawing::Point(369, 21);
			this->staffButton->Name = L"staffButton";
			this->staffButton->Size = System::Drawing::Size(52, 20);
			this->staffButton->TabIndex = 15;
			this->staffButton->TabStop = true;
			this->staffButton->Text = L"staff";
			this->staffButton->UseVisualStyleBackColor = true;
			this->staffButton->CheckedChanged += gcnew System::EventHandler(this, &MainForm::staffButton_CheckedChanged);
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(5, 404);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(166, 38);
			this->label4->TabIndex = 19;
			this->label4->Text = L"Cource";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label4->Click += gcnew System::EventHandler(this, &MainForm::label4_Click);
			// 
			// createButton
			// 
			this->createButton->BackColor = System::Drawing::Color::IndianRed;
			this->createButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->createButton->Location = System::Drawing::Point(712, 463);
			this->createButton->Name = L"createButton";
			this->createButton->Size = System::Drawing::Size(168, 50);
			this->createButton->TabIndex = 18;
			this->createButton->Text = L"Create";
			this->createButton->UseVisualStyleBackColor = false;
			this->createButton->Click += gcnew System::EventHandler(this, &MainForm::createButton_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(177, 409);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(166, 33);
			this->comboBox1->TabIndex = 17;
			this->comboBox1->Text = L"Cource";
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MainForm::comboBox1_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(5, 350);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(166, 38);
			this->label1->TabIndex = 12;
			this->label1->Text = L"User Type";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// passwordBox
			// 
			this->passwordBox->Location = System::Drawing::Point(177, 311);
			this->passwordBox->Name = L"passwordBox";
			this->passwordBox->Size = System::Drawing::Size(703, 22);
			this->passwordBox->TabIndex = 11;
			this->passwordBox->TextChanged += gcnew System::EventHandler(this, &MainForm::passwordBox_TextChanged);
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(5, 300);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(166, 38);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Password";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// addressBox
			// 
			this->addressBox->Location = System::Drawing::Point(177, 255);
			this->addressBox->Name = L"addressBox";
			this->addressBox->Size = System::Drawing::Size(703, 22);
			this->addressBox->TabIndex = 9;
			this->addressBox->TextChanged += gcnew System::EventHandler(this, &MainForm::addressBox_TextChanged);
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(5, 244);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(166, 38);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Address";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// phoneBox
			// 
			this->phoneBox->Location = System::Drawing::Point(177, 201);
			this->phoneBox->Name = L"phoneBox";
			this->phoneBox->Size = System::Drawing::Size(703, 22);
			this->phoneBox->TabIndex = 7;
			this->phoneBox->TextChanged += gcnew System::EventHandler(this, &MainForm::phoneBox_TextChanged);
			// 
			// phone
			// 
			this->phone->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->phone->Location = System::Drawing::Point(5, 190);
			this->phone->Name = L"phone";
			this->phone->Size = System::Drawing::Size(166, 38);
			this->phone->TabIndex = 6;
			this->phone->Text = L"Phone";
			this->phone->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// emailBox
			// 
			this->emailBox->Location = System::Drawing::Point(177, 151);
			this->emailBox->Name = L"emailBox";
			this->emailBox->Size = System::Drawing::Size(703, 22);
			this->emailBox->TabIndex = 5;
			this->emailBox->TextChanged += gcnew System::EventHandler(this, &MainForm::emailBox_TextChanged);
			// 
			// email
			// 
			this->email->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->email->Location = System::Drawing::Point(5, 140);
			this->email->Name = L"email";
			this->email->Size = System::Drawing::Size(166, 38);
			this->email->TabIndex = 4;
			this->email->Text = L"Email";
			this->email->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->email->Click += gcnew System::EventHandler(this, &MainForm::label1_Click);
			// 
			// nameBox
			// 
			this->nameBox->Location = System::Drawing::Point(177, 95);
			this->nameBox->Name = L"nameBox";
			this->nameBox->Size = System::Drawing::Size(703, 22);
			this->nameBox->TabIndex = 3;
			this->nameBox->TextChanged += gcnew System::EventHandler(this, &MainForm::nameBox_TextChanged);
			// 
			// name
			// 
			this->name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->name->Location = System::Drawing::Point(5, 84);
			this->name->Name = L"name";
			this->name->Size = System::Drawing::Size(166, 38);
			this->name->TabIndex = 2;
			this->name->Text = L"Name";
			this->name->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label
			// 
			this->label->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label->BackColor = System::Drawing::Color::PowderBlue;
			this->label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label->Location = System::Drawing::Point(3, 0);
			this->label->Name = L"label";
			this->label->Size = System::Drawing::Size(1125, 41);
			this->label->TabIndex = 1;
			this->label->Text = L"Create Account";
			this->label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label->Click += gcnew System::EventHandler(this, &MainForm::label_Click);
			// 
			// tabPage4
			// 
			this->tabPage4->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->tabPage4->Controls->Add(this->label5);
			this->tabPage4->Controls->Add(this->courseDesriptionTextBox);
			this->tabPage4->Controls->Add(this->button2);
			this->tabPage4->Controls->Add(this->createCourseTextBox);
			this->tabPage4->Controls->Add(this->label6);
			this->tabPage4->Location = System::Drawing::Point(4, 25);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Size = System::Drawing::Size(1165, 572);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Create course";
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label5->Location = System::Drawing::Point(13, 109);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(166, 38);
			this->label5->TabIndex = 22;
			this->label5->Text = L"Desription";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label5->Click += gcnew System::EventHandler(this, &MainForm::label5_Click_1);
			// 
			// courseDesriptionTextBox
			// 
			this->courseDesriptionTextBox->Location = System::Drawing::Point(210, 125);
			this->courseDesriptionTextBox->Name = L"courseDesriptionTextBox";
			this->courseDesriptionTextBox->Size = System::Drawing::Size(703, 22);
			this->courseDesriptionTextBox->TabIndex = 21;
			this->courseDesriptionTextBox->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox1_TextChanged);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::LightCoral;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(720, 224);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(168, 50);
			this->button2->TabIndex = 19;
			this->button2->Text = L"Create";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MainForm::button2_Click);
			// 
			// createCourseTextBox
			// 
			this->createCourseTextBox->Location = System::Drawing::Point(210, 55);
			this->createCourseTextBox->Name = L"createCourseTextBox";
			this->createCourseTextBox->Size = System::Drawing::Size(703, 22);
			this->createCourseTextBox->TabIndex = 5;
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label6->Location = System::Drawing::Point(13, 44);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(166, 38);
			this->label6->TabIndex = 4;
			this->label6->Text = L"Create course";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label6->Click += gcnew System::EventHandler(this, &MainForm::label6_Click);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->button1);
			this->tabPage2->Controls->Add(this->dataGridView1);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1165, 572);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Show Account Details";
			this->tabPage2->UseVisualStyleBackColor = true;
			this->tabPage2->Click += gcnew System::EventHandler(this, &MainForm::tabPage2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(6, 543);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Refresh";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(3, 3);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(1156, 534);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MainForm::dataGridView1_CellContentClick_2);
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->refresh2);
			this->tabPage3->Controls->Add(this->dataGridView2);
			this->tabPage3->Location = System::Drawing::Point(4, 25);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(1165, 572);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Show Courses";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// refresh2
			// 
			this->refresh2->Location = System::Drawing::Point(3, 546);
			this->refresh2->Name = L"refresh2";
			this->refresh2->Size = System::Drawing::Size(75, 23);
			this->refresh2->TabIndex = 1;
			this->refresh2->Text = L"Refresh";
			this->refresh2->UseVisualStyleBackColor = true;
			this->refresh2->Click += gcnew System::EventHandler(this, &MainForm::refresh2_Click);
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(3, 3);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(1159, 537);
			this->dataGridView2->TabIndex = 0;
			this->dataGridView2->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MainForm::dataGridView2_CellContentClick);
			// 
			// label7
			// 
			this->label7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label7->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(16, 9);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(1165, 55);
			this->label7->TabIndex = 23;
			this->label7->Text = L"Admin\'s Dashboard";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label7->Click += gcnew System::EventHandler(this, &MainForm::label7_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1190, 692);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->tabPage3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

private:System::Void startComboBox() {
	try
	{
		// Define the connection string
		//String^ connectionString = "Data Source=ISURU-PRADEEP;Initial Catalog=mysampledatabase;Integrated Security=True";

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
	catch (Exception^exce)
	{
		MessageBox::Show(exce->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
protected:System::Void studentUpload() {
	try
	{
		//String^ connectionString = "Data Source=ISURU-PRADEEP;Initial Catalog=mysampledatabase;Integrated Security=True";

		// Create a SqlConnection object and open the connection
		SqlConnection^ connection = gcnew SqlConnection(connectionString);
		connection->Open();

		// Define the SQL query to retrieve data from the table
		String^ query = "SELECT * FROM [dbo].[User]";

		// Create a SqlCommand object and set its Connection and CommandText properties
		SqlCommand^ command = gcnew SqlCommand(query, connection);

		// Create a SqlDataAdapter object and set its SelectCommand property
		SqlDataAdapter^ adapter = gcnew SqlDataAdapter();
		adapter->SelectCommand = command;

		// Create a DataTable object to store the retrieved data
		DataTable^ table = gcnew DataTable();

		// Fill the DataTable with data from the database
		adapter->Fill(table);

		// Set the ReadOnly property of the DataGridView to true
		dataGridView1->ReadOnly = true;

		// Bind the DataTable to the DataGridView control
		dataGridView1->DataSource = table;

		// Close the connection
		connection->Close();

		
	}
	catch (Exception^exc)
	{
		MessageBox::Show(exc->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	
}

protected:System::Void courseUpload() {
	try
	{
		//String^ connectionString = "Data Source=ISURU-PRADEEP;Initial Catalog=mysampledatabase;Integrated Security=True";

		// Create a SqlConnection object and open the connection
		SqlConnection^ connection = gcnew SqlConnection(connectionString);
		connection->Open();

		// Define the SQL query to retrieve data from the table
		String^ query1 = "SELECT * FROM [dbo].[Cource]";

		// Create a SqlCommand object and set its Connection and CommandText properties
		SqlCommand^ command1 = gcnew SqlCommand(query1, connection);

		// Create a SqlDataAdapter object and set its SelectCommand property
		SqlDataAdapter^ adapter = gcnew SqlDataAdapter();
		adapter->SelectCommand = command1;

		// Create a DataTable object to store the retrieved data
		DataTable^ table1 = gcnew DataTable();

		// Fill the DataTable with data from the database
		adapter->Fill(table1);

		// Set the ReadOnly property of the DataGridView to true
		dataGridView1->ReadOnly = true;

		// Bind the DataTable to the DataGridView control
		dataGridView2->DataSource = table1;

		// Close the connection
		connection->Close();


	}
	catch (Exception^ exc)
	{
		MessageBox::Show(exc->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

}

	private: System::Void UserInfo_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void tabPage2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dataGridView1_CellContentClick_1(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		studentUpload();
		MessageBox::Show("Data Refreshed", "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	catch (Exception^e)
	{
		MessageBox::Show(e->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void dataGridView1_CellContentClick_2(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		//String^ userType = "admin";
		comboBox1->Enabled = false;
		label4->Enabled = false;
}
private: System::Void studentButton_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		//String^ userType = "student";
		comboBox1->Enabled = true;
		label4->Enabled = true;


}
private: System::Void staffButton_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	//String^ userType = "staff";
	comboBox1->Enabled = false;
	label4->Enabled = false;
}
private: System::Void academicButton_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	//String^ userType = "academic";
	comboBox1->Enabled = false;
	label4->Enabled = false;
}
private: System::Void createButton_Click(System::Object^ sender, System::EventArgs^ e) {
	if (String::IsNullOrEmpty(nameBox->Text)|| String::IsNullOrEmpty(emailBox->Text)|| String::IsNullOrEmpty(phoneBox->Text) || String::IsNullOrEmpty(addressBox->Text) || String::IsNullOrEmpty(passwordBox->Text)) {
		
		MessageBox::Show("Enter data to store", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else {
		if (comboBox1->Enabled)
		{
			if (comboBox1->SelectedIndex != -1)
			{

				try
				{
					String^ name = this->nameBox->Text;
					String^ email = this->emailBox->Text;
					String^ phone = this->phoneBox->Text;
					String^ address = this->addressBox->Text;
					String^ password = this->passwordBox->Text;
					String^ userType = "student";
					String^ selectedCourse = comboBox1->SelectedItem->ToString();

					String^ connString = "Data Source=ISURU-PRADEEP;Initial Catalog=mysampledatabase;Integrated Security=True";
					SqlConnection^ sqlConn = gcnew SqlConnection(connString);
					SqlCommand^ cmd = gcnew SqlCommand("INSERT INTO [dbo].[User] ([name],[email],[phone],[address],[password],[user_type]) VALUES (@name, @email, @phone, @address, @password, @userType);", sqlConn);

					cmd->Parameters->Add("@name", SqlDbType::VarChar)->Value = name;
					cmd->Parameters->Add("@email", SqlDbType::VarChar)->Value = email;
					cmd->Parameters->Add("@phone", SqlDbType::VarChar)->Value = phone;
					cmd->Parameters->Add("@address", SqlDbType::VarChar)->Value = address;
					cmd->Parameters->Add("@password", SqlDbType::VarChar)->Value = password;
					cmd->Parameters->Add("@userType", SqlDbType::VarChar)->Value = userType;

					sqlConn->Open();
					cmd->ExecuteNonQuery();
					sqlConn->Close();

					//SqlConnection^ sqlConn = gcnew SqlConnection(connString);
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
				catch (Exception^ excep)
				{
					MessageBox::Show(excep->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}

			}
			else
			{
				// no item is selected, show an error message
				MessageBox::Show("Please select an item from the ComboBox.");
			}
		}
		else
		{
			try
			{
				String^ name = this->nameBox->Text;
				String^ email = this->emailBox->Text;
				String^ phone = this->phoneBox->Text;
				String^ address = this->addressBox->Text;
				String^ password = this->passwordBox->Text;
				String^ userType = "NULL";
				/*if (adminButton->Enabled)
				{
					String^ userType = "admin";
				}
				else if (staffButton->Enabled)
				{
					String^ userType = "staff";
				}
				else if (academicButton->Enabled)
				{
					String^ userType = "academic";
				}*/
				for each (RadioButton ^ radioButton in groupBox1->Controls)
				{
					if (radioButton->Checked)
					{
						// This radio button is checked
						// Do something with the selected value
						userType = radioButton->Text;
						break;
					}
				}


				String^ connString = "Data Source=ISURU-PRADEEP;Initial Catalog=mysampledatabase;Integrated Security=True";
				SqlConnection^ sqlConn = gcnew SqlConnection(connString);
				SqlCommand^ cmd = gcnew SqlCommand("INSERT INTO [dbo].[User] ([name],[email],[phone],[address],[password],[user_type]) VALUES (@name, @email, @phone, @address, @password, @userType)", sqlConn);

				cmd->Parameters->Add("@name", SqlDbType::VarChar)->Value = name;
				cmd->Parameters->Add("@email", SqlDbType::VarChar)->Value = email;
				cmd->Parameters->Add("@phone", SqlDbType::VarChar)->Value = phone;
				cmd->Parameters->Add("@address", SqlDbType::VarChar)->Value = address;
				cmd->Parameters->Add("@password", SqlDbType::VarChar)->Value = password;
				cmd->Parameters->Add("@userType", SqlDbType::VarChar)->Value = userType;


				sqlConn->Open();
				cmd->ExecuteNonQuery();
				sqlConn->Close();

				MessageBox::Show("Data enterd", "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			catch (Exception^ excep)
			{
				MessageBox::Show(excep->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}



		}
		startComboBox();
	}

	

}
private: System::Void nameBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	// Check if the text field is empty
	if (String::IsNullOrEmpty(nameBox->Text))
	{
		// If the text field is empty, disable the button
		createButton->Enabled = false;
	}
	else
	{
		// If the text field is not empty, enable the button
		createButton->Enabled = true;
	}
}

private: System::Void emailBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (String::IsNullOrEmpty(emailBox->Text)|| String::IsNullOrEmpty(nameBox->Text))
	{
		// If the text field is empty, disable the button
		createButton->Enabled = false;
	}
	else
	{
		// If the text field is not empty, enable the button
		createButton->Enabled = true;
	}
}
private: System::Void phoneBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (String::IsNullOrEmpty(phoneBox->Text)|| String::IsNullOrEmpty(emailBox->Text) || String::IsNullOrEmpty(nameBox->Text))
	{
		// If the text field is empty, disable the button
		createButton->Enabled = false;
	}
	else
	{
		// If the text field is not empty, enable the button
		createButton->Enabled = true;
	}
}
private: System::Void addressBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (String::IsNullOrEmpty(addressBox->Text)|| String::IsNullOrEmpty(phoneBox->Text) || String::IsNullOrEmpty(emailBox->Text) || String::IsNullOrEmpty(nameBox->Text))
	{
		// If the text field is empty, disable the button
		createButton->Enabled = false;
	}
	else
	{
		// If the text field is not empty, enable the button
		createButton->Enabled = true;
	}
}
private: System::Void passwordBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (String::IsNullOrEmpty(passwordBox->Text)|| String::IsNullOrEmpty(addressBox->Text) || String::IsNullOrEmpty(phoneBox->Text) || String::IsNullOrEmpty(emailBox->Text) || String::IsNullOrEmpty(nameBox->Text))
	{
		// If the text field is empty, disable the button
		createButton->Enabled = false;
	}
	else
	{
		// If the text field is not empty, enable the button
		createButton->Enabled = true;
	}
}

private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dataGridView2_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void refresh2_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		courseUpload();
		MessageBox::Show("Data Refreshed", "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	catch (Exception^ e)
	{
		MessageBox::Show(e->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (String::IsNullOrEmpty(createCourseTextBox->Text)|| String::IsNullOrEmpty(courseDesriptionTextBox->Text)) {
		MessageBox::Show("Enter data to store", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else {
		try
		{
			String^ createCourse = this->createCourseTextBox->Text;
			String^ courseDesription = this->courseDesriptionTextBox->Text;

			String^ connString = "Data Source=ISURU-PRADEEP;Initial Catalog=mysampledatabase;Integrated Security=True";
			SqlConnection^ sqlConn = gcnew SqlConnection(connString);
			SqlCommand^ cmd3 = gcnew SqlCommand("INSERT INTO [dbo].[Cource] ( [couse_name],[desription]) VALUES (@createCourse, @courseDesription)", sqlConn);

			cmd3->Parameters->Add("@createCourse", SqlDbType::VarChar)->Value = createCourse;
			cmd3->Parameters->Add("@courseDesription", SqlDbType::VarChar)->Value = courseDesription;

			sqlConn->Open();
			cmd3->ExecuteNonQuery();
			sqlConn->Close();

			MessageBox::Show("Data entered", "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		catch (Exception^ except)
		{
			MessageBox::Show(except->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
