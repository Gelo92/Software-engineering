#pragma once
#include <iostream>
#include <fstream>
#include <sstream>  // for string streams
#include <string>
#include <chrono>   //for timer
#include <cstdio>    //for timer
#include <ctime>    //for timer
#include<stdio.h>
#include<ctype.h>

namespace Moodle {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;       //database library or extention


	/// <summary>
	/// Summary for Moodle
	/// </summary>
	public ref class Moodle : public System::Windows::Forms::Form
	{
	public:
		Moodle(void)
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
		~Moodle()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ MoodlePanel;
	protected:

	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ Password;

	private: System::Windows::Forms::TextBox^ UserID;

	private: System::Windows::Forms::Label^ UserPassword;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Panel^ StudentPanel;
	private: System::Windows::Forms::Button^ LogOut;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ AdministratorPanel;

	private: System::Windows::Forms::Button^ LogOutAdministrator;
	private: System::Windows::Forms::Label^ Administrator;
	private: System::Windows::Forms::Panel^ LecturePanel;
	private: System::Windows::Forms::Button^ LectureLogOut;
	private: System::Windows::Forms::Label^ Lecture;
	private: System::Windows::Forms::Panel^ admin1;


	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ deleteuserbtn;
	private: System::Windows::Forms::Button^ updateuserbtn;
	private: System::Windows::Forms::Button^ adduserbtn;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ addusersubmit;
	private: System::Windows::Forms::ComboBox^ course;
	private: System::Windows::Forms::ComboBox^ usertype;
	private: System::Windows::Forms::TextBox^ mobileno;
	private: System::Windows::Forms::TextBox^ surname;
	private: System::Windows::Forms::TextBox^ firstname;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ addprojectsbtn;
	private: System::Windows::Forms::Button^ deleteprojectsbtn;
	private: System::Windows::Forms::Button^ deletepracticalbtn;
	private: System::Windows::Forms::Button^ practicalbtn;
	private: System::Windows::Forms::Panel^ admin5;
	private: System::Windows::Forms::Panel^ admin6;
	private: System::Windows::Forms::Panel^ admin7;
	private: System::Windows::Forms::Label^ label40;
	private: System::Windows::Forms::Button^ button9;




	private: System::Windows::Forms::TextBox^ textBox18;



	private: System::Windows::Forms::Label^ label44;

	private: System::Windows::Forms::Label^ label34;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::ComboBox^ comboBox9;

	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::TextBox^ textBox15;

	private: System::Windows::Forms::Label^ label36;
	private: System::Windows::Forms::Label^ label37;
	private: System::Windows::Forms::Label^ label38;
	private: System::Windows::Forms::Label^ label39;
	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::Button^ button7;




	private: System::Windows::Forms::TextBox^ textBox12;




	private: System::Windows::Forms::Label^ label33;
	private: System::Windows::Forms::Panel^ admin3;
	private: System::Windows::Forms::Panel^ admin4;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Button^ button6;


	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox9;

	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Button^ button5;




	private: System::Windows::Forms::TextBox^ textBox6;




	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Panel^ admin2;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Button^ button4;


	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;


	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;

private: System::Windows::Forms::Button^ fetchbtn;
private: System::Windows::Forms::TextBox^ textBox16;
private: System::Windows::Forms::Label^ lebel;
private: System::Windows::Forms::ComboBox^ comboBox1;
private: System::Windows::Forms::Panel^ student1;

private: System::Windows::Forms::Panel^ panel2;
private: System::Windows::Forms::Button^ studentpersonalbtn;
private: System::Windows::Forms::Button^ timetablebtn;
private: System::Windows::Forms::Button^ button10;
private: System::Windows::Forms::Button^ studentprojectbtn;
private: System::Windows::Forms::Button^ studentpracbtn;

private: System::Windows::Forms::Label^ label19;
private: System::Windows::Forms::Label^ label18;
private: System::Windows::Forms::Button^ button11;
private: System::Windows::Forms::RadioButton^ radioButton2;
private: System::Windows::Forms::RadioButton^ radioButton1;
private: System::Windows::Forms::ComboBox^ comboBox3;
private: System::Windows::Forms::ComboBox^ comboBox2;
private: System::Windows::Forms::Label^ label17;
private: System::Windows::Forms::Label^ label12;
private: System::Windows::Forms::Panel^ student2;


private: System::Windows::Forms::Button^ button12;
private: System::Windows::Forms::Label^ label29;
private: System::Windows::Forms::DataGridView^ dataGridView1;
private: System::Windows::Forms::Panel^ student3;

private: System::Windows::Forms::DataGridView^ dataGridView2;
private: System::Windows::Forms::Button^ button13;
private: System::Windows::Forms::Label^ label11;
private: System::Windows::Forms::Label^ label20;
private: System::Windows::Forms::TextBox^ textBox4;



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
			this->MoodlePanel = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Password = (gcnew System::Windows::Forms::TextBox());
			this->UserID = (gcnew System::Windows::Forms::TextBox());
			this->UserPassword = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->StudentPanel = (gcnew System::Windows::Forms::Panel());
			this->student3 = (gcnew System::Windows::Forms::Panel());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->student2 = (gcnew System::Windows::Forms::Panel());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->student1 = (gcnew System::Windows::Forms::Panel());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->studentpersonalbtn = (gcnew System::Windows::Forms::Button());
			this->timetablebtn = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->studentprojectbtn = (gcnew System::Windows::Forms::Button());
			this->studentpracbtn = (gcnew System::Windows::Forms::Button());
			this->LogOut = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->LecturePanel = (gcnew System::Windows::Forms::Panel());
			this->LectureLogOut = (gcnew System::Windows::Forms::Button());
			this->Lecture = (gcnew System::Windows::Forms::Label());
			this->AdministratorPanel = (gcnew System::Windows::Forms::Panel());
			this->admin1 = (gcnew System::Windows::Forms::Panel());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->addusersubmit = (gcnew System::Windows::Forms::Button());
			this->course = (gcnew System::Windows::Forms::ComboBox());
			this->usertype = (gcnew System::Windows::Forms::ComboBox());
			this->mobileno = (gcnew System::Windows::Forms::TextBox());
			this->surname = (gcnew System::Windows::Forms::TextBox());
			this->firstname = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->admin2 = (gcnew System::Windows::Forms::Panel());
			this->fetchbtn = (gcnew System::Windows::Forms::Button());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->lebel = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->admin3 = (gcnew System::Windows::Forms::Panel());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->admin4 = (gcnew System::Windows::Forms::Panel());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->admin5 = (gcnew System::Windows::Forms::Panel());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->admin6 = (gcnew System::Windows::Forms::Panel());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->comboBox9 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->admin7 = (gcnew System::Windows::Forms::Panel());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->addprojectsbtn = (gcnew System::Windows::Forms::Button());
			this->deleteprojectsbtn = (gcnew System::Windows::Forms::Button());
			this->deletepracticalbtn = (gcnew System::Windows::Forms::Button());
			this->practicalbtn = (gcnew System::Windows::Forms::Button());
			this->deleteuserbtn = (gcnew System::Windows::Forms::Button());
			this->LogOutAdministrator = (gcnew System::Windows::Forms::Button());
			this->updateuserbtn = (gcnew System::Windows::Forms::Button());
			this->adduserbtn = (gcnew System::Windows::Forms::Button());
			this->Administrator = (gcnew System::Windows::Forms::Label());
			this->MoodlePanel->SuspendLayout();
			this->StudentPanel->SuspendLayout();
			this->student3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->student2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->student1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->LecturePanel->SuspendLayout();
			this->AdministratorPanel->SuspendLayout();
			this->admin1->SuspendLayout();
			this->admin2->SuspendLayout();
			this->admin3->SuspendLayout();
			this->admin4->SuspendLayout();
			this->admin5->SuspendLayout();
			this->admin6->SuspendLayout();
			this->admin7->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// MoodlePanel
			// 
			this->MoodlePanel->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->MoodlePanel->Controls->Add(this->label2);
			this->MoodlePanel->Controls->Add(this->button3);
			this->MoodlePanel->Controls->Add(this->button2);
			this->MoodlePanel->Controls->Add(this->button1);
			this->MoodlePanel->Controls->Add(this->Password);
			this->MoodlePanel->Controls->Add(this->UserID);
			this->MoodlePanel->Controls->Add(this->UserPassword);
			this->MoodlePanel->Controls->Add(this->label1);
			this->MoodlePanel->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->MoodlePanel->Location = System::Drawing::Point(23, 24);
			this->MoodlePanel->Name = L"MoodlePanel";
			this->MoodlePanel->Size = System::Drawing::Size(750, 650);
			this->MoodlePanel->TabIndex = 0;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(284, 174);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(160, 31);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Login Page";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(309, 413);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(100, 23);
			this->button3->TabIndex = 6;
			this->button3->Text = L"Exit";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Moodle::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(309, 383);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 23);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Reset";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Moodle::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(309, 354);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 23);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Login";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Moodle::button1_Click);
			// 
			// Password
			// 
			this->Password->Location = System::Drawing::Point(309, 314);
			this->Password->Name = L"Password";
			this->Password->Size = System::Drawing::Size(100, 20);
			this->Password->TabIndex = 3;
			// 
			// UserID
			// 
			this->UserID->Location = System::Drawing::Point(309, 278);
			this->UserID->Name = L"UserID";
			this->UserID->Size = System::Drawing::Size(100, 20);
			this->UserID->TabIndex = 2;
			// 
			// UserPassword
			// 
			this->UserPassword->AutoSize = true;
			this->UserPassword->Location = System::Drawing::Point(306, 301);
			this->UserPassword->Name = L"UserPassword";
			this->UserPassword->Size = System::Drawing::Size(75, 13);
			this->UserPassword->TabIndex = 1;
			this->UserPassword->Text = L"UserPassword";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(306, 262);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(40, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"UserID";
			// 
			// StudentPanel
			// 
			this->StudentPanel->Controls->Add(this->student3);
			this->StudentPanel->Controls->Add(this->student2);
			this->StudentPanel->Controls->Add(this->student1);
			this->StudentPanel->Controls->Add(this->panel2);
			this->StudentPanel->Controls->Add(this->label3);
			this->StudentPanel->Location = System::Drawing::Point(22, 24);
			this->StudentPanel->Name = L"StudentPanel";
			this->StudentPanel->Size = System::Drawing::Size(750, 650);
			this->StudentPanel->TabIndex = 8;
			// 
			// student3
			// 
			this->student3->Controls->Add(this->dataGridView2);
			this->student3->Controls->Add(this->button13);
			this->student3->Controls->Add(this->label11);
			this->student3->Location = System::Drawing::Point(182, 99);
			this->student3->Name = L"student3";
			this->student3->Size = System::Drawing::Size(551, 475);
			this->student3->TabIndex = 6;
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(4, 37);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(544, 396);
			this->dataGridView2->TabIndex = 9;
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(191, 440);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(112, 23);
			this->button13->TabIndex = 8;
			this->button13->Text = L"cancel";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &Moodle::button13_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(157, 12);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(169, 21);
			this->label11->TabIndex = 2;
			this->label11->Text = L"Booked Practicals";
			// 
			// student2
			// 
			this->student2->Controls->Add(this->label20);
			this->student2->Controls->Add(this->textBox4);
			this->student2->Controls->Add(this->dataGridView1);
			this->student2->Controls->Add(this->button12);
			this->student2->Controls->Add(this->label29);
			this->student2->Location = System::Drawing::Point(181, 99);
			this->student2->Name = L"student2";
			this->student2->Size = System::Drawing::Size(551, 475);
			this->student2->TabIndex = 5;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(111, 410);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(72, 15);
			this->label20->TabIndex = 11;
			this->label20->Text = L"Project ID";
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(191, 408);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(112, 21);
			this->textBox4->TabIndex = 10;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(4, 46);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(544, 355);
			this->dataGridView1->TabIndex = 9;
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(309, 406);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(105, 23);
			this->button12->TabIndex = 8;
			this->button12->Text = L"Add Project";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &Moodle::button12_Click);
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label29->Location = System::Drawing::Point(157, 12);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(159, 21);
			this->label29->TabIndex = 2;
			this->label29->Text = L"Project Selection";
			// 
			// student1
			// 
			this->student1->Controls->Add(this->label19);
			this->student1->Controls->Add(this->label18);
			this->student1->Controls->Add(this->button11);
			this->student1->Controls->Add(this->radioButton2);
			this->student1->Controls->Add(this->radioButton1);
			this->student1->Controls->Add(this->comboBox3);
			this->student1->Controls->Add(this->comboBox2);
			this->student1->Controls->Add(this->label17);
			this->student1->Controls->Add(this->label12);
			this->student1->Location = System::Drawing::Point(181, 99);
			this->student1->Name = L"student1";
			this->student1->Size = System::Drawing::Size(554, 475);
			this->student1->TabIndex = 4;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(142, 182);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(77, 13);
			this->label19->TabIndex = 10;
			this->label19->Text = L"Time Selection";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(141, 143);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(78, 13);
			this->label18->TabIndex = 9;
			this->label18->Text = L"DayOfPractical";
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(190, 419);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(75, 23);
			this->button11->TabIndex = 8;
			this->button11->Text = L"Submit";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &Moodle::button11_Click);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(255, 218);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(82, 17);
			this->radioButton2->TabIndex = 7;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"14:10-17:35";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(144, 216);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(82, 17);
			this->radioButton1->TabIndex = 6;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"08:40-11:20";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Monday", L"Wednesday", L"Friday" });
			this->comboBox3->Location = System::Drawing::Point(255, 143);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(121, 21);
			this->comboBox3->TabIndex = 5;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"CO1", L"CO2", L"CO3", L"CO4", L"SS1", L"SS2",
					L"DSP1", L"DSP2"
			});
			this->comboBox2->Location = System::Drawing::Point(255, 92);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 21);
			this->comboBox2->TabIndex = 4;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(141, 95);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(43, 13);
			this->label17->TabIndex = 3;
			this->label17->Text = L"Prac ID";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(130, 47);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(169, 21);
			this->label12->TabIndex = 2;
			this->label12->Text = L"Practical Booking";
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->studentpersonalbtn);
			this->panel2->Controls->Add(this->timetablebtn);
			this->panel2->Controls->Add(this->button10);
			this->panel2->Controls->Add(this->studentprojectbtn);
			this->panel2->Controls->Add(this->studentpracbtn);
			this->panel2->Controls->Add(this->LogOut);
			this->panel2->Location = System::Drawing::Point(24, 99);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(151, 475);
			this->panel2->TabIndex = 3;
			// 
			// studentpersonalbtn
			// 
			this->studentpersonalbtn->Location = System::Drawing::Point(16, 284);
			this->studentpersonalbtn->Name = L"studentpersonalbtn";
			this->studentpersonalbtn->Size = System::Drawing::Size(119, 44);
			this->studentpersonalbtn->TabIndex = 7;
			this->studentpersonalbtn->Text = L"View Timetable";
			this->studentpersonalbtn->UseVisualStyleBackColor = true;
			this->studentpersonalbtn->Click += gcnew System::EventHandler(this, &Moodle::studentpersonalbtn_Click);
			// 
			// timetablebtn
			// 
			this->timetablebtn->Location = System::Drawing::Point(16, 215);
			this->timetablebtn->Name = L"timetablebtn";
			this->timetablebtn->Size = System::Drawing::Size(119, 44);
			this->timetablebtn->TabIndex = 6;
			this->timetablebtn->Text = L"View Practical ";
			this->timetablebtn->UseVisualStyleBackColor = true;
			this->timetablebtn->Click += gcnew System::EventHandler(this, &Moodle::timetablebtn_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(17, 147);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(119, 44);
			this->button10->TabIndex = 5;
			this->button10->Text = L"Submit Project";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Moodle::button10_Click);
			// 
			// studentprojectbtn
			// 
			this->studentprojectbtn->Location = System::Drawing::Point(17, 79);
			this->studentprojectbtn->Name = L"studentprojectbtn";
			this->studentprojectbtn->Size = System::Drawing::Size(119, 44);
			this->studentprojectbtn->TabIndex = 4;
			this->studentprojectbtn->Text = L"Select Project";
			this->studentprojectbtn->UseVisualStyleBackColor = true;
			this->studentprojectbtn->Click += gcnew System::EventHandler(this, &Moodle::studentprojectbtn_Click);
			// 
			// studentpracbtn
			// 
			this->studentpracbtn->Location = System::Drawing::Point(17, 12);
			this->studentpracbtn->Name = L"studentpracbtn";
			this->studentpracbtn->Size = System::Drawing::Size(119, 44);
			this->studentpracbtn->TabIndex = 3;
			this->studentpracbtn->Text = L"Select Practical";
			this->studentpracbtn->UseVisualStyleBackColor = true;
			this->studentpracbtn->Click += gcnew System::EventHandler(this, &Moodle::studentpracbtn_Click);
			// 
			// LogOut
			// 
			this->LogOut->Location = System::Drawing::Point(17, 419);
			this->LogOut->Name = L"LogOut";
			this->LogOut->Size = System::Drawing::Size(119, 44);
			this->LogOut->TabIndex = 2;
			this->LogOut->Text = L"LogOut";
			this->LogOut->UseVisualStyleBackColor = true;
			this->LogOut->Click += gcnew System::EventHandler(this, &Moodle::LogOut_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Elephant", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(302, 33);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(224, 38);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Student Page";
			// 
			// LecturePanel
			// 
			this->LecturePanel->Controls->Add(this->LectureLogOut);
			this->LecturePanel->Controls->Add(this->Lecture);
			this->LecturePanel->Location = System::Drawing::Point(23, 25);
			this->LecturePanel->Name = L"LecturePanel";
			this->LecturePanel->Size = System::Drawing::Size(750, 650);
			this->LecturePanel->TabIndex = 3;
			// 
			// LectureLogOut
			// 
			this->LectureLogOut->Location = System::Drawing::Point(308, 344);
			this->LectureLogOut->Name = L"LectureLogOut";
			this->LectureLogOut->Size = System::Drawing::Size(75, 23);
			this->LectureLogOut->TabIndex = 1;
			this->LectureLogOut->Text = L"Lecture LogOut";
			this->LectureLogOut->UseVisualStyleBackColor = true;
			// 
			// Lecture
			// 
			this->Lecture->AutoSize = true;
			this->Lecture->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Lecture->Location = System::Drawing::Point(302, 43);
			this->Lecture->Name = L"Lecture";
			this->Lecture->Size = System::Drawing::Size(181, 31);
			this->Lecture->TabIndex = 0;
			this->Lecture->Text = L"Lecture Page";
			// 
			// AdministratorPanel
			// 
			this->AdministratorPanel->Controls->Add(this->admin1);
			this->AdministratorPanel->Controls->Add(this->admin2);
			this->AdministratorPanel->Controls->Add(this->admin3);
			this->AdministratorPanel->Controls->Add(this->admin4);
			this->AdministratorPanel->Controls->Add(this->admin5);
			this->AdministratorPanel->Controls->Add(this->admin6);
			this->AdministratorPanel->Controls->Add(this->admin7);
			this->AdministratorPanel->Controls->Add(this->panel1);
			this->AdministratorPanel->Controls->Add(this->Administrator);
			this->AdministratorPanel->Location = System::Drawing::Point(23, 25);
			this->AdministratorPanel->Name = L"AdministratorPanel";
			this->AdministratorPanel->Size = System::Drawing::Size(750, 650);
			this->AdministratorPanel->TabIndex = 2;
			// 
			// admin1
			// 
			this->admin1->Controls->Add(this->label9);
			this->admin1->Controls->Add(this->addusersubmit);
			this->admin1->Controls->Add(this->course);
			this->admin1->Controls->Add(this->usertype);
			this->admin1->Controls->Add(this->mobileno);
			this->admin1->Controls->Add(this->surname);
			this->admin1->Controls->Add(this->firstname);
			this->admin1->Controls->Add(this->label8);
			this->admin1->Controls->Add(this->label7);
			this->admin1->Controls->Add(this->label6);
			this->admin1->Controls->Add(this->label5);
			this->admin1->Controls->Add(this->label4);
			this->admin1->Location = System::Drawing::Point(264, 74);
			this->admin1->Name = L"admin1";
			this->admin1->Size = System::Drawing::Size(431, 520);
			this->admin1->TabIndex = 4;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(195, 8);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(131, 21);
			this->label9->TabIndex = 12;
			this->label9->Text = L"Add New User";
			// 
			// addusersubmit
			// 
			this->addusersubmit->Location = System::Drawing::Point(150, 265);
			this->addusersubmit->Name = L"addusersubmit";
			this->addusersubmit->Size = System::Drawing::Size(220, 29);
			this->addusersubmit->TabIndex = 9;
			this->addusersubmit->Text = L"Save";
			this->addusersubmit->UseVisualStyleBackColor = true;
			this->addusersubmit->Click += gcnew System::EventHandler(this, &Moodle::addusersubmit_Click);
			// 
			// course
			// 
			this->course->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->course->FormattingEnabled = true;
			this->course->Location = System::Drawing::Point(150, 169);
			this->course->Name = L"course";
			this->course->Size = System::Drawing::Size(220, 28);
			this->course->TabIndex = 11;
			// 
			// usertype
			// 
			this->usertype->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->usertype->FormattingEnabled = true;
			this->usertype->Location = System::Drawing::Point(150, 213);
			this->usertype->Name = L"usertype";
			this->usertype->Size = System::Drawing::Size(220, 28);
			this->usertype->TabIndex = 10;
			// 
			// mobileno
			// 
			this->mobileno->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mobileno->Location = System::Drawing::Point(150, 129);
			this->mobileno->Name = L"mobileno";
			this->mobileno->Size = System::Drawing::Size(220, 26);
			this->mobileno->TabIndex = 7;
			// 
			// surname
			// 
			this->surname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->surname->Location = System::Drawing::Point(150, 86);
			this->surname->Name = L"surname";
			this->surname->Size = System::Drawing::Size(220, 26);
			this->surname->TabIndex = 6;
			// 
			// firstname
			// 
			this->firstname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->firstname->Location = System::Drawing::Point(150, 41);
			this->firstname->Name = L"firstname";
			this->firstname->Size = System::Drawing::Size(220, 26);
			this->firstname->TabIndex = 5;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(18, 221);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(81, 20);
			this->label8->TabIndex = 4;
			this->label8->Text = L"User Type";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(18, 177);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(60, 20);
			this->label7->TabIndex = 3;
			this->label7->Text = L"Course";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(18, 135);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(55, 20);
			this->label6->TabIndex = 2;
			this->label6->Text = L"Mobile";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(18, 92);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(74, 20);
			this->label5->TabIndex = 1;
			this->label5->Text = L"Surname";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(18, 47);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(86, 20);
			this->label4->TabIndex = 0;
			this->label4->Text = L"First Name";
			// 
			// admin2
			// 
			this->admin2->Controls->Add(this->fetchbtn);
			this->admin2->Controls->Add(this->textBox16);
			this->admin2->Controls->Add(this->lebel);
			this->admin2->Controls->Add(this->label10);
			this->admin2->Controls->Add(this->button4);
			this->admin2->Controls->Add(this->textBox1);
			this->admin2->Controls->Add(this->textBox2);
			this->admin2->Controls->Add(this->textBox3);
			this->admin2->Controls->Add(this->label13);
			this->admin2->Controls->Add(this->label14);
			this->admin2->Controls->Add(this->label15);
			this->admin2->Location = System::Drawing::Point(263, 74);
			this->admin2->Name = L"admin2";
			this->admin2->Size = System::Drawing::Size(431, 520);
			this->admin2->TabIndex = 5;
			// 
			// fetchbtn
			// 
			this->fetchbtn->Location = System::Drawing::Point(150, 84);
			this->fetchbtn->Name = L"fetchbtn";
			this->fetchbtn->Size = System::Drawing::Size(220, 29);
			this->fetchbtn->TabIndex = 15;
			this->fetchbtn->Text = L"Fetch Data";
			this->fetchbtn->UseVisualStyleBackColor = true;
			this->fetchbtn->Click += gcnew System::EventHandler(this, &Moodle::fetchbtn_Click);
			// 
			// textBox16
			// 
			this->textBox16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox16->Location = System::Drawing::Point(150, 51);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(220, 26);
			this->textBox16->TabIndex = 14;
			// 
			// lebel
			// 
			this->lebel->AutoSize = true;
			this->lebel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lebel->Location = System::Drawing::Point(18, 54);
			this->lebel->Name = L"lebel";
			this->lebel->Size = System::Drawing::Size(60, 20);
			this->lebel->TabIndex = 13;
			this->lebel->Text = L"UserID";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(195, 15);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(115, 21);
			this->label10->TabIndex = 12;
			this->label10->Text = L"Update User";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(150, 295);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(220, 29);
			this->button4->TabIndex = 9;
			this->button4->Text = L"Save";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Moodle::button4_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(150, 237);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(220, 26);
			this->textBox1->TabIndex = 7;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(150, 194);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(220, 26);
			this->textBox2->TabIndex = 6;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(150, 149);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(220, 26);
			this->textBox3->TabIndex = 5;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(18, 243);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(55, 20);
			this->label13->TabIndex = 2;
			this->label13->Text = L"Mobile";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(18, 200);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(74, 20);
			this->label14->TabIndex = 1;
			this->label14->Text = L"Surname";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(18, 155);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(86, 20);
			this->label15->TabIndex = 0;
			this->label15->Text = L"First Name";
			// 
			// admin3
			// 
			this->admin3->Controls->Add(this->label16);
			this->admin3->Controls->Add(this->button5);
			this->admin3->Controls->Add(this->textBox6);
			this->admin3->Controls->Add(this->label21);
			this->admin3->Location = System::Drawing::Point(263, 74);
			this->admin3->Name = L"admin3";
			this->admin3->Size = System::Drawing::Size(431, 520);
			this->admin3->TabIndex = 6;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(195, 8);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(111, 21);
			this->label16->TabIndex = 12;
			this->label16->Text = L"Delete User";
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(159, 107);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(220, 29);
			this->button5->TabIndex = 9;
			this->button5->Text = L"Delete";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Moodle::button5_Click);
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox6->Location = System::Drawing::Point(150, 41);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(220, 26);
			this->textBox6->TabIndex = 5;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(18, 47);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(60, 20);
			this->label21->TabIndex = 0;
			this->label21->Text = L"UserID";
			// 
			// admin4
			// 
			this->admin4->Controls->Add(this->comboBox1);
			this->admin4->Controls->Add(this->label22);
			this->admin4->Controls->Add(this->button6);
			this->admin4->Controls->Add(this->textBox7);
			this->admin4->Controls->Add(this->textBox8);
			this->admin4->Controls->Add(this->textBox9);
			this->admin4->Controls->Add(this->label24);
			this->admin4->Controls->Add(this->label25);
			this->admin4->Controls->Add(this->label26);
			this->admin4->Controls->Add(this->label27);
			this->admin4->Location = System::Drawing::Point(263, 74);
			this->admin4->Name = L"admin4";
			this->admin4->Size = System::Drawing::Size(431, 520);
			this->admin4->TabIndex = 7;
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(150, 211);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(221, 28);
			this->comboBox1->TabIndex = 13;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(195, 43);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(130, 21);
			this->label22->TabIndex = 12;
			this->label22->Text = L"Add Practical";
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(150, 264);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(220, 29);
			this->button6->TabIndex = 9;
			this->button6->Text = L"Save";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Moodle::button6_Click);
			// 
			// textBox7
			// 
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox7->Location = System::Drawing::Point(150, 164);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(221, 26);
			this->textBox7->TabIndex = 7;
			// 
			// textBox8
			// 
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox8->Location = System::Drawing::Point(150, 121);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(220, 26);
			this->textBox8->TabIndex = 6;
			// 
			// textBox9
			// 
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox9->Location = System::Drawing::Point(150, 76);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(220, 26);
			this->textBox9->TabIndex = 5;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->Location = System::Drawing::Point(18, 212);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(37, 20);
			this->label24->TabIndex = 3;
			this->label24->Text = L"Slot";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->Location = System::Drawing::Point(18, 170);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(89, 20);
			this->label25->TabIndex = 2;
			this->label25->Text = L"Description";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label26->Location = System::Drawing::Point(18, 127);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(87, 20);
			this->label26->TabIndex = 1;
			this->label26->Text = L"Prac Name";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27->Location = System::Drawing::Point(18, 82);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(61, 20);
			this->label27->TabIndex = 0;
			this->label27->Text = L"Module";
			// 
			// admin5
			// 
			this->admin5->Controls->Add(this->label28);
			this->admin5->Controls->Add(this->button7);
			this->admin5->Controls->Add(this->textBox12);
			this->admin5->Controls->Add(this->label33);
			this->admin5->Location = System::Drawing::Point(264, 74);
			this->admin5->Name = L"admin5";
			this->admin5->Size = System::Drawing::Size(431, 520);
			this->admin5->TabIndex = 8;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label28->Location = System::Drawing::Point(195, 8);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(152, 21);
			this->label28->TabIndex = 12;
			this->label28->Text = L"Delete Practical";
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(150, 95);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(220, 29);
			this->button7->TabIndex = 9;
			this->button7->Text = L"Delete";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Moodle::button7_Click);
			// 
			// textBox12
			// 
			this->textBox12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox12->Location = System::Drawing::Point(150, 41);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(220, 26);
			this->textBox12->TabIndex = 5;
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label33->Location = System::Drawing::Point(18, 47);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(62, 20);
			this->label33->TabIndex = 0;
			this->label33->Text = L"Prac ID";
			// 
			// admin6
			// 
			this->admin6->Controls->Add(this->label34);
			this->admin6->Controls->Add(this->button8);
			this->admin6->Controls->Add(this->comboBox9);
			this->admin6->Controls->Add(this->textBox13);
			this->admin6->Controls->Add(this->textBox14);
			this->admin6->Controls->Add(this->textBox15);
			this->admin6->Controls->Add(this->label36);
			this->admin6->Controls->Add(this->label37);
			this->admin6->Controls->Add(this->label38);
			this->admin6->Controls->Add(this->label39);
			this->admin6->Location = System::Drawing::Point(263, 74);
			this->admin6->Name = L"admin6";
			this->admin6->Size = System::Drawing::Size(431, 520);
			this->admin6->TabIndex = 9;
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label34->Location = System::Drawing::Point(195, 8);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(113, 21);
			this->label34->TabIndex = 12;
			this->label34->Text = L"Add Project";
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(150, 265);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(220, 29);
			this->button8->TabIndex = 9;
			this->button8->Text = L"Save";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Moodle::button8_Click);
			// 
			// comboBox9
			// 
			this->comboBox9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox9->FormattingEnabled = true;
			this->comboBox9->Location = System::Drawing::Point(150, 169);
			this->comboBox9->Name = L"comboBox9";
			this->comboBox9->Size = System::Drawing::Size(220, 28);
			this->comboBox9->TabIndex = 11;
			// 
			// textBox13
			// 
			this->textBox13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox13->Location = System::Drawing::Point(150, 129);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(220, 26);
			this->textBox13->TabIndex = 7;
			// 
			// textBox14
			// 
			this->textBox14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox14->Location = System::Drawing::Point(150, 86);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(220, 26);
			this->textBox14->TabIndex = 6;
			// 
			// textBox15
			// 
			this->textBox15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox15->Location = System::Drawing::Point(150, 41);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(220, 26);
			this->textBox15->TabIndex = 5;
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label36->Location = System::Drawing::Point(18, 177);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(60, 20);
			this->label36->TabIndex = 3;
			this->label36->Text = L"Course";
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label37->Location = System::Drawing::Point(18, 135);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(89, 20);
			this->label37->TabIndex = 2;
			this->label37->Text = L"Description";
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label38->Location = System::Drawing::Point(18, 92);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(76, 20);
			this->label38->TabIndex = 1;
			this->label38->Text = L"Project Id";
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label39->Location = System::Drawing::Point(18, 47);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(92, 20);
			this->label39->TabIndex = 0;
			this->label39->Text = L"Project tittle";
			// 
			// admin7
			// 
			this->admin7->Controls->Add(this->label40);
			this->admin7->Controls->Add(this->button9);
			this->admin7->Controls->Add(this->textBox18);
			this->admin7->Controls->Add(this->label44);
			this->admin7->Location = System::Drawing::Point(263, 73);
			this->admin7->Name = L"admin7";
			this->admin7->Size = System::Drawing::Size(431, 520);
			this->admin7->TabIndex = 10;
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label40->Location = System::Drawing::Point(195, 8);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(135, 21);
			this->label40->TabIndex = 12;
			this->label40->Text = L"Delete Project";
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(150, 89);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(220, 29);
			this->button9->TabIndex = 9;
			this->button9->Text = L"Delete";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Moodle::button9_Click);
			// 
			// textBox18
			// 
			this->textBox18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox18->Location = System::Drawing::Point(150, 41);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(220, 26);
			this->textBox18->TabIndex = 5;
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label44->Location = System::Drawing::Point(23, 44);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(76, 20);
			this->label44->TabIndex = 1;
			this->label44->Text = L"Project Id";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->panel1->Controls->Add(this->addprojectsbtn);
			this->panel1->Controls->Add(this->deleteprojectsbtn);
			this->panel1->Controls->Add(this->deletepracticalbtn);
			this->panel1->Controls->Add(this->practicalbtn);
			this->panel1->Controls->Add(this->deleteuserbtn);
			this->panel1->Controls->Add(this->LogOutAdministrator);
			this->panel1->Controls->Add(this->updateuserbtn);
			this->panel1->Controls->Add(this->adduserbtn);
			this->panel1->Location = System::Drawing::Point(40, 73);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(149, 520);
			this->panel1->TabIndex = 3;
			// 
			// addprojectsbtn
			// 
			this->addprojectsbtn->Location = System::Drawing::Point(12, 350);
			this->addprojectsbtn->Name = L"addprojectsbtn";
			this->addprojectsbtn->Size = System::Drawing::Size(122, 53);
			this->addprojectsbtn->TabIndex = 8;
			this->addprojectsbtn->Text = L"Add Projects";
			this->addprojectsbtn->UseVisualStyleBackColor = true;
			this->addprojectsbtn->Click += gcnew System::EventHandler(this, &Moodle::addprojectsbtn_Click);
			// 
			// deleteprojectsbtn
			// 
			this->deleteprojectsbtn->Location = System::Drawing::Point(12, 419);
			this->deleteprojectsbtn->Name = L"deleteprojectsbtn";
			this->deleteprojectsbtn->Size = System::Drawing::Size(122, 53);
			this->deleteprojectsbtn->TabIndex = 7;
			this->deleteprojectsbtn->Text = L"Delete Project";
			this->deleteprojectsbtn->UseVisualStyleBackColor = true;
			this->deleteprojectsbtn->Click += gcnew System::EventHandler(this, &Moodle::deleteprojectsbtn_Click);
			// 
			// deletepracticalbtn
			// 
			this->deletepracticalbtn->Location = System::Drawing::Point(12, 281);
			this->deletepracticalbtn->Name = L"deletepracticalbtn";
			this->deletepracticalbtn->Size = System::Drawing::Size(122, 53);
			this->deletepracticalbtn->TabIndex = 6;
			this->deletepracticalbtn->Text = L"Delete Practicals";
			this->deletepracticalbtn->UseVisualStyleBackColor = true;
			this->deletepracticalbtn->Click += gcnew System::EventHandler(this, &Moodle::deletepracticalbtn_Click);
			// 
			// practicalbtn
			// 
			this->practicalbtn->Location = System::Drawing::Point(12, 215);
			this->practicalbtn->Name = L"practicalbtn";
			this->practicalbtn->Size = System::Drawing::Size(122, 53);
			this->practicalbtn->TabIndex = 5;
			this->practicalbtn->Text = L"Add Practicals";
			this->practicalbtn->UseVisualStyleBackColor = true;
			this->practicalbtn->Click += gcnew System::EventHandler(this, &Moodle::practicalbtn_Click);
			// 
			// deleteuserbtn
			// 
			this->deleteuserbtn->Location = System::Drawing::Point(12, 144);
			this->deleteuserbtn->Name = L"deleteuserbtn";
			this->deleteuserbtn->Size = System::Drawing::Size(122, 53);
			this->deleteuserbtn->TabIndex = 4;
			this->deleteuserbtn->Text = L"Delete User";
			this->deleteuserbtn->UseVisualStyleBackColor = true;
			this->deleteuserbtn->Click += gcnew System::EventHandler(this, &Moodle::deleteuserbtn_Click);
			// 
			// LogOutAdministrator
			// 
			this->LogOutAdministrator->Location = System::Drawing::Point(12, 478);
			this->LogOutAdministrator->Name = L"LogOutAdministrator";
			this->LogOutAdministrator->Size = System::Drawing::Size(122, 39);
			this->LogOutAdministrator->TabIndex = 1;
			this->LogOutAdministrator->Text = L"Logout";
			this->LogOutAdministrator->UseVisualStyleBackColor = true;
			this->LogOutAdministrator->Click += gcnew System::EventHandler(this, &Moodle::LogOutAdministrator_Click);
			// 
			// updateuserbtn
			// 
			this->updateuserbtn->Location = System::Drawing::Point(12, 79);
			this->updateuserbtn->Name = L"updateuserbtn";
			this->updateuserbtn->Size = System::Drawing::Size(122, 48);
			this->updateuserbtn->TabIndex = 3;
			this->updateuserbtn->Text = L"Update User";
			this->updateuserbtn->UseVisualStyleBackColor = true;
			this->updateuserbtn->Click += gcnew System::EventHandler(this, &Moodle::updateuserbtn_Click);
			// 
			// adduserbtn
			// 
			this->adduserbtn->Location = System::Drawing::Point(12, 16);
			this->adduserbtn->Name = L"adduserbtn";
			this->adduserbtn->Size = System::Drawing::Size(122, 51);
			this->adduserbtn->TabIndex = 2;
			this->adduserbtn->Text = L"Add User";
			this->adduserbtn->UseVisualStyleBackColor = true;
			this->adduserbtn->Click += gcnew System::EventHandler(this, &Moodle::adduserbtn_Click);
			// 
			// Administrator
			// 
			this->Administrator->AutoSize = true;
			this->Administrator->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Administrator->Location = System::Drawing::Point(229, 9);
			this->Administrator->Name = L"Administrator";
			this->Administrator->Size = System::Drawing::Size(290, 34);
			this->Administrator->TabIndex = 0;
			this->Administrator->Text = L"Administrator Page";
			// 
			// Moodle
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(800, 700);
			this->Controls->Add(this->MoodlePanel);
			this->Controls->Add(this->StudentPanel);
			this->Controls->Add(this->LecturePanel);
			this->Controls->Add(this->AdministratorPanel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Moodle";
			this->Text = L"Moodle";
			this->Load += gcnew System::EventHandler(this, &Moodle::Moodle_Load);
			this->MoodlePanel->ResumeLayout(false);
			this->MoodlePanel->PerformLayout();
			this->StudentPanel->ResumeLayout(false);
			this->StudentPanel->PerformLayout();
			this->student3->ResumeLayout(false);
			this->student3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->student2->ResumeLayout(false);
			this->student2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->student1->ResumeLayout(false);
			this->student1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->LecturePanel->ResumeLayout(false);
			this->LecturePanel->PerformLayout();
			this->AdministratorPanel->ResumeLayout(false);
			this->AdministratorPanel->PerformLayout();
			this->admin1->ResumeLayout(false);
			this->admin1->PerformLayout();
			this->admin2->ResumeLayout(false);
			this->admin2->PerformLayout();
			this->admin3->ResumeLayout(false);
			this->admin3->PerformLayout();
			this->admin4->ResumeLayout(false);
			this->admin4->PerformLayout();
			this->admin5->ResumeLayout(false);
			this->admin5->PerformLayout();
			this->admin6->ResumeLayout(false);
			this->admin6->PerformLayout();
			this->admin7->ResumeLayout(false);
			this->admin7->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
		//login method
private: System::Void Login()
{
	//
	String^ constr = "Server = 127.0.0.1; Uid = root; Pwd = ; Database = moodle";//the string we need to connect to the database
	MySqlConnection^ con = gcnew MySqlConnection(constr);  //connect to mySql

	//mySql query//pass textbox variable
	MySqlCommand^ cmd = gcnew MySqlCommand("select * from users where username = '" + this->UserID->Text + "' and password = '" + this->Password->Text + "';", con);
	MySqlDataReader^ dr;
	try {
		con->Open();
		dr = cmd->ExecuteReader();
		int count = 0;
		while (dr->Read())
		{
			count++;
			// textBox1 ->Text += (dr -> GetInt32(0));//take the first column of the database and put it the textbox1
			// textBox2 ->Text += (dr -> GetInt32(0));//take the first column of the database and put it the textbox1
		}
		if (count != 1) {
			MessageBox::Show("Access denied, Check your credentials!");
			UserID->Clear();
			Password->Clear();//clear textbox2
		}

		else
		{
			MessageBox::Show("Access Granted!");
			//MessageBox::Show("Access Granted \nYou will be redirected to our page ");
			// Close login panel
			// Open Home page
			if (dr["usertype"]->ToString() == "student")
			{ 
				//call student panel
				MessageBox::Show("Welcome, Student!");
				this->MoodlePanel->Visible = false;
				this->AdministratorPanel->Visible = false;
				this->StudentPanel->Visible = true;
				this->LecturePanel->Visible = false;
				this->student1->Visible = true;
				this->student2->Visible = false;
				this->student3->Visible = false;
			}
			else if (dr["usertype"]->ToString() == "lecturer")
			{
				MessageBox::Show("Welcome, Lecturer!");
				//call lecturer panel
				this->MoodlePanel->Visible = false;
				this->AdministratorPanel->Visible = false;
				this->StudentPanel->Visible = false;
				this->LecturePanel->Visible = true;

			}
			else if (dr["usertype"]->ToString() == "administrator")
			{
				MessageBox::Show("Welcome, Administrator!");
				//call admin panel
				this->MoodlePanel->Visible = false;
				this->AdministratorPanel->Visible = true;
				this->StudentPanel->Visible = false;
				this->LecturePanel->Visible = false;
			}
			else
			{
			    MessageBox::Show("OOPS\n You do not belong to any group!, contact administrator");
				this->MoodlePanel->Visible = true;
			}		

		}


	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}
}//end of class

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		
		//login verification
		Login();
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	//Reset here
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	//Exit here
	Application::Exit();
}
private: System::Void LogOut_Click(System::Object^ sender, System::EventArgs^ e) {
	//logout
	//go to login
	this->MoodlePanel->Visible = true;
	this->AdministratorPanel->Visible = false;
	this->StudentPanel->Visible = false;
	this->LecturePanel->Visible = false;
	this->student1->Visible = false;
	this->student2->Visible = false;
	this->student3->Visible = false;

	UserID->Clear();
	Password->Clear();
}
private: System::Void Moodle_Load(System::Object^ sender, System::EventArgs^ e) {
	//Disabling the administrator form when the Moodle form is running so we have to dsable all the other forms
	this->MoodlePanel->Visible = true;
	this->AdministratorPanel->Visible = false;
	this->StudentPanel->Visible = false;
	this->LecturePanel->Visible = false;
	this->student1->Visible = false;
	this->student2->Visible = false;
	this->student3->Visible = false;


}
private: System::Void adduserbtn_Click(System::Object^ sender, System::EventArgs^ e) {
	//addmin 1 true
	this->admin1->Visible = true;
	this->admin2->Visible = false;
	this->admin3->Visible = false;
	this->admin4->Visible = false;
	this->admin5->Visible = false;
	this->admin6->Visible = false;
	this->admin7->Visible = false;
}
private: System::Void updateuserbtn_Click(System::Object^ sender, System::EventArgs^ e) {
	//addmin 2 true
	this->admin1->Visible = false;
	this->admin2->Visible = true;
	this->admin3->Visible = false;
	this->admin4->Visible = false;
	this->admin5->Visible = false;
	this->admin6->Visible = false;
	this->admin7->Visible = false;
}
private: System::Void deleteuserbtn_Click(System::Object^ sender, System::EventArgs^ e) {
	//addmin 3 true
	this->admin1->Visible = false;
	this->admin2->Visible = false;
	this->admin3->Visible = true;
	this->admin4->Visible = false;
	this->admin5->Visible = false;
	this->admin6->Visible = false;
	this->admin7->Visible = false;
}
private: System::Void practicalbtn_Click(System::Object^ sender, System::EventArgs^ e) {
	//addmin 4 true
	this->admin1->Visible = false;
	this->admin2->Visible = false;
	this->admin3->Visible = false;
	this->admin4->Visible = true;
	this->admin5->Visible = false;
	this->admin6->Visible = false;
	this->admin7->Visible = false;
}
private: System::Void deletepracticalbtn_Click(System::Object^ sender, System::EventArgs^ e) {
	//addmin 5 true
	this->admin1->Visible = false;
	this->admin2->Visible = false;
	this->admin3->Visible = false;
	this->admin4->Visible = false;
	this->admin5->Visible = true;
	this->admin6->Visible = false;
	this->admin7->Visible = false;
}
private: System::Void addprojectsbtn_Click(System::Object^ sender, System::EventArgs^ e) {
	//addmin 6 true
	this->admin1->Visible = false;
	this->admin2->Visible = false;
	this->admin3->Visible = false;
	this->admin4->Visible = false;
	this->admin5->Visible = false;
	this->admin6->Visible = true;
	this->admin7->Visible = false;
}
private: System::Void deleteprojectsbtn_Click(System::Object^ sender, System::EventArgs^ e) {
	//addmin 7 true
	this->admin1->Visible = false;
	this->admin2->Visible = false;
	this->admin3->Visible = false;
	this->admin4->Visible = false;
	this->admin5->Visible = false;
	this->admin6->Visible = false;
	this->admin7->Visible = true;
}
private: System::Void LogOutAdministrator_Click(System::Object^ sender, System::EventArgs^ e) {
	//go to login
	this->MoodlePanel->Visible = true;
	this->AdministratorPanel->Visible = false;
	this->StudentPanel->Visible = false;
	this->LecturePanel->Visible = false;
	UserID->Clear();
	Password->Clear();
}
private: System::Void addusersubmit_Click(System::Object^ sender, System::EventArgs^ e) {
	//
	Adduser();
}

