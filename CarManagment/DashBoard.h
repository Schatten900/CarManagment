#pragma once
//UserControls:
#include "UserLogin.h"
#include "ProfileForm.h"
#include "RegisterCarForm.h"
#include "PurchaseForm.h"

//Class of User and Car
#include "User.h"

namespace CarManagment {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Sumário para DashBoard
	/// </summary>
	public ref class DashBoard : public System::Windows::Forms::Form
	{
	public:
		DashBoard(User^ user)
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
		~DashBoard()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ Sidebar;
	protected:

	protected:

	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ ProfileButtom;



	private: System::Windows::Forms::Button^ LobbyButtom;

	private: System::Windows::Forms::Button^ meuButtom;



	private: System::Windows::Forms::Button^ ExitButtom;
	private: System::Windows::Forms::Panel^ menuBar;


	private: System::Windows::Forms::Button^ RegisterButtom;

	private: System::Windows::Forms::Button^ PurchaseButtom;

	private: System::Windows::Forms::Button^ ActionsButtom;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Timer^ MenuTransition;
	private: System::Windows::Forms::Timer^ SidebarTransition;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ lobButtom;
	private: System::Windows::Forms::Panel^ PerfilButtom;
	private: System::Windows::Forms::UserControl^ currentControl = nullptr;


	private: System::ComponentModel::IContainer^ components;
	protected:

	private:
		/// <summary>
		/// Variável de designer necessária.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necessário para suporte ao Designer - não modifique 
		/// o conteúdo deste método com o editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(DashBoard::typeid));
			this->Sidebar = (gcnew System::Windows::Forms::Panel());
			this->ExitButtom = (gcnew System::Windows::Forms::Button());
			this->menuBar = (gcnew System::Windows::Forms::Panel());
			this->RegisterButtom = (gcnew System::Windows::Forms::Button());
			this->ActionsButtom = (gcnew System::Windows::Forms::Button());
			this->PurchaseButtom = (gcnew System::Windows::Forms::Button());
			this->PerfilButtom = (gcnew System::Windows::Forms::Panel());
			this->ProfileButtom = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->lobButtom = (gcnew System::Windows::Forms::Button());
			this->LobbyButtom = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->meuButtom = (gcnew System::Windows::Forms::Button());
			this->MenuTransition = (gcnew System::Windows::Forms::Timer(this->components));
			this->SidebarTransition = (gcnew System::Windows::Forms::Timer(this->components));
			this->Sidebar->SuspendLayout();
			this->menuBar->SuspendLayout();
			this->PerfilButtom->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// Sidebar
			// 
			this->Sidebar->BackColor = System::Drawing::Color::White;
			this->Sidebar->Controls->Add(this->ExitButtom);
			this->Sidebar->Controls->Add(this->menuBar);
			this->Sidebar->Controls->Add(this->PerfilButtom);
			this->Sidebar->Controls->Add(this->panel3);
			this->Sidebar->Location = System::Drawing::Point(1, 44);
			this->Sidebar->Name = L"Sidebar";
			this->Sidebar->Size = System::Drawing::Size(170, 395);
			this->Sidebar->TabIndex = 0;
			// 
			// ExitButtom
			// 
			this->ExitButtom->BackColor = System::Drawing::Color::White;
			this->ExitButtom->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ExitButtom->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ExitButtom->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->ExitButtom->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ExitButtom.Image")));
			this->ExitButtom->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->ExitButtom->Location = System::Drawing::Point(0, 327);
			this->ExitButtom->Name = L"ExitButtom";
			this->ExitButtom->Size = System::Drawing::Size(165, 45);
			this->ExitButtom->TabIndex = 2;
			this->ExitButtom->Text = L"Exit";
			this->ExitButtom->UseVisualStyleBackColor = false;
			this->ExitButtom->Click += gcnew System::EventHandler(this, &DashBoard::ExitButtom_Click);
			// 
			// menuBar
			// 
			this->menuBar->BackColor = System::Drawing::Color::White;
			this->menuBar->Controls->Add(this->RegisterButtom);
			this->menuBar->Controls->Add(this->ActionsButtom);
			this->menuBar->Controls->Add(this->PurchaseButtom);
			this->menuBar->Location = System::Drawing::Point(0, 147);
			this->menuBar->Margin = System::Windows::Forms::Padding(0);
			this->menuBar->Name = L"menuBar";
			this->menuBar->Size = System::Drawing::Size(165, 165);
			this->menuBar->TabIndex = 4;
			// 
			// RegisterButtom
			// 
			this->RegisterButtom->BackColor = System::Drawing::Color::White;
			this->RegisterButtom->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->RegisterButtom->Cursor = System::Windows::Forms::Cursors::Hand;
			this->RegisterButtom->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->RegisterButtom->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"RegisterButtom.Image")));
			this->RegisterButtom->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->RegisterButtom->Location = System::Drawing::Point(0, 110);
			this->RegisterButtom->Name = L"RegisterButtom";
			this->RegisterButtom->Size = System::Drawing::Size(165, 49);
			this->RegisterButtom->TabIndex = 5;
			this->RegisterButtom->Text = L"Register";
			this->RegisterButtom->UseVisualStyleBackColor = false;
			this->RegisterButtom->Click += gcnew System::EventHandler(this, &DashBoard::RegisterButtom_Click);
			// 
			// ActionsButtom
			// 
			this->ActionsButtom->BackColor = System::Drawing::Color::White;
			this->ActionsButtom->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ActionsButtom->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ActionsButtom->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->ActionsButtom->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ActionsButtom.Image")));
			this->ActionsButtom->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->ActionsButtom->Location = System::Drawing::Point(0, 0);
			this->ActionsButtom->Name = L"ActionsButtom";
			this->ActionsButtom->Size = System::Drawing::Size(165, 49);
			this->ActionsButtom->TabIndex = 3;
			this->ActionsButtom->Text = L"Actions";
			this->ActionsButtom->UseVisualStyleBackColor = false;
			this->ActionsButtom->Click += gcnew System::EventHandler(this, &DashBoard::ActionsButtom_Click);
			// 
			// PurchaseButtom
			// 
			this->PurchaseButtom->BackColor = System::Drawing::Color::White;
			this->PurchaseButtom->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->PurchaseButtom->Cursor = System::Windows::Forms::Cursors::Hand;
			this->PurchaseButtom->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->PurchaseButtom->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PurchaseButtom.Image")));
			this->PurchaseButtom->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->PurchaseButtom->Location = System::Drawing::Point(0, 55);
			this->PurchaseButtom->Name = L"PurchaseButtom";
			this->PurchaseButtom->Size = System::Drawing::Size(165, 49);
			this->PurchaseButtom->TabIndex = 4;
			this->PurchaseButtom->Text = L"Purchase";
			this->PurchaseButtom->UseVisualStyleBackColor = false;
			this->PurchaseButtom->Click += gcnew System::EventHandler(this, &DashBoard::PurchaseButtom_Click);
			// 
			// PerfilButtom
			// 
			this->PerfilButtom->BackColor = System::Drawing::Color::White;
			this->PerfilButtom->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->PerfilButtom->Controls->Add(this->ProfileButtom);
			this->PerfilButtom->Location = System::Drawing::Point(0, 81);
			this->PerfilButtom->Name = L"PerfilButtom";
			this->PerfilButtom->Size = System::Drawing::Size(165, 52);
			this->PerfilButtom->TabIndex = 3;
			// 
			// ProfileButtom
			// 
			this->ProfileButtom->BackColor = System::Drawing::Color::White;
			this->ProfileButtom->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ProfileButtom->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ProfileButtom->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->ProfileButtom->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ProfileButtom.Image")));
			this->ProfileButtom->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->ProfileButtom->Location = System::Drawing::Point(0, 0);
			this->ProfileButtom->Name = L"ProfileButtom";
			this->ProfileButtom->Size = System::Drawing::Size(165, 52);
			this->ProfileButtom->TabIndex = 2;
			this->ProfileButtom->Text = L"Profile";
			this->ProfileButtom->UseVisualStyleBackColor = false;
			this->ProfileButtom->Click += gcnew System::EventHandler(this, &DashBoard::ProfileButtom_Click);
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->lobButtom);
			this->panel3->Location = System::Drawing::Point(0, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(200, 100);
			this->panel3->TabIndex = 5;
			// 
			// lobButtom
			// 
			this->lobButtom->BackColor = System::Drawing::Color::White;
			this->lobButtom->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->lobButtom->Cursor = System::Windows::Forms::Cursors::Hand;
			this->lobButtom->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->lobButtom->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"lobButtom.Image")));
			this->lobButtom->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->lobButtom->Location = System::Drawing::Point(0, 23);
			this->lobButtom->Name = L"lobButtom";
			this->lobButtom->Size = System::Drawing::Size(165, 52);
			this->lobButtom->TabIndex = 3;
			this->lobButtom->Text = L"Lobby";
			this->lobButtom->UseVisualStyleBackColor = false;
			this->lobButtom->Click += gcnew System::EventHandler(this, &DashBoard::lobButtom_Click);
			// 
			// LobbyButtom
			// 
			this->LobbyButtom->Location = System::Drawing::Point(0, 0);
			this->LobbyButtom->Name = L"LobbyButtom";
			this->LobbyButtom->Size = System::Drawing::Size(75, 23);
			this->LobbyButtom->TabIndex = 0;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::White;
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->meuButtom);
			this->panel2->Location = System::Drawing::Point(1, -3);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(886, 45);
			this->panel2->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Oswald", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(326, 5);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(168, 36);
			this->label1->TabIndex = 5;
			this->label1->Text = L"concessionaire";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// meuButtom
			// 
			this->meuButtom->BackColor = System::Drawing::Color::White;
			this->meuButtom->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->meuButtom->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->meuButtom->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"meuButtom.Image")));
			this->meuButtom->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->meuButtom->Location = System::Drawing::Point(0, 0);
			this->meuButtom->Name = L"meuButtom";
			this->meuButtom->Size = System::Drawing::Size(42, 41);
			this->meuButtom->TabIndex = 2;
			this->meuButtom->UseVisualStyleBackColor = false;
			this->meuButtom->Click += gcnew System::EventHandler(this, &DashBoard::meuButtom_Click);
			// 
			// MenuTransition
			// 
			this->MenuTransition->Interval = 20;
			this->MenuTransition->Tick += gcnew System::EventHandler(this, &DashBoard::MenuTransition_Tick);
			// 
			// SidebarTransition
			// 
			this->SidebarTransition->Interval = 20;
			this->SidebarTransition->Tick += gcnew System::EventHandler(this, &DashBoard::SidebarTransition_Tick);
			// 
			// DashBoard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->ClientSize = System::Drawing::Size(874, 437);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->Sidebar);
			this->Name = L"DashBoard";
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Hide;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"DashBoard";
			this->Sidebar->ResumeLayout(false);
			this->menuBar->ResumeLayout(false);
			this->PerfilButtom->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

