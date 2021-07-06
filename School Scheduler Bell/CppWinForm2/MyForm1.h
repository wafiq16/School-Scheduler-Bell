#pragma once
#include "stdio.h"
#include "stdlib.h"
#include "fstream"
#include "iostream"
#include "string"
//#include "marshal.h" 	
//#include "marshal_atl.h" 	
//#include "marshal_cppstd.h" 	
//#include "marshal_windows.h"
#include "msclr\marshal_cppstd.h"
namespace CppWinForm2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage1;


	protected:

	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::TextBox^  textBox16;
	private: System::Windows::Forms::TextBox^  textBox13;
	private: System::Windows::Forms::TextBox^  textBox12;
	private: System::Windows::Forms::TextBox^  textBox11;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;


	private: System::Windows::Forms::TextBox^  textBox30;
	private: System::Windows::Forms::TextBox^  textBox29;
	private: System::Windows::Forms::TextBox^  textBox28;
	private: System::Windows::Forms::TextBox^  textBox27;
	private: System::Windows::Forms::TextBox^  textBox26;
	private: System::Windows::Forms::TextBox^  textBox25;
	private: System::Windows::Forms::TextBox^  textBox24;
	private: System::Windows::Forms::TextBox^  textBox23;
	private: System::Windows::Forms::TextBox^  textBox22;
	private: System::Windows::Forms::TextBox^  textBox21;
	private: System::Windows::Forms::TextBox^  textBox20;
	private: System::Windows::Forms::TextBox^  textBox19;
	private: System::Windows::Forms::TextBox^  textBox18;
	private: System::Windows::Forms::TextBox^  textBox17;

	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::TextBox^  textBox15;
	private: System::Windows::Forms::TextBox^  textBox14;

	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::TextBox^  textBox44;
	private: System::Windows::Forms::TextBox^  textBox43;
	private: System::Windows::Forms::TextBox^  textBox42;
	private: System::Windows::Forms::TextBox^  textBox41;
	private: System::Windows::Forms::TextBox^  textBox40;
	private: System::Windows::Forms::TextBox^  textBox39;
	private: System::Windows::Forms::TextBox^  textBox38;
	private: System::Windows::Forms::TextBox^  textBox37;
	private: System::Windows::Forms::TextBox^  textBox36;
	private: System::Windows::Forms::TextBox^  textBox35;
	private: System::Windows::Forms::TextBox^  textBox34;
	private: System::Windows::Forms::TextBox^  textBox33;
	private: System::Windows::Forms::TextBox^  textBox32;
	private: System::Windows::Forms::TextBox^  textBox31;
	private: System::Windows::Forms::ComboBox^  comboBox15;
	private: System::Windows::Forms::ComboBox^  comboBox14;
	private: System::Windows::Forms::ComboBox^  comboBox13;
	private: System::Windows::Forms::ComboBox^  comboBox12;
	private: System::Windows::Forms::ComboBox^  comboBox11;
	private: System::Windows::Forms::ComboBox^  comboBox10;
	private: System::Windows::Forms::ComboBox^  comboBox9;
	private: System::Windows::Forms::ComboBox^  comboBox8;
	private: System::Windows::Forms::ComboBox^  comboBox7;
	private: System::Windows::Forms::ComboBox^  comboBox6;
	private: System::Windows::Forms::ComboBox^  comboBox5;
	private: System::Windows::Forms::ComboBox^  comboBox4;
	private: System::Windows::Forms::ComboBox^  comboBox3;
	private: System::Windows::Forms::ComboBox^  comboBox2;

	private: System::Windows::Forms::TextBox^  textBox58;
	private: System::Windows::Forms::TextBox^  textBox57;
	private: System::Windows::Forms::TextBox^  textBox56;
	private: System::Windows::Forms::TextBox^  textBox55;
	private: System::Windows::Forms::TextBox^  textBox54;
	private: System::Windows::Forms::TextBox^  textBox53;
	private: System::Windows::Forms::TextBox^  textBox52;
	private: System::Windows::Forms::TextBox^  textBox51;
	private: System::Windows::Forms::TextBox^  textBox50;
	private: System::Windows::Forms::TextBox^  textBox49;
	private: System::Windows::Forms::TextBox^  textBox48;
	private: System::Windows::Forms::TextBox^  textBox47;
	private: System::Windows::Forms::TextBox^  textBox46;
	private: System::Windows::Forms::TextBox^  textBox45;
