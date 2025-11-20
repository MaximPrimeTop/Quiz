#pragma once

#include "StartForm.h"

namespace Debug {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class DebugForm : public System::Windows::Forms::Form
	{
	private: Form^ StartInstance;
	public:
		DebugForm(Form^ startInstance)
		{
			InitializeComponent();
			StartInstance = startInstance;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~DebugForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBoxQuestion;
	protected:

	private: System::Windows::Forms::RadioButton^ radioButtonSingle;
	private: System::Windows::Forms::RadioButton^ radioButtonMultiple;
	protected:


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::ComboBox^ comboBoxAmount;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ComboBox^ comboBoxScore;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBoxImagENAme;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ buttonBigFile;



	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBoxQuestion = (gcnew System::Windows::Forms::TextBox());
			this->radioButtonSingle = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonMultiple = (gcnew System::Windows::Forms::RadioButton());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->comboBoxAmount = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->comboBoxScore = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBoxImagENAme = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->buttonBigFile = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->flowLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBoxQuestion
			// 
			this->textBoxQuestion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->textBoxQuestion->Location = System::Drawing::Point(198, 105);
			this->textBoxQuestion->Name = L"textBoxQuestion";
			this->textBoxQuestion->Size = System::Drawing::Size(1049, 38);
			this->textBoxQuestion->TabIndex = 0;
			// 
			// radioButtonSingle
			// 
			this->radioButtonSingle->AutoSize = true;
			this->radioButtonSingle->Checked = true;
			this->radioButtonSingle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->radioButtonSingle->Location = System::Drawing::Point(28, 9);
			this->radioButtonSingle->Name = L"radioButtonSingle";
			this->radioButtonSingle->Size = System::Drawing::Size(103, 35);
			this->radioButtonSingle->TabIndex = 1;
			this->radioButtonSingle->TabStop = true;
			this->radioButtonSingle->Text = L"single";
			this->radioButtonSingle->UseVisualStyleBackColor = true;
			// 
			// radioButtonMultiple
			// 
			this->radioButtonMultiple->AutoSize = true;
			this->radioButtonMultiple->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->radioButtonMultiple->Location = System::Drawing::Point(152, 9);
			this->radioButtonMultiple->Name = L"radioButtonMultiple";
			this->radioButtonMultiple->Size = System::Drawing::Size(125, 35);
			this->radioButtonMultiple->TabIndex = 2;
			this->radioButtonMultiple->TabStop = true;
			this->radioButtonMultiple->Text = L"multiple";
			this->radioButtonMultiple->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			this->label1->Location = System::Drawing::Point(30, 41);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(108, 46);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Type";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			this->label2->Location = System::Drawing::Point(12, 97);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(180, 46);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Question";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			this->label3->Location = System::Drawing::Point(12, 159);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(362, 46);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Amount of answers";
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->radioButtonSingle);
			this->panel1->Controls->Add(this->radioButtonMultiple);
			this->panel1->Location = System::Drawing::Point(198, 41);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(296, 58);
			this->panel1->TabIndex = 6;
			// 
			// comboBoxAmount
			// 
			this->comboBoxAmount->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->comboBoxAmount->FormattingEnabled = true;
			this->comboBoxAmount->Items->AddRange(gcnew cli::array< System::Object^  >(9) {
				L"2", L"3", L"4", L"5", L"6", L"7", L"8",
					L"9", L"10"
			});
			this->comboBoxAmount->Location = System::Drawing::Point(389, 166);
			this->comboBoxAmount->Name = L"comboBoxAmount";
			this->comboBoxAmount->Size = System::Drawing::Size(121, 39);
			this->comboBoxAmount->TabIndex = 7;
			this->comboBoxAmount->Text = L"4";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(581, 166);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(344, 39);
			this->button1->TabIndex = 8;
			this->button1->Text = L"do the thing";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &DebugForm::button1_Click);
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->AutoScroll = true;
			this->flowLayoutPanel1->Controls->Add(this->textBox3);
			this->flowLayoutPanel1->FlowDirection = System::Windows::Forms::FlowDirection::TopDown;
			this->flowLayoutPanel1->Location = System::Drawing::Point(20, 221);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(723, 448);
			this->flowLayoutPanel1->TabIndex = 9;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->textBox3->Location = System::Drawing::Point(3, 3);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(715, 38);
			this->textBox3->TabIndex = 16;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			this->label4->Location = System::Drawing::Point(838, 237);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(126, 46);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Score";
			// 
			// comboBoxScore
			// 
			this->comboBoxScore->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->comboBoxScore->FormattingEnabled = true;
			this->comboBoxScore->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8",
					L"9", L"10"
			});
			this->comboBoxScore->Location = System::Drawing::Point(983, 244);
			this->comboBoxScore->Name = L"comboBoxScore";
			this->comboBoxScore->Size = System::Drawing::Size(121, 39);
			this->comboBoxScore->TabIndex = 11;
			this->comboBoxScore->Text = L"4";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			this->label5->Location = System::Drawing::Point(838, 299);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(239, 46);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Image name";
			// 
			// textBoxImagENAme
			// 
			this->textBoxImagENAme->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->textBoxImagENAme->Location = System::Drawing::Point(1083, 307);
			this->textBoxImagENAme->Name = L"textBoxImagENAme";
			this->textBoxImagENAme->Size = System::Drawing::Size(164, 38);
			this->textBoxImagENAme->TabIndex = 13;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			this->label6->ForeColor = System::Drawing::Color::Red;
			this->label6->Location = System::Drawing::Point(500, 9);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(769, 46);
			this->label6->TabIndex = 14;
			this->label6->Text = L"VERY EPIC AND COOL DEBUG MENU!!!";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 50));
			this->button2->Location = System::Drawing::Point(749, 378);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(416, 291);
			this->button2->TabIndex = 15;
			this->button2->Text = L"GENERATE FILE";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &DebugForm::button2_Click);
			// 
			// buttonBigFile
			// 
			this->buttonBigFile->Location = System::Drawing::Point(1171, 582);
			this->buttonBigFile->Name = L"buttonBigFile";
			this->buttonBigFile->Size = System::Drawing::Size(81, 87);
			this->buttonBigFile->TabIndex = 16;
			this->buttonBigFile->Text = L"generate big file";
			this->buttonBigFile->UseVisualStyleBackColor = true;
			this->buttonBigFile->Click += gcnew System::EventHandler(this, &DebugForm::buttonBigFile_Click);
			// 
			// DebugForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->ClientSize = System::Drawing::Size(1264, 681);
			this->Controls->Add(this->buttonBigFile);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBoxImagENAme);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->comboBoxScore);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->flowLayoutPanel1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->comboBoxAmount);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBoxQuestion);
			this->Name = L"DebugForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"debug\? more like uhhhh debuff ahahaha gottem,....         i am not sane          "
				L"               literally listening to a cover of monitoring and this guy literal"
				L"ly sounds like toad";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &DebugForm::Close);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->flowLayoutPanel1->ResumeLayout(false);
			this->flowLayoutPanel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:
		array<TextBox^>^ Answers;
		array<RadioButton^>^ radioButtons;
		array<CheckBox^>^ checkBoxes;
		int answerAmount;
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		answerAmount = Convert::ToInt32(comboBoxAmount->Text);
		Answers = gcnew array<TextBox^>(answerAmount);
		radioButtons = gcnew array<RadioButton^>(answerAmount);
		checkBoxes = gcnew array<CheckBox^>(answerAmount);
		flowLayoutPanel1->Controls->Clear();
		for (int i = 0; i < answerAmount; i++)
		{
			Answers[i] = gcnew TextBox;
			Answers[i]->Size = System::Drawing::Size(700, 30);
			Answers[i]->Font = gcnew System::Drawing::Font("Comic Sans MS", 16);
			flowLayoutPanel1->Controls->Add(Answers[i]);
			if (radioButtonSingle->Checked)
			{
				radioButtons[i] = gcnew RadioButton;
				flowLayoutPanel1->Controls->Add(radioButtons[i]);
			}
			else
			{
				checkBoxes[i] = gcnew CheckBox;
				flowLayoutPanel1->Controls->Add(checkBoxes[i]);
			}
		}
	}

	private: void GenerateQuestionFile()
	{
		array<String^>^ QuestionFiles = Directory::GetFiles("Questions", "*.txt");
		String^ tempFolder = "Questions\\temp";
		if (Directory::Exists(tempFolder))
			Directory::Delete(tempFolder, true);
		Directory::CreateDirectory(tempFolder);
		for (int i = 0; i < QuestionFiles->Length; i++)
			File::Move(QuestionFiles[i], Path::Combine(tempFolder, "question" + (i + 1) + ".txt"));
		array<String^>^ tempFiles = Directory::GetFiles(tempFolder, "*.txt");
		for (int i = 0; i < tempFiles->Length; i++)
			File::Move(tempFiles[i], Path::Combine("Questions", "question" + (i + 1) + ".txt"));
		Directory::Delete(tempFolder);
		StreamWriter^ writer = gcnew StreamWriter("Questions\\" + "question" + (QuestionFiles->Length + 1) + ".txt");
		writer->WriteLine((int)radioButtonMultiple->Checked);
		writer->WriteLine(textBoxQuestion->Text);
		writer->WriteLine(answerAmount);
		for (int i = 0; i < answerAmount; i++)
			writer->WriteLine(Answers[i]->Text);
		for (int i = 0; i < answerAmount; i++)
		{
			if (radioButtonSingle->Checked)
				writer->WriteLine(radioButtons[i]->Checked);
			else
				writer->WriteLine(checkBoxes[i]->Checked);
		}
		writer->WriteLine(textBoxImagENAme->Text);
		writer->WriteLine(comboBoxScore->Text);
		writer->Close();
	}

	void GenerateBigFile()
	{
		array<String^>^ QuestionFiles = Directory::GetFiles("Questions", "*.txt");
		StreamWriter^ writer = gcnew StreamWriter("Questions1TextFile\\questions.txt");
		writer->WriteLine(QuestionFiles->Length);
		for (int i = 0; i < QuestionFiles->Length; i++)
		{
			array<String^>^ lines = File::ReadAllLines(QuestionFiles[i]);
			for (int j = 0; j < lines->Length; j++)
			{
				writer->WriteLine(lines[j]);
			}
		}
		writer->Close();
	}
private: System::Void Close(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) 
{
	Application::Exit();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
{
	GenerateQuestionFile();
	button2->Text = "FILE GENERATED!";
}
private: System::Void buttonBigFile_Click(System::Object^ sender, System::EventArgs^ e) 
{
	GenerateBigFile();
	buttonBigFile->Text = "BIG FILE GENERATED!";
}
};
}
