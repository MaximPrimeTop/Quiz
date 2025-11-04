#pragma once

#include "StartForm.h";

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
	private: System::Windows::Forms::Panel^ panelResult;
	private: System::Windows::Forms::Label^ Score;







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
			this->labelQuestion = (gcnew System::Windows::Forms::Label());
			this->panelResult = (gcnew System::Windows::Forms::Panel());
			this->Score = (gcnew System::Windows::Forms::Label());
			this->panelQuiz->SuspendLayout();
			this->panelResult->SuspendLayout();
			this->SuspendLayout();
			// 
			// buttonNext
			// 
			this->buttonNext->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->buttonNext->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->buttonNext->Font = (gcnew System::Drawing::Font(L"Papyrus", 45));
			this->buttonNext->Location = System::Drawing::Point(800, 500);
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
			this->buttonConfirm->Location = System::Drawing::Point(400, 500);
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
			this->panelAnswers->BackColor = System::Drawing::Color::White;
			this->panelAnswers->FlowDirection = System::Windows::Forms::FlowDirection::TopDown;
			this->panelAnswers->ForeColor = System::Drawing::Color::Transparent;
			this->panelAnswers->Location = System::Drawing::Point(0, 150);
			this->panelAnswers->Name = L"panelAnswers";
			this->panelAnswers->Size = System::Drawing::Size(1000, 350);
			this->panelAnswers->TabIndex = 0;
			// 
			// panelQuiz
			// 
			this->panelQuiz->BackColor = System::Drawing::Color::White;
			this->panelQuiz->Controls->Add(this->buttonConfirm);
			this->panelQuiz->Controls->Add(this->buttonBack);
			this->panelQuiz->Controls->Add(this->buttonNext);
			this->panelQuiz->Controls->Add(this->panelAnswers);
			this->panelQuiz->Controls->Add(this->labelQuestion);
			this->panelQuiz->Location = System::Drawing::Point(12, 50);
			this->panelQuiz->Name = L"panelQuiz";
			this->panelQuiz->Size = System::Drawing::Size(1000, 600);
			this->panelQuiz->TabIndex = 5;
			// 
			// labelQuestion
			// 
			this->labelQuestion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelQuestion->Location = System::Drawing::Point(20, 20);
			this->labelQuestion->Name = L"labelQuestion";
			this->labelQuestion->Size = System::Drawing::Size(960, 120);
			this->labelQuestion->TabIndex = 0;
			this->labelQuestion->Text = L"Philosophical question";
			// 
			// panelResult
			// 
			this->panelResult->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->panelResult->Controls->Add(this->Score);
			this->panelResult->Location = System::Drawing::Point(1018, 50);
			this->panelResult->Name = L"panelResult";
			this->panelResult->Size = System::Drawing::Size(232, 500);
			this->panelResult->TabIndex = 6;
			// 
			// Score
			// 
			this->Score->AutoSize = true;
			this->Score->Location = System::Drawing::Point(12, 13);
			this->Score->Name = L"Score";
			this->Score->Size = System::Drawing::Size(35, 13);
			this->Score->TabIndex = 0;
			this->Score->Text = L"label1";
			// 
			// QuizForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1264, 681);
			this->Controls->Add(this->panelResult);
			this->Controls->Add(this->buttonHome);
			this->Controls->Add(this->panelQuiz);
			this->Name = L"QuizForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Prostate exam";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &QuizForm::Close);
			this->Load += gcnew System::EventHandler(this, &QuizForm::QuizForm_Load);
			this->panelQuiz->ResumeLayout(false);
			this->panelResult->ResumeLayout(false);
			this->panelResult->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

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
			bool hasImage = true;
			int Score;
			bool isSaved = false;
			array<bool>^ UserAnswers;
		private:
			array<bool>^ CorrectAnswers;
			String^ ImageName;
		public:
			Question(QuestionType type, String^ questionText, array<String^>^ answers, int answerAmount, array<bool>^ correctAnswers, String^ imageName, int score)
			{
				Type = type;
				QuestionText = questionText;
				Answers = answers;
				AnswerAmount = answerAmount;
				CorrectAnswers = correctAnswers;
				Score = score;
				if (imageName == "")
					hasImage = false;
				else
					ImageName = imageName;
			}

			bool CheckAnswers(array<bool>^ answers)
			{
				for (int i = 0; i < AnswerAmount; i++)
					if (CorrectAnswers[i] != answers[i])
						return false;
				return true;
			}

			void SaveMarkedAnswers(array<bool>^ answers)
			{
				UserAnswers = answers;
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
	};
	private: 
		array<Question^>^ Questions;
		int CurrentQuestion = 0;
		int QuestionAmount;
		array<RadioButton^>^ SingleChoiceButtons;
		array<CheckBox^>^ MultipleChoiceButtons;
	
