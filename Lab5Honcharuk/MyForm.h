#pragma once
#include<ctime>
#include <random>
#include <cmath>
#include <cstdlib>
#include <iostream>
int a[100]; int n, i, j, dop, min;

namespace Lab5Honcharuk {

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
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(51, 166);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(196, 43);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Заповнити масив";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(51, 236);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(196, 48);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Сортувати";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(48, 80);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(257, 16);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Введіть кількість елементів  масиву n=";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(320, 77);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(274, 22);
			this->textBox1->TabIndex = 3;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(51, 313);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(196, 51);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Сума квадратів елементів";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(320, 176);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(274, 22);
			this->textBox2->TabIndex = 5;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(320, 262);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(274, 22);
			this->textBox3->TabIndex = 6;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(320, 342);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(274, 22);
			this->textBox4->TabIndex = 7;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(804, 417);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	srand(time(NULL));
	n = Convert::ToDouble(textBox1->Text);
	textBox2->Clear();
		for (i = 0; i < n; i++)
		{
		a[i] = rand() % 50;
		textBox2->AppendText(a[i] + " ");
		}
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	for (i = 0; i < n; i++) 
	{
		for (j = 0; j < n - 1; j++) {
			for (int i = 0; i < n - j - 1; i++) {
				if (a[i] < a[i + 1]) {
					dop = a[i + 1];
					a[i + 1] = a[i];
					a[i] = dop;
				}
			}
		}
	}
	textBox3->Clear();
	for (i = 0; i < n; i++)
	{
		textBox3->AppendText(Convert::ToString(a[i])+ " ");
	};
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	 int s = 0;
	textBox4->Clear();
	for (i = 0; i < n; i++)
	{
		s = s + pow(a[i], 2);
	}

	textBox4->AppendText(Convert::ToString(s));
	}
};
}

