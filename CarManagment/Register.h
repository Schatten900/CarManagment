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
	/// Sumário para Register
	/// </summary>
	public ref class Register : public System::Windows::Forms::Form
	{
	public:
		Register(void)
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
		~Register()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::Button^ RegisterButtom;
	private: System::Windows::Forms::TextBox^ UserText;
	private: System::Windows::Forms::TextBox^ PasswordText;
	private: System::Windows::Forms::TextBox^ ConfirmPassText;
	public: User^ user = nullptr;


	private: System::Windows::Forms::TextBox^ EmailText;

	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::LinkLabel^ linkLabel1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ PasswordInfo;

	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Register::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->UserText = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->PasswordText = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->ConfirmPassText = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->EmailText = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->RegisterButtom = (gcnew System::Windows::Forms::Button());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->PasswordInfo = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->panel5->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->Controls->Add(this->UserText);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Location = System::Drawing::Point(55, 92);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(249, 33);
			this->panel1->TabIndex = 0;
			// 
			// UserText
			// 
			this->UserText->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->UserText->Location = System::Drawing::Point(39, 10);
			this->UserText->Name = L"UserText";
			this->UserText->Size = System::Drawing::Size(205, 13);
			this->UserText->TabIndex = 1;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(34, 33);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::White;
			this->panel2->Controls->Add(this->label6);
			this->panel2->Controls->Add(this->PasswordText);
			this->panel2->Controls->Add(this->pictureBox2);
			this->panel2->Location = System::Drawing::Point(55, 215);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(249, 33);
			this->panel2->TabIndex = 1;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Rockwell", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Black;
			this->label6->Location = System::Drawing::Point(226, 10);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(18, 19);
			this->label6->TabIndex = 4;
			this->label6->Text = L"\?";
			this->label6->MouseEnter += gcnew System::EventHandler(this, &Register::label6_MouseEnter);
			this->label6->MouseLeave += gcnew System::EventHandler(this, &Register::label6_MouseLeave);
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
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::White;
			this->panel3->Controls->Add(this->ConfirmPassText);
			this->panel3->Controls->Add(this->pictureBox3);
			this->panel3->Location = System::Drawing::Point(55, 270);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(249, 33);
			this->panel3->TabIndex = 2;
			// 
			// ConfirmPassText
			// 
			this->ConfirmPassText->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->ConfirmPassText->Location = System::Drawing::Point(39, 10);
			this->ConfirmPassText->Name = L"ConfirmPassText";
			this->ConfirmPassText->Size = System::Drawing::Size(205, 13);
			this->ConfirmPassText->TabIndex = 4;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(0, 0);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(34, 33);
			this->pictureBox3->TabIndex = 0;
			this->pictureBox3->TabStop = false;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::White;
			this->panel4->Controls->Add(this->EmailText);
			this->panel4->Controls->Add(this->pictureBox4);
			this->panel4->Location = System::Drawing::Point(55, 153);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(249, 33);
			this->panel4->TabIndex = 1;
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
			// RegisterButtom
			// 
			this->RegisterButtom->BackColor = System::Drawing::Color::Blue;
			this->RegisterButtom->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->RegisterButtom->Font = (gcnew System::Drawing::Font(L"Rockwell", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RegisterButtom->ForeColor = System::Drawing::Color::White;
			this->RegisterButtom->Location = System::Drawing::Point(118, 323);
			this->RegisterButtom->Name = L"RegisterButtom";
			this->RegisterButtom->Size = System::Drawing::Size(126, 32);
			this->RegisterButtom->TabIndex = 3;
			this->RegisterButtom->Text = L"Register";
			this->RegisterButtom->UseVisualStyleBackColor = false;
			this->RegisterButtom->Click += gcnew System::EventHandler(this, &Register::RegisterButtom_Click);
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::Blue;
			this->panel5->Controls->Add(this->label1);
			this->panel5->ForeColor = System::Drawing::Color::White;
			this->panel5->Location = System::Drawing::Point(-10, -2);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(380, 64);
			this->panel5->TabIndex = 4;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Rockwell", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(126, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(128, 33);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Register";
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel1->Location = System::Drawing::Point(102, 358);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(156, 18);
			this->linkLabel1->TabIndex = 5;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Already have account\?";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Register::linkLabel1_LinkClicked);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Rockwell", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(52, 65);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(66, 16);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Username";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Rockwell", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(52, 134);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(44, 16);
			this->label3->TabIndex = 7;
			this->label3->Text = L"E-mail";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Rockwell", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(52, 196);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(63, 16);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Password";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Rockwell", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(52, 251);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(114, 16);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Confirm password";
			// 
			// PasswordInfo
			// 
			this->PasswordInfo->AutoSize = true;
			this->PasswordInfo->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->PasswordInfo->Font = (gcnew System::Drawing::Font(L"Rockwell", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PasswordInfo->ForeColor = System::Drawing::Color::Red;
			this->PasswordInfo->Location = System::Drawing::Point(130, 196);
			this->PasswordInfo->Name = L"PasswordInfo";
			this->PasswordInfo->Size = System::Drawing::Size(0, 14);
			this->PasswordInfo->TabIndex = 10;
			// 
			// Register
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ClientSize = System::Drawing::Size(362, 385);
			this->Controls->Add(this->PasswordInfo);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->RegisterButtom);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"Register";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Register";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void RegisterButtom_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		String^ username = UserText->Text;
		String^ email = EmailText->Text;
		String^ password = PasswordText->Text;
		String^ confirmpassword = ConfirmPassText->Text;
		int coins{ 0 };

		if (password != confirmpassword)
		{
			MessageBox::Show("password must be equal", "Fail", MessageBoxButtons::OK);
			return;
		}
		if (username->Length == 0|| email->Length == 0 || password->Length == 0 || confirmpassword->Length == 0)
		{
			MessageBox::Show("There are empty fields", "Fail", MessageBoxButtons::OK);
			return;
		}
		if (!checkEmail(email))
		{
			MessageBox::Show("The e-mail is not available", "Fail", MessageBoxButtons::OK);
			return;
		}
		if (!checkPassword(password))
		{
			MessageBox::Show("The password is weak!", "Fail", MessageBoxButtons::OK);
			return;
		}

		try
		{
			String^ stringConn = "Data Source=GAMER\\SQLEXPRESS;Initial Catalog=CarManagment;Integrated Security=True;";
			SqlConnection^ sqlconn = gcnew SqlConnection(stringConn);
			sqlconn->Open();
			String^ Query = "INSERT INTO Usuario VALUES" +
				"(Username,Email,Pass_word,Coins) " +
				"(@username,@email,@password,@coins)" +
				"WHERE NOT EXISTS (SELECT 1 FROM Usuario WHERE Email = @email); ";

			SqlCommand^ command = gcnew SqlCommand(Query,sqlconn);

			command->Parameters->AddWithValue("@username", username);
			command->Parameters->AddWithValue("@email", email);
			command->Parameters->AddWithValue("@password", password);
			command->Parameters->AddWithValue("@coins", coins);
			int count = command->ExecuteNonQuery();

			if (count == 0)
			{
				MessageBox::Show("Email already registred", "Fail", MessageBoxButtons::OK);
				return;
			}
			MessageBox::Show("Register complete", "Sucesso", MessageBoxButtons::OK);

			user->Username = username;
			user->Email = email;
			user->Password = password;
			user->coins = coins;

			sqlconn->Close();
			this->Close();

		}
		catch(Exception^ e)
		{
			MessageBox::Show("Falha ao registrar", "falha", MessageBoxButtons::OK);
			return;
		}
	}
private: System::Void label6_MouseEnter(System::Object^ sender, System::EventArgs^ e) 
{
	PasswordInfo->Text = "May have at least one upper,digit and special character";
}
private: System::Void label6_MouseLeave(System::Object^ sender, System::EventArgs^ e) 
{
	PasswordInfo->Text = "";
}
public: bool SwitchToLogin = false;
private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e)
{
	SwitchToLogin = true;
	this->Close();
}
};
}
