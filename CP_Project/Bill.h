#pragma once

namespace CP_Project {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Bill
	/// </summary>
	public ref class Bill : public System::Windows::Forms::Form
	{
	public:
		Bill(void)
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
		~Bill()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;




	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;


	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label10;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 16, System::Drawing::FontStyle::Italic));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Location = System::Drawing::Point(27, 142);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(84, 26);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Cinema : ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label2->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 16, System::Drawing::FontStyle::Italic));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label2->Location = System::Drawing::Point(27, 191);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(81, 26);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Snacks : ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label3->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 16, System::Drawing::FontStyle::Italic));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label3->Location = System::Drawing::Point(27, 243);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(133, 26);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Total Amount: ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label4->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 16, System::Drawing::FontStyle::Italic));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label4->Location = System::Drawing::Point(27, 92);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(77, 26);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Movie : ";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label5->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 16, System::Drawing::FontStyle::Italic));
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label5->Location = System::Drawing::Point(93, 297);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(222, 26);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Thank You For All this! :) ";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label6->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 29, System::Drawing::FontStyle::Italic));
			this->label6->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label6->Location = System::Drawing::Point(90, 27);
			this->label6->Name = L"label6";
			this->label6->Padding = System::Windows::Forms::Padding(80, 0, 80, 0);
			this->label6->Size = System::Drawing::Size(230, 47);
			this->label6->TabIndex = 9;
			this->label6->Text = L"Bill";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Lavender;
			this->label9->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 16, System::Drawing::FontStyle::Italic));
			this->label9->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label9->Location = System::Drawing::Point(210, 92);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(17, 26);
			this->label9->TabIndex = 12;
			this->label9->Text = L" ";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Lavender;
			this->label7->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 16, System::Drawing::FontStyle::Italic));
			this->label7->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label7->Location = System::Drawing::Point(210, 191);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(17, 26);
			this->label7->TabIndex = 13;
			this->label7->Text = L" ";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Lavender;
			this->label8->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 16, System::Drawing::FontStyle::Italic));
			this->label8->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label8->Location = System::Drawing::Point(210, 133);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(17, 26);
			this->label8->TabIndex = 14;
			this->label8->Text = L" ";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Lavender;
			this->label10->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 16, System::Drawing::FontStyle::Italic));
			this->label10->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label10->Location = System::Drawing::Point(210, 243);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(17, 26);
			this->label10->TabIndex = 15;
			this->label10->Text = L" ";
			// 
			// Bill
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(425, 345);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Bill";
			this->Text = L"Bill";
			this->Load += gcnew System::EventHandler(this, &Bill::Bill_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Bill_Load(System::Object^  sender, System::EventArgs^  e) {
	}
};
}