private: System::Void addUserControl(System::Windows::Forms::UserControl^ control)
	{
		if (currentControl)
		{
			this->Controls->Remove(currentControl);
		}
		currentControl = control;
		control->Location = System::Drawing::Point(175, 43);
		this->Controls->Add(control);
	}


private: System::Void ActionsButtom_Click(System::Object^ sender, System::EventArgs^ e)
{
	MenuTransition->Start();
}

public: bool ExpandMenu = false;
private: System::Void MenuTransition_Tick(System::Object^ sender, System::EventArgs^ e) 
{
	if (!ExpandMenu)
	{
		menuBar->Height += 16;
		if (menuBar->Height >= 164)
		{
			MenuTransition->Stop();
			ExpandMenu = true;
		}
	}
	else
	{
		menuBar->Height -= 16;
		if (menuBar->Height <= 54)
		{
			MenuTransition->Stop();
			ExpandMenu = false;
		}
	}
}
public: bool SideBarExpand = false;
private: System::Void SidebarTransition_Tick(System::Object^ sender, System::EventArgs^ e) 
{
	if (!SideBarExpand)
	{
		Sidebar->Width += 16;
		if (Sidebar->Width >= 164)
		{
			SidebarTransition->Stop();
			SideBarExpand = true;
		}
	}
	else
	{
		Sidebar->Width -= 16;
		if (Sidebar->Width <= 48)
		{
			SidebarTransition->Stop();
			SideBarExpand = false;
		}
	}
}

private: System::Void ExitButtom_Click(System::Object^ sender, System::EventArgs^ e) 
{
	this->Close();
}

private: System::Void meuButtom_Click(System::Object^ sender, System::EventArgs^ e) 
{
	SidebarTransition->Start();
}

private: System::Void RegisterButtom_Click(System::Object^ sender, System::EventArgs^ e) 
{

	RegisterCarForm^ registerform = gcnew RegisterCarForm();
	addUserControl(registerform);

}

private: System::Void ProfileButtom_Click(System::Object^ sender, System::EventArgs^ e) 
{

	ProfileForm^ profileform = gcnew ProfileForm();
	addUserControl(profileform);

}

private: System::Void lobButtom_Click(System::Object^ sender, System::EventArgs^ e) 
{

	UserLogin^ lobbyform = gcnew UserLogin();
	addUserControl(lobbyform);

}
private: System::Void PurchaseButtom_Click(System::Object^ sender, System::EventArgs^ e) 
{

	PurchaseForm^ purchaseform = gcnew PurchaseForm();
	addUserControl(purchaseform);

}
};
}
