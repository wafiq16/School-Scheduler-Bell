#include "windows.h"
#include "String.h"
#include "time.h"
#include "MyForm1.h"
#pragma comment(lib, "Winmm.lib")
char* myTimeHour;
char* myTimeMinute;
int ENABLE = 1;
int UJIAN = 0;
int PUASA = 0;
namespace CppWinForm2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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

	protected:


	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;

	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::Button^  button18;
	private: System::Windows::Forms::Button^  button19;
	private: System::Windows::Forms::Button^  button20;
	private: System::Windows::Forms::Button^  button21;
	private: System::Windows::Forms::Button^  button22;
	private: System::Windows::Forms::Button^  button23;
	private: System::Windows::Forms::Button^  button24;
	private: System::Windows::Forms::Button^  button25;
	private: System::Windows::Forms::Button^  button26;
	private: System::Windows::Forms::Button^  button27;

	private: System::Windows::Forms::Button^  button28;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::TextBox^  textBox9;



	private: System::ComponentModel::IContainer^  components;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"ON";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(93, 12);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"OFF";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->textBox1->Location = System::Drawing::Point(211, 36);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(155, 21);
			this->textBox1->TabIndex = 4;
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 1;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(271, 10);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(50, 20);
			this->textBox2->TabIndex = 5;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(262, 63);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(69, 20);
			this->textBox3->TabIndex = 6;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(434, 15);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(57, 20);
			this->textBox4->TabIndex = 7;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(497, 15);
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(34, 20);
			this->textBox5->TabIndex = 8;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox5_TextChanged);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(12, 171);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 9;
			this->button3->Text = L"AHAD";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(12, 200);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 10;
			this->button4->Text = L"SENIN";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(12, 229);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 11;
			this->button5->Text = L"SELASA";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(12, 258);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 12;
			this->button6->Text = L"RABU";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(12, 287);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 23);
			this->button7->TabIndex = 13;
			this->button7->Text = L"KAMIS";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(12, 316);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 23);
			this->button8->TabIndex = 14;
			this->button8->Text = L"JUMAT";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(12, 345);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 23);
			this->button9->TabIndex = 15;
			this->button9->Text = L"SABTU";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(376, 345);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(75, 23);
			this->button10->TabIndex = 16;
			this->button10->Text = L"BEL K";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(457, 345);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(75, 23);
			this->button11->TabIndex = 17;
			this->button11->Text = L"BEL L";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(295, 345);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(75, 23);
			this->button12->TabIndex = 18;
			this->button12->Text = L"BEL J";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(457, 316);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(75, 23);
			this->button13->TabIndex = 19;
			this->button13->Text = L"BEL I";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(376, 316);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(75, 23);
			this->button14->TabIndex = 20;
			this->button14->Text = L"BEL H";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(295, 316);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(75, 23);
			this->button15->TabIndex = 21;
			this->button15->Text = L"BEL G";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(457, 287);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(75, 23);
			this->button16->TabIndex = 22;
			this->button16->Text = L"BEL F";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// button17
			// 
			this->button17->Location = System::Drawing::Point(376, 287);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(75, 23);
			this->button17->TabIndex = 23;
			this->button17->Text = L"BEL E";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// button18
			// 
			this->button18->Location = System::Drawing::Point(295, 287);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(75, 23);
			this->button18->TabIndex = 24;
			this->button18->Text = L"BEL D";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// button19
			// 
			this->button19->Location = System::Drawing::Point(295, 258);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(75, 23);
			this->button19->TabIndex = 25;
			this->button19->Text = L"BEL A";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
			// 
			// button20
			// 
			this->button20->Location = System::Drawing::Point(376, 258);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(75, 23);
			this->button20->TabIndex = 26;
			this->button20->Text = L"BEL B";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::button20_Click);
			// 
			// button21
			// 
			this->button21->Location = System::Drawing::Point(457, 258);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(75, 23);
			this->button21->TabIndex = 27;
			this->button21->Text = L"BEL C";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm::button21_Click);
			// 
			// button22
			// 
			this->button22->Location = System::Drawing::Point(295, 229);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(75, 23);
			this->button22->TabIndex = 28;
			this->button22->Text = L"INFO";
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &MyForm::button22_Click);
			// 
			// button23
			// 
			this->button23->Location = System::Drawing::Point(376, 229);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(75, 23);
			this->button23->TabIndex = 29;
			this->button23->Text = L"APEL";
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Click += gcnew System::EventHandler(this, &MyForm::button23_Click);
			// 
			// button24
			// 
			this->button24->Location = System::Drawing::Point(457, 229);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(75, 23);
			this->button24->TabIndex = 30;
			this->button24->Text = L"DARURAT";
			this->button24->UseVisualStyleBackColor = true;
			this->button24->Click += gcnew System::EventHandler(this, &MyForm::button24_Click);
			// 
			// button25
			// 
			this->button25->Location = System::Drawing::Point(376, 171);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(156, 23);
			this->button25->TabIndex = 31;
			this->button25->Text = L"STOP AUDIO";
			this->button25->UseVisualStyleBackColor = true;
			this->button25->Click += gcnew System::EventHandler(this, &MyForm::button25_Click);
			// 
			// button26
			// 
			this->button26->Location = System::Drawing::Point(12, 122);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(75, 23);
			this->button26->TabIndex = 32;
			this->button26->Text = L"PUASA";
			this->button26->UseVisualStyleBackColor = true;
			this->button26->Click += gcnew System::EventHandler(this, &MyForm::button26_Click);
			// 
			// button27
			// 
			this->button27->Location = System::Drawing::Point(12, 93);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(75, 23);
			this->button27->TabIndex = 33;
			this->button27->Text = L"UJIAN";
			this->button27->UseVisualStyleBackColor = true;
			this->button27->Click += gcnew System::EventHandler(this, &MyForm::button27_Click);
			// 
			// button28
			// 
			this->button28->Location = System::Drawing::Point(457, 142);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(75, 23);
			this->button28->TabIndex = 35;
			this->button28->Text = L"SETTING";
			this->button28->UseVisualStyleBackColor = true;
			this->button28->Click += gcnew System::EventHandler(this, &MyForm::button28_Click);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(12, 50);
			this->textBox6->Name = L"textBox6";
			this->textBox6->ReadOnly = true;
			this->textBox6->Size = System::Drawing::Size(75, 20);
			this->textBox6->TabIndex = 36;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(93, 50);
			this->textBox7->Name = L"textBox7";
			this->textBox7->ReadOnly = true;
			this->textBox7->Size = System::Drawing::Size(75, 20);
			this->textBox7->TabIndex = 37;
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox7_TextChanged);
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(94, 93);
			this->textBox8->Multiline = true;
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(195, 275);
			this->textBox8->TabIndex = 38;
			this->textBox8->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox8_TextChanged);
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(375, 62);
			this->textBox9->Multiline = true;
			this->textBox9->Name = L"textBox9";
			this->textBox9->ReadOnly = true;
			this->textBox9->Size = System::Drawing::Size(156, 63);
			this->textBox9->TabIndex = 39;
			this->textBox9->Text = L"Untuk menjalankan mode puasa atau ujian, klik tombol puasa atau ujian dibawah kol"
				L"om HARI";
			this->textBox9->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(543, 380);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->button28);
			this->Controls->Add(this->button27);
			this->Controls->Add(this->button26);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"Aplikasi Bel Sekolah";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		DateTime datetime;
		private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			this->textBox5->Text = "ON";
			ENABLE = 1;
			//if (datetime.ToString("HH") == "21" && datetime.ToString("mm") == "20") {
			//	mciSendStringA("open \"padi.mp3\" type mpegvideo alias mp3", NULL, 0, NULL);
			//	mciSendStringA("play mp3", NULL, 0, NULL);
			//	mciSendStringA("play mp3", NULL, 0, NULL);
			//	// mciSendStringA("play mp3 from 0 wait", NULL, 0, NULL);
			//}
			//else {
			//	mciSendStringA("open \"Isyana.mp3\" type mpegvideo alias mp3", NULL, 0, NULL);
			//	mciSendStringA("play mp3", NULL, 0, NULL);
			//	mciSendStringA("play mp3", NULL, 0, NULL);
			//}
		}

		private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			mciSendStringA("close mp3", NULL, 0, NULL);
			this->textBox5->Text = "OFF";
			ENABLE = 0;
		}

		private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
			datetime = DateTime::Now;
			this->textBox7->Text = gcnew String(msclr::interop::marshal_as<std::string>(datetime.ToString("dddd")).c_str());
			this->textBox5->Text = "ON";
			ENABLE = 1;
		}
		
		private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
			datetime = DateTime::Now;
			std::string temp_waktu = msclr::interop::marshal_as<std::string>(datetime.ToString("HH:mm:ss tt"));
			std::string temp_hari = msclr::interop::marshal_as<std::string>(datetime.ToString("dddd"));
			std::fstream newfile, audiofile;
			std::string LAGU_JAM_1, LAGU_JAM_2, LAGU_JAM_3, LAGU_JAM_4, LAGU_JAM_5, LAGU_JAM_6, LAGU_JAM_7;
			std::string LAGU_JAM_8, LAGU_JAM_9, LAGU_JAM_10, LAGU_JAM_11, LAGU_JAM_12, LAGU_JAM_13, LAGU_JAM_14;
			std::string LAGUKU;
			char temp_lagu[999];
			this->textBox2->Text = "WAKTU";
			this->textBox3->Text = datetime.ToString("HH:mm:ss tt");
			this->textBox1->Text = datetime.ToString("dddd, dd MMMM yyyy");
			this->textBox4->Text = datetime.ToString("STATUS");
			this->textBox6->Text = "HARI";
			if (ENABLE == 0) {
				this->textBox8->Text = "";
				mciSendStringA("close mp3", NULL, 0, NULL);
			}
			else if (ENABLE == 1 && UJIAN == 0 && PUASA == 0) {
				if (gcnew String(temp_hari.c_str()) == "Sunday") {
					newfile.open("ahad.konf", std::ios::in); //open a file to perform read operation using file object
					if (newfile.is_open()) {   //checking whether the file is open
						std::string tp;
						int counter = 0;
						while (std::getline(newfile, tp)) { //read data from file object and put it into string.
							if (counter == 1) {
								LAGU_JAM_1 = tp.c_str();
							}
							else if (counter == 3) {
								LAGU_JAM_2 = tp.c_str();
							}
							else if (counter == 5) {
								LAGU_JAM_3 = tp.c_str();
							}
							else if (counter == 7) {
								LAGU_JAM_4 = tp.c_str();
							}
							else if (counter == 9) {
								LAGU_JAM_5 = tp.c_str();
							}
							else if (counter == 11) {
								LAGU_JAM_6 = tp.c_str();
							}
							else if (counter == 13) {
								LAGU_JAM_7 = tp.c_str();
							}
							else if (counter == 15) {
								LAGU_JAM_8 = tp.c_str();
							}
							else if (counter == 17) {
								LAGU_JAM_9 = tp.c_str();
							}
							else if (counter == 19) {
								LAGU_JAM_10 = tp.c_str();
							}
							else if (counter == 21) {
								LAGU_JAM_11 = tp.c_str();
							}
							else if (counter == 23) {
								LAGU_JAM_12 = tp.c_str();
							}
							else if (counter == 25) {
								LAGU_JAM_13 = tp.c_str();
							}
							else if (counter == 27) {
								LAGU_JAM_14 = tp.c_str();
							}
							counter++;
						}
						counter = 0;
					}
					newfile.close();

					audiofile.open("audio.konf", std::ios::in); //open a file to perform read operation using file object
					if (audiofile.is_open()) {   //checking whether the file is open
						std::string tp;
						int counter = 0;
						while (std::getline(audiofile, tp)) { //read data from file object and put it into string.
							if (counter == std::stoi(LAGU_JAM_1)) {
								LAGUKU = tp.c_str();
							}
							else if (counter == std::stoi(LAGU_JAM_2)) {
								LAGUKU = tp.c_str();
							}
							else if (counter == std::stoi(LAGU_JAM_3)) {
								LAGUKU = tp.c_str();
							}
							else if (counter == std::stoi(LAGU_JAM_4)) {
								LAGUKU = tp.c_str();
							}
							else if (counter == std::stoi(LAGU_JAM_5)) {
								LAGUKU = tp.c_str();
							}
							else if (counter == std::stoi(LAGU_JAM_6)) {
								LAGUKU = tp.c_str();
							}
							else if (counter == std::stoi(LAGU_JAM_7)) {
								LAGUKU = tp.c_str();
							}
							else if (counter == std::stoi(LAGU_JAM_8)) {
								LAGUKU = tp.c_str();
							}
							else if (counter == std::stoi(LAGU_JAM_9)) {
								LAGUKU = tp.c_str();
							}
							else if (counter == std::stoi(LAGU_JAM_10)) {
								LAGUKU = tp.c_str();
							}
							else if (counter == std::stoi(LAGU_JAM_11)) {
								LAGUKU = tp.c_str();
							}
							else if (counter == std::stoi(LAGU_JAM_12)) {
								LAGUKU = tp.c_str();
							}
							else if (counter == std::stoi(LAGU_JAM_13)) {
								LAGUKU = tp.c_str();
							}
							else if (counter == std::stoi(LAGU_JAM_14)) {
								LAGUKU = tp.c_str();
							}
							counter++;
						}
						counter = 0;
					}
					audiofile.close();

					newfile.open("ahad.konf", std::ios::in);
					if (newfile.is_open()) {
						std::string tp;
						int counter = 0;
						while (std::getline(newfile, tp)) { //read data from file object and put it into string.
							if (temp_waktu == tp) {
								snprintf(temp_lagu, sizeof(temp_lagu), "open \"%s\" type mpegvideo alias mp3", LAGUKU.c_str());
								mciSendStringA(temp_lagu, NULL, 0, NULL);
								mciSendStringA("play mp3", NULL, 0, NULL);
								mciSendStringA("play mp3", NULL, 0, NULL);
							}
						}
						newfile.close(); //close the file object.
					}
				}
				
				else if (gcnew String(temp_hari.c_str()) == "Monday") {
					newfile.open("senin.konf", std::ios::in); //open a file to perform read operation using file object
					if (newfile.is_open()) {   //checking whether the file is open
						std::string tp;
						int counter = 0;
						while (std::getline(newfile, tp)) { //read data from file object and put it into string.
							if (counter == 1) {
								LAGU_JAM_1 = tp.c_str();
							}
							else if (counter == 3) {
								LAGU_JAM_2 = tp.c_str();
							}
							else if (counter == 5) {
								LAGU_JAM_3 = tp.c_str();
							}
							else if (counter == 7) {
								LAGU_JAM_4 = tp.c_str();
							}
							else if (counter == 9) {
								LAGU_JAM_5 = tp.c_str();
							}
							else if (counter == 11) {
								LAGU_JAM_6 = tp.c_str();
							}
							else if (counter == 13) {
								LAGU_JAM_7 = tp.c_str();
							}
							else if (counter == 15) {
								LAGU_JAM_8 = tp.c_str();
							}
							else if (counter == 17) {
								LAGU_JAM_9 = tp.c_str();
							}
							else if (counter == 19) {
								LAGU_JAM_10 = tp.c_str();
							}
							else if (counter == 21) {
								LAGU_JAM_11 = tp.c_str();
							}
							else if (counter == 23) {
								LAGU_JAM_12 = tp.c_str();
							}
							else if (counter == 25) {
								LAGU_JAM_13 = tp.c_str();
							}
							else if (counter == 27) {
								LAGU_JAM_14 = tp.c_str();
							}
							counter++;
						}
						counter = 0;
					}
					newfile.close();

					audiofile.open("audio.konf", std::ios::in); //open a file to perform read operation using file object
					if (audiofile.is_open()) {   //checking whether the file is open
						std::string tp;
						int counter = 0;
						while (std::getline(audiofile, tp)) { //read data from file object and put it into string.
							if (counter == std::stoi(LAGU_JAM_1)) {
								LAGUKU = tp.c_str();
							}
							else if (counter == std::stoi(LAGU_JAM_2)) {
								LAGUKU = tp.c_str();
							}
							else if (counter == std::stoi(LAGU_JAM_3)) {
								LAGUKU = tp.c_str();
							}
							else if (counter == std::stoi(LAGU_JAM_4)) {
								LAGUKU = tp.c_str();
							}
							else if (counter == std::stoi(LAGU_JAM_5)) {
								LAGUKU = tp.c_str();
							}
							else if (counter == std::stoi(LAGU_JAM_6)) {
								LAGUKU = tp.c_str();
							}
							else if (counter == std::stoi(LAGU_JAM_7)) {
								LAGUKU = tp.c_str();
							}
							else if (counter == std::stoi(LAGU_JAM_8)) {
								LAGUKU = tp.c_str();
							}
							else if (counter == std::stoi(LAGU_JAM_9)) {
								LAGUKU = tp.c_str();
							}
							else if (counter == std::stoi(LAGU_JAM_10)) {
								LAGUKU = tp.c_str();
							}
							else if (counter == std::stoi(LAGU_JAM_11)) {
								LAGUKU = tp.c_str();
							}
							else if (counter == std::stoi(LAGU_JAM_12)) {
								LAGUKU = tp.c_str();
							}
							else if (counter == std::stoi(LAGU_JAM_13)) {
								LAGUKU = tp.c_str();
							}
							else if (counter == std::stoi(LAGU_JAM_14)) {
								LAGUKU = tp.c_str();
							}
							counter++;
						}
						counter = 0;
					}
					audiofile.close();

					newfile.open("senin.konf", std::ios::in);
					if (newfile.is_open()) {
						std::string tp;
						int counter = 0;
						while (std::getline(newfile, tp)) { //read data from file object and put it into string.
							if (temp_waktu == tp) {
								snprintf(temp_lagu, sizeof(temp_lagu), "open \"%s\" type mpegvideo alias mp3", LAGUKU.c_str());
								mciSendStringA(temp_lagu, NULL, 0, NULL);
								mciSendStringA("play mp3", NULL, 0, NULL);
								mciSendStringA("play mp3", NULL, 0, NULL);
							}
						}
						newfile.close(); //close the file object.
					}
				}
				
				else if (gcnew String(temp_hari.c_str()) == "Tuesday") {
					newfile.open("selasa.konf", std::ios::in); //open a file to perform read operation using file object
					if (newfile.is_open()) {   //checking whether the file is open
						std::string tp;
						int counter = 0;
						while (std::getline(newfile, tp)) { //read data from file object and put it into string.
							if (counter == 1) {
								LAGU_JAM_1 = tp.c_str();
							}
							else if (counter == 3) {
								LAGU_JAM_2 = tp.c_str();
							}
							else if (counter == 5) {
								LAGU_JAM_3 = tp.c_str();
							}
							else if (counter == 7) {
								LAGU_JAM_4 = tp.c_str();
							}
							else if (counter == 9) {
								LAGU_JAM_5 = tp.c_str();
							}
							else if (counter == 11) {
								LAGU_JAM_6 = tp.c_str();
							}
							else if (counter == 13) {
								LAGU_JAM_7 = tp.c_str();
							}
							else if (counter == 15) {
								LAGU_JAM_8 = tp.c_str();
							}
							else if (counter == 17) {
								LAGU_JAM_9 = tp.c_str();
							}
							else if (counter == 19) {
								LAGU_JAM_10 = tp.c_str();
							}
							else if (counter == 21) {
								LAGU_JAM_11 = tp.c_str();
							}
							else if (counter == 23) {
								LAGU_JAM_12 = tp.c_str();
							}
							else if (counter == 25) {
								LAGU_JAM_13 = tp.c_str();
							}
							else if (counter == 27) {
								LAGU_JAM_14 = tp.c_str();
							}
							counter++;
						}
						counter = 0;
					}
					newfile.close();

					audiofile.open("audio.konf", std::ios::in); //open a file to perform read operation using file object
					if (audiofile.is_open()) {   //checking whether the file is open
						std::string tp;
						int counter = 0;
						while (std::getline(audiofile, tp)) { //read data from file object and put it into string.
							if (counter == std::stoi(LAGU_JAM_1)) {
								LAGUKU = tp.c_str();
							}
							else if (counter == std::stoi(LAGU_JAM_2)) {
								LAGUKU = tp.c_str();
							}
							else if (counter == std::stoi(LAGU_JAM_3)) {
								LAGUKU = tp.c_str();
							}
							else if (counter == std::stoi(LAGU_JAM_4)) {
								LAGUKU = tp.c_str();
							}
							else if (counter == std::stoi(LAGU_JAM_5)) {
								LAGUKU = tp.c_str();
							}
							else if (counter == std::stoi(LAGU_JAM_6)) {
								LAGUKU = tp.c_str();
							}
							else if (counter == std::stoi(LAGU_JAM_7)) {
								LAGUKU = tp.c_str();
							}
							else if (counter == std::stoi(LAGU_JAM_8)) {
								LAGUKU = tp.c_str();
							}
							else if (counter == std::stoi(LAGU_JAM_9)) {
								LAGUKU = tp.c_str();
							}
							else if (counter == std::stoi(LAGU_JAM_10)) {
								LAGUKU = tp.c_str();
							}
							else if (counter == std::stoi(LAGU_JAM_11)) {
								LAGUKU = tp.c_str();
							}
							else if (counter == std::stoi(LAGU_JAM_12)) {
								LAGUKU = tp.c_str();
							}
							else if (counter == std::stoi(LAGU_JAM_13)) {
								LAGUKU = tp.c_str();
							}
							else if (counter == std::stoi(LAGU_JAM_14)) {
								LAGUKU = tp.c_str();
							}
							counter++;
						}
						counter = 0;
					}
					audiofile.close();

					newfile.open("selasa.konf", std::ios::in);
					if (newfile.is_open()) {
						std::string tp;
						int counter = 0;
						while (std::getline(newfile, tp)) { //read data from file object and put it into string.
							if (temp_waktu == tp) {
								snprintf(temp_lagu, sizeof(temp_lagu), "open \"%s\" type mpegvideo alias mp3", LAGUKU.c_str());
								mciSendStringA(temp_lagu, NULL, 0, NULL);
								mciSendStringA("play mp3", NULL, 0, NULL);
								mciSendStringA("play mp3", NULL, 0, NULL);
							}
						}
						newfile.close(); //close the file object.
					}
				}
				
				else if (gcnew String(temp_hari.c_str()) == "Wednesday") {
					newfile.open("rabu.konf", std::ios::in); //open a file to perform read operation using file object
					if (newfile.is_open()) {   //checking whether the file is open
						std::string tp;
						int counter = 0;
						while (std::getline(newfile, tp)) { //read data from file object and put it into string.
							if (counter == 1) {
								LAGU_JAM_1 = tp.c_str();
							}
							else if (counter == 3) {
								LAGU_JAM_2 = tp.c_str();
							}
							else if (counter == 5) {
								LAGU_JAM_3 = tp.c_str();
							}
							else if (counter == 7) {
								LAGU_JAM_4 = tp.c_str();
							}
							else if (counter == 9) {
								LAGU_JAM_5 = tp.c_str();
							}
							else if (counter == 11) {
								LAGU_JAM_6 = tp.c_str();
							}
							else if (counter == 13) {
								LAGU_JAM_7 = tp.c_str();
							}
							else if (counter == 15) {
								LAGU_JAM_8 = tp.c_str();
							}
							else if (counter == 17) {
								LAGU_JAM_9 = tp.c_str();
							}
							else if (counter == 19) {
								LAGU_JAM_10 = tp.c_str();
							}
							else if (counter == 21) {
								LAGU_JAM_11 = tp.c_str();
							}
							else if (counter == 23) {
								LAGU_JAM_12 = tp.c_str();
							}
							else if (counter == 25) {
								LAGU_JAM_13 = tp.c_str();
							}
							else if (counter == 27) {
								LAGU_JAM_14 = tp.c_str();
							}
							counter++;
						}
						counter = 0;
					}
					newfile.close();

					audiofile.open("audio.konf", std::ios::in); //open a file to perform read operation using file object
					if (audiofile.is_open()) {   //checking whether the file is open
						std::string tp;
						int counter = 0;
						while (std::getline(audiofile, tp)) { //read data from file object and put it into string.
							if (counter == std::stoi(LAGU_JAM_1)) {
								LAGUKU = tp.c_str();
							}
							else if (counter == std::stoi(LAGU_JAM_2)) {
								LAGUKU = tp.c_str();
							}
							else if (counter == std::stoi(LAGU_JAM_3)) {
								LAGUKU = tp.c_str();
							}
							else if (counter == std::stoi(LAGU_JAM_4)) {
								LAGUKU = tp.c_str();
							}
							else if (counter == std::stoi(LAGU_JAM_5)) {
								LAGUKU = tp.c_str();
							}
							else if (counter == std::stoi(LAGU_JAM_6)) {
								LAGUKU = tp.c_str();
							}
							else if (counter == std::stoi(LAGU_JAM_7)) {
								LAGUKU = tp.c_str();
							}
							else if (counter == std::stoi(LAGU_JAM_8)) {
								LAGUKU = tp.c_str();
							}
							else if (counter == std::stoi(LAGU_JAM_9)) {
								LAGUKU = tp.c_str();
							}
							else if (counter == std::stoi(LAGU_JAM_10)) {
								LAGUKU = tp.c_str();
							}
							else if (counter == std::stoi(LAGU_JAM_11)) {
								LAGUKU = tp.c_str();
							}
							else if (counter == std::stoi(LAGU_JAM_12)) {
								LAGUKU = tp.c_str();
							}
							else if (counter == std::stoi(LAGU_JAM_13)) {
								LAGUKU = tp.c_str();
							}
							else if (counter == std::stoi(LAGU_JAM_14)) {
								LAGUKU = tp.c_str();
							}
							counter++;
						}
						counter = 0;
					}
					audiofile.close();

					newfile.open("rabu.konf", std::ios::in);
					if (newfile.is_open()) {
						std::string tp;
						int counter = 0;
						while (std::getline(newfile, tp)) { //read data from file object and put it into string.
							if (temp_waktu == tp) {
								snprintf(temp_lagu, sizeof(temp_lagu), "open \"%s\" type mpegvideo alias mp3", LAGUKU.c_str());
								mciSendStringA(temp_lagu, NULL, 0, NULL);
								mciSendStringA("play mp3", NULL, 0, NULL);
								mciSendStringA("play mp3", NULL, 0, NULL);
							}
						}
						newfile.close(); //close the file object.
					}
				}
				
				else if (gcnew String(temp_hari.c_str()) == "Thursday") {
					newfile.open("kamis.konf", std::ios::in); //open a file to perform read operation using file object
					if (newfile.is_open()) {   //checking whether the file is open
						std::string tp;
						int counter = 0;
						while (std::getline(newfile, tp)) { //read data from file object and put it into string.
							if (counter == 1) {
								LAGU_JAM_1 = tp.c_str();
							}
							else if (counter == 3) {
								LAGU_JAM_2 = tp.c_str();
							}
							else if (counter == 5) {
								LAGU_JAM_3 = tp.c_str();
							}
							else if (counter == 7) {
								LAGU_JAM_4 = tp.c_str();
							}
							else if (counter == 9) {
								LAGU_JAM_5 = tp.c_str();
							}
							else if (counter == 11) {
								LAGU_JAM_6 = tp.c_str();
							}
							else if (counter == 13) {
								LAGU_JAM_7 = tp.c_str();
							}
							else if (counter == 15) {
								LAGU_JAM_8 = tp.c_str();
							}
							else if (counter == 17) {
								LAGU_JAM_9 = tp.c_str();
							}
							else if (counter == 19) {
								LAGU_JAM_10 = tp.c_str();
							}
							else if (counter == 21) {
								LAGU_JAM_11 = tp.c_str();
							}
							else if (counter == 23) {
								LAGU_JAM_12 = tp.c_str();
							}
							else if (counter == 25) {
								LAGU_JAM_13 = tp.c_str();
							}
							else if (counter == 27) {
								LAGU_JAM_14 = tp.c_str();
							}
							counter++;
						}
						counter = 0;
					}
					newfile.close();

					audiofile.open("audio.konf", std::ios::in); //open a file to perform read operation using file object
					if (audiofile.is_open()) {   //checking whether the file is open
						std::string tp;
						int counter = 0;
						while (std::getline(audiofile, tp)) { //read data from file object and put it into string.
							if (counter == std::stoi(LAGU_JAM_1)) {
								LAGUKU = tp.c_str();
							}
							else if (counter == std::stoi(LAGU_JAM_2)) {
								LAGUKU = tp.c_str();
							}
							else if (counter == std::stoi(LAGU_JAM_3)) {
								LAGUKU = tp.c_str();
							}
							else if (counter == std::stoi(LAGU_JAM_4)) {
								LAGUKU = tp.c_str();
							}
							else if (counter == std::stoi(LAGU_JAM_5)) {
								LAGUKU = tp.c_str();
							}
							else if (counter == std::stoi(LAGU_JAM_6)) {
								LAGUKU = tp.c_str();
							}
							else if (counter == std::stoi(LAGU_JAM_7)) {
								LAGUKU = tp.c_str();
							}
							else if (counter == std::stoi(LAGU_JAM_8)) {
								LAGUKU = tp.c_str();
							}
							else if (counter == std::stoi(LAGU_JAM_9)) {
								LAGUKU = tp.c_str();
							}
							else if (counter == std::stoi(LAGU_JAM_10)) {
								LAGUKU = tp.c_str();
							}
							else if (counter == std::stoi(LAGU_JAM_11)) {
								LAGUKU = tp.c_str();
							}
							else if (counter == std::stoi(LAGU_JAM_12)) {
								LAGUKU = tp.c_str();
							}
							else if (counter == std::stoi(LAGU_JAM_13)) {
								LAGUKU = tp.c_str();
							}
							else if (counter == std::stoi(LAGU_JAM_14)) {
								LAGUKU = tp.c_str();
							}
							counter++;
						}
						counter = 0;
					}
					audiofile.close();

					newfile.open("kamis.konf", std::ios::in);
					if (newfile.is_open()) {
						std::string tp;
						int counter = 0;
						while (std::getline(newfile, tp)) { //read data from file object and put it into string.
							if (temp_waktu == tp) {
								snprintf(temp_lagu, sizeof(temp_lagu), "open \"%s\" type mpegvideo alias mp3", LAGUKU.c_str());
								mciSendStringA(temp_lagu, NULL, 0, NULL);
								mciSendStringA("play mp3", NULL, 0, NULL);
								mciSendStringA("play mp3", NULL, 0, NULL);
							}
						}
						newfile.close(); //close the file object.
					}
				}
				
				else if (gcnew String(temp_hari.c_str()) == "Friday") {
					newfile.open("jumat.konf", std::ios::in); //open a file to perform read operation using file object
					if (newfile.is_open()) {   //checking whether the file is open
						std::string tp;
						int counter = 0;
						while (std::getline(newfile, tp)) { //read data from file object and put it into string.
							if (counter == 1) {
								LAGU_JAM_1 = tp.c_str();
							}
							else if (counter == 3) {
								LAGU_JAM_2 = tp.c_str();
							}
							else if (counter == 5) {
								LAGU_JAM_3 = tp.c_str();
							}
							else if (counter == 7) {
								LAGU_JAM_4 = tp.c_str();
							}
							else if (counter == 9) {
								LAGU_JAM_5 = tp.c_str();
							}
							else if (counter == 11) {
								LAGU_JAM_6 = tp.c_str();
							}
							else if (counter == 13) {
								LAGU_JAM_7 = tp.c_str();
							}
							else if (counter == 15) {
								LAGU_JAM_8 = tp.c_str();
							}
							else if (counter == 17) {
								LAGU_JAM_9 = tp.c_str();
							}
							else if (counter == 19) {
								LAGU_JAM_10 = tp.c_str();
							}
							else if (counter == 21) {
								LAGU_JAM_11 = tp.c_str();
							}
							else if (counter == 23) {
								LAGU_JAM_12 = tp.c_str();
							}
							else if (counter == 25) {
								LAGU_JAM_13 = tp.c_str();
							}
							else if (counter == 27) {
								LAGU_JAM_14 = tp.c_str();
							}
							counter++;
						}
						counter = 0;
					}
					newfile.close();

					audiofile.open("audio.konf", std::ios::in); //open a file to perform read operation using file object
					if (audiofile.is_open()) {   //checking whether the file is open
						std::string tp;
						int counter = 0;
						while (std::getline(audiofile, tp)) { //read data from file object and put it into string.
							if (counter == std::stoi(LAGU_JAM_1)) {
								LAGUKU = tp.c_str();
							}
							else if (counter == std::stoi(LAGU_JAM_2)) {
								LAGUKU = tp.c_str();
							}
							else if (counter == std::stoi(LAGU_JAM_3)) {
								LAGUKU = tp.c_str();
							}
							else if (counter == std::stoi(LAGU_JAM_4)) {
								LAGUKU = tp.c_str();
							}
							else if (counter == std::stoi(LAGU_JAM_5)) {
								LAGUKU = tp.c_str();
							}
							else if (counter == std::stoi(LAGU_JAM_6)) {
								LAGUKU = tp.c_str();
							}
							else if (counter == std::stoi(LAGU_JAM_7)) {
								LAGUKU = tp.c_str();
							}
							else if (counter == std::stoi(LAGU_JAM_8)) {
								LAGUKU = tp.c_str();
							}
							else if (counter == std::stoi(LAGU_JAM_9)) {
								LAGUKU = tp.c_str();
							}
							else if (counter == std::stoi(LAGU_JAM_10)) {
								LAGUKU = tp.c_str();
							}
							else if (counter == std::stoi(LAGU_JAM_11)) {
								LAGUKU = tp.c_str();
							}
							else if (counter == std::stoi(LAGU_JAM_12)) {
								LAGUKU = tp.c_str();
							}
							else if (counter == std::stoi(LAGU_JAM_13)) {
								LAGUKU = tp.c_str();
							}
							else if (counter == std::stoi(LAGU_JAM_14)) {
								LAGUKU = tp.c_str();
							}
							counter++;
						}
						counter = 0;
					}
					audiofile.close();

					newfile.open("jumat.konf", std::ios::in);
					if (newfile.is_open()) {
						std::string tp;
						int counter = 0;
						while (std::getline(newfile, tp)) { //read data from file object and put it into string.
							if (temp_waktu == tp) {
								snprintf(temp_lagu, sizeof(temp_lagu), "open \"%s\" type mpegvideo alias mp3", LAGUKU.c_str());
								mciSendStringA(temp_lagu, NULL, 0, NULL);
								mciSendStringA("play mp3", NULL, 0, NULL);
								mciSendStringA("play mp3", NULL, 0, NULL);
							}
						}
						newfile.close(); //close the file object.
					}
				}
				
				else if (gcnew String(temp_hari.c_str()) == "Saturday") {
					newfile.open("sabtu.konf", std::ios::in); //open a file to perform read operation using file object
					if (newfile.is_open()) {   //checking whether the file is open
						std::string tp;
						int counter = 0;
						while (std::getline(newfile, tp)) { //read data from file object and put it into string.
							if (counter == 1) {
								LAGU_JAM_1 = tp.c_str();
							}
							else if (counter == 3) {
								LAGU_JAM_2 = tp.c_str();
							}
							else if (counter == 5) {
								LAGU_JAM_3 = tp.c_str();
							}
							else if (counter == 7) {
								LAGU_JAM_4 = tp.c_str();
							}
							else if (counter == 9) {
								LAGU_JAM_5 = tp.c_str();
							}
							else if (counter == 11) {
								LAGU_JAM_6 = tp.c_str();
							}
							else if (counter == 13) {
								LAGU_JAM_7 = tp.c_str();
							}
							else if (counter == 15) {
								LAGU_JAM_8 = tp.c_str();
							}
							else if (counter == 17) {
								LAGU_JAM_9 = tp.c_str();
							}
							else if (counter == 19) {
								LAGU_JAM_10 = tp.c_str();
							}
							else if (counter == 21) {
								LAGU_JAM_11 = tp.c_str();
							}
							else if (counter == 23) {
								LAGU_JAM_12 = tp.c_str();
							}
							else if (counter == 25) {
								LAGU_JAM_13 = tp.c_str();
							}
							else if (counter == 27) {
								LAGU_JAM_14 = tp.c_str();
							}
							counter++;
						}
						counter = 0;
					}
					newfile.close();

					audiofile.open("audio.konf", std::ios::in); //open a file to perform read operation using file object
					if (audiofile.is_open()) {   //checking whether the file is open
						std::string tp;
						int counter = 0;
						while (std::getline(audiofile, tp)) { //read data from file object and put it into string.
							if (counter == std::stoi(LAGU_JAM_1)) {
								LAGUKU = tp.c_str();
							}
							else if (counter == std::stoi(LAGU_JAM_2)) {
								LAGUKU = tp.c_str();
							}
							else if (counter == std::stoi(LAGU_JAM_3)) {
								LAGUKU = tp.c_str();
							}
							else if (counter == std::stoi(LAGU_JAM_4)) {
								LAGUKU = tp.c_str();
							}
							else if (counter == std::stoi(LAGU_JAM_5)) {
								LAGUKU = tp.c_str();
							}
							else if (counter == std::stoi(LAGU_JAM_6)) {
								LAGUKU = tp.c_str();
							}
							else if (counter == std::stoi(LAGU_JAM_7)) {
								LAGUKU = tp.c_str();
							}
							else if (counter == std::stoi(LAGU_JAM_8)) {
								LAGUKU = tp.c_str();
							}
							else if (counter == std::stoi(LAGU_JAM_9)) {
								LAGUKU = tp.c_str();
							}
							else if (counter == std::stoi(LAGU_JAM_10)) {
								LAGUKU = tp.c_str();
							}
							else if (counter == std::stoi(LAGU_JAM_11)) {
								LAGUKU = tp.c_str();
							}
							else if (counter == std::stoi(LAGU_JAM_12)) {
								LAGUKU = tp.c_str();
							}
							else if (counter == std::stoi(LAGU_JAM_13)) {
								LAGUKU = tp.c_str();
							}
							else if (counter == std::stoi(LAGU_JAM_14)) {
								LAGUKU = tp.c_str();
							}
							counter++;
						}
						counter = 0;
					}
					audiofile.close();

					newfile.open("sabtu.konf", std::ios::in);
					if (newfile.is_open()) {
						std::string tp;
						int counter = 0;
						while (std::getline(newfile, tp)) { //read data from file object and put it into string.
							if (temp_waktu == tp) {
								snprintf(temp_lagu, sizeof(temp_lagu), "open \"%s\" type mpegvideo alias mp3", LAGUKU.c_str());
								mciSendStringA(temp_lagu, NULL, 0, NULL);
								mciSendStringA("play mp3", NULL, 0, NULL);
								mciSendStringA("play mp3", NULL, 0, NULL);
							}
						}
						newfile.close(); //close the file object.
					}
				}
			}
			else {
				if (UJIAN == 1) {
				
				}
				else if (PUASA == 1) {
				
				}
			}
		}