//methods
//database
private: System::Void Adduser()
{
	String^ constr = "Server = 127.0.0.1; Uid = root; Pwd = ; Database = moodle";
	//MySqlConnection^ conn = gcnew MySqlConnection(constr);  //connect to mySql
	Checkemptytexbox();
}
	   //method to check empty fields
private: System::Void Checkemptytexbox()
{
	if (String::IsNullOrEmpty(firstname->Text) || String::IsNullOrEmpty(surname->Text) || String::IsNullOrEmpty(mobileno->Text) || String::IsNullOrEmpty(usertype->Text) || String::IsNullOrEmpty(course->Text))
	{
		MessageBox::Show("**Empty Field Detected**");
	}
	else
	{

		checkexisting(); //check existing
	}
}

	   //check if user exist and add name to database if new player name detected 
private: System::Void checkexisting()
{
	String^ constr = "Server = 127.0.0.1; Uid = root; Pwd = ; Database = moodle";
	MySqlConnection^ conn = gcnew MySqlConnection(constr);  //connect to mySql
	//DBsetup(); //call the DB setup method to use the dababase here


	//(isdigit(username1)
	if (this->usertype->Text == "student")
	{
		//generate username and email account
        //random funtion to generate random numbers from 1 to 6 ,
		srand((unsigned)time(0));     //calling srand()
		int randomNum = (rand() % 100000) + 1;          //calling rand() with %(mod) operator
		//check year, then set username prefix
		String^ yearpre = "221";
		String^ temppassword = "UKZN2021";
		//string str= to_string(i); 
		
		String^ username = yearpre + randomNum;
		//str1.str();
		//get email suffix
		char firstCharacter = this->firstname->Text[0];

		String^ email = username + "@stu.ukzn.ac.za";
		//pass textbox variable
		MySqlCommand^ cmd = gcnew MySqlCommand("select * from users where username = '" + username + "' ;", conn);


		// 218124478  Lungelo Zondi
		// Zondiln Lungelo Zondi
		// admin Lungelo Zondi
		MySqlDataReader^ dr;
		try {
			conn->Open();
			dr = cmd->ExecuteReader();
			int count = 0;
			while (dr->Read())
			{
				count++;
			}
			if (count != 1) {
				//add new user
					// Try to query the database
				String^ constr = "Server = 127.0.0.1; Uid = root; Pwd = ; Database =moodle";
				MySqlConnection^ conn = gcnew MySqlConnection(constr);
				//DBsetup(); //call the DB setup method to use the dababase here

				//mySql query statements
				try
				{
					MySqlCommand^ cmd = gcnew MySqlCommand("INSERT INTO users (username, firstname, lastname, phonenumber, email, course, password, usertype) VALUES ('" + username + "','" + firstname->Text + "', '" + surname->Text + "', '" + mobileno->Text + "', '" + email + "','" + course->Text + "', '" + temppassword + "', '" + usertype->Text + "')", conn);
					MySqlDataReader^ dr;
					conn->Open();
					dr = cmd->ExecuteReader();

					MessageBox::Show("Record Added");
                      //clear text field
					firstname->Clear();
					course->Items->Clear();//clear 
					usertype->Items->Clear();//clear
					surname->Clear();
					mobileno->Clear();//clear


				}
				//catch and handle errors
				catch (Exception^ ex)
				{
					MessageBox::Show(ex->Message);
				}
			}

			else
			{
				MessageBox::Show("Username Exist");
			}
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
	else
	{
		String^ temppassword = "UKZN2021";

		//char firstCharacter = this->firstname->Text[0];

		//username
		String^ username = this->surname->Text ;

		//email
		//get email suffix
		String^ email = username + "@ukzn.ac.za";

		//pass textbox variable
		MySqlCommand^ cmd = gcnew MySqlCommand("select * from users where username = '" + username + "' ;", conn);


		// 218124478  Lungelo Zondi
		// Zondiln Lungelo Zondi
		// admin Lungelo Zondi
		MySqlDataReader^ dr;
		try {
			conn->Open();
			dr = cmd->ExecuteReader();
			int count = 0;
			while (dr->Read())
			{
				count++;
			}
			if (count != 1) {
				//add new user
					// Try to query the database
				String^ constr = "Server = 127.0.0.1; Uid = root; Pwd = ; Database =moodle";
				MySqlConnection^ conn = gcnew MySqlConnection(constr);
				//DBsetup(); //call the DB setup method to use the dababase here

				//mySql query statements
				try
				{
					MySqlCommand^ cmd = gcnew MySqlCommand("INSERT INTO users (username,firstname,lastname,phonenumber,email,course,password,usertype) VALUES ('" + username + "','" + firstname->Text + "', '" + surname->Text + "', '" + mobileno->Text + "', '" + email + "','" + course->Text + "', '" + temppassword + "', '" + usertype->Text + "')", conn);
					MySqlDataReader^ dr;
					conn->Open();
					dr = cmd->ExecuteReader();

					MessageBox::Show("Record Added");
					//clear text fileld


				}
				//catch and handle errors
				catch (Exception^ ex)
				{
					MessageBox::Show(ex->Message);
				}
			}

			else
			{
				MessageBox::Show("Username Exist");
			}
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}

}//end of method

//store user info in the field
private: System::Void userfetch()
{
	//database connectivity
	String^ constr = "Server = 127.0.0.1; Uid = root; Pwd = ; Database = moodle";
	MySqlConnection^ conn = gcnew MySqlConnection(constr);  //connect to mySql

	//pass textbox variable
	MySqlCommand^ cmd = gcnew MySqlCommand("select * FROM users where username='" + textBox16->Text + "'; ", conn);
	MySqlDataReader^ dr;
	try {
		conn->Open();
		dr = cmd->ExecuteReader();
		int count = 0;
		while (dr->Read())
		{
			count++;
		}
		if (count != 1) {
			MessageBox::Show("Could not fetch data, please contact administrator!");
		}

		else
		{
			//load data from database and pass to RMA table

			textBox1->Text = dr["firstname"]->ToString();
			textBox2->Text = dr["lastname"]->ToString();
			textBox3->Text = dr["phonenumber"]->ToString();
		}
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}

}

private: System::Void UpdateUser()
{
	//database connectivity
	String^ constr = "Server = 127.0.0.1; Uid = root; Pwd = ; Database = moodle";
	MySqlConnection^ conn = gcnew MySqlConnection(constr);  //connect to mySql

	//pass textbox variable
	MySqlCommand^ cmd = gcnew MySqlCommand("UPDATE users set firstname= '"+ textBox1->Text +"',lastname= '" + textBox2->Text + "', phonenumber= '" + textBox3->Text + "' where username='" + textBox6->Text + "'; ", conn);
	MySqlDataReader^ dr;
	try {
		conn->Open();
		dr = cmd->ExecuteReader();
		int count = 0;
		while (dr->Read())
		{
			count++;
		}
		if (count != 1) {
			MessageBox::Show("Updated !");

			conn->Close();
		}

		else
		{
			MessageBox::Show("Could Not Update, contact administrator");
			conn->Close();
		}
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}

}
private: System::Void DeleteUser()
	   {
		   //database connectivity
		   String^ constr = "Server = 127.0.0.1; Uid = root; Pwd = ; Database = moodle";
		   MySqlConnection^ conn = gcnew MySqlConnection(constr);  //connect to mySql

		   //pass textbox variable
		   MySqlCommand^ cmd = gcnew MySqlCommand("select * FROM users where username='" + textBox6->Text + "'; ", conn);
		   MySqlDataReader^ dr;
		   try {
			   conn->Open();
			   dr = cmd->ExecuteReader();
			   int count = 0;
			   while (dr->Read())
			   {
				   count++;
			   }
			   if (count != 1) {
				   MessageBox::Show("No Record for such ID");
			   }

			   else
			   {
				   //delete from the user
				   MySqlConnection^ conn1 = gcnew MySqlConnection(constr);  //connect to mySql
				   MySqlCommand^ cmd1 = gcnew MySqlCommand("DELETE FROM users where username='" + textBox6->Text + "'; ", conn1);

				   MySqlDataReader^ dr1;
				   try {
					   conn1->Open();
					   dr1 = cmd1->ExecuteReader();
					   int count = 0;
					   while (dr1->Read())
					   {
						   count++;
					   }
					   if (count != 0) {
						   MessageBox::Show("Could not delete data, please contact administrator!");
						   conn1->Close();
					   }

					   else
					   {
						   //store data to database
						   MessageBox::Show("Deleted !");
						   conn->Close();
						   //show dashboad
						   textBox16->Clear();
					   }
				   }
				   catch (Exception^ ex)
				   {
					   MessageBox::Show(ex->Message);
				   }

			   }
		   }
		   catch (Exception^ ex)
		   {
			   MessageBox::Show(ex->Message);
		   }

	   }
private: System::Void DeletePrac()
{
	//database connectivity
	String^ constr = "Server = 127.0.0.1; Uid = root; Pwd = ; Database = moodle";
	MySqlConnection^ conn = gcnew MySqlConnection(constr);  //connect to mySql

	//pass textbox variable
	MySqlCommand^ cmd = gcnew MySqlCommand("select * FROM practicals where pracid='" + textBox12->Text + "'; ", conn);
	MySqlDataReader^ dr;
	try {
		conn->Open();
		dr = cmd->ExecuteReader();
		int count = 0;
		while (dr->Read())
		{
			count++;
		}
		if (count != 1) {
			MessageBox::Show("No Record for such ID");
		}

		else
		{
			//delete from the user
			MySqlConnection^ conn1 = gcnew MySqlConnection(constr);  //connect to mySql
			MySqlCommand^ cmd1 = gcnew MySqlCommand("DELETE FROM practicals where pracid='" + textBox12->Text + "'; ", conn1);

			MySqlDataReader^ dr1;
			try {
				conn1->Open();
				dr1 = cmd1->ExecuteReader();
				int count = 0;
				while (dr1->Read())
				{
					count++;
				}
				if (count != 0) {
					MessageBox::Show("Could not delete data, please contact administrator!");
					conn1->Close();
				}

				else
				{
					//store data to database
					MessageBox::Show("Deleted !");
					conn->Close();
					//show dashboad
					textBox12->Clear();
				}
			}
			catch (Exception^ ex)
			{
				MessageBox::Show(ex->Message);
			}

		}
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}

}
private: System::Void DeleteProject()
{
	//database connectivity
	String^ constr = "Server = 127.0.0.1; Uid = root; Pwd = ; Database = moodle";
	MySqlConnection^ conn = gcnew MySqlConnection(constr);  //connect to mySql

	//pass textbox variable
	MySqlCommand^ cmd = gcnew MySqlCommand("select * FROM projects where projectid='" + textBox18->Text + "'; ", conn);
	MySqlDataReader^ dr;
	try {
		conn->Open();
		dr = cmd->ExecuteReader();
		int count = 0;
		while (dr->Read())
		{
			count++;
		}
		if (count != 1) {
			MessageBox::Show("No Record for such ID");
		}

		else
		{
			//delete from the user
			MySqlConnection^ conn1 = gcnew MySqlConnection(constr);  //connect to mySql
			MySqlCommand^ cmd1 = gcnew MySqlCommand("DELETE FROM projectid where username='" + textBox18->Text + "'; ", conn1);

			MySqlDataReader^ dr1;
			try {
				conn1->Open();
				dr1 = cmd1->ExecuteReader();
				int count = 0;
				while (dr1->Read())
				{
					count++;
				}
				if (count != 0) {
					MessageBox::Show("Could not delete data, please contact administrator!");
					conn1->Close();
				}

				else
				{
					//store data to database
					MessageBox::Show("Deleted !");
					conn->Close();
					//show dashboad
					textBox18->Clear();
				}
			}
			catch (Exception^ ex)
			{
				MessageBox::Show(ex->Message);
			}

		}
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}

}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	//delete project
	//textbox18
	DeleteProject();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	//update user
	//Updateuser();
	//box 1,2,3
	UpdateUser();
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	//add pracs
	AddPracs();
	//7,8,9 combo1
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	//add project
	//combo9
    //13,14,15
	AddProjects();
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	//delete user
	//textbox 6
	DeleteUser();
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	//delete prac
	//textbox 12
	DeletePrac();
}
private: System::Void fetchbtn_Click(System::Object^ sender, System::EventArgs^ e) {
	//fetch data
	//textbox 16
	userfetch();
}

	   //method
private: System::Void AddPracs()
{
	if (String::IsNullOrEmpty(textBox7->Text) || String::IsNullOrEmpty(textBox8->Text) || String::IsNullOrEmpty(textBox9->Text))
	{
		MessageBox::Show("**Empty Field Detected**");
	}
	else
	{

		String^ constr = "Server = 127.0.0.1; Uid = root; Pwd = ; Database = moodle";
		MySqlConnection^ conn = gcnew MySqlConnection(constr);  //connect to mySql

		{
			//pass textbox variable
			MySqlCommand^ cmd = gcnew MySqlCommand("select * from practicals where pracid = '" + this->textBox8->Text + "' ;", conn);

			// 218124478  Lungelo Zondi
			// Zondiln Lungelo Zondi
			// admin Lungelo Zondi
			MySqlDataReader^ dr;
			try {
				conn->Open();
				dr = cmd->ExecuteReader();
				int count = 0;
				while (dr->Read())
				{
					count++;
				}
				if (count != 1) {
					//add new user
						// Try to query the database
					String^ constr = "Server = 127.0.0.1; Uid = root; Pwd = ; Database =moodle";
					MySqlConnection^ conn = gcnew MySqlConnection(constr);
					//DBsetup(); //call the DB setup method to use the dababase here

					//mySql query statements
					try
					{
						MySqlCommand^ cmd = gcnew MySqlCommand("INSERT INTO practicals (practittle,pracid,pracdescription) VALUES ('" + textBox7->Text + "', '" + textBox8->Text + "', '" + textBox9->Text + "')", conn);
						MySqlDataReader^ dr;
						conn->Open();
						dr = cmd->ExecuteReader();

						MessageBox::Show("Record Added");
						//clear text field
						firstname->Clear();
						course->Items->Clear();//clear 
						usertype->Items->Clear();//clear
						surname->Clear();
						mobileno->Clear();//clear


					}
					//catch and handle errors
					catch (Exception^ ex)
					{
						MessageBox::Show(ex->Message);
					}
				}

				else
				{
					MessageBox::Show("Prac Already Added");
				}
			}
			catch (Exception^ ex)
			{
				MessageBox::Show(ex->Message);
			}
		}
	

	}
}
private: System::Void BookPracs()
	   {
		   if (String::IsNullOrEmpty(comboBox2->Text) || String::IsNullOrEmpty(comboBox3->Text) )
		   {
			   MessageBox::Show("**Empty Field Detected**");
		   }
		   else
		   {

			   String^ constr = "Server = 127.0.0.1; Uid = root; Pwd = ; Database = moodle";
			   MySqlConnection^ conn = gcnew MySqlConnection(constr);  //connect to mySql

			   {
				   //pass textbox variable
				   MySqlCommand^ cmd = gcnew MySqlCommand("select * from practicalbooking where prac = '" + this->textBox8->Text + "' ;", conn);

				   // 218124478  Lungelo Zondi
				   // Zondiln Lungelo Zondi
				   // admin Lungelo Zondi
				   MySqlDataReader^ dr;
				   try 
				   {
					   conn->Open();
					   dr = cmd->ExecuteReader();
					   int count = 0;
					   while (dr->Read())
					   {
						   count++;
					   }
					   if (count != 1)
					   {
						   MySqlConnection^ conn2 = gcnew MySqlConnection(constr);  //connect to mySql
						   MySqlCommand^ cmd2 = gcnew MySqlCommand("select * FROM practicals where pracid='" + comboBox2->Text + "'; ", conn2);
						   MySqlDataReader^ dr;
						   try {
							   conn2->Open();
							   dr = cmd2->ExecuteReader();
							   int count = 0;
							   while (dr->Read())
							   {
								   count++;
							   }
							   if (count != 1)
							   {
								   MessageBox::Show("Could not fetch data, please contact administrator!");
							   }

							   else
							   {
								   //load data from database and pass to RMA table

								   String^ description = dr["pracdescription"]->ToString();
								   String^ practittle= dr["practittle"]->ToString();
								   String^ module = dr["module"]->ToString();

								   MySqlConnection^ conn3 = gcnew MySqlConnection(constr);
								   //DBsetup(); //call the DB setup method to use the dababase here

								   //mySql query statements
								   try
								   {
									   String^ var = "";
									   if (radioButton1->Checked)
									   {
										   var = " @08:40 - 11:20";
									   }
									   else if (radioButton2->Checked)
									   {
										   var = " @14:10 - 17:35";
									   }
									   String^ data_time=this->comboBox3->Text + var;
									   MySqlCommand^ cmd = gcnew MySqlCommand("INSERT INTO practicalbooking (module, username, description, prac, prac_day_time) VALUES ('" + module + "','" + UserID->Text + "','" + description + "','" + comboBox2->Text + "', '" + data_time + "')", conn3);
									   MySqlDataReader^ dr;
									   conn3->Open();
									   dr = cmd->ExecuteReader();

									   MessageBox::Show("Record Added");
									   //clear text field
									   firstname->Clear();
									   course->Items->Clear();//clear 
									   usertype->Items->Clear();//clear
									   surname->Clear();
									   mobileno->Clear();//clear


								   }
								   //catch and handle errors
								   catch (Exception^ ex)
								   {
									   MessageBox::Show(ex->Message);
								   }
							   }

						   }
						   catch (Exception^ ex)
						   {
							   MessageBox::Show(ex->Message);
						   }
					   }
					   else
					   {
						   MessageBox::Show("Prac Already booked");
					   }
				   }
				   catch (Exception^ ex)
				   {
					   MessageBox::Show(ex->Message);
				   }
			   }


		   }
	   }
	   //method
private: System::Void ProjectChoices()
{
					// Try to query the database
					String^ constr = "Server = 127.0.0.1; Uid = root; Pwd = ; Database =moodle";
					MySqlConnection^ conn7 = gcnew MySqlConnection(constr);
					MySqlCommand^ cmd = gcnew MySqlCommand("select * from projects ;", conn7);
					MySqlDataReader^ dr4;
					//DBsetup(); //call the DB setup method to use the dababase here
					//mySql query statements
					try
					{						
						MySqlDataAdapter^ sda4 = gcnew MySqlDataAdapter();
						sda4->SelectCommand = cmd;
						DataTable^ dbdataset = gcnew DataTable();
						sda4->Fill(dbdataset);
						BindingSource^ bSource = gcnew BindingSource();
						bSource->DataSource = dbdataset;
						dataGridView1->DataSource = bSource;
						sda4->Update(dbdataset);
					}
					//catch and handle errors
					catch (Exception^ ex)
					{
						MessageBox::Show(ex->Message);
					}
}
//ViewPracticals
private: System::Void ViewPracticals()
{
	{

		String^ constr = "Server = 127.0.0.1; Uid = root; Pwd = ; Database = moodle";
		MySqlConnection^ conn5 = gcnew MySqlConnection(constr);  //connect to mySql

		{
			//pass textbox variable
			MySqlCommand^ cmd = gcnew MySqlCommand("select * from practicalbooking where username = '" + this->UserID->Text + "' ;", conn5);

			// 218124478  Lungelo Zondi
			// Zondiln Lungelo Zondi
			// admin Lungelo Zondi
			MySqlDataReader^ dr8;
			try {
				conn5->Open();
				dr8 = cmd->ExecuteReader();
				int count = 0;
				while (dr8->Read())
				{
					count++;
				}
				if (count != 1) {
					//add new user
						// Try to query the database
					String^ constr = "Server = 127.0.0.1; Uid = root; Pwd = ; Database =moodle";
					MySqlConnection^ conn4 = gcnew MySqlConnection(constr);
					MySqlCommand^ cmd = gcnew MySqlCommand("select * from practicalbooking where username = '" + this->UserID->Text + "' ;", conn4);

					//DBsetup(); //call the DB setup method to use the dababase here
					//mySql query statements
					try
					{

						MySqlDataAdapter^ sda1 = gcnew MySqlDataAdapter();
						sda1->SelectCommand = cmd;
						DataTable^ dbdataset = gcnew DataTable();
						sda1->Fill(dbdataset);
						BindingSource^ bSource = gcnew BindingSource();

						bSource->DataSource = dbdataset;
						dataGridView2->DataSource = bSource;
						sda1->Update(dbdataset);


					}
					//catch and handle errors
					catch (Exception^ ex)
					{
						MessageBox::Show(ex->Message);
					}
				}

				else
				{
					MessageBox::Show("Error Occured");
				}
			}
			catch (Exception^ ex)
			{
				MessageBox::Show(ex->Message);
			}
		}


	}
}

private: System::Void AddProjectChoice()
{
	{

		String^ constr = "Server = 127.0.0.1; Uid = root; Pwd = ; Database = moodle";
		MySqlConnection^ conn = gcnew MySqlConnection(constr);  //connect to mySql

		{
			//pass textbox variable
			MySqlCommand^ cmd = gcnew MySqlCommand("select * from projects where projectid = '" + this->textBox4->Text + "' ;", conn);

			// 218124478  Lungelo Zondi
			// Zondiln Lungelo Zondi
			// admin Lungelo Zondi
			MySqlDataReader^ dr;
			try {
				conn->Open();
				dr = cmd->ExecuteReader();
				int count = 0;
				while (dr->Read())
				{
					count++;
				}
				if (count == 1) {
					//add new user


					String^ projecttittle = dr["projecttittle"]->ToString();
					String^  projectid= dr["projectid"]->ToString();
					String^ projectdescription = dr["projectdescription"]->ToString();
					String^ supervisor = dr["supervisor"]->ToString();

					String^ constr = "Server = 127.0.0.1; Uid = root; Pwd = ; Database =moodle";
					MySqlConnection^ conn = gcnew MySqlConnection(constr);
					//DBsetup(); //call the DB setup method to use the dababase here

					//mySql query statements
					try
					{
						MySqlCommand^ cmd = gcnew MySqlCommand("INSERT INTO projectselection (username,projectid,projecttitle,supervisor,pracdescription) VALUES ('" + UserID->Text + "', '" + projectid + "', '" + projecttittle + "', '" + supervisor + "', '" + projectdescription + "')", conn);
						MySqlDataReader^ dr;
						conn->Open();
						dr = cmd->ExecuteReader();

						MessageBox::Show("Record Added");
						//clear text field
						textBox4->Clear();

					}
					//catch and handle errors
					catch (Exception^ ex)
					{
						MessageBox::Show(ex->Message);
					}


				}

				else
				{
					MessageBox::Show("Project Not Found");
				}
			}
			catch (Exception^ ex)
			{
				MessageBox::Show(ex->Message);
			}
		}
	}
}
//method
private: System::Void AddProjects()
{
	if (String::IsNullOrEmpty(textBox13->Text) || String::IsNullOrEmpty(textBox14->Text) || String::IsNullOrEmpty(textBox15->Text))
	{
		MessageBox::Show("**Empty Field Detected**");
	}
	else
	{

		String^ constr = "Server = 127.0.0.1; Uid = root; Pwd = ; Database = moodle";
		MySqlConnection^ conn = gcnew MySqlConnection(constr);  //connect to mySql

		{
			//pass textbox variable
			MySqlCommand^ cmd = gcnew MySqlCommand("select * from projects where projectid = '" + this->textBox4->Text + "' ;", conn);

			// 218124478  Lungelo Zondi
			// Zondiln Lungelo Zondi
			// admin Lungelo Zondi
			MySqlDataReader^ dr;
			try {
				conn->Open();
				dr = cmd->ExecuteReader();
				int count = 0;
				while (dr->Read())
				{
					count++;
				}
				if (count != 1) {
					//add new user
						// Try to query the database
					String^ constr = "Server = 127.0.0.1; Uid = root; Pwd = ; Database =moodle";
					MySqlConnection^ conn = gcnew MySqlConnection(constr);
					//DBsetup(); //call the DB setup method to use the dababase here

					//mySql query statements
					try
					{
						MySqlCommand^ cmd = gcnew MySqlCommand("INSERT INTO projects (projecttittle,projectcid,projectdescription,supervisor) VALUES ('" + textBox13->Text + "', '" + textBox14->Text + "', '" + textBox15->Text + "')", conn);
						MySqlDataReader^ dr;
						conn->Open();
						dr = cmd->ExecuteReader();

						MessageBox::Show("Project Added");
						//clear text field
						firstname->Clear();
						course->Items->Clear();//clear 
						usertype->Items->Clear();//clear
						surname->Clear();
						mobileno->Clear();//clear


					}
					//catch and handle errors
					catch (Exception^ ex)
					{
						MessageBox::Show(ex->Message);
					}
				}

				else
				{
					MessageBox::Show("Project Exist");
				}
			}
			catch (Exception^ ex)
			{
				MessageBox::Show(ex->Message);
			}
		}
		

	}
}
private: System::Void studentpersonalbtn_Click(System::Object^ sender, System::EventArgs^ e) {
	//view timetable
	System::Diagnostics::Process::Start("https://celcatwp.ukzn.ac.za/2021/HOWARDCOLLEGE/COMPENGSEM2/finder.html");
}
private: System::Void studentpracbtn_Click(System::Object^ sender, System::EventArgs^ e) {
	//select prac
	this->student1->Visible = true;
	this->student2->Visible = false;
	this->student3->Visible = false;
}
private: System::Void studentprojectbtn_Click(System::Object^ sender, System::EventArgs^ e) {
//select project
	ProjectChoices();
	this->student1->Visible = false;
	this->student2->Visible = true;
	this->student3->Visible = false;

}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	//submit project
}
private: System::Void timetablebtn_Click(System::Object^ sender, System::EventArgs^ e) {
	//select project
	ViewPracticals();
	this->student1->Visible = false;
	this->student2->Visible = false;
	this->student3->Visible = true;

}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	//submission of practical selection
	//radio 1,2 ,combo 2,3
	BookPracs();
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	//add project choice
	//AddProjectChoice();
	AddProjectChoice();
}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
	//close
}
};
}
