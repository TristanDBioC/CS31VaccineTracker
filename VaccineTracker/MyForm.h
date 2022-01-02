#pragma once

namespace VaccineTracker {

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
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Label^ label1;




	private: System::Windows::Forms::LinkLabel^ linkLabel2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::LinkLabel^ linkLabel1;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::LinkLabel^ linkLabel3;
	private: System::Windows::Forms::Button^ button2;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::TextBox^ textBox5;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->linkLabel2 = (gcnew System::Windows::Forms::LinkLabel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->linkLabel3 = (gcnew System::Windows::Forms::LinkLabel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel8->SuspendLayout();
			this->panel7->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel6->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Controls->Add(this->linkLabel2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->linkLabel1);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(777, 94);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(408, 506);
			this->panel1->TabIndex = 0;
			this->panel1->Click += gcnew System::EventHandler(this, &MyForm::otherclick2);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Lavender;
			this->panel3->Controls->Add(this->textBox2);
			this->panel3->Location = System::Drawing::Point(27, 209);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(353, 60);
			this->panel3->TabIndex = 9;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::Lavender;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->ForeColor = System::Drawing::Color::DarkSlateBlue;
			this->textBox2->Location = System::Drawing::Point(14, 16);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(325, 27);
			this->textBox2->TabIndex = 1;
			this->textBox2->Text = L"Password";
			this->textBox2->UseSystemPasswordChar = true;
			this->textBox2->Click += gcnew System::EventHandler(this, &MyForm::textBox2_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Lavender;
			this->panel2->Controls->Add(this->textBox1);
			this->panel2->Location = System::Drawing::Point(27, 126);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(353, 60);
			this->panel2->TabIndex = 8;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::Lavender;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::Color::DarkSlateBlue;
			this->textBox1->Location = System::Drawing::Point(14, 17);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(325, 27);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"Username";
			this->textBox1->Click += gcnew System::EventHandler(this, &MyForm::textBox1_Click);
			// 
			// linkLabel2
			// 
			this->linkLabel2->AutoSize = true;
			this->linkLabel2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel2->LinkColor = System::Drawing::Color::White;
			this->linkLabel2->Location = System::Drawing::Point(23, 445);
			this->linkLabel2->Name = L"linkLabel2";
			this->linkLabel2->Size = System::Drawing::Size(72, 23);
			this->linkLabel2->TabIndex = 7;
			this->linkLabel2->TabStop = true;
			this->linkLabel2->Text = L"Register";
			this->linkLabel2->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm::linkLabel2_LinkClicked);
			this->linkLabel2->Click += gcnew System::EventHandler(this, &MyForm::otherclick);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(27, 360);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(145, 51);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Sign In";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::otherclick);
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->ForeColor = System::Drawing::Color::DarkSlateBlue;
			this->linkLabel1->LinkColor = System::Drawing::Color::DarkSlateBlue;
			this->linkLabel1->Location = System::Drawing::Point(24, 287);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(116, 16);
			this->linkLabel1->TabIndex = 5;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Forgot Password\?";
			this->linkLabel1->Click += gcnew System::EventHandler(this, &MyForm::otherclick);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::DarkSlateBlue;
			this->label1->Location = System::Drawing::Point(18, 17);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(139, 50);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Sign In";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::otherclick);
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::Transparent;
			this->panel4->Controls->Add(this->panel8);
			this->panel4->Controls->Add(this->panel7);
			this->panel4->Controls->Add(this->panel5);
			this->panel4->Controls->Add(this->panel6);
			this->panel4->Controls->Add(this->linkLabel3);
			this->panel4->Controls->Add(this->button2);
			this->panel4->Controls->Add(this->label2);
			this->panel4->Location = System::Drawing::Point(777, 94);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(408, 506);
			this->panel4->TabIndex = 1;
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::Color::Lavender;
			this->panel8->Controls->Add(this->textBox6);
			this->panel8->Location = System::Drawing::Point(27, 319);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(353, 60);
			this->panel8->TabIndex = 11;
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::Color::Lavender;
			this->textBox6->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox6->ForeColor = System::Drawing::Color::DarkSlateBlue;
			this->textBox6->Location = System::Drawing::Point(14, 16);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(325, 27);
			this->textBox6->TabIndex = 1;
			this->textBox6->Text = L"Confirm Password";
			this->textBox6->Click += gcnew System::EventHandler(this, &MyForm::textBox6_Click);
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::Lavender;
			this->panel7->Controls->Add(this->textBox5);
			this->panel7->Location = System::Drawing::Point(27, 253);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(353, 60);
			this->panel7->TabIndex = 10;
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::Color::Lavender;
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->ForeColor = System::Drawing::Color::DarkSlateBlue;
			this->textBox5->Location = System::Drawing::Point(14, 16);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(325, 27);
			this->textBox5->TabIndex = 1;
			this->textBox5->Text = L"Password";
			this->textBox5->Click += gcnew System::EventHandler(this, &MyForm::textBox5_Click);
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::Lavender;
			this->panel5->Controls->Add(this->textBox3);
			this->panel5->Location = System::Drawing::Point(27, 187);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(353, 60);
			this->panel5->TabIndex = 9;
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::Lavender;
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->ForeColor = System::Drawing::Color::DarkSlateBlue;
			this->textBox3->Location = System::Drawing::Point(14, 16);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(325, 27);
			this->textBox3->TabIndex = 1;
			this->textBox3->Text = L"Username";
			this->textBox3->Click += gcnew System::EventHandler(this, &MyForm::textBox3_Click);
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::Lavender;
			this->panel6->Controls->Add(this->textBox4);
			this->panel6->Location = System::Drawing::Point(27, 104);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(353, 60);
			this->panel6->TabIndex = 8;
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::Lavender;
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->ForeColor = System::Drawing::Color::DarkSlateBlue;
			this->textBox4->Location = System::Drawing::Point(14, 17);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(325, 27);
			this->textBox4->TabIndex = 0;
			this->textBox4->Text = L"Email";
			this->textBox4->Click += gcnew System::EventHandler(this, &MyForm::textBox4_Click);
			// 
			// linkLabel3
			// 
			this->linkLabel3->AutoSize = true;
			this->linkLabel3->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel3->LinkColor = System::Drawing::Color::White;
			this->linkLabel3->Location = System::Drawing::Point(334, 454);
			this->linkLabel3->Name = L"linkLabel3";
			this->linkLabel3->Size = System::Drawing::Size(46, 23);
			this->linkLabel3->TabIndex = 7;
			this->linkLabel3->TabStop = true;
			this->linkLabel3->Text = L"Back";
			this->linkLabel3->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm::linkLabel3_LinkClicked);
			this->linkLabel3->Click += gcnew System::EventHandler(this, &MyForm::otherclick2);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(27, 426);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(145, 51);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Sign Up";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::otherclick2);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::DarkSlateBlue;
			this->label2->Location = System::Drawing::Point(18, 17);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(154, 50);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Sign Up";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::otherclick2);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1240, 700);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->Click += gcnew System::EventHandler(this, &MyForm::otherclick2);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel8->ResumeLayout(false);
			this->panel8->PerformLayout();
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}