private: System::Windows::Forms::TextBox^  textBox60;
private: System::Windows::Forms::TextBox^  textBox59;
private: System::Windows::Forms::TextBox^  textBox61;



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
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox30 = (gcnew System::Windows::Forms::TextBox());
			this->textBox29 = (gcnew System::Windows::Forms::TextBox());
			this->textBox28 = (gcnew System::Windows::Forms::TextBox());
			this->textBox27 = (gcnew System::Windows::Forms::TextBox());
			this->textBox26 = (gcnew System::Windows::Forms::TextBox());
			this->textBox25 = (gcnew System::Windows::Forms::TextBox());
			this->textBox24 = (gcnew System::Windows::Forms::TextBox());
			this->textBox23 = (gcnew System::Windows::Forms::TextBox());
			this->textBox22 = (gcnew System::Windows::Forms::TextBox());
			this->textBox21 = (gcnew System::Windows::Forms::TextBox());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->textBox61 = (gcnew System::Windows::Forms::TextBox());
			this->textBox60 = (gcnew System::Windows::Forms::TextBox());
			this->textBox59 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox15 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox14 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox13 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox12 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox11 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox10 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox9 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox8 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox7 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox6 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox5 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox58 = (gcnew System::Windows::Forms::TextBox());
			this->textBox57 = (gcnew System::Windows::Forms::TextBox());
			this->textBox56 = (gcnew System::Windows::Forms::TextBox());
			this->textBox55 = (gcnew System::Windows::Forms::TextBox());
			this->textBox54 = (gcnew System::Windows::Forms::TextBox());
			this->textBox53 = (gcnew System::Windows::Forms::TextBox());
			this->textBox52 = (gcnew System::Windows::Forms::TextBox());
			this->textBox51 = (gcnew System::Windows::Forms::TextBox());
			this->textBox50 = (gcnew System::Windows::Forms::TextBox());
			this->textBox49 = (gcnew System::Windows::Forms::TextBox());
			this->textBox48 = (gcnew System::Windows::Forms::TextBox());
			this->textBox47 = (gcnew System::Windows::Forms::TextBox());
			this->textBox46 = (gcnew System::Windows::Forms::TextBox());
			this->textBox45 = (gcnew System::Windows::Forms::TextBox());
			this->textBox44 = (gcnew System::Windows::Forms::TextBox());
			this->textBox43 = (gcnew System::Windows::Forms::TextBox());
			this->textBox42 = (gcnew System::Windows::Forms::TextBox());
			this->textBox41 = (gcnew System::Windows::Forms::TextBox());
			this->textBox40 = (gcnew System::Windows::Forms::TextBox());
			this->textBox39 = (gcnew System::Windows::Forms::TextBox());
			this->textBox38 = (gcnew System::Windows::Forms::TextBox());
			this->textBox37 = (gcnew System::Windows::Forms::TextBox());
			this->textBox36 = (gcnew System::Windows::Forms::TextBox());
			this->textBox35 = (gcnew System::Windows::Forms::TextBox());
			this->textBox34 = (gcnew System::Windows::Forms::TextBox());
			this->textBox33 = (gcnew System::Windows::Forms::TextBox());
			this->textBox32 = (gcnew System::Windows::Forms::TextBox());
			this->textBox31 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(12, 12);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(564, 469);
			this->tabControl1->TabIndex = 0;
			this->tabControl1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm1::tabControl1_SelectedIndexChanged);
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->textBox15);
			this->tabPage1->Controls->Add(this->textBox14);
			this->tabPage1->Controls->Add(this->button17);
			this->tabPage1->Controls->Add(this->button16);
			this->tabPage1->Controls->Add(this->button15);
			this->tabPage1->Controls->Add(this->button14);
			this->tabPage1->Controls->Add(this->button13);
			this->tabPage1->Controls->Add(this->button12);
			this->tabPage1->Controls->Add(this->button11);
			this->tabPage1->Controls->Add(this->button10);
			this->tabPage1->Controls->Add(this->button9);
			this->tabPage1->Controls->Add(this->button8);
			this->tabPage1->Controls->Add(this->button7);
			this->tabPage1->Controls->Add(this->button6);
			this->tabPage1->Controls->Add(this->button5);
			this->tabPage1->Controls->Add(this->button4);
			this->tabPage1->Controls->Add(this->button3);
			this->tabPage1->Controls->Add(this->textBox30);
			this->tabPage1->Controls->Add(this->textBox29);
			this->tabPage1->Controls->Add(this->textBox28);
			this->tabPage1->Controls->Add(this->textBox27);
			this->tabPage1->Controls->Add(this->textBox26);
			this->tabPage1->Controls->Add(this->textBox25);
			this->tabPage1->Controls->Add(this->textBox24);
			this->tabPage1->Controls->Add(this->textBox23);
			this->tabPage1->Controls->Add(this->textBox22);
			this->tabPage1->Controls->Add(this->textBox21);
			this->tabPage1->Controls->Add(this->textBox20);
			this->tabPage1->Controls->Add(this->textBox19);
			this->tabPage1->Controls->Add(this->textBox18);
			this->tabPage1->Controls->Add(this->textBox17);
			this->tabPage1->Controls->Add(this->textBox16);
			this->tabPage1->Controls->Add(this->textBox13);
			this->tabPage1->Controls->Add(this->textBox12);
			this->tabPage1->Controls->Add(this->textBox11);
			this->tabPage1->Controls->Add(this->textBox10);
			this->tabPage1->Controls->Add(this->textBox9);
			this->tabPage1->Controls->Add(this->textBox8);
			this->tabPage1->Controls->Add(this->textBox7);
			this->tabPage1->Controls->Add(this->textBox6);
			this->tabPage1->Controls->Add(this->textBox5);
			this->tabPage1->Controls->Add(this->textBox4);
			this->tabPage1->Controls->Add(this->textBox3);
			this->tabPage1->Controls->Add(this->textBox2);
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(556, 443);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"AUDIO";
			this->tabPage1->UseVisualStyleBackColor = true;
			this->tabPage1->Click += gcnew System::EventHandler(this, &MyForm1::tabPage1_Click);
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(8, 404);
			this->textBox15->Name = L"textBox15";
			this->textBox15->ReadOnly = true;
			this->textBox15->Size = System::Drawing::Size(100, 20);
			this->textBox15->TabIndex = 44;
			this->textBox15->Text = L"BEL L";
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(8, 378);
			this->textBox14->Name = L"textBox14";
			this->textBox14->ReadOnly = true;
			this->textBox14->Size = System::Drawing::Size(100, 20);
			this->textBox14->TabIndex = 43;
			this->textBox14->Text = L"BEL K";
			// 
			// button17
			// 
			this->button17->Location = System::Drawing::Point(459, 400);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(75, 23);
			this->button17->TabIndex = 42;
			this->button17->Text = L"OPEN";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm1::button17_Click);
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(459, 376);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(75, 23);
			this->button16->TabIndex = 41;
			this->button16->Text = L"OPEN";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm1::button16_Click);
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(459, 218);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(75, 23);
			this->button15->TabIndex = 40;
			this->button15->Text = L"OPEN";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm1::button15_Click);
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(459, 350);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(75, 23);
			this->button14->TabIndex = 39;
			this->button14->Text = L"OPEN";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm1::button14_Click);
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(459, 322);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(75, 23);
			this->button13->TabIndex = 38;
			this->button13->Text = L"OPEN";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm1::button13_Click);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(459, 297);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(75, 23);
			this->button12->TabIndex = 37;
			this->button12->Text = L"OPEN";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm1::button12_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(459, 139);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(75, 23);
			this->button11->TabIndex = 36;
			this->button11->Text = L"OPEN";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm1::button11_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(459, 113);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(75, 23);
			this->button10->TabIndex = 35;
			this->button10->Text = L"OPEN";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm1::button10_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(459, 245);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 23);
			this->button9->TabIndex = 34;
			this->button9->Text = L"OPEN";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm1::button9_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(459, 270);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 23);
			this->button8->TabIndex = 33;
			this->button8->Text = L"OPEN";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm1::button8_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(459, 189);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 23);
			this->button7->TabIndex = 32;
			this->button7->Text = L"OPEN";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm1::button7_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(459, 164);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 31;
			this->button6->Text = L"OPEN";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm1::button6_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(459, 86);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 30;
			this->button5->Text = L"OPEN";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm1::button5_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(459, 60);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 29;
			this->button4->Text = L"OPEN";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm1::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(459, 34);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 28;
			this->button3->Text = L"OPEN";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm1::button3_Click);
			// 
			// textBox30
			// 
			this->textBox30->Location = System::Drawing::Point(114, 402);
			this->textBox30->Name = L"textBox30";
			this->textBox30->ReadOnly = true;
			this->textBox30->Size = System::Drawing::Size(339, 20);
			this->textBox30->TabIndex = 27;
			this->textBox30->TextChanged += gcnew System::EventHandler(this, &MyForm1::textBox30_TextChanged);
			// 
			// textBox29
			// 
			this->textBox29->Location = System::Drawing::Point(114, 376);
			this->textBox29->Name = L"textBox29";
			this->textBox29->ReadOnly = true;
			this->textBox29->Size = System::Drawing::Size(339, 20);
			this->textBox29->TabIndex = 26;
			// 
			// textBox28
			// 
			this->textBox28->Location = System::Drawing::Point(114, 350);
			this->textBox28->Name = L"textBox28";
			this->textBox28->ReadOnly = true;
			this->textBox28->Size = System::Drawing::Size(339, 20);
			this->textBox28->TabIndex = 25;
			// 
			// textBox27
			// 
			this->textBox27->Location = System::Drawing::Point(114, 324);
			this->textBox27->Name = L"textBox27";
			this->textBox27->ReadOnly = true;
			this->textBox27->Size = System::Drawing::Size(339, 20);
			this->textBox27->TabIndex = 24;
			this->textBox27->TextChanged += gcnew System::EventHandler(this, &MyForm1::textBox27_TextChanged);
			// 
			// textBox26
			// 
			this->textBox26->Location = System::Drawing::Point(114, 297);
			this->textBox26->Name = L"textBox26";
			this->textBox26->ReadOnly = true;
			this->textBox26->Size = System::Drawing::Size(339, 20);
			this->textBox26->TabIndex = 23;
			// 
			// textBox25
			// 
			this->textBox25->Location = System::Drawing::Point(114, 271);
			this->textBox25->Name = L"textBox25";
			this->textBox25->ReadOnly = true;
			this->textBox25->Size = System::Drawing::Size(339, 20);
			this->textBox25->TabIndex = 22;
			// 
			// textBox24
			// 
			this->textBox24->Location = System::Drawing::Point(114, 245);
			this->textBox24->Name = L"textBox24";
			this->textBox24->ReadOnly = true;
			this->textBox24->Size = System::Drawing::Size(339, 20);
			this->textBox24->TabIndex = 21;
			// 
			// textBox23
			// 
			this->textBox23->Location = System::Drawing::Point(114, 220);
			this->textBox23->Name = L"textBox23";
			this->textBox23->ReadOnly = true;
			this->textBox23->Size = System::Drawing::Size(339, 20);
			this->textBox23->TabIndex = 20;
			// 
			// textBox22
			// 
			this->textBox22->Location = System::Drawing::Point(114, 194);
			this->textBox22->Name = L"textBox22";
			this->textBox22->ReadOnly = true;
			this->textBox22->Size = System::Drawing::Size(339, 20);
			this->textBox22->TabIndex = 19;
			// 
			// textBox21
			// 
			this->textBox21->Location = System::Drawing::Point(114, 167);
			this->textBox21->Name = L"textBox21";
			this->textBox21->ReadOnly = true;
			this->textBox21->Size = System::Drawing::Size(339, 20);
			this->textBox21->TabIndex = 18;
			// 
			// textBox20
			// 
			this->textBox20->Location = System::Drawing::Point(114, 141);
			this->textBox20->Name = L"textBox20";
			this->textBox20->ReadOnly = true;
			this->textBox20->Size = System::Drawing::Size(339, 20);
			this->textBox20->TabIndex = 17;
			this->textBox20->TextChanged += gcnew System::EventHandler(this, &MyForm1::textBox20_TextChanged);
			// 
			// textBox19
			// 
			this->textBox19->Location = System::Drawing::Point(114, 115);
			this->textBox19->Name = L"textBox19";
			this->textBox19->ReadOnly = true;
			this->textBox19->Size = System::Drawing::Size(339, 20);
			this->textBox19->TabIndex = 16;
			this->textBox19->TextChanged += gcnew System::EventHandler(this, &MyForm1::textBox19_TextChanged);
			// 
			// textBox18
			// 
			this->textBox18->Location = System::Drawing::Point(114, 89);
			this->textBox18->Name = L"textBox18";
			this->textBox18->ReadOnly = true;
			this->textBox18->Size = System::Drawing::Size(339, 20);
			this->textBox18->TabIndex = 15;
			this->textBox18->TextChanged += gcnew System::EventHandler(this, &MyForm1::textBox18_TextChanged);
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(114, 63);
			this->textBox17->Name = L"textBox17";
			this->textBox17->ReadOnly = true;
			this->textBox17->Size = System::Drawing::Size(339, 20);
			this->textBox17->TabIndex = 14;
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(114, 37);
			this->textBox16->Name = L"textBox16";
			this->textBox16->ReadOnly = true;
			this->textBox16->Size = System::Drawing::Size(339, 20);
			this->textBox16->TabIndex = 13;
			this->textBox16->TextChanged += gcnew System::EventHandler(this, &MyForm1::textBox16_TextChanged);
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(7, 350);
			this->textBox13->Name = L"textBox13";
			this->textBox13->ReadOnly = true;
			this->textBox13->Size = System::Drawing::Size(100, 20);
			this->textBox13->TabIndex = 12;
			this->textBox13->Text = L"BEL J";
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(7, 324);
			this->textBox12->Name = L"textBox12";
			this->textBox12->ReadOnly = true;
			this->textBox12->Size = System::Drawing::Size(100, 20);
			this->textBox12->TabIndex = 11;
			this->textBox12->Text = L"BEL I";
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(7, 298);
			this->textBox11->Name = L"textBox11";
			this->textBox11->ReadOnly = true;
			this->textBox11->Size = System::Drawing::Size(100, 20);
			this->textBox11->TabIndex = 10;
			this->textBox11->Text = L"BEL H";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(7, 272);
			this->textBox10->Name = L"textBox10";
			this->textBox10->ReadOnly = true;
			this->textBox10->Size = System::Drawing::Size(100, 20);
			this->textBox10->TabIndex = 9;
			this->textBox10->Text = L"BEL G";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(7, 246);
			this->textBox9->Name = L"textBox9";
			this->textBox9->ReadOnly = true;
			this->textBox9->Size = System::Drawing::Size(100, 20);
			this->textBox9->TabIndex = 8;
			this->textBox9->Text = L"BEL F";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(7, 220);
			this->textBox8->Name = L"textBox8";
			this->textBox8->ReadOnly = true;
			this->textBox8->Size = System::Drawing::Size(100, 20);
			this->textBox8->TabIndex = 7;
			this->textBox8->Text = L"BEL E";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(7, 194);
			this->textBox7->Name = L"textBox7";
			this->textBox7->ReadOnly = true;
			this->textBox7->Size = System::Drawing::Size(100, 20);
			this->textBox7->TabIndex = 6;
			this->textBox7->Text = L"BEL D";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(7, 168);
			this->textBox6->Name = L"textBox6";
			this->textBox6->ReadOnly = true;
			this->textBox6->Size = System::Drawing::Size(100, 20);
			this->textBox6->TabIndex = 5;
			this->textBox6->Text = L"BEL C";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(7, 142);
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 4;
			this->textBox5->Text = L"BEL B";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(7, 115);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 3;
			this->textBox4->Text = L"BEL A";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(7, 90);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 2;
			this->textBox3->Text = L"DARURAT";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(6, 64);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 1;
			this->textBox2->Text = L"BEL APEL";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(6, 37);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"INFORMASI";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->textBox61);
			this->tabPage2->Controls->Add(this->textBox60);
			this->tabPage2->Controls->Add(this->textBox59);
			this->tabPage2->Controls->Add(this->comboBox15);
			this->tabPage2->Controls->Add(this->comboBox14);
			this->tabPage2->Controls->Add(this->comboBox13);
			this->tabPage2->Controls->Add(this->comboBox12);
			this->tabPage2->Controls->Add(this->comboBox11);
			this->tabPage2->Controls->Add(this->comboBox10);
			this->tabPage2->Controls->Add(this->comboBox9);
			this->tabPage2->Controls->Add(this->comboBox8);
			this->tabPage2->Controls->Add(this->comboBox7);
			this->tabPage2->Controls->Add(this->comboBox6);
			this->tabPage2->Controls->Add(this->comboBox5);
			this->tabPage2->Controls->Add(this->comboBox4);
			this->tabPage2->Controls->Add(this->comboBox3);
			this->tabPage2->Controls->Add(this->comboBox2);
			this->tabPage2->Controls->Add(this->textBox58);
			this->tabPage2->Controls->Add(this->textBox57);
			this->tabPage2->Controls->Add(this->textBox56);
			this->tabPage2->Controls->Add(this->textBox55);
			this->tabPage2->Controls->Add(this->textBox54);
			this->tabPage2->Controls->Add(this->textBox53);
			this->tabPage2->Controls->Add(this->textBox52);
			this->tabPage2->Controls->Add(this->textBox51);
			this->tabPage2->Controls->Add(this->textBox50);
			this->tabPage2->Controls->Add(this->textBox49);
			this->tabPage2->Controls->Add(this->textBox48);
			this->tabPage2->Controls->Add(this->textBox47);
			this->tabPage2->Controls->Add(this->textBox46);
			this->tabPage2->Controls->Add(this->textBox45);
			this->tabPage2->Controls->Add(this->textBox44);
			this->tabPage2->Controls->Add(this->textBox43);
			this->tabPage2->Controls->Add(this->textBox42);
			this->tabPage2->Controls->Add(this->textBox41);
			this->tabPage2->Controls->Add(this->textBox40);
			this->tabPage2->Controls->Add(this->textBox39);
			this->tabPage2->Controls->Add(this->textBox38);
			this->tabPage2->Controls->Add(this->textBox37);
			this->tabPage2->Controls->Add(this->textBox36);
			this->tabPage2->Controls->Add(this->textBox35);
			this->tabPage2->Controls->Add(this->textBox34);
			this->tabPage2->Controls->Add(this->textBox33);
			this->tabPage2->Controls->Add(this->textBox32);
			this->tabPage2->Controls->Add(this->textBox31);
			this->tabPage2->Controls->Add(this->comboBox1);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(556, 443);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"JADWAL";
			this->tabPage2->UseVisualStyleBackColor = true;
			this->tabPage2->Click += gcnew System::EventHandler(this, &MyForm1::tabPage2_Click);
			// 
			// textBox61
			// 
			this->textBox61->Location = System::Drawing::Point(425, 74);
			this->textBox61->Multiline = true;
			this->textBox61->Name = L"textBox61";
			this->textBox61->ReadOnly = true;
			this->textBox61->Size = System::Drawing::Size(92, 59);
			this->textBox61->TabIndex = 45;
			this->textBox61->Text = L"08:00:00 AM \n13:00:00 PM Format dalam bentuk 24 jam";
			this->textBox61->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox61->TextChanged += gcnew System::EventHandler(this, &MyForm1::textBox61_TextChanged);
			// 
			// textBox60
			// 
			this->textBox60->Location = System::Drawing::Point(366, 74);
			this->textBox60->Name = L"textBox60";
			this->textBox60->ReadOnly = true;
			this->textBox60->Size = System::Drawing::Size(53, 20);
			this->textBox60->TabIndex = 44;
			this->textBox60->Text = L"CONTOH";
			// 
			// textBox59
			// 
			this->textBox59->Location = System::Drawing::Point(366, 48);
			this->textBox59->Name = L"textBox59";
			this->textBox59->ReadOnly = true;
			this->textBox59->Size = System::Drawing::Size(123, 20);
			this->textBox59->TabIndex = 43;
			this->textBox59->Text = L"FORMAT INPUT WAKU";
			// 
			// comboBox15
			// 
			this->comboBox15->FormattingEnabled = true;
			this->comboBox15->Location = System::Drawing::Point(220, 387);
			this->comboBox15->Name = L"comboBox15";
			this->comboBox15->Size = System::Drawing::Size(121, 21);
			this->comboBox15->TabIndex = 42;
			// 
			// comboBox14
			// 
			this->comboBox14->FormattingEnabled = true;
			this->comboBox14->Location = System::Drawing::Point(220, 360);
			this->comboBox14->Name = L"comboBox14";
			this->comboBox14->Size = System::Drawing::Size(121, 21);
			this->comboBox14->TabIndex = 41;
			// 
			// comboBox13
			// 
			this->comboBox13->FormattingEnabled = true;
			this->comboBox13->Location = System::Drawing::Point(220, 333);
			this->comboBox13->Name = L"comboBox13";
			this->comboBox13->Size = System::Drawing::Size(121, 21);
			this->comboBox13->TabIndex = 40;
			// 
			// comboBox12
			// 
			this->comboBox12->FormattingEnabled = true;
			this->comboBox12->Location = System::Drawing::Point(220, 308);
			this->comboBox12->Name = L"comboBox12";
			this->comboBox12->Size = System::Drawing::Size(121, 21);
			this->comboBox12->TabIndex = 39;
			// 
			// comboBox11
			// 
			this->comboBox11->FormattingEnabled = true;
			this->comboBox11->Location = System::Drawing::Point(220, 282);
			this->comboBox11->Name = L"comboBox11";
			this->comboBox11->Size = System::Drawing::Size(121, 21);
			this->comboBox11->TabIndex = 38;
			// 
			// comboBox10
			// 
			this->comboBox10->FormattingEnabled = true;
			this->comboBox10->Location = System::Drawing::Point(220, 256);
			this->comboBox10->Name = L"comboBox10";
			this->comboBox10->Size = System::Drawing::Size(121, 21);
			this->comboBox10->TabIndex = 37;
			// 
			// comboBox9
			// 
			this->comboBox9->FormattingEnabled = true;
			this->comboBox9->Location = System::Drawing::Point(220, 232);
			this->comboBox9->Name = L"comboBox9";
			this->comboBox9->Size = System::Drawing::Size(121, 21);
			this->comboBox9->TabIndex = 36;
			// 
			// comboBox8
			// 
			this->comboBox8->FormattingEnabled = true;
			this->comboBox8->Location = System::Drawing::Point(220, 204);
			this->comboBox8->Name = L"comboBox8";
			this->comboBox8->Size = System::Drawing::Size(121, 21);
			this->comboBox8->TabIndex = 35;
			// 
			// comboBox7
			// 
			this->comboBox7->FormattingEnabled = true;
			this->comboBox7->Location = System::Drawing::Point(220, 178);
			this->comboBox7->Name = L"comboBox7";
			this->comboBox7->Size = System::Drawing::Size(121, 21);
			this->comboBox7->TabIndex = 34;
			// 
			// comboBox6
			// 
			this->comboBox6->FormattingEnabled = true;
			this->comboBox6->Location = System::Drawing::Point(220, 152);
			this->comboBox6->Name = L"comboBox6";
			this->comboBox6->Size = System::Drawing::Size(121, 21);
			this->comboBox6->TabIndex = 33;
			// 
			// comboBox5
			// 
			this->comboBox5->FormattingEnabled = true;
			this->comboBox5->Location = System::Drawing::Point(220, 128);
			this->comboBox5->Name = L"comboBox5";
			this->comboBox5->Size = System::Drawing::Size(121, 21);
			this->comboBox5->TabIndex = 32;
			// 
			// comboBox4
			// 
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Location = System::Drawing::Point(220, 99);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(121, 21);
			this->comboBox4->TabIndex = 31;
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(220, 76);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(121, 21);
			this->comboBox3->TabIndex = 30;
			this->comboBox3->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm1::comboBox3_SelectedIndexChanged);
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(220, 48);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 21);
			this->comboBox2->TabIndex = 29;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm1::comboBox2_SelectedIndexChanged);
			// 
			// textBox58
			// 
			this->textBox58->Location = System::Drawing::Point(112, 388);
			this->textBox58->Name = L"textBox58";
			this->textBox58->Size = System::Drawing::Size(100, 20);
			this->textBox58->TabIndex = 27;
			// 
			// textBox57
			// 
			this->textBox57->Location = System::Drawing::Point(113, 362);
			this->textBox57->Name = L"textBox57";
			this->textBox57->Size = System::Drawing::Size(100, 20);
			this->textBox57->TabIndex = 26;
			// 
			// textBox56
			// 
			this->textBox56->Location = System::Drawing::Point(113, 335);
			this->textBox56->Name = L"textBox56";
			this->textBox56->Size = System::Drawing::Size(100, 20);
			this->textBox56->TabIndex = 25;
			// 
			// textBox55
			// 
			this->textBox55->Location = System::Drawing::Point(113, 309);
			this->textBox55->Name = L"textBox55";
			this->textBox55->Size = System::Drawing::Size(100, 20);
			this->textBox55->TabIndex = 24;
			// 
			// textBox54
			// 
			this->textBox54->Location = System::Drawing::Point(113, 284);
			this->textBox54->Name = L"textBox54";
			this->textBox54->Size = System::Drawing::Size(100, 20);
			this->textBox54->TabIndex = 23;
			// 
			// textBox53
			// 
			this->textBox53->Location = System::Drawing::Point(113, 258);
			this->textBox53->Name = L"textBox53";
			this->textBox53->Size = System::Drawing::Size(100, 20);
			this->textBox53->TabIndex = 22;
			// 
			// textBox52
			// 
			this->textBox52->Location = System::Drawing::Point(113, 232);
			this->textBox52->Name = L"textBox52";
			this->textBox52->Size = System::Drawing::Size(100, 20);
			this->textBox52->TabIndex = 21;
			// 
			// textBox51
			// 
			this->textBox51->Location = System::Drawing::Point(113, 206);
			this->textBox51->Name = L"textBox51";
			this->textBox51->Size = System::Drawing::Size(100, 20);
			this->textBox51->TabIndex = 20;
			// 
			// textBox50
			// 
			this->textBox50->Location = System::Drawing::Point(113, 179);
			this->textBox50->Name = L"textBox50";
			this->textBox50->Size = System::Drawing::Size(100, 20);
			this->textBox50->TabIndex = 19;
			// 
			// textBox49
			// 
			this->textBox49->Location = System::Drawing::Point(113, 153);
			this->textBox49->Name = L"textBox49";
			this->textBox49->Size = System::Drawing::Size(100, 20);
			this->textBox49->TabIndex = 18;
			// 
			// textBox48
			// 
			this->textBox48->Location = System::Drawing::Point(113, 127);
			this->textBox48->Name = L"textBox48";
			this->textBox48->Size = System::Drawing::Size(100, 20);
			this->textBox48->TabIndex = 17;
			// 
			// textBox47
			// 
			this->textBox47->Location = System::Drawing::Point(113, 101);
			this->textBox47->Name = L"textBox47";
			this->textBox47->Size = System::Drawing::Size(100, 20);
			this->textBox47->TabIndex = 16;
			// 
			// textBox46
			// 
			this->textBox46->Location = System::Drawing::Point(113, 76);
			this->textBox46->Name = L"textBox46";
			this->textBox46->Size = System::Drawing::Size(100, 20);
			this->textBox46->TabIndex = 15;
			// 
			// textBox45
			// 
			this->textBox45->Location = System::Drawing::Point(113, 49);
			this->textBox45->Name = L"textBox45";
			this->textBox45->Size = System::Drawing::Size(100, 20);
			this->textBox45->TabIndex = 14;
			// 
			// textBox44
			// 
			this->textBox44->Location = System::Drawing::Point(6, 388);
			this->textBox44->Name = L"textBox44";
			this->textBox44->ReadOnly = true;
			this->textBox44->Size = System::Drawing::Size(100, 20);
			this->textBox44->TabIndex = 3;
			this->textBox44->Text = L"JAM KE-14";
			// 
			// textBox43
			// 
			this->textBox43->Location = System::Drawing::Point(6, 362);
			this->textBox43->Name = L"textBox43";
			this->textBox43->ReadOnly = true;
			this->textBox43->Size = System::Drawing::Size(100, 20);
			this->textBox43->TabIndex = 13;
			this->textBox43->Text = L"JAM KE-13";
			// 
			// textBox42
			// 
			this->textBox42->Location = System::Drawing::Point(6, 336);
			this->textBox42->Name = L"textBox42";
			this->textBox42->ReadOnly = true;
			this->textBox42->Size = System::Drawing::Size(100, 20);
			this->textBox42->TabIndex = 12;
			this->textBox42->Text = L"JAM KE-12";
			// 
			// textBox41
			// 
			this->textBox41->Location = System::Drawing::Point(6, 310);
			this->textBox41->Name = L"textBox41";
			this->textBox41->ReadOnly = true;
			this->textBox41->Size = System::Drawing::Size(100, 20);
			this->textBox41->TabIndex = 11;
			this->textBox41->Text = L"JAM KE-11";
			// 
			// textBox40
			// 
			this->textBox40->Location = System::Drawing::Point(6, 284);
			this->textBox40->Name = L"textBox40";
			this->textBox40->ReadOnly = true;
			this->textBox40->Size = System::Drawing::Size(100, 20);
			this->textBox40->TabIndex = 10;
			this->textBox40->Text = L"JAM KE-10";
			// 
			// textBox39
			// 
			this->textBox39->Location = System::Drawing::Point(6, 258);
			this->textBox39->Name = L"textBox39";
			this->textBox39->ReadOnly = true;
			this->textBox39->Size = System::Drawing::Size(100, 20);
			this->textBox39->TabIndex = 9;
			this->textBox39->Text = L"JAM KE-9";
			// 
			// textBox38
			// 
			this->textBox38->Location = System::Drawing::Point(6, 232);
			this->textBox38->Name = L"textBox38";
			this->textBox38->ReadOnly = true;
			this->textBox38->Size = System::Drawing::Size(100, 20);
			this->textBox38->TabIndex = 8;
			this->textBox38->Text = L"JAM KE-8";
			// 
			// textBox37
			// 
			this->textBox37->Location = System::Drawing::Point(6, 206);
			this->textBox37->Name = L"textBox37";
			this->textBox37->ReadOnly = true;
			this->textBox37->Size = System::Drawing::Size(100, 20);
			this->textBox37->TabIndex = 7;
			this->textBox37->Text = L"JAM KE-7";
			// 
			// textBox36
			// 
			this->textBox36->Location = System::Drawing::Point(6, 180);
			this->textBox36->Name = L"textBox36";
			this->textBox36->ReadOnly = true;
			this->textBox36->Size = System::Drawing::Size(100, 20);
			this->textBox36->TabIndex = 6;
			this->textBox36->Text = L"JAM KE-6";
			// 
			// textBox35
			// 
			this->textBox35->Location = System::Drawing::Point(6, 154);
			this->textBox35->Name = L"textBox35";
			this->textBox35->ReadOnly = true;
			this->textBox35->Size = System::Drawing::Size(100, 20);
			this->textBox35->TabIndex = 5;
			this->textBox35->Text = L"JAM KE-5";
			// 
			// textBox34
			// 
			this->textBox34->Location = System::Drawing::Point(6, 128);
			this->textBox34->Name = L"textBox34";
			this->textBox34->ReadOnly = true;
			this->textBox34->Size = System::Drawing::Size(100, 20);
			this->textBox34->TabIndex = 4;
			this->textBox34->Text = L"JAM KE-4";
			// 
			// textBox33
			// 
			this->textBox33->Location = System::Drawing::Point(6, 102);
			this->textBox33->Name = L"textBox33";
			this->textBox33->ReadOnly = true;
			this->textBox33->Size = System::Drawing::Size(100, 20);
			this->textBox33->TabIndex = 3;
			this->textBox33->Text = L"JAM KE-3";
			// 
			// textBox32
			// 
			this->textBox32->Location = System::Drawing::Point(6, 76);
			this->textBox32->Name = L"textBox32";
			this->textBox32->ReadOnly = true;
			this->textBox32->Size = System::Drawing::Size(100, 20);
			this->textBox32->TabIndex = 2;
			this->textBox32->Text = L"JAM KE-2";
			// 
			// textBox31
			// 
			this->textBox31->Location = System::Drawing::Point(6, 50);
			this->textBox31->Name = L"textBox31";
			this->textBox31->ReadOnly = true;
			this->textBox31->Size = System::Drawing::Size(100, 20);
			this->textBox31->TabIndex = 1;
			this->textBox31->Text = L"JAM KE-1";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(429, 6);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 0;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm1::comboBox1_SelectedIndexChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(443, 516);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"SIMPAN";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(524, 516);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"BATAL";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm1::button2_Click);
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(611, 551);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm1";
			this->Text = L"SETTING";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void tabPage1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	std::fstream newfile;
	newfile.open("audio.konf", std::ios::out);  // open a file to perform write operation using file object
	if (newfile.is_open()) //checking whether the file is open
	{
		std::string BEL_INFORMASI = msclr::interop::marshal_as<std::string>(textBox16->Text);
		newfile <<  BEL_INFORMASI << std::endl;
		std::string BEL_APEL = msclr::interop::marshal_as<std::string>(textBox17->Text);
		newfile << BEL_APEL << std::endl;
		std::string BEL_DARURAT = msclr::interop::marshal_as<std::string>(textBox18->Text);
		newfile << BEL_DARURAT << std::endl;
		std::string BEL_A = msclr::interop::marshal_as<std::string>(textBox19->Text);
		newfile << BEL_A << std::endl;
		std::string BEL_B = msclr::interop::marshal_as<std::string>(textBox20->Text);
		newfile << BEL_B << std::endl;
		std::string BEL_C = msclr::interop::marshal_as<std::string>(textBox21->Text);
		newfile << BEL_C << std::endl;
		std::string BEL_D = msclr::interop::marshal_as<std::string>(textBox22->Text);
		newfile << BEL_D << std::endl;
		std::string BEL_E = msclr::interop::marshal_as<std::string>(textBox23->Text);
		newfile << BEL_E << std::endl;
		std::string BEL_F = msclr::interop::marshal_as<std::string>(textBox24->Text);
		newfile << BEL_F << std::endl;
		std::string BEL_G = msclr::interop::marshal_as<std::string>(textBox25->Text);
		newfile << BEL_G << std::endl;
		std::string BEL_H = msclr::interop::marshal_as<std::string>(textBox26->Text);
		newfile << BEL_H << std::endl;
		std::string BEL_I = msclr::interop::marshal_as<std::string>(textBox27->Text);
		newfile << BEL_I << std::endl;
		std::string BEL_J = msclr::interop::marshal_as<std::string>(textBox27->Text);
		newfile << BEL_J << std::endl;
		std::string BEL_K = msclr::interop::marshal_as<std::string>(textBox29->Text);
		newfile << BEL_K << std::endl;
		std::string BEL_L = msclr::interop::marshal_as<std::string>(textBox30->Text);
		newfile << BEL_L << std::endl;
		//inserting text
		newfile.close();    //close the file object
	}
	newfile.open("audio.config", std::ios::in); //open a file to perform read operation using file object
	if (newfile.is_open()) {   //checking whether the file is open
		std::string tp;
		while (std::getline(newfile, tp)) { //read data from file object and put it into string.
			std::cout << tp << "\n"; //print the data of the string
		}
		newfile.close(); //close the file object.
	}

		int selectedIndex_HARI = comboBox1->SelectedIndex;
		std::string HARI;
		if (selectedIndex_HARI == 0) {
			HARI = "AHAD";
			msclr::interop::marshal_context context;
			std::string WAKTU_1 = context.marshal_as<std::string>(textBox45->Text);
			int selectedIndex_BEL_1 = comboBox2->SelectedIndex;
			std::string BEL_1;
			if (selectedIndex_BEL_1 == 0)
				BEL_1 = "INFO";
			else if (selectedIndex_BEL_1 == 1)
				BEL_1 = "APEL";
			else if (selectedIndex_BEL_1 == 2)
				BEL_1 = "DARURAT";
			else if (selectedIndex_BEL_1 == 3)
				BEL_1 = "A";
			else if (selectedIndex_BEL_1 == 4)
				BEL_1 = "B";
			else if (selectedIndex_BEL_1 == 5)
				BEL_1 = "C";
			else if (selectedIndex_BEL_1 == 6)
				BEL_1 = "D";
			else if (selectedIndex_BEL_1 == 7)
				BEL_1 = "E";
			else if (selectedIndex_BEL_1 == 8)
				BEL_1 = "F";
			else if (selectedIndex_BEL_1 == 9)
				BEL_1 = "G";
			else if (selectedIndex_BEL_1 == 10)
				BEL_1 = "H";
			else if (selectedIndex_BEL_1 == 11)
				BEL_1 = "I";
			else if (selectedIndex_BEL_1 == 12)
				BEL_1 = "J";
			else if (selectedIndex_BEL_1 == 13)
				BEL_1 = "K";
			else if (selectedIndex_BEL_1 == 14)
				BEL_1 = "L";

			std::string WAKTU_2 = context.marshal_as<std::string>(textBox46->Text);
			int selectedIndex_BEL_2 = comboBox3->SelectedIndex;
			std::string BEL_2;
			if (selectedIndex_BEL_2 == 0)
				BEL_2 = "INFO";
			else if (selectedIndex_BEL_2 == 1)
				BEL_2 = "APEL";
			else if (selectedIndex_BEL_2 == 2)
				BEL_2 = "DARURAT";
			else if (selectedIndex_BEL_2 == 3)
				BEL_2 = "A";
			else if (selectedIndex_BEL_2 == 4)
				BEL_2 = "B";
			else if (selectedIndex_BEL_2 == 5)
				BEL_2 = "C";
			else if (selectedIndex_BEL_2 == 6)
				BEL_2 = "D";
			else if (selectedIndex_BEL_2 == 7)
				BEL_2 = "E";
			else if (selectedIndex_BEL_2 == 8)
				BEL_2 = "F";
			else if (selectedIndex_BEL_2 == 9)
				BEL_2 = "G";
			else if (selectedIndex_BEL_2 == 10)
				BEL_2 = "H";
			else if (selectedIndex_BEL_2 == 11)
				BEL_2 = "I";
			else if (selectedIndex_BEL_2 == 12)
				BEL_2 = "J";
			else if (selectedIndex_BEL_2 == 13)
				BEL_2 = "K";
			else if (selectedIndex_BEL_2 == 14)
				BEL_2 = "L";

			std::string WAKTU_3 = context.marshal_as<std::string>(textBox47->Text);
			int selectedIndex_BEL_3 = comboBox4->SelectedIndex;
			std::string BEL_3;
			if (selectedIndex_BEL_3 == 0)
				BEL_3 = "INFO";
			else if (selectedIndex_BEL_3 == 1)
				BEL_3 = "APEL";
			else if (selectedIndex_BEL_3 == 2)
				BEL_3 = "DARURAT";
			else if (selectedIndex_BEL_3 == 3)
				BEL_3 = "A";
			else if (selectedIndex_BEL_3 == 4)
				BEL_3 = "B";
			else if (selectedIndex_BEL_3 == 5)
				BEL_3 = "C";
			else if (selectedIndex_BEL_3 == 6)
				BEL_3 = "D";
			else if (selectedIndex_BEL_3 == 7)
				BEL_3 = "E";
			else if (selectedIndex_BEL_3 == 8)
				BEL_3 = "F";
			else if (selectedIndex_BEL_3 == 9)
				BEL_3 = "G";
			else if (selectedIndex_BEL_3 == 10)
				BEL_3 = "H";
			else if (selectedIndex_BEL_3 == 11)
				BEL_3 = "I";
			else if (selectedIndex_BEL_3 == 12)
				BEL_3 = "J";
			else if (selectedIndex_BEL_3 == 13)
				BEL_3 = "K";
			else if (selectedIndex_BEL_3 == 14)
				BEL_3 = "L";

			std::string WAKTU_4 = context.marshal_as<std::string>(textBox48->Text);
			int selectedIndex_BEL_4 = comboBox5->SelectedIndex;
			std::string BEL_4;
			if (selectedIndex_BEL_4 == 0)
				BEL_4 = "INFO";
			else if (selectedIndex_BEL_4 == 1)
				BEL_4 = "APEL";
			else if (selectedIndex_BEL_4 == 2)
				BEL_4 = "DARURAT";
			else if (selectedIndex_BEL_4 == 3)
				BEL_4 = "A";
			else if (selectedIndex_BEL_4 == 4)
				BEL_4 = "B";
			else if (selectedIndex_BEL_4 == 5)
				BEL_4 = "C";
			else if (selectedIndex_BEL_4 == 6)
				BEL_4 = "D";
			else if (selectedIndex_BEL_4 == 7)
				BEL_4 = "E";
			else if (selectedIndex_BEL_4 == 8)
				BEL_4 = "F";
			else if (selectedIndex_BEL_4 == 9)
				BEL_4 = "G";
			else if (selectedIndex_BEL_4 == 10)
				BEL_4 = "H";
			else if (selectedIndex_BEL_4 == 11)
				BEL_4 = "I";
			else if (selectedIndex_BEL_4 == 12)
				BEL_4 = "J";
			else if (selectedIndex_BEL_4 == 13)
				BEL_4 = "K";
			else if (selectedIndex_BEL_4 == 14)
				BEL_4 = "L";

			std::string WAKTU_5 = context.marshal_as<std::string>(textBox49->Text);
			int selectedIndex_BEL_5 = comboBox6->SelectedIndex;
			std::string BEL_5;
			if (selectedIndex_BEL_5 == 0)
				BEL_5 = "INFO";
			else if (selectedIndex_BEL_5 == 1)
				BEL_5 = "APEL";
			else if (selectedIndex_BEL_5 == 2)
				BEL_5 = "DARURAT";
			else if (selectedIndex_BEL_5 == 3)
				BEL_5 = "A";
			else if (selectedIndex_BEL_5 == 4)
				BEL_5 = "B";
			else if (selectedIndex_BEL_5 == 5)
				BEL_5 = "C";
			else if (selectedIndex_BEL_5 == 6)
				BEL_5 = "D";
			else if (selectedIndex_BEL_5 == 7)
				BEL_5 = "E";
			else if (selectedIndex_BEL_5 == 8)
				BEL_5 = "F";
			else if (selectedIndex_BEL_5 == 9)
				BEL_5 = "G";
			else if (selectedIndex_BEL_5 == 10)
				BEL_5 = "H";
			else if (selectedIndex_BEL_5 == 11)
				BEL_5 = "I";
			else if (selectedIndex_BEL_5 == 12)
				BEL_5 = "J";
			else if (selectedIndex_BEL_5 == 13)
				BEL_5 = "K";
			else if (selectedIndex_BEL_5 == 14)
				BEL_5 = "L";

			std::string WAKTU_6 = context.marshal_as<std::string>(textBox50->Text);
			int selectedIndex_BEL_6 = comboBox7->SelectedIndex;
			std::string BEL_6;
			if (selectedIndex_BEL_6 == 0)
				BEL_6 = "INFO";
			else if (selectedIndex_BEL_6 == 1)
				BEL_6 = "APEL";
			else if (selectedIndex_BEL_6 == 2)
				BEL_6 = "DARURAT";
			else if (selectedIndex_BEL_6 == 3)
				BEL_6 = "A";
			else if (selectedIndex_BEL_6 == 4)
				BEL_6 = "B";
			else if (selectedIndex_BEL_6 == 5)
				BEL_6 = "C";
			else if (selectedIndex_BEL_6 == 6)
				BEL_6 = "D";
			else if (selectedIndex_BEL_6 == 7)
				BEL_6 = "E";
			else if (selectedIndex_BEL_6 == 8)
				BEL_6 = "F";
			else if (selectedIndex_BEL_6 == 9)
				BEL_6 = "G";
			else if (selectedIndex_BEL_6 == 10)
				BEL_6 = "H";
			else if (selectedIndex_BEL_6 == 11)
				BEL_6 = "I";
			else if (selectedIndex_BEL_6 == 12)
				BEL_6 = "J";
			else if (selectedIndex_BEL_6 == 13)
				BEL_6 = "K";
			else if (selectedIndex_BEL_6 == 14)
				BEL_6 = "L";

			std::string WAKTU_7 = context.marshal_as<std::string>(textBox51->Text);
			int selectedIndex_BEL_7 = comboBox8->SelectedIndex;
			std::string BEL_7;
			if (selectedIndex_BEL_7 == 0)
				BEL_7 = "INFO";
			else if (selectedIndex_BEL_7 == 1)
				BEL_7 = "APEL";
			else if (selectedIndex_BEL_7 == 2)
				BEL_7 = "DARURAT";
			else if (selectedIndex_BEL_7 == 3)
				BEL_7 = "A";
			else if (selectedIndex_BEL_7 == 4)
				BEL_7 = "B";
			else if (selectedIndex_BEL_7 == 5)
				BEL_7 = "C";
			else if (selectedIndex_BEL_7 == 6)
				BEL_7 = "D";
			else if (selectedIndex_BEL_7 == 7)
				BEL_7 = "E";
			else if (selectedIndex_BEL_7 == 8)
				BEL_7 = "F";
			else if (selectedIndex_BEL_7 == 9)
				BEL_7 = "G";
			else if (selectedIndex_BEL_7 == 10)
				BEL_7 = "H";
			else if (selectedIndex_BEL_7 == 11)
				BEL_7 = "I";
			else if (selectedIndex_BEL_7 == 12)
				BEL_7 = "J";
			else if (selectedIndex_BEL_7 == 13)
				BEL_7 = "K";
			else if (selectedIndex_BEL_7 == 14)
				BEL_7 = "L";

			std::string WAKTU_8 = context.marshal_as<std::string>(textBox52->Text);
			int selectedIndex_BEL_8 = comboBox9->SelectedIndex;
			std::string BEL_8;
			if (selectedIndex_BEL_8 == 0)
				BEL_8 = "INFO";
			else if (selectedIndex_BEL_8 == 1)
				BEL_8 = "APEL";
			else if (selectedIndex_BEL_8 == 2)
				BEL_8 = "DARURAT";
			else if (selectedIndex_BEL_8 == 3)
				BEL_8 = "A";
			else if (selectedIndex_BEL_8 == 4)
				BEL_8 = "B";
			else if (selectedIndex_BEL_8 == 5)
				BEL_8 = "C";
			else if (selectedIndex_BEL_8 == 6)
				BEL_8 = "D";
			else if (selectedIndex_BEL_8 == 7)
				BEL_8 = "E";
			else if (selectedIndex_BEL_8 == 8)
				BEL_8 = "F";
			else if (selectedIndex_BEL_8 == 9)
				BEL_8 = "G";
			else if (selectedIndex_BEL_8 == 10)
				BEL_8 = "H";
			else if (selectedIndex_BEL_8 == 11)
				BEL_8 = "I";
			else if (selectedIndex_BEL_8 == 12)
				BEL_8 = "J";
			else if (selectedIndex_BEL_8 == 13)
				BEL_8 = "K";
			else if (selectedIndex_BEL_8 == 14)
				BEL_8 = "L";

			std::string WAKTU_9 = context.marshal_as<std::string>(textBox53->Text);
			int selectedIndex_BEL_9 = comboBox10->SelectedIndex;
			std::string BEL_9;
			if (selectedIndex_BEL_9 == 0)
				BEL_9 = "INFO";
			else if (selectedIndex_BEL_9 == 1)
				BEL_9 = "APEL";
			else if (selectedIndex_BEL_9 == 2)
				BEL_9 = "DARURAT";
			else if (selectedIndex_BEL_9 == 3)
				BEL_9 = "A";
			else if (selectedIndex_BEL_9 == 4)
				BEL_9 = "B";
			else if (selectedIndex_BEL_9 == 5)
				BEL_9 = "C";
			else if (selectedIndex_BEL_9 == 6)
				BEL_9 = "D";
			else if (selectedIndex_BEL_9 == 7)
				BEL_9 = "E";
			else if (selectedIndex_BEL_9 == 8)
				BEL_9 = "F";
			else if (selectedIndex_BEL_9 == 9)
				BEL_9 = "G";
			else if (selectedIndex_BEL_9 == 10)
				BEL_9 = "H";
			else if (selectedIndex_BEL_9 == 11)
				BEL_9 = "I";
			else if (selectedIndex_BEL_9 == 12)
				BEL_9 = "J";
			else if (selectedIndex_BEL_9 == 13)
				BEL_9 = "K";
			else if (selectedIndex_BEL_9 == 14)
				BEL_9 = "L";

			std::string WAKTU_10 = context.marshal_as<std::string>(textBox54->Text);
			int selectedIndex_BEL_10 = comboBox11->SelectedIndex;
			std::string BEL_10;
			if (selectedIndex_BEL_10 == 0)
				BEL_10 = "INFO";
			else if (selectedIndex_BEL_10 == 1)
				BEL_10 = "APEL";
			else if (selectedIndex_BEL_10 == 2)
				BEL_10 = "DARURAT";
			else if (selectedIndex_BEL_10 == 3)
				BEL_10 = "A";
			else if (selectedIndex_BEL_10 == 4)
				BEL_10 = "B";
			else if (selectedIndex_BEL_10 == 5)
				BEL_10 = "C";
			else if (selectedIndex_BEL_10 == 6)
				BEL_10 = "D";
			else if (selectedIndex_BEL_10 == 7)
				BEL_10 = "E";
			else if (selectedIndex_BEL_10 == 8)
				BEL_10 = "F";
			else if (selectedIndex_BEL_10 == 9)
				BEL_10 = "G";
			else if (selectedIndex_BEL_10 == 10)
				BEL_10 = "H";
			else if (selectedIndex_BEL_10 == 11)
				BEL_10 = "I";
			else if (selectedIndex_BEL_10 == 12)
				BEL_10 = "J";
			else if (selectedIndex_BEL_10 == 13)
				BEL_10 = "K";
			else if (selectedIndex_BEL_10 == 14)
				BEL_10 = "L";

			std::string WAKTU_11 = context.marshal_as<std::string>(textBox55->Text);
			int selectedIndex_BEL_11 = comboBox12->SelectedIndex;
			std::string BEL_11;
			if (selectedIndex_BEL_11 == 0)
				BEL_11 = "INFO";
			else if (selectedIndex_BEL_11 == 1)
				BEL_11 = "APEL";
			else if (selectedIndex_BEL_11 == 2)
				BEL_11 = "DARURAT";
			else if (selectedIndex_BEL_11 == 3)
				BEL_11 = "A";
			else if (selectedIndex_BEL_11 == 4)
				BEL_11 = "B";
			else if (selectedIndex_BEL_11 == 5)
				BEL_11 = "C";
			else if (selectedIndex_BEL_11 == 6)
				BEL_11 = "D";
			else if (selectedIndex_BEL_11 == 7)
				BEL_11 = "E";
			else if (selectedIndex_BEL_11 == 8)
				BEL_11 = "F";
			else if (selectedIndex_BEL_11 == 9)
				BEL_11 = "G";
			else if (selectedIndex_BEL_11 == 10)
				BEL_11 = "H";
			else if (selectedIndex_BEL_11 == 11)
				BEL_11 = "I";
			else if (selectedIndex_BEL_11 == 12)
				BEL_11 = "J";
			else if (selectedIndex_BEL_11 == 13)
				BEL_11 = "K";
			else if (selectedIndex_BEL_11 == 14)
				BEL_11 = "L";

			std::string WAKTU_12 = context.marshal_as<std::string>(textBox56->Text);
			int selectedIndex_BEL_12 = comboBox13->SelectedIndex;
			std::string BEL_12;
			if (selectedIndex_BEL_12 == 0)
				BEL_12 = "INFO";
			else if (selectedIndex_BEL_12 == 1)
				BEL_12 = "APEL";
			else if (selectedIndex_BEL_12 == 2)
				BEL_12 = "DARURAT";
			else if (selectedIndex_BEL_12 == 3)
				BEL_12 = "A";
			else if (selectedIndex_BEL_12 == 4)
				BEL_12 = "B";
			else if (selectedIndex_BEL_12 == 5)
				BEL_12 = "C";
			else if (selectedIndex_BEL_12 == 6)
				BEL_12 = "D";
			else if (selectedIndex_BEL_12 == 7)
				BEL_12 = "E";
			else if (selectedIndex_BEL_12 == 8)
				BEL_12 = "F";
			else if (selectedIndex_BEL_12 == 9)
				BEL_12 = "G";
			else if (selectedIndex_BEL_12 == 10)
				BEL_12 = "H";
			else if (selectedIndex_BEL_12 == 11)
				BEL_12 = "I";
			else if (selectedIndex_BEL_12 == 12)
				BEL_12 = "J";
			else if (selectedIndex_BEL_12 == 13)
				BEL_12 = "K";
			else if (selectedIndex_BEL_12 == 14)
				BEL_12 = "L";

			std::string WAKTU_13 = context.marshal_as<std::string>(textBox57->Text);
			int selectedIndex_BEL_13 = comboBox14->SelectedIndex;
			std::string BEL_13;
			if (selectedIndex_BEL_13 == 0)
				BEL_13 = "INFO";
			else if (selectedIndex_BEL_13 == 1)
				BEL_13 = "APEL";
			else if (selectedIndex_BEL_13 == 2)
				BEL_13 = "DARURAT";
			else if (selectedIndex_BEL_13 == 3)
				BEL_13 = "A";
			else if (selectedIndex_BEL_13 == 4)
				BEL_13 = "B";
			else if (selectedIndex_BEL_13 == 5)
				BEL_13 = "C";
			else if (selectedIndex_BEL_13 == 6)
				BEL_13 = "D";
			else if (selectedIndex_BEL_13 == 7)
				BEL_13 = "E";
			else if (selectedIndex_BEL_13 == 8)
				BEL_13 = "F";
			else if (selectedIndex_BEL_13 == 9)
				BEL_13 = "G";
			else if (selectedIndex_BEL_13 == 10)
				BEL_13 = "H";
			else if (selectedIndex_BEL_13 == 11)
				BEL_13 = "I";
			else if (selectedIndex_BEL_13 == 12)
				BEL_13 = "J";
			else if (selectedIndex_BEL_13 == 13)
				BEL_13 = "K";
			else if (selectedIndex_BEL_13 == 14)
				BEL_13 = "L";
			
			std::string WAKTU_14 = context.marshal_as<std::string>(textBox58->Text);
			int selectedIndex_BEL_14 = comboBox15->SelectedIndex;
			std::string BEL_14;
			if (selectedIndex_BEL_14 == 0)
				BEL_14 = "INFO";
			else if (selectedIndex_BEL_14 == 1)
				BEL_14 = "APEL";
			else if (selectedIndex_BEL_14 == 2)
				BEL_14 = "DARURAT";
			else if (selectedIndex_BEL_14 == 3)
				BEL_14 = "A";
			else if (selectedIndex_BEL_14 == 4)
				BEL_14 = "B";
			else if (selectedIndex_BEL_14 == 5)
				BEL_14 = "C";
			else if (selectedIndex_BEL_14 == 6)
				BEL_14 = "D";
			else if (selectedIndex_BEL_14 == 7)
				BEL_14 = "E";
			else if (selectedIndex_BEL_14 == 8)
				BEL_14 = "F";
			else if (selectedIndex_BEL_14 == 9)
				BEL_14 = "G";
			else if (selectedIndex_BEL_14 == 10)
				BEL_14 = "H";
			else if (selectedIndex_BEL_14 == 11)
				BEL_14 = "I";
			else if (selectedIndex_BEL_14 == 12)
				BEL_14 = "J";
			else if (selectedIndex_BEL_14 == 13)
				BEL_14 = "K";
			else if (selectedIndex_BEL_14 == 14)
				BEL_14 = "L";


			newfile.open("ahad.konf", std::ios::out);  // open a file to perform write operation using file object
			if (newfile.is_open()) //checking whether the file is open
			{
				newfile << WAKTU_1 << std::endl; newfile << selectedIndex_BEL_1 << std::endl;
				newfile << WAKTU_2 << std::endl; newfile << selectedIndex_BEL_2 << std::endl;
				newfile << WAKTU_3 << std::endl; newfile << selectedIndex_BEL_3 << std::endl;
				newfile << WAKTU_4 << std::endl; newfile << selectedIndex_BEL_4 << std::endl;
				newfile << WAKTU_5 << std::endl; newfile << selectedIndex_BEL_5 << std::endl;
				newfile << WAKTU_6 << std::endl; newfile << selectedIndex_BEL_6 << std::endl;
				newfile << WAKTU_7 << std::endl; newfile << selectedIndex_BEL_7 << std::endl;
				newfile << WAKTU_8 << std::endl; newfile << selectedIndex_BEL_8 << std::endl;
				newfile << WAKTU_9 << std::endl; newfile << selectedIndex_BEL_9 << std::endl;
				newfile << WAKTU_10 << std::endl; newfile << selectedIndex_BEL_10 << std::endl;
				newfile << WAKTU_11 << std::endl; newfile << selectedIndex_BEL_11 << std::endl;
				newfile << WAKTU_12 << std::endl; newfile << selectedIndex_BEL_12 << std::endl;
				newfile << WAKTU_13 << std::endl; newfile << selectedIndex_BEL_13 << std::endl;
				newfile << WAKTU_14 << std::endl; newfile << selectedIndex_BEL_14 << std::endl;
				//newfile << WAKTU_15 << std::endl; newfile << selectedIndex_BEL_15 << std::endl;
			}
			newfile.close();
		}
		if (selectedIndex_HARI == 1) {
			HARI = "SENIN";
			msclr::interop::marshal_context context;
			std::string WAKTU_1 = context.marshal_as<std::string>(textBox45->Text);
			int selectedIndex_BEL_1 = comboBox2->SelectedIndex;
			std::string BEL_1;
			if (selectedIndex_BEL_1 == 0)
				BEL_1 = "INFO";
			else if (selectedIndex_BEL_1 == 1)
				BEL_1 = "APEL";
			else if (selectedIndex_BEL_1 == 2)
				BEL_1 = "DARURAT";
			else if (selectedIndex_BEL_1 == 3)
				BEL_1 = "A";
			else if (selectedIndex_BEL_1 == 4)
				BEL_1 = "B";
			else if (selectedIndex_BEL_1 == 5)
				BEL_1 = "C";
			else if (selectedIndex_BEL_1 == 6)
				BEL_1 = "D";
			else if (selectedIndex_BEL_1 == 7)
				BEL_1 = "E";
			else if (selectedIndex_BEL_1 == 8)
				BEL_1 = "F";
			else if (selectedIndex_BEL_1 == 9)
				BEL_1 = "G";
			else if (selectedIndex_BEL_1 == 10)
				BEL_1 = "H";
			else if (selectedIndex_BEL_1 == 11)
				BEL_1 = "I";
			else if (selectedIndex_BEL_1 == 12)
				BEL_1 = "J";
			else if (selectedIndex_BEL_1 == 13)
				BEL_1 = "K";
			else if (selectedIndex_BEL_1 == 14)
				BEL_1 = "L";

			std::string WAKTU_2 = context.marshal_as<std::string>(textBox46->Text);
			int selectedIndex_BEL_2 = comboBox3->SelectedIndex;
			std::string BEL_2;
			if (selectedIndex_BEL_2 == 0)
				BEL_2 = "INFO";
			else if (selectedIndex_BEL_2 == 1)
				BEL_2 = "APEL";
			else if (selectedIndex_BEL_2 == 2)
				BEL_2 = "DARURAT";
			else if (selectedIndex_BEL_2 == 3)
				BEL_2 = "A";
			else if (selectedIndex_BEL_2 == 4)
				BEL_2 = "B";
			else if (selectedIndex_BEL_2 == 5)
				BEL_2 = "C";
			else if (selectedIndex_BEL_2 == 6)
				BEL_2 = "D";
			else if (selectedIndex_BEL_2 == 7)
				BEL_2 = "E";
			else if (selectedIndex_BEL_2 == 8)
				BEL_2 = "F";
			else if (selectedIndex_BEL_2 == 9)
				BEL_2 = "G";
			else if (selectedIndex_BEL_2 == 10)
				BEL_2 = "H";
			else if (selectedIndex_BEL_2 == 11)
				BEL_2 = "I";
			else if (selectedIndex_BEL_2 == 12)
				BEL_2 = "J";
			else if (selectedIndex_BEL_2 == 13)
				BEL_2 = "K";
			else if (selectedIndex_BEL_2 == 14)
				BEL_2 = "L";

			std::string WAKTU_3 = context.marshal_as<std::string>(textBox47->Text);
			int selectedIndex_BEL_3 = comboBox4->SelectedIndex;
			std::string BEL_3;
			if (selectedIndex_BEL_3 == 0)
				BEL_3 = "INFO";
			else if (selectedIndex_BEL_3 == 1)
				BEL_3 = "APEL";
			else if (selectedIndex_BEL_3 == 2)
				BEL_3 = "DARURAT";
			else if (selectedIndex_BEL_3 == 3)
				BEL_3 = "A";
			else if (selectedIndex_BEL_3 == 4)
				BEL_3 = "B";
			else if (selectedIndex_BEL_3 == 5)
				BEL_3 = "C";
			else if (selectedIndex_BEL_3 == 6)
				BEL_3 = "D";
			else if (selectedIndex_BEL_3 == 7)
				BEL_3 = "E";
			else if (selectedIndex_BEL_3 == 8)
				BEL_3 = "F";
			else if (selectedIndex_BEL_3 == 9)
				BEL_3 = "G";
			else if (selectedIndex_BEL_3 == 10)
				BEL_3 = "H";
			else if (selectedIndex_BEL_3 == 11)
				BEL_3 = "I";
			else if (selectedIndex_BEL_3 == 12)
				BEL_3 = "J";
			else if (selectedIndex_BEL_3 == 13)
				BEL_3 = "K";
			else if (selectedIndex_BEL_3 == 14)
				BEL_3 = "L";

			std::string WAKTU_4 = context.marshal_as<std::string>(textBox48->Text);
			int selectedIndex_BEL_4 = comboBox5->SelectedIndex;
			std::string BEL_4;
			if (selectedIndex_BEL_4 == 0)
				BEL_4 = "INFO";
			else if (selectedIndex_BEL_4 == 1)
				BEL_4 = "APEL";
			else if (selectedIndex_BEL_4 == 2)
				BEL_4 = "DARURAT";
			else if (selectedIndex_BEL_4 == 3)
				BEL_4 = "A";
			else if (selectedIndex_BEL_4 == 4)
				BEL_4 = "B";
			else if (selectedIndex_BEL_4 == 5)
				BEL_4 = "C";
			else if (selectedIndex_BEL_4 == 6)
				BEL_4 = "D";
			else if (selectedIndex_BEL_4 == 7)
				BEL_4 = "E";
			else if (selectedIndex_BEL_4 == 8)
				BEL_4 = "F";
			else if (selectedIndex_BEL_4 == 9)
				BEL_4 = "G";
			else if (selectedIndex_BEL_4 == 10)
				BEL_4 = "H";
			else if (selectedIndex_BEL_4 == 11)
				BEL_4 = "I";
			else if (selectedIndex_BEL_4 == 12)
				BEL_4 = "J";
			else if (selectedIndex_BEL_4 == 13)
				BEL_4 = "K";
			else if (selectedIndex_BEL_4 == 14)
				BEL_4 = "L";

			std::string WAKTU_5 = context.marshal_as<std::string>(textBox49->Text);
			int selectedIndex_BEL_5 = comboBox6->SelectedIndex;
			std::string BEL_5;
			if (selectedIndex_BEL_5 == 0)
				BEL_5 = "INFO";
			else if (selectedIndex_BEL_5 == 1)
				BEL_5 = "APEL";
			else if (selectedIndex_BEL_5 == 2)
				BEL_5 = "DARURAT";
			else if (selectedIndex_BEL_5 == 3)
				BEL_5 = "A";
			else if (selectedIndex_BEL_5 == 4)
				BEL_5 = "B";
			else if (selectedIndex_BEL_5 == 5)
				BEL_5 = "C";
			else if (selectedIndex_BEL_5 == 6)
				BEL_5 = "D";
			else if (selectedIndex_BEL_5 == 7)
				BEL_5 = "E";
			else if (selectedIndex_BEL_5 == 8)
				BEL_5 = "F";
			else if (selectedIndex_BEL_5 == 9)
				BEL_5 = "G";
			else if (selectedIndex_BEL_5 == 10)
				BEL_5 = "H";
			else if (selectedIndex_BEL_5 == 11)
				BEL_5 = "I";
			else if (selectedIndex_BEL_5 == 12)
				BEL_5 = "J";
			else if (selectedIndex_BEL_5 == 13)
				BEL_5 = "K";
			else if (selectedIndex_BEL_5 == 14)
				BEL_5 = "L";

			std::string WAKTU_6 = context.marshal_as<std::string>(textBox50->Text);
			int selectedIndex_BEL_6 = comboBox7->SelectedIndex;
			std::string BEL_6;
			if (selectedIndex_BEL_6 == 0)
				BEL_6 = "INFO";
			else if (selectedIndex_BEL_6 == 1)
				BEL_6 = "APEL";
			else if (selectedIndex_BEL_6 == 2)
				BEL_6 = "DARURAT";
			else if (selectedIndex_BEL_6 == 3)
				BEL_6 = "A";
			else if (selectedIndex_BEL_6 == 4)
				BEL_6 = "B";
			else if (selectedIndex_BEL_6 == 5)
				BEL_6 = "C";
			else if (selectedIndex_BEL_6 == 6)
				BEL_6 = "D";
			else if (selectedIndex_BEL_6 == 7)
				BEL_6 = "E";
			else if (selectedIndex_BEL_6 == 8)
				BEL_6 = "F";
			else if (selectedIndex_BEL_6 == 9)
				BEL_6 = "G";
			else if (selectedIndex_BEL_6 == 10)
				BEL_6 = "H";
			else if (selectedIndex_BEL_6 == 11)
				BEL_6 = "I";
			else if (selectedIndex_BEL_6 == 12)
				BEL_6 = "J";
			else if (selectedIndex_BEL_6 == 13)
				BEL_6 = "K";
			else if (selectedIndex_BEL_6 == 14)
				BEL_6 = "L";

			std::string WAKTU_7 = context.marshal_as<std::string>(textBox51->Text);
			int selectedIndex_BEL_7 = comboBox8->SelectedIndex;
			std::string BEL_7;
			if (selectedIndex_BEL_7 == 0)
				BEL_7 = "INFO";
			else if (selectedIndex_BEL_7 == 1)
				BEL_7 = "APEL";
			else if (selectedIndex_BEL_7 == 2)
				BEL_7 = "DARURAT";
			else if (selectedIndex_BEL_7 == 3)
				BEL_7 = "A";
			else if (selectedIndex_BEL_7 == 4)
				BEL_7 = "B";
			else if (selectedIndex_BEL_7 == 5)
				BEL_7 = "C";
			else if (selectedIndex_BEL_7 == 6)
				BEL_7 = "D";
			else if (selectedIndex_BEL_7 == 7)
				BEL_7 = "E";
			else if (selectedIndex_BEL_7 == 8)
				BEL_7 = "F";
			else if (selectedIndex_BEL_7 == 9)
				BEL_7 = "G";
			else if (selectedIndex_BEL_7 == 10)
				BEL_7 = "H";
			else if (selectedIndex_BEL_7 == 11)
				BEL_7 = "I";
			else if (selectedIndex_BEL_7 == 12)
				BEL_7 = "J";
			else if (selectedIndex_BEL_7 == 13)
				BEL_7 = "K";
			else if (selectedIndex_BEL_7 == 14)
				BEL_7 = "L";

			std::string WAKTU_8 = context.marshal_as<std::string>(textBox52->Text);
			int selectedIndex_BEL_8 = comboBox9->SelectedIndex;
			std::string BEL_8;
			if (selectedIndex_BEL_8 == 0)
				BEL_8 = "INFO";
			else if (selectedIndex_BEL_8 == 1)
				BEL_8 = "APEL";
			else if (selectedIndex_BEL_8 == 2)
				BEL_8 = "DARURAT";
			else if (selectedIndex_BEL_8 == 3)
				BEL_8 = "A";
			else if (selectedIndex_BEL_8 == 4)
				BEL_8 = "B";
			else if (selectedIndex_BEL_8 == 5)
				BEL_8 = "C";
			else if (selectedIndex_BEL_8 == 6)
				BEL_8 = "D";
			else if (selectedIndex_BEL_8 == 7)
				BEL_8 = "E";
			else if (selectedIndex_BEL_8 == 8)
				BEL_8 = "F";
			else if (selectedIndex_BEL_8 == 9)
				BEL_8 = "G";
			else if (selectedIndex_BEL_8 == 10)
				BEL_8 = "H";
			else if (selectedIndex_BEL_8 == 11)
				BEL_8 = "I";
			else if (selectedIndex_BEL_8 == 12)
				BEL_8 = "J";
			else if (selectedIndex_BEL_8 == 13)
				BEL_8 = "K";
			else if (selectedIndex_BEL_8 == 14)
				BEL_8 = "L";

			std::string WAKTU_9 = context.marshal_as<std::string>(textBox53->Text);
			int selectedIndex_BEL_9 = comboBox10->SelectedIndex;
			std::string BEL_9;
			if (selectedIndex_BEL_9 == 0)
				BEL_9 = "INFO";
			else if (selectedIndex_BEL_9 == 1)
				BEL_9 = "APEL";
			else if (selectedIndex_BEL_9 == 2)
				BEL_9 = "DARURAT";
			else if (selectedIndex_BEL_9 == 3)
				BEL_9 = "A";
			else if (selectedIndex_BEL_9 == 4)
				BEL_9 = "B";
			else if (selectedIndex_BEL_9 == 5)
				BEL_9 = "C";
			else if (selectedIndex_BEL_9 == 6)
				BEL_9 = "D";
			else if (selectedIndex_BEL_9 == 7)
				BEL_9 = "E";
			else if (selectedIndex_BEL_9 == 8)
				BEL_9 = "F";
			else if (selectedIndex_BEL_9 == 9)
				BEL_9 = "G";
			else if (selectedIndex_BEL_9 == 10)
				BEL_9 = "H";
			else if (selectedIndex_BEL_9 == 11)
				BEL_9 = "I";
			else if (selectedIndex_BEL_9 == 12)
				BEL_9 = "J";
			else if (selectedIndex_BEL_9 == 13)
				BEL_9 = "K";
			else if (selectedIndex_BEL_9 == 14)
				BEL_9 = "L";

			std::string WAKTU_10 = context.marshal_as<std::string>(textBox54->Text);
			int selectedIndex_BEL_10 = comboBox11->SelectedIndex;
			std::string BEL_10;
			if (selectedIndex_BEL_10 == 0)
				BEL_10 = "INFO";
			else if (selectedIndex_BEL_10 == 1)
				BEL_10 = "APEL";
			else if (selectedIndex_BEL_10 == 2)
				BEL_10 = "DARURAT";
			else if (selectedIndex_BEL_10 == 3)
				BEL_10 = "A";
			else if (selectedIndex_BEL_10 == 4)
				BEL_10 = "B";
			else if (selectedIndex_BEL_10 == 5)
				BEL_10 = "C";
			else if (selectedIndex_BEL_10 == 6)
				BEL_10 = "D";
			else if (selectedIndex_BEL_10 == 7)
				BEL_10 = "E";
			else if (selectedIndex_BEL_10 == 8)
				BEL_10 = "F";
			else if (selectedIndex_BEL_10 == 9)
				BEL_10 = "G";
			else if (selectedIndex_BEL_10 == 10)
				BEL_10 = "H";
			else if (selectedIndex_BEL_10 == 11)
				BEL_10 = "I";
			else if (selectedIndex_BEL_10 == 12)
				BEL_10 = "J";
			else if (selectedIndex_BEL_10 == 13)
				BEL_10 = "K";
			else if (selectedIndex_BEL_10 == 14)
				BEL_10 = "L";

			std::string WAKTU_11 = context.marshal_as<std::string>(textBox55->Text);
			int selectedIndex_BEL_11 = comboBox12->SelectedIndex;
			std::string BEL_11;
			if (selectedIndex_BEL_11 == 0)
				BEL_11 = "INFO";
			else if (selectedIndex_BEL_11 == 1)
				BEL_11 = "APEL";
			else if (selectedIndex_BEL_11 == 2)
				BEL_11 = "DARURAT";
			else if (selectedIndex_BEL_11 == 3)
				BEL_11 = "A";
			else if (selectedIndex_BEL_11 == 4)
				BEL_11 = "B";
			else if (selectedIndex_BEL_11 == 5)
				BEL_11 = "C";
			else if (selectedIndex_BEL_11 == 6)
				BEL_11 = "D";
			else if (selectedIndex_BEL_11 == 7)
				BEL_11 = "E";
			else if (selectedIndex_BEL_11 == 8)
				BEL_11 = "F";
			else if (selectedIndex_BEL_11 == 9)
				BEL_11 = "G";
			else if (selectedIndex_BEL_11 == 10)
				BEL_11 = "H";
			else if (selectedIndex_BEL_11 == 11)
				BEL_11 = "I";
			else if (selectedIndex_BEL_11 == 12)
				BEL_11 = "J";
			else if (selectedIndex_BEL_11 == 13)
				BEL_11 = "K";
			else if (selectedIndex_BEL_11 == 14)
				BEL_11 = "L";

			std::string WAKTU_12 = context.marshal_as<std::string>(textBox56->Text);
			int selectedIndex_BEL_12 = comboBox13->SelectedIndex;
			std::string BEL_12;
			if (selectedIndex_BEL_12 == 0)
				BEL_12 = "INFO";
			else if (selectedIndex_BEL_12 == 1)
				BEL_12 = "APEL";
			else if (selectedIndex_BEL_12 == 2)
				BEL_12 = "DARURAT";
			else if (selectedIndex_BEL_12 == 3)
				BEL_12 = "A";
			else if (selectedIndex_BEL_12 == 4)
				BEL_12 = "B";
			else if (selectedIndex_BEL_12 == 5)
				BEL_12 = "C";
			else if (selectedIndex_BEL_12 == 6)
				BEL_12 = "D";
			else if (selectedIndex_BEL_12 == 7)
				BEL_12 = "E";
			else if (selectedIndex_BEL_12 == 8)
				BEL_12 = "F";
			else if (selectedIndex_BEL_12 == 9)
				BEL_12 = "G";
			else if (selectedIndex_BEL_12 == 10)
				BEL_12 = "H";
			else if (selectedIndex_BEL_12 == 11)
				BEL_12 = "I";
			else if (selectedIndex_BEL_12 == 12)
				BEL_12 = "J";
			else if (selectedIndex_BEL_12 == 13)
				BEL_12 = "K";
			else if (selectedIndex_BEL_12 == 14)
				BEL_12 = "L";

			std::string WAKTU_13 = context.marshal_as<std::string>(textBox57->Text);
			int selectedIndex_BEL_13 = comboBox14->SelectedIndex;
			std::string BEL_13;
			if (selectedIndex_BEL_13 == 0)
				BEL_13 = "INFO";
			else if (selectedIndex_BEL_13 == 1)
				BEL_13 = "APEL";
			else if (selectedIndex_BEL_13 == 2)
				BEL_13 = "DARURAT";
			else if (selectedIndex_BEL_13 == 3)
				BEL_13 = "A";
			else if (selectedIndex_BEL_13 == 4)
				BEL_13 = "B";
			else if (selectedIndex_BEL_13 == 5)
				BEL_13 = "C";
			else if (selectedIndex_BEL_13 == 6)
				BEL_13 = "D";
			else if (selectedIndex_BEL_13 == 7)
				BEL_13 = "E";
			else if (selectedIndex_BEL_13 == 8)
				BEL_13 = "F";
			else if (selectedIndex_BEL_13 == 9)
				BEL_13 = "G";
			else if (selectedIndex_BEL_13 == 10)
				BEL_13 = "H";
			else if (selectedIndex_BEL_13 == 11)
				BEL_13 = "I";
			else if (selectedIndex_BEL_13 == 12)
				BEL_13 = "J";
			else if (selectedIndex_BEL_13 == 13)
				BEL_13 = "K";
			else if (selectedIndex_BEL_13 == 14)
				BEL_13 = "L";

			std::string WAKTU_14 = context.marshal_as<std::string>(textBox58->Text);
			int selectedIndex_BEL_14 = comboBox15->SelectedIndex;
			std::string BEL_14;
			if (selectedIndex_BEL_14 == 0)
				BEL_14 = "INFO";
			else if (selectedIndex_BEL_14 == 1)
				BEL_14 = "APEL";
			else if (selectedIndex_BEL_14 == 2)
				BEL_14 = "DARURAT";
			else if (selectedIndex_BEL_14 == 3)
				BEL_14 = "A";
			else if (selectedIndex_BEL_14 == 4)
				BEL_14 = "B";
			else if (selectedIndex_BEL_14 == 5)
				BEL_14 = "C";
			else if (selectedIndex_BEL_14 == 6)
				BEL_14 = "D";
			else if (selectedIndex_BEL_14 == 7)
				BEL_14 = "E";
			else if (selectedIndex_BEL_14 == 8)
				BEL_14 = "F";
			else if (selectedIndex_BEL_14 == 9)
				BEL_14 = "G";
			else if (selectedIndex_BEL_14 == 10)
				BEL_14 = "H";
			else if (selectedIndex_BEL_14 == 11)
				BEL_14 = "I";
			else if (selectedIndex_BEL_14 == 12)
				BEL_14 = "J";
			else if (selectedIndex_BEL_14 == 13)
				BEL_14 = "K";
			else if (selectedIndex_BEL_14 == 14)
				BEL_14 = "L";


			newfile.open("senin.konf", std::ios::out);  // open a file to perform write operation using file object
			if (newfile.is_open()) //checking whether the file is open
			{
				newfile << WAKTU_1 << std::endl; newfile << selectedIndex_BEL_1 << std::endl;
				newfile << WAKTU_2 << std::endl; newfile << selectedIndex_BEL_2 << std::endl;
				newfile << WAKTU_3 << std::endl; newfile << selectedIndex_BEL_3 << std::endl;
				newfile << WAKTU_4 << std::endl; newfile << selectedIndex_BEL_4 << std::endl;
				newfile << WAKTU_5 << std::endl; newfile << selectedIndex_BEL_5 << std::endl;
				newfile << WAKTU_6 << std::endl; newfile << selectedIndex_BEL_6 << std::endl;
				newfile << WAKTU_7 << std::endl; newfile << selectedIndex_BEL_7 << std::endl;
				newfile << WAKTU_8 << std::endl; newfile << selectedIndex_BEL_8 << std::endl;
				newfile << WAKTU_9 << std::endl; newfile << selectedIndex_BEL_9 << std::endl;
				newfile << WAKTU_10 << std::endl; newfile << selectedIndex_BEL_10 << std::endl;
				newfile << WAKTU_11 << std::endl; newfile << selectedIndex_BEL_11 << std::endl;
				newfile << WAKTU_12 << std::endl; newfile << selectedIndex_BEL_12 << std::endl;
				newfile << WAKTU_13 << std::endl; newfile << selectedIndex_BEL_13 << std::endl;
				newfile << WAKTU_14 << std::endl; newfile << selectedIndex_BEL_14 << std::endl;
			}
			newfile.close();
		}
		if (selectedIndex_HARI == 2) {
			HARI = "SELASA";
			msclr::interop::marshal_context context;
			std::string WAKTU_1 = context.marshal_as<std::string>(textBox45->Text);
			int selectedIndex_BEL_1 = comboBox2->SelectedIndex;
			std::string BEL_1;
			if (selectedIndex_BEL_1 == 0)
				BEL_1 = "INFO";
			else if (selectedIndex_BEL_1 == 1)
				BEL_1 = "APEL";
			else if (selectedIndex_BEL_1 == 2)
				BEL_1 = "DARURAT";
			else if (selectedIndex_BEL_1 == 3)
				BEL_1 = "A";
			else if (selectedIndex_BEL_1 == 4)
				BEL_1 = "B";
			else if (selectedIndex_BEL_1 == 5)
				BEL_1 = "C";
			else if (selectedIndex_BEL_1 == 6)
				BEL_1 = "D";
			else if (selectedIndex_BEL_1 == 7)
				BEL_1 = "E";
			else if (selectedIndex_BEL_1 == 8)
				BEL_1 = "F";
			else if (selectedIndex_BEL_1 == 9)
				BEL_1 = "G";
			else if (selectedIndex_BEL_1 == 10)
				BEL_1 = "H";
			else if (selectedIndex_BEL_1 == 11)
				BEL_1 = "I";
			else if (selectedIndex_BEL_1 == 12)
				BEL_1 = "J";
			else if (selectedIndex_BEL_1 == 13)
				BEL_1 = "K";
			else if (selectedIndex_BEL_1 == 14)
				BEL_1 = "L";

			std::string WAKTU_2 = context.marshal_as<std::string>(textBox46->Text);
			int selectedIndex_BEL_2 = comboBox3->SelectedIndex;
			std::string BEL_2;
			if (selectedIndex_BEL_2 == 0)
				BEL_2 = "INFO";
			else if (selectedIndex_BEL_2 == 1)
				BEL_2 = "APEL";
			else if (selectedIndex_BEL_2 == 2)
				BEL_2 = "DARURAT";
			else if (selectedIndex_BEL_2 == 3)
				BEL_2 = "A";
			else if (selectedIndex_BEL_2 == 4)
				BEL_2 = "B";
			else if (selectedIndex_BEL_2 == 5)
				BEL_2 = "C";
			else if (selectedIndex_BEL_2 == 6)
				BEL_2 = "D";
			else if (selectedIndex_BEL_2 == 7)
				BEL_2 = "E";
			else if (selectedIndex_BEL_2 == 8)
				BEL_2 = "F";
			else if (selectedIndex_BEL_2 == 9)
				BEL_2 = "G";
			else if (selectedIndex_BEL_2 == 10)
				BEL_2 = "H";
			else if (selectedIndex_BEL_2 == 11)
				BEL_2 = "I";
			else if (selectedIndex_BEL_2 == 12)
				BEL_2 = "J";
			else if (selectedIndex_BEL_2 == 13)
				BEL_2 = "K";
			else if (selectedIndex_BEL_2 == 14)
				BEL_2 = "L";

			std::string WAKTU_3 = context.marshal_as<std::string>(textBox47->Text);
			int selectedIndex_BEL_3 = comboBox4->SelectedIndex;
			std::string BEL_3;
			if (selectedIndex_BEL_3 == 0)
				BEL_3 = "INFO";
			else if (selectedIndex_BEL_3 == 1)
				BEL_3 = "APEL";
			else if (selectedIndex_BEL_3 == 2)
				BEL_3 = "DARURAT";
			else if (selectedIndex_BEL_3 == 3)
				BEL_3 = "A";
			else if (selectedIndex_BEL_3 == 4)
				BEL_3 = "B";
			else if (selectedIndex_BEL_3 == 5)
				BEL_3 = "C";
			else if (selectedIndex_BEL_3 == 6)
				BEL_3 = "D";
			else if (selectedIndex_BEL_3 == 7)
				BEL_3 = "E";
			else if (selectedIndex_BEL_3 == 8)
				BEL_3 = "F";
			else if (selectedIndex_BEL_3 == 9)
				BEL_3 = "G";
			else if (selectedIndex_BEL_3 == 10)
				BEL_3 = "H";
			else if (selectedIndex_BEL_3 == 11)
				BEL_3 = "I";
			else if (selectedIndex_BEL_3 == 12)
				BEL_3 = "J";
			else if (selectedIndex_BEL_3 == 13)
				BEL_3 = "K";
			else if (selectedIndex_BEL_3 == 14)
				BEL_3 = "L";

			std::string WAKTU_4 = context.marshal_as<std::string>(textBox48->Text);
			int selectedIndex_BEL_4 = comboBox5->SelectedIndex;
			std::string BEL_4;
			if (selectedIndex_BEL_4 == 0)
				BEL_4 = "INFO";
			else if (selectedIndex_BEL_4 == 1)
				BEL_4 = "APEL";
			else if (selectedIndex_BEL_4 == 2)
				BEL_4 = "DARURAT";
			else if (selectedIndex_BEL_4 == 3)
				BEL_4 = "A";
			else if (selectedIndex_BEL_4 == 4)
				BEL_4 = "B";
			else if (selectedIndex_BEL_4 == 5)
				BEL_4 = "C";
			else if (selectedIndex_BEL_4 == 6)
				BEL_4 = "D";
			else if (selectedIndex_BEL_4 == 7)
				BEL_4 = "E";
			else if (selectedIndex_BEL_4 == 8)
				BEL_4 = "F";
			else if (selectedIndex_BEL_4 == 9)
				BEL_4 = "G";
			else if (selectedIndex_BEL_4 == 10)
				BEL_4 = "H";
			else if (selectedIndex_BEL_4 == 11)
				BEL_4 = "I";
			else if (selectedIndex_BEL_4 == 12)
				BEL_4 = "J";
			else if (selectedIndex_BEL_4 == 13)
				BEL_4 = "K";
			else if (selectedIndex_BEL_4 == 14)
				BEL_4 = "L";

			std::string WAKTU_5 = context.marshal_as<std::string>(textBox49->Text);
			int selectedIndex_BEL_5 = comboBox6->SelectedIndex;
			std::string BEL_5;
			if (selectedIndex_BEL_5 == 0)
				BEL_5 = "INFO";
			else if (selectedIndex_BEL_5 == 1)
				BEL_5 = "APEL";
			else if (selectedIndex_BEL_5 == 2)
				BEL_5 = "DARURAT";
			else if (selectedIndex_BEL_5 == 3)
				BEL_5 = "A";
			else if (selectedIndex_BEL_5 == 4)
				BEL_5 = "B";
			else if (selectedIndex_BEL_5 == 5)
				BEL_5 = "C";
			else if (selectedIndex_BEL_5 == 6)
				BEL_5 = "D";
			else if (selectedIndex_BEL_5 == 7)
				BEL_5 = "E";
			else if (selectedIndex_BEL_5 == 8)
				BEL_5 = "F";
			else if (selectedIndex_BEL_5 == 9)
				BEL_5 = "G";
			else if (selectedIndex_BEL_5 == 10)
				BEL_5 = "H";
			else if (selectedIndex_BEL_5 == 11)
				BEL_5 = "I";
			else if (selectedIndex_BEL_5 == 12)
				BEL_5 = "J";
			else if (selectedIndex_BEL_5 == 13)
				BEL_5 = "K";
			else if (selectedIndex_BEL_5 == 14)
				BEL_5 = "L";

			std::string WAKTU_6 = context.marshal_as<std::string>(textBox50->Text);
			int selectedIndex_BEL_6 = comboBox7->SelectedIndex;
			std::string BEL_6;
			if (selectedIndex_BEL_6 == 0)
				BEL_6 = "INFO";
			else if (selectedIndex_BEL_6 == 1)
				BEL_6 = "APEL";
			else if (selectedIndex_BEL_6 == 2)
				BEL_6 = "DARURAT";
			else if (selectedIndex_BEL_6 == 3)
				BEL_6 = "A";
			else if (selectedIndex_BEL_6 == 4)
				BEL_6 = "B";
			else if (selectedIndex_BEL_6 == 5)
				BEL_6 = "C";
			else if (selectedIndex_BEL_6 == 6)
				BEL_6 = "D";
			else if (selectedIndex_BEL_6 == 7)
				BEL_6 = "E";
			else if (selectedIndex_BEL_6 == 8)
				BEL_6 = "F";
			else if (selectedIndex_BEL_6 == 9)
				BEL_6 = "G";
			else if (selectedIndex_BEL_6 == 10)
				BEL_6 = "H";
			else if (selectedIndex_BEL_6 == 11)
				BEL_6 = "I";
			else if (selectedIndex_BEL_6 == 12)
				BEL_6 = "J";
			else if (selectedIndex_BEL_6 == 13)
				BEL_6 = "K";
			else if (selectedIndex_BEL_6 == 14)
				BEL_6 = "L";

			std::string WAKTU_7 = context.marshal_as<std::string>(textBox51->Text);
			int selectedIndex_BEL_7 = comboBox8->SelectedIndex;
			std::string BEL_7;
			if (selectedIndex_BEL_7 == 0)
				BEL_7 = "INFO";
			else if (selectedIndex_BEL_7 == 1)
				BEL_7 = "APEL";
			else if (selectedIndex_BEL_7 == 2)
				BEL_7 = "DARURAT";
			else if (selectedIndex_BEL_7 == 3)
				BEL_7 = "A";
			else if (selectedIndex_BEL_7 == 4)
				BEL_7 = "B";
			else if (selectedIndex_BEL_7 == 5)
				BEL_7 = "C";
			else if (selectedIndex_BEL_7 == 6)
				BEL_7 = "D";
			else if (selectedIndex_BEL_7 == 7)
				BEL_7 = "E";
			else if (selectedIndex_BEL_7 == 8)
				BEL_7 = "F";
			else if (selectedIndex_BEL_7 == 9)
				BEL_7 = "G";
			else if (selectedIndex_BEL_7 == 10)
				BEL_7 = "H";
			else if (selectedIndex_BEL_7 == 11)
				BEL_7 = "I";
			else if (selectedIndex_BEL_7 == 12)
				BEL_7 = "J";
			else if (selectedIndex_BEL_7 == 13)
				BEL_7 = "K";
			else if (selectedIndex_BEL_7 == 14)
				BEL_7 = "L";

			std::string WAKTU_8 = context.marshal_as<std::string>(textBox52->Text);
			int selectedIndex_BEL_8 = comboBox9->SelectedIndex;
			std::string BEL_8;
			if (selectedIndex_BEL_8 == 0)
				BEL_8 = "INFO";
			else if (selectedIndex_BEL_8 == 1)
				BEL_8 = "APEL";
			else if (selectedIndex_BEL_8 == 2)
				BEL_8 = "DARURAT";
			else if (selectedIndex_BEL_8 == 3)
				BEL_8 = "A";
			else if (selectedIndex_BEL_8 == 4)
				BEL_8 = "B";
			else if (selectedIndex_BEL_8 == 5)
				BEL_8 = "C";
			else if (selectedIndex_BEL_8 == 6)
				BEL_8 = "D";
			else if (selectedIndex_BEL_8 == 7)
				BEL_8 = "E";
			else if (selectedIndex_BEL_8 == 8)
				BEL_8 = "F";
			else if (selectedIndex_BEL_8 == 9)
				BEL_8 = "G";
			else if (selectedIndex_BEL_8 == 10)
				BEL_8 = "H";
			else if (selectedIndex_BEL_8 == 11)
				BEL_8 = "I";
			else if (selectedIndex_BEL_8 == 12)
				BEL_8 = "J";
			else if (selectedIndex_BEL_8 == 13)
				BEL_8 = "K";
			else if (selectedIndex_BEL_8 == 14)
				BEL_8 = "L";

			std::string WAKTU_9 = context.marshal_as<std::string>(textBox53->Text);
			int selectedIndex_BEL_9 = comboBox10->SelectedIndex;
			std::string BEL_9;
			if (selectedIndex_BEL_9 == 0)
				BEL_9 = "INFO";
			else if (selectedIndex_BEL_9 == 1)
				BEL_9 = "APEL";
			else if (selectedIndex_BEL_9 == 2)
				BEL_9 = "DARURAT";
			else if (selectedIndex_BEL_9 == 3)
				BEL_9 = "A";
			else if (selectedIndex_BEL_9 == 4)
				BEL_9 = "B";
			else if (selectedIndex_BEL_9 == 5)
				BEL_9 = "C";
			else if (selectedIndex_BEL_9 == 6)
				BEL_9 = "D";
			else if (selectedIndex_BEL_9 == 7)
				BEL_9 = "E";
			else if (selectedIndex_BEL_9 == 8)
				BEL_9 = "F";
			else if (selectedIndex_BEL_9 == 9)
				BEL_9 = "G";
			else if (selectedIndex_BEL_9 == 10)
				BEL_9 = "H";
			else if (selectedIndex_BEL_9 == 11)
				BEL_9 = "I";
			else if (selectedIndex_BEL_9 == 12)
				BEL_9 = "J";
			else if (selectedIndex_BEL_9 == 13)
				BEL_9 = "K";
			else if (selectedIndex_BEL_9 == 14)
				BEL_9 = "L";

			std::string WAKTU_10 = context.marshal_as<std::string>(textBox54->Text);
			int selectedIndex_BEL_10 = comboBox11->SelectedIndex;
			std::string BEL_10;
			if (selectedIndex_BEL_10 == 0)
				BEL_10 = "INFO";
			else if (selectedIndex_BEL_10 == 1)
				BEL_10 = "APEL";
			else if (selectedIndex_BEL_10 == 2)
				BEL_10 = "DARURAT";
			else if (selectedIndex_BEL_10 == 3)
				BEL_10 = "A";
			else if (selectedIndex_BEL_10 == 4)
				BEL_10 = "B";
			else if (selectedIndex_BEL_10 == 5)
				BEL_10 = "C";
			else if (selectedIndex_BEL_10 == 6)
				BEL_10 = "D";
			else if (selectedIndex_BEL_10 == 7)
				BEL_10 = "E";
			else if (selectedIndex_BEL_10 == 8)
				BEL_10 = "F";
			else if (selectedIndex_BEL_10 == 9)
				BEL_10 = "G";
			else if (selectedIndex_BEL_10 == 10)
				BEL_10 = "H";
			else if (selectedIndex_BEL_10 == 11)
				BEL_10 = "I";
			else if (selectedIndex_BEL_10 == 12)
				BEL_10 = "J";
			else if (selectedIndex_BEL_10 == 13)
				BEL_10 = "K";
			else if (selectedIndex_BEL_10 == 14)
				BEL_10 = "L";

			std::string WAKTU_11 = context.marshal_as<std::string>(textBox55->Text);
			int selectedIndex_BEL_11 = comboBox12->SelectedIndex;
			std::string BEL_11;
			if (selectedIndex_BEL_11 == 0)
				BEL_11 = "INFO";
			else if (selectedIndex_BEL_11 == 1)
				BEL_11 = "APEL";
			else if (selectedIndex_BEL_11 == 2)
				BEL_11 = "DARURAT";
			else if (selectedIndex_BEL_11 == 3)
				BEL_11 = "A";
			else if (selectedIndex_BEL_11 == 4)
				BEL_11 = "B";
			else if (selectedIndex_BEL_11 == 5)
				BEL_11 = "C";
			else if (selectedIndex_BEL_11 == 6)
				BEL_11 = "D";
			else if (selectedIndex_BEL_11 == 7)
				BEL_11 = "E";
			else if (selectedIndex_BEL_11 == 8)
				BEL_11 = "F";
			else if (selectedIndex_BEL_11 == 9)
				BEL_11 = "G";
			else if (selectedIndex_BEL_11 == 10)
				BEL_11 = "H";
			else if (selectedIndex_BEL_11 == 11)
				BEL_11 = "I";
			else if (selectedIndex_BEL_11 == 12)
				BEL_11 = "J";
			else if (selectedIndex_BEL_11 == 13)
				BEL_11 = "K";
			else if (selectedIndex_BEL_11 == 14)
				BEL_11 = "L";

			std::string WAKTU_12 = context.marshal_as<std::string>(textBox56->Text);
			int selectedIndex_BEL_12 = comboBox13->SelectedIndex;
			std::string BEL_12;
			if (selectedIndex_BEL_12 == 0)
				BEL_12 = "INFO";
			else if (selectedIndex_BEL_12 == 1)
				BEL_12 = "APEL";
			else if (selectedIndex_BEL_12 == 2)
				BEL_12 = "DARURAT";
			else if (selectedIndex_BEL_12 == 3)
				BEL_12 = "A";
			else if (selectedIndex_BEL_12 == 4)
				BEL_12 = "B";
			else if (selectedIndex_BEL_12 == 5)
				BEL_12 = "C";
			else if (selectedIndex_BEL_12 == 6)
				BEL_12 = "D";
			else if (selectedIndex_BEL_12 == 7)
				BEL_12 = "E";
			else if (selectedIndex_BEL_12 == 8)
				BEL_12 = "F";
			else if (selectedIndex_BEL_12 == 9)
				BEL_12 = "G";
			else if (selectedIndex_BEL_12 == 10)
				BEL_12 = "H";
			else if (selectedIndex_BEL_12 == 11)
				BEL_12 = "I";
			else if (selectedIndex_BEL_12 == 12)
				BEL_12 = "J";
			else if (selectedIndex_BEL_12 == 13)
				BEL_12 = "K";
			else if (selectedIndex_BEL_12 == 14)
				BEL_12 = "L";

			std::string WAKTU_13 = context.marshal_as<std::string>(textBox57->Text);
			int selectedIndex_BEL_13 = comboBox14->SelectedIndex;
			std::string BEL_13;
			if (selectedIndex_BEL_13 == 0)
				BEL_13 = "INFO";
			else if (selectedIndex_BEL_13 == 1)
				BEL_13 = "APEL";
			else if (selectedIndex_BEL_13 == 2)
				BEL_13 = "DARURAT";
			else if (selectedIndex_BEL_13 == 3)
				BEL_13 = "A";
			else if (selectedIndex_BEL_13 == 4)
				BEL_13 = "B";
			else if (selectedIndex_BEL_13 == 5)
				BEL_13 = "C";
			else if (selectedIndex_BEL_13 == 6)
				BEL_13 = "D";
			else if (selectedIndex_BEL_13 == 7)
				BEL_13 = "E";
			else if (selectedIndex_BEL_13 == 8)
				BEL_13 = "F";
			else if (selectedIndex_BEL_13 == 9)
				BEL_13 = "G";
			else if (selectedIndex_BEL_13 == 10)
				BEL_13 = "H";
			else if (selectedIndex_BEL_13 == 11)
				BEL_13 = "I";
			else if (selectedIndex_BEL_13 == 12)
				BEL_13 = "J";
			else if (selectedIndex_BEL_13 == 13)
				BEL_13 = "K";
			else if (selectedIndex_BEL_13 == 14)
				BEL_13 = "L";

			std::string WAKTU_14 = context.marshal_as<std::string>(textBox58->Text);
			int selectedIndex_BEL_14 = comboBox15->SelectedIndex;
			std::string BEL_14;
			if (selectedIndex_BEL_14 == 0)
				BEL_14 = "INFO";
			else if (selectedIndex_BEL_14 == 1)
				BEL_14 = "APEL";
			else if (selectedIndex_BEL_14 == 2)
				BEL_14 = "DARURAT";
			else if (selectedIndex_BEL_14 == 3)
				BEL_14 = "A";
			else if (selectedIndex_BEL_14 == 4)
				BEL_14 = "B";
			else if (selectedIndex_BEL_14 == 5)
				BEL_14 = "C";
			else if (selectedIndex_BEL_14 == 6)
				BEL_14 = "D";
			else if (selectedIndex_BEL_14 == 7)
				BEL_14 = "E";
			else if (selectedIndex_BEL_14 == 8)
				BEL_14 = "F";
			else if (selectedIndex_BEL_14 == 9)
				BEL_14 = "G";
			else if (selectedIndex_BEL_14 == 10)
				BEL_14 = "H";
			else if (selectedIndex_BEL_14 == 11)
				BEL_14 = "I";
			else if (selectedIndex_BEL_14 == 12)
				BEL_14 = "J";
			else if (selectedIndex_BEL_14 == 13)
				BEL_14 = "K";
			else if (selectedIndex_BEL_14 == 14)
				BEL_14 = "L";


			newfile.open("selasa.konf", std::ios::out);  // open a file to perform write operation using file object
			if (newfile.is_open()) //checking whether the file is open
			{
				newfile << WAKTU_1 << std::endl; newfile << selectedIndex_BEL_1 << std::endl;
				newfile << WAKTU_2 << std::endl; newfile << selectedIndex_BEL_2 << std::endl;
				newfile << WAKTU_3 << std::endl; newfile << selectedIndex_BEL_3 << std::endl;
				newfile << WAKTU_4 << std::endl; newfile << selectedIndex_BEL_4 << std::endl;
				newfile << WAKTU_5 << std::endl; newfile << selectedIndex_BEL_5 << std::endl;
				newfile << WAKTU_6 << std::endl; newfile << selectedIndex_BEL_6 << std::endl;
				newfile << WAKTU_7 << std::endl; newfile << selectedIndex_BEL_7 << std::endl;
				newfile << WAKTU_8 << std::endl; newfile << selectedIndex_BEL_8 << std::endl;
				newfile << WAKTU_9 << std::endl; newfile << selectedIndex_BEL_9 << std::endl;
				newfile << WAKTU_10 << std::endl; newfile << selectedIndex_BEL_10 << std::endl;
				newfile << WAKTU_11 << std::endl; newfile << selectedIndex_BEL_11 << std::endl;
				newfile << WAKTU_12 << std::endl; newfile << selectedIndex_BEL_12 << std::endl;
				newfile << WAKTU_13 << std::endl; newfile << selectedIndex_BEL_13 << std::endl;
				newfile << WAKTU_14 << std::endl; newfile << selectedIndex_BEL_14 << std::endl;
			}
			newfile.close();
		}
		if (selectedIndex_HARI == 3) {
			HARI = "RABU";
			msclr::interop::marshal_context context;
			std::string WAKTU_1 = context.marshal_as<std::string>(textBox45->Text);
			int selectedIndex_BEL_1 = comboBox2->SelectedIndex;
			std::string BEL_1;
			if (selectedIndex_BEL_1 == 0)
				BEL_1 = "INFO";
			else if (selectedIndex_BEL_1 == 1)
				BEL_1 = "APEL";
			else if (selectedIndex_BEL_1 == 2)
				BEL_1 = "DARURAT";
			else if (selectedIndex_BEL_1 == 3)
				BEL_1 = "A";
			else if (selectedIndex_BEL_1 == 4)
				BEL_1 = "B";
			else if (selectedIndex_BEL_1 == 5)
				BEL_1 = "C";
			else if (selectedIndex_BEL_1 == 6)
				BEL_1 = "D";
			else if (selectedIndex_BEL_1 == 7)
				BEL_1 = "E";
			else if (selectedIndex_BEL_1 == 8)
				BEL_1 = "F";
			else if (selectedIndex_BEL_1 == 9)
				BEL_1 = "G";
			else if (selectedIndex_BEL_1 == 10)
				BEL_1 = "H";
			else if (selectedIndex_BEL_1 == 11)
				BEL_1 = "I";
			else if (selectedIndex_BEL_1 == 12)
				BEL_1 = "J";
			else if (selectedIndex_BEL_1 == 13)
				BEL_1 = "K";
			else if (selectedIndex_BEL_1 == 14)
				BEL_1 = "L";

			std::string WAKTU_2 = context.marshal_as<std::string>(textBox46->Text);
			int selectedIndex_BEL_2 = comboBox3->SelectedIndex;
			std::string BEL_2;
			if (selectedIndex_BEL_2 == 0)
				BEL_2 = "INFO";
			else if (selectedIndex_BEL_2 == 1)
				BEL_2 = "APEL";
			else if (selectedIndex_BEL_2 == 2)
				BEL_2 = "DARURAT";
			else if (selectedIndex_BEL_2 == 3)
				BEL_2 = "A";
			else if (selectedIndex_BEL_2 == 4)
				BEL_2 = "B";
			else if (selectedIndex_BEL_2 == 5)
				BEL_2 = "C";
			else if (selectedIndex_BEL_2 == 6)
				BEL_2 = "D";
			else if (selectedIndex_BEL_2 == 7)
				BEL_2 = "E";
			else if (selectedIndex_BEL_2 == 8)
				BEL_2 = "F";
			else if (selectedIndex_BEL_2 == 9)
				BEL_2 = "G";
			else if (selectedIndex_BEL_2 == 10)
				BEL_2 = "H";
			else if (selectedIndex_BEL_2 == 11)
				BEL_2 = "I";
			else if (selectedIndex_BEL_2 == 12)
				BEL_2 = "J";
			else if (selectedIndex_BEL_2 == 13)
				BEL_2 = "K";
			else if (selectedIndex_BEL_2 == 14)
				BEL_2 = "L";

			std::string WAKTU_3 = context.marshal_as<std::string>(textBox47->Text);
			int selectedIndex_BEL_3 = comboBox4->SelectedIndex;
			std::string BEL_3;
			if (selectedIndex_BEL_3 == 0)
				BEL_3 = "INFO";
			else if (selectedIndex_BEL_3 == 1)
				BEL_3 = "APEL";
			else if (selectedIndex_BEL_3 == 2)
				BEL_3 = "DARURAT";
			else if (selectedIndex_BEL_3 == 3)
				BEL_3 = "A";
			else if (selectedIndex_BEL_3 == 4)
				BEL_3 = "B";
			else if (selectedIndex_BEL_3 == 5)
				BEL_3 = "C";
			else if (selectedIndex_BEL_3 == 6)
				BEL_3 = "D";
			else if (selectedIndex_BEL_3 == 7)
				BEL_3 = "E";
			else if (selectedIndex_BEL_3 == 8)
				BEL_3 = "F";
			else if (selectedIndex_BEL_3 == 9)
				BEL_3 = "G";
			else if (selectedIndex_BEL_3 == 10)
				BEL_3 = "H";
			else if (selectedIndex_BEL_3 == 11)
				BEL_3 = "I";
			else if (selectedIndex_BEL_3 == 12)
				BEL_3 = "J";
			else if (selectedIndex_BEL_3 == 13)
				BEL_3 = "K";
			else if (selectedIndex_BEL_3 == 14)
				BEL_3 = "L";

			std::string WAKTU_4 = context.marshal_as<std::string>(textBox48->Text);
			int selectedIndex_BEL_4 = comboBox5->SelectedIndex;
			std::string BEL_4;
			if (selectedIndex_BEL_4 == 0)
				BEL_4 = "INFO";
			else if (selectedIndex_BEL_4 == 1)
				BEL_4 = "APEL";
			else if (selectedIndex_BEL_4 == 2)
				BEL_4 = "DARURAT";
			else if (selectedIndex_BEL_4 == 3)
				BEL_4 = "A";
			else if (selectedIndex_BEL_4 == 4)
				BEL_4 = "B";
			else if (selectedIndex_BEL_4 == 5)
				BEL_4 = "C";
			else if (selectedIndex_BEL_4 == 6)
				BEL_4 = "D";
			else if (selectedIndex_BEL_4 == 7)
				BEL_4 = "E";
			else if (selectedIndex_BEL_4 == 8)
				BEL_4 = "F";
			else if (selectedIndex_BEL_4 == 9)
				BEL_4 = "G";
			else if (selectedIndex_BEL_4 == 10)
				BEL_4 = "H";
			else if (selectedIndex_BEL_4 == 11)
				BEL_4 = "I";
			else if (selectedIndex_BEL_4 == 12)
				BEL_4 = "J";
			else if (selectedIndex_BEL_4 == 13)
				BEL_4 = "K";
			else if (selectedIndex_BEL_4 == 14)
				BEL_4 = "L";

			std::string WAKTU_5 = context.marshal_as<std::string>(textBox49->Text);
			int selectedIndex_BEL_5 = comboBox6->SelectedIndex;
			std::string BEL_5;
			if (selectedIndex_BEL_5 == 0)
				BEL_5 = "INFO";
			else if (selectedIndex_BEL_5 == 1)
				BEL_5 = "APEL";
			else if (selectedIndex_BEL_5 == 2)
				BEL_5 = "DARURAT";
			else if (selectedIndex_BEL_5 == 3)
				BEL_5 = "A";
			else if (selectedIndex_BEL_5 == 4)
				BEL_5 = "B";
			else if (selectedIndex_BEL_5 == 5)
				BEL_5 = "C";
			else if (selectedIndex_BEL_5 == 6)
				BEL_5 = "D";
			else if (selectedIndex_BEL_5 == 7)
				BEL_5 = "E";
			else if (selectedIndex_BEL_5 == 8)
				BEL_5 = "F";
			else if (selectedIndex_BEL_5 == 9)
				BEL_5 = "G";
			else if (selectedIndex_BEL_5 == 10)
				BEL_5 = "H";
			else if (selectedIndex_BEL_5 == 11)
				BEL_5 = "I";
			else if (selectedIndex_BEL_5 == 12)
				BEL_5 = "J";
			else if (selectedIndex_BEL_5 == 13)
				BEL_5 = "K";
			else if (selectedIndex_BEL_5 == 14)
				BEL_5 = "L";

			std::string WAKTU_6 = context.marshal_as<std::string>(textBox50->Text);
			int selectedIndex_BEL_6 = comboBox7->SelectedIndex;
			std::string BEL_6;
			if (selectedIndex_BEL_6 == 0)
				BEL_6 = "INFO";
			else if (selectedIndex_BEL_6 == 1)
				BEL_6 = "APEL";
			else if (selectedIndex_BEL_6 == 2)
				BEL_6 = "DARURAT";
			else if (selectedIndex_BEL_6 == 3)
				BEL_6 = "A";
			else if (selectedIndex_BEL_6 == 4)
				BEL_6 = "B";
			else if (selectedIndex_BEL_6 == 5)
				BEL_6 = "C";
			else if (selectedIndex_BEL_6 == 6)
				BEL_6 = "D";
			else if (selectedIndex_BEL_6 == 7)
				BEL_6 = "E";
			else if (selectedIndex_BEL_6 == 8)
				BEL_6 = "F";
			else if (selectedIndex_BEL_6 == 9)
				BEL_6 = "G";
			else if (selectedIndex_BEL_6 == 10)
				BEL_6 = "H";
			else if (selectedIndex_BEL_6 == 11)
				BEL_6 = "I";
			else if (selectedIndex_BEL_6 == 12)
				BEL_6 = "J";
			else if (selectedIndex_BEL_6 == 13)
				BEL_6 = "K";
			else if (selectedIndex_BEL_6 == 14)
				BEL_6 = "L";

			std::string WAKTU_7 = context.marshal_as<std::string>(textBox51->Text);
			int selectedIndex_BEL_7 = comboBox8->SelectedIndex;
			std::string BEL_7;
			if (selectedIndex_BEL_7 == 0)
				BEL_7 = "INFO";
			else if (selectedIndex_BEL_7 == 1)
				BEL_7 = "APEL";
			else if (selectedIndex_BEL_7 == 2)
				BEL_7 = "DARURAT";
			else if (selectedIndex_BEL_7 == 3)
				BEL_7 = "A";
			else if (selectedIndex_BEL_7 == 4)
				BEL_7 = "B";
			else if (selectedIndex_BEL_7 == 5)
				BEL_7 = "C";
			else if (selectedIndex_BEL_7 == 6)
				BEL_7 = "D";
			else if (selectedIndex_BEL_7 == 7)
				BEL_7 = "E";
			else if (selectedIndex_BEL_7 == 8)
				BEL_7 = "F";
			else if (selectedIndex_BEL_7 == 9)
				BEL_7 = "G";
			else if (selectedIndex_BEL_7 == 10)
				BEL_7 = "H";
			else if (selectedIndex_BEL_7 == 11)
				BEL_7 = "I";
			else if (selectedIndex_BEL_7 == 12)
				BEL_7 = "J";
			else if (selectedIndex_BEL_7 == 13)
				BEL_7 = "K";
			else if (selectedIndex_BEL_7 == 14)
				BEL_7 = "L";

			std::string WAKTU_8 = context.marshal_as<std::string>(textBox52->Text);
			int selectedIndex_BEL_8 = comboBox9->SelectedIndex;
			std::string BEL_8;
			if (selectedIndex_BEL_8 == 0)
				BEL_8 = "INFO";
			else if (selectedIndex_BEL_8 == 1)
				BEL_8 = "APEL";
			else if (selectedIndex_BEL_8 == 2)
				BEL_8 = "DARURAT";
			else if (selectedIndex_BEL_8 == 3)
				BEL_8 = "A";
			else if (selectedIndex_BEL_8 == 4)
				BEL_8 = "B";
			else if (selectedIndex_BEL_8 == 5)
				BEL_8 = "C";
			else if (selectedIndex_BEL_8 == 6)
				BEL_8 = "D";
			else if (selectedIndex_BEL_8 == 7)
				BEL_8 = "E";
			else if (selectedIndex_BEL_8 == 8)
				BEL_8 = "F";
			else if (selectedIndex_BEL_8 == 9)
				BEL_8 = "G";
			else if (selectedIndex_BEL_8 == 10)
				BEL_8 = "H";
			else if (selectedIndex_BEL_8 == 11)
				BEL_8 = "I";
			else if (selectedIndex_BEL_8 == 12)
				BEL_8 = "J";
			else if (selectedIndex_BEL_8 == 13)
				BEL_8 = "K";
			else if (selectedIndex_BEL_8 == 14)
				BEL_8 = "L";

			std::string WAKTU_9 = context.marshal_as<std::string>(textBox53->Text);
			int selectedIndex_BEL_9 = comboBox10->SelectedIndex;
			std::string BEL_9;
			if (selectedIndex_BEL_9 == 0)
				BEL_9 = "INFO";
			else if (selectedIndex_BEL_9 == 1)
				BEL_9 = "APEL";
			else if (selectedIndex_BEL_9 == 2)
				BEL_9 = "DARURAT";
			else if (selectedIndex_BEL_9 == 3)
				BEL_9 = "A";
			else if (selectedIndex_BEL_9 == 4)
				BEL_9 = "B";
			else if (selectedIndex_BEL_9 == 5)
				BEL_9 = "C";
			else if (selectedIndex_BEL_9 == 6)
				BEL_9 = "D";
			else if (selectedIndex_BEL_9 == 7)
				BEL_9 = "E";
			else if (selectedIndex_BEL_9 == 8)
				BEL_9 = "F";
			else if (selectedIndex_BEL_9 == 9)
				BEL_9 = "G";
			else if (selectedIndex_BEL_9 == 10)
				BEL_9 = "H";
			else if (selectedIndex_BEL_9 == 11)
				BEL_9 = "I";
			else if (selectedIndex_BEL_9 == 12)
				BEL_9 = "J";
			else if (selectedIndex_BEL_9 == 13)
				BEL_9 = "K";
			else if (selectedIndex_BEL_9 == 14)
				BEL_9 = "L";

			std::string WAKTU_10 = context.marshal_as<std::string>(textBox54->Text);
			int selectedIndex_BEL_10 = comboBox11->SelectedIndex;
			std::string BEL_10;
			if (selectedIndex_BEL_10 == 0)
				BEL_10 = "INFO";
			else if (selectedIndex_BEL_10 == 1)
				BEL_10 = "APEL";
			else if (selectedIndex_BEL_10 == 2)
				BEL_10 = "DARURAT";
			else if (selectedIndex_BEL_10 == 3)
				BEL_10 = "A";
			else if (selectedIndex_BEL_10 == 4)
				BEL_10 = "B";
			else if (selectedIndex_BEL_10 == 5)
				BEL_10 = "C";
			else if (selectedIndex_BEL_10 == 6)
				BEL_10 = "D";
			else if (selectedIndex_BEL_10 == 7)
				BEL_10 = "E";
			else if (selectedIndex_BEL_10 == 8)
				BEL_10 = "F";
			else if (selectedIndex_BEL_10 == 9)
				BEL_10 = "G";
			else if (selectedIndex_BEL_10 == 10)
				BEL_10 = "H";
			else if (selectedIndex_BEL_10 == 11)
				BEL_10 = "I";
			else if (selectedIndex_BEL_10 == 12)
				BEL_10 = "J";
			else if (selectedIndex_BEL_10 == 13)
				BEL_10 = "K";
			else if (selectedIndex_BEL_10 == 14)
				BEL_10 = "L";

			std::string WAKTU_11 = context.marshal_as<std::string>(textBox55->Text);
			int selectedIndex_BEL_11 = comboBox12->SelectedIndex;
			std::string BEL_11;
			if (selectedIndex_BEL_11 == 0)
				BEL_11 = "INFO";
			else if (selectedIndex_BEL_11 == 1)
				BEL_11 = "APEL";
			else if (selectedIndex_BEL_11 == 2)
				BEL_11 = "DARURAT";
			else if (selectedIndex_BEL_11 == 3)
				BEL_11 = "A";
			else if (selectedIndex_BEL_11 == 4)
				BEL_11 = "B";
			else if (selectedIndex_BEL_11 == 5)
				BEL_11 = "C";
			else if (selectedIndex_BEL_11 == 6)
				BEL_11 = "D";
			else if (selectedIndex_BEL_11 == 7)
				BEL_11 = "E";
			else if (selectedIndex_BEL_11 == 8)
				BEL_11 = "F";
			else if (selectedIndex_BEL_11 == 9)
				BEL_11 = "G";
			else if (selectedIndex_BEL_11 == 10)
				BEL_11 = "H";
			else if (selectedIndex_BEL_11 == 11)
				BEL_11 = "I";
			else if (selectedIndex_BEL_11 == 12)
				BEL_11 = "J";
			else if (selectedIndex_BEL_11 == 13)
				BEL_11 = "K";
			else if (selectedIndex_BEL_11 == 14)
				BEL_11 = "L";

			std::string WAKTU_12 = context.marshal_as<std::string>(textBox56->Text);
			int selectedIndex_BEL_12 = comboBox13->SelectedIndex;
			std::string BEL_12;
			if (selectedIndex_BEL_12 == 0)
				BEL_12 = "INFO";
			else if (selectedIndex_BEL_12 == 1)
				BEL_12 = "APEL";
			else if (selectedIndex_BEL_12 == 2)
				BEL_12 = "DARURAT";
			else if (selectedIndex_BEL_12 == 3)
				BEL_12 = "A";
			else if (selectedIndex_BEL_12 == 4)
				BEL_12 = "B";
			else if (selectedIndex_BEL_12 == 5)
				BEL_12 = "C";
			else if (selectedIndex_BEL_12 == 6)
				BEL_12 = "D";
			else if (selectedIndex_BEL_12 == 7)
				BEL_12 = "E";
			else if (selectedIndex_BEL_12 == 8)
				BEL_12 = "F";
			else if (selectedIndex_BEL_12 == 9)
				BEL_12 = "G";
			else if (selectedIndex_BEL_12 == 10)
				BEL_12 = "H";
			else if (selectedIndex_BEL_12 == 11)
				BEL_12 = "I";
			else if (selectedIndex_BEL_12 == 12)
				BEL_12 = "J";
			else if (selectedIndex_BEL_12 == 13)
				BEL_12 = "K";
			else if (selectedIndex_BEL_12 == 14)
				BEL_12 = "L";

			std::string WAKTU_13 = context.marshal_as<std::string>(textBox57->Text);
			int selectedIndex_BEL_13 = comboBox14->SelectedIndex;
			std::string BEL_13;
			if (selectedIndex_BEL_13 == 0)
				BEL_13 = "INFO";
			else if (selectedIndex_BEL_13 == 1)
				BEL_13 = "APEL";
			else if (selectedIndex_BEL_13 == 2)
				BEL_13 = "DARURAT";
			else if (selectedIndex_BEL_13 == 3)
				BEL_13 = "A";
			else if (selectedIndex_BEL_13 == 4)
				BEL_13 = "B";
			else if (selectedIndex_BEL_13 == 5)
				BEL_13 = "C";
			else if (selectedIndex_BEL_13 == 6)
				BEL_13 = "D";
			else if (selectedIndex_BEL_13 == 7)
				BEL_13 = "E";
			else if (selectedIndex_BEL_13 == 8)
				BEL_13 = "F";
			else if (selectedIndex_BEL_13 == 9)
				BEL_13 = "G";
			else if (selectedIndex_BEL_13 == 10)
				BEL_13 = "H";
			else if (selectedIndex_BEL_13 == 11)
				BEL_13 = "I";
			else if (selectedIndex_BEL_13 == 12)
				BEL_13 = "J";
			else if (selectedIndex_BEL_13 == 13)
				BEL_13 = "K";
			else if (selectedIndex_BEL_13 == 14)
				BEL_13 = "L";

			std::string WAKTU_14 = context.marshal_as<std::string>(textBox58->Text);
			int selectedIndex_BEL_14 = comboBox15->SelectedIndex;
			std::string BEL_14;
			if (selectedIndex_BEL_14 == 0)
				BEL_14 = "INFO";
			else if (selectedIndex_BEL_14 == 1)
				BEL_14 = "APEL";
			else if (selectedIndex_BEL_14 == 2)
				BEL_14 = "DARURAT";
			else if (selectedIndex_BEL_14 == 3)
				BEL_14 = "A";
			else if (selectedIndex_BEL_14 == 4)
				BEL_14 = "B";
			else if (selectedIndex_BEL_14 == 5)
				BEL_14 = "C";
			else if (selectedIndex_BEL_14 == 6)
				BEL_14 = "D";
			else if (selectedIndex_BEL_14 == 7)
				BEL_14 = "E";
			else if (selectedIndex_BEL_14 == 8)
				BEL_14 = "F";
			else if (selectedIndex_BEL_14 == 9)
				BEL_14 = "G";
			else if (selectedIndex_BEL_14 == 10)
				BEL_14 = "H";
			else if (selectedIndex_BEL_14 == 11)
				BEL_14 = "I";
			else if (selectedIndex_BEL_14 == 12)
				BEL_14 = "J";
			else if (selectedIndex_BEL_14 == 13)
				BEL_14 = "K";
			else if (selectedIndex_BEL_14 == 14)
				BEL_14 = "L";


			newfile.open("rabu.konf", std::ios::out);  // open a file to perform write operation using file object
			if (newfile.is_open()) //checking whether the file is open
			{
				newfile << WAKTU_1 << std::endl; newfile << selectedIndex_BEL_1 << std::endl;
				newfile << WAKTU_2 << std::endl; newfile << selectedIndex_BEL_2 << std::endl;
				newfile << WAKTU_3 << std::endl; newfile << selectedIndex_BEL_3 << std::endl;
				newfile << WAKTU_4 << std::endl; newfile << selectedIndex_BEL_4 << std::endl;
				newfile << WAKTU_5 << std::endl; newfile << selectedIndex_BEL_5 << std::endl;
				newfile << WAKTU_6 << std::endl; newfile << selectedIndex_BEL_6 << std::endl;
				newfile << WAKTU_7 << std::endl; newfile << selectedIndex_BEL_7 << std::endl;
				newfile << WAKTU_8 << std::endl; newfile << selectedIndex_BEL_8 << std::endl;
				newfile << WAKTU_9 << std::endl; newfile << selectedIndex_BEL_9 << std::endl;
				newfile << WAKTU_10 << std::endl; newfile << selectedIndex_BEL_10 << std::endl;
				newfile << WAKTU_11 << std::endl; newfile << selectedIndex_BEL_11 << std::endl;
				newfile << WAKTU_12 << std::endl; newfile << selectedIndex_BEL_12 << std::endl;
				newfile << WAKTU_13 << std::endl; newfile << selectedIndex_BEL_13 << std::endl;
				newfile << WAKTU_14 << std::endl; newfile << selectedIndex_BEL_14 << std::endl;
			}
			newfile.close();
		}
		if (selectedIndex_HARI == 4) {
			HARI = "KAMIS";
			msclr::interop::marshal_context context;
			std::string WAKTU_1 = context.marshal_as<std::string>(textBox45->Text);
			int selectedIndex_BEL_1 = comboBox2->SelectedIndex;
			std::string BEL_1;
			if (selectedIndex_BEL_1 == 0)
				BEL_1 = "INFO";
			else if (selectedIndex_BEL_1 == 1)
				BEL_1 = "APEL";
			else if (selectedIndex_BEL_1 == 2)
				BEL_1 = "DARURAT";
			else if (selectedIndex_BEL_1 == 3)
				BEL_1 = "A";
			else if (selectedIndex_BEL_1 == 4)
				BEL_1 = "B";
			else if (selectedIndex_BEL_1 == 5)
				BEL_1 = "C";
			else if (selectedIndex_BEL_1 == 6)
				BEL_1 = "D";
			else if (selectedIndex_BEL_1 == 7)
				BEL_1 = "E";
			else if (selectedIndex_BEL_1 == 8)
				BEL_1 = "F";
			else if (selectedIndex_BEL_1 == 9)
				BEL_1 = "G";
			else if (selectedIndex_BEL_1 == 10)
				BEL_1 = "H";
			else if (selectedIndex_BEL_1 == 11)
				BEL_1 = "I";
			else if (selectedIndex_BEL_1 == 12)
				BEL_1 = "J";
			else if (selectedIndex_BEL_1 == 13)
				BEL_1 = "K";
			else if (selectedIndex_BEL_1 == 14)
				BEL_1 = "L";

			std::string WAKTU_2 = context.marshal_as<std::string>(textBox46->Text);
			int selectedIndex_BEL_2 = comboBox3->SelectedIndex;
			std::string BEL_2;
			if (selectedIndex_BEL_2 == 0)
				BEL_2 = "INFO";
			else if (selectedIndex_BEL_2 == 1)
				BEL_2 = "APEL";
			else if (selectedIndex_BEL_2 == 2)
				BEL_2 = "DARURAT";
			else if (selectedIndex_BEL_2 == 3)
				BEL_2 = "A";
			else if (selectedIndex_BEL_2 == 4)
				BEL_2 = "B";
			else if (selectedIndex_BEL_2 == 5)
				BEL_2 = "C";
			else if (selectedIndex_BEL_2 == 6)
				BEL_2 = "D";
			else if (selectedIndex_BEL_2 == 7)
				BEL_2 = "E";
			else if (selectedIndex_BEL_2 == 8)
				BEL_2 = "F";
			else if (selectedIndex_BEL_2 == 9)
				BEL_2 = "G";
			else if (selectedIndex_BEL_2 == 10)
				BEL_2 = "H";
			else if (selectedIndex_BEL_2 == 11)
				BEL_2 = "I";
			else if (selectedIndex_BEL_2 == 12)
				BEL_2 = "J";
			else if (selectedIndex_BEL_2 == 13)
				BEL_2 = "K";
			else if (selectedIndex_BEL_2 == 14)
				BEL_2 = "L";

			std::string WAKTU_3 = context.marshal_as<std::string>(textBox47->Text);
			int selectedIndex_BEL_3 = comboBox4->SelectedIndex;
			std::string BEL_3;
			if (selectedIndex_BEL_3 == 0)
				BEL_3 = "INFO";
			else if (selectedIndex_BEL_3 == 1)
				BEL_3 = "APEL";
			else if (selectedIndex_BEL_3 == 2)
				BEL_3 = "DARURAT";
			else if (selectedIndex_BEL_3 == 3)
				BEL_3 = "A";
			else if (selectedIndex_BEL_3 == 4)
				BEL_3 = "B";
			else if (selectedIndex_BEL_3 == 5)
				BEL_3 = "C";
			else if (selectedIndex_BEL_3 == 6)
				BEL_3 = "D";
			else if (selectedIndex_BEL_3 == 7)
				BEL_3 = "E";
			else if (selectedIndex_BEL_3 == 8)
				BEL_3 = "F";
			else if (selectedIndex_BEL_3 == 9)
				BEL_3 = "G";
			else if (selectedIndex_BEL_3 == 10)
				BEL_3 = "H";
			else if (selectedIndex_BEL_3 == 11)
				BEL_3 = "I";
			else if (selectedIndex_BEL_3 == 12)
				BEL_3 = "J";
			else if (selectedIndex_BEL_3 == 13)
				BEL_3 = "K";
			else if (selectedIndex_BEL_3 == 14)
				BEL_3 = "L";

			std::string WAKTU_4 = context.marshal_as<std::string>(textBox48->Text);
			int selectedIndex_BEL_4 = comboBox5->SelectedIndex;
			std::string BEL_4;
			if (selectedIndex_BEL_4 == 0)
				BEL_4 = "INFO";
			else if (selectedIndex_BEL_4 == 1)
				BEL_4 = "APEL";
			else if (selectedIndex_BEL_4 == 2)
				BEL_4 = "DARURAT";
			else if (selectedIndex_BEL_4 == 3)
				BEL_4 = "A";
			else if (selectedIndex_BEL_4 == 4)
				BEL_4 = "B";
			else if (selectedIndex_BEL_4 == 5)
				BEL_4 = "C";
			else if (selectedIndex_BEL_4 == 6)
				BEL_4 = "D";
			else if (selectedIndex_BEL_4 == 7)
				BEL_4 = "E";
			else if (selectedIndex_BEL_4 == 8)
				BEL_4 = "F";
			else if (selectedIndex_BEL_4 == 9)
				BEL_4 = "G";
			else if (selectedIndex_BEL_4 == 10)
				BEL_4 = "H";
			else if (selectedIndex_BEL_4 == 11)
				BEL_4 = "I";
			else if (selectedIndex_BEL_4 == 12)
				BEL_4 = "J";
			else if (selectedIndex_BEL_4 == 13)
				BEL_4 = "K";
			else if (selectedIndex_BEL_4 == 14)
				BEL_4 = "L";

			std::string WAKTU_5 = context.marshal_as<std::string>(textBox49->Text);
			int selectedIndex_BEL_5 = comboBox6->SelectedIndex;
			std::string BEL_5;
			if (selectedIndex_BEL_5 == 0)
				BEL_5 = "INFO";
			else if (selectedIndex_BEL_5 == 1)
				BEL_5 = "APEL";
			else if (selectedIndex_BEL_5 == 2)
				BEL_5 = "DARURAT";
			else if (selectedIndex_BEL_5 == 3)
				BEL_5 = "A";
			else if (selectedIndex_BEL_5 == 4)
				BEL_5 = "B";
			else if (selectedIndex_BEL_5 == 5)
				BEL_5 = "C";
			else if (selectedIndex_BEL_5 == 6)
				BEL_5 = "D";
			else if (selectedIndex_BEL_5 == 7)
				BEL_5 = "E";
			else if (selectedIndex_BEL_5 == 8)
				BEL_5 = "F";
			else if (selectedIndex_BEL_5 == 9)
				BEL_5 = "G";
			else if (selectedIndex_BEL_5 == 10)
				BEL_5 = "H";
			else if (selectedIndex_BEL_5 == 11)
				BEL_5 = "I";
			else if (selectedIndex_BEL_5 == 12)
				BEL_5 = "J";
			else if (selectedIndex_BEL_5 == 13)
				BEL_5 = "K";
			else if (selectedIndex_BEL_5 == 14)
				BEL_5 = "L";

			std::string WAKTU_6 = context.marshal_as<std::string>(textBox50->Text);
			int selectedIndex_BEL_6 = comboBox7->SelectedIndex;
			std::string BEL_6;
			if (selectedIndex_BEL_6 == 0)
				BEL_6 = "INFO";
			else if (selectedIndex_BEL_6 == 1)
				BEL_6 = "APEL";
			else if (selectedIndex_BEL_6 == 2)
				BEL_6 = "DARURAT";
			else if (selectedIndex_BEL_6 == 3)
				BEL_6 = "A";
			else if (selectedIndex_BEL_6 == 4)
				BEL_6 = "B";
			else if (selectedIndex_BEL_6 == 5)
				BEL_6 = "C";
			else if (selectedIndex_BEL_6 == 6)
				BEL_6 = "D";
			else if (selectedIndex_BEL_6 == 7)
				BEL_6 = "E";
			else if (selectedIndex_BEL_6 == 8)
				BEL_6 = "F";
			else if (selectedIndex_BEL_6 == 9)
				BEL_6 = "G";
			else if (selectedIndex_BEL_6 == 10)
				BEL_6 = "H";
			else if (selectedIndex_BEL_6 == 11)
				BEL_6 = "I";
			else if (selectedIndex_BEL_6 == 12)
				BEL_6 = "J";
			else if (selectedIndex_BEL_6 == 13)
				BEL_6 = "K";
			else if (selectedIndex_BEL_6 == 14)
				BEL_6 = "L";

			std::string WAKTU_7 = context.marshal_as<std::string>(textBox51->Text);
			int selectedIndex_BEL_7 = comboBox8->SelectedIndex;
			std::string BEL_7;
			if (selectedIndex_BEL_7 == 0)
				BEL_7 = "INFO";
			else if (selectedIndex_BEL_7 == 1)
				BEL_7 = "APEL";
			else if (selectedIndex_BEL_7 == 2)
				BEL_7 = "DARURAT";
			else if (selectedIndex_BEL_7 == 3)
				BEL_7 = "A";
			else if (selectedIndex_BEL_7 == 4)
				BEL_7 = "B";
			else if (selectedIndex_BEL_7 == 5)
				BEL_7 = "C";
			else if (selectedIndex_BEL_7 == 6)
				BEL_7 = "D";
			else if (selectedIndex_BEL_7 == 7)
				BEL_7 = "E";
			else if (selectedIndex_BEL_7 == 8)
				BEL_7 = "F";
			else if (selectedIndex_BEL_7 == 9)
				BEL_7 = "G";
			else if (selectedIndex_BEL_7 == 10)
				BEL_7 = "H";
			else if (selectedIndex_BEL_7 == 11)
				BEL_7 = "I";
			else if (selectedIndex_BEL_7 == 12)
				BEL_7 = "J";
			else if (selectedIndex_BEL_7 == 13)
				BEL_7 = "K";
			else if (selectedIndex_BEL_7 == 14)
				BEL_7 = "L";

			std::string WAKTU_8 = context.marshal_as<std::string>(textBox52->Text);
			int selectedIndex_BEL_8 = comboBox9->SelectedIndex;
			std::string BEL_8;
			if (selectedIndex_BEL_8 == 0)
				BEL_8 = "INFO";
			else if (selectedIndex_BEL_8 == 1)
				BEL_8 = "APEL";
			else if (selectedIndex_BEL_8 == 2)
				BEL_8 = "DARURAT";
			else if (selectedIndex_BEL_8 == 3)
				BEL_8 = "A";
			else if (selectedIndex_BEL_8 == 4)
				BEL_8 = "B";
			else if (selectedIndex_BEL_8 == 5)
				BEL_8 = "C";
			else if (selectedIndex_BEL_8 == 6)
				BEL_8 = "D";
			else if (selectedIndex_BEL_8 == 7)
				BEL_8 = "E";
			else if (selectedIndex_BEL_8 == 8)
				BEL_8 = "F";
			else if (selectedIndex_BEL_8 == 9)
				BEL_8 = "G";
			else if (selectedIndex_BEL_8 == 10)
				BEL_8 = "H";
			else if (selectedIndex_BEL_8 == 11)
				BEL_8 = "I";
			else if (selectedIndex_BEL_8 == 12)
				BEL_8 = "J";
			else if (selectedIndex_BEL_8 == 13)
				BEL_8 = "K";
			else if (selectedIndex_BEL_8 == 14)
				BEL_8 = "L";

			std::string WAKTU_9 = context.marshal_as<std::string>(textBox53->Text);
			int selectedIndex_BEL_9 = comboBox10->SelectedIndex;
			std::string BEL_9;
			if (selectedIndex_BEL_9 == 0)
				BEL_9 = "INFO";
			else if (selectedIndex_BEL_9 == 1)
				BEL_9 = "APEL";
			else if (selectedIndex_BEL_9 == 2)
				BEL_9 = "DARURAT";
			else if (selectedIndex_BEL_9 == 3)
				BEL_9 = "A";
			else if (selectedIndex_BEL_9 == 4)
				BEL_9 = "B";
			else if (selectedIndex_BEL_9 == 5)
				BEL_9 = "C";
			else if (selectedIndex_BEL_9 == 6)
				BEL_9 = "D";
			else if (selectedIndex_BEL_9 == 7)
				BEL_9 = "E";
			else if (selectedIndex_BEL_9 == 8)
				BEL_9 = "F";
			else if (selectedIndex_BEL_9 == 9)
				BEL_9 = "G";
			else if (selectedIndex_BEL_9 == 10)
				BEL_9 = "H";
			else if (selectedIndex_BEL_9 == 11)
				BEL_9 = "I";
			else if (selectedIndex_BEL_9 == 12)
				BEL_9 = "J";
			else if (selectedIndex_BEL_9 == 13)
				BEL_9 = "K";
			else if (selectedIndex_BEL_9 == 14)
				BEL_9 = "L";

			std::string WAKTU_10 = context.marshal_as<std::string>(textBox54->Text);
			int selectedIndex_BEL_10 = comboBox11->SelectedIndex;
			std::string BEL_10;
			if (selectedIndex_BEL_10 == 0)
				BEL_10 = "INFO";
			else if (selectedIndex_BEL_10 == 1)
				BEL_10 = "APEL";
			else if (selectedIndex_BEL_10 == 2)
				BEL_10 = "DARURAT";
			else if (selectedIndex_BEL_10 == 3)
				BEL_10 = "A";
			else if (selectedIndex_BEL_10 == 4)
				BEL_10 = "B";
			else if (selectedIndex_BEL_10 == 5)
				BEL_10 = "C";
			else if (selectedIndex_BEL_10 == 6)
				BEL_10 = "D";
			else if (selectedIndex_BEL_10 == 7)
				BEL_10 = "E";
			else if (selectedIndex_BEL_10 == 8)
				BEL_10 = "F";
			else if (selectedIndex_BEL_10 == 9)
				BEL_10 = "G";
			else if (selectedIndex_BEL_10 == 10)
				BEL_10 = "H";
			else if (selectedIndex_BEL_10 == 11)
				BEL_10 = "I";
			else if (selectedIndex_BEL_10 == 12)
				BEL_10 = "J";
			else if (selectedIndex_BEL_10 == 13)
				BEL_10 = "K";
			else if (selectedIndex_BEL_10 == 14)
				BEL_10 = "L";

			std::string WAKTU_11 = context.marshal_as<std::string>(textBox55->Text);
			int selectedIndex_BEL_11 = comboBox12->SelectedIndex;
			std::string BEL_11;
			if (selectedIndex_BEL_11 == 0)
				BEL_11 = "INFO";
			else if (selectedIndex_BEL_11 == 1)
				BEL_11 = "APEL";
			else if (selectedIndex_BEL_11 == 2)
				BEL_11 = "DARURAT";
			else if (selectedIndex_BEL_11 == 3)
				BEL_11 = "A";
			else if (selectedIndex_BEL_11 == 4)
				BEL_11 = "B";
			else if (selectedIndex_BEL_11 == 5)
				BEL_11 = "C";
			else if (selectedIndex_BEL_11 == 6)
				BEL_11 = "D";
			else if (selectedIndex_BEL_11 == 7)
				BEL_11 = "E";
			else if (selectedIndex_BEL_11 == 8)
				BEL_11 = "F";
			else if (selectedIndex_BEL_11 == 9)
				BEL_11 = "G";
			else if (selectedIndex_BEL_11 == 10)
				BEL_11 = "H";
			else if (selectedIndex_BEL_11 == 11)
				BEL_11 = "I";
			else if (selectedIndex_BEL_11 == 12)
				BEL_11 = "J";
			else if (selectedIndex_BEL_11 == 13)
				BEL_11 = "K";
			else if (selectedIndex_BEL_11 == 14)
				BEL_11 = "L";

			std::string WAKTU_12 = context.marshal_as<std::string>(textBox56->Text);
			int selectedIndex_BEL_12 = comboBox13->SelectedIndex;
			std::string BEL_12;
			if (selectedIndex_BEL_12 == 0)
				BEL_12 = "INFO";
			else if (selectedIndex_BEL_12 == 1)
				BEL_12 = "APEL";
			else if (selectedIndex_BEL_12 == 2)
				BEL_12 = "DARURAT";
			else if (selectedIndex_BEL_12 == 3)
				BEL_12 = "A";
			else if (selectedIndex_BEL_12 == 4)
				BEL_12 = "B";
			else if (selectedIndex_BEL_12 == 5)
				BEL_12 = "C";
			else if (selectedIndex_BEL_12 == 6)
				BEL_12 = "D";
			else if (selectedIndex_BEL_12 == 7)
				BEL_12 = "E";
			else if (selectedIndex_BEL_12 == 8)
				BEL_12 = "F";
			else if (selectedIndex_BEL_12 == 9)
				BEL_12 = "G";
			else if (selectedIndex_BEL_12 == 10)
				BEL_12 = "H";
			else if (selectedIndex_BEL_12 == 11)
				BEL_12 = "I";
			else if (selectedIndex_BEL_12 == 12)
				BEL_12 = "J";
			else if (selectedIndex_BEL_12 == 13)
				BEL_12 = "K";
			else if (selectedIndex_BEL_12 == 14)
				BEL_12 = "L";

			std::string WAKTU_13 = context.marshal_as<std::string>(textBox57->Text);
			int selectedIndex_BEL_13 = comboBox14->SelectedIndex;
			std::string BEL_13;
			if (selectedIndex_BEL_13 == 0)
				BEL_13 = "INFO";
			else if (selectedIndex_BEL_13 == 1)
				BEL_13 = "APEL";
			else if (selectedIndex_BEL_13 == 2)
				BEL_13 = "DARURAT";
			else if (selectedIndex_BEL_13 == 3)
				BEL_13 = "A";
			else if (selectedIndex_BEL_13 == 4)
				BEL_13 = "B";
			else if (selectedIndex_BEL_13 == 5)
				BEL_13 = "C";
			else if (selectedIndex_BEL_13 == 6)
				BEL_13 = "D";
			else if (selectedIndex_BEL_13 == 7)
				BEL_13 = "E";
			else if (selectedIndex_BEL_13 == 8)
				BEL_13 = "F";
			else if (selectedIndex_BEL_13 == 9)
				BEL_13 = "G";
			else if (selectedIndex_BEL_13 == 10)
				BEL_13 = "H";
			else if (selectedIndex_BEL_13 == 11)
				BEL_13 = "I";
			else if (selectedIndex_BEL_13 == 12)
				BEL_13 = "J";
			else if (selectedIndex_BEL_13 == 13)
				BEL_13 = "K";
			else if (selectedIndex_BEL_13 == 14)
				BEL_13 = "L";

			std::string WAKTU_14 = context.marshal_as<std::string>(textBox58->Text);
			int selectedIndex_BEL_14 = comboBox15->SelectedIndex;
			std::string BEL_14;
			if (selectedIndex_BEL_14 == 0)
				BEL_14 = "INFO";
			else if (selectedIndex_BEL_14 == 1)
				BEL_14 = "APEL";
			else if (selectedIndex_BEL_14 == 2)
				BEL_14 = "DARURAT";
			else if (selectedIndex_BEL_14 == 3)
				BEL_14 = "A";
			else if (selectedIndex_BEL_14 == 4)
				BEL_14 = "B";
			else if (selectedIndex_BEL_14 == 5)
				BEL_14 = "C";
			else if (selectedIndex_BEL_14 == 6)
				BEL_14 = "D";
			else if (selectedIndex_BEL_14 == 7)
				BEL_14 = "E";
			else if (selectedIndex_BEL_14 == 8)
				BEL_14 = "F";
			else if (selectedIndex_BEL_14 == 9)
				BEL_14 = "G";
			else if (selectedIndex_BEL_14 == 10)
				BEL_14 = "H";
			else if (selectedIndex_BEL_14 == 11)
				BEL_14 = "I";
			else if (selectedIndex_BEL_14 == 12)
				BEL_14 = "J";
			else if (selectedIndex_BEL_14 == 13)
				BEL_14 = "K";
			else if (selectedIndex_BEL_14 == 14)
				BEL_14 = "L";


			newfile.open("kamis.konf", std::ios::out);  // open a file to perform write operation using file object
			if (newfile.is_open()) //checking whether the file is open
			{
				newfile << WAKTU_1 << std::endl; newfile << selectedIndex_BEL_1 << std::endl;
				newfile << WAKTU_2 << std::endl; newfile << selectedIndex_BEL_2 << std::endl;
				newfile << WAKTU_3 << std::endl; newfile << selectedIndex_BEL_3 << std::endl;
				newfile << WAKTU_4 << std::endl; newfile << selectedIndex_BEL_4 << std::endl;
				newfile << WAKTU_5 << std::endl; newfile << selectedIndex_BEL_5 << std::endl;
				newfile << WAKTU_6 << std::endl; newfile << selectedIndex_BEL_6 << std::endl;
				newfile << WAKTU_7 << std::endl; newfile << selectedIndex_BEL_7 << std::endl;
				newfile << WAKTU_8 << std::endl; newfile << selectedIndex_BEL_8 << std::endl;
				newfile << WAKTU_9 << std::endl; newfile << selectedIndex_BEL_9 << std::endl;
				newfile << WAKTU_10 << std::endl; newfile << selectedIndex_BEL_10 << std::endl;
				newfile << WAKTU_11 << std::endl; newfile << selectedIndex_BEL_11 << std::endl;
				newfile << WAKTU_12 << std::endl; newfile << selectedIndex_BEL_12 << std::endl;
				newfile << WAKTU_13 << std::endl; newfile << selectedIndex_BEL_13 << std::endl;
				newfile << WAKTU_14 << std::endl; newfile << selectedIndex_BEL_14 << std::endl;
			}
			newfile.close();
		}
		if (selectedIndex_HARI == 5) {
			HARI = "JUMAT";
			msclr::interop::marshal_context context;
			std::string WAKTU_1 = context.marshal_as<std::string>(textBox45->Text);
			int selectedIndex_BEL_1 = comboBox2->SelectedIndex;
			std::string BEL_1;
			if (selectedIndex_BEL_1 == 0)
				BEL_1 = "INFO";
			else if (selectedIndex_BEL_1 == 1)
				BEL_1 = "APEL";
			else if (selectedIndex_BEL_1 == 2)
				BEL_1 = "DARURAT";
			else if (selectedIndex_BEL_1 == 3)
				BEL_1 = "A";
			else if (selectedIndex_BEL_1 == 4)
				BEL_1 = "B";
			else if (selectedIndex_BEL_1 == 5)
				BEL_1 = "C";
			else if (selectedIndex_BEL_1 == 6)
				BEL_1 = "D";
			else if (selectedIndex_BEL_1 == 7)
				BEL_1 = "E";
			else if (selectedIndex_BEL_1 == 8)
				BEL_1 = "F";
			else if (selectedIndex_BEL_1 == 9)
				BEL_1 = "G";
			else if (selectedIndex_BEL_1 == 10)
				BEL_1 = "H";
			else if (selectedIndex_BEL_1 == 11)
				BEL_1 = "I";
			else if (selectedIndex_BEL_1 == 12)
				BEL_1 = "J";
			else if (selectedIndex_BEL_1 == 13)
				BEL_1 = "K";
			else if (selectedIndex_BEL_1 == 14)
				BEL_1 = "L";

			std::string WAKTU_2 = context.marshal_as<std::string>(textBox46->Text);
			int selectedIndex_BEL_2 = comboBox3->SelectedIndex;
			std::string BEL_2;
			if (selectedIndex_BEL_2 == 0)
				BEL_2 = "INFO";
			else if (selectedIndex_BEL_2 == 1)
				BEL_2 = "APEL";
			else if (selectedIndex_BEL_2 == 2)
				BEL_2 = "DARURAT";
			else if (selectedIndex_BEL_2 == 3)
				BEL_2 = "A";
			else if (selectedIndex_BEL_2 == 4)
				BEL_2 = "B";
			else if (selectedIndex_BEL_2 == 5)
				BEL_2 = "C";
			else if (selectedIndex_BEL_2 == 6)
				BEL_2 = "D";
			else if (selectedIndex_BEL_2 == 7)
				BEL_2 = "E";
			else if (selectedIndex_BEL_2 == 8)
				BEL_2 = "F";
			else if (selectedIndex_BEL_2 == 9)
				BEL_2 = "G";
			else if (selectedIndex_BEL_2 == 10)
				BEL_2 = "H";
			else if (selectedIndex_BEL_2 == 11)
				BEL_2 = "I";
			else if (selectedIndex_BEL_2 == 12)
				BEL_2 = "J";
			else if (selectedIndex_BEL_2 == 13)
				BEL_2 = "K";
			else if (selectedIndex_BEL_2 == 14)
				BEL_2 = "L";

			std::string WAKTU_3 = context.marshal_as<std::string>(textBox47->Text);
			int selectedIndex_BEL_3 = comboBox4->SelectedIndex;
			std::string BEL_3;
			if (selectedIndex_BEL_3 == 0)
				BEL_3 = "INFO";
			else if (selectedIndex_BEL_3 == 1)
				BEL_3 = "APEL";
			else if (selectedIndex_BEL_3 == 2)
				BEL_3 = "DARURAT";
			else if (selectedIndex_BEL_3 == 3)
				BEL_3 = "A";
			else if (selectedIndex_BEL_3 == 4)
				BEL_3 = "B";
			else if (selectedIndex_BEL_3 == 5)
				BEL_3 = "C";
			else if (selectedIndex_BEL_3 == 6)
				BEL_3 = "D";
			else if (selectedIndex_BEL_3 == 7)
				BEL_3 = "E";
			else if (selectedIndex_BEL_3 == 8)
				BEL_3 = "F";
			else if (selectedIndex_BEL_3 == 9)
				BEL_3 = "G";
			else if (selectedIndex_BEL_3 == 10)
				BEL_3 = "H";
			else if (selectedIndex_BEL_3 == 11)
				BEL_3 = "I";
			else if (selectedIndex_BEL_3 == 12)
				BEL_3 = "J";
			else if (selectedIndex_BEL_3 == 13)
				BEL_3 = "K";
			else if (selectedIndex_BEL_3 == 14)
				BEL_3 = "L";

			std::string WAKTU_4 = context.marshal_as<std::string>(textBox48->Text);
			int selectedIndex_BEL_4 = comboBox5->SelectedIndex;
			std::string BEL_4;
			if (selectedIndex_BEL_4 == 0)
				BEL_4 = "INFO";
			else if (selectedIndex_BEL_4 == 1)
				BEL_4 = "APEL";
			else if (selectedIndex_BEL_4 == 2)
				BEL_4 = "DARURAT";
			else if (selectedIndex_BEL_4 == 3)
				BEL_4 = "A";
			else if (selectedIndex_BEL_4 == 4)
				BEL_4 = "B";
			else if (selectedIndex_BEL_4 == 5)
				BEL_4 = "C";
			else if (selectedIndex_BEL_4 == 6)
				BEL_4 = "D";
			else if (selectedIndex_BEL_4 == 7)
				BEL_4 = "E";
			else if (selectedIndex_BEL_4 == 8)
				BEL_4 = "F";
			else if (selectedIndex_BEL_4 == 9)
				BEL_4 = "G";
			else if (selectedIndex_BEL_4 == 10)
				BEL_4 = "H";
			else if (selectedIndex_BEL_4 == 11)
				BEL_4 = "I";
			else if (selectedIndex_BEL_4 == 12)
				BEL_4 = "J";
			else if (selectedIndex_BEL_4 == 13)
				BEL_4 = "K";
			else if (selectedIndex_BEL_4 == 14)
				BEL_4 = "L";

			std::string WAKTU_5 = context.marshal_as<std::string>(textBox49->Text);
			int selectedIndex_BEL_5 = comboBox6->SelectedIndex;
			std::string BEL_5;
			if (selectedIndex_BEL_5 == 0)
				BEL_5 = "INFO";
			else if (selectedIndex_BEL_5 == 1)
				BEL_5 = "APEL";
			else if (selectedIndex_BEL_5 == 2)
				BEL_5 = "DARURAT";
			else if (selectedIndex_BEL_5 == 3)
				BEL_5 = "A";
			else if (selectedIndex_BEL_5 == 4)
				BEL_5 = "B";
			else if (selectedIndex_BEL_5 == 5)
				BEL_5 = "C";
			else if (selectedIndex_BEL_5 == 6)
				BEL_5 = "D";
			else if (selectedIndex_BEL_5 == 7)
				BEL_5 = "E";
			else if (selectedIndex_BEL_5 == 8)
				BEL_5 = "F";
			else if (selectedIndex_BEL_5 == 9)
				BEL_5 = "G";
			else if (selectedIndex_BEL_5 == 10)
				BEL_5 = "H";
			else if (selectedIndex_BEL_5 == 11)
				BEL_5 = "I";
			else if (selectedIndex_BEL_5 == 12)
				BEL_5 = "J";
			else if (selectedIndex_BEL_5 == 13)
				BEL_5 = "K";
			else if (selectedIndex_BEL_5 == 14)
				BEL_5 = "L";

			std::string WAKTU_6 = context.marshal_as<std::string>(textBox50->Text);
			int selectedIndex_BEL_6 = comboBox7->SelectedIndex;
			std::string BEL_6;
			if (selectedIndex_BEL_6 == 0)
				BEL_6 = "INFO";
			else if (selectedIndex_BEL_6 == 1)
				BEL_6 = "APEL";
			else if (selectedIndex_BEL_6 == 2)
				BEL_6 = "DARURAT";
			else if (selectedIndex_BEL_6 == 3)
				BEL_6 = "A";
			else if (selectedIndex_BEL_6 == 4)
				BEL_6 = "B";
			else if (selectedIndex_BEL_6 == 5)
				BEL_6 = "C";
			else if (selectedIndex_BEL_6 == 6)
				BEL_6 = "D";
			else if (selectedIndex_BEL_6 == 7)
				BEL_6 = "E";
			else if (selectedIndex_BEL_6 == 8)
				BEL_6 = "F";
			else if (selectedIndex_BEL_6 == 9)
				BEL_6 = "G";
			else if (selectedIndex_BEL_6 == 10)
				BEL_6 = "H";
			else if (selectedIndex_BEL_6 == 11)
				BEL_6 = "I";
			else if (selectedIndex_BEL_6 == 12)
				BEL_6 = "J";
			else if (selectedIndex_BEL_6 == 13)
				BEL_6 = "K";
			else if (selectedIndex_BEL_6 == 14)
				BEL_6 = "L";

			std::string WAKTU_7 = context.marshal_as<std::string>(textBox51->Text);
			int selectedIndex_BEL_7 = comboBox8->SelectedIndex;
			std::string BEL_7;
			if (selectedIndex_BEL_7 == 0)
				BEL_7 = "INFO";
			else if (selectedIndex_BEL_7 == 1)
				BEL_7 = "APEL";
			else if (selectedIndex_BEL_7 == 2)
				BEL_7 = "DARURAT";
			else if (selectedIndex_BEL_7 == 3)
				BEL_7 = "A";
			else if (selectedIndex_BEL_7 == 4)
				BEL_7 = "B";
			else if (selectedIndex_BEL_7 == 5)
				BEL_7 = "C";
			else if (selectedIndex_BEL_7 == 6)
				BEL_7 = "D";
			else if (selectedIndex_BEL_7 == 7)
				BEL_7 = "E";
			else if (selectedIndex_BEL_7 == 8)
				BEL_7 = "F";
			else if (selectedIndex_BEL_7 == 9)
				BEL_7 = "G";
			else if (selectedIndex_BEL_7 == 10)
				BEL_7 = "H";
			else if (selectedIndex_BEL_7 == 11)
				BEL_7 = "I";
			else if (selectedIndex_BEL_7 == 12)
				BEL_7 = "J";
			else if (selectedIndex_BEL_7 == 13)
				BEL_7 = "K";
			else if (selectedIndex_BEL_7 == 14)
				BEL_7 = "L";

			std::string WAKTU_8 = context.marshal_as<std::string>(textBox52->Text);
			int selectedIndex_BEL_8 = comboBox9->SelectedIndex;
			std::string BEL_8;
			if (selectedIndex_BEL_8 == 0)
				BEL_8 = "INFO";
			else if (selectedIndex_BEL_8 == 1)
				BEL_8 = "APEL";
			else if (selectedIndex_BEL_8 == 2)
				BEL_8 = "DARURAT";
			else if (selectedIndex_BEL_8 == 3)
				BEL_8 = "A";
			else if (selectedIndex_BEL_8 == 4)
				BEL_8 = "B";
			else if (selectedIndex_BEL_8 == 5)
				BEL_8 = "C";
			else if (selectedIndex_BEL_8 == 6)
				BEL_8 = "D";
			else if (selectedIndex_BEL_8 == 7)
				BEL_8 = "E";
			else if (selectedIndex_BEL_8 == 8)
				BEL_8 = "F";
			else if (selectedIndex_BEL_8 == 9)
				BEL_8 = "G";
			else if (selectedIndex_BEL_8 == 10)
				BEL_8 = "H";
			else if (selectedIndex_BEL_8 == 11)
				BEL_8 = "I";
			else if (selectedIndex_BEL_8 == 12)
				BEL_8 = "J";
			else if (selectedIndex_BEL_8 == 13)
				BEL_8 = "K";
			else if (selectedIndex_BEL_8 == 14)
				BEL_8 = "L";

			std::string WAKTU_9 = context.marshal_as<std::string>(textBox53->Text);
			int selectedIndex_BEL_9 = comboBox10->SelectedIndex;
			std::string BEL_9;
			if (selectedIndex_BEL_9 == 0)
				BEL_9 = "INFO";
			else if (selectedIndex_BEL_9 == 1)
				BEL_9 = "APEL";
			else if (selectedIndex_BEL_9 == 2)
				BEL_9 = "DARURAT";
			else if (selectedIndex_BEL_9 == 3)
				BEL_9 = "A";
			else if (selectedIndex_BEL_9 == 4)
				BEL_9 = "B";
			else if (selectedIndex_BEL_9 == 5)
				BEL_9 = "C";
			else if (selectedIndex_BEL_9 == 6)
				BEL_9 = "D";
			else if (selectedIndex_BEL_9 == 7)
				BEL_9 = "E";
			else if (selectedIndex_BEL_9 == 8)
				BEL_9 = "F";
			else if (selectedIndex_BEL_9 == 9)
				BEL_9 = "G";
			else if (selectedIndex_BEL_9 == 10)
				BEL_9 = "H";
			else if (selectedIndex_BEL_9 == 11)
				BEL_9 = "I";
			else if (selectedIndex_BEL_9 == 12)
				BEL_9 = "J";
			else if (selectedIndex_BEL_9 == 13)
				BEL_9 = "K";
			else if (selectedIndex_BEL_9 == 14)
				BEL_9 = "L";

			std::string WAKTU_10 = context.marshal_as<std::string>(textBox54->Text);
			int selectedIndex_BEL_10 = comboBox11->SelectedIndex;
			std::string BEL_10;
			if (selectedIndex_BEL_10 == 0)
				BEL_10 = "INFO";
			else if (selectedIndex_BEL_10 == 1)
				BEL_10 = "APEL";
			else if (selectedIndex_BEL_10 == 2)
				BEL_10 = "DARURAT";
			else if (selectedIndex_BEL_10 == 3)
				BEL_10 = "A";
			else if (selectedIndex_BEL_10 == 4)
				BEL_10 = "B";
			else if (selectedIndex_BEL_10 == 5)
				BEL_10 = "C";
			else if (selectedIndex_BEL_10 == 6)
				BEL_10 = "D";
			else if (selectedIndex_BEL_10 == 7)
				BEL_10 = "E";
			else if (selectedIndex_BEL_10 == 8)
				BEL_10 = "F";
			else if (selectedIndex_BEL_10 == 9)
				BEL_10 = "G";
			else if (selectedIndex_BEL_10 == 10)
				BEL_10 = "H";
			else if (selectedIndex_BEL_10 == 11)
				BEL_10 = "I";
			else if (selectedIndex_BEL_10 == 12)
				BEL_10 = "J";
			else if (selectedIndex_BEL_10 == 13)
				BEL_10 = "K";
			else if (selectedIndex_BEL_10 == 14)
				BEL_10 = "L";

			std::string WAKTU_11 = context.marshal_as<std::string>(textBox55->Text);
			int selectedIndex_BEL_11 = comboBox12->SelectedIndex;
			std::string BEL_11;
			if (selectedIndex_BEL_11 == 0)
				BEL_11 = "INFO";
			else if (selectedIndex_BEL_11 == 1)
				BEL_11 = "APEL";
			else if (selectedIndex_BEL_11 == 2)
				BEL_11 = "DARURAT";
			else if (selectedIndex_BEL_11 == 3)
				BEL_11 = "A";
			else if (selectedIndex_BEL_11 == 4)
				BEL_11 = "B";
			else if (selectedIndex_BEL_11 == 5)
				BEL_11 = "C";
			else if (selectedIndex_BEL_11 == 6)
				BEL_11 = "D";
			else if (selectedIndex_BEL_11 == 7)
				BEL_11 = "E";
			else if (selectedIndex_BEL_11 == 8)
				BEL_11 = "F";
			else if (selectedIndex_BEL_11 == 9)
				BEL_11 = "G";
			else if (selectedIndex_BEL_11 == 10)
				BEL_11 = "H";
			else if (selectedIndex_BEL_11 == 11)
				BEL_11 = "I";
			else if (selectedIndex_BEL_11 == 12)
				BEL_11 = "J";
			else if (selectedIndex_BEL_11 == 13)
				BEL_11 = "K";
			else if (selectedIndex_BEL_11 == 14)
				BEL_11 = "L";

			std::string WAKTU_12 = context.marshal_as<std::string>(textBox56->Text);
			int selectedIndex_BEL_12 = comboBox13->SelectedIndex;
			std::string BEL_12;
			if (selectedIndex_BEL_12 == 0)
				BEL_12 = "INFO";
			else if (selectedIndex_BEL_12 == 1)
				BEL_12 = "APEL";
			else if (selectedIndex_BEL_12 == 2)
				BEL_12 = "DARURAT";
			else if (selectedIndex_BEL_12 == 3)
				BEL_12 = "A";
			else if (selectedIndex_BEL_12 == 4)
				BEL_12 = "B";
			else if (selectedIndex_BEL_12 == 5)
				BEL_12 = "C";
			else if (selectedIndex_BEL_12 == 6)
				BEL_12 = "D";
			else if (selectedIndex_BEL_12 == 7)
				BEL_12 = "E";
			else if (selectedIndex_BEL_12 == 8)
				BEL_12 = "F";
			else if (selectedIndex_BEL_12 == 9)
				BEL_12 = "G";
			else if (selectedIndex_BEL_12 == 10)
				BEL_12 = "H";
			else if (selectedIndex_BEL_12 == 11)
				BEL_12 = "I";
			else if (selectedIndex_BEL_12 == 12)
				BEL_12 = "J";
			else if (selectedIndex_BEL_12 == 13)
				BEL_12 = "K";
			else if (selectedIndex_BEL_12 == 14)
				BEL_12 = "L";

			std::string WAKTU_13 = context.marshal_as<std::string>(textBox57->Text);
			int selectedIndex_BEL_13 = comboBox14->SelectedIndex;
			std::string BEL_13;
			if (selectedIndex_BEL_13 == 0)
				BEL_13 = "INFO";
			else if (selectedIndex_BEL_13 == 1)
				BEL_13 = "APEL";
			else if (selectedIndex_BEL_13 == 2)
				BEL_13 = "DARURAT";
			else if (selectedIndex_BEL_13 == 3)
				BEL_13 = "A";
			else if (selectedIndex_BEL_13 == 4)
				BEL_13 = "B";
			else if (selectedIndex_BEL_13 == 5)
				BEL_13 = "C";
			else if (selectedIndex_BEL_13 == 6)
				BEL_13 = "D";
			else if (selectedIndex_BEL_13 == 7)
				BEL_13 = "E";
			else if (selectedIndex_BEL_13 == 8)
				BEL_13 = "F";
			else if (selectedIndex_BEL_13 == 9)
				BEL_13 = "G";
			else if (selectedIndex_BEL_13 == 10)
				BEL_13 = "H";
			else if (selectedIndex_BEL_13 == 11)
				BEL_13 = "I";
			else if (selectedIndex_BEL_13 == 12)
				BEL_13 = "J";
			else if (selectedIndex_BEL_13 == 13)
				BEL_13 = "K";
			else if (selectedIndex_BEL_13 == 14)
				BEL_13 = "L";

			std::string WAKTU_14 = context.marshal_as<std::string>(textBox58->Text);
			int selectedIndex_BEL_14 = comboBox15->SelectedIndex;
			std::string BEL_14;
			if (selectedIndex_BEL_14 == 0)
				BEL_14 = "INFO";
			else if (selectedIndex_BEL_14 == 1)
				BEL_14 = "APEL";
			else if (selectedIndex_BEL_14 == 2)
				BEL_14 = "DARURAT";
			else if (selectedIndex_BEL_14 == 3)
				BEL_14 = "A";
			else if (selectedIndex_BEL_14 == 4)
				BEL_14 = "B";
			else if (selectedIndex_BEL_14 == 5)
				BEL_14 = "C";
			else if (selectedIndex_BEL_14 == 6)
				BEL_14 = "D";
			else if (selectedIndex_BEL_14 == 7)
				BEL_14 = "E";
			else if (selectedIndex_BEL_14 == 8)
				BEL_14 = "F";
			else if (selectedIndex_BEL_14 == 9)
				BEL_14 = "G";
			else if (selectedIndex_BEL_14 == 10)
				BEL_14 = "H";
			else if (selectedIndex_BEL_14 == 11)
				BEL_14 = "I";
			else if (selectedIndex_BEL_14 == 12)
				BEL_14 = "J";
			else if (selectedIndex_BEL_14 == 13)
				BEL_14 = "K";
			else if (selectedIndex_BEL_14 == 14)
				BEL_14 = "L";


			newfile.open("jumat.konf", std::ios::out);  // open a file to perform write operation using file object
			if (newfile.is_open()) //checking whether the file is open
			{
				newfile << WAKTU_1 << std::endl; newfile << selectedIndex_BEL_1 << std::endl;
				newfile << WAKTU_2 << std::endl; newfile << selectedIndex_BEL_2 << std::endl;
				newfile << WAKTU_3 << std::endl; newfile << selectedIndex_BEL_3 << std::endl;
				newfile << WAKTU_4 << std::endl; newfile << selectedIndex_BEL_4 << std::endl;
				newfile << WAKTU_5 << std::endl; newfile << selectedIndex_BEL_5 << std::endl;
				newfile << WAKTU_6 << std::endl; newfile << selectedIndex_BEL_6 << std::endl;
				newfile << WAKTU_7 << std::endl; newfile << selectedIndex_BEL_7 << std::endl;
				newfile << WAKTU_8 << std::endl; newfile << selectedIndex_BEL_8 << std::endl;
				newfile << WAKTU_9 << std::endl; newfile << selectedIndex_BEL_9 << std::endl;
				newfile << WAKTU_10 << std::endl; newfile << selectedIndex_BEL_10 << std::endl;
				newfile << WAKTU_11 << std::endl; newfile << selectedIndex_BEL_11 << std::endl;
				newfile << WAKTU_12 << std::endl; newfile << selectedIndex_BEL_12 << std::endl;
				newfile << WAKTU_13 << std::endl; newfile << selectedIndex_BEL_13 << std::endl;
				newfile << WAKTU_14 << std::endl; newfile << selectedIndex_BEL_14 << std::endl;
			}
			newfile.close();
		}
		if (selectedIndex_HARI == 6) {
			HARI = "SABTU";
			msclr::interop::marshal_context context;
			std::string WAKTU_1 = context.marshal_as<std::string>(textBox45->Text);
			int selectedIndex_BEL_1 = comboBox2->SelectedIndex;
			std::string BEL_1;
			if (selectedIndex_BEL_1 == 0)
				BEL_1 = "INFO";
			else if (selectedIndex_BEL_1 == 1)
				BEL_1 = "APEL";
			else if (selectedIndex_BEL_1 == 2)
				BEL_1 = "DARURAT";
			else if (selectedIndex_BEL_1 == 3)
				BEL_1 = "A";
			else if (selectedIndex_BEL_1 == 4)
				BEL_1 = "B";
			else if (selectedIndex_BEL_1 == 5)
				BEL_1 = "C";
			else if (selectedIndex_BEL_1 == 6)
				BEL_1 = "D";
			else if (selectedIndex_BEL_1 == 7)
				BEL_1 = "E";
			else if (selectedIndex_BEL_1 == 8)
				BEL_1 = "F";
			else if (selectedIndex_BEL_1 == 9)
				BEL_1 = "G";
			else if (selectedIndex_BEL_1 == 10)
				BEL_1 = "H";
			else if (selectedIndex_BEL_1 == 11)
				BEL_1 = "I";
			else if (selectedIndex_BEL_1 == 12)
				BEL_1 = "J";
			else if (selectedIndex_BEL_1 == 13)
				BEL_1 = "K";
			else if (selectedIndex_BEL_1 == 14)
				BEL_1 = "L";

			std::string WAKTU_2 = context.marshal_as<std::string>(textBox46->Text);
			int selectedIndex_BEL_2 = comboBox3->SelectedIndex;
			std::string BEL_2;
			if (selectedIndex_BEL_2 == 0)
				BEL_2 = "INFO";
			else if (selectedIndex_BEL_2 == 1)
				BEL_2 = "APEL";
			else if (selectedIndex_BEL_2 == 2)
				BEL_2 = "DARURAT";
			else if (selectedIndex_BEL_2 == 3)
				BEL_2 = "A";
			else if (selectedIndex_BEL_2 == 4)
				BEL_2 = "B";
			else if (selectedIndex_BEL_2 == 5)
				BEL_2 = "C";
			else if (selectedIndex_BEL_2 == 6)
				BEL_2 = "D";
			else if (selectedIndex_BEL_2 == 7)
				BEL_2 = "E";
			else if (selectedIndex_BEL_2 == 8)
				BEL_2 = "F";
			else if (selectedIndex_BEL_2 == 9)
				BEL_2 = "G";
			else if (selectedIndex_BEL_2 == 10)
				BEL_2 = "H";
			else if (selectedIndex_BEL_2 == 11)
				BEL_2 = "I";
			else if (selectedIndex_BEL_2 == 12)
				BEL_2 = "J";
			else if (selectedIndex_BEL_2 == 13)
				BEL_2 = "K";
			else if (selectedIndex_BEL_2 == 14)
				BEL_2 = "L";

			std::string WAKTU_3 = context.marshal_as<std::string>(textBox47->Text);
			int selectedIndex_BEL_3 = comboBox4->SelectedIndex;
			std::string BEL_3;
			if (selectedIndex_BEL_3 == 0)
				BEL_3 = "INFO";
			else if (selectedIndex_BEL_3 == 1)
				BEL_3 = "APEL";
			else if (selectedIndex_BEL_3 == 2)
				BEL_3 = "DARURAT";
			else if (selectedIndex_BEL_3 == 3)
				BEL_3 = "A";
			else if (selectedIndex_BEL_3 == 4)
				BEL_3 = "B";
			else if (selectedIndex_BEL_3 == 5)
				BEL_3 = "C";
			else if (selectedIndex_BEL_3 == 6)
				BEL_3 = "D";
			else if (selectedIndex_BEL_3 == 7)
				BEL_3 = "E";
			else if (selectedIndex_BEL_3 == 8)
				BEL_3 = "F";
			else if (selectedIndex_BEL_3 == 9)
				BEL_3 = "G";
			else if (selectedIndex_BEL_3 == 10)
				BEL_3 = "H";
			else if (selectedIndex_BEL_3 == 11)
				BEL_3 = "I";
			else if (selectedIndex_BEL_3 == 12)
				BEL_3 = "J";
			else if (selectedIndex_BEL_3 == 13)
				BEL_3 = "K";
			else if (selectedIndex_BEL_3 == 14)
				BEL_3 = "L";

			std::string WAKTU_4 = context.marshal_as<std::string>(textBox48->Text);
			int selectedIndex_BEL_4 = comboBox5->SelectedIndex;
			std::string BEL_4;
			if (selectedIndex_BEL_4 == 0)
				BEL_4 = "INFO";
			else if (selectedIndex_BEL_4 == 1)
				BEL_4 = "APEL";
			else if (selectedIndex_BEL_4 == 2)
				BEL_4 = "DARURAT";
			else if (selectedIndex_BEL_4 == 3)
				BEL_4 = "A";
			else if (selectedIndex_BEL_4 == 4)
				BEL_4 = "B";
			else if (selectedIndex_BEL_4 == 5)
				BEL_4 = "C";
			else if (selectedIndex_BEL_4 == 6)
				BEL_4 = "D";
			else if (selectedIndex_BEL_4 == 7)
				BEL_4 = "E";
			else if (selectedIndex_BEL_4 == 8)
				BEL_4 = "F";
			else if (selectedIndex_BEL_4 == 9)
				BEL_4 = "G";
			else if (selectedIndex_BEL_4 == 10)
				BEL_4 = "H";
			else if (selectedIndex_BEL_4 == 11)
				BEL_4 = "I";
			else if (selectedIndex_BEL_4 == 12)
				BEL_4 = "J";
			else if (selectedIndex_BEL_4 == 13)
				BEL_4 = "K";
			else if (selectedIndex_BEL_4 == 14)
				BEL_4 = "L";

			std::string WAKTU_5 = context.marshal_as<std::string>(textBox49->Text);
			int selectedIndex_BEL_5 = comboBox6->SelectedIndex;
			std::string BEL_5;
			if (selectedIndex_BEL_5 == 0)
				BEL_5 = "INFO";
			else if (selectedIndex_BEL_5 == 1)
				BEL_5 = "APEL";
			else if (selectedIndex_BEL_5 == 2)
				BEL_5 = "DARURAT";
			else if (selectedIndex_BEL_5 == 3)
				BEL_5 = "A";
			else if (selectedIndex_BEL_5 == 4)
				BEL_5 = "B";
			else if (selectedIndex_BEL_5 == 5)
				BEL_5 = "C";
			else if (selectedIndex_BEL_5 == 6)
				BEL_5 = "D";
			else if (selectedIndex_BEL_5 == 7)
				BEL_5 = "E";
			else if (selectedIndex_BEL_5 == 8)
				BEL_5 = "F";
			else if (selectedIndex_BEL_5 == 9)
				BEL_5 = "G";
			else if (selectedIndex_BEL_5 == 10)
				BEL_5 = "H";
			else if (selectedIndex_BEL_5 == 11)
				BEL_5 = "I";
			else if (selectedIndex_BEL_5 == 12)
				BEL_5 = "J";
			else if (selectedIndex_BEL_5 == 13)
				BEL_5 = "K";
			else if (selectedIndex_BEL_5 == 14)
				BEL_5 = "L";

			std::string WAKTU_6 = context.marshal_as<std::string>(textBox50->Text);
			int selectedIndex_BEL_6 = comboBox7->SelectedIndex;
			std::string BEL_6;
			if (selectedIndex_BEL_6 == 0)
				BEL_6 = "INFO";
			else if (selectedIndex_BEL_6 == 1)
				BEL_6 = "APEL";
			else if (selectedIndex_BEL_6 == 2)
				BEL_6 = "DARURAT";
			else if (selectedIndex_BEL_6 == 3)
				BEL_6 = "A";
			else if (selectedIndex_BEL_6 == 4)
				BEL_6 = "B";
			else if (selectedIndex_BEL_6 == 5)
				BEL_6 = "C";
			else if (selectedIndex_BEL_6 == 6)
				BEL_6 = "D";
			else if (selectedIndex_BEL_6 == 7)
				BEL_6 = "E";
			else if (selectedIndex_BEL_6 == 8)
				BEL_6 = "F";
			else if (selectedIndex_BEL_6 == 9)
				BEL_6 = "G";
			else if (selectedIndex_BEL_6 == 10)
				BEL_6 = "H";
			else if (selectedIndex_BEL_6 == 11)
				BEL_6 = "I";
			else if (selectedIndex_BEL_6 == 12)
				BEL_6 = "J";
			else if (selectedIndex_BEL_6 == 13)
				BEL_6 = "K";
			else if (selectedIndex_BEL_6 == 14)
				BEL_6 = "L";

			std::string WAKTU_7 = context.marshal_as<std::string>(textBox51->Text);
			int selectedIndex_BEL_7 = comboBox8->SelectedIndex;
			std::string BEL_7;
			if (selectedIndex_BEL_7 == 0)
				BEL_7 = "INFO";
			else if (selectedIndex_BEL_7 == 1)
				BEL_7 = "APEL";
			else if (selectedIndex_BEL_7 == 2)
				BEL_7 = "DARURAT";
			else if (selectedIndex_BEL_7 == 3)
				BEL_7 = "A";
			else if (selectedIndex_BEL_7 == 4)
				BEL_7 = "B";
			else if (selectedIndex_BEL_7 == 5)
				BEL_7 = "C";
			else if (selectedIndex_BEL_7 == 6)
				BEL_7 = "D";
			else if (selectedIndex_BEL_7 == 7)
				BEL_7 = "E";
			else if (selectedIndex_BEL_7 == 8)
				BEL_7 = "F";
			else if (selectedIndex_BEL_7 == 9)
				BEL_7 = "G";
			else if (selectedIndex_BEL_7 == 10)
				BEL_7 = "H";
			else if (selectedIndex_BEL_7 == 11)
				BEL_7 = "I";
			else if (selectedIndex_BEL_7 == 12)
				BEL_7 = "J";
			else if (selectedIndex_BEL_7 == 13)
				BEL_7 = "K";
			else if (selectedIndex_BEL_7 == 14)
				BEL_7 = "L";

			std::string WAKTU_8 = context.marshal_as<std::string>(textBox52->Text);
			int selectedIndex_BEL_8 = comboBox9->SelectedIndex;
			std::string BEL_8;
			if (selectedIndex_BEL_8 == 0)
				BEL_8 = "INFO";
			else if (selectedIndex_BEL_8 == 1)
				BEL_8 = "APEL";
			else if (selectedIndex_BEL_8 == 2)
				BEL_8 = "DARURAT";
			else if (selectedIndex_BEL_8 == 3)
				BEL_8 = "A";
			else if (selectedIndex_BEL_8 == 4)
				BEL_8 = "B";
			else if (selectedIndex_BEL_8 == 5)
				BEL_8 = "C";
			else if (selectedIndex_BEL_8 == 6)
				BEL_8 = "D";
			else if (selectedIndex_BEL_8 == 7)
				BEL_8 = "E";
			else if (selectedIndex_BEL_8 == 8)
				BEL_8 = "F";
			else if (selectedIndex_BEL_8 == 9)
				BEL_8 = "G";
			else if (selectedIndex_BEL_8 == 10)
				BEL_8 = "H";
			else if (selectedIndex_BEL_8 == 11)
				BEL_8 = "I";
			else if (selectedIndex_BEL_8 == 12)
				BEL_8 = "J";
			else if (selectedIndex_BEL_8 == 13)
				BEL_8 = "K";
			else if (selectedIndex_BEL_8 == 14)
				BEL_8 = "L";

			std::string WAKTU_9 = context.marshal_as<std::string>(textBox53->Text);
			int selectedIndex_BEL_9 = comboBox10->SelectedIndex;
			std::string BEL_9;
			if (selectedIndex_BEL_9 == 0)
				BEL_9 = "INFO";
			else if (selectedIndex_BEL_9 == 1)
				BEL_9 = "APEL";
			else if (selectedIndex_BEL_9 == 2)
				BEL_9 = "DARURAT";
			else if (selectedIndex_BEL_9 == 3)
				BEL_9 = "A";
			else if (selectedIndex_BEL_9 == 4)
				BEL_9 = "B";
			else if (selectedIndex_BEL_9 == 5)
				BEL_9 = "C";
			else if (selectedIndex_BEL_9 == 6)
				BEL_9 = "D";
			else if (selectedIndex_BEL_9 == 7)
				BEL_9 = "E";
			else if (selectedIndex_BEL_9 == 8)
				BEL_9 = "F";
			else if (selectedIndex_BEL_9 == 9)
				BEL_9 = "G";
			else if (selectedIndex_BEL_9 == 10)
				BEL_9 = "H";
			else if (selectedIndex_BEL_9 == 11)
				BEL_9 = "I";
			else if (selectedIndex_BEL_9 == 12)
				BEL_9 = "J";
			else if (selectedIndex_BEL_9 == 13)
				BEL_9 = "K";
			else if (selectedIndex_BEL_9 == 14)
				BEL_9 = "L";

			std::string WAKTU_10 = context.marshal_as<std::string>(textBox54->Text);
			int selectedIndex_BEL_10 = comboBox11->SelectedIndex;
			std::string BEL_10;
			if (selectedIndex_BEL_10 == 0)
				BEL_10 = "INFO";
			else if (selectedIndex_BEL_10 == 1)
				BEL_10 = "APEL";
			else if (selectedIndex_BEL_10 == 2)
				BEL_10 = "DARURAT";
			else if (selectedIndex_BEL_10 == 3)
				BEL_10 = "A";
			else if (selectedIndex_BEL_10 == 4)
				BEL_10 = "B";
			else if (selectedIndex_BEL_10 == 5)
				BEL_10 = "C";
			else if (selectedIndex_BEL_10 == 6)
				BEL_10 = "D";
			else if (selectedIndex_BEL_10 == 7)
				BEL_10 = "E";
			else if (selectedIndex_BEL_10 == 8)
				BEL_10 = "F";
			else if (selectedIndex_BEL_10 == 9)
				BEL_10 = "G";
			else if (selectedIndex_BEL_10 == 10)
				BEL_10 = "H";
			else if (selectedIndex_BEL_10 == 11)
				BEL_10 = "I";
			else if (selectedIndex_BEL_10 == 12)
				BEL_10 = "J";
			else if (selectedIndex_BEL_10 == 13)
				BEL_10 = "K";
			else if (selectedIndex_BEL_10 == 14)
				BEL_10 = "L";

			std::string WAKTU_11 = context.marshal_as<std::string>(textBox55->Text);
			int selectedIndex_BEL_11 = comboBox12->SelectedIndex;
			std::string BEL_11;
			if (selectedIndex_BEL_11 == 0)
				BEL_11 = "INFO";
			else if (selectedIndex_BEL_11 == 1)
				BEL_11 = "APEL";
			else if (selectedIndex_BEL_11 == 2)
				BEL_11 = "DARURAT";
			else if (selectedIndex_BEL_11 == 3)
				BEL_11 = "A";
			else if (selectedIndex_BEL_11 == 4)
				BEL_11 = "B";
			else if (selectedIndex_BEL_11 == 5)
				BEL_11 = "C";
			else if (selectedIndex_BEL_11 == 6)
				BEL_11 = "D";
			else if (selectedIndex_BEL_11 == 7)
				BEL_11 = "E";
			else if (selectedIndex_BEL_11 == 8)
				BEL_11 = "F";
			else if (selectedIndex_BEL_11 == 9)
				BEL_11 = "G";
			else if (selectedIndex_BEL_11 == 10)
				BEL_11 = "H";
			else if (selectedIndex_BEL_11 == 11)
				BEL_11 = "I";
			else if (selectedIndex_BEL_11 == 12)
				BEL_11 = "J";
			else if (selectedIndex_BEL_11 == 13)
				BEL_11 = "K";
			else if (selectedIndex_BEL_11 == 14)
				BEL_11 = "L";

			std::string WAKTU_12 = context.marshal_as<std::string>(textBox56->Text);
			int selectedIndex_BEL_12 = comboBox13->SelectedIndex;
			std::string BEL_12;
			if (selectedIndex_BEL_12 == 0)
				BEL_12 = "INFO";
			else if (selectedIndex_BEL_12 == 1)
				BEL_12 = "APEL";
			else if (selectedIndex_BEL_12 == 2)
				BEL_12 = "DARURAT";
			else if (selectedIndex_BEL_12 == 3)
				BEL_12 = "A";
			else if (selectedIndex_BEL_12 == 4)
				BEL_12 = "B";
			else if (selectedIndex_BEL_12 == 5)
				BEL_12 = "C";
			else if (selectedIndex_BEL_12 == 6)
				BEL_12 = "D";
			else if (selectedIndex_BEL_12 == 7)
				BEL_12 = "E";
			else if (selectedIndex_BEL_12 == 8)
				BEL_12 = "F";
			else if (selectedIndex_BEL_12 == 9)
				BEL_12 = "G";
			else if (selectedIndex_BEL_12 == 10)
				BEL_12 = "H";
			else if (selectedIndex_BEL_12 == 11)
				BEL_12 = "I";
			else if (selectedIndex_BEL_12 == 12)
				BEL_12 = "J";
			else if (selectedIndex_BEL_12 == 13)
				BEL_12 = "K";
			else if (selectedIndex_BEL_12 == 14)
				BEL_12 = "L";

			std::string WAKTU_13 = context.marshal_as<std::string>(textBox57->Text);
			int selectedIndex_BEL_13 = comboBox14->SelectedIndex;
			std::string BEL_13;
			if (selectedIndex_BEL_13 == 0)
				BEL_13 = "INFO";
			else if (selectedIndex_BEL_13 == 1)
				BEL_13 = "APEL";
			else if (selectedIndex_BEL_13 == 2)
				BEL_13 = "DARURAT";
			else if (selectedIndex_BEL_13 == 3)
				BEL_13 = "A";
			else if (selectedIndex_BEL_13 == 4)
				BEL_13 = "B";
			else if (selectedIndex_BEL_13 == 5)
				BEL_13 = "C";
			else if (selectedIndex_BEL_13 == 6)
				BEL_13 = "D";
			else if (selectedIndex_BEL_13 == 7)
				BEL_13 = "E";
			else if (selectedIndex_BEL_13 == 8)
				BEL_13 = "F";
			else if (selectedIndex_BEL_13 == 9)
				BEL_13 = "G";
			else if (selectedIndex_BEL_13 == 10)
				BEL_13 = "H";
			else if (selectedIndex_BEL_13 == 11)
				BEL_13 = "I";
			else if (selectedIndex_BEL_13 == 12)
				BEL_13 = "J";
			else if (selectedIndex_BEL_13 == 13)
				BEL_13 = "K";
			else if (selectedIndex_BEL_13 == 14)
				BEL_13 = "L";

			std::string WAKTU_14 = context.marshal_as<std::string>(textBox58->Text);
			int selectedIndex_BEL_14 = comboBox15->SelectedIndex;
			std::string BEL_14;
			if (selectedIndex_BEL_14 == 0)
				BEL_14 = "INFO";
			else if (selectedIndex_BEL_14 == 1)
				BEL_14 = "APEL";
			else if (selectedIndex_BEL_14 == 2)
				BEL_14 = "DARURAT";
			else if (selectedIndex_BEL_14 == 3)
				BEL_14 = "A";
			else if (selectedIndex_BEL_14 == 4)
				BEL_14 = "B";
			else if (selectedIndex_BEL_14 == 5)
				BEL_14 = "C";
			else if (selectedIndex_BEL_14 == 6)
				BEL_14 = "D";
			else if (selectedIndex_BEL_14 == 7)
				BEL_14 = "E";
			else if (selectedIndex_BEL_14 == 8)
				BEL_14 = "F";
			else if (selectedIndex_BEL_14 == 9)
				BEL_14 = "G";
			else if (selectedIndex_BEL_14 == 10)
				BEL_14 = "H";
			else if (selectedIndex_BEL_14 == 11)
				BEL_14 = "I";
			else if (selectedIndex_BEL_14 == 12)
				BEL_14 = "J";
			else if (selectedIndex_BEL_14 == 13)
				BEL_14 = "K";
			else if (selectedIndex_BEL_14 == 14)
				BEL_14 = "L";


			newfile.open("sabtu.konf", std::ios::out);  // open a file to perform write operation using file object
			if (newfile.is_open()) //checking whether the file is open
			{
				newfile << WAKTU_1 << std::endl; newfile << selectedIndex_BEL_1 << std::endl;
				newfile << WAKTU_2 << std::endl; newfile << selectedIndex_BEL_2 << std::endl;
				newfile << WAKTU_3 << std::endl; newfile << selectedIndex_BEL_3 << std::endl;
				newfile << WAKTU_4 << std::endl; newfile << selectedIndex_BEL_4 << std::endl;
				newfile << WAKTU_5 << std::endl; newfile << selectedIndex_BEL_5 << std::endl;
				newfile << WAKTU_6 << std::endl; newfile << selectedIndex_BEL_6 << std::endl;
				newfile << WAKTU_7 << std::endl; newfile << selectedIndex_BEL_7 << std::endl;
				newfile << WAKTU_8 << std::endl; newfile << selectedIndex_BEL_8 << std::endl;
				newfile << WAKTU_9 << std::endl; newfile << selectedIndex_BEL_9 << std::endl;
				newfile << WAKTU_10 << std::endl; newfile << selectedIndex_BEL_10 << std::endl;
				newfile << WAKTU_11 << std::endl; newfile << selectedIndex_BEL_11 << std::endl;
				newfile << WAKTU_12 << std::endl; newfile << selectedIndex_BEL_12 << std::endl;
				newfile << WAKTU_13 << std::endl; newfile << selectedIndex_BEL_13 << std::endl;
				newfile << WAKTU_14 << std::endl; newfile << selectedIndex_BEL_14 << std::endl;
			}
			newfile.close();
		}
		else if (selectedIndex_HARI == 7) {
			HARI = "PUASA";
			msclr::interop::marshal_context context;
			std::string WAKTU_1 = context.marshal_as<std::string>(textBox45->Text);
			int selectedIndex_BEL_1 = comboBox2->SelectedIndex;
			std::string BEL_1;
			if (selectedIndex_BEL_1 == 0)
				BEL_1 = "INFO";
			else if (selectedIndex_BEL_1 == 1)
				BEL_1 = "APEL";
			else if (selectedIndex_BEL_1 == 2)
				BEL_1 = "DARURAT";
			else if (selectedIndex_BEL_1 == 3)
				BEL_1 = "A";
			else if (selectedIndex_BEL_1 == 4)
				BEL_1 = "B";
			else if (selectedIndex_BEL_1 == 5)
				BEL_1 = "C";
			else if (selectedIndex_BEL_1 == 6)
				BEL_1 = "D";
			else if (selectedIndex_BEL_1 == 7)
				BEL_1 = "E";
			else if (selectedIndex_BEL_1 == 8)
				BEL_1 = "F";
			else if (selectedIndex_BEL_1 == 9)
				BEL_1 = "G";
			else if (selectedIndex_BEL_1 == 10)
				BEL_1 = "H";
			else if (selectedIndex_BEL_1 == 11)
				BEL_1 = "I";
			else if (selectedIndex_BEL_1 == 12)
				BEL_1 = "J";
			else if (selectedIndex_BEL_1 == 13)
				BEL_1 = "K";
			else if (selectedIndex_BEL_1 == 14)
				BEL_1 = "L";

			std::string WAKTU_2 = context.marshal_as<std::string>(textBox46->Text);
			int selectedIndex_BEL_2 = comboBox3->SelectedIndex;
			std::string BEL_2;
			if (selectedIndex_BEL_2 == 0)
				BEL_2 = "INFO";
			else if (selectedIndex_BEL_2 == 1)
				BEL_2 = "APEL";
			else if (selectedIndex_BEL_2 == 2)
				BEL_2 = "DARURAT";
			else if (selectedIndex_BEL_2 == 3)
				BEL_2 = "A";
			else if (selectedIndex_BEL_2 == 4)
				BEL_2 = "B";
			else if (selectedIndex_BEL_2 == 5)
				BEL_2 = "C";
			else if (selectedIndex_BEL_2 == 6)
				BEL_2 = "D";
			else if (selectedIndex_BEL_2 == 7)
				BEL_2 = "E";
			else if (selectedIndex_BEL_2 == 8)
				BEL_2 = "F";
			else if (selectedIndex_BEL_2 == 9)
				BEL_2 = "G";
			else if (selectedIndex_BEL_2 == 10)
				BEL_2 = "H";
			else if (selectedIndex_BEL_2 == 11)
				BEL_2 = "I";
			else if (selectedIndex_BEL_2 == 12)
				BEL_2 = "J";
			else if (selectedIndex_BEL_2 == 13)
				BEL_2 = "K";
			else if (selectedIndex_BEL_2 == 14)
				BEL_2 = "L";

			std::string WAKTU_3 = context.marshal_as<std::string>(textBox47->Text);
			int selectedIndex_BEL_3 = comboBox4->SelectedIndex;
			std::string BEL_3;
			if (selectedIndex_BEL_3 == 0)
				BEL_3 = "INFO";
			else if (selectedIndex_BEL_3 == 1)
				BEL_3 = "APEL";
			else if (selectedIndex_BEL_3 == 2)
				BEL_3 = "DARURAT";
			else if (selectedIndex_BEL_3 == 3)
				BEL_3 = "A";
			else if (selectedIndex_BEL_3 == 4)
				BEL_3 = "B";
			else if (selectedIndex_BEL_3 == 5)
				BEL_3 = "C";
			else if (selectedIndex_BEL_3 == 6)
				BEL_3 = "D";
			else if (selectedIndex_BEL_3 == 7)
				BEL_3 = "E";
			else if (selectedIndex_BEL_3 == 8)
				BEL_3 = "F";
			else if (selectedIndex_BEL_3 == 9)
				BEL_3 = "G";
			else if (selectedIndex_BEL_3 == 10)
				BEL_3 = "H";
			else if (selectedIndex_BEL_3 == 11)
				BEL_3 = "I";
			else if (selectedIndex_BEL_3 == 12)
				BEL_3 = "J";
			else if (selectedIndex_BEL_3 == 13)
				BEL_3 = "K";
			else if (selectedIndex_BEL_3 == 14)
				BEL_3 = "L";

			std::string WAKTU_4 = context.marshal_as<std::string>(textBox48->Text);
			int selectedIndex_BEL_4 = comboBox5->SelectedIndex;
			std::string BEL_4;
			if (selectedIndex_BEL_4 == 0)
				BEL_4 = "INFO";
			else if (selectedIndex_BEL_4 == 1)
				BEL_4 = "APEL";
			else if (selectedIndex_BEL_4 == 2)
				BEL_4 = "DARURAT";
			else if (selectedIndex_BEL_4 == 3)
				BEL_4 = "A";
			else if (selectedIndex_BEL_4 == 4)
				BEL_4 = "B";
			else if (selectedIndex_BEL_4 == 5)
				BEL_4 = "C";
			else if (selectedIndex_BEL_4 == 6)
				BEL_4 = "D";
			else if (selectedIndex_BEL_4 == 7)
				BEL_4 = "E";
			else if (selectedIndex_BEL_4 == 8)
				BEL_4 = "F";
			else if (selectedIndex_BEL_4 == 9)
				BEL_4 = "G";
			else if (selectedIndex_BEL_4 == 10)
				BEL_4 = "H";
			else if (selectedIndex_BEL_4 == 11)
				BEL_4 = "I";
			else if (selectedIndex_BEL_4 == 12)
				BEL_4 = "J";
			else if (selectedIndex_BEL_4 == 13)
				BEL_4 = "K";
			else if (selectedIndex_BEL_4 == 14)
				BEL_4 = "L";

			std::string WAKTU_5 = context.marshal_as<std::string>(textBox49->Text);
			int selectedIndex_BEL_5 = comboBox6->SelectedIndex;
			std::string BEL_5;
			if (selectedIndex_BEL_5 == 0)
				BEL_5 = "INFO";
			else if (selectedIndex_BEL_5 == 1)
				BEL_5 = "APEL";
			else if (selectedIndex_BEL_5 == 2)
				BEL_5 = "DARURAT";
			else if (selectedIndex_BEL_5 == 3)
				BEL_5 = "A";
			else if (selectedIndex_BEL_5 == 4)
				BEL_5 = "B";
			else if (selectedIndex_BEL_5 == 5)
				BEL_5 = "C";
			else if (selectedIndex_BEL_5 == 6)
				BEL_5 = "D";
			else if (selectedIndex_BEL_5 == 7)
				BEL_5 = "E";
			else if (selectedIndex_BEL_5 == 8)
				BEL_5 = "F";
			else if (selectedIndex_BEL_5 == 9)
				BEL_5 = "G";
			else if (selectedIndex_BEL_5 == 10)
				BEL_5 = "H";
			else if (selectedIndex_BEL_5 == 11)
				BEL_5 = "I";
			else if (selectedIndex_BEL_5 == 12)
				BEL_5 = "J";
			else if (selectedIndex_BEL_5 == 13)
				BEL_5 = "K";
			else if (selectedIndex_BEL_5 == 14)
				BEL_5 = "L";

			std::string WAKTU_6 = context.marshal_as<std::string>(textBox50->Text);
			int selectedIndex_BEL_6 = comboBox7->SelectedIndex;
			std::string BEL_6;
			if (selectedIndex_BEL_6 == 0)
				BEL_6 = "INFO";
			else if (selectedIndex_BEL_6 == 1)
				BEL_6 = "APEL";
			else if (selectedIndex_BEL_6 == 2)
				BEL_6 = "DARURAT";
			else if (selectedIndex_BEL_6 == 3)
				BEL_6 = "A";
			else if (selectedIndex_BEL_6 == 4)
				BEL_6 = "B";
			else if (selectedIndex_BEL_6 == 5)
				BEL_6 = "C";
			else if (selectedIndex_BEL_6 == 6)
				BEL_6 = "D";
			else if (selectedIndex_BEL_6 == 7)
				BEL_6 = "E";
			else if (selectedIndex_BEL_6 == 8)
				BEL_6 = "F";
			else if (selectedIndex_BEL_6 == 9)
				BEL_6 = "G";
			else if (selectedIndex_BEL_6 == 10)
				BEL_6 = "H";
			else if (selectedIndex_BEL_6 == 11)
				BEL_6 = "I";
			else if (selectedIndex_BEL_6 == 12)
				BEL_6 = "J";
			else if (selectedIndex_BEL_6 == 13)
				BEL_6 = "K";
			else if (selectedIndex_BEL_6 == 14)
				BEL_6 = "L";

			std::string WAKTU_7 = context.marshal_as<std::string>(textBox51->Text);
			int selectedIndex_BEL_7 = comboBox8->SelectedIndex;
			std::string BEL_7;
			if (selectedIndex_BEL_7 == 0)
				BEL_7 = "INFO";
			else if (selectedIndex_BEL_7 == 1)
				BEL_7 = "APEL";
			else if (selectedIndex_BEL_7 == 2)
				BEL_7 = "DARURAT";
			else if (selectedIndex_BEL_7 == 3)
				BEL_7 = "A";
			else if (selectedIndex_BEL_7 == 4)
				BEL_7 = "B";
			else if (selectedIndex_BEL_7 == 5)
				BEL_7 = "C";
			else if (selectedIndex_BEL_7 == 6)
				BEL_7 = "D";
			else if (selectedIndex_BEL_7 == 7)
				BEL_7 = "E";
			else if (selectedIndex_BEL_7 == 8)
				BEL_7 = "F";
			else if (selectedIndex_BEL_7 == 9)
				BEL_7 = "G";
			else if (selectedIndex_BEL_7 == 10)
				BEL_7 = "H";
			else if (selectedIndex_BEL_7 == 11)
				BEL_7 = "I";
			else if (selectedIndex_BEL_7 == 12)
				BEL_7 = "J";
			else if (selectedIndex_BEL_7 == 13)
				BEL_7 = "K";
			else if (selectedIndex_BEL_7 == 14)
				BEL_7 = "L";

			std::string WAKTU_8 = context.marshal_as<std::string>(textBox52->Text);
			int selectedIndex_BEL_8 = comboBox9->SelectedIndex;
			std::string BEL_8;
			if (selectedIndex_BEL_8 == 0)
				BEL_8 = "INFO";
			else if (selectedIndex_BEL_8 == 1)
				BEL_8 = "APEL";
			else if (selectedIndex_BEL_8 == 2)
				BEL_8 = "DARURAT";
			else if (selectedIndex_BEL_8 == 3)
				BEL_8 = "A";
			else if (selectedIndex_BEL_8 == 4)
				BEL_8 = "B";
			else if (selectedIndex_BEL_8 == 5)
				BEL_8 = "C";
			else if (selectedIndex_BEL_8 == 6)
				BEL_8 = "D";
			else if (selectedIndex_BEL_8 == 7)
				BEL_8 = "E";
			else if (selectedIndex_BEL_8 == 8)
				BEL_8 = "F";
			else if (selectedIndex_BEL_8 == 9)
				BEL_8 = "G";
			else if (selectedIndex_BEL_8 == 10)
				BEL_8 = "H";
			else if (selectedIndex_BEL_8 == 11)
				BEL_8 = "I";
			else if (selectedIndex_BEL_8 == 12)
				BEL_8 = "J";
			else if (selectedIndex_BEL_8 == 13)
				BEL_8 = "K";
			else if (selectedIndex_BEL_8 == 14)
				BEL_8 = "L";

			std::string WAKTU_9 = context.marshal_as<std::string>(textBox53->Text);
			int selectedIndex_BEL_9 = comboBox10->SelectedIndex;
			std::string BEL_9;
			if (selectedIndex_BEL_9 == 0)
				BEL_9 = "INFO";
			else if (selectedIndex_BEL_9 == 1)
				BEL_9 = "APEL";
			else if (selectedIndex_BEL_9 == 2)
				BEL_9 = "DARURAT";
			else if (selectedIndex_BEL_9 == 3)
				BEL_9 = "A";
			else if (selectedIndex_BEL_9 == 4)
				BEL_9 = "B";
			else if (selectedIndex_BEL_9 == 5)
				BEL_9 = "C";
			else if (selectedIndex_BEL_9 == 6)
				BEL_9 = "D";
			else if (selectedIndex_BEL_9 == 7)
				BEL_9 = "E";
			else if (selectedIndex_BEL_9 == 8)
				BEL_9 = "F";
			else if (selectedIndex_BEL_9 == 9)
				BEL_9 = "G";
			else if (selectedIndex_BEL_9 == 10)
				BEL_9 = "H";
			else if (selectedIndex_BEL_9 == 11)
				BEL_9 = "I";
			else if (selectedIndex_BEL_9 == 12)
				BEL_9 = "J";
			else if (selectedIndex_BEL_9 == 13)
				BEL_9 = "K";
			else if (selectedIndex_BEL_9 == 14)
				BEL_9 = "L";

			std::string WAKTU_10 = context.marshal_as<std::string>(textBox54->Text);
			int selectedIndex_BEL_10 = comboBox11->SelectedIndex;
			std::string BEL_10;
			if (selectedIndex_BEL_10 == 0)
				BEL_10 = "INFO";
			else if (selectedIndex_BEL_10 == 1)
				BEL_10 = "APEL";
			else if (selectedIndex_BEL_10 == 2)
				BEL_10 = "DARURAT";
			else if (selectedIndex_BEL_10 == 3)
				BEL_10 = "A";
			else if (selectedIndex_BEL_10 == 4)
				BEL_10 = "B";
			else if (selectedIndex_BEL_10 == 5)
				BEL_10 = "C";
			else if (selectedIndex_BEL_10 == 6)
				BEL_10 = "D";
			else if (selectedIndex_BEL_10 == 7)
				BEL_10 = "E";
			else if (selectedIndex_BEL_10 == 8)
				BEL_10 = "F";
			else if (selectedIndex_BEL_10 == 9)
				BEL_10 = "G";
			else if (selectedIndex_BEL_10 == 10)
				BEL_10 = "H";
			else if (selectedIndex_BEL_10 == 11)
				BEL_10 = "I";
			else if (selectedIndex_BEL_10 == 12)
				BEL_10 = "J";
			else if (selectedIndex_BEL_10 == 13)
				BEL_10 = "K";
			else if (selectedIndex_BEL_10 == 14)
				BEL_10 = "L";

			std::string WAKTU_11 = context.marshal_as<std::string>(textBox55->Text);
			int selectedIndex_BEL_11 = comboBox12->SelectedIndex;
			std::string BEL_11;
			if (selectedIndex_BEL_11 == 0)
				BEL_11 = "INFO";
			else if (selectedIndex_BEL_11 == 1)
				BEL_11 = "APEL";
			else if (selectedIndex_BEL_11 == 2)
				BEL_11 = "DARURAT";
			else if (selectedIndex_BEL_11 == 3)
				BEL_11 = "A";
			else if (selectedIndex_BEL_11 == 4)
				BEL_11 = "B";
			else if (selectedIndex_BEL_11 == 5)
				BEL_11 = "C";
			else if (selectedIndex_BEL_11 == 6)
				BEL_11 = "D";
			else if (selectedIndex_BEL_11 == 7)
				BEL_11 = "E";
			else if (selectedIndex_BEL_11 == 8)
				BEL_11 = "F";
			else if (selectedIndex_BEL_11 == 9)
				BEL_11 = "G";
			else if (selectedIndex_BEL_11 == 10)
				BEL_11 = "H";
			else if (selectedIndex_BEL_11 == 11)
				BEL_11 = "I";
			else if (selectedIndex_BEL_11 == 12)
				BEL_11 = "J";
			else if (selectedIndex_BEL_11 == 13)
				BEL_11 = "K";
			else if (selectedIndex_BEL_11 == 14)
				BEL_11 = "L";

			std::string WAKTU_12 = context.marshal_as<std::string>(textBox56->Text);
			int selectedIndex_BEL_12 = comboBox13->SelectedIndex;
			std::string BEL_12;
			if (selectedIndex_BEL_12 == 0)
				BEL_12 = "INFO";
			else if (selectedIndex_BEL_12 == 1)
				BEL_12 = "APEL";
			else if (selectedIndex_BEL_12 == 2)
				BEL_12 = "DARURAT";
			else if (selectedIndex_BEL_12 == 3)
				BEL_12 = "A";
			else if (selectedIndex_BEL_12 == 4)
				BEL_12 = "B";
			else if (selectedIndex_BEL_12 == 5)
				BEL_12 = "C";
			else if (selectedIndex_BEL_12 == 6)
				BEL_12 = "D";
			else if (selectedIndex_BEL_12 == 7)
				BEL_12 = "E";
			else if (selectedIndex_BEL_12 == 8)
				BEL_12 = "F";
			else if (selectedIndex_BEL_12 == 9)
				BEL_12 = "G";
			else if (selectedIndex_BEL_12 == 10)
				BEL_12 = "H";
			else if (selectedIndex_BEL_12 == 11)
				BEL_12 = "I";
			else if (selectedIndex_BEL_12 == 12)
				BEL_12 = "J";
			else if (selectedIndex_BEL_12 == 13)
				BEL_12 = "K";
			else if (selectedIndex_BEL_12 == 14)
				BEL_12 = "L";

			std::string WAKTU_13 = context.marshal_as<std::string>(textBox57->Text);
			int selectedIndex_BEL_13 = comboBox14->SelectedIndex;
			std::string BEL_13;
			if (selectedIndex_BEL_13 == 0)
				BEL_13 = "INFO";
			else if (selectedIndex_BEL_13 == 1)
				BEL_13 = "APEL";
			else if (selectedIndex_BEL_13 == 2)
				BEL_13 = "DARURAT";
			else if (selectedIndex_BEL_13 == 3)
				BEL_13 = "A";
			else if (selectedIndex_BEL_13 == 4)
				BEL_13 = "B";
			else if (selectedIndex_BEL_13 == 5)
				BEL_13 = "C";
			else if (selectedIndex_BEL_13 == 6)
				BEL_13 = "D";
			else if (selectedIndex_BEL_13 == 7)
				BEL_13 = "E";
			else if (selectedIndex_BEL_13 == 8)
				BEL_13 = "F";
			else if (selectedIndex_BEL_13 == 9)
				BEL_13 = "G";
			else if (selectedIndex_BEL_13 == 10)
				BEL_13 = "H";
			else if (selectedIndex_BEL_13 == 11)
				BEL_13 = "I";
			else if (selectedIndex_BEL_13 == 12)
				BEL_13 = "J";
			else if (selectedIndex_BEL_13 == 13)
				BEL_13 = "K";
			else if (selectedIndex_BEL_13 == 14)
				BEL_13 = "L";

			std::string WAKTU_14 = context.marshal_as<std::string>(textBox58->Text);
			int selectedIndex_BEL_14 = comboBox15->SelectedIndex;
			std::string BEL_14;
			if (selectedIndex_BEL_14 == 0)
				BEL_14 = "INFO";
			else if (selectedIndex_BEL_14 == 1)
				BEL_14 = "APEL";
			else if (selectedIndex_BEL_14 == 2)
				BEL_14 = "DARURAT";
			else if (selectedIndex_BEL_14 == 3)
				BEL_14 = "A";
			else if (selectedIndex_BEL_14 == 4)
				BEL_14 = "B";
			else if (selectedIndex_BEL_14 == 5)
				BEL_14 = "C";
			else if (selectedIndex_BEL_14 == 6)
				BEL_14 = "D";
			else if (selectedIndex_BEL_14 == 7)
				BEL_14 = "E";
			else if (selectedIndex_BEL_14 == 8)
				BEL_14 = "F";
			else if (selectedIndex_BEL_14 == 9)
				BEL_14 = "G";
			else if (selectedIndex_BEL_14 == 10)
				BEL_14 = "H";
			else if (selectedIndex_BEL_14 == 11)
				BEL_14 = "I";
			else if (selectedIndex_BEL_14 == 12)
				BEL_14 = "J";
			else if (selectedIndex_BEL_14 == 13)
				BEL_14 = "K";
			else if (selectedIndex_BEL_14 == 14)
				BEL_14 = "L";


			newfile.open("puasa.konf", std::ios::out);  // open a file to perform write operation using file object
			if (newfile.is_open()) //checking whether the file is open
			{
				newfile << WAKTU_1 << std::endl; newfile << selectedIndex_BEL_1 << std::endl;
				newfile << WAKTU_2 << std::endl; newfile << selectedIndex_BEL_2 << std::endl;
				newfile << WAKTU_3 << std::endl; newfile << selectedIndex_BEL_3 << std::endl;
				newfile << WAKTU_4 << std::endl; newfile << selectedIndex_BEL_4 << std::endl;
				newfile << WAKTU_5 << std::endl; newfile << selectedIndex_BEL_5 << std::endl;
				newfile << WAKTU_6 << std::endl; newfile << selectedIndex_BEL_6 << std::endl;
				newfile << WAKTU_7 << std::endl; newfile << selectedIndex_BEL_7 << std::endl;
				newfile << WAKTU_8 << std::endl; newfile << selectedIndex_BEL_8 << std::endl;
				newfile << WAKTU_9 << std::endl; newfile << selectedIndex_BEL_9 << std::endl;
				newfile << WAKTU_10 << std::endl; newfile << selectedIndex_BEL_10 << std::endl;
				newfile << WAKTU_11 << std::endl; newfile << selectedIndex_BEL_11 << std::endl;
				newfile << WAKTU_12 << std::endl; newfile << selectedIndex_BEL_12 << std::endl;
				newfile << WAKTU_13 << std::endl; newfile << selectedIndex_BEL_13 << std::endl;
				newfile << WAKTU_14 << std::endl; newfile << selectedIndex_BEL_14 << std::endl;
				//newfile << WAKTU_15 << std::endl; newfile << selectedIndex_BEL_15 << std::endl;
			}
			newfile.close();
		}

		else if (selectedIndex_HARI == 8) {
			HARI = "UJIAN";
			msclr::interop::marshal_context context;
			std::string WAKTU_1 = context.marshal_as<std::string>(textBox45->Text);
			int selectedIndex_BEL_1 = comboBox2->SelectedIndex;
			std::string BEL_1;
			if (selectedIndex_BEL_1 == 0)
				BEL_1 = "INFO";
			else if (selectedIndex_BEL_1 == 1)
				BEL_1 = "APEL";
			else if (selectedIndex_BEL_1 == 2)
				BEL_1 = "DARURAT";
			else if (selectedIndex_BEL_1 == 3)
				BEL_1 = "A";
			else if (selectedIndex_BEL_1 == 4)
				BEL_1 = "B";
			else if (selectedIndex_BEL_1 == 5)
				BEL_1 = "C";
			else if (selectedIndex_BEL_1 == 6)
				BEL_1 = "D";
			else if (selectedIndex_BEL_1 == 7)
				BEL_1 = "E";
			else if (selectedIndex_BEL_1 == 8)
				BEL_1 = "F";
			else if (selectedIndex_BEL_1 == 9)
				BEL_1 = "G";
			else if (selectedIndex_BEL_1 == 10)
				BEL_1 = "H";
			else if (selectedIndex_BEL_1 == 11)
				BEL_1 = "I";
			else if (selectedIndex_BEL_1 == 12)
				BEL_1 = "J";
			else if (selectedIndex_BEL_1 == 13)
				BEL_1 = "K";
			else if (selectedIndex_BEL_1 == 14)
				BEL_1 = "L";

			std::string WAKTU_2 = context.marshal_as<std::string>(textBox46->Text);
			int selectedIndex_BEL_2 = comboBox3->SelectedIndex;
			std::string BEL_2;
			if (selectedIndex_BEL_2 == 0)
				BEL_2 = "INFO";
			else if (selectedIndex_BEL_2 == 1)
				BEL_2 = "APEL";
			else if (selectedIndex_BEL_2 == 2)
				BEL_2 = "DARURAT";
			else if (selectedIndex_BEL_2 == 3)
				BEL_2 = "A";
			else if (selectedIndex_BEL_2 == 4)
				BEL_2 = "B";
			else if (selectedIndex_BEL_2 == 5)
				BEL_2 = "C";
			else if (selectedIndex_BEL_2 == 6)
				BEL_2 = "D";
			else if (selectedIndex_BEL_2 == 7)
				BEL_2 = "E";
			else if (selectedIndex_BEL_2 == 8)
				BEL_2 = "F";
			else if (selectedIndex_BEL_2 == 9)
				BEL_2 = "G";
			else if (selectedIndex_BEL_2 == 10)
				BEL_2 = "H";
			else if (selectedIndex_BEL_2 == 11)
				BEL_2 = "I";
			else if (selectedIndex_BEL_2 == 12)
				BEL_2 = "J";
			else if (selectedIndex_BEL_2 == 13)
				BEL_2 = "K";
			else if (selectedIndex_BEL_2 == 14)
				BEL_2 = "L";

			std::string WAKTU_3 = context.marshal_as<std::string>(textBox47->Text);
			int selectedIndex_BEL_3 = comboBox4->SelectedIndex;
			std::string BEL_3;
			if (selectedIndex_BEL_3 == 0)
				BEL_3 = "INFO";
			else if (selectedIndex_BEL_3 == 1)
				BEL_3 = "APEL";
			else if (selectedIndex_BEL_3 == 2)
				BEL_3 = "DARURAT";
			else if (selectedIndex_BEL_3 == 3)
				BEL_3 = "A";
			else if (selectedIndex_BEL_3 == 4)
				BEL_3 = "B";
			else if (selectedIndex_BEL_3 == 5)
				BEL_3 = "C";
			else if (selectedIndex_BEL_3 == 6)
				BEL_3 = "D";
			else if (selectedIndex_BEL_3 == 7)
				BEL_3 = "E";
			else if (selectedIndex_BEL_3 == 8)
				BEL_3 = "F";
			else if (selectedIndex_BEL_3 == 9)
				BEL_3 = "G";
			else if (selectedIndex_BEL_3 == 10)
				BEL_3 = "H";
			else if (selectedIndex_BEL_3 == 11)
				BEL_3 = "I";
			else if (selectedIndex_BEL_3 == 12)
				BEL_3 = "J";
			else if (selectedIndex_BEL_3 == 13)
				BEL_3 = "K";
			else if (selectedIndex_BEL_3 == 14)
				BEL_3 = "L";

			std::string WAKTU_4 = context.marshal_as<std::string>(textBox48->Text);
			int selectedIndex_BEL_4 = comboBox5->SelectedIndex;
			std::string BEL_4;
			if (selectedIndex_BEL_4 == 0)
				BEL_4 = "INFO";
			else if (selectedIndex_BEL_4 == 1)
				BEL_4 = "APEL";
			else if (selectedIndex_BEL_4 == 2)
				BEL_4 = "DARURAT";
			else if (selectedIndex_BEL_4 == 3)
				BEL_4 = "A";
			else if (selectedIndex_BEL_4 == 4)
				BEL_4 = "B";
			else if (selectedIndex_BEL_4 == 5)
				BEL_4 = "C";
			else if (selectedIndex_BEL_4 == 6)
				BEL_4 = "D";
			else if (selectedIndex_BEL_4 == 7)
				BEL_4 = "E";
			else if (selectedIndex_BEL_4 == 8)
				BEL_4 = "F";
			else if (selectedIndex_BEL_4 == 9)
				BEL_4 = "G";
			else if (selectedIndex_BEL_4 == 10)
				BEL_4 = "H";
			else if (selectedIndex_BEL_4 == 11)
				BEL_4 = "I";
			else if (selectedIndex_BEL_4 == 12)
				BEL_4 = "J";
			else if (selectedIndex_BEL_4 == 13)
				BEL_4 = "K";
			else if (selectedIndex_BEL_4 == 14)
				BEL_4 = "L";

			std::string WAKTU_5 = context.marshal_as<std::string>(textBox49->Text);
			int selectedIndex_BEL_5 = comboBox6->SelectedIndex;
			std::string BEL_5;
			if (selectedIndex_BEL_5 == 0)
				BEL_5 = "INFO";
			else if (selectedIndex_BEL_5 == 1)
				BEL_5 = "APEL";
			else if (selectedIndex_BEL_5 == 2)
				BEL_5 = "DARURAT";
			else if (selectedIndex_BEL_5 == 3)
				BEL_5 = "A";
			else if (selectedIndex_BEL_5 == 4)
				BEL_5 = "B";
			else if (selectedIndex_BEL_5 == 5)
				BEL_5 = "C";
			else if (selectedIndex_BEL_5 == 6)
				BEL_5 = "D";
			else if (selectedIndex_BEL_5 == 7)
				BEL_5 = "E";
			else if (selectedIndex_BEL_5 == 8)
				BEL_5 = "F";
			else if (selectedIndex_BEL_5 == 9)
				BEL_5 = "G";
			else if (selectedIndex_BEL_5 == 10)
				BEL_5 = "H";
			else if (selectedIndex_BEL_5 == 11)
				BEL_5 = "I";
			else if (selectedIndex_BEL_5 == 12)
				BEL_5 = "J";
			else if (selectedIndex_BEL_5 == 13)
				BEL_5 = "K";
			else if (selectedIndex_BEL_5 == 14)
				BEL_5 = "L";

			std::string WAKTU_6 = context.marshal_as<std::string>(textBox50->Text);
			int selectedIndex_BEL_6 = comboBox7->SelectedIndex;
			std::string BEL_6;
			if (selectedIndex_BEL_6 == 0)
				BEL_6 = "INFO";
			else if (selectedIndex_BEL_6 == 1)
				BEL_6 = "APEL";
			else if (selectedIndex_BEL_6 == 2)
				BEL_6 = "DARURAT";
			else if (selectedIndex_BEL_6 == 3)
				BEL_6 = "A";
			else if (selectedIndex_BEL_6 == 4)
				BEL_6 = "B";
			else if (selectedIndex_BEL_6 == 5)
				BEL_6 = "C";
			else if (selectedIndex_BEL_6 == 6)
				BEL_6 = "D";
			else if (selectedIndex_BEL_6 == 7)
				BEL_6 = "E";
			else if (selectedIndex_BEL_6 == 8)
				BEL_6 = "F";
			else if (selectedIndex_BEL_6 == 9)
				BEL_6 = "G";
			else if (selectedIndex_BEL_6 == 10)
				BEL_6 = "H";
			else if (selectedIndex_BEL_6 == 11)
				BEL_6 = "I";
			else if (selectedIndex_BEL_6 == 12)
				BEL_6 = "J";
			else if (selectedIndex_BEL_6 == 13)
				BEL_6 = "K";
			else if (selectedIndex_BEL_6 == 14)
				BEL_6 = "L";

			std::string WAKTU_7 = context.marshal_as<std::string>(textBox51->Text);
			int selectedIndex_BEL_7 = comboBox8->SelectedIndex;
			std::string BEL_7;
			if (selectedIndex_BEL_7 == 0)
				BEL_7 = "INFO";
			else if (selectedIndex_BEL_7 == 1)
				BEL_7 = "APEL";
			else if (selectedIndex_BEL_7 == 2)
				BEL_7 = "DARURAT";
			else if (selectedIndex_BEL_7 == 3)
				BEL_7 = "A";
			else if (selectedIndex_BEL_7 == 4)
				BEL_7 = "B";
			else if (selectedIndex_BEL_7 == 5)
				BEL_7 = "C";
			else if (selectedIndex_BEL_7 == 6)
				BEL_7 = "D";
			else if (selectedIndex_BEL_7 == 7)
				BEL_7 = "E";
			else if (selectedIndex_BEL_7 == 8)
				BEL_7 = "F";
			else if (selectedIndex_BEL_7 == 9)
				BEL_7 = "G";
			else if (selectedIndex_BEL_7 == 10)
				BEL_7 = "H";
			else if (selectedIndex_BEL_7 == 11)
				BEL_7 = "I";
			else if (selectedIndex_BEL_7 == 12)
				BEL_7 = "J";
			else if (selectedIndex_BEL_7 == 13)
				BEL_7 = "K";
			else if (selectedIndex_BEL_7 == 14)
				BEL_7 = "L";

			std::string WAKTU_8 = context.marshal_as<std::string>(textBox52->Text);
			int selectedIndex_BEL_8 = comboBox9->SelectedIndex;
			std::string BEL_8;
			if (selectedIndex_BEL_8 == 0)
				BEL_8 = "INFO";
			else if (selectedIndex_BEL_8 == 1)
				BEL_8 = "APEL";
			else if (selectedIndex_BEL_8 == 2)
				BEL_8 = "DARURAT";
			else if (selectedIndex_BEL_8 == 3)
				BEL_8 = "A";
			else if (selectedIndex_BEL_8 == 4)
				BEL_8 = "B";
			else if (selectedIndex_BEL_8 == 5)
				BEL_8 = "C";
			else if (selectedIndex_BEL_8 == 6)
				BEL_8 = "D";
			else if (selectedIndex_BEL_8 == 7)
				BEL_8 = "E";
			else if (selectedIndex_BEL_8 == 8)
				BEL_8 = "F";
			else if (selectedIndex_BEL_8 == 9)
				BEL_8 = "G";
			else if (selectedIndex_BEL_8 == 10)
				BEL_8 = "H";
			else if (selectedIndex_BEL_8 == 11)
				BEL_8 = "I";
			else if (selectedIndex_BEL_8 == 12)
				BEL_8 = "J";
			else if (selectedIndex_BEL_8 == 13)
				BEL_8 = "K";
			else if (selectedIndex_BEL_8 == 14)
				BEL_8 = "L";

			std::string WAKTU_9 = context.marshal_as<std::string>(textBox53->Text);
			int selectedIndex_BEL_9 = comboBox10->SelectedIndex;
			std::string BEL_9;
			if (selectedIndex_BEL_9 == 0)
				BEL_9 = "INFO";
			else if (selectedIndex_BEL_9 == 1)
				BEL_9 = "APEL";
			else if (selectedIndex_BEL_9 == 2)
				BEL_9 = "DARURAT";
			else if (selectedIndex_BEL_9 == 3)
				BEL_9 = "A";
			else if (selectedIndex_BEL_9 == 4)
				BEL_9 = "B";
			else if (selectedIndex_BEL_9 == 5)
				BEL_9 = "C";
			else if (selectedIndex_BEL_9 == 6)
				BEL_9 = "D";
			else if (selectedIndex_BEL_9 == 7)
				BEL_9 = "E";
			else if (selectedIndex_BEL_9 == 8)
				BEL_9 = "F";
			else if (selectedIndex_BEL_9 == 9)
				BEL_9 = "G";
			else if (selectedIndex_BEL_9 == 10)
				BEL_9 = "H";
			else if (selectedIndex_BEL_9 == 11)
				BEL_9 = "I";
			else if (selectedIndex_BEL_9 == 12)
				BEL_9 = "J";
			else if (selectedIndex_BEL_9 == 13)
				BEL_9 = "K";
			else if (selectedIndex_BEL_9 == 14)
				BEL_9 = "L";

			std::string WAKTU_10 = context.marshal_as<std::string>(textBox54->Text);
			int selectedIndex_BEL_10 = comboBox11->SelectedIndex;
			std::string BEL_10;
			if (selectedIndex_BEL_10 == 0)
				BEL_10 = "INFO";
			else if (selectedIndex_BEL_10 == 1)
				BEL_10 = "APEL";
			else if (selectedIndex_BEL_10 == 2)
				BEL_10 = "DARURAT";
			else if (selectedIndex_BEL_10 == 3)
				BEL_10 = "A";
			else if (selectedIndex_BEL_10 == 4)
				BEL_10 = "B";
			else if (selectedIndex_BEL_10 == 5)
				BEL_10 = "C";
			else if (selectedIndex_BEL_10 == 6)
				BEL_10 = "D";
			else if (selectedIndex_BEL_10 == 7)
				BEL_10 = "E";
			else if (selectedIndex_BEL_10 == 8)
				BEL_10 = "F";
			else if (selectedIndex_BEL_10 == 9)
				BEL_10 = "G";
			else if (selectedIndex_BEL_10 == 10)
				BEL_10 = "H";
			else if (selectedIndex_BEL_10 == 11)
				BEL_10 = "I";
			else if (selectedIndex_BEL_10 == 12)
				BEL_10 = "J";
			else if (selectedIndex_BEL_10 == 13)
				BEL_10 = "K";
			else if (selectedIndex_BEL_10 == 14)
				BEL_10 = "L";

			std::string WAKTU_11 = context.marshal_as<std::string>(textBox55->Text);
			int selectedIndex_BEL_11 = comboBox12->SelectedIndex;
			std::string BEL_11;
			if (selectedIndex_BEL_11 == 0)
				BEL_11 = "INFO";
			else if (selectedIndex_BEL_11 == 1)
				BEL_11 = "APEL";
			else if (selectedIndex_BEL_11 == 2)
				BEL_11 = "DARURAT";
			else if (selectedIndex_BEL_11 == 3)
				BEL_11 = "A";
			else if (selectedIndex_BEL_11 == 4)
				BEL_11 = "B";
			else if (selectedIndex_BEL_11 == 5)
				BEL_11 = "C";
			else if (selectedIndex_BEL_11 == 6)
				BEL_11 = "D";
			else if (selectedIndex_BEL_11 == 7)
				BEL_11 = "E";
			else if (selectedIndex_BEL_11 == 8)
				BEL_11 = "F";
			else if (selectedIndex_BEL_11 == 9)
				BEL_11 = "G";
			else if (selectedIndex_BEL_11 == 10)
				BEL_11 = "H";
			else if (selectedIndex_BEL_11 == 11)
				BEL_11 = "I";
			else if (selectedIndex_BEL_11 == 12)
				BEL_11 = "J";
			else if (selectedIndex_BEL_11 == 13)
				BEL_11 = "K";
			else if (selectedIndex_BEL_11 == 14)
				BEL_11 = "L";

			std::string WAKTU_12 = context.marshal_as<std::string>(textBox56->Text);
			int selectedIndex_BEL_12 = comboBox13->SelectedIndex;
			std::string BEL_12;
			if (selectedIndex_BEL_12 == 0)
				BEL_12 = "INFO";
			else if (selectedIndex_BEL_12 == 1)
				BEL_12 = "APEL";
			else if (selectedIndex_BEL_12 == 2)
				BEL_12 = "DARURAT";
			else if (selectedIndex_BEL_12 == 3)
				BEL_12 = "A";
			else if (selectedIndex_BEL_12 == 4)
				BEL_12 = "B";
			else if (selectedIndex_BEL_12 == 5)
				BEL_12 = "C";
			else if (selectedIndex_BEL_12 == 6)
				BEL_12 = "D";
			else if (selectedIndex_BEL_12 == 7)
				BEL_12 = "E";
			else if (selectedIndex_BEL_12 == 8)
				BEL_12 = "F";
			else if (selectedIndex_BEL_12 == 9)
				BEL_12 = "G";
			else if (selectedIndex_BEL_12 == 10)
				BEL_12 = "H";
			else if (selectedIndex_BEL_12 == 11)
				BEL_12 = "I";
			else if (selectedIndex_BEL_12 == 12)
				BEL_12 = "J";
			else if (selectedIndex_BEL_12 == 13)
				BEL_12 = "K";
			else if (selectedIndex_BEL_12 == 14)
				BEL_12 = "L";

			std::string WAKTU_13 = context.marshal_as<std::string>(textBox57->Text);
			int selectedIndex_BEL_13 = comboBox14->SelectedIndex;
			std::string BEL_13;
			if (selectedIndex_BEL_13 == 0)
				BEL_13 = "INFO";
			else if (selectedIndex_BEL_13 == 1)
				BEL_13 = "APEL";
			else if (selectedIndex_BEL_13 == 2)
				BEL_13 = "DARURAT";
			else if (selectedIndex_BEL_13 == 3)
				BEL_13 = "A";
			else if (selectedIndex_BEL_13 == 4)
				BEL_13 = "B";
			else if (selectedIndex_BEL_13 == 5)
				BEL_13 = "C";
			else if (selectedIndex_BEL_13 == 6)
				BEL_13 = "D";
			else if (selectedIndex_BEL_13 == 7)
				BEL_13 = "E";
			else if (selectedIndex_BEL_13 == 8)
				BEL_13 = "F";
			else if (selectedIndex_BEL_13 == 9)
				BEL_13 = "G";
			else if (selectedIndex_BEL_13 == 10)
				BEL_13 = "H";
			else if (selectedIndex_BEL_13 == 11)
				BEL_13 = "I";
			else if (selectedIndex_BEL_13 == 12)
				BEL_13 = "J";
			else if (selectedIndex_BEL_13 == 13)
				BEL_13 = "K";
			else if (selectedIndex_BEL_13 == 14)
				BEL_13 = "L";

			std::string WAKTU_14 = context.marshal_as<std::string>(textBox58->Text);
			int selectedIndex_BEL_14 = comboBox15->SelectedIndex;
			std::string BEL_14;
			if (selectedIndex_BEL_14 == 0)
				BEL_14 = "INFO";
			else if (selectedIndex_BEL_14 == 1)
				BEL_14 = "APEL";
			else if (selectedIndex_BEL_14 == 2)
				BEL_14 = "DARURAT";
			else if (selectedIndex_BEL_14 == 3)
				BEL_14 = "A";
			else if (selectedIndex_BEL_14 == 4)
				BEL_14 = "B";
			else if (selectedIndex_BEL_14 == 5)
				BEL_14 = "C";
			else if (selectedIndex_BEL_14 == 6)
				BEL_14 = "D";
			else if (selectedIndex_BEL_14 == 7)
				BEL_14 = "E";
			else if (selectedIndex_BEL_14 == 8)
				BEL_14 = "F";
			else if (selectedIndex_BEL_14 == 9)
				BEL_14 = "G";
			else if (selectedIndex_BEL_14 == 10)
				BEL_14 = "H";
			else if (selectedIndex_BEL_14 == 11)
				BEL_14 = "I";
			else if (selectedIndex_BEL_14 == 12)
				BEL_14 = "J";
			else if (selectedIndex_BEL_14 == 13)
				BEL_14 = "K";
			else if (selectedIndex_BEL_14 == 14)
				BEL_14 = "L";


			newfile.open("ujian.konf", std::ios::out);  // open a file to perform write operation using file object
			if (newfile.is_open()) //checking whether the file is open
			{
				newfile << WAKTU_1 << std::endl; newfile << selectedIndex_BEL_1 << std::endl;
				newfile << WAKTU_2 << std::endl; newfile << selectedIndex_BEL_2 << std::endl;
				newfile << WAKTU_3 << std::endl; newfile << selectedIndex_BEL_3 << std::endl;
				newfile << WAKTU_4 << std::endl; newfile << selectedIndex_BEL_4 << std::endl;
				newfile << WAKTU_5 << std::endl; newfile << selectedIndex_BEL_5 << std::endl;
				newfile << WAKTU_6 << std::endl; newfile << selectedIndex_BEL_6 << std::endl;
				newfile << WAKTU_7 << std::endl; newfile << selectedIndex_BEL_7 << std::endl;
				newfile << WAKTU_8 << std::endl; newfile << selectedIndex_BEL_8 << std::endl;
				newfile << WAKTU_9 << std::endl; newfile << selectedIndex_BEL_9 << std::endl;
				newfile << WAKTU_10 << std::endl; newfile << selectedIndex_BEL_10 << std::endl;
				newfile << WAKTU_11 << std::endl; newfile << selectedIndex_BEL_11 << std::endl;
				newfile << WAKTU_12 << std::endl; newfile << selectedIndex_BEL_12 << std::endl;
				newfile << WAKTU_13 << std::endl; newfile << selectedIndex_BEL_13 << std::endl;
				newfile << WAKTU_14 << std::endl; newfile << selectedIndex_BEL_14 << std::endl;
				//newfile << WAKTU_15 << std::endl; newfile << selectedIndex_BEL_15 << std::endl;
			}
			newfile.close();
		}

	newfile.open("jadwal.config", std::ios::in); //open a file to perform read operation using file object
	if (newfile.is_open()) {   //checking whether the file is open
		std::string tp;
		while (std::getline(newfile, tp)) { //read data from file object and put it into string.
			std::cout << tp << "\n"; //print the data of the string
		}
		newfile.close(); //close the file object.
	}
}
	private: System::Void textBox20_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
	private: System::Void textBox27_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
	private: System::Void textBox30_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
	private: System::Void openFileDialog1_FileOk(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {

}
	private: System::Void tabControl1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;

	openFileDialog1->InitialDirectory = "c:\\";
	openFileDialog1->Filter = "mp3 files (*.mp3)|*.txt|All files (*.*)|*.*";
	openFileDialog1->FilterIndex = 2;
	openFileDialog1->RestoreDirectory = true;

	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		this->textBox18->Text = openFileDialog1->FileName;
	}
}
	private: System::Void splitContainer1_Panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	//Stream^ myStream;
	OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;

	openFileDialog1->InitialDirectory = "c:\\";
	openFileDialog1->Filter = "mp3 files (*.mp3)|*.txt|All files (*.*)|*.*";
	openFileDialog1->FilterIndex = 2;
	openFileDialog1->RestoreDirectory = true;

	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		this->textBox16->Text = openFileDialog1->FileName;
	}
}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;

		openFileDialog1->InitialDirectory = "c:\\";
		openFileDialog1->Filter = "mp3 files (*.mp3)|*.txt|All files (*.*)|*.*";
		openFileDialog1->FilterIndex = 2;
		openFileDialog1->RestoreDirectory = true;

		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			this->textBox17->Text = openFileDialog1->FileName;
		}
	}