private: void LoadQuestion(int questionIndex)
	{
		Question^ question = Questions[questionIndex];
		panelAnswers->Controls->Clear();
		if (question->Type == QuestionType::SingleChoice && (SingleChoiceButtons == nullptr || SingleChoiceButtons->Length != Questions[questionIndex]->AnswerAmount))
			SingleChoiceButtons = gcnew array<RadioButton^>(Questions[questionIndex]->AnswerAmount);
		else if (MultipleChoiceButtons == nullptr || MultipleChoiceButtons->Length != Questions[questionIndex]->AnswerAmount)
			MultipleChoiceButtons = gcnew array<CheckBox^>(Questions[questionIndex]->AnswerAmount);

		int N = question->AnswerAmount;
		labelQuestion->Text = question->QuestionText;
		if (question->Type == QuestionType::SingleChoice)
		{
			for (int i = 0; i < N; i++)
			{
				SingleChoiceButtons[i] = gcnew RadioButton;
				SingleChoiceButtons[i]->AutoSize = true;
				SingleChoiceButtons[i]->ForeColor = Color::Black;
				SingleChoiceButtons[i]->Font = gcnew System::Drawing::Font("Microsoft Sans Serif", 24);
				SingleChoiceButtons[i]->Text = question->Answers[i];
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
				MultipleChoiceButtons[i]->Font = gcnew System::Drawing::Font("Microsoft Sans Serif", 24);
				MultipleChoiceButtons[i]->Text = question->Answers[i];
				if (question->isSaved)
					MultipleChoiceButtons[i]->Checked = question->UserAnswers[i];
				panelAnswers->Controls->Add(MultipleChoiceButtons[i]);
			}
			if (question->isAnswered)
				question->MarkCorrectAnswers(MultipleChoiceButtons);
		}
	}

	private: System::Void QuizForm_Load(System::Object^ sender, System::EventArgs^ e) 
	{
		// this is just for testing without files
		Questions = gcnew array<Question^>
		{
			gcnew Question(QuestionType::SingleChoice, "How many Purple Flowers can be found on the ginger island in Stardew Valley?", gcnew array<String^> {"22", "21", "23", "24", "25", "26"}, 6, gcnew array<bool> {true, false, false, false, false, false}, "purple_flowers.jpg", 1),
			gcnew Question(QuestionType::SingleChoice, "What is love?", gcnew array<String^> {"emotion", "baby dont hurt me dont hurt me no more"}, 2, gcnew array<bool> {false, true}, "", 1),
			gcnew Question(QuestionType::MultipleChoice, "Choose only correct statements.", gcnew array<String^> {"this year is 3026", "the creator of this quiz is cool", "Coding is literally the best thing ever", "uhhhh i dunno what to type here pretend this is wrong"}, 4, gcnew array<bool> {false, true, true, false}, "", 1)
		};
		LoadQuestion(0);
	}

	private: void SaveAnswers()
	{
		Question^ question = Questions[CurrentQuestion];
		question->isSaved = true;
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
		if (question->CheckAnswers(question->UserAnswers))
		{
			//count score
		}
		else
		{
			//count score differently
		}
		question->isAnswered = true;
		if (question->Type == QuestionType::SingleChoice)
			question->MarkCorrectAnswers(SingleChoiceButtons);
		else
			question->MarkCorrectAnswers(MultipleChoiceButtons);
	}
};
}
