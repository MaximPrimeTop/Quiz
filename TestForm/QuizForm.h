#pragma once

#include "StartForm.h"

namespace quiz {

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
	public ref class QuizForm : public System::Windows::Forms::Form
	{
	private: Form^ StartInstance;
	public:
		
		QuizForm(Form^ startInstance)
		{
			InitializeComponent();
			StartInstance = startInstance;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~QuizForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::Button^ buttonNext;
	private: System::Windows::Forms::Button^ buttonBack;
	private: System::Windows::Forms::Button^ buttonConfirm;

	private: System::Windows::Forms::Button^ buttonHome;
	private: System::Windows::Forms::FlowLayoutPanel^ panelAnswers;
	private: System::Windows::Forms::Panel^ panelQuiz;
	private: System::Windows::Forms::Label^ labelQuestion;


	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ labelScore;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ labelMaxScore;
	private: System::Windows::Forms::Label^ labelScoreQuestion;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ labelScoreMaxQuestion;













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
			this->buttonNext = (gcnew System::Windows::Forms::Button());
			this->buttonBack = (gcnew System::Windows::Forms::Button());
			this->buttonConfirm = (gcnew System::Windows::Forms::Button());
			this->buttonHome = (gcnew System::Windows::Forms::Button());
			this->panelAnswers = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->panelQuiz = (gcnew System::Windows::Forms::Panel());
			this->labelScoreQuestion = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->labelScoreMaxQuestion = (gcnew System::Windows::Forms::Label());
			this->labelScore = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->labelMaxScore = (gcnew System::Windows::Forms::Label());
			this->labelQuestion = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panelQuiz->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// buttonNext
			// 
			this->buttonNext->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->buttonNext->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->buttonNext->Font = (gcnew System::Drawing::Font(L"Papyrus", 45));
			this->buttonNext->Location = System::Drawing::Point(1040, 500);
			this->buttonNext->Name = L"buttonNext";
			this->buttonNext->Size = System::Drawing::Size(200, 100);
			this->buttonNext->TabIndex = 1;
			this->buttonNext->Text = L"Next";
			this->buttonNext->UseVisualStyleBackColor = false;
			this->buttonNext->Click += gcnew System::EventHandler(this, &QuizForm::buttonNext_Click);
			// 
			// buttonBack
			// 
			this->buttonBack->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->buttonBack->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->buttonBack->Font = (gcnew System::Drawing::Font(L"Papyrus", 45));
			this->buttonBack->Location = System::Drawing::Point(0, 500);
			this->buttonBack->Name = L"buttonBack";
			this->buttonBack->Size = System::Drawing::Size(200, 100);
			this->buttonBack->TabIndex = 2;
			this->buttonBack->Text = L"Back";
			this->buttonBack->UseVisualStyleBackColor = false;
			this->buttonBack->Click += gcnew System::EventHandler(this, &QuizForm::buttonBack_Click);
			// 
			// buttonConfirm
			// 
			this->buttonConfirm->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->buttonConfirm->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->buttonConfirm->Font = (gcnew System::Drawing::Font(L"Papyrus", 30.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonConfirm->Location = System::Drawing::Point(520, 500);
			this->buttonConfirm->Name = L"buttonConfirm";
			this->buttonConfirm->Size = System::Drawing::Size(200, 100);
			this->buttonConfirm->TabIndex = 3;
			this->buttonConfirm->Text = L"Confirm";
			this->buttonConfirm->UseVisualStyleBackColor = false;
			this->buttonConfirm->Click += gcnew System::EventHandler(this, &QuizForm::buttonConfirm_Click);
			// 
			// buttonHome
			// 
			this->buttonHome->BackColor = System::Drawing::Color::Black;
			this->buttonHome->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->buttonHome->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonHome->ForeColor = System::Drawing::Color::White;
			this->buttonHome->Location = System::Drawing::Point(0, 0);
			this->buttonHome->Name = L"buttonHome";
			this->buttonHome->Size = System::Drawing::Size(82, 49);
			this->buttonHome->TabIndex = 4;
			this->buttonHome->Text = L"⌂";
			this->buttonHome->UseVisualStyleBackColor = false;
			this->buttonHome->Click += gcnew System::EventHandler(this, &QuizForm::buttonHome_Click);
			// 
			// panelAnswers
			// 
			this->panelAnswers->AutoScroll = true;
			this->panelAnswers->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->panelAnswers->FlowDirection = System::Windows::Forms::FlowDirection::TopDown;
			this->panelAnswers->ForeColor = System::Drawing::Color::Transparent;
			this->panelAnswers->Location = System::Drawing::Point(0, 178);
			this->panelAnswers->Name = L"panelAnswers";
			this->panelAnswers->Size = System::Drawing::Size(823, 322);
			this->panelAnswers->TabIndex = 0;
			// 
			// panelQuiz
			// 
			this->panelQuiz->BackColor = System::Drawing::Color::White;
			this->panelQuiz->Controls->Add(this->panelAnswers);
			this->panelQuiz->Controls->Add(this->labelScoreQuestion);
			this->panelQuiz->Controls->Add(this->label2);
			this->panelQuiz->Controls->Add(this->labelScoreMaxQuestion);
			this->panelQuiz->Controls->Add(this->labelScore);
			this->panelQuiz->Controls->Add(this->label3);
			this->panelQuiz->Controls->Add(this->labelMaxScore);
			this->panelQuiz->Controls->Add(this->labelQuestion);
			this->panelQuiz->Controls->Add(this->pictureBox1);
			this->panelQuiz->Controls->Add(this->buttonBack);
			this->panelQuiz->Controls->Add(this->buttonConfirm);
			this->panelQuiz->Controls->Add(this->buttonNext);
			this->panelQuiz->Location = System::Drawing::Point(10, 50);
			this->panelQuiz->Name = L"panelQuiz";
			this->panelQuiz->Size = System::Drawing::Size(1240, 600);
			this->panelQuiz->TabIndex = 5;
			// 
			// labelScoreQuestion
			// 
			this->labelScoreQuestion->AutoSize = true;
			this->labelScoreQuestion->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20));
			this->labelScoreQuestion->Location = System::Drawing::Point(829, 389);
			this->labelScoreQuestion->MaximumSize = System::Drawing::Size(100, 40);
			this->labelScoreQuestion->MinimumSize = System::Drawing::Size(100, 40);
			this->labelScoreQuestion->Name = L"labelScoreQuestion";
			this->labelScoreQuestion->Size = System::Drawing::Size(100, 40);
			this->labelScoreQuestion->TabIndex = 8;
			this->labelScoreQuestion->Text = L"0";
			this->labelScoreQuestion->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20));
			this->label2->Location = System::Drawing::Point(834, 399);
			this->label2->MaximumSize = System::Drawing::Size(100, 40);
			this->label2->MinimumSize = System::Drawing::Size(100, 40);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(100, 40);
			this->label2->TabIndex = 10;
			this->label2->Text = L"_________";
			// 
			// labelScoreMaxQuestion
			// 
			this->labelScoreMaxQuestion->AutoSize = true;
			this->labelScoreMaxQuestion->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20));
			this->labelScoreMaxQuestion->Location = System::Drawing::Point(829, 429);
			this->labelScoreMaxQuestion->MaximumSize = System::Drawing::Size(100, 40);
			this->labelScoreMaxQuestion->MinimumSize = System::Drawing::Size(100, 40);
			this->labelScoreMaxQuestion->Name = L"labelScoreMaxQuestion";
			this->labelScoreMaxQuestion->Size = System::Drawing::Size(100, 40);
			this->labelScoreMaxQuestion->TabIndex = 9;
			this->labelScoreMaxQuestion->Text = L"10";
			this->labelScoreMaxQuestion->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelScore
			// 
			this->labelScore->AutoSize = true;
			this->labelScore->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20));
			this->labelScore->Location = System::Drawing::Point(1108, 389);
			this->labelScore->MaximumSize = System::Drawing::Size(100, 40);
			this->labelScore->MinimumSize = System::Drawing::Size(100, 40);
			this->labelScore->Name = L"labelScore";
			this->labelScore->Size = System::Drawing::Size(100, 40);
			this->labelScore->TabIndex = 5;
			this->labelScore->Text = L"0";
			this->labelScore->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20));
			this->label3->Location = System::Drawing::Point(1113, 399);
			this->label3->MaximumSize = System::Drawing::Size(100, 40);
			this->label3->MinimumSize = System::Drawing::Size(100, 40);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(100, 40);
			this->label3->TabIndex = 7;
			this->label3->Text = L"_________";
			// 
			// labelMaxScore
			// 
			this->labelMaxScore->AutoSize = true;
			this->labelMaxScore->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20));
			this->labelMaxScore->Location = System::Drawing::Point(1108, 429);
			this->labelMaxScore->MaximumSize = System::Drawing::Size(100, 40);
			this->labelMaxScore->MinimumSize = System::Drawing::Size(100, 40);
			this->labelMaxScore->Name = L"labelMaxScore";
			this->labelMaxScore->Size = System::Drawing::Size(100, 40);
			this->labelMaxScore->TabIndex = 6;
			this->labelMaxScore->Text = L"10";
			this->labelMaxScore->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelQuestion
			// 
			this->labelQuestion->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->labelQuestion->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 24));
			this->labelQuestion->Location = System::Drawing::Point(0, 0);
			this->labelQuestion->Name = L"labelQuestion";
			this->labelQuestion->Size = System::Drawing::Size(823, 189);
			this->labelQuestion->TabIndex = 0;
			this->labelQuestion->Text = L"Philosophical question";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Location = System::Drawing::Point(829, 3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(396, 356);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 4;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Visible = false;
			// 
			// QuizForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->ClientSize = System::Drawing::Size(1264, 681);
			this->Controls->Add(this->buttonHome);
			this->Controls->Add(this->panelQuiz);
			this->Name = L"QuizForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Prostate exam";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &QuizForm::Close);
			this->Load += gcnew System::EventHandler(this, &QuizForm::QuizForm_Load);
			this->panelQuiz->ResumeLayout(false);
			this->panelQuiz->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: ref struct ss
	{

	};
	private: enum class QuestionType
	{
		SingleChoice,
		MultipleChoice
	};

	private: ref class Question
	{
		public:
			QuestionType Type;
			String^ QuestionText;
			array<String^>^ Answers;
			int AnswerAmount;
			bool isAnswered = false;
			int Score;
			int userScore = 0;
			bool isSaved = false;
			array<bool>^ UserAnswers;
			String^ ImageName = "";
		private:
			array<bool>^ CorrectAnswers;
		public:
			Question(QuestionType type, String^ questionText, array<String^>^ answers, int answerAmount, array<bool>^ correctAnswers, String^ imageName, int score)
			{
				Type = type;
				QuestionText = questionText;
				Answers = answers;
				AnswerAmount = answerAmount;
				CorrectAnswers = correctAnswers;
				Score = score;
				ImageName = imageName;
			}

			Question(String^ filename) 
			{
				StreamReader^ reader = gcnew StreamReader(filename);
				Type = (QuestionType)Convert::ToInt16(reader->ReadLine());
				QuestionText = reader->ReadLine();
				AnswerAmount = Convert::ToInt16(reader->ReadLine());
				Answers = gcnew array<String^>(AnswerAmount);
				for (int i = 0; i < AnswerAmount; i++)
					Answers[i] = reader->ReadLine();
				CorrectAnswers = gcnew array<bool>(AnswerAmount);
				for (int i = 0; i < AnswerAmount; i++)
					CorrectAnswers[i] = Convert::ToBoolean(reader->ReadLine());
				ImageName = reader->ReadLine();
				Score = Convert::ToInt16(reader->ReadLine());
			}

			void QuestionToFile(String^ filename)
			{
				StreamWriter^ writer = gcnew StreamWriter(filename);
				writer->WriteLine((int)Type);
				writer->WriteLine(QuestionText);
				writer->WriteLine(AnswerAmount);
				for (int i = 0; i < AnswerAmount; i++)
					writer->WriteLine(Answers[i]);
				for (int i = 0; i < AnswerAmount; i++)
					writer->WriteLine(CorrectAnswers[i]);
				writer->WriteLine(ImageName);
				writer->WriteLine(Score);
				writer->Close();
			}

			int CheckAnswers(array<bool>^ answers)
			{
				int sumAnswer = 0, sumCorrect = 0;
				for (int i = 0; i < AnswerAmount; i++)
				{
					if (CorrectAnswers[i] && answers[i])
					{
						sumAnswer++;
						sumCorrect++;
					}
					else if (CorrectAnswers[i])
						sumCorrect++;
				}

				return (int)(Score * sumAnswer / sumCorrect);
			}

			void SaveMarkedAnswers(array<bool>^ answers)
			{
				for (int i = 0; i < answers->Length; i++)
					if (answers[i])
					{
						isSaved = true;
						UserAnswers = answers;
						return;
					}
				isSaved = false;
			}

			void MarkCorrectAnswers(array<RadioButton^>^ singleChoiceButtons)
			{
				for (int i = 0; i < AnswerAmount; i++)
				{
					singleChoiceButtons[i]->Enabled = false;

					if (CorrectAnswers[i])
						singleChoiceButtons[i]->BackColor = Color::Green;

					if (UserAnswers[i])
					{
						singleChoiceButtons[i]->Checked = true;
						if (!CorrectAnswers[i])
							singleChoiceButtons[i]->BackColor = Color::Red;
					}
				}
			}

			void MarkCorrectAnswers(array<CheckBox^>^ multipleChoiceButtons)
			{
				for (int i = 0; i < AnswerAmount; i++)
				{
					multipleChoiceButtons[i]->Enabled = false;
					if (UserAnswers[i])
					{
						multipleChoiceButtons[i]->Checked = true;
						if(!CorrectAnswers[i])
							multipleChoiceButtons[i]->BackColor = Color::Red;
					}
					if (CorrectAnswers[i])
						multipleChoiceButtons[i]->BackColor = Color::Green;
				}
			}

			void randomizeAnswers()
			{
				Random^ rnd = gcnew Random();
				for (int i = 0; i < 100; i++)
				{
					int j = rnd->Next(0, AnswerAmount);
					int k = rnd->Next(0, AnswerAmount);
					String^ tempAnswer = Answers[k];
					Answers[k] = Answers[j];
					Answers[j] = tempAnswer;
					bool tempCorrect = CorrectAnswers[k];
					CorrectAnswers[k] = CorrectAnswers[j];
					CorrectAnswers[j] = tempCorrect;
				}
			}
	};
	private: 
		array<Question^>^ Questions;
		int CurrentQuestion = 0;
		int QuestionAmount;
		array<RadioButton^>^ SingleChoiceButtons;
		array<CheckBox^>^ MultipleChoiceButtons;
		int Score = 0, maxScore = 0;
		Random^ rnd = gcnew Random();

