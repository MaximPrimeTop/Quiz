#pragma once

#include "QuizForm.h"
#include "DebugForm.h"
namespace quiz {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class StartForm : public System::Windows::Forms::Form
	{
	public:
		StartForm(void)
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
		~StartForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ StartText;
	private: System::Windows::Forms::Button^ buttonStart;

	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ buttonDebug;
	private: System::ComponentModel::IContainer^ components;


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
			this->StartText = (gcnew System::Windows::Forms::Label());
			this->buttonStart = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->buttonDebug = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// StartText
			// 
			this->StartText->AutoSize = true;
			this->StartText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 40));
			this->StartText->Location = System::Drawing::Point(12, 74);
			this->StartText->Name = L"StartText";
			this->StartText->Size = System::Drawing::Size(1244, 63);
			this->StartText->TabIndex = 1;
			this->StartText->Text = L"MaximPrime\'s very epic and cool quiz form !!111!!1";
			// 
			// buttonStart
			// 
			this->buttonStart->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->buttonStart->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->buttonStart->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 60));
			this->buttonStart->Location = System::Drawing::Point(400, 200);
			this->buttonStart->Name = L"buttonStart";
			this->buttonStart->Size = System::Drawing::Size(400, 200);
			this->buttonStart->TabIndex = 2;
			this->buttonStart->Text = L"Start";
			this->buttonStart->UseVisualStyleBackColor = false;
			this->buttonStart->Click += gcnew System::EventHandler(this, &StartForm::buttonStart_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(1187, 276);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(29, 13);
			this->label1->TabIndex = 4;
			this->label1->Text = L"timer";
			// 
			// buttonDebug
			// 
			this->buttonDebug->BackColor = System::Drawing::Color::DarkViolet;
			this->buttonDebug->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->buttonDebug->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 60));
			this->buttonDebug->Location = System::Drawing::Point(928, 461);
			this->buttonDebug->Name = L"buttonDebug";
			this->buttonDebug->Size = System::Drawing::Size(310, 119);
			this->buttonDebug->TabIndex = 5;
			this->buttonDebug->Text = L"Debug";
			this->buttonDebug->UseVisualStyleBackColor = false;
			this->buttonDebug->Click += gcnew System::EventHandler(this, &StartForm::buttonDebug_Click);
			// 
			// StartForm
			// 
			this->ClientSize = System::Drawing::Size(1264, 681);
			this->Controls->Add(this->buttonDebug);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->buttonStart);
			this->Controls->Add(this->StartText);
			this->Name = L"StartForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->VisibleChanged += gcnew System::EventHandler(this, &StartForm::VisibilityChanged);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: 
		QuizForm^ quiz;
		DebugForm^ debug;
	public: static bool isStarted = false;
	private: System::Void buttonStart_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		if (quiz == nullptr)
		{
			quiz = gcnew QuizForm(this);
			isStarted = true;
		}
		this->Hide();
		quiz->Show();
	}
	private: System::Void VisibilityChanged(System::Object^ sender, System::EventArgs^ e) 
	{
		if (isStarted)
			buttonStart->Text = "Continue";
	}
	private: System::Void buttonDebug_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		if (debug == nullptr)
			debug = gcnew DebugForm(this);
		this->Hide();
		debug->Show();
	}
};
}