private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	this->textBox7->Text = "AHAD";
	UJIAN = 0;
	PUASA = 0;
	std::string jadwal_Ku;
	std::fstream newfile;
	newfile.open("ahad.konf", std::ios::in); //open a file to perform read operation using file object
	if (newfile.is_open()) {   //checking whether the file is open
		std::string tp;
		int counter = 0;
		jadwal_Ku += "AHAD" + tp + "\r\n";
		while (std::getline(newfile, tp)) { //read data from file object and put it into string.
			if (counter == 0) {
				jadwal_Ku += "1=>  " + tp  + "\r\n";
			}
			else if (counter == 2) {
				jadwal_Ku += "2=>  " + tp + "\r\n";
			}
			else if (counter == 4) {
				jadwal_Ku += "3=>  " + tp + "\r\n";
			}
			else if (counter == 6) {
				jadwal_Ku += "4=>  " + tp + "\r\n";
			}
			else if (counter == 8) {
				jadwal_Ku += "5=>  " + tp + "\r\n";
			}
			else if (counter == 10) {
				jadwal_Ku += "6=>  " + tp + "\r\n";
			}
			else if (counter == 12) {
				jadwal_Ku += "7=>  " + tp + "\r\n";
			}
			else if (counter == 14) {
				jadwal_Ku += "8=>  " + tp + "\r\n";
			}
			else if (counter == 16) {
				jadwal_Ku += "9=>  " + tp + "\r\n";
			}
			else if (counter == 18) {
				jadwal_Ku += "10=> " + tp +"\r\n";
			}
			else if (counter == 20) {
				jadwal_Ku += "11=> " + tp + "\r\n";
			}
			else if (counter == 22) {
				jadwal_Ku += "12=> " + tp + "\r\n";
			}
			else if (counter == 24) {
				jadwal_Ku += "13=> " + tp + "\r\n";
			}
			else if (counter == 26) {
				jadwal_Ku += "14=> " + tp + "\r\n";
			}
			counter++;
		}
		newfile.close(); //close the file object.
	}
	this->textBox8->Text = gcnew String(jadwal_Ku.c_str());
}
private: System::Void button22_Click(System::Object^  sender, System::EventArgs^  e) {
	mciSendStringA("close mp3", NULL, 0, NULL);
	char temp_lagu[999];
	std::fstream newfile;
	newfile.open("audio.konf", std::ios::in); //open a file to perform read operation using file object
	if (newfile.is_open()) {   //checking whether the file is open
		std::string tp;
		int counter = 0;
		std::string laguku;
		while (std::getline(newfile, tp)) {
			counter++;
			if (counter == 1) {
				laguku = tp.c_str();
			}
		}
		snprintf(temp_lagu, sizeof(temp_lagu), "open \"%s\" type mpegvideo alias mp3", laguku.c_str());
		newfile.close();
	}
	mciSendStringA(temp_lagu, NULL, 0, NULL);
	mciSendStringA("play mp3", NULL, 0, NULL);
	mciSendStringA("play mp3", NULL, 0, NULL);
}
private: System::Void button23_Click(System::Object^  sender, System::EventArgs^  e) {
	mciSendStringA("close mp3", NULL, 0, NULL);
	std::fstream newfile;
	char temp_lagu[999];
	newfile.open("audio.konf", std::ios::in); //open a file to perform read operation using file object
	if (newfile.is_open()) {   //checking whether the file is open
		std::string tp;
		int counter = 0;
		std::string laguku;
		while (std::getline(newfile, tp)) {
			counter++;
			if (counter == 2) {
				laguku = tp.c_str();
			}
		}
		snprintf(temp_lagu, sizeof(temp_lagu), "open \"%s\" type mpegvideo alias mp3", laguku.c_str());
		newfile.close();
	}
	mciSendStringA(temp_lagu, NULL, 0, NULL);
	mciSendStringA("play mp3", NULL, 0, NULL);
	mciSendStringA("play mp3", NULL, 0, NULL);
}
private: System::Void button24_Click(System::Object^  sender, System::EventArgs^  e) {
	mciSendStringA("close mp3", NULL, 0, NULL);
	std::fstream newfile;
	char temp_lagu[999];
	newfile.open("audio.konf", std::ios::in); //open a file to perform read operation using file object
	if (newfile.is_open()) {   //checking whether the file is open
		std::string tp;
		int counter = 0;
		std::string laguku;
		while (std::getline(newfile, tp)) {
			counter++;
			if (counter == 3) {
				laguku = tp.c_str();
			}
		}
		snprintf(temp_lagu, sizeof(temp_lagu), "open \"%s\" type mpegvideo alias mp3", laguku.c_str());
		newfile.close();
	}
	mciSendStringA(temp_lagu, NULL, 0, NULL);
	mciSendStringA("play mp3", NULL, 0, NULL);
	mciSendStringA("play mp3", NULL, 0, NULL);
}
private: System::Void button19_Click(System::Object^  sender, System::EventArgs^  e) {
	mciSendStringA("close mp3", NULL, 0, NULL);
	std::fstream newfile;
	char temp_lagu[999];
	newfile.open("audio.konf", std::ios::in); //open a file to perform read operation using file object
	if (newfile.is_open()) {   //checking whether the file is open
		std::string tp;
		int counter = 0;
		std::string laguku;
		while (std::getline(newfile, tp)) {
			counter++;
			if (counter == 4) {
				laguku = tp.c_str();
			}
		}
		snprintf(temp_lagu, sizeof(temp_lagu), "open \"%s\" type mpegvideo alias mp3", laguku.c_str());
		newfile.close();
	}
	mciSendStringA(temp_lagu, NULL, 0, NULL);
	mciSendStringA("play mp3", NULL, 0, NULL);
	mciSendStringA("play mp3", NULL, 0, NULL);
}
private: System::Void button20_Click(System::Object^  sender, System::EventArgs^  e) {
	mciSendStringA("close mp3", NULL, 0, NULL);
	std::fstream newfile;
	char temp_lagu[999];
	newfile.open("audio.konf", std::ios::in); //open a file to perform read operation using file object
	if (newfile.is_open()) {   //checking whether the file is open
		std::string tp;
		int counter = 0;
		std::string laguku;
		while (std::getline(newfile, tp)) {
			counter++;
			if (counter == 5) {
				laguku = tp.c_str();
			}
		}
		snprintf(temp_lagu, sizeof(temp_lagu), "open \"%s\" type mpegvideo alias mp3", laguku.c_str());
		newfile.close();
	}
	mciSendStringA(temp_lagu, NULL, 0, NULL);
	mciSendStringA("play mp3", NULL, 0, NULL);
	mciSendStringA("play mp3", NULL, 0, NULL);
}
private: System::Void button21_Click(System::Object^  sender, System::EventArgs^  e) {
	mciSendStringA("close mp3", NULL, 0, NULL);
	std::fstream newfile;
	char temp_lagu[999];
	newfile.open("audio.konf", std::ios::in); //open a file to perform read operation using file object
	if (newfile.is_open()) {   //checking whether the file is open
		std::string tp;
		int counter = 0;
		std::string laguku;
		while (std::getline(newfile, tp)) {
			counter++;
			if (counter == 6) {
				laguku = tp.c_str();
			}
		}
		snprintf(temp_lagu, sizeof(temp_lagu), "open \"%s\" type mpegvideo alias mp3", laguku.c_str());
		newfile.close();
	}
	mciSendStringA(temp_lagu, NULL, 0, NULL);
	mciSendStringA("play mp3", NULL, 0, NULL);
	mciSendStringA("play mp3", NULL, 0, NULL);
}
private: System::Void button18_Click(System::Object^  sender, System::EventArgs^  e) {
	mciSendStringA("close mp3", NULL, 0, NULL);
	std::fstream newfile;
	char temp_lagu[999];
	newfile.open("audio.konf", std::ios::in); //open a file to perform read operation using file object
	if (newfile.is_open()) {   //checking whether the file is open
		std::string tp;
		int counter = 0;
		std::string laguku;
		while (std::getline(newfile, tp)) {
			counter++;
			if (counter == 7) {
				laguku = tp.c_str();
			}
		}
		snprintf(temp_lagu, sizeof(temp_lagu), "open \"%s\" type mpegvideo alias mp3", laguku.c_str());
		newfile.close();
	}
	mciSendStringA(temp_lagu, NULL, 0, NULL);
	mciSendStringA("play mp3", NULL, 0, NULL);
	mciSendStringA("play mp3", NULL, 0, NULL);
}
private: System::Void listView1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	
}
private: System::Void button27_Click(System::Object^  sender, System::EventArgs^  e) {
	this->textBox7->Text = "UJIAN";
	UJIAN = 1;
	PUASA = 0;
	std::string jadwal_Ku;
	std::fstream newfile;
	newfile.open("ujian.konf", std::ios::in); //open a file to perform read operation using file object
	if (newfile.is_open()) {   //checking whether the file is open
		std::string tp;
		int counter = 0;
		jadwal_Ku += "UJIAN" + tp + "\r\n";
		while (std::getline(newfile, tp)) { //read data from file object and put it into string.
			if (counter == 0) {
				jadwal_Ku += "1=>  " + tp + "\r\n";
			}
			else if (counter == 2) {
				jadwal_Ku += "2=>  " + tp + "\r\n";
			}
			else if (counter == 4) {
				jadwal_Ku += "3=>  " + tp + "\r\n";
			}
			else if (counter == 6) {
				jadwal_Ku += "4=>  " + tp + "\r\n";
			}
			else if (counter == 8) {
				jadwal_Ku += "5=>  " + tp + "\r\n";
			}
			else if (counter == 10) {
				jadwal_Ku += "6=>  " + tp + "\r\n";
			}
			else if (counter == 12) {
				jadwal_Ku += "7=>  " + tp + "\r\n";
			}
			else if (counter == 14) {
				jadwal_Ku += "8=>  " + tp + "\r\n";
			}
			else if (counter == 16) {
				jadwal_Ku += "9=>  " + tp + "\r\n";
			}
			else if (counter == 18) {
				jadwal_Ku += "10=> " + tp + "\r\n";
			}
			else if (counter == 20) {
				jadwal_Ku += "11=> " + tp + "\r\n";
			}
			else if (counter == 22) {
				jadwal_Ku += "12=> " + tp + "\r\n";
			}
			else if (counter == 24) {
				jadwal_Ku += "13=> " + tp + "\r\n";
			}
			else if (counter == 26) {
				jadwal_Ku += "14=> " + tp + "\r\n";
			}
			counter++;
		}
		newfile.close(); //close the file object.
	}
	this->textBox8->Text = gcnew String(jadwal_Ku.c_str());
}
private: System::Void button26_Click(System::Object^  sender, System::EventArgs^  e) {
	this->textBox7->Text = "PUASA";
	UJIAN = 0;
	PUASA = 1;
	std::string jadwal_Ku;
	std::fstream newfile;
	newfile.open("puasa.konf", std::ios::in); //open a file to perform read operation using file object
	if (newfile.is_open()) {   //checking whether the file is open
		std::string tp;
		int counter = 0;
		jadwal_Ku += "PUASA" + tp + "\r\n";
		while (std::getline(newfile, tp)) { //read data from file object and put it into string.
			if (counter == 0) {
				jadwal_Ku += "1=>  " + tp + "\r\n";
			}
			else if (counter == 2) {
				jadwal_Ku += "2=>  " + tp + "\r\n";
			}
			else if (counter == 4) {
				jadwal_Ku += "3=>  " + tp + "\r\n";
			}
			else if (counter == 6) {
				jadwal_Ku += "4=>  " + tp + "\r\n";
			}
			else if (counter == 8) {
				jadwal_Ku += "5=>  " + tp + "\r\n";
			}
			else if (counter == 10) {
				jadwal_Ku += "6=>  " + tp + "\r\n";
			}
			else if (counter == 12) {
				jadwal_Ku += "7=>  " + tp + "\r\n";
			}
			else if (counter == 14) {
				jadwal_Ku += "8=>  " + tp + "\r\n";
			}
			else if (counter == 16) {
				jadwal_Ku += "9=>  " + tp + "\r\n";
			}
			else if (counter == 18) {
				jadwal_Ku += "10=> " + tp + "\r\n";
			}
			else if (counter == 20) {
				jadwal_Ku += "11=> " + tp + "\r\n";
			}
			else if (counter == 22) {
				jadwal_Ku += "12=> " + tp + "\r\n";
			}
			else if (counter == 24) {
				jadwal_Ku += "13=> " + tp + "\r\n";
			}
			else if (counter == 26) {
				jadwal_Ku += "14=> " + tp + "\r\n";
			}
			counter++;
		}
		newfile.close(); //close the file object.
	}
	this->textBox8->Text = gcnew String(jadwal_Ku.c_str());
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	this->textBox7->Text = "SENIN";
	UJIAN = 0;
	PUASA = 0;
	std::string jadwal_Ku;
	std::fstream newfile;
	newfile.open("senin.konf", std::ios::in); //open a file to perform read operation using file object
	if (newfile.is_open()) {   //checking whether the file is open
		std::string tp;
		int counter = 0;
		jadwal_Ku += "SENIN" + tp + "\r\n";
		while (std::getline(newfile, tp)) { //read data from file object and put it into string.
			if (counter == 0) {
				jadwal_Ku += "1=>  " + tp + "\r\n";
			}
			else if (counter == 2) {
				jadwal_Ku += "2=>  " + tp + "\r\n";
			}
			else if (counter == 4) {
				jadwal_Ku += "3=>  " + tp + "\r\n";
			}
			else if (counter == 6) {
				jadwal_Ku += "4=>  " + tp + "\r\n";
			}
			else if (counter == 8) {
				jadwal_Ku += "5=>  " + tp + "\r\n";
			}
			else if (counter == 10) {
				jadwal_Ku += "6=>  " + tp + "\r\n";
			}
			else if (counter == 12) {
				jadwal_Ku += "7=>  " + tp + "\r\n";
			}
			else if (counter == 14) {
				jadwal_Ku += "8=>  " + tp + "\r\n";
			}
			else if (counter == 16) {
				jadwal_Ku += "9=>  " + tp + "\r\n";
			}
			else if (counter == 18) {
				jadwal_Ku += "10=> " + tp + "\r\n";
			}
			else if (counter == 20) {
				jadwal_Ku += "11=> " + tp + "\r\n";
			}
			else if (counter == 22) {
				jadwal_Ku += "12=> " + tp + "\r\n";
			}
			else if (counter == 24) {
				jadwal_Ku += "13=> " + tp + "\r\n";
			}
			else if (counter == 26) {
				jadwal_Ku += "14=> " + tp + "\r\n";
			}
			counter++;
		}
		newfile.close(); //close the file object.
	}
	this->textBox8->Text = gcnew String(jadwal_Ku.c_str());
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	this->textBox7->Text = "SELASA";
	UJIAN = 0;
	PUASA = 0;
	std::string jadwal_Ku;
	std::fstream newfile;
	newfile.open("selasa.konf", std::ios::in); //open a file to perform read operation using file object
	if (newfile.is_open()) {   //checking whether the file is open
		std::string tp;
		int counter = 0;
		jadwal_Ku += "SELASA" + tp + "\r\n";
		while (std::getline(newfile, tp)) { //read data from file object and put it into string.
			if (counter == 0) {
				jadwal_Ku += "1=>  " + tp + "\r\n";
			}
			else if (counter == 2) {
				jadwal_Ku += "2=>  " + tp + "\r\n";
			}
			else if (counter == 4) {
				jadwal_Ku += "3=>  " + tp + "\r\n";
			}
			else if (counter == 6) {
				jadwal_Ku += "4=>  " + tp + "\r\n";
			}
			else if (counter == 8) {
				jadwal_Ku += "5=>  " + tp + "\r\n";
			}
			else if (counter == 10) {
				jadwal_Ku += "6=>  " + tp + "\r\n";
			}
			else if (counter == 12) {
				jadwal_Ku += "7=>  " + tp + "\r\n";
			}
			else if (counter == 14) {
				jadwal_Ku += "8=>  " + tp + "\r\n";
			}
			else if (counter == 16) {
				jadwal_Ku += "9=>  " + tp + "\r\n";
			}
			else if (counter == 18) {
				jadwal_Ku += "10=> " + tp + "\r\n";
			}
			else if (counter == 20) {
				jadwal_Ku += "11=> " + tp + "\r\n";
			}
			else if (counter == 22) {
				jadwal_Ku += "12=> " + tp + "\r\n";
			}
			else if (counter == 24) {
				jadwal_Ku += "13=> " + tp + "\r\n";
			}
			else if (counter == 26) {
				jadwal_Ku += "14=> " + tp + "\r\n";
			}
			counter++;
		}
		newfile.close(); //close the file object.
	}
	this->textBox8->Text = gcnew String(jadwal_Ku.c_str());
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	this->textBox7->Text = "RABU";
	UJIAN = 0;
	PUASA = 0;
	std::string jadwal_Ku;
	std::fstream newfile;
	newfile.open("rabu.konf", std::ios::in); //open a file to perform read operation using file object
	if (newfile.is_open()) {   //checking whether the file is open
		std::string tp;
		int counter = 0;
		jadwal_Ku += "RABU" + tp + "\r\n";
		while (std::getline(newfile, tp)) { //read data from file object and put it into string.
			if (counter == 0) {
				jadwal_Ku += "1=>  " + tp + "\r\n";
			}
			else if (counter == 2) {
				jadwal_Ku += "2=>  " + tp + "\r\n";
			}
			else if (counter == 4) {
				jadwal_Ku += "3=>  " + tp + "\r\n";
			}
			else if (counter == 6) {
				jadwal_Ku += "4=>  " + tp + "\r\n";
			}
			else if (counter == 8) {
				jadwal_Ku += "5=>  " + tp + "\r\n";
			}
			else if (counter == 10) {
				jadwal_Ku += "6=>  " + tp + "\r\n";
			}
			else if (counter == 12) {
				jadwal_Ku += "7=>  " + tp + "\r\n";
			}
			else if (counter == 14) {
				jadwal_Ku += "8=>  " + tp + "\r\n";
			}
			else if (counter == 16) {
				jadwal_Ku += "9=>  " + tp + "\r\n";
			}
			else if (counter == 18) {
				jadwal_Ku += "10=> " + tp + "\r\n";
			}
			else if (counter == 20) {
				jadwal_Ku += "11=> " + tp + "\r\n";
			}
			else if (counter == 22) {
				jadwal_Ku += "12=> " + tp + "\r\n";
			}
			else if (counter == 24) {
				jadwal_Ku += "13=> " + tp + "\r\n";
			}
			else if (counter == 26) {
				jadwal_Ku += "14=> " + tp + "\r\n";
			}
			counter++;
		}
		newfile.close(); //close the file object.
	}
	this->textBox8->Text = gcnew String(jadwal_Ku.c_str());
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	this->textBox7->Text ="KAMIS";
	UJIAN = 0;
	PUASA = 0;
	std::string jadwal_Ku;
	std::fstream newfile;
	newfile.open("kamis.konf", std::ios::in); //open a file to perform read operation using file object
	if (newfile.is_open()) {   //checking whether the file is open
		std::string tp;
		int counter = 0;
		jadwal_Ku += "KAMIS" + tp + "\r\n";
		while (std::getline(newfile, tp)) { //read data from file object and put it into string.
			if (counter == 0) {
				jadwal_Ku += "1=>  " + tp + "\r\n";
			}
			else if (counter == 2) {
				jadwal_Ku += "2=>  " + tp + "\r\n";
			}
			else if (counter == 4) {
				jadwal_Ku += "3=>  " + tp + "\r\n";
			}
			else if (counter == 6) {
				jadwal_Ku += "4=>  " + tp + "\r\n";
			}
			else if (counter == 8) {
				jadwal_Ku += "5=>  " + tp + "\r\n";
			}
			else if (counter == 10) {
				jadwal_Ku += "6=>  " + tp + "\r\n";
			}
			else if (counter == 12) {
				jadwal_Ku += "7=>  " + tp + "\r\n";
			}
			else if (counter == 14) {
				jadwal_Ku += "8=>  " + tp + "\r\n";
			}
			else if (counter == 16) {
				jadwal_Ku += "9=>  " + tp + "\r\n";
			}
			else if (counter == 18) {
				jadwal_Ku += "10=> " + tp + "\r\n";
			}
			else if (counter == 20) {
				jadwal_Ku += "11=> " + tp + "\r\n";
			}
			else if (counter == 22) {
				jadwal_Ku += "12=> " + tp + "\r\n";
			}
			else if (counter == 24) {
				jadwal_Ku += "13=> " + tp + "\r\n";
			}
			else if (counter == 26) {
				jadwal_Ku += "14=> " + tp + "\r\n";
			}
			counter++;
		}
		newfile.close(); //close the file object.
	}
	this->textBox8->Text = gcnew String(jadwal_Ku.c_str());
}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
	this->textBox7->Text = "JUMAT";
	UJIAN = 0;
	PUASA = 0;
	std::string jadwal_Ku;
	std::fstream newfile;
	newfile.open("jumat.konf", std::ios::in); //open a file to perform read operation using file object
	if (newfile.is_open()) {   //checking whether the file is open
		std::string tp;
		int counter = 0;
		jadwal_Ku += "JUMAT" + tp + "\r\n";
		while (std::getline(newfile, tp)) { //read data from file object and put it into string.
			if (counter == 0) {
				jadwal_Ku += "1=>  " + tp + "\r\n";
			}
			else if (counter == 2) {
				jadwal_Ku += "2=>  " + tp + "\r\n";
			}
			else if (counter == 4) {
				jadwal_Ku += "3=>  " + tp + "\r\n";
			}
			else if (counter == 6) {
				jadwal_Ku += "4=>  " + tp + "\r\n";
			}
			else if (counter == 8) {
				jadwal_Ku += "5=>  " + tp + "\r\n";
			}
			else if (counter == 10) {
				jadwal_Ku += "6=>  " + tp + "\r\n";
			}
			else if (counter == 12) {
				jadwal_Ku += "7=>  " + tp + "\r\n";
			}
			else if (counter == 14) {
				jadwal_Ku += "8=>  " + tp + "\r\n";
			}
			else if (counter == 16) {
				jadwal_Ku += "9=>  " + tp + "\r\n";
			}
			else if (counter == 18) {
				jadwal_Ku += "10=> " + tp + "\r\n";
			}
			else if (counter == 20) {
				jadwal_Ku += "11=> " + tp + "\r\n";
			}
			else if (counter == 22) {
				jadwal_Ku += "12=> " + tp + "\r\n";
			}
			else if (counter == 24) {
				jadwal_Ku += "13=> " + tp + "\r\n";
			}
			else if (counter == 26) {
				jadwal_Ku += "14=> " + tp + "\r\n";
			}
			counter++;
		}
		newfile.close(); //close the file object.
	}
	this->textBox8->Text = gcnew String(jadwal_Ku.c_str());
}
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
	this->textBox7->Text = "SABTU";
	UJIAN = 0;
	PUASA = 0;
	std::string jadwal_Ku;
	std::fstream newfile;
	newfile.open("sabtu.konf", std::ios::in); //open a file to perform read operation using file object
	if (newfile.is_open()) {   //checking whether the file is open
		std::string tp;
		int counter = 0;
		jadwal_Ku += "SABTU" + tp + "\r\n";
		while (std::getline(newfile, tp)) { //read data from file object and put it into string.
			if (counter == 0) {
				jadwal_Ku += "1=>  " + tp + "\r\n";
			}
			else if (counter == 2) {
				jadwal_Ku += "2=>  " + tp + "\r\n";
			}
			else if (counter == 4) {
				jadwal_Ku += "3=>  " + tp + "\r\n";
			}
			else if (counter == 6) {
				jadwal_Ku += "4=>  " + tp + "\r\n";
			}
			else if (counter == 8) {
				jadwal_Ku += "5=>  " + tp + "\r\n";
			}
			else if (counter == 10) {
				jadwal_Ku += "6=>  " + tp + "\r\n";
			}
			else if (counter == 12) {
				jadwal_Ku += "7=>  " + tp + "\r\n";
			}
			else if (counter == 14) {
				jadwal_Ku += "8=>  " + tp + "\r\n";
			}
			else if (counter == 16) {
				jadwal_Ku += "9=>  " + tp + "\r\n";
			}
			else if (counter == 18) {
				jadwal_Ku += "10=> " + tp + "\r\n";
			}
			else if (counter == 20) {
				jadwal_Ku += "11=> " + tp + "\r\n";
			}
			else if (counter == 22) {
				jadwal_Ku += "12=> " + tp + "\r\n";
			}
			else if (counter == 24) {
				jadwal_Ku += "13=> " + tp + "\r\n";
			}
			else if (counter == 26) {
				jadwal_Ku += "14=> " + tp + "\r\n";
			}
			counter++;
		}
		newfile.close(); //close the file object.
	}
	this->textBox8->Text = gcnew String(jadwal_Ku.c_str());
}
private: System::Void button25_Click(System::Object^  sender, System::EventArgs^  e) {
	mciSendStringA("close mp3", NULL, 0, NULL);
}
private: System::Void button28_Click(System::Object^  sender, System::EventArgs^  e) {
	MyForm1 ^ myForm1 = gcnew MyForm1;
	myForm1->Show();
}
private: System::Void textBox7_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox5_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button17_Click(System::Object^  sender, System::EventArgs^  e) {
	mciSendStringA("close mp3", NULL, 0, NULL);
	std::fstream newfile;
	char temp_lagu[999];
	newfile.open("audio.konf", std::ios::in); //open a file to perform read operation using file object
	if (newfile.is_open()) {   //checking whether the file is open
		std::string tp;
		int counter = 0;
		std::string laguku;
		while (std::getline(newfile, tp)) {
			counter++;
			if (counter == 8) {
				laguku = tp.c_str();
			}
		}
		snprintf(temp_lagu, sizeof(temp_lagu), "open \"%s\" type mpegvideo alias mp3", laguku.c_str());
		newfile.close();
	}
	mciSendStringA(temp_lagu, NULL, 0, NULL);
	mciSendStringA("play mp3", NULL, 0, NULL);
	mciSendStringA("play mp3", NULL, 0, NULL);
}
private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) {
	mciSendStringA("close mp3", NULL, 0, NULL);
	std::fstream newfile;
	char temp_lagu[999];
	newfile.open("audio.konf", std::ios::in); //open a file to perform read operation using file object
	if (newfile.is_open()) {   //checking whether the file is open
		std::string tp;
		int counter = 0;
		std::string laguku;
		while (std::getline(newfile, tp)) {
			counter++;
			if (counter == 9) {
				laguku = tp.c_str();
			}
		}
		snprintf(temp_lagu, sizeof(temp_lagu), "open \"%s\" type mpegvideo alias mp3", laguku.c_str());
		newfile.close();
	}
	mciSendStringA(temp_lagu, NULL, 0, NULL);
	mciSendStringA("play mp3", NULL, 0, NULL);
	mciSendStringA("play mp3", NULL, 0, NULL);
}
private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) {
	mciSendStringA("close mp3", NULL, 0, NULL);
	std::fstream newfile;
	char temp_lagu[999];
	newfile.open("audio.konf", std::ios::in); //open a file to perform read operation using file object
	if (newfile.is_open()) {   //checking whether the file is open
		std::string tp;
		int counter = 0;
		std::string laguku;
		while (std::getline(newfile, tp)) {
			counter++;
			if (counter == 10) {
				laguku = tp.c_str();
			}
		}
		snprintf(temp_lagu, sizeof(temp_lagu), "open \"%s\" type mpegvideo alias mp3", laguku.c_str());
		newfile.close();
	}
	mciSendStringA(temp_lagu, NULL, 0, NULL);
	mciSendStringA("play mp3", NULL, 0, NULL);
	mciSendStringA("play mp3", NULL, 0, NULL);
}
private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
	mciSendStringA("close mp3", NULL, 0, NULL);
	std::fstream newfile;
	char temp_lagu[999];
	newfile.open("audio.konf", std::ios::in); //open a file to perform read operation using file object
	if (newfile.is_open()) {   //checking whether the file is open
		std::string tp;
		int counter = 0;
		std::string laguku;
		while (std::getline(newfile, tp)) {
			counter++;
			if (counter == 11) {
				laguku = tp.c_str();
			}
		}
		snprintf(temp_lagu, sizeof(temp_lagu), "open \"%s\" type mpegvideo alias mp3", laguku.c_str());
		newfile.close();
	}
	mciSendStringA(temp_lagu, NULL, 0, NULL);
	mciSendStringA("play mp3", NULL, 0, NULL);
	mciSendStringA("play mp3", NULL, 0, NULL);
}
private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
	mciSendStringA("close mp3", NULL, 0, NULL);
	std::fstream newfile;
	char temp_lagu[999];
	newfile.open("audio.konf", std::ios::in); //open a file to perform read operation using file object
	if (newfile.is_open()) {   //checking whether the file is open
		std::string tp;
		int counter = 0;
		std::string laguku;
		while (std::getline(newfile, tp)) {
			counter++;
			if (counter == 12) {
				laguku = tp.c_str();
			}
		}
		snprintf(temp_lagu, sizeof(temp_lagu), "open \"%s\" type mpegvideo alias mp3", laguku.c_str());
		newfile.close();
	}
	mciSendStringA(temp_lagu, NULL, 0, NULL);
	mciSendStringA("play mp3", NULL, 0, NULL);
	mciSendStringA("play mp3", NULL, 0, NULL);
}
private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
	mciSendStringA("close mp3", NULL, 0, NULL);
	std::fstream newfile;
	char temp_lagu[999];
	newfile.open("audio.konf", std::ios::in); //open a file to perform read operation using file object
	if (newfile.is_open()) {   //checking whether the file is open
		std::string tp;
		int counter = 0;
		std::string laguku;
		while (std::getline(newfile, tp)) {
			counter++;
			if (counter == 13) {
				laguku = tp.c_str();
			}
		}
		snprintf(temp_lagu, sizeof(temp_lagu), "open \"%s\" type mpegvideo alias mp3", laguku.c_str());
		newfile.close();
	}
	mciSendStringA(temp_lagu, NULL, 0, NULL);
	mciSendStringA("play mp3", NULL, 0, NULL);
	mciSendStringA("play mp3", NULL, 0, NULL);
}
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
	mciSendStringA("close mp3", NULL, 0, NULL);
	std::fstream newfile;
	char temp_lagu[999];
	newfile.open("audio.konf", std::ios::in); //open a file to perform read operation using file object
	if (newfile.is_open()) {   //checking whether the file is open
		std::string tp;
		int counter = 0;
		std::string laguku;
		while (std::getline(newfile, tp)) {
			counter++;
			if (counter == 14) {
				laguku = tp.c_str();
			}
		}
		snprintf(temp_lagu, sizeof(temp_lagu), "open \"%s\" type mpegvideo alias mp3", laguku.c_str());
		newfile.close();
	}
	mciSendStringA(temp_lagu, NULL, 0, NULL);
	mciSendStringA("play mp3", NULL, 0, NULL);
	mciSendStringA("play mp3", NULL, 0, NULL);
}
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
	mciSendStringA("close mp3", NULL, 0, NULL);
	std::fstream newfile;
	char temp_lagu[999];
	newfile.open("audio.konf", std::ios::in); //open a file to perform read operation using file object
	if (newfile.is_open()) {   //checking whether the file is open
		std::string tp;
		int counter = 0;
		std::string laguku;
		while (std::getline(newfile, tp)) {
			counter++;
			if (counter == 15) {
				laguku = tp.c_str();
			}
		}
		snprintf(temp_lagu, sizeof(temp_lagu), "open \"%s\" type mpegvideo alias mp3", laguku.c_str());
		newfile.close();
	}
	mciSendStringA(temp_lagu, NULL, 0, NULL);
	mciSendStringA("play mp3", NULL, 0, NULL);
	mciSendStringA("play mp3", NULL, 0, NULL);
}
private: System::Void textBox8_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
};
}