private: System::Void textBox16_TextChanged(System::Object^  sender, System::EventArgs^  e) {

}
private: System::Void textBox18_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
	OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;

	openFileDialog1->InitialDirectory = "c:\\";
	openFileDialog1->Filter = "mp3 files (*.mp3)|*.txt|All files (*.*)|*.*";
	openFileDialog1->FilterIndex = 2;
	openFileDialog1->RestoreDirectory = true;

	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		this->textBox19->Text = openFileDialog1->FileName;
	}
}
private: System::Void textBox19_TextChanged(System::Object^  sender, System::EventArgs^  e) {

}
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
	OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;

	openFileDialog1->InitialDirectory = "c:\\";
	openFileDialog1->Filter = "mp3 files (*.mp3)|*.txt|All files (*.*)|*.*";
	openFileDialog1->FilterIndex = 2;
	openFileDialog1->RestoreDirectory = true;

	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		this->textBox20->Text = openFileDialog1->FileName;
	}
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;

	openFileDialog1->InitialDirectory = "c:\\";
	openFileDialog1->Filter = "mp3 files (*.mp3)|*.txt|All files (*.*)|*.*";
	openFileDialog1->FilterIndex = 2;
	openFileDialog1->RestoreDirectory = true;

	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		this->textBox21->Text = openFileDialog1->FileName;
	}
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;

	openFileDialog1->InitialDirectory = "c:\\";
	openFileDialog1->Filter = "mp3 files (*.mp3)|*.txt|All files (*.*)|*.*";
	openFileDialog1->FilterIndex = 2;
	openFileDialog1->RestoreDirectory = true;

	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		this->textBox22->Text = openFileDialog1->FileName;
	}
}
private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) {
	OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;

	openFileDialog1->InitialDirectory = "c:\\";
	openFileDialog1->Filter = "mp3 files (*.mp3)|*.txt|All files (*.*)|*.*";
	openFileDialog1->FilterIndex = 2;
	openFileDialog1->RestoreDirectory = true;

	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		this->textBox23->Text = openFileDialog1->FileName;
	}
}
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
	OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;

	openFileDialog1->InitialDirectory = "c:\\";
	openFileDialog1->Filter = "mp3 files (*.mp3)|*.txt|All files (*.*)|*.*";
	openFileDialog1->FilterIndex = 2;
	openFileDialog1->RestoreDirectory = true;

	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		this->textBox24->Text = openFileDialog1->FileName;
	}
}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
	OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;

	openFileDialog1->InitialDirectory = "c:\\";
	openFileDialog1->Filter = "mp3 files (*.mp3)|*.txt|All files (*.*)|*.*";
	openFileDialog1->FilterIndex = 2;
	openFileDialog1->RestoreDirectory = true;

	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		this->textBox25->Text = openFileDialog1->FileName;
	}
}
private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
	OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;

	openFileDialog1->InitialDirectory = "c:\\";
	openFileDialog1->Filter = "mp3 files (*.mp3)|*.txt|All files (*.*)|*.*";
	openFileDialog1->FilterIndex = 2;
	openFileDialog1->RestoreDirectory = true;

	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		this->textBox26->Text = openFileDialog1->FileName;
	}
}
private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
	OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;

	openFileDialog1->InitialDirectory = "c:\\";
	openFileDialog1->Filter = "mp3 files (*.mp3)|*.txt|All files (*.*)|*.*";
	openFileDialog1->FilterIndex = 2;
	openFileDialog1->RestoreDirectory = true;

	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		this->textBox27->Text = openFileDialog1->FileName;
	}
}
private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
	OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;

	openFileDialog1->InitialDirectory = "c:\\";
	openFileDialog1->Filter = "mp3 files (*.mp3)|*.txt|All files (*.*)|*.*";
	openFileDialog1->FilterIndex = 2;
	openFileDialog1->RestoreDirectory = true;

	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		this->textBox28->Text = openFileDialog1->FileName;
	}
}
private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) {
	OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;

	openFileDialog1->InitialDirectory = "c:\\";
	openFileDialog1->Filter = "mp3 files (*.mp3)|*.txt|All files (*.*)|*.*";
	openFileDialog1->FilterIndex = 2;
	openFileDialog1->RestoreDirectory = true;

	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		this->textBox29->Text = openFileDialog1->FileName;
	}
}
private: System::Void button17_Click(System::Object^  sender, System::EventArgs^  e) {
	OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;

	openFileDialog1->InitialDirectory = "c:\\";
	openFileDialog1->Filter = "mp3 files (*.mp3)|*.txt|All files (*.*)|*.*";
	openFileDialog1->FilterIndex = 2;
	openFileDialog1->RestoreDirectory = true;

	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		this->textBox30->Text = openFileDialog1->FileName;
	}
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	MyForm1::Close();
}