private: void LoadQuestion(int questionIndex)
	{
		Question^ question = Questions[questionIndex];
		buttonConfirm->Enabled = question->isSaved;
		panelAnswers->Controls->Clear();
		if (question->Type == QuestionType::SingleChoice && (SingleChoiceButtons == nullptr || SingleChoiceButtons->Length != Questions[questionIndex]->AnswerAmount))
			SingleChoiceButtons = gcnew array<RadioButton^>(Questions[questionIndex]->AnswerAmount);
		else if (MultipleChoiceButtons == nullptr || MultipleChoiceButtons->Length != Questions[questionIndex]->AnswerAmount)
			MultipleChoiceButtons = gcnew array<CheckBox^>(Questions[questionIndex]->AnswerAmount);

		int N = question->AnswerAmount;
		labelQuestion->Text = question->QuestionText;
		labelScoreQuestion->Text = Convert::ToString(question->userScore);
		labelScoreMaxQuestion->Text = Convert::ToString(question->Score);
		if (question->ImageName != "" && File::Exists("Images\\" + question->ImageName))
		{
			pictureBox1->Image = Image::FromFile("Images\\" + question->ImageName);
			pictureBox1->Visible = true;
		}
		else
		{
			pictureBox1->Visible = false;
		}
		if (question->Type == QuestionType::SingleChoice)
		{
			for (int i = 0; i < N; i++)
			{
				SingleChoiceButtons[i] = gcnew RadioButton;
				SingleChoiceButtons[i]->AutoSize = true;
				SingleChoiceButtons[i]->ForeColor = Color::Black;
				SingleChoiceButtons[i]->Font = gcnew System::Drawing::Font("Comic Sans MS", 20);
				SingleChoiceButtons[i]->Text = question->Answers[i];
				SingleChoiceButtons[i]->Click += gcnew System::EventHandler(this, &QuizForm::radioButton_Click);
				if (question->isSaved)
					SingleChoiceButtons[i]->Checked = question->UserAnswers[i];
				panelAnswers->Controls->Add(SingleChoiceButtons[i]);
			}
			if (question->isAnswered)
				question->MarkCorrectAnswers(SingleChoiceButtons);
		}
		else
		{
			for (int i = 0; i < N; i++)
			{
				MultipleChoiceButtons[i] = gcnew CheckBox;
				MultipleChoiceButtons[i]->AutoSize = true;
				MultipleChoiceButtons[i]->ForeColor = Color::Black;
				MultipleChoiceButtons[i]->Font = gcnew System::Drawing::Font("Comic Sans MS", 20);
				MultipleChoiceButtons[i]->Text = question->Answers[i];
				MultipleChoiceButtons[i]->Click += gcnew System::EventHandler(this, &QuizForm::checkbox_Click);
				if (question->isSaved)
					MultipleChoiceButtons[i]->Checked = question->UserAnswers[i];
				panelAnswers->Controls->Add(MultipleChoiceButtons[i]);
			}
			if (question->isAnswered)
				question->MarkCorrectAnswers(MultipleChoiceButtons);
		}
		if (question->isAnswered)
			buttonConfirm->Enabled = false;
	}

	private: void randomizeQuestions()
	{
		for (int i = 0; i < Questions->Length; i++)
		{
			int j = rnd->Next(0, Questions->Length);
			Question^ temp = Questions[i];
			Questions[i] = Questions[j];
			Questions[j] = temp;
		}
	}

	private: System::Void QuizForm_Load(System::Object^ sender, System::EventArgs^ e) 
	{
		array<String^>^ QuestionFiles = Directory::GetFiles("Questions");
		Questions = gcnew array<Question^>(QuestionFiles->Length);
		for (int i = 0; i < QuestionFiles->Length; i++)
		{
			Questions[i] = gcnew Question(QuestionFiles[i]);
			maxScore += Questions[i]->Score;
			Questions[i]->randomizeAnswers();
		}
		randomizeQuestions();
		labelMaxScore->Text = Convert::ToString(maxScore);
		LoadQuestion(0);
	}

	private: void SaveAnswers()
	{
		Question^ question = Questions[CurrentQuestion];
		array<bool>^ answers = gcnew array<bool>(question->AnswerAmount);
		for (int i = 0; i < question->AnswerAmount; i++)
		{
			if (question->Type == QuestionType::SingleChoice)
				answers[i] = SingleChoiceButtons[i]->Checked;
			else
				answers[i] = MultipleChoiceButtons[i]->Checked;
		}
		question->SaveMarkedAnswers(answers);
	}

	private: System::Void buttonNext_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		SaveAnswers();
		if (CurrentQuestion < Questions->Length - 1)
		{
			CurrentQuestion++;
			LoadQuestion(CurrentQuestion);
		}
	}
	private: System::Void buttonBack_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		SaveAnswers();
		if (CurrentQuestion > 0)
		{
			CurrentQuestion--;
			LoadQuestion(CurrentQuestion);
		}
	}

	private: System::Void radioButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		buttonConfirm->Enabled = true;
	}

	private: System::Void checkbox_Click(System::Object^ sender, System::EventArgs^ e)
	{
		for (int i = 0; i < MultipleChoiceButtons->Length; i++)
			if (MultipleChoiceButtons[i]->Checked)
			{
				buttonConfirm->Enabled = true;
				return;
			}
		buttonConfirm->Enabled = false;
	}

	private: System::Void Close(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) 
	{
		Application::Exit();
	}
	private: System::Void buttonHome_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->Hide();
		StartInstance->Show();
	}
	private: System::Void buttonConfirm_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		Question^ question = Questions[CurrentQuestion];
		if (question->isAnswered)
			return;
		SaveAnswers();
		question->userScore = question->CheckAnswers(question->UserAnswers);
		Score += question->userScore;
		labelScoreQuestion->Text = Convert::ToString(question->userScore);
		labelScore->Text = Convert::ToString(Score);
		question->isAnswered = true;
		if (question->Type == QuestionType::SingleChoice)
			question->MarkCorrectAnswers(SingleChoiceButtons);
		else
			question->MarkCorrectAnswers(MultipleChoiceButtons);
		buttonConfirm->Enabled = false;
	}
};
}
