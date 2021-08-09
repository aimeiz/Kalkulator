#pragma once

namespace Kalkulator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Globalization;
	using namespace System::Threading;

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
			cleanup();
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

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::TextBox^ textBox1;



	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;
		//Zmienne kalkulatora SP5IOU
		double operand1 = 0;
		double operand2 = 0;
		double result = 0;
		int state = 0; //0 - Calculator cleared, 1 - operand1 entered, 2 -  operand2 entered 3 - result displayed
		bool comaEntered = false;
		System::String^ operand = "";
	private: bool nonNumberEntered = false;

#pragma region Windows Form Designer generated code
		   /// <summary>
		   /// Required method for Designer support - do not modify
		   /// the contents of this method with the code editor.
		   /// </summary>
		   void InitializeComponent(void)
		   {
			   System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			   this->button1 = (gcnew System::Windows::Forms::Button());
			   this->button2 = (gcnew System::Windows::Forms::Button());
			   this->button3 = (gcnew System::Windows::Forms::Button());
			   this->button4 = (gcnew System::Windows::Forms::Button());
			   this->button5 = (gcnew System::Windows::Forms::Button());
			   this->button6 = (gcnew System::Windows::Forms::Button());
			   this->button7 = (gcnew System::Windows::Forms::Button());
			   this->button8 = (gcnew System::Windows::Forms::Button());
			   this->button9 = (gcnew System::Windows::Forms::Button());
			   this->button10 = (gcnew System::Windows::Forms::Button());
			   this->button11 = (gcnew System::Windows::Forms::Button());
			   this->button12 = (gcnew System::Windows::Forms::Button());
			   this->button13 = (gcnew System::Windows::Forms::Button());
			   this->button14 = (gcnew System::Windows::Forms::Button());
			   this->button15 = (gcnew System::Windows::Forms::Button());
			   this->button16 = (gcnew System::Windows::Forms::Button());
			   this->button17 = (gcnew System::Windows::Forms::Button());
			   this->button18 = (gcnew System::Windows::Forms::Button());
			   this->button19 = (gcnew System::Windows::Forms::Button());
			   this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			   this->button20 = (gcnew System::Windows::Forms::Button());
			   this->SuspendLayout();
			   // 
			   // button1
			   // 
			   this->button1->BackColor = System::Drawing::Color::Yellow;
			   this->button1->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			   resources->ApplyResources(this->button1, L"button1");
			   this->button1->Name = L"button1";
			   this->button1->UseVisualStyleBackColor = false;
			   this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			   // 
			   // button2
			   // 
			   this->button2->BackColor = System::Drawing::Color::Yellow;
			   resources->ApplyResources(this->button2, L"button2");
			   this->button2->Name = L"button2";
			   this->button2->UseVisualStyleBackColor = false;
			   this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			   // 
			   // button3
			   // 
			   this->button3->BackColor = System::Drawing::Color::Yellow;
			   resources->ApplyResources(this->button3, L"button3");
			   this->button3->Name = L"button3";
			   this->button3->UseVisualStyleBackColor = false;
			   this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			   // 
			   // button4
			   // 
			   this->button4->BackColor = System::Drawing::Color::Yellow;
			   resources->ApplyResources(this->button4, L"button4");
			   this->button4->Name = L"button4";
			   this->button4->UseVisualStyleBackColor = false;
			   this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			   // 
			   // button5
			   // 
			   this->button5->BackColor = System::Drawing::Color::Yellow;
			   resources->ApplyResources(this->button5, L"button5");
			   this->button5->Name = L"button5";
			   this->button5->UseVisualStyleBackColor = false;
			   this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			   // 
			   // button6
			   // 
			   this->button6->BackColor = System::Drawing::Color::Yellow;
			   resources->ApplyResources(this->button6, L"button6");
			   this->button6->Name = L"button6";
			   this->button6->UseVisualStyleBackColor = false;
			   this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			   // 
			   // button7
			   // 
			   this->button7->BackColor = System::Drawing::Color::Yellow;
			   resources->ApplyResources(this->button7, L"button7");
			   this->button7->Name = L"button7";
			   this->button7->UseVisualStyleBackColor = false;
			   this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			   // 
			   // button8
			   // 
			   this->button8->BackColor = System::Drawing::Color::Yellow;
			   resources->ApplyResources(this->button8, L"button8");
			   this->button8->Name = L"button8";
			   this->button8->UseVisualStyleBackColor = false;
			   this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			   // 
			   // button9
			   // 
			   this->button9->BackColor = System::Drawing::Color::Yellow;
			   resources->ApplyResources(this->button9, L"button9");
			   this->button9->Name = L"button9";
			   this->button9->UseVisualStyleBackColor = false;
			   this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			   // 
			   // button10
			   // 
			   this->button10->BackColor = System::Drawing::Color::Yellow;
			   resources->ApplyResources(this->button10, L"button10");
			   this->button10->Name = L"button10";
			   this->button10->UseVisualStyleBackColor = false;
			   this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			   // 
			   // button11
			   // 
			   this->button11->BackColor = System::Drawing::Color::Yellow;
			   resources->ApplyResources(this->button11, L"button11");
			   this->button11->Name = L"button11";
			   this->button11->UseVisualStyleBackColor = false;
			   this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			   // 
			   // button12
			   // 
			   this->button12->BackColor = System::Drawing::Color::Yellow;
			   resources->ApplyResources(this->button12, L"button12");
			   this->button12->Name = L"button12";
			   this->button12->UseVisualStyleBackColor = false;
			   this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			   // 
			   // button13
			   // 
			   this->button13->BackColor = System::Drawing::Color::Orange;
			   resources->ApplyResources(this->button13, L"button13");
			   this->button13->Name = L"button13";
			   this->button13->UseVisualStyleBackColor = false;
			   this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			   // 
			   // button14
			   // 
			   this->button14->BackColor = System::Drawing::Color::Orange;
			   resources->ApplyResources(this->button14, L"button14");
			   this->button14->Name = L"button14";
			   this->button14->UseVisualStyleBackColor = false;
			   this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			   // 
			   // button15
			   // 
			   this->button15->BackColor = System::Drawing::Color::Orange;
			   resources->ApplyResources(this->button15, L"button15");
			   this->button15->Name = L"button15";
			   this->button15->UseVisualStyleBackColor = false;
			   this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			   // 
			   // button16
			   // 
			   this->button16->BackColor = System::Drawing::Color::Orange;
			   resources->ApplyResources(this->button16, L"button16");
			   this->button16->Name = L"button16";
			   this->button16->UseVisualStyleBackColor = false;
			   this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			   // 
			   // button17
			   // 
			   this->button17->BackColor = System::Drawing::Color::LawnGreen;
			   resources->ApplyResources(this->button17, L"button17");
			   this->button17->Name = L"button17";
			   this->button17->UseVisualStyleBackColor = false;
			   this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			   // 
			   // button18
			   // 
			   this->button18->BackColor = System::Drawing::Color::LawnGreen;
			   resources->ApplyResources(this->button18, L"button18");
			   this->button18->Name = L"button18";
			   this->button18->UseVisualStyleBackColor = false;
			   this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			   // 
			   // button19
			   // 
			   this->button19->BackColor = System::Drawing::Color::LawnGreen;
			   resources->ApplyResources(this->button19, L"button19");
			   this->button19->Name = L"button19";
			   this->button19->UseVisualStyleBackColor = false;
			   this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
			   // 
			   // textBox1
			   // 
			   resources->ApplyResources(this->textBox1, L"textBox1");
			   this->textBox1->Name = L"textBox1";
			   this->textBox1->ReadOnly = true;
			   // 
			   // button20
			   // 
			   this->button20->BackColor = System::Drawing::Color::Orange;
			   resources->ApplyResources(this->button20, L"button20");
			   this->button20->Name = L"button20";
			   this->button20->UseVisualStyleBackColor = false;
			   this->button20->Click += gcnew System::EventHandler(this, &MyForm::button20_Click);
			   // 
			   // MyForm
			   // 
			   resources->ApplyResources(this, L"$this");
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->BackColor = System::Drawing::Color::DarkBlue;
			   this->Controls->Add(this->button20);
			   this->Controls->Add(this->textBox1);
			   this->Controls->Add(this->button19);
			   this->Controls->Add(this->button18);
			   this->Controls->Add(this->button17);
			   this->Controls->Add(this->button13);
			   this->Controls->Add(this->button14);
			   this->Controls->Add(this->button15);
			   this->Controls->Add(this->button16);
			   this->Controls->Add(this->button12);
			   this->Controls->Add(this->button11);
			   this->Controls->Add(this->button10);
			   this->Controls->Add(this->button7);
			   this->Controls->Add(this->button8);
			   this->Controls->Add(this->button9);
			   this->Controls->Add(this->button4);
			   this->Controls->Add(this->button5);
			   this->Controls->Add(this->button6);
			   this->Controls->Add(this->button3);
			   this->Controls->Add(this->button2);
			   this->Controls->Add(this->button1);
			   this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			   this->KeyPreview = true;
			   this->MaximizeBox = false;
			   this->Name = L"MyForm";
			   this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::MyForm_KeyDown);
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion

	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		addDigit("1");
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		addDigit("2");
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		addDigit("3");
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		addDigit("4");
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		addDigit("5");
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		addDigit("6");
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		addDigit("7");
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		addDigit("8");
	}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
		addDigit("9");
	}
	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text != "0")
			addDigit("0");
	}
	private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
		// / button
		operandPressed("/");
	}
	private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
		// x button
		operandPressed("*");
	}
	private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
		// + button
		operandPressed("+");
		}
	private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
		// - button
		operandPressed("-");
	}
	private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
		// , button
		if (!comaEntered)
		{
			comaEntered = true;
			if (state == 0)
			{
				textBox1->Text = "0";
				state = 1;
			}
			else if (state == 2)
			{
				textBox1->Text = "0";
				state = 3;
			}
			addDigit(decimalPoint());
			comaEntered = true;
		}
	}
	private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
		// +/- button
		addDigit("+/-");
	}
	private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
		// ( ) button
	}
	private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
		// = button
		operandPressed("=");
	}
	private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
		// C button - clears everything
		cleanup();
	}
	private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
		// CE button
	}
	/// <summary>
	/// Entering digits and operands from keyboard Numeric Pad
	/// </summary>
	private: System::Void MyForm_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
