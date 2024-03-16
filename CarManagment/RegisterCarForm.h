#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace CarManagment {

	/// <summary>
	/// Sumário para RegisterCarForm
	/// </summary>
	public ref class RegisterCarForm : public UserControl
	{
	public:
		RegisterCarForm(void)
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
		~RegisterCarForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ Lobby;
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
			this->Lobby = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// Lobby
			// 
			this->Lobby->AutoSize = true;
			this->Lobby->Font = (gcnew System::Drawing::Font(L"Rockwell", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Lobby->Location = System::Drawing::Point(297, 181);
			this->Lobby->Name = L"Lobby";
			this->Lobby->Size = System::Drawing::Size(105, 27);
			this->Lobby->TabIndex = 1;
			this->Lobby->Text = L"Register";
			// 
			// RegisterCarForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Controls->Add(this->Lobby);
			this->Name = L"RegisterCarForm";
			this->Size = System::Drawing::Size(722, 392);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
