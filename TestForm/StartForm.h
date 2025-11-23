#pragma once

#include "QuizForm.h"
#include "DebugForm.h"
#include <Windows.h>

namespace Start {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Debug;
	using namespace Quiz;
	using namespace System::Media;

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



	private: System::Windows::Forms::Button^ buttonDebug;
	private: System::Windows::Forms::Label^ labelTimer;
	private: System::Windows::Forms::TextBox^ textBoxTimer;
	private: System::Windows::Forms::CheckBox^ checkBoxCorrectAnswers;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::FolderBrowserDialog^ folderBrowserDialog1;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::Button^ buttonFile;
	private: System::Windows::Forms::Label^ labelPath;
	private: System::Windows::Forms::Timer^ timerRainbow;
	private: System::Windows::Forms::Timer^ timerDVD;



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
			this->buttonDebug = (gcnew System::Windows::Forms::Button());
			this->labelTimer = (gcnew System::Windows::Forms::Label());
			this->textBoxTimer = (gcnew System::Windows::Forms::TextBox());
			this->checkBoxCorrectAnswers = (gcnew System::Windows::Forms::CheckBox());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->folderBrowserDialog1 = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->buttonFile = (gcnew System::Windows::Forms::Button());
			this->labelPath = (gcnew System::Windows::Forms::Label());
			this->timerRainbow = (gcnew System::Windows::Forms::Timer(this->components));
			this->timerDVD = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// StartText
			// 
			this->StartText->AutoSize = true;
			this->StartText->BackColor = System::Drawing::Color::Transparent;
			this->StartText->Cursor = System::Windows::Forms::Cursors::Hand;
			this->StartText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 40));
			this->StartText->Location = System::Drawing::Point(12, 9);
			this->StartText->Name = L"StartText";
			this->StartText->Size = System::Drawing::Size(1244, 63);
			this->StartText->TabIndex = 1;
			this->StartText->Text = L"MaximPrime\'s very epic and cool quiz form !!111!!1";
			this->StartText->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &StartForm::StartText_MouseClick);
			// 
			// buttonStart
			// 
			this->buttonStart->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->buttonStart->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->buttonStart->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 60));
			this->buttonStart->Location = System::Drawing::Point(382, 189);
			this->buttonStart->Name = L"buttonStart";
			this->buttonStart->Size = System::Drawing::Size(469, 251);
			this->buttonStart->TabIndex = 2;
			this->buttonStart->Text = L"Start";
			this->buttonStart->UseVisualStyleBackColor = false;
			this->buttonStart->Click += gcnew System::EventHandler(this, &StartForm::buttonStart_Click);
			// 
			// buttonDebug
			// 
			this->buttonDebug->BackColor = System::Drawing::Color::DarkViolet;
			this->buttonDebug->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->buttonDebug->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonDebug->Location = System::Drawing::Point(928, 461);
			this->buttonDebug->Name = L"buttonDebug";
			this->buttonDebug->Size = System::Drawing::Size(310, 119);
			this->buttonDebug->TabIndex = 5;
			this->buttonDebug->Text = L"de epic question maker";
			this->buttonDebug->UseVisualStyleBackColor = false;
			this->buttonDebug->Click += gcnew System::EventHandler(this, &StartForm::buttonDebug_Click);
			// 
			// labelTimer
			// 
			this->labelTimer->AutoSize = true;
			this->labelTimer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelTimer->Location = System::Drawing::Point(7, 507);
			this->labelTimer->Name = L"labelTimer";
			this->labelTimer->Size = System::Drawing::Size(213, 73);
			this->labelTimer->TabIndex = 19;
			this->labelTimer->Text = L"Timer:";
			// 
			// textBoxTimer
			// 
			this->textBoxTimer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxTimer->Location = System::Drawing::Point(210, 521);
			this->textBoxTimer->Name = L"textBoxTimer";
			this->textBoxTimer->Size = System::Drawing::Size(144, 49);
			this->textBoxTimer->TabIndex = 18;
			this->textBoxTimer->Text = L"120";
			// 
			// checkBoxCorrectAnswers
			// 
			this->checkBoxCorrectAnswers->AutoSize = true;
			this->checkBoxCorrectAnswers->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->checkBoxCorrectAnswers->Location = System::Drawing::Point(860, 276);
			this->checkBoxCorrectAnswers->Name = L"checkBoxCorrectAnswers";
			this->checkBoxCorrectAnswers->Size = System::Drawing::Size(405, 46);
			this->checkBoxCorrectAnswers->TabIndex = 20;
			this->checkBoxCorrectAnswers->Text = L"Show correct answers";
			this->checkBoxCorrectAnswers->UseVisualStyleBackColor = true;
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			this->openFileDialog1->Filter = L"Text files|*.txt|All files|*.*";
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Checked = true;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton1->Location = System::Drawing::Point(12, 294);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(361, 37);
			this->radioButton1->TabIndex = 21;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Get questions from folder";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton2->Location = System::Drawing::Point(12, 337);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(326, 37);
			this->radioButton2->TabIndex = 22;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Get questions from file";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// buttonFile
			// 
			this->buttonFile->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->buttonFile->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonFile->Location = System::Drawing::Point(23, 379);
			this->buttonFile->Name = L"buttonFile";
			this->buttonFile->Size = System::Drawing::Size(244, 100);
			this->buttonFile->TabIndex = 23;
			this->buttonFile->Text = L"Choose file/folder";
			this->buttonFile->UseVisualStyleBackColor = false;
			this->buttonFile->Click += gcnew System::EventHandler(this, &StartForm::buttonFile_Click);
			// 
			// labelPath
			// 
			this->labelPath->AutoSize = true;
			this->labelPath->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelPath->Location = System::Drawing::Point(18, 482);
			this->labelPath->Name = L"labelPath";
			this->labelPath->Size = System::Drawing::Size(656, 25);
			this->labelPath->TabIndex = 24;
			this->labelPath->Text = L"Path: C:\\Users\\MaximPrime\\source\\repos\\Quiz\\TestForm\\Questions";
			// 
			// timerRainbow
			// 
			this->timerRainbow->Enabled = true;
			this->timerRainbow->Interval = 20;
			this->timerRainbow->Tick += gcnew System::EventHandler(this, &StartForm::timerRainbow_Tick);
			// 
			// timerDVD
			// 
			this->timerDVD->Interval = 10;
			this->timerDVD->Tick += gcnew System::EventHandler(this, &StartForm::timerDVD_Tick);
			// 
			// StartForm
			// 
			this->ClientSize = System::Drawing::Size(1264, 681);
			this->Controls->Add(this->StartText);
			this->Controls->Add(this->labelPath);
			this->Controls->Add(this->buttonFile);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->checkBoxCorrectAnswers);
			this->Controls->Add(this->textBoxTimer);
			this->Controls->Add(this->labelTimer);
			this->Controls->Add(this->buttonDebug);
			this->Controls->Add(this->buttonStart);
			this->Name = L"StartForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"da main menu or some shi";
			this->Load += gcnew System::EventHandler(this, &StartForm::StartForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: 
		QuizForm^ quiz;
		DebugForm^ debug;
		String^ QuestionsPath = "C:\\Users\\MaximPrime\\source\\repos\\Quiz\\TestForm\\Questions";
		bool isFolder = true;
	public: static bool isStarted = false;
	private: System::Void buttonStart_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		int timer;
		if (textBoxTimer->Text == "" || !int::TryParse(textBoxTimer->Text, timer))
			return;
		if (quiz == nullptr)
		{
			quiz = gcnew QuizForm(this, Convert::ToInt32(timer), checkBoxCorrectAnswers->Checked, isFolder, QuestionsPath);
			isStarted = true;
		}
		buttonStart->Text = "Continue";
		textBoxTimer->Enabled = false;
		checkBoxCorrectAnswers->Enabled = false;
		buttonDebug->Enabled = false;
		radioButton1->Enabled = false;
		radioButton2->Enabled = false;
		buttonFile->Enabled = false;
		this->Hide();
		quiz->Show();
	}
	private: System::Void buttonDebug_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		if (debug == nullptr)
			debug = gcnew DebugForm(this);
		this->Hide();
		debug->Show();
	}