	   //Sign In Page

private: System::Void textBox1_Click(System::Object^ sender, System::EventArgs^ e) {

	if (textBox1->Text == "Username")
	{
		textBox1->Text = "";
	}

	if (textBox2->Text == "")
	{
		textBox2->Text = "Password";
	}
}
private: System::Void textBox2_Click(System::Object^ sender, System::EventArgs^ e) {

	if (textBox2->Text == "Password")
	{
		textBox2->Text = "";
	}

	if (textBox1->Text == "")
	{
		textBox1->Text = "Username";
	}
}

private: System::Void otherclick(System::Object^ sender, System::EventArgs^ e) {


	if (textBox1->Text == "")
	{
		textBox1->Text = "Username";
	}

	if (textBox2->Text == "")
	{
		textBox2->Text = "Password";
	}
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void linkLabel2_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {

	panel1->Visible = false;
	panel4->Visible = true;
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {

	this->panel1->BringToFront();
}
private: System::Void linkLabel3_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {

	this->panel1->Visible = true;
}

	   //Register Page

private: System::Void textBox4_Click(System::Object^ sender, System::EventArgs^ e) {

	if (textBox4->Text == "Email")
	{
		textBox4->Text = "";
	}
	if (textBox3->Text == "")
	{
		textBox3->Text = "Username";
	}
	if (textBox5->Text == "")
	{
		textBox5->Text = "Password";
	}
	if (textBox6->Text == "")
	{
		textBox6->Text = "Confirm Password";
	}
}
private: System::Void textBox3_Click(System::Object^ sender, System::EventArgs^ e) {

	if (textBox3->Text == "Username")
	{
		textBox3->Text = "";
	}
	if (textBox4->Text == "")
	{
		textBox4->Text = "Email";
	}
	if (textBox5->Text == "")
	{
		textBox5->Text = "Password";
	}
	if (textBox6->Text == "")
	{
		textBox6->Text = "Confirm Password";
	}

}
private: System::Void textBox5_Click(System::Object^ sender, System::EventArgs^ e) {

	if (textBox5->Text == "Password")
	{
		textBox5->Text = "";
	}
	if (textBox3->Text == "")
	{
		textBox3->Text = "Username";
	}
	if (textBox4->Text == "")
	{
		textBox4->Text = "Email";
	}
	if (textBox6->Text == "")
	{
		textBox6->Text = "Confirm Password";
	}
}
private: System::Void textBox6_Click(System::Object^ sender, System::EventArgs^ e) {

	if (textBox6->Text == "Confirm Password")
	{
		textBox6->Text = "";
	}
	if (textBox5->Text == "")
	{
		textBox5->Text = "Password";
	}
	if (textBox3->Text == "")
	{
		textBox3->Text = "Username";
	}
	if (textBox4->Text == "")
	{
		textBox4->Text = "Email";
	}
}
private: System::Void otherclick2(System::Object^ sender, System::EventArgs^ e) {

	if (textBox4->Text == "")
	{
		textBox4->Text = "Email";
	}
	if (textBox3->Text == "")
	{
		textBox3->Text = "Username";
	}
	if (textBox5->Text == "")
	{
		textBox5->Text = "Password";
	}
	if (textBox6->Text == "")
	{
		textBox6->Text = "Confirm Password";
	}
}
};
}
