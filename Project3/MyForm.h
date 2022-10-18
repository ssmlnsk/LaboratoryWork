#pragma once
#include <string>

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
	/// Сводка для MyForm
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
		/// Освободить все используемые ресурсы.
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
	private: System::Windows::Forms::TextBox^ em;




	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ pas;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog2;

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->log = (gcnew System::Windows::Forms::TextBox());
			this->em = (gcnew System::Windows::Forms::TextBox());
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
			// em
			// 
			this->em->Location = System::Drawing::Point(74, 52);
			this->em->Name = L"em";
			this->em->Size = System::Drawing::Size(100, 20);
			this->em->TabIndex = 3;
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
			this->button1->Text = L"Sign in";
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
			this->Controls->Add(this->em);
			this->Controls->Add(this->log);
			this->Controls->Add(this->label1);
			this->MaximumSize = System::Drawing::Size(217, 217);
			this->MinimumSize = System::Drawing::Size(217, 217);
			this->Name = L"MyForm";
			this->Text = L"Authorization";
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
		int b = 0;
		int state = 0;
		String^ name = "";
		String^ host = "";
		String^ zone = "";
		bool flag = false;
		bool found = false;

		String^ login = log->Text;

		String^ email = em->Text;

		try
		{
			for (int i = 0; i < email->Length; i++)
			{
				if (email[i] == '@')
				{
					flag = true;
					break;
				}
				b = b + 1;
				name = name + email[i];
			}

			if (flag == false)
			{
				throw gcnew System::Exception("Error email");
			}

			state = state + 1;
			if (state == 1)
			{
				for (int w = b + 1; w < email->Length; w++)
				{
					if (email[w] == '@' || email[w] == '.')
						break;
					host = host + email[w];
				}
				state = state + 1;
				if (state == 2)
				{
					for (int i = 0; i < email->Length; i++)
					{
						if (email[i] == '.')
							found = true;
						if (found)
							zone = zone + email[i];
					}
				}
				if (found == false)
				{
					throw gcnew System::Exception("Error email");
				}
			}
		}
		catch (System::Exception^ e)
		{
			MessageBox::Show("Ошибка ввода почты", "Почта", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}

		String^ password = pas->Text;
		int HashPas = 0;
		if (password != ""){
			HashPas = password->GetHashCode();
		}
		else {
			MessageBox::Show("Введите пароль!", "Пароль", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
		String^ hash = Convert::ToString(HashPas);

		cli::array<String^>^ user = gcnew cli::array<String^>{"", "", ""};
		user[0] = login;
		user[1] = email;
		user[2] = hash;

		StreamWriter^ sw = gcnew StreamWriter("./User.json");
		for (int i = 0; i < 3; i++) {
			sw->WriteLine(user[i]);
		}
		sw->Close();
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}

};
}