private: System::Void MyForm1_Load(System::Object^  sender, System::EventArgs^  e) {
	comboBox15->Items->Add("INFORMASI");
	comboBox15->Items->Add("BEL APEL");
	comboBox15->Items->Add("DARURAT");
	comboBox15->Items->Add("BEL A");
	comboBox15->Items->Add("BEL B");
	comboBox15->Items->Add("BEL C");
	comboBox15->Items->Add("BEL D");
	comboBox15->Items->Add("BEL E");
	comboBox15->Items->Add("BEL F");
	comboBox15->Items->Add("BEL G");
	comboBox15->Items->Add("BEL H");
	comboBox15->Items->Add("BEL I");
	comboBox15->Items->Add("BEL J");
	comboBox15->Items->Add("BEL K");
	comboBox15->Items->Add("BEL L");

	comboBox14->Items->Add("INFORMASI");
	comboBox14->Items->Add("BEL APEL");
	comboBox14->Items->Add("DARURAT");
	comboBox14->Items->Add("BEL A");
	comboBox14->Items->Add("BEL B");
	comboBox14->Items->Add("BEL C");
	comboBox14->Items->Add("BEL D");
	comboBox14->Items->Add("BEL E");
	comboBox14->Items->Add("BEL F");
	comboBox14->Items->Add("BEL G");
	comboBox14->Items->Add("BEL H");
	comboBox14->Items->Add("BEL I");
	comboBox14->Items->Add("BEL J");
	comboBox14->Items->Add("BEL K");
	comboBox14->Items->Add("BEL L");

	comboBox13->Items->Add("INFORMASI");
	comboBox13->Items->Add("BEL APEL");
	comboBox13->Items->Add("DARURAT");
	comboBox13->Items->Add("BEL A");
	comboBox13->Items->Add("BEL B");
	comboBox13->Items->Add("BEL C");
	comboBox13->Items->Add("BEL D");
	comboBox13->Items->Add("BEL E");
	comboBox13->Items->Add("BEL F");
	comboBox13->Items->Add("BEL G");
	comboBox13->Items->Add("BEL H");
	comboBox13->Items->Add("BEL I");
	comboBox13->Items->Add("BEL J");
	comboBox13->Items->Add("BEL K");
	comboBox13->Items->Add("BEL L");

	comboBox12->Items->Add("INFORMASI");
	comboBox12->Items->Add("BEL APEL");
	comboBox12->Items->Add("DARURAT");
	comboBox12->Items->Add("BEL A");
	comboBox12->Items->Add("BEL B");
	comboBox12->Items->Add("BEL C");
	comboBox12->Items->Add("BEL D");
	comboBox12->Items->Add("BEL E");
	comboBox12->Items->Add("BEL F");
	comboBox12->Items->Add("BEL G");
	comboBox12->Items->Add("BEL H");
	comboBox12->Items->Add("BEL I");
	comboBox12->Items->Add("BEL J");
	comboBox12->Items->Add("BEL K");
	comboBox12->Items->Add("BEL L");

	comboBox11->Items->Add("INFORMASI");
	comboBox11->Items->Add("BEL APEL");
	comboBox11->Items->Add("DARURAT");
	comboBox11->Items->Add("BEL A");
	comboBox11->Items->Add("BEL B");
	comboBox11->Items->Add("BEL C");
	comboBox11->Items->Add("BEL D");
	comboBox11->Items->Add("BEL E");
	comboBox11->Items->Add("BEL F");
	comboBox11->Items->Add("BEL G");
	comboBox11->Items->Add("BEL H");
	comboBox11->Items->Add("BEL I");
	comboBox11->Items->Add("BEL J");
	comboBox11->Items->Add("BEL K");
	comboBox11->Items->Add("BEL L");

	comboBox10->Items->Add("INFORMASI");
	comboBox10->Items->Add("BEL APEL");
	comboBox10->Items->Add("DARURAT");
	comboBox10->Items->Add("BEL A");
	comboBox10->Items->Add("BEL B");
	comboBox10->Items->Add("BEL C");
	comboBox10->Items->Add("BEL D");
	comboBox10->Items->Add("BEL E");
	comboBox10->Items->Add("BEL F");
	comboBox10->Items->Add("BEL G");
	comboBox10->Items->Add("BEL H");
	comboBox10->Items->Add("BEL I");
	comboBox10->Items->Add("BEL J");
	comboBox10->Items->Add("BEL K");
	comboBox10->Items->Add("BEL L");

	comboBox9->Items->Add("INFORMASI");
	comboBox9->Items->Add("BEL APEL");
	comboBox9->Items->Add("DARURAT");
	comboBox9->Items->Add("BEL A");
	comboBox9->Items->Add("BEL B");
	comboBox9->Items->Add("BEL C");
	comboBox9->Items->Add("BEL D");
	comboBox9->Items->Add("BEL E");
	comboBox9->Items->Add("BEL F");
	comboBox9->Items->Add("BEL G");
	comboBox9->Items->Add("BEL H");
	comboBox9->Items->Add("BEL I");
	comboBox9->Items->Add("BEL J");
	comboBox9->Items->Add("BEL K");
	comboBox9->Items->Add("BEL L");

	comboBox8->Items->Add("INFORMASI");
	comboBox8->Items->Add("BEL APEL");
	comboBox8->Items->Add("DARURAT");
	comboBox8->Items->Add("BEL A");
	comboBox8->Items->Add("BEL B");
	comboBox8->Items->Add("BEL C");
	comboBox8->Items->Add("BEL D");
	comboBox8->Items->Add("BEL E");
	comboBox8->Items->Add("BEL F");
	comboBox8->Items->Add("BEL G");
	comboBox8->Items->Add("BEL H");
	comboBox8->Items->Add("BEL I");
	comboBox8->Items->Add("BEL J");
	comboBox8->Items->Add("BEL K");
	comboBox8->Items->Add("BEL L");

	comboBox7->Items->Add("INFORMASI");
	comboBox7->Items->Add("BEL APEL");
	comboBox7->Items->Add("DARURAT");
	comboBox7->Items->Add("BEL A");
	comboBox7->Items->Add("BEL B");
	comboBox7->Items->Add("BEL C");
	comboBox7->Items->Add("BEL D");
	comboBox7->Items->Add("BEL E");
	comboBox7->Items->Add("BEL F");
	comboBox7->Items->Add("BEL G");
	comboBox7->Items->Add("BEL H");
	comboBox7->Items->Add("BEL I");
	comboBox7->Items->Add("BEL J");
	comboBox7->Items->Add("BEL K");
	comboBox7->Items->Add("BEL L");

	comboBox6->Items->Add("INFORMASI");
	comboBox6->Items->Add("BEL APEL");
	comboBox6->Items->Add("DARURAT");
	comboBox6->Items->Add("BEL A");
	comboBox6->Items->Add("BEL B");
	comboBox6->Items->Add("BEL C");
	comboBox6->Items->Add("BEL D");
	comboBox6->Items->Add("BEL E");
	comboBox6->Items->Add("BEL F");
	comboBox6->Items->Add("BEL G");
	comboBox6->Items->Add("BEL H");
	comboBox6->Items->Add("BEL I");
	comboBox6->Items->Add("BEL J");
	comboBox6->Items->Add("BEL K");
	comboBox6->Items->Add("BEL L");

	comboBox5->Items->Add("INFORMASI");
	comboBox5->Items->Add("BEL APEL");
	comboBox5->Items->Add("DARURAT");
	comboBox5->Items->Add("BEL A");
	comboBox5->Items->Add("BEL B");
	comboBox5->Items->Add("BEL C");
	comboBox5->Items->Add("BEL D");
	comboBox5->Items->Add("BEL E");
	comboBox5->Items->Add("BEL F");
	comboBox5->Items->Add("BEL G");
	comboBox5->Items->Add("BEL H");
	comboBox5->Items->Add("BEL I");
	comboBox5->Items->Add("BEL J");
	comboBox5->Items->Add("BEL K");
	comboBox5->Items->Add("BEL L");

	comboBox4->Items->Add("INFORMASI");
	comboBox4->Items->Add("BEL APEL");
	comboBox4->Items->Add("DARURAT");
	comboBox4->Items->Add("BEL A");
	comboBox4->Items->Add("BEL B");
	comboBox4->Items->Add("BEL C");
	comboBox4->Items->Add("BEL D");
	comboBox4->Items->Add("BEL E");
	comboBox4->Items->Add("BEL F");
	comboBox4->Items->Add("BEL G");
	comboBox4->Items->Add("BEL H");
	comboBox4->Items->Add("BEL I");
	comboBox4->Items->Add("BEL J");
	comboBox4->Items->Add("BEL K");
	comboBox4->Items->Add("BEL L");

	comboBox3->Items->Add("INFORMASI");
	comboBox3->Items->Add("BEL APEL");
	comboBox3->Items->Add("DARURAT");
	comboBox3->Items->Add("BEL A");
	comboBox3->Items->Add("BEL B");
	comboBox3->Items->Add("BEL C");
	comboBox3->Items->Add("BEL D");
	comboBox3->Items->Add("BEL E");
	comboBox3->Items->Add("BEL F");
	comboBox3->Items->Add("BEL G");
	comboBox3->Items->Add("BEL H");
	comboBox3->Items->Add("BEL I");
	comboBox3->Items->Add("BEL J");
	comboBox3->Items->Add("BEL K");
	comboBox3->Items->Add("BEL L");

	comboBox2->Items->Add("INFORMASI");
	comboBox2->Items->Add("BEL APEL");
	comboBox2->Items->Add("DARURAT");
	comboBox2->Items->Add("BEL A");
	comboBox2->Items->Add("BEL B");
	comboBox2->Items->Add("BEL C");
	comboBox2->Items->Add("BEL D");
	comboBox2->Items->Add("BEL E");
	comboBox2->Items->Add("BEL F");
	comboBox2->Items->Add("BEL G");
	comboBox2->Items->Add("BEL H");
	comboBox2->Items->Add("BEL I");
	comboBox2->Items->Add("BEL J");
	comboBox2->Items->Add("BEL K");
	comboBox2->Items->Add("BEL L");

	comboBox1->Items->Add("MINGGU");
	comboBox1->Items->Add("SENIN");
	comboBox1->Items->Add("SELASA");
	comboBox1->Items->Add("RABU");
	comboBox1->Items->Add("KAMIS");
	comboBox1->Items->Add("JUMAT");
	comboBox1->Items->Add("SABTU");
	comboBox1->Items->Add("PUASA");
	comboBox1->Items->Add("UJIAN");

	std::fstream newfile;
	newfile.open("audio.konf", std::ios::in); //open a file to perform read operation using file object
	if (newfile.is_open()) {   //checking whether the file is open
		std::string tp;
		int counter = 0;
		while (std::getline(newfile, tp)) { //read data from file object and put it into string.
			//std::cout << tp << "\n"; //print the data of the string
			counter++;
			if (counter == 1) {
				this->textBox16->Text = gcnew String(tp.c_str());
			}
			else if (counter == 2) {
				this->textBox17->Text = gcnew String(tp.c_str());
			}
			else if (counter == 3) {
				this->textBox18->Text = gcnew String(tp.c_str());
			}
			else if (counter == 4) {
				this->textBox19->Text = gcnew String(tp.c_str());
			}
			else if (counter == 5) {
				this->textBox20->Text = gcnew String(tp.c_str());
			}
			else if (counter == 6) {
				this->textBox21->Text = gcnew String(tp.c_str());
			}
			else if (counter == 7) {
				this->textBox22->Text = gcnew String(tp.c_str());
			}
			else if (counter == 8) {
				this->textBox23->Text = gcnew String(tp.c_str());
			}
			else if (counter == 9) {
				this->textBox24->Text = gcnew String(tp.c_str());
			}
			else if (counter == 10) {
				this->textBox25->Text = gcnew String(tp.c_str());
			}
			else if (counter == 11) {
				this->textBox26->Text = gcnew String(tp.c_str());
			}
			else if (counter == 12) {
				this->textBox27->Text = gcnew String(tp.c_str());
			}
			else if (counter == 13) {
				this->textBox28->Text = gcnew String(tp.c_str());
			}
			else if (counter == 14) {
				this->textBox29->Text = gcnew String(tp.c_str());
			}
			else if (counter == 15) {
				this->textBox30->Text = gcnew String(tp.c_str());
			}
		}
		newfile.close(); //close the file object.
	}
	comboBox1->SelectedIndex = 0;
	if (comboBox1->SelectedIndex == 0) {
		newfile.open("ahad.konf", std::ios::in); //open a file to perform read operation using file object
		if (newfile.is_open()) {   //checking whether the file is open
			std::string tp;
			int counter = 0;
			while (std::getline(newfile, tp)) { //read data from file object and put it into string.
				if (counter % 2 == 1) {
					if (counter == 1) {
						//this->textBox45->Text = gcnew String(tp.c_str());
						comboBox2->SelectedIndex = std::stoi(tp);
					}
					else if (counter == 3) {
						//this->textBox46->Text = gcnew String(tp.c_str());
						comboBox3->SelectedIndex = std::stoi(tp);
					}
					else if (counter == 5) {
						//this->textBox47->Text = gcnew String(tp.c_str());
						comboBox4->SelectedIndex = std::stoi(tp);
					}
					else if (counter == 7) {
						//this->textBox48->Text = gcnew String(tp.c_str());
						comboBox5->SelectedIndex = std::stoi(tp);
					}
					else if (counter == 9) {
						//this->textBox49->Text = gcnew String(tp.c_str());
						comboBox6->SelectedIndex = std::stoi(tp);
					}
					else if (counter == 11) {
						//this->textBox50->Text = gcnew String(tp.c_str());
						comboBox7->SelectedIndex = std::stoi(tp);
					}
					else if (counter == 13) {
						//this->textBox51->Text = gcnew String(tp.c_str());
						comboBox8->SelectedIndex = std::stoi(tp);
					}
					else if (counter == 15) {
						//this->textBox52->Text = gcnew String(tp.c_str());
						comboBox9->SelectedIndex = std::stoi(tp);
					}
					else if (counter == 17) {
						//this->textBox53->Text = gcnew String(tp.c_str());
						comboBox10->SelectedIndex = std::stoi(tp);
					}
					else if (counter == 19) {
						//this->textBox54->Text = gcnew String(tp.c_str());
						comboBox11->SelectedIndex = std::stoi(tp);
					}
					else if (counter == 21) {
						//this->textBox55->Text = gcnew String(tp.c_str());
						comboBox12->SelectedIndex = std::stoi(tp);
					}
					else if (counter == 23) {
						//this->textBox56->Text = gcnew String(tp.c_str());
						comboBox13->SelectedIndex = std::stoi(tp);
					}
					else if (counter == 25) {
						//this->textBox57->Text = gcnew String(tp.c_str());
						comboBox14->SelectedIndex = std::stoi(tp);
					}
					else if (counter == 27) {
						//this->textBox58->Text = gcnew String(tp.c_str());
						comboBox15->SelectedIndex = std::stoi(tp);
					}
				}
				
				else {
					if (counter == 0) {
						this->textBox45->Text = gcnew String(tp.c_str());
					}
					else if (counter == 2) {
						this->textBox46->Text = gcnew String(tp.c_str());
					}
					else if (counter == 4) {
						this->textBox47->Text = gcnew String(tp.c_str());
					}
					else if (counter == 6) {
						this->textBox48->Text = gcnew String(tp.c_str());
					}
					else if (counter == 8) {
						this->textBox49->Text = gcnew String(tp.c_str());
					}
					else if (counter == 10) {
						this->textBox50->Text = gcnew String(tp.c_str());
					}
					else if (counter == 12) {
						this->textBox51->Text = gcnew String(tp.c_str());
					}
					else if (counter == 14) {
						this->textBox52->Text = gcnew String(tp.c_str());
					}
					else if (counter == 16) {
						this->textBox53->Text = gcnew String(tp.c_str());
					}
					else if (counter == 18) {
						this->textBox54->Text = gcnew String(tp.c_str());
					}
					else if (counter == 20) {
						this->textBox55->Text = gcnew String(tp.c_str());
					}
					else if (counter == 22) {
						this->textBox56->Text = gcnew String(tp.c_str());
					}
					else if (counter == 24) {
						this->textBox57->Text = gcnew String(tp.c_str());
					}
					else if (counter == 26) {
						this->textBox58->Text = gcnew String(tp.c_str());
					}
				}
				counter++;
			}
			newfile.close(); //close the file object.
		}
	}
}
private: System::Void tableLayoutPanel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {

}
private: System::Void tabPage2_Click(System::Object^  sender, System::EventArgs^  e) {
	
}
private: System::Void comboBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {

}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	std::fstream newfile;
	if (comboBox1->SelectedIndex == 0) {
		newfile.open("ahad.konf", std::ios::in); //open a file to perform read operation using file object
		if (newfile.is_open()) {   //checking whether the file is open
			std::string tp;
			int counter = 0;
			while (std::getline(newfile, tp)) { //read data from file object and put it into string.
				if (counter % 2 == 1) {
					if (counter == 1) {
						//this->textBox45->Text = gcnew String(tp.c_str());
						comboBox2->SelectedIndex = std::stoi(tp);
					}
					else if (counter == 3) {
						//this->textBox46->Text = gcnew String(tp.c_str());
						comboBox3->SelectedIndex = std::stoi(tp);
					}
					else if (counter == 5) {
						//this->textBox47->Text = gcnew String(tp.c_str());
						comboBox4->SelectedIndex = std::stoi(tp);
					}
					else if (counter == 7) {
						//this->textBox48->Text = gcnew String(tp.c_str());
						comboBox5->SelectedIndex = std::stoi(tp);
					}
					else if (counter == 9) {
						//this->textBox49->Text = gcnew String(tp.c_str());
						comboBox6->SelectedIndex = std::stoi(tp);
					}
					else if (counter == 11) {
						//this->textBox50->Text = gcnew String(tp.c_str());
						comboBox7->SelectedIndex = std::stoi(tp);
					}
					else if (counter == 13) {
						//this->textBox51->Text = gcnew String(tp.c_str());
						comboBox8->SelectedIndex = std::stoi(tp);
					}
					else if (counter == 15) {
						//this->textBox52->Text = gcnew String(tp.c_str());
						comboBox9->SelectedIndex = std::stoi(tp);
					}
					else if (counter == 17) {
						//this->textBox53->Text = gcnew String(tp.c_str());
						comboBox10->SelectedIndex = std::stoi(tp);
					}
					else if (counter == 19) {
						//this->textBox54->Text = gcnew String(tp.c_str());
						comboBox11->SelectedIndex = std::stoi(tp);
					}
					else if (counter == 21) {
						//this->textBox55->Text = gcnew String(tp.c_str());
						comboBox12->SelectedIndex = std::stoi(tp);
					}
					else if (counter == 23) {
						//this->textBox56->Text = gcnew String(tp.c_str());
						comboBox13->SelectedIndex = std::stoi(tp);
					}
					else if (counter == 25) {
						//this->textBox57->Text = gcnew String(tp.c_str());
						comboBox14->SelectedIndex = std::stoi(tp);
					}
					else if (counter == 27) {
						//this->textBox58->Text = gcnew String(tp.c_str());
						comboBox15->SelectedIndex = std::stoi(tp);
					}
				}

				else {
					if (counter == 0) {
						this->textBox45->Text = gcnew String(tp.c_str());
					}
					else if (counter == 2) {
						this->textBox46->Text = gcnew String(tp.c_str());
					}
					else if (counter == 4) {
						this->textBox47->Text = gcnew String(tp.c_str());
					}
					else if (counter == 6) {
						this->textBox48->Text = gcnew String(tp.c_str());
					}
					else if (counter == 8) {
						this->textBox49->Text = gcnew String(tp.c_str());
					}
					else if (counter == 10) {
						this->textBox50->Text = gcnew String(tp.c_str());
					}
					else if (counter == 12) {
						this->textBox51->Text = gcnew String(tp.c_str());
					}
					else if (counter == 14) {
						this->textBox52->Text = gcnew String(tp.c_str());
					}
					else if (counter == 16) {
						this->textBox53->Text = gcnew String(tp.c_str());
					}
					else if (counter == 18) {
						this->textBox54->Text = gcnew String(tp.c_str());
					}
					else if (counter == 20) {
						this->textBox55->Text = gcnew String(tp.c_str());
					}
					else if (counter == 22) {
						this->textBox56->Text = gcnew String(tp.c_str());
					}
					else if (counter == 24) {
						this->textBox57->Text = gcnew String(tp.c_str());
					}
					else if (counter == 26) {
						this->textBox58->Text = gcnew String(tp.c_str());
					}
				}
				counter++;
			}
			newfile.close(); //close the file object.
		}
	}

	else if (comboBox1->SelectedIndex == 1) {
		newfile.open("senin.konf", std::ios::in); //open a file to perform read operation using file object
		if (newfile.is_open()) {   //checking whether the file is open
			std::string tp;
			int counter = 0;
			while (std::getline(newfile, tp)) { //read data from file object and put it into string.
				if (counter % 2 == 1) {
					if (counter == 1) {
						//this->textBox45->Text = gcnew String(tp.c_str());
						comboBox2->SelectedIndex = std::stoi(tp);
					}
					else if (counter == 3) {
						//this->textBox46->Text = gcnew String(tp.c_str());
						comboBox3->SelectedIndex = std::stoi(tp);
					}
					else if (counter == 5) {
						//this->textBox47->Text = gcnew String(tp.c_str());
						comboBox4->SelectedIndex = std::stoi(tp);
					}
					else if (counter == 7) {
						//this->textBox48->Text = gcnew String(tp.c_str());
						comboBox5->SelectedIndex = std::stoi(tp);
					}
					else if (counter == 9) {
						//this->textBox49->Text = gcnew String(tp.c_str());
						comboBox6->SelectedIndex = std::stoi(tp);
					}
					else if (counter == 11) {
						//this->textBox50->Text = gcnew String(tp.c_str());
						comboBox7->SelectedIndex = std::stoi(tp);
					}
					else if (counter == 13) {
						//this->textBox51->Text = gcnew String(tp.c_str());
						comboBox8->SelectedIndex = std::stoi(tp);
					}
					else if (counter == 15) {
						//this->textBox52->Text = gcnew String(tp.c_str());
						comboBox9->SelectedIndex = std::stoi(tp);
					}
					else if (counter == 17) {
						//this->textBox53->Text = gcnew String(tp.c_str());
						comboBox10->SelectedIndex = std::stoi(tp);
					}
					else if (counter == 19) {
						//this->textBox54->Text = gcnew String(tp.c_str());
						comboBox11->SelectedIndex = std::stoi(tp);
					}
					else if (counter == 21) {
						//this->textBox55->Text = gcnew String(tp.c_str());
						comboBox12->SelectedIndex = std::stoi(tp);
					}
					else if (counter == 23) {
						//this->textBox56->Text = gcnew String(tp.c_str());
						comboBox13->SelectedIndex = std::stoi(tp);
					}
					else if (counter == 25) {
						//this->textBox57->Text = gcnew String(tp.c_str());
						comboBox14->SelectedIndex = std::stoi(tp);
					}
					else if (counter == 27) {
						//this->textBox58->Text = gcnew String(tp.c_str());
						comboBox15->SelectedIndex = std::stoi(tp);
					}
				}

				else {
					if (counter == 0) {
						this->textBox45->Text = gcnew String(tp.c_str());
					}
					else if (counter == 2) {
						this->textBox46->Text = gcnew String(tp.c_str());
					}
					else if (counter == 4) {
						this->textBox47->Text = gcnew String(tp.c_str());
					}
					else if (counter == 6) {
						this->textBox48->Text = gcnew String(tp.c_str());
					}
					else if (counter == 8) {
						this->textBox49->Text = gcnew String(tp.c_str());
					}
					else if (counter == 10) {
						this->textBox50->Text = gcnew String(tp.c_str());
					}
					else if (counter == 12) {
						this->textBox51->Text = gcnew String(tp.c_str());
					}
					else if (counter == 14) {
						this->textBox52->Text = gcnew String(tp.c_str());
					}
					else if (counter == 16) {
						this->textBox53->Text = gcnew String(tp.c_str());
					}
					else if (counter == 18) {
						this->textBox54->Text = gcnew String(tp.c_str());
					}
					else if (counter == 20) {
						this->textBox55->Text = gcnew String(tp.c_str());
					}
					else if (counter == 22) {
						this->textBox56->Text = gcnew String(tp.c_str());
					}
					else if (counter == 24) {
						this->textBox57->Text = gcnew String(tp.c_str());
					}
					else if (counter == 26) {
						this->textBox58->Text = gcnew String(tp.c_str());
					}
				}
				counter++;
			}
			newfile.close(); //close the file object.
		}
	}

	else if (comboBox1->SelectedIndex == 2) {
		newfile.open("selasa.konf", std::ios::in); //open a file to perform read operation using file object
		if (newfile.is_open()) {   //checking whether the file is open
			std::string tp;
			int counter = 0;
			while (std::getline(newfile, tp)) { //read data from file object and put it into string.
				if (counter % 2 == 1) {
					if (counter == 1) {
						//this->textBox45->Text = gcnew String(tp.c_str());
						comboBox2->SelectedIndex = std::stoi(tp);
					}
					else if (counter == 3) {
						//this->textBox46->Text = gcnew String(tp.c_str());
						comboBox3->SelectedIndex = std::stoi(tp);
					}
					else if (counter == 5) {
						//this->textBox47->Text = gcnew String(tp.c_str());
						comboBox4->SelectedIndex = std::stoi(tp);
					}
					else if (counter == 7) {
						//this->textBox48->Text = gcnew String(tp.c_str());
						comboBox5->SelectedIndex = std::stoi(tp);
					}
					else if (counter == 9) {
						//this->textBox49->Text = gcnew String(tp.c_str());
						comboBox6->SelectedIndex = std::stoi(tp);
					}
					else if (counter == 11) {
						//this->textBox50->Text = gcnew String(tp.c_str());
						comboBox7->SelectedIndex = std::stoi(tp);
					}
					else if (counter == 13) {
						//this->textBox51->Text = gcnew String(tp.c_str());
						comboBox8->SelectedIndex = std::stoi(tp);
					}
					else if (counter == 15) {
						//this->textBox52->Text = gcnew String(tp.c_str());
						comboBox9->SelectedIndex = std::stoi(tp);
					}
					else if (counter == 17) {
						//this->textBox53->Text = gcnew String(tp.c_str());
						comboBox10->SelectedIndex = std::stoi(tp);
					}
					else if (counter == 19) {
						//this->textBox54->Text = gcnew String(tp.c_str());
						comboBox11->SelectedIndex = std::stoi(tp);
					}
					else if (counter == 21) {
						//this->textBox55->Text = gcnew String(tp.c_str());
						comboBox12->SelectedIndex = std::stoi(tp);
					}
					else if (counter == 23) {
						//this->textBox56->Text = gcnew String(tp.c_str());
						comboBox13->SelectedIndex = std::stoi(tp);
					}
					else if (counter == 25) {
						//this->textBox57->Text = gcnew String(tp.c_str());
						comboBox14->SelectedIndex = std::stoi(tp);
					}
					else if (counter == 27) {
						//this->textBox58->Text = gcnew String(tp.c_str());
						comboBox15->SelectedIndex = std::stoi(tp);
					}
				}

				else {
					if (counter == 0) {
						this->textBox45->Text = gcnew String(tp.c_str());
					}
					else if (counter == 2) {
						this->textBox46->Text = gcnew String(tp.c_str());
					}
					else if (counter == 4) {
						this->textBox47->Text = gcnew String(tp.c_str());
					}
					else if (counter == 6) {
						this->textBox48->Text = gcnew String(tp.c_str());
					}
					else if (counter == 8) {
						this->textBox49->Text = gcnew String(tp.c_str());
					}
					else if (counter == 10) {
						this->textBox50->Text = gcnew String(tp.c_str());
					}
					else if (counter == 12) {
						this->textBox51->Text = gcnew String(tp.c_str());
					}
					else if (counter == 14) {
						this->textBox52->Text = gcnew String(tp.c_str());
					}
					else if (counter == 16) {
						this->textBox53->Text = gcnew String(tp.c_str());
					}
					else if (counter == 18) {
						this->textBox54->Text = gcnew String(tp.c_str());
					}
					else if (counter == 20) {
						this->textBox55->Text = gcnew String(tp.c_str());
					}
					else if (counter == 22) {
						this->textBox56->Text = gcnew String(tp.c_str());
					}
					else if (counter == 24) {
						this->textBox57->Text = gcnew String(tp.c_str());
					}
					else if (counter == 26) {
						this->textBox58->Text = gcnew String(tp.c_str());
					}
				}
				counter++;
			}
			newfile.close(); //close the file object.
		}
	}

	else if (comboBox1->SelectedIndex == 3) {
		newfile.open("rabu.konf", std::ios::in); //open a file to perform read operation using file object
		if (newfile.is_open()) {   //checking whether the file is open
			std::string tp;
			int counter = 0;
			while (std::getline(newfile, tp)) { //read data from file object and put it into string.
				if (counter % 2 == 1) {
					if (counter == 1) {
						//this->textBox45->Text = gcnew String(tp.c_str());
						comboBox2->SelectedIndex = std::stoi(tp);
					}
					else if (counter == 3) {
						//this->textBox46->Text = gcnew String(tp.c_str());
						comboBox3->SelectedIndex = std::stoi(tp);
					}
					else if (counter == 5) {
						//this->textBox47->Text = gcnew String(tp.c_str());
						comboBox4->SelectedIndex = std::stoi(tp);
					}
					else if (counter == 7) {
						//this->textBox48->Text = gcnew String(tp.c_str());
						comboBox5->SelectedIndex = std::stoi(tp);
					}
					else if (counter == 9) {
						//this->textBox49->Text = gcnew String(tp.c_str());
						comboBox6->SelectedIndex = std::stoi(tp);
					}
					else if (counter == 11) {
						//this->textBox50->Text = gcnew String(tp.c_str());
						comboBox7->SelectedIndex = std::stoi(tp);
					}
					else if (counter == 13) {
						//this->textBox51->Text = gcnew String(tp.c_str());
						comboBox8->SelectedIndex = std::stoi(tp);
					}
					else if (counter == 15) {
						//this->textBox52->Text = gcnew String(tp.c_str());
						comboBox9->SelectedIndex = std::stoi(tp);
					}
					else if (counter == 17) {
						//this->textBox53->Text = gcnew String(tp.c_str());
						comboBox10->SelectedIndex = std::stoi(tp);
					}
					else if (counter == 19) {
						//this->textBox54->Text = gcnew String(tp.c_str());
						comboBox11->SelectedIndex = std::stoi(tp);
					}
					else if (counter == 21) {
						//this->textBox55->Text = gcnew String(tp.c_str());
						comboBox12->SelectedIndex = std::stoi(tp);
					}
					else if (counter == 23) {
						//this->textBox56->Text = gcnew String(tp.c_str());
						comboBox13->SelectedIndex = std::stoi(tp);
					}
					else if (counter == 25) {
						//this->textBox57->Text = gcnew String(tp.c_str());
						comboBox14->SelectedIndex = std::stoi(tp);
					}
					else if (counter == 27) {
						//this->textBox58->Text = gcnew String(tp.c_str());
						comboBox15->SelectedIndex = std::stoi(tp);
					}
				}

				else {
					if (counter == 0) {
						this->textBox45->Text = gcnew String(tp.c_str());
					}
					else if (counter == 2) {
						this->textBox46->Text = gcnew String(tp.c_str());
					}
					else if (counter == 4) {
						this->textBox47->Text = gcnew String(tp.c_str());
					}
					else if (counter == 6) {
						this->textBox48->Text = gcnew String(tp.c_str());
					}
					else if (counter == 8) {
						this->textBox49->Text = gcnew String(tp.c_str());
					}
					else if (counter == 10) {
						this->textBox50->Text = gcnew String(tp.c_str());
					}
					else if (counter == 12) {
						this->textBox51->Text = gcnew String(tp.c_str());
					}
					else if (counter == 14) {
						this->textBox52->Text = gcnew String(tp.c_str());
					}
					else if (counter == 16) {
						this->textBox53->Text = gcnew String(tp.c_str());
					}
					else if (counter == 18) {
						this->textBox54->Text = gcnew String(tp.c_str());
					}
					else if (counter == 20) {
						this->textBox55->Text = gcnew String(tp.c_str());
					}
					else if (counter == 22) {
						this->textBox56->Text = gcnew String(tp.c_str());
					}
					else if (counter == 24) {
						this->textBox57->Text = gcnew String(tp.c_str());
					}
					else if (counter == 26) {
						this->textBox58->Text = gcnew String(tp.c_str());
					}
				}
				counter++;
			}
			newfile.close(); //close the file object.
		}
	}

	else if (comboBox1->SelectedIndex == 4) {
		newfile.open("kamis.konf", std::ios::in); //open a file to perform read operation using file object
		if (newfile.is_open()) {   //checking whether the file is open
			std::string tp;
			int counter = 0;
			while (std::getline(newfile, tp)) { //read data from file object and put it into string.
				if (counter % 2 == 1) {
					if (counter == 1) {
						//this->textBox45->Text = gcnew String(tp.c_str());
						comboBox2->SelectedIndex = std::stoi(tp);
					}
					else if (counter == 3) {
						//this->textBox46->Text = gcnew String(tp.c_str());
						comboBox3->SelectedIndex = std::stoi(tp);
					}
					else if (counter == 5) {
						//this->textBox47->Text = gcnew String(tp.c_str());
						comboBox4->SelectedIndex = std::stoi(tp);
					}
					else if (counter == 7) {
						//this->textBox48->Text = gcnew String(tp.c_str());
						comboBox5->SelectedIndex = std::stoi(tp);
					}
					else if (counter == 9) {
						//this->textBox49->Text = gcnew String(tp.c_str());
						comboBox6->SelectedIndex = std::stoi(tp);
					}
					else if (counter == 11) {
						//this->textBox50->Text = gcnew String(tp.c_str());
						comboBox7->SelectedIndex = std::stoi(tp);
					}
					else if (counter == 13) {
						//this->textBox51->Text = gcnew String(tp.c_str());
						comboBox8->SelectedIndex = std::stoi(tp);
					}
					else if (counter == 15) {
						//this->textBox52->Text = gcnew String(tp.c_str());
						comboBox9->SelectedIndex = std::stoi(tp);
					}
					else if (counter == 17) {
						//this->textBox53->Text = gcnew String(tp.c_str());
						comboBox10->SelectedIndex = std::stoi(tp);
					}
					else if (counter == 19) {
						//this->textBox54->Text = gcnew String(tp.c_str());
						comboBox11->SelectedIndex = std::stoi(tp);
					}
					else if (counter == 21) {
						//this->textBox55->Text = gcnew String(tp.c_str());
						comboBox12->SelectedIndex = std::stoi(tp);
					}
					else if (counter == 23) {
						//this->textBox56->Text = gcnew String(tp.c_str());
						comboBox13->SelectedIndex = std::stoi(tp);
					}
					else if (counter == 25) {
						//this->textBox57->Text = gcnew String(tp.c_str());
						comboBox14->SelectedIndex = std::stoi(tp);
					}
					else if (counter == 27) {
						//this->textBox58->Text = gcnew String(tp.c_str());
						comboBox15->SelectedIndex = std::stoi(tp);
					}
				}

				else {
					if (counter == 0) {
						this->textBox45->Text = gcnew String(tp.c_str());
					}
					else if (counter == 2) {
						this->textBox46->Text = gcnew String(tp.c_str());
					}
					else if (counter == 4) {
						this->textBox47->Text = gcnew String(tp.c_str());
					}
					else if (counter == 6) {
						this->textBox48->Text = gcnew String(tp.c_str());
					}
					else if (counter == 8) {
						this->textBox49->Text = gcnew String(tp.c_str());
					}
					else if (counter == 10) {
						this->textBox50->Text = gcnew String(tp.c_str());
					}
					else if (counter == 12) {
						this->textBox51->Text = gcnew String(tp.c_str());
					}
					else if (counter == 14) {
						this->textBox52->Text = gcnew String(tp.c_str());
					}
					else if (counter == 16) {
						this->textBox53->Text = gcnew String(tp.c_str());
					}
					else if (counter == 18) {
						this->textBox54->Text = gcnew String(tp.c_str());
					}
					else if (counter == 20) {
						this->textBox55->Text = gcnew String(tp.c_str());
					}
					else if (counter == 22) {
						this->textBox56->Text = gcnew String(tp.c_str());
					}
					else if (counter == 24) {
						this->textBox57->Text = gcnew String(tp.c_str());
					}
					else if (counter == 26) {
						this->textBox58->Text = gcnew String(tp.c_str());
					}
				}
				counter++;
			}
			newfile.close(); //close the file object.
		}
	}

	else if (comboBox1->SelectedIndex == 5) {
		newfile.open("jumat.konf", std::ios::in); //open a file to perform read operation using file object
		if (newfile.is_open()) {   //checking whether the file is open
			std::string tp;
			int counter = 0;
			while (std::getline(newfile, tp)) { //read data from file object and put it into string.
				if (counter % 2 == 1) {
					if (counter == 1) {
						//this->textBox45->Text = gcnew String(tp.c_str());
						comboBox2->SelectedIndex = std::stoi(tp);
					}
					else if (counter == 3) {
						//this->textBox46->Text = gcnew String(tp.c_str());
						comboBox3->SelectedIndex = std::stoi(tp);
					}
					else if (counter == 5) {
						//this->textBox47->Text = gcnew String(tp.c_str());
						comboBox4->SelectedIndex = std::stoi(tp);
					}
					else if (counter == 7) {
						//this->textBox48->Text = gcnew String(tp.c_str());
						comboBox5->SelectedIndex = std::stoi(tp);
					}
					else if (counter == 9) {
						//this->textBox49->Text = gcnew String(tp.c_str());
						comboBox6->SelectedIndex = std::stoi(tp);
					}
					else if (counter == 11) {
						//this->textBox50->Text = gcnew String(tp.c_str());
						comboBox7->SelectedIndex = std::stoi(tp);
					}
					else if (counter == 13) {
						//this->textBox51->Text = gcnew String(tp.c_str());
						comboBox8->SelectedIndex = std::stoi(tp);
					}
					else if (counter == 15) {
						//this->textBox52->Text = gcnew String(tp.c_str());
						comboBox9->SelectedIndex = std::stoi(tp);
					}
					else if (counter == 17) {
						//this->textBox53->Text = gcnew String(tp.c_str());
						comboBox10->SelectedIndex = std::stoi(tp);
					}
					else if (counter == 19) {
						//this->textBox54->Text = gcnew String(tp.c_str());
						comboBox11->SelectedIndex = std::stoi(tp);
					}
					else if (counter == 21) {
						//this->textBox55->Text = gcnew String(tp.c_str());
						comboBox12->SelectedIndex = std::stoi(tp);
					}
					else if (counter == 23) {
						//this->textBox56->Text = gcnew String(tp.c_str());
						comboBox13->SelectedIndex = std::stoi(tp);
					}
					else if (counter == 25) {
						//this->textBox57->Text = gcnew String(tp.c_str());
						comboBox14->SelectedIndex = std::stoi(tp);
					}
					else if (counter == 27) {
						//this->textBox58->Text = gcnew String(tp.c_str());
						comboBox15->SelectedIndex = std::stoi(tp);
					}
				}

				else {
					if (counter == 0) {
						this->textBox45->Text = gcnew String(tp.c_str());
					}
					else if (counter == 2) {
						this->textBox46->Text = gcnew String(tp.c_str());
					}
					else if (counter == 4) {
						this->textBox47->Text = gcnew String(tp.c_str());
					}
					else if (counter == 6) {
						this->textBox48->Text = gcnew String(tp.c_str());
					}
					else if (counter == 8) {
						this->textBox49->Text = gcnew String(tp.c_str());
					}
					else if (counter == 10) {
						this->textBox50->Text = gcnew String(tp.c_str());
					}
					else if (counter == 12) {
						this->textBox51->Text = gcnew String(tp.c_str());
					}
					else if (counter == 14) {
						this->textBox52->Text = gcnew String(tp.c_str());
					}
					else if (counter == 16) {
						this->textBox53->Text = gcnew String(tp.c_str());
					}
					else if (counter == 18) {
						this->textBox54->Text = gcnew String(tp.c_str());
					}
					else if (counter == 20) {
						this->textBox55->Text = gcnew String(tp.c_str());
					}
					else if (counter == 22) {
						this->textBox56->Text = gcnew String(tp.c_str());
					}
					else if (counter == 24) {
						this->textBox57->Text = gcnew String(tp.c_str());
					}
					else if (counter == 26) {
						this->textBox58->Text = gcnew String(tp.c_str());
					}
				}
				counter++;
			}
			newfile.close(); //close the file object.
		}
	}

	else if (comboBox1->SelectedIndex == 6) {
		newfile.open("sabtu.konf", std::ios::in); //open a file to perform read operation using file object
		if (newfile.is_open()) {   //checking whether the file is open
			std::string tp;
			int counter = 0;
			while (std::getline(newfile, tp)) { //read data from file object and put it into string.
				if (counter % 2 == 1) {
					if (counter == 1) {
						//this->textBox45->Text = gcnew String(tp.c_str());
						comboBox2->SelectedIndex = std::stoi(tp);
					}
					else if (counter == 3) {
						//this->textBox46->Text = gcnew String(tp.c_str());
						comboBox3->SelectedIndex = std::stoi(tp);
					}
					else if (counter == 5) {
						//this->textBox47->Text = gcnew String(tp.c_str());
						comboBox4->SelectedIndex = std::stoi(tp);
					}
					else if (counter == 7) {
						//this->textBox48->Text = gcnew String(tp.c_str());
						comboBox5->SelectedIndex = std::stoi(tp);
					}
					else if (counter == 9) {
						//this->textBox49->Text = gcnew String(tp.c_str());
						comboBox6->SelectedIndex = std::stoi(tp);
					}
					else if (counter == 11) {
						//this->textBox50->Text = gcnew String(tp.c_str());
						comboBox7->SelectedIndex = std::stoi(tp);
					}
					else if (counter == 13) {
						//this->textBox51->Text = gcnew String(tp.c_str());
						comboBox8->SelectedIndex = std::stoi(tp);
					}
					else if (counter == 15) {
						//this->textBox52->Text = gcnew String(tp.c_str());
						comboBox9->SelectedIndex = std::stoi(tp);
					}
					else if (counter == 17) {
						//this->textBox53->Text = gcnew String(tp.c_str());
						comboBox10->SelectedIndex = std::stoi(tp);
					}
					else if (counter == 19) {
						//this->textBox54->Text = gcnew String(tp.c_str());
						comboBox11->SelectedIndex = std::stoi(tp);
					}
					else if (counter == 21) {
						//this->textBox55->Text = gcnew String(tp.c_str());
						comboBox12->SelectedIndex = std::stoi(tp);
					}
					else if (counter == 23) {
						//this->textBox56->Text = gcnew String(tp.c_str());
						comboBox13->SelectedIndex = std::stoi(tp);
					}
					else if (counter == 25) {
						//this->textBox57->Text = gcnew String(tp.c_str());
						comboBox14->SelectedIndex = std::stoi(tp);
					}
					else if (counter == 27) {
						//this->textBox58->Text = gcnew String(tp.c_str());
						comboBox15->SelectedIndex = std::stoi(tp);
					}
				}

				else {
					if (counter == 0) {
						this->textBox45->Text = gcnew String(tp.c_str());
					}
					else if (counter == 2) {
						this->textBox46->Text = gcnew String(tp.c_str());
					}
					else if (counter == 4) {
						this->textBox47->Text = gcnew String(tp.c_str());
					}
					else if (counter == 6) {
						this->textBox48->Text = gcnew String(tp.c_str());
					}
					else if (counter == 8) {
						this->textBox49->Text = gcnew String(tp.c_str());
					}
					else if (counter == 10) {
						this->textBox50->Text = gcnew String(tp.c_str());
					}
					else if (counter == 12) {
						this->textBox51->Text = gcnew String(tp.c_str());
					}
					else if (counter == 14) {
						this->textBox52->Text = gcnew String(tp.c_str());
					}
					else if (counter == 16) {
						this->textBox53->Text = gcnew String(tp.c_str());
					}
					else if (counter == 18) {
						this->textBox54->Text = gcnew String(tp.c_str());
					}
					else if (counter == 20) {
						this->textBox55->Text = gcnew String(tp.c_str());
					}
					else if (counter == 22) {
						this->textBox56->Text = gcnew String(tp.c_str());
					}
					else if (counter == 24) {
						this->textBox57->Text = gcnew String(tp.c_str());
					}
					else if (counter == 26) {
						this->textBox58->Text = gcnew String(tp.c_str());
					}
				}
				counter++;
			}
			newfile.close(); //close the file object.
		}
	}

	else if (comboBox1->SelectedIndex == 7) {
		newfile.open("puasa.konf", std::ios::in); //open a file to perform read operation using file object
		if (newfile.is_open()) {   //checking whether the file is open
			std::string tp;
			int counter = 0;
			while (std::getline(newfile, tp)) { //read data from file object and put it into string.
				if (counter % 2 == 1) {
					if (counter == 1) {
						//this->textBox45->Text = gcnew String(tp.c_str());
						comboBox2->SelectedIndex = std::stoi(tp);
					}
					else if (counter == 3) {
						//this->textBox46->Text = gcnew String(tp.c_str());
						comboBox3->SelectedIndex = std::stoi(tp);
					}
					else if (counter == 5) {
						//this->textBox47->Text = gcnew String(tp.c_str());
						comboBox4->SelectedIndex = std::stoi(tp);
					}
					else if (counter == 7) {
						//this->textBox48->Text = gcnew String(tp.c_str());
						comboBox5->SelectedIndex = std::stoi(tp);
					}
					else if (counter == 9) {
						//this->textBox49->Text = gcnew String(tp.c_str());
						comboBox6->SelectedIndex = std::stoi(tp);
					}
					else if (counter == 11) {
						//this->textBox50->Text = gcnew String(tp.c_str());
						comboBox7->SelectedIndex = std::stoi(tp);
					}
					else if (counter == 13) {
						//this->textBox51->Text = gcnew String(tp.c_str());
						comboBox8->SelectedIndex = std::stoi(tp);
					}
					else if (counter == 15) {
						//this->textBox52->Text = gcnew String(tp.c_str());
						comboBox9->SelectedIndex = std::stoi(tp);
					}
					else if (counter == 17) {
						//this->textBox53->Text = gcnew String(tp.c_str());
						comboBox10->SelectedIndex = std::stoi(tp);
					}
					else if (counter == 19) {
						//this->textBox54->Text = gcnew String(tp.c_str());
						comboBox11->SelectedIndex = std::stoi(tp);
					}
					else if (counter == 21) {
						//this->textBox55->Text = gcnew String(tp.c_str());
						comboBox12->SelectedIndex = std::stoi(tp);
					}
					else if (counter == 23) {
						//this->textBox56->Text = gcnew String(tp.c_str());
						comboBox13->SelectedIndex = std::stoi(tp);
					}
					else if (counter == 25) {
						//this->textBox57->Text = gcnew String(tp.c_str());
						comboBox14->SelectedIndex = std::stoi(tp);
					}
					else if (counter == 27) {
						//this->textBox58->Text = gcnew String(tp.c_str());
						comboBox15->SelectedIndex = std::stoi(tp);
					}
				}

				else {
					if (counter == 0) {
						this->textBox45->Text = gcnew String(tp.c_str());
					}
					else if (counter == 2) {
						this->textBox46->Text = gcnew String(tp.c_str());
					}
					else if (counter == 4) {
						this->textBox47->Text = gcnew String(tp.c_str());
					}
					else if (counter == 6) {
						this->textBox48->Text = gcnew String(tp.c_str());
					}
					else if (counter == 8) {
						this->textBox49->Text = gcnew String(tp.c_str());
					}
					else if (counter == 10) {
						this->textBox50->Text = gcnew String(tp.c_str());
					}
					else if (counter == 12) {
						this->textBox51->Text = gcnew String(tp.c_str());
					}
					else if (counter == 14) {
						this->textBox52->Text = gcnew String(tp.c_str());
					}
					else if (counter == 16) {
						this->textBox53->Text = gcnew String(tp.c_str());
					}
					else if (counter == 18) {
						this->textBox54->Text = gcnew String(tp.c_str());
					}
					else if (counter == 20) {
						this->textBox55->Text = gcnew String(tp.c_str());
					}
					else if (counter == 22) {
						this->textBox56->Text = gcnew String(tp.c_str());
					}
					else if (counter == 24) {
						this->textBox57->Text = gcnew String(tp.c_str());
					}
					else if (counter == 26) {
						this->textBox58->Text = gcnew String(tp.c_str());
					}
				}
				counter++;
			}
			newfile.close(); //close the file object.
		}
	}

	else if (comboBox1->SelectedIndex == 8) {
		newfile.open("ujian.konf", std::ios::in); //open a file to perform read operation using file object
		if (newfile.is_open()) {   //checking whether the file is open
			std::string tp;
			int counter = 0;
			while (std::getline(newfile, tp)) { //read data from file object and put it into string.
				if (counter % 2 == 1) {
					if (counter == 1) {
						//this->textBox45->Text = gcnew String(tp.c_str());
						comboBox2->SelectedIndex = std::stoi(tp);
					}
					else if (counter == 3) {
						//this->textBox46->Text = gcnew String(tp.c_str());
						comboBox3->SelectedIndex = std::stoi(tp);
					}
					else if (counter == 5) {
						//this->textBox47->Text = gcnew String(tp.c_str());
						comboBox4->SelectedIndex = std::stoi(tp);
					}
					else if (counter == 7) {
						//this->textBox48->Text = gcnew String(tp.c_str());
						comboBox5->SelectedIndex = std::stoi(tp);
					}
					else if (counter == 9) {
						//this->textBox49->Text = gcnew String(tp.c_str());
						comboBox6->SelectedIndex = std::stoi(tp);
					}
					else if (counter == 11) {
						//this->textBox50->Text = gcnew String(tp.c_str());
						comboBox7->SelectedIndex = std::stoi(tp);
					}
					else if (counter == 13) {
						//this->textBox51->Text = gcnew String(tp.c_str());
						comboBox8->SelectedIndex = std::stoi(tp);
					}
					else if (counter == 15) {
						//this->textBox52->Text = gcnew String(tp.c_str());
						comboBox9->SelectedIndex = std::stoi(tp);
					}
					else if (counter == 17) {
						//this->textBox53->Text = gcnew String(tp.c_str());
						comboBox10->SelectedIndex = std::stoi(tp);
					}
					else if (counter == 19) {
						//this->textBox54->Text = gcnew String(tp.c_str());
						comboBox11->SelectedIndex = std::stoi(tp);
					}
					else if (counter == 21) {
						//this->textBox55->Text = gcnew String(tp.c_str());
						comboBox12->SelectedIndex = std::stoi(tp);
					}
					else if (counter == 23) {
						//this->textBox56->Text = gcnew String(tp.c_str());
						comboBox13->SelectedIndex = std::stoi(tp);
					}
					else if (counter == 25) {
						//this->textBox57->Text = gcnew String(tp.c_str());
						comboBox14->SelectedIndex = std::stoi(tp);
					}
					else if (counter == 27) {
						//this->textBox58->Text = gcnew String(tp.c_str());
						comboBox15->SelectedIndex = std::stoi(tp);
					}
				}

				else {
					if (counter == 0) {
						this->textBox45->Text = gcnew String(tp.c_str());
					}
					else if (counter == 2) {
						this->textBox46->Text = gcnew String(tp.c_str());
					}
					else if (counter == 4) {
						this->textBox47->Text = gcnew String(tp.c_str());
					}
					else if (counter == 6) {
						this->textBox48->Text = gcnew String(tp.c_str());
					}
					else if (counter == 8) {
						this->textBox49->Text = gcnew String(tp.c_str());
					}
					else if (counter == 10) {
						this->textBox50->Text = gcnew String(tp.c_str());
					}
					else if (counter == 12) {
						this->textBox51->Text = gcnew String(tp.c_str());
					}
					else if (counter == 14) {
						this->textBox52->Text = gcnew String(tp.c_str());
					}
					else if (counter == 16) {
						this->textBox53->Text = gcnew String(tp.c_str());
					}
					else if (counter == 18) {
						this->textBox54->Text = gcnew String(tp.c_str());
					}
					else if (counter == 20) {
						this->textBox55->Text = gcnew String(tp.c_str());
					}
					else if (counter == 22) {
						this->textBox56->Text = gcnew String(tp.c_str());
					}
					else if (counter == 24) {
						this->textBox57->Text = gcnew String(tp.c_str());
					}
					else if (counter == 26) {
						this->textBox58->Text = gcnew String(tp.c_str());
					}
				}
				counter++;
			}
			newfile.close(); //close the file object.
		}
	}

}
private: System::Void comboBox3_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox61_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
};
}
