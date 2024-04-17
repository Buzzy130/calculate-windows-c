#pragma once
#include "Fraction.h"
#include "Fraction2.h"
#include <regex>

Fraction2 memory(0, 1);//под память глобальная переменная

namespace calculate {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::Button^ button24;
	private: System::Windows::Forms::Button^ button25;
	private: System::Windows::Forms::Button^ button26;
	private: System::Windows::Forms::Button^ button27;
	private: System::Windows::Forms::Button^ button28;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button29;
	private: System::Windows::Forms::Button^ button30;
	private: System::Windows::Forms::Button^ button31;


	protected:




	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(3, 581);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(91, 72);
			this->button1->TabIndex = 0;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button2->Location = System::Drawing::Point(100, 582);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(91, 72);
			this->button2->TabIndex = 1;
			this->button2->Text = L"0";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::BtnNumberClicked);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Location = System::Drawing::Point(197, 582);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(91, 72);
			this->button3->TabIndex = 2;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Plum;
			this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.BackgroundImage")));
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->ImageKey = L"(отсутствует)";
			this->button4->Location = System::Drawing::Point(294, 582);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(91, 72);
			this->button4->TabIndex = 3;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.BackgroundImage")));
			this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button5->Location = System::Drawing::Point(3, 503);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(91, 72);
			this->button5->TabIndex = 4;
			this->button5->Text = L"1";
			this->button5->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::BtnNumberClicked);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.BackgroundImage")));
			this->button6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button6->Location = System::Drawing::Point(100, 503);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(91, 72);
			this->button6->TabIndex = 5;
			this->button6->Text = L"2";
			this->button6->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::BtnNumberClicked);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button7.BackgroundImage")));
			this->button7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button7->Location = System::Drawing::Point(197, 503);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(91, 72);
			this->button7->TabIndex = 6;
			this->button7->Text = L"3";
			this->button7->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::BtnNumberClicked);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->button8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button8.BackgroundImage")));
			this->button8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Location = System::Drawing::Point(294, 503);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(91, 72);
			this->button8->TabIndex = 7;
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button9.BackgroundImage")));
			this->button9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button9->Location = System::Drawing::Point(3, 425);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(91, 72);
			this->button9->TabIndex = 8;
			this->button9->Text = L"4";
			this->button9->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::BtnNumberClicked);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button10->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button10.BackgroundImage")));
			this->button10->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button10->Location = System::Drawing::Point(100, 425);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(91, 72);
			this->button10->TabIndex = 9;
			this->button10->Text = L"5";
			this->button10->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::BtnNumberClicked);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button11->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button11.BackgroundImage")));
			this->button11->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button11->Location = System::Drawing::Point(197, 425);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(91, 72);
			this->button11->TabIndex = 10;
			this->button11->Text = L"6";
			this->button11->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::BtnNumberClicked);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->button12->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button12.BackgroundImage")));
			this->button12->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button12->Location = System::Drawing::Point(294, 425);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(91, 72);
			this->button12->TabIndex = 11;
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->button13->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button13.BackgroundImage")));
			this->button13->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button13->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->button13->Location = System::Drawing::Point(3, 347);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(91, 72);
			this->button13->TabIndex = 12;
			this->button13->Text = L"7";
			this->button13->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::BtnNumberClicked);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->button14->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button14.BackgroundImage")));
			this->button14->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button14->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->button14->Location = System::Drawing::Point(100, 347);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(91, 72);
			this->button14->TabIndex = 13;
			this->button14->Text = L"8";
			this->button14->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::BtnNumberClicked);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->button15->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button15.BackgroundImage")));
			this->button15->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button15->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->button15->Location = System::Drawing::Point(197, 347);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(91, 72);
			this->button15->TabIndex = 14;
			this->button15->Text = L"9";
			this->button15->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::BtnNumberClicked);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->button16->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button16.BackgroundImage")));
			this->button16->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button16->Location = System::Drawing::Point(294, 347);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(91, 72);
			this->button16->TabIndex = 15;
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->button17->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button17->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button17->Font = (gcnew System::Drawing::Font(L"Arial Black", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button17->ForeColor = System::Drawing::Color::White;
			this->button17->Location = System::Drawing::Point(3, 269);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(91, 72);
			this->button17->TabIndex = 16;
			this->button17->Text = L"|";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->button18->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button18.BackgroundImage")));
			this->button18->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button18->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button18->Location = System::Drawing::Point(100, 269);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(91, 72);
			this->button18->TabIndex = 17;
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->button19->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button19.BackgroundImage")));
			this->button19->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button19->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button19->ForeColor = System::Drawing::Color::White;
			this->button19->Location = System::Drawing::Point(197, 269);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(91, 72);
			this->button19->TabIndex = 18;
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->button20->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button20.BackgroundImage")));
			this->button20->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button20->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button20->Location = System::Drawing::Point(294, 269);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(91, 72);
			this->button20->TabIndex = 19;
			this->button20->UseVisualStyleBackColor = false;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::button20_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(10)),
				static_cast<System::Int32>(static_cast<System::Byte>(10)));
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->ForeColor = System::Drawing::Color::White;
			this->textBox1->Location = System::Drawing::Point(3, 149);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(382, 70);
			this->textBox1->TabIndex = 20;
			this->textBox1->Text = L"0";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox1_KeyPress);
			// 
			// button21
			// 
			this->button21->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(10)),
				static_cast<System::Int32>(static_cast<System::Byte>(10)));
			this->button21->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button21.BackgroundImage")));
			this->button21->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button21->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button21->Location = System::Drawing::Point(352, 3);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(40, 23);
			this->button21->TabIndex = 21;
			this->button21->UseVisualStyleBackColor = false;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm::button21_Click);
			// 
			// button22
			// 
			this->button22->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(10)),
				static_cast<System::Int32>(static_cast<System::Byte>(10)));
			this->button22->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button22.BackgroundImage")));
			this->button22->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button22->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button22->Location = System::Drawing::Point(313, 3);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(40, 23);
			this->button22->TabIndex = 22;
			this->button22->UseVisualStyleBackColor = false;
			this->button22->Click += gcnew System::EventHandler(this, &MyForm::button22_Click);
			// 
			// button23
			// 
			this->button23->BackColor = System::Drawing::Color::Black;
			this->button23->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button23.BackgroundImage")));
			this->button23->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button23->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button23->Location = System::Drawing::Point(274, 3);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(40, 23);
			this->button23->TabIndex = 23;
			this->button23->UseVisualStyleBackColor = false;
			this->button23->Click += gcnew System::EventHandler(this, &MyForm::button23_Click);
			// 
			// button24
			// 
			this->button24->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(10)),
				static_cast<System::Int32>(static_cast<System::Byte>(10)));
			this->button24->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button24->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button24->ForeColor = System::Drawing::Color::White;
			this->button24->Location = System::Drawing::Point(31, 240);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(40, 23);
			this->button24->TabIndex = 24;
			this->button24->Text = L"MC";
			this->button24->UseVisualStyleBackColor = false;
			this->button24->Click += gcnew System::EventHandler(this, &MyForm::button24_Click);
			// 
			// button25
			// 
			this->button25->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(10)),
				static_cast<System::Int32>(static_cast<System::Byte>(10)));
			this->button25->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button25.BackgroundImage")));
			this->button25->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button25->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button25->ForeColor = System::Drawing::Color::White;
			this->button25->Location = System::Drawing::Point(100, 240);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(40, 23);
			this->button25->TabIndex = 25;
			this->button25->UseVisualStyleBackColor = false;
			this->button25->Click += gcnew System::EventHandler(this, &MyForm::button25_Click);
			// 
			// button26
			// 
			this->button26->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(10)),
				static_cast<System::Int32>(static_cast<System::Byte>(10)));
			this->button26->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button26->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button26->ForeColor = System::Drawing::Color::White;
			this->button26->Location = System::Drawing::Point(170, 240);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(40, 23);
			this->button26->TabIndex = 26;
			this->button26->Text = L"CE";
			this->button26->UseVisualStyleBackColor = false;
			this->button26->Click += gcnew System::EventHandler(this, &MyForm::button26_Click);
			// 
			// button27
			// 
			this->button27->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(10)),
				static_cast<System::Int32>(static_cast<System::Byte>(10)));
			this->button27->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button27->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button27->ForeColor = System::Drawing::Color::White;
			this->button27->Location = System::Drawing::Point(239, 240);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(40, 23);
			this->button27->TabIndex = 27;
			this->button27->Text = L"C";
			this->button27->UseVisualStyleBackColor = false;
			this->button27->Click += gcnew System::EventHandler(this, &MyForm::button27_Click);
			// 
			// button28
			// 
			this->button28->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(10)),
				static_cast<System::Int32>(static_cast<System::Byte>(10)));
			this->button28->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button28->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button28->ForeColor = System::Drawing::Color::White;
			this->button28->Location = System::Drawing::Point(313, 240);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(40, 23);
			this->button28->TabIndex = 28;
			this->button28->Text = L"MS";
			this->button28->UseVisualStyleBackColor = false;
			this->button28->Click += gcnew System::EventHandler(this, &MyForm::button28_Click);
			// 
			// label1
			// 
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(104, 40);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(139, 42);
			this->label1->TabIndex = 29;
			this->label1->Text = L"0";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopRight;
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label2
			// 
			this->label2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(0, 40);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(112, 42);
			this->label2->TabIndex = 30;
			this->label2->Text = L"Память:";
			this->label2->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// button29
			// 
			this->button29->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(10)),
				static_cast<System::Int32>(static_cast<System::Byte>(10)));
			this->button29->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button29->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button29->ForeColor = System::Drawing::Color::White;
			this->button29->Location = System::Drawing::Point(170, 85);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(40, 23);
			this->button29->TabIndex = 31;
			this->button29->Text = L"M-";
			this->button29->UseVisualStyleBackColor = false;
			this->button29->Click += gcnew System::EventHandler(this, &MyForm::button29_Click);
			// 
			// button30
			// 
			this->button30->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(10)),
				static_cast<System::Int32>(static_cast<System::Byte>(10)));
			this->button30->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button30->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button30->ForeColor = System::Drawing::Color::White;
			this->button30->Location = System::Drawing::Point(203, 85);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(40, 23);
			this->button30->TabIndex = 32;
			this->button30->Text = L"M+";
			this->button30->UseVisualStyleBackColor = false;
			this->button30->Click += gcnew System::EventHandler(this, &MyForm::button30_Click);
			// 
			// button31
			// 
			this->button31->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(10)),
				static_cast<System::Int32>(static_cast<System::Byte>(10)));
			this->button31->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button31->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button31->ForeColor = System::Drawing::Color::White;
			this->button31->Location = System::Drawing::Point(239, 85);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(40, 23);
			this->button31->TabIndex = 33;
			this->button31->Text = L"MV";
			this->button31->UseVisualStyleBackColor = false;
			this->button31->Click += gcnew System::EventHandler(this, &MyForm::button31_Click);
			// 
			// MyForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->AutoSize = true;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(10)),
				static_cast<System::Int32>(static_cast<System::Byte>(10)));
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(390, 659);
			this->Controls->Add(this->button31);
			this->Controls->Add(this->button30);
			this->Controls->Add(this->button29);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button28);
			this->Controls->Add(this->button27);
			this->Controls->Add(this->button26);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->textBox1);
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
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->DoubleBuffered = true;
			this->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei Light", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Калькулятор";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		/*int GCD(int a, int b) {
			if (b == 0) {
				return a;
			}
			else {
				return GCD(b, a % b);
			}
		}*/

