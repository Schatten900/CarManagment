#pragma once
#include "User.h"

namespace CarManagment {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Data::SqlClient;
	using namespace System::Drawing;

	/// <summary>
	/// Sumário para Login
	/// </summary>
	public ref class Login : public System::Windows::Forms::Form
	{
	public:
		Login(void)
		{
			InitializeComponent();
			//
			//TODO: Adicione o código do construtor aqui
			//
		}

	protected:
		/// <summary>
		/// Limpar os recursos que estão sendo usados.
		/// </summary>
		~Login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel5;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::TextBox^ EmailText;

	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::TextBox^ PasswordText;

	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Button^ loginButtom;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::LinkLabel^ linkLabel1;
	private: System::Windows::Forms::Button^ button1;
	public: User^ user = nullptr;




	private:
		/// <summary>
		/// Variável de designer necessária.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necessário para suporte ao Designer - não modifique 
		/// o conteúdo deste método com o editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Login::typeid));
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->EmailText = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->PasswordText = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->loginButtom = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel5->SuspendLayout();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::Blue;
			this->panel5->Controls->Add(this->label1);
			this->panel5->ForeColor = System::Drawing::Color::White;
			this->panel5->Location = System::Drawing::Point(-4, -2);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(367, 69);
			this->panel5->TabIndex = 5;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Rockwell", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(135, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(91, 33);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Login";
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::White;
			this->panel4->Controls->Add(this->EmailText);
			this->panel4->Controls->Add(this->pictureBox4);
			this->panel4->Location = System::Drawing::Point(51, 126);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(249, 33);
			this->panel4->TabIndex = 2;
			// 
			// EmailText
			// 
			this->EmailText->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->EmailText->Location = System::Drawing::Point(39, 10);
			this->EmailText->Name = L"EmailText";
			this->EmailText->Size = System::Drawing::Size(205, 13);
			this->EmailText->TabIndex = 2;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(0, 0);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(34, 33);
			this->pictureBox4->TabIndex = 0;
			this->pictureBox4->TabStop = false;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::White;
			this->panel2->Controls->Add(this->PasswordText);
			this->panel2->Controls->Add(this->pictureBox2);
			this->panel2->Location = System::Drawing::Point(51, 201);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(249, 33);
			this->panel2->TabIndex = 3;
			// 
			// PasswordText
			// 
			this->PasswordText->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->PasswordText->Location = System::Drawing::Point(39, 10);
			this->PasswordText->Name = L"PasswordText";
			this->PasswordText->Size = System::Drawing::Size(205, 13);
			this->PasswordText->TabIndex = 3;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(0, 0);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(34, 33);
			this->pictureBox2->TabIndex = 0;
			this->pictureBox2->TabStop = false;
			// 
			// loginButtom
			// 
			this->loginButtom->BackColor = System::Drawing::Color::Blue;
			this->loginButtom->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->loginButtom->Font = (gcnew System::Drawing::Font(L"Rockwell", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->loginButtom->ForeColor = System::Drawing::Color::White;
			this->loginButtom->Location = System::Drawing::Point(49, 251);
			this->loginButtom->Name = L"loginButtom";
			this->loginButtom->Size = System::Drawing::Size(251, 32);
			this->loginButtom->TabIndex = 4;
			this->loginButtom->Text = L"Login";
			this->loginButtom->UseVisualStyleBackColor = false;
			this->loginButtom->Click += gcnew System::EventHandler(this, &Login::loginButtom_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Rockwell", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(48, 182);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(63, 16);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Password";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Rockwell", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(48, 107);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(44, 16);
			this->label3->TabIndex = 10;
			this->label3->Text = L"E-mail";
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel1->Location = System::Drawing::Point(96, 336);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(159, 18);
			this->linkLabel1->TabIndex = 11;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Doesn\'t have account\?";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Login::linkLabel1_LinkClicked);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::SpringGreen;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Rockwell", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(49, 289);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(251, 32);
			this->button1->TabIndex = 12;
			this->button1->Text = L"Enter as admin";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ClientSize = System::Drawing::Size(362, 385);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->loginButtom);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel5);
			this->Name = L"Login";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Login";
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void loginButtom_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		String^ email = EmailText->Text;
		String ^ password = PasswordText->Text;

		if (email->Length == 0 || password->Length == 0)
		{
			MessageBox::Show("Have empty fields!", "Fail", MessageBoxButtons::OK);
			return;
		}
		try
		{
			String^ sqlString = "Data Source = GAMER\\SQLEXPRESS; Initial Catalog = CarManagment; Integrated Security = True;";
			SqlConnection^ sqlconn = gcnew SqlConnection(sqlString);
			sqlconn->Open();

			String^ Query = "SELECT * FROM Usuario WHERE Email = @email and Pass_word = @password";
			SqlCommand^ command = gcnew SqlCommand(Query, sqlconn);

			command->Parameters->AddWithValue("@email", email);
			command->Parameters->AddWithValue("@password", password);
			SqlDataReader^ reader = command->ExecuteReader();
			while (reader->Read())
			{
				user->Username = reader->GetString(0);
				user->Email = reader->GetString(1);
				user->Password = reader->GetString(2);
				user->coins = reader->GetInt32(3);
				this->Close();
			}
		}
		catch(Exception^e)
		{
			MessageBox::Show("Fail to Login!", "Fail", MessageBoxButtons::OK);
			return;
		}
	}
public: bool SwitchToRegister = false;
private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) 
{
	SwitchToRegister = true;
	this->Close();
}
};
}