//		textBox1->Text = e->KeyCode.ToString();

		if (e->KeyCode.ToString() == "NumPad0")
		{
			addDigit("0");
		}
		else if (e->KeyCode.ToString() == "NumPad1")
		{
			addDigit("1");
		}
		else if (e->KeyCode.ToString() == "NumPad2")
		{
			addDigit("2");
		}
		else if (e->KeyCode.ToString() == "NumPad3")
		{
			addDigit("3");
		}
		else if (e->KeyCode.ToString() == "NumPad4")
		{
			addDigit("4");
		}
		else if (e->KeyCode.ToString() == "NumPad5")
		{
			addDigit("5");
		}
		else if (e->KeyCode.ToString() == "NumPad6")
		{
			addDigit("6");
		}
		else if (e->KeyCode.ToString() == "NumPad7")
		{
			addDigit("7");
		}
		else if (e->KeyCode.ToString() == "NumPad8")
		{
			addDigit("8");
		}
		else if (e->KeyCode.ToString() == "NumPad9")
		{
			addDigit("9");
		}
		else if (e->KeyCode.ToString() == "Decimal")
		{

			addDigit(decimalPoint());
		}
		else if (e->KeyCode.ToString() == "Divide")
		{
			operandPressed("/");
		}
		else if (e->KeyCode.ToString() == "Multiply")
		{
			operandPressed("*");
		}
		else if (e->KeyCode.ToString() == "Add")
		{
			operandPressed("+");
		}
		else if (e->KeyCode.ToString() == "Subtract")
		{
			operandPressed("-");
		}
		else if (e->KeyCode.ToString() == "Enter")
		{
			operandPressed("=");
		}

	}

	private: void cleanup()
	{
		operand1 = 0;
		operand2 = 0;
		result = 0;
		textBox1->Text = System::Convert::ToString(result);
		state = 0;
		comaEntered = false;
		operand = "";
	}

	private: void addDigit(System::String^ c) {

		if (state == 0 )
		{
			if (c == "+/-")
				return;
			textBox1->Text = "";
			state = 1;
		}
		if (state == 2)
		{
			if (c == "+/-")
				return;
			textBox1->Text = "";
			state = 3;
		}
		if ((textBox1->Text->Length < 17) && (c != "+/-"))
		{
			textBox1->Text = textBox1->Text + c;
		}

		if (state == 1 || state == 4)
		{
				result = System::Convert::ToDouble(textBox1->Text);
				if (c == "+/-")
				{
					result = -result;
					textBox1->Text = System::Convert::ToString(result);
				}
				else if (state == 4)
				{
					cleanup();
					textBox1->Text = c;
					state = 1;
				}
		}
		if (state == 3)
		{
				operand1 = System::Convert::ToDouble(textBox1->Text);
				if (c == "+/-")
				{
					operand1 = -operand1;
					textBox1->Text = System::Convert::ToString(operand1);
				}
		}

	}
	private: void operandPressed(System::String^ operation)
	{
		if (state == 1)
		{
			state = 2;
//			textBox1->Text = "0";
			comaEntered = false;
			operand = operation;
		}
		else if (state == 3)
		{
			if (operand == "+")
				result = result + operand1;
			else if (operand == "-")
				result = result - operand1;
			else if (operand == "*")
				result = result * operand1;
			else if (operand == "/")
				result = result / operand1;

			operand = operation;
			operand1 = 0;
			comaEntered = false;
			state = 2;
			textBox1->Text = System::Convert::ToString(result);
		}
		else if (state == 4)
		{
			operand = operation;
			operand1 = 0;
			comaEntered = false;
			state = 2;
		}
		if (operation == "=")
		{
			operand = "";
			state = 4;
		}
		return;
	}
	private: System::String^ decimalPoint()
	{
		//Determines decimal point character
		System::String^ decimalPoint = ".";
		decimalPoint = System::Convert::ToString(0.1);
		return decimalPoint->Substring(1, 1);
	}
	//private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	//}
};
}