private: System::Void textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	// Проверяем, является ли нажатый символ цифрой, Backspace или "|"
	if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 8 && e->KeyChar != '|') {
		// Если символ не является цифрой, Backspace или "|", отменяем его ввод
		e->Handled = true;
	}
}

	private: System::Void BtnNumberClicked(System::Object^ sender, System::EventArgs^ e) {

		Button^ button = safe_cast<Button^>(sender);
		//this->textBox1->Text = button->Text;
		if (this->textBox1->Text == "0")
			this->textBox1->Text = button->Text;
		else
			this->textBox1->Text = this->textBox1->Text + button->Text;
	}

public: System :: String^ Out(String^ textBoxContent)
{
	// Разбиваем строку на отдельные дроби с учетом всех операторов: +, -, /, *
	array<String^>^ parts = textBoxContent->Split(gcnew array<Char>{'+', '-', '/', '*'});

	Fraction fraction1(0, 1);
	Fraction fraction2(0, 1);
	Fraction result(0, 1); // Начальное значение результата

	int i = 0;
	for each (String ^ part in parts) {
		array<String^>^ fractionParts = part->Split('|'); // Разбиваем каждую дробь по знаку '|'

		if (fractionParts->Length == 2 ) {
			if (i == 0) {
				fraction1 = Fraction(Int32::Parse(fractionParts[0]), Int32::Parse(fractionParts[1]));
			}
			else if (i == 1) {
				fraction2 = Fraction(Int32::Parse(fractionParts[0]), Int32::Parse(fractionParts[1]));
			}
			i++;
		}
		else {
			MessageBox::Show("Некорректный формат дроби. Ожидается 'числитель|знаменатель'");
		}
	}

	// Выполняем операцию в зависимости от знака
	if (textBoxContent->Contains("+")) {
		result = fraction1 + fraction2;
	}
	else if (textBoxContent->Contains("-")) {
		result = fraction1 - fraction2;
	}
	else if (textBoxContent->Contains("*")) {
		result = fraction1 * fraction2;
	}
	else if (textBoxContent->Contains("/")) {
		result = fraction1 / fraction2;
	}

	// Находим наибольший общий делитель (НОД) числителя и знаменателя
	//int gcd = GCD(result.getNumerator(), result.getDenominator());

	// Сокращаем дробь, разделяя числитель и знаменатель на НОД
	//result.setNumerator(result.getNumerator() / gcd);
	//result.setDenominator(result.getDenominator() / gcd);

	// Преобразуем числитель и знаменатель в строку и выводим результат в textBox1
	String^ resultString = result.getNumerator().ToString() + "|" + result.getDenominator().ToString();
	return resultString;
}




	private: System::Void customizeDesign()
	{

	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}



	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	}

	private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
		int index = this->textBox1->Text->IndexOf("|");
		int index2 = this->textBox1->Text->IndexOf("/");
		if (index != -1 && index + 1 < this->textBox1->Text->Length && this->textBox1->Text[index + 1] == '0' ||
			index2 != -1 && index2 + 1 < this->textBox1->Text->Length && this->textBox1->Text[index2 + 1] == '0')
		{
			// Символ "0" найден после знака "|"
			MessageBox::Show("На 0 делить нельзя");
		}
		else
		{
			String^ textBoxContent = this->textBox1->Text;
			if (textBoxContent->Contains("+") || textBoxContent->Contains("-") || textBoxContent->Contains("*") || textBoxContent->Contains("/"))
			{
				String^ resultString = Out(textBoxContent);
				this->textBox1->Text = resultString + "/";
			}
			else
			{
				this->textBox1->Text = this->textBox1->Text + "/";
			}
		}
	}
	private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {//корень
			System::String^ text = textBox1->Text;

			// Подсчитываем количество вхождений символа "|"
			int count = 0;
			for (int i = 0; i < text->Length; i++) {
				if (text[i] == '|') {
					count++;
				}
			}

			// Проверяем условие на единственное вхождение символа "|"
			if (count == 1) {
				int index = this->textBox1->Text->IndexOf("|");
				if (index != -1 && index + 1 < this->textBox1->Text->Length && this->textBox1->Text[index + 1] == '0')
				{
					MessageBox::Show("На 0 делить нельзя");
				}
				else
				{
					String^ textBoxContent = this->textBox1->Text;
					if (textBoxContent->Contains("+") || textBoxContent->Contains("-") || textBoxContent->Contains("*") || textBoxContent->Contains("/"))
					{
						MessageBox::Show("Число должно быть формата: Числитель|Знаменатель");
					}
					else
					{
						//выполнить действие с корнем
						Fraction fraction1(0, 1);
						array<String^>^ fractionParts = textBoxContent->Split('|'); // Разбиваем каждую дробь по знаку '|'
						fraction1 = Fraction(Int32::Parse(fractionParts[0]), Int32::Parse(fractionParts[1]));
						fraction1 = fraction1.squareRoot();
						String^ resultString = fraction1.getNumerator().ToString() + "|" + fraction1.getDenominator().ToString();
						textBox1->Text = resultString;

					}
				}

			}
			else {
				MessageBox::Show("Число должно быть формата: Числитель|Знаменатель");
			}
	}
	private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {//квадрат
		System::String^ text = textBox1->Text;

		// Подсчитываем количество вхождений символа "|"
		int count = 0;
		for (int i = 0; i < text->Length; i++) {
			if (text[i] == '|') {
				count++;
			}
		}

		// Проверяем условие на единственное вхождение символа "|"
		if (count == 1) {
			int index = this->textBox1->Text->IndexOf("|");
			if (index != -1 && index + 1 < this->textBox1->Text->Length && this->textBox1->Text[index + 1] == '0')
			{
				MessageBox::Show("На 0 делить нельзя");
			}
			else
			{
				String^ textBoxContent = this->textBox1->Text;
				if (textBoxContent->Contains("+") || textBoxContent->Contains("-") || textBoxContent->Contains("*") || textBoxContent->Contains("/"))
				{
					MessageBox::Show("Число должно быть формата: Числитель|Знаменатель");
				}
				else
				{
					//выполнить действие с корнем
					Fraction fraction1(0, 1);
					array<String^>^ fractionParts = textBoxContent->Split('|'); // Разбиваем каждую дробь по знаку '|'
					fraction1 = Fraction(Int32::Parse(fractionParts[0]), Int32::Parse(fractionParts[1]));
					fraction1 = fraction1.square();
					String^ resultString = fraction1.getNumerator().ToString() + "|" + fraction1.getDenominator().ToString();
					textBox1->Text = resultString;

				}
			}

		}
		else {
			MessageBox::Show("Число должно быть формата: Числитель|Знаменатель");
		}
	}
	private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
		this->textBox1->Text = this->textBox1->Text + "|";
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("В данной версии калькулятора . не доступна ");
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		int index = this->textBox1->Text->IndexOf("|");
		int index2 = this->textBox1->Text->IndexOf("/");
		if (index != -1 && index + 1 < this->textBox1->Text->Length && this->textBox1->Text[index + 1] == '0' ||
			index2 != -1 && index2 + 1 < this->textBox1->Text->Length && this->textBox1->Text[index2 + 1] == '0')
		{
			// Символ "0" найден после знака "|"
			MessageBox::Show("На 0 делить нельзя");
		}
		else
		{
			String^ textBoxContent = this->textBox1->Text;
			if (textBoxContent->Substring(1)->Contains("+") || textBoxContent->Substring(1)->Contains("-") || textBoxContent->Substring(1)->Contains("*") || textBoxContent->Substring(1)->Contains("/"))
			{
				String^ resultString = Out(textBoxContent);
				this->textBox1->Text = resultString + "+";
			}
			else
			{
				this->textBox1->Text = this->textBox1->Text + "+";
			}
		}

	}
	private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
		int index = this->textBox1->Text->IndexOf("|");
		int index2 = this->textBox1->Text->IndexOf("/");
		if (index != -1 && index + 1 < this->textBox1->Text->Length && this->textBox1->Text[index + 1] == '0' ||
			index2 != -1 && index2 + 1 < this->textBox1->Text->Length && this->textBox1->Text[index2 + 1] == '0')
		{
			// Символ "0" найден после знака "|"
			MessageBox::Show("На 0 делить нельзя");
		}
		else
		{
			String^ textBoxContent = this->textBox1->Text;
			if (textBoxContent->Contains("+") || textBoxContent->Contains("-") || textBoxContent->Contains("*") || textBoxContent->Contains("/"))
			{
				String^ resultString = Out(textBoxContent);
				this->textBox1->Text = resultString + "-";
			}
			else
			{
				this->textBox1->Text = this->textBox1->Text + "-";
			}
		}
	}
	private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
		int index = this->textBox1->Text->IndexOf("|");
		int index2 = this->textBox1->Text->IndexOf("/");
		if (index != -1 && index + 1 < this->textBox1->Text->Length && this->textBox1->Text[index + 1] == '0' ||
			index2 != -1 && index2 + 1 < this->textBox1->Text->Length && this->textBox1->Text[index2 + 1] == '0')
		{
			// Символ "0" найден после знака "|"
			MessageBox::Show("На 0 делить нельзя");
		}
		else
		{
			String^ textBoxContent = this->textBox1->Text;
			if (textBoxContent->Contains("+") || textBoxContent->Contains("-") || textBoxContent->Contains("*") || textBoxContent->Contains("/"))
			{
				String^ resultString = Out(textBoxContent);
				this->textBox1->Text = resultString + "*";
			}
			else
			{
				this->textBox1->Text = this->textBox1->Text + "*";
			}
		}
	}
	private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void button22_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->WindowState == System::Windows::Forms::FormWindowState::Normal) {
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
		}
		else {
			this->WindowState = System::Windows::Forms::FormWindowState::Normal;
		}
	}
	
