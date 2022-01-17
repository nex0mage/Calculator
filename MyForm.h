#pragma once
namespace Calculator {
	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ComboBox^ comboBox1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 122);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(495, 30);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(12, 192);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(495, 30);
			this->textBox2->TabIndex = 1;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(12, 261);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(495, 30);
			this->textBox3->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(8, 96);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(123, 23);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Первое число:";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(8, 166);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(119, 23);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Второе число:";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(8, 235);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(89, 23);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Результат:";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 297);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(157, 29);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Вычислить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 332);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(157, 29);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Сбросить";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(8, 9);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(101, 23);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Действие --";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
				L"Сложение", L"Вычитание", L"Умножение", L"Деление",
					L"Возведение NUM1 в степень NUM2", L"Корень NUM1 (NUM2 - любое число)", L"Синус NUM1 (NUM2 - любое число)", L"Косинус NUM1 (NUM2 - любое число)",
					L"Тангенс NUM1 (NUM2 - любое число)", L"Катангенс NUM1 (NUM2 - любое число)"
			});
			this->comboBox1->Location = System::Drawing::Point(12, 35);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(495, 31);
			this->comboBox1->TabIndex = 9;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 23);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightSkyBlue;
			this->ClientSize = System::Drawing::Size(519, 415);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"MyForm";
			this->Text = L"Калькулятор";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {


	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
		   //создаём защиту
		   bool Protect() {
			   if ((textBox1->Text->Length == 0) || (textBox2->Text->Length == 0)) { return false; }
			   for (int i = 0; i < textBox1->Text->Length; i++) {
				   if ((textBox1->Text[i] >= '0') && (textBox1->Text[i] <= '9') || (textBox1->Text[i] == ',')) {}
				   else { return false; }
			   }
			   
				  for (int i = 0; i < textBox2->Text->Length; i++) {
					   if ((textBox2->Text[i] >= '0') && (textBox2->Text[i] <= '9') || (textBox2->Text[i] == ',')) {}
					   else { return false; }
				   }
			   return true;
		   }
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (Protect()) {
			double Num1, Num2, Result;
			Num1 = System::Convert::ToDouble(textBox1->Text);
			Num2 = System::Convert::ToDouble(textBox2->Text);
			const double pi = Math::Acos(-1);

			if (comboBox1->SelectedItem == "Сложение") {
				Result = Num1 + Num2;
				label4->Text = L"Сложение";
			}
			else
			if (comboBox1->SelectedItem == "Вычитание") {
					Result = Num1 - Num2;
					label4->Text = L"Вычитание";
			}
			else
			if (comboBox1->SelectedItem == "Умножение") {
					Result = Num1 * Num2;
					label4->Text = L"Умножение";
			}
			else
			if (comboBox1->SelectedItem == "Деление") {
					Result = Num1 / Num2;
					label4->Text = L"Деление";
			}
			else
				if (comboBox1->SelectedItem == "Возведение NUM1 в степень NUM2") {
					Result = Num1 * Num1;
					for (int i = 0; i < Num2 - 2; i++) {
						Result = Result * Num1;
					};
					label4->Text = L"Возведение NUM1 в степень NUM2";
				}
				else
					if (comboBox1->SelectedItem == "Корень NUM1 (NUM2 - любое число)") {
						Result = Math::Sqrt(Num1);
						label4->Text = L"Корень NUM1 (NUM2 - любое число";
					}
					else
						if (comboBox1->SelectedItem == "Синус NUM1 (NUM2 - любое число)") {
							Result = Math::Sin(Num1*pi/180);
							label4->Text = L"Синус NUM1 (NUM2 - любое число)";
						}
					else
						if (comboBox1->SelectedItem == "Косинус NUM1 (NUM2 - любое число)") {
							Result = Math::Cos(Num1 * pi / 180);
							label4->Text = L"Косинус NUM1 (NUM2 - любое число)";
						}
					else
						if (comboBox1->SelectedItem == "Тангенс (NUM2 - любое число)") {
							Result = Math::Tan(Math::Sin(Num1 * pi / 180) / Math::Cos(Num1 * pi / 180));
							label4->Text = L"Тангенс (NUM2 - любое число)";
						}
					else
						if (comboBox1->SelectedItem == "Катангенс (NUM2 - любое число)") {
							Result = Math::Tan(Math::Cos(Num1 * pi / 180) / Math::Sin(Num1 * pi / 180));
							label4->Text = L"Катангенс (NUM2 - любое число)";
						}

			else { MessageBox::Show("Блин, ошибка!"); }
			textBox3->Text = System::Convert::ToString(Result);
		}
		else {MessageBox::Show("Блин, ошибка ввода!");
		}
	}
	}
	; }