private: System::Void buttonFile_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if (radioButton1->Checked)
	{
		if (folderBrowserDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			QuestionsPath = folderBrowserDialog1->SelectedPath;
			isFolder = true;
			labelPath->Text = "Path: " + folderBrowserDialog1->SelectedPath;
		}
	}
	else if (radioButton2->Checked)
	{
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			QuestionsPath = openFileDialog1->FileName;
			isFolder = false;
			labelPath->Text = "Path: " + openFileDialog1->FileName;
		}
	}
}
	   private: int hue = 0;
private: System::Void timerRainbow_Tick(System::Object^ sender, System::EventArgs^ e) 
{
	hue = (hue + 1) % 360;
	Color color = Color::FromArgb(255, 
		(int)(255 * (1 + Math::Sin((hue + 0) * Math::PI / 180)) / 2),
		(int)(255 * (1 + Math::Sin((hue + 120) * Math::PI / 180)) / 2),
		(int)(255 * (1 + Math::Sin((hue + 240) * Math::PI / 180)) / 2));
	StartText->ForeColor = color;
}
private: System::Void StartForm_Load(System::Object^ sender, System::EventArgs^ e) 
{

}
private: System::Void StartText_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) 
{
	if (timerDVD->Enabled)
	{
		timerDVD->Enabled = false;
		ToggleStuff(true);
		StartText->Location = Point(12, 9);
		StartText->Text = "MaximPrime's very epic and cool quiz form !!111!!1";
	}
	else
	{
		StartText->Text = "ah you found the dvd easter egg";
		timerDVD->Enabled = true;
		ToggleStuff(false);
	}

}

	private: void ToggleStuff(bool enabled)
	{
		buttonStart->Visible = enabled;
		buttonDebug->Visible = enabled;
		checkBoxCorrectAnswers->Visible = enabled;
		buttonFile->Visible = enabled;
		radioButton1->Visible = enabled;
		radioButton2->Visible = enabled;
		labelPath->Visible = enabled;
		labelTimer->Visible = enabled;
		textBoxTimer->Visible = enabled;
	}
private: int xSpeed = 10, ySpeed = 10;
private: System::Void timerDVD_Tick(System::Object^ sender, System::EventArgs^ e) 
{
	StartText->Location = Point(StartText->Location.X + xSpeed, StartText->Location.Y + ySpeed);
	if (StartText->Location.X <= 0 || StartText->Location.X + StartText->Size.Width >= this->Width)
		xSpeed = -xSpeed;
	if (StartText->Location.Y <= 0 || StartText->Location.Y + StartText->Size.Height >= this->Height - 40)
		ySpeed = -ySpeed;
}
};
}