private: System::Void button23_Click(System::Object^ sender, System::EventArgs^ e) {
	this->WindowState = System::Windows::Forms::FormWindowState::Minimized;
}
private: System::Void button26_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ text = textBox1->Text;

	// Находим позицию последнего знака операции
	int lastOperatorIndex = -1;
	for (int i = text->Length - 1; i >= 0; i--) {
		if (text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/') {
			lastOperatorIndex = i;
			break;
		}
	}

	// Удаляем все символы после последнего знака операции
	if (lastOperatorIndex != -1) {
		textBox1->Text = text->Substring(0, lastOperatorIndex + 1);
	}
	if (this->textBox1->Text != "") {
		int length = textBox1->Text->Length;
		textBox1->Text = textBox1->Text->Remove(textBox1->Text->Length - 1, 1);
	}
}
private: System::Void button27_Click(System::Object^ sender, System::EventArgs^ e) {
	this->textBox1->Text = "";
	}
private: System::Void button25_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->textBox1->Text != "") {
		int length = textBox1->Text->Length;
		textBox1->Text = textBox1->Text->Remove(textBox1->Text->Length - 1, 1);
}
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->textBox1->Text->Contains("+"))
	{
		this->textBox1->Text = this->textBox1->Text->Replace("+", "-");
	}
	else if (this->textBox1->Text->Contains("-"))
	{
		this->textBox1->Text = this->textBox1->Text->Replace("-", "+");
	}
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	int index = this->textBox1->Text->IndexOf("|");
	int index2 = this->textBox1->Text->IndexOf("/");
	if (index != -1 && index + 1 < this->textBox1->Text->Length && this->textBox1->Text[index + 1] == '0' || 
		index2 != -1 && index2 + 1 < this->textBox1->Text->Length && this->textBox1->Text[index2 + 1] == '0')
	{
		// Символ "0" найден после знака "|"
		MessageBox::Show("На 0 делить нельзя");
	}
	else
	{
		String^ resultString = Out(this->textBox1->Text);

		this->textBox1->Text = resultString;
	}
}
private: System::Void button28_Click(System::Object^ sender, System::EventArgs^ e) {//вставить в память

	System::String^ text = textBox1->Text;

	// Подсчитываем количество вхождений символа "|"
	int count = 0;
	for (int i = 0; i < text->Length; i++) {
		if (text[i] == '|') {
			count++;
		}
	}

	// Проверяем условие на единственное вхождение символа "|"
	if (count == 1) {
		int index = this->textBox1->Text->IndexOf("|");
		if (index != -1 && index + 1 < this->textBox1->Text->Length && this->textBox1->Text[index + 1] == '0')
		{
			MessageBox::Show("Числа 0 не должно быть в знаменателе");
		}
		else
		{
			String^ textBoxContent = this->textBox1->Text;
			if (textBoxContent->Contains("+") || textBoxContent->Contains("-") || textBoxContent->Contains("*") || textBoxContent->Contains("/"))
			{
				MessageBox::Show("Число должно быть формата: Числитель|Знаменатель для занесения в память");
			}
			else
			{
				//выполнить действие с корнем
				array<String^>^ fractionParts = textBoxContent->Split('|'); // Разбиваем каждую дробь по знаку '|'
				memory = Fraction2(Int32::Parse(fractionParts[0]), Int32::Parse(fractionParts[1]));
				label1->Text = textBox1->Text;
			}
		}

	}
	else {
		MessageBox::Show("Число должно быть формата: Числитель|Знаменатель для занесения в память");
	}
			
		
}
private: System::Void button24_Click(System::Object^ sender, System::EventArgs^ e) {
	label1->Text = "0";
	memory = (0, 1);
}
private: System::Void button30_Click(System::Object^ sender, System::EventArgs^ e) {//+ память
	System::String^ text = textBox1->Text;

	// Подсчитываем количество вхождений символа "|"
	int count = 0;
	for (int i = 0; i < text->Length; i++) {
		if (text[i] == '|') {
			count++;
		}
	}

	// Проверяем условие на единственное вхождение символа "|"
	if (count == 1) {
		int index = this->textBox1->Text->IndexOf("|");
		if (index != -1 && index + 1 < this->textBox1->Text->Length && this->textBox1->Text[index + 1] == '0')
		{
			MessageBox::Show("Числа 0 не должно быть в знаменателе");
		}
		else
		{
			String^ textBoxContent = this->textBox1->Text;
			if (textBoxContent->Contains("+") || textBoxContent->Contains("-") || textBoxContent->Contains("*") || textBoxContent->Contains("/"))
			{
				MessageBox::Show("Число должно быть формата: Числитель|Знаменатель для выполнения операции");
			}
			else
			{
				//выполнить действие с корнем
				array<String^>^ fractionParts = textBoxContent->Split('|'); // Разбиваем каждую дробь по знаку '|'
				Fraction2 fraction2 = Fraction2(Int32::Parse(fractionParts[0]), Int32::Parse(fractionParts[1]));
				memory = memory + fraction2;

				// Находим наибольший общий делитель (НОД) числителя и знаменателя
				//int gcd = GCD(memory.getNumerator(), memory.getDenominator());

				// Сокращаем дробь, разделяя числитель и знаменатель на НОД
				//memory.setNumerator(memory.getNumerator() / gcd);
				//memory.setDenominator(memory.getDenominator() / gcd);

				String^ resultString = memory.getNumerator().ToString() + "|" + memory.getDenominator().ToString();
				label1->Text = resultString;
			}
		}

	}
	else {
		MessageBox::Show("Число должно быть формата: Числитель|Знаменатель для выполнения операции");
	}
}
private: System::Void button29_Click(System::Object^ sender, System::EventArgs^ e) {//минус память
	System::String^ text = textBox1->Text;

	// Подсчитываем количество вхождений символа "|"
	int count = 0;
	for (int i = 0; i < text->Length; i++) {
		if (text[i] == '|') {
			count++;
		}
	}

	// Проверяем условие на единственное вхождение символа "|"
	if (count == 1) {
		int index = this->textBox1->Text->IndexOf("|");
		if (index != -1 && index + 1 < this->textBox1->Text->Length && this->textBox1->Text[index + 1] == '0')
		{
			MessageBox::Show("Числа 0 не должно быть в знаменателе");
		}
		else
		{
			String^ textBoxContent = this->textBox1->Text;
			if (textBoxContent->Contains("+") || textBoxContent->Contains("-") || textBoxContent->Contains("*") || textBoxContent->Contains("/"))
			{
				MessageBox::Show("Число должно быть формата: Числитель|Знаменатель для выполнения операции");
			}
			else
			{
				//выполнить действие с корнем
				array<String^>^ fractionParts = textBoxContent->Split('|'); // Разбиваем каждую дробь по знаку '|'
				Fraction2 fraction2 = Fraction2(Int32::Parse(fractionParts[0]), Int32::Parse(fractionParts[1]));
				memory = memory - fraction2;

				// Находим наибольший общий делитель (НОД) числителя и знаменателя
				//int gcd = GCD(memory.getNumerator(), memory.getDenominator());

				// Сокращаем дробь, разделяя числитель и знаменатель на НОД
				//memory.setNumerator(memory.getNumerator() / gcd);
				//memory.setDenominator(memory.getDenominator() / gcd);

				String^ resultString = memory.getNumerator().ToString() + "|" + memory.getDenominator().ToString();
				label1->Text = resultString;
			}
		}

	}
	else {
		MessageBox::Show("Число должно быть формата: Числитель|Знаменатель для выполнения операции");
	}
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button31_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "") {
		MessageBox::Show("Поле не должно быть пустым!");
		return;
	}

	// Проверка последнего символа на оператор
	String^ text = textBox1->Text;
	char lastChar = text[text->Length - 1];

	if (lastChar == '+' || lastChar == '-' || lastChar == '*' || lastChar == '/') {
		// Последний символ является оператором
		// Можно продолжать выполнение операций
		this->textBox1->Text = this->textBox1->Text + label1->Text;
	}
	else {
		MessageBox::Show("Последний символ должен быть оператором (+, -, *, /)!");
		return;
	}
}
};
}
