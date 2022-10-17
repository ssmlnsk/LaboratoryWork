#pragma once
#include <string>
#include <vector>

namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	using namespace System::IO;


	int HashCode(String^ Operand);

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ log;
	private: System::Windows::Forms::TextBox^ email;



	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ pas;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog2;

	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->log = (gcnew System::Windows::Forms::TextBox());
			this->email = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pas = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->saveFileDialog2 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(33, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Login";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// log
			// 
			this->log->Location = System::Drawing::Point(74, 25);
			this->log->Name = L"log";
			this->log->Size = System::Drawing::Size(100, 20);
			this->log->TabIndex = 2;
			// 
			// email
			// 
			this->email->Location = System::Drawing::Point(74, 52);
			this->email->Name = L"email";
			this->email->Size = System::Drawing::Size(100, 20);
			this->email->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 52);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(36, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"E-Mail";
			// 
			// pas
			// 
			this->pas->Location = System::Drawing::Point(74, 79);
			this->pas->Name = L"pas";
			this->pas->Size = System::Drawing::Size(100, 20);
			this->pas->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 79);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(53, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Password";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(98, 144);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 7;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// saveFileDialog1
			// 
			this->saveFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &MyForm::saveFileDialog1_FileOk);
			// 
			// saveFileDialog2
			// 
			this->saveFileDialog2->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &MyForm::saveFileDialog2_FileOk);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(201, 178);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->pas);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->email);
			this->Controls->Add(this->log);
			this->Controls->Add(this->label1);
			this->MaximumSize = System::Drawing::Size(217, 217);
			this->MinimumSize = System::Drawing::Size(217, 217);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void saveFileDialog1_FileOk(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
	}
	private: System::Void saveFileDialog2_FileOk(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ login = log->Text;
		this->log->Text = login;

		String^ em = email->Text;
		this->email->Text = em;

		String^ password = pas->Text;
		int HashPas = password->GetHashCode();
		String^ hash = Convert::ToString(HashPas);
		pas->Text = hash;
		
		cli::array<String^>^ user = gcnew cli::array<String^> {"login", "em", "hash"};

		StreamWriter^ sw = gcnew StreamWriter("./Data.json");
		for (int i = 0; i < 3; i++) {
			sw->WriteLine(user[i]);
		}
		sw->Close();
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}

};
}
