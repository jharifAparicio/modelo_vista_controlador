#pragma once

namespace VIEW {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox ^cbbNames;
	private: System::Windows::Forms::TextBox ^tbnames;
	private: System::Windows::Forms::Label ^messenge;
	protected:


	private: System::Windows::Forms::Button ^btnView;
	private: System::Windows::Forms::Button ^btClean;
	private: System::Windows::Forms::Label ^label1;
	private: System::Windows::Forms::TextBox ^tbNum1;
	private: System::Windows::Forms::TextBox ^tbNum2;
	private: System::Windows::Forms::Label ^label2;
	private: System::Windows::Forms::Label ^label3;
	private: System::Windows::Forms::Label ^label4;
	private: System::Windows::Forms::TextBox ^tbResult;

	private: System::Windows::Forms::Button ^btnAdd;
	private: System::Windows::Forms::Button ^btnMultiply;
	private: System::Windows::Forms::Button ^btnClearResult;
	private: System::Windows::Forms::Button ^btnClose;







	protected:

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
			this->cbbNames = (gcnew System::Windows::Forms::ComboBox ());
			this->tbnames = (gcnew System::Windows::Forms::TextBox ());
			this->messenge = (gcnew System::Windows::Forms::Label ());
			this->btnView = (gcnew System::Windows::Forms::Button ());
			this->btClean = (gcnew System::Windows::Forms::Button ());
			this->label1 = (gcnew System::Windows::Forms::Label ());
			this->tbNum1 = (gcnew System::Windows::Forms::TextBox ());
			this->tbNum2 = (gcnew System::Windows::Forms::TextBox ());
			this->label2 = (gcnew System::Windows::Forms::Label ());
			this->label3 = (gcnew System::Windows::Forms::Label ());
			this->label4 = (gcnew System::Windows::Forms::Label ());
			this->tbResult = (gcnew System::Windows::Forms::TextBox ());
			this->btnAdd = (gcnew System::Windows::Forms::Button ());
			this->btnMultiply = (gcnew System::Windows::Forms::Button ());
			this->btnClearResult = (gcnew System::Windows::Forms::Button ());
			this->btnClose = (gcnew System::Windows::Forms::Button ());
			this->SuspendLayout ();
			// 
			// cbbNames
			// 
			this->cbbNames->FormattingEnabled = true;
			this->cbbNames->Items->AddRange (gcnew cli::array< System::Object ^  > (5) {
				L"APARICIO", L"BLANCO", L"MARTINEZ", L"CASILLAS",
					L"FERNANDEZ"
			});
			this->cbbNames->Location = System::Drawing::Point (82, 38);
			this->cbbNames->Name = L"cbbNames";
			this->cbbNames->Size = System::Drawing::Size (190, 21);
			this->cbbNames->TabIndex = 0;
			// 
			// tbnames
			// 
			this->tbnames->Location = System::Drawing::Point (117, 65);
			this->tbnames->Name = L"tbnames";
			this->tbnames->Size = System::Drawing::Size (100, 20);
			this->tbnames->TabIndex = 1;
			// 
			// messenge
			// 
			this->messenge->AutoSize = true;
			this->messenge->Location = System::Drawing::Point (147, 95);
			this->messenge->Name = L"messenge";
			this->messenge->Size = System::Drawing::Size (0, 13);
			this->messenge->TabIndex = 2;
			// 
			// btnView
			// 
			this->btnView->Location = System::Drawing::Point (126, 134);
			this->btnView->Name = L"btnView";
			this->btnView->Size = System::Drawing::Size (75, 23);
			this->btnView->TabIndex = 3;
			this->btnView->Text = L"VIEW";
			this->btnView->UseVisualStyleBackColor = true;
			this->btnView->Click += gcnew System::EventHandler (this, &MyForm::btnView_Click);
			// 
			// btClean
			// 
			this->btClean->Location = System::Drawing::Point (126, 163);
			this->btClean->Name = L"btClean";
			this->btClean->Size = System::Drawing::Size (75, 23);
			this->btClean->TabIndex = 4;
			this->btClean->Text = L"CLEAN";
			this->btClean->UseVisualStyleBackColor = true;
			this->btClean->Click += gcnew System::EventHandler (this, &MyForm::btClean_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font (L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															   static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point (527, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size (83, 16);
			this->label1->TabIndex = 5;
			this->label1->Text = L"SUMADOR";
			// 
			// tbNum1
			// 
			this->tbNum1->Location = System::Drawing::Point (367, 65);
			this->tbNum1->Name = L"tbNum1";
			this->tbNum1->Size = System::Drawing::Size (100, 20);
			this->tbNum1->TabIndex = 6;
			// 
			// tbNum2
			// 
			this->tbNum2->Location = System::Drawing::Point (628, 65);
			this->tbNum2->Name = L"tbNum2";
			this->tbNum2->Size = System::Drawing::Size (100, 20);
			this->tbNum2->TabIndex = 7;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font (L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
															   static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point (372, 38);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size (63, 13);
			this->label2->TabIndex = 8;
			this->label2->Text = L"NUMBER 1";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font (L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
															   static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point (632, 38);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size (63, 13);
			this->label3->TabIndex = 9;
			this->label3->Text = L"NUMBER 2";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font (L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
															   static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point (369, 133);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size (50, 13);
			this->label4->TabIndex = 11;
			this->label4->Text = L"RESULT";
			// 
			// tbResult
			// 
			this->tbResult->Location = System::Drawing::Point (364, 160);
			this->tbResult->Name = L"tbResult";
			this->tbResult->Size = System::Drawing::Size (100, 20);
			this->tbResult->TabIndex = 10;
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point (515, 160);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size (75, 23);
			this->btnAdd->TabIndex = 12;
			this->btnAdd->Text = L"ADD";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler (this, &MyForm::btnAdd_Click);
			// 
			// btnMultiply
			// 
			this->btnMultiply->Location = System::Drawing::Point (596, 157);
			this->btnMultiply->Name = L"btnMultiply";
			this->btnMultiply->Size = System::Drawing::Size (75, 23);
			this->btnMultiply->TabIndex = 14;
			this->btnMultiply->Text = L"MULTIPLY";
			this->btnMultiply->UseVisualStyleBackColor = true;
			this->btnMultiply->Click += gcnew System::EventHandler (this, &MyForm::btnMultiply_Click);
			// 
			// btnClearResult
			// 
			this->btnClearResult->Location = System::Drawing::Point (515, 189);
			this->btnClearResult->Name = L"btnClearResult";
			this->btnClearResult->Size = System::Drawing::Size (75, 23);
			this->btnClearResult->TabIndex = 13;
			this->btnClearResult->Text = L"CLEAN";
			this->btnClearResult->UseVisualStyleBackColor = true;
			this->btnClearResult->Click += gcnew System::EventHandler (this, &MyForm::btnClearResult_Click);
			// 
			// btnClose
			// 
			this->btnClose->Location = System::Drawing::Point (742, 277);
			this->btnClose->Name = L"btnClose";
			this->btnClose->Size = System::Drawing::Size (75, 23);
			this->btnClose->TabIndex = 15;
			this->btnClose->Text = L"CLOSE";
			this->btnClose->UseVisualStyleBackColor = true;
			this->btnClose->Click += gcnew System::EventHandler (this, &MyForm::btnClose_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF (6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size (829, 312);
			this->Controls->Add (this->btnClose);
			this->Controls->Add (this->btnMultiply);
			this->Controls->Add (this->btnClearResult);
			this->Controls->Add (this->btnAdd);
			this->Controls->Add (this->label4);
			this->Controls->Add (this->tbResult);
			this->Controls->Add (this->label3);
			this->Controls->Add (this->label2);
			this->Controls->Add (this->tbNum2);
			this->Controls->Add (this->tbNum1);
			this->Controls->Add (this->label1);
			this->Controls->Add (this->btClean);
			this->Controls->Add (this->btnView);
			this->Controls->Add (this->messenge);
			this->Controls->Add (this->tbnames);
			this->Controls->Add (this->cbbNames);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout (false);
			this->PerformLayout ();

		}
#pragma endregion
	private: System::Void btnView_Click (System::Object ^sender, System::EventArgs ^e) {
		this->tbnames->Text = this->cbbNames->Text;
		this->messenge->Text = "Hola a todos " ;
	}
	private: System::Void btClean_Click (System::Object ^sender, System::EventArgs ^e) {
		this->tbnames->Text = "";
		this->messenge->Text = "";
		this->cbbNames->Text = "";
	}
	private: System::Void btnAdd_Click (System::Object ^sender, System::EventArgs ^e) {
		this->tbResult->Text = Convert::ToString (Convert::ToInt32 (this->tbNum1->Text) +
												  Convert::ToInt32 (this->tbNum2->Text));
	}
	private: System::Void btnClearResult_Click (System::Object ^sender, System::EventArgs ^e) {
		this->tbResult->Text = "";
		this->tbNum1->Text = "";
		this->tbNum2->Text = "";
	}
	private: System::Void btnMultiply_Click (System::Object ^sender, System::EventArgs ^e) {
		this->tbResult->Text = Convert::ToString (Convert::ToInt32 (this->tbNum1->Text) *
														  Convert::ToInt32 (this->tbNum2->Text));
	}
	private: System::Void btnClose_Click (System::Object ^sender, System::EventArgs ^e) {
		this->Close ();
	}
};
}
