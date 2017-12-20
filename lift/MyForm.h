#pragma once

namespace lift {

	using namespace System;
	using namespace std;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	//struct PassengersStruct
	//{
	//	int OriginalFloor, DestinationFloor;
	//} *Passengers;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		Image ^img, ^img2; //картинка

	public:
		

	public:
		Point imgPoint, imgPoint2; //точка вывода картинки
		bool StateDefined, MoveDefined, StopFlag, OpenedFlag, StopNext,
			StateDefined2, MoveDefined2, StopFlag2, OpenedFlag2, StopNext2;
		int i,
			j,
			k,
			RandVal,
			Query,
			PassengersInLift,
			PassengersInLift2,
			Floor,
			State, //-1 вниз, 0 стоит, 1 вверх
			Speed,
			Time,
			StopTime,
			OpenFlag,
			OpenTime,
			OpenedTime,
			CloseTime,
			StopNextTime,
			i2,
			Query2,
			Floor2,
			State2, //-1 вниз, 0 стоит, 1 вверх
			Speed2,
			Time2,
			StopTime2,
			OpenFlag2,
			OpenTime2,
			OpenedTime2,
			CloseTime2,
			StopNextTime2,
			RandQueue,
			RandFloor,
			TimerInterval1,
			TimerInterval2,
			TimerInterval3;
		int *CallCar = new int[9], *CallUp = new int[9], *CallDown = new int[9], *CallCar2 = new int[9],
			*Passengers = new int[63];
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::Button^  button18;
	private: System::Windows::Forms::Button^  button19;
	private: System::Windows::Forms::Button^  button20;
	private: System::Windows::Forms::Button^  button21;
	private: System::Windows::Forms::Button^  button22;
	private: System::Windows::Forms::Button^  button23;
	private: System::Windows::Forms::Button^  button24;
	private: System::Windows::Forms::Button^  button25;
	private: System::Windows::Forms::Button^  button26;
	private: System::Windows::Forms::TextBox^  textBox18;
	private: System::Windows::Forms::TextBox^  textBox9;

	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::TextBox^  textBox11;
	private: System::Windows::Forms::TextBox^  textBox12;
	private: System::Windows::Forms::TextBox^  textBox13;
	private: System::Windows::Forms::TextBox^  textBox14;
	private: System::Windows::Forms::TextBox^  textBox15;
	private: System::Windows::Forms::TextBox^  textBox16;
	private: System::Windows::Forms::TextBox^  textBox17;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button27;
	private: System::Windows::Forms::Button^  button28;
	private: System::Windows::Forms::Button^  button29;
	private: System::Windows::Forms::Button^  button30;
	private: System::Windows::Forms::Button^  button31;
	private: System::Windows::Forms::Button^  button32;
	private: System::Windows::Forms::Button^  button33;
	private: System::Windows::Forms::Button^  button34;
	private: System::Windows::Forms::Button^  button35;
	private: System::Windows::Forms::TextBox^  textBox19;
	private: System::Windows::Forms::TextBox^  textBox20;
private: System::Windows::Forms::TextBox^  textBox21;
private: System::Windows::Forms::TextBox^  textBox22;
private: System::Windows::Forms::TextBox^  textBox23;
private: System::Windows::Forms::Label^  label17;

private: System::Windows::Forms::Label^  label19;
private: System::Windows::Forms::Label^  label20;
private: System::Windows::Forms::Label^  label9;
private: System::Windows::Forms::Label^  label10;
private: System::Windows::Forms::Label^  label11;
private: System::Windows::Forms::Label^  label12;
private: System::Windows::Forms::Label^  label13;
private: System::Windows::Forms::Label^  label14;
private: System::Windows::Forms::Label^  label15;
private: System::Windows::Forms::Label^  label16;
private: System::Windows::Forms::Label^  label18;
private: System::Windows::Forms::Label^  label21;
private: System::Windows::Forms::Label^  label22;
private: System::Windows::Forms::Label^  label23;
private: System::Windows::Forms::TextBox^  textBox24;
private: System::Windows::Forms::TextBox^  textBox25;
private: System::Windows::Forms::CheckBox^  checkBox1;
private: System::Windows::Forms::CheckBox^  checkBox2;
private: System::Windows::Forms::CheckBox^  checkBox3;
private: System::Windows::Forms::CheckBox^  checkBox4;
private: System::Windows::Forms::CheckBox^  checkBox5;
private: System::Windows::Forms::CheckBox^  checkBox6;
private: System::Windows::Forms::CheckBox^  checkBox7;
private: System::Windows::Forms::CheckBox^  checkBox8;
private: System::Windows::Forms::CheckBox^  checkBox9;
private: System::Windows::Forms::CheckBox^  checkBox10;
private: System::Windows::Forms::CheckBox^  checkBox11;
private: System::Windows::Forms::CheckBox^  checkBox12;
private: System::Windows::Forms::CheckBox^  checkBox13;
private: System::Windows::Forms::CheckBox^  checkBox14;
private: System::Windows::Forms::CheckBox^  checkBox15;
private: System::Windows::Forms::CheckBox^  checkBox16;
private: System::Windows::Forms::CheckBox^  checkBox17;
private: System::Windows::Forms::CheckBox^  checkBox18;
private: System::Windows::Forms::CheckBox^  checkBox19;
private: System::Windows::Forms::CheckBox^  checkBox20;
private: System::Windows::Forms::CheckBox^  checkBox21;
private: System::Windows::Forms::CheckBox^  checkBox22;
private: System::Windows::Forms::CheckBox^  checkBox23;
private: System::Windows::Forms::CheckBox^  checkBox24;
private: System::Windows::Forms::CheckBox^  checkBox25;
private: System::Windows::Forms::CheckBox^  checkBox26;
private: System::Windows::Forms::CheckBox^  checkBox27;
private: System::Windows::Forms::CheckBox^  checkBox28;
private: System::Windows::Forms::CheckBox^  checkBox29;
private: System::Windows::Forms::CheckBox^  checkBox30;
private: System::Windows::Forms::CheckBox^  checkBox31;
private: System::Windows::Forms::CheckBox^  checkBox32;
private: System::Windows::Forms::CheckBox^  checkBox33;
private: System::Windows::Forms::CheckBox^  checkBox34;
private: System::Windows::Forms::CheckBox^  checkBox35;
private: System::Windows::Forms::CheckBox^  checkBox36;
private: System::Windows::Forms::CheckBox^  checkBox37;
private: System::Windows::Forms::CheckBox^  checkBox38;
private: System::Windows::Forms::CheckBox^  checkBox39;
private: System::Windows::Forms::CheckBox^  checkBox40;
private: System::Windows::Forms::CheckBox^  checkBox41;
private: System::Windows::Forms::CheckBox^  checkBox42;
private: System::Windows::Forms::CheckBox^  checkBox43;
private: System::Windows::Forms::CheckBox^  checkBox44;
private: System::Windows::Forms::CheckBox^  checkBox45;
private: System::Windows::Forms::CheckBox^  checkBox46;
private: System::Windows::Forms::CheckBox^  checkBox47;
private: System::Windows::Forms::CheckBox^  checkBox48;
private: System::Windows::Forms::CheckBox^  checkBox49;
private: System::Windows::Forms::CheckBox^  checkBox50;
private: System::Windows::Forms::CheckBox^  checkBox51;
private: System::Windows::Forms::CheckBox^  checkBox52;
private: System::Windows::Forms::CheckBox^  checkBox53;
private: System::Windows::Forms::CheckBox^  checkBox54;
private: System::Windows::Forms::CheckBox^  checkBox55;
private: System::Windows::Forms::CheckBox^  checkBox56;
private: System::Windows::Forms::CheckBox^  checkBox57;
private: System::Windows::Forms::CheckBox^  checkBox58;
private: System::Windows::Forms::CheckBox^  checkBox59;
private: System::Windows::Forms::CheckBox^  checkBox60;
private: System::Windows::Forms::CheckBox^  checkBox61;
private: System::Windows::Forms::CheckBox^  checkBox62;
private: System::Windows::Forms::CheckBox^  checkBox63;


	private: System::Windows::Forms::Button^  button9;
	public:

	public:

		MyForm(void)
		{
			InitializeComponent();
			this->DoubleBuffered = true;
			img = Bitmap::FromFile(Application::StartupPath + "\\elopt.png");
			img2 = Bitmap::FromFile(Application::StartupPath + "\\elopt.png");
			imgPoint = Point(164, 445);
			imgPoint2 = Point(229, 445);
			Query = 0, Floor = 1, State = 0, //-1 вниз, 0 стоит, 1 вверх
				Speed = 0, Time = 0, StopTime = 10, StopNextTime = 10,
				StateDefined = 0, MoveDefined = 0, StopFlag = 0, StopNext = 0,
				Query2 = 0, Floor2 = 1, State2 = 0, //-1 вниз, 0 стоит, 1 вверх
				Speed2 = 0, Time2 = 0, StopTime2 = 10, StopNextTime2 = 10,
				StateDefined2 = 0, MoveDefined2 = 0, StopFlag2 = 0, StopNext2 = 0,
				OpenFlag = 0, OpenedFlag = 0, OpenTime = 0, OpenedTime = 0, CloseTime = 0,
				OpenFlag2 = 0, OpenedFlag2 = 0, OpenTime2 = 0, OpenedTime2 = 0, CloseTime2 = 0,
				RandQueue = 0, RandFloor = 0, PassengersInLift = 0, PassengersInLift2 = 0,
				TimerInterval1 = 50, TimerInterval2 = 50, TimerInterval3 = 1000;
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



	private: System::ComponentModel::IContainer^  components;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->textBox21 = (gcnew System::Windows::Forms::TextBox());
			this->textBox22 = (gcnew System::Windows::Forms::TextBox());
			this->textBox23 = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->textBox24 = (gcnew System::Windows::Forms::TextBox());
			this->textBox25 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox6 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox7 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox8 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox9 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox10 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox11 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox12 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox13 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox14 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox15 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox16 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox17 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox18 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox19 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox20 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox21 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox22 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox23 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox24 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox25 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox26 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox27 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox28 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox29 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox30 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox31 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox32 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox33 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox34 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox35 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox36 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox37 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox38 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox39 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox40 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox41 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox42 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox43 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox44 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox45 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox46 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox47 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox48 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox49 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox50 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox51 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox52 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox53 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox54 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox55 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox56 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox57 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox58 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox59 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox60 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox61 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox62 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox63 = (gcnew System::Windows::Forms::CheckBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Location = System::Drawing::Point(445, 127);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(25, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"8";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->Location = System::Drawing::Point(414, 127);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(25, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"7";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->Location = System::Drawing::Point(445, 156);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(25, 23);
			this->button3->TabIndex = 2;
			this->button3->Text = L"6";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->Location = System::Drawing::Point(414, 156);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(25, 23);
			this->button4->TabIndex = 3;
			this->button4->Text = L"5";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button5->Location = System::Drawing::Point(445, 186);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(25, 23);
			this->button5->TabIndex = 4;
			this->button5->Text = L"4";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button6->Location = System::Drawing::Point(414, 186);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(25, 23);
			this->button6->TabIndex = 5;
			this->button6->Text = L"3";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button7->Location = System::Drawing::Point(445, 216);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(25, 23);
			this->button7->TabIndex = 6;
			this->button7->Text = L"2";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button8->Location = System::Drawing::Point(414, 216);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(25, 23);
			this->button8->TabIndex = 7;
			this->button8->Text = L"1";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button9->Location = System::Drawing::Point(430, 245);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(25, 23);
			this->button9->TabIndex = 8;
			this->button9->Text = L"0";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(476, 114);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(33, 20);
			this->textBox1->TabIndex = 9;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(476, 141);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(33, 20);
			this->textBox2->TabIndex = 10;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(476, 168);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(33, 20);
			this->textBox3->TabIndex = 11;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(430, 101);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(25, 20);
			this->textBox4->TabIndex = 12;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox4_TextChanged);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(476, 222);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(33, 20);
			this->textBox5->TabIndex = 13;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(476, 249);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(33, 20);
			this->textBox6->TabIndex = 14;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(476, 276);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(33, 20);
			this->textBox7->TabIndex = 15;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(476, 303);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(33, 20);
			this->textBox8->TabIndex = 16;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(515, 114);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(75, 13);
			this->label1->TabIndex = 17;
			this->label1->Text = L"Направление";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(515, 141);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(78, 13);
			this->label2->TabIndex = 18;
			this->label2->Text = L"Шаг автомата";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(515, 168);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(55, 13);
			this->label3->TabIndex = 19;
			this->label3->Text = L"Скорость";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(427, 85);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(33, 13);
			this->label4->TabIndex = 20;
			this->label4->Text = L"Этаж";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(515, 223);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(61, 13);
			this->label5->TabIndex = 21;
			this->label5->Text = L"Состояние";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(515, 250);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(80, 13);
			this->label6->TabIndex = 22;
			this->label6->Text = L"Перемещение";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(515, 276);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(58, 13);
			this->label7->TabIndex = 23;
			this->label7->Text = L"Прибытие";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(515, 303);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(49, 13);
			this->label8->TabIndex = 24;
			this->label8->Text = L"Стоянка";
			this->label8->Click += gcnew System::EventHandler(this, &MyForm::label8_Click);
			// 
			// button11
			// 
			this->button11->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Location = System::Drawing::Point(203, 110);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(23, 21);
			this->button11->TabIndex = 35;
			this->button11->Text = L"▼";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button12
			// 
			this->button12->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button12->Location = System::Drawing::Point(203, 151);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(23, 21);
			this->button12->TabIndex = 36;
			this->button12->Text = L"▲";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button13
			// 
			this->button13->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button13->Location = System::Drawing::Point(203, 173);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(23, 21);
			this->button13->TabIndex = 37;
			this->button13->Text = L"▼";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button14
			// 
			this->button14->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button14->Location = System::Drawing::Point(203, 202);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(23, 21);
			this->button14->TabIndex = 38;
			this->button14->Text = L"▲";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button15
			// 
			this->button15->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button15->Location = System::Drawing::Point(203, 222);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(23, 21);
			this->button15->TabIndex = 39;
			this->button15->Text = L"▼";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// button16
			// 
			this->button16->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button16->Location = System::Drawing::Point(203, 253);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(23, 21);
			this->button16->TabIndex = 40;
			this->button16->Text = L"▲";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// button17
			// 
			this->button17->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button17->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button17->Location = System::Drawing::Point(203, 274);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(23, 21);
			this->button17->TabIndex = 41;
			this->button17->Text = L"▼";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// button18
			// 
			this->button18->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button18->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button18->Location = System::Drawing::Point(203, 301);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(23, 21);
			this->button18->TabIndex = 42;
			this->button18->Text = L"▲";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// button19
			// 
			this->button19->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button19->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button19->Location = System::Drawing::Point(203, 323);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(23, 21);
			this->button19->TabIndex = 43;
			this->button19->Text = L"▼";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
			// 
			// button20
			// 
			this->button20->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button20->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button20->Location = System::Drawing::Point(203, 350);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(23, 21);
			this->button20->TabIndex = 44;
			this->button20->Text = L"▲";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::button20_Click);
			// 
			// button21
			// 
			this->button21->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button21->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button21->Location = System::Drawing::Point(203, 372);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(23, 21);
			this->button21->TabIndex = 45;
			this->button21->Text = L"▼";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm::button21_Click);
			// 
			// button22
			// 
			this->button22->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button22->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button22->Location = System::Drawing::Point(203, 401);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(23, 21);
			this->button22->TabIndex = 46;
			this->button22->Text = L"▲";
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &MyForm::button22_Click);
			// 
			// button23
			// 
			this->button23->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button23->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button23->Location = System::Drawing::Point(203, 421);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(23, 21);
			this->button23->TabIndex = 47;
			this->button23->Text = L"▼";
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Click += gcnew System::EventHandler(this, &MyForm::button23_Click);
			// 
			// button24
			// 
			this->button24->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button24->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button24->Location = System::Drawing::Point(203, 448);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(23, 21);
			this->button24->TabIndex = 48;
			this->button24->Text = L"▲";
			this->button24->UseVisualStyleBackColor = true;
			this->button24->Click += gcnew System::EventHandler(this, &MyForm::button24_Click);
			// 
			// button25
			// 
			this->button25->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button25->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button25->Location = System::Drawing::Point(203, 467);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(23, 21);
			this->button25->TabIndex = 49;
			this->button25->Text = L"▼";
			this->button25->UseVisualStyleBackColor = true;
			this->button25->Click += gcnew System::EventHandler(this, &MyForm::button25_Click);
			// 
			// button26
			// 
			this->button26->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button26->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button26->Location = System::Drawing::Point(203, 510);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(23, 21);
			this->button26->TabIndex = 50;
			this->button26->Text = L"▲";
			this->button26->UseVisualStyleBackColor = true;
			this->button26->Click += gcnew System::EventHandler(this, &MyForm::button26_Click);
			// 
			// textBox18
			// 
			this->textBox18->Location = System::Drawing::Point(476, 194);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(33, 20);
			this->textBox18->TabIndex = 51;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(687, 194);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(35, 20);
			this->textBox9->TabIndex = 68;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(686, 304);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(35, 20);
			this->textBox10->TabIndex = 59;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(686, 277);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(35, 20);
			this->textBox11->TabIndex = 58;
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(686, 250);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(35, 20);
			this->textBox12->TabIndex = 57;
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(686, 223);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(35, 20);
			this->textBox13->TabIndex = 56;
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(640, 101);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(25, 20);
			this->textBox14->TabIndex = 55;
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(686, 169);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(35, 20);
			this->textBox15->TabIndex = 54;
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(686, 142);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(35, 20);
			this->textBox16->TabIndex = 53;
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(687, 119);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(35, 20);
			this->textBox17->TabIndex = 52;
			// 
			// button10
			// 
			this->button10->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button10->Location = System::Drawing::Point(640, 244);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(25, 23);
			this->button10->TabIndex = 77;
			this->button10->Text = L"0";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button27
			// 
			this->button27->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button27->Location = System::Drawing::Point(624, 215);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(25, 23);
			this->button27->TabIndex = 76;
			this->button27->Text = L"1";
			this->button27->UseVisualStyleBackColor = true;
			this->button27->Click += gcnew System::EventHandler(this, &MyForm::button27_Click);
			// 
			// button28
			// 
			this->button28->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button28->Location = System::Drawing::Point(655, 215);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(25, 23);
			this->button28->TabIndex = 75;
			this->button28->Text = L"2";
			this->button28->UseVisualStyleBackColor = true;
			this->button28->Click += gcnew System::EventHandler(this, &MyForm::button28_Click);
			// 
			// button29
			// 
			this->button29->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button29->Location = System::Drawing::Point(624, 184);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(25, 23);
			this->button29->TabIndex = 74;
			this->button29->Text = L"3";
			this->button29->UseVisualStyleBackColor = true;
			this->button29->Click += gcnew System::EventHandler(this, &MyForm::button29_Click);
			// 
			// button30
			// 
			this->button30->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button30->Location = System::Drawing::Point(655, 184);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(25, 23);
			this->button30->TabIndex = 73;
			this->button30->Text = L"4";
			this->button30->UseVisualStyleBackColor = true;
			this->button30->Click += gcnew System::EventHandler(this, &MyForm::button30_Click);
			// 
			// button31
			// 
			this->button31->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button31->Location = System::Drawing::Point(624, 155);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(25, 23);
			this->button31->TabIndex = 72;
			this->button31->Text = L"5";
			this->button31->UseVisualStyleBackColor = true;
			this->button31->Click += gcnew System::EventHandler(this, &MyForm::button31_Click);
			// 
			// button32
			// 
			this->button32->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button32->Location = System::Drawing::Point(655, 155);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(25, 23);
			this->button32->TabIndex = 71;
			this->button32->Text = L"6";
			this->button32->UseVisualStyleBackColor = true;
			this->button32->Click += gcnew System::EventHandler(this, &MyForm::button32_Click);
			// 
			// button33
			// 
			this->button33->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button33->Location = System::Drawing::Point(624, 128);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(25, 23);
			this->button33->TabIndex = 70;
			this->button33->Text = L"7";
			this->button33->UseVisualStyleBackColor = true;
			this->button33->Click += gcnew System::EventHandler(this, &MyForm::button33_Click);
			// 
			// button34
			// 
			this->button34->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button34->Location = System::Drawing::Point(655, 127);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(25, 23);
			this->button34->TabIndex = 69;
			this->button34->Text = L"8";
			this->button34->UseVisualStyleBackColor = true;
			this->button34->Click += gcnew System::EventHandler(this, &MyForm::button34_Click);
			// 
			// button35
			// 
			this->button35->Location = System::Drawing::Point(543, 390);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(145, 42);
			this->button35->TabIndex = 78;
			this->button35->Text = L"Авторежим";
			this->button35->UseVisualStyleBackColor = true;
			this->button35->Click += gcnew System::EventHandler(this, &MyForm::button35_Click);
			// 
			// textBox19
			// 
			this->textBox19->Location = System::Drawing::Point(695, 390);
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(26, 20);
			this->textBox19->TabIndex = 79;
			// 
			// textBox20
			// 
			this->textBox20->Location = System::Drawing::Point(695, 416);
			this->textBox20->Name = L"textBox20";
			this->textBox20->Size = System::Drawing::Size(26, 20);
			this->textBox20->TabIndex = 80;
			// 
			// textBox21
			// 
			this->textBox21->Location = System::Drawing::Point(476, 329);
			this->textBox21->Name = L"textBox21";
			this->textBox21->Size = System::Drawing::Size(33, 20);
			this->textBox21->TabIndex = 81;
			// 
			// textBox22
			// 
			this->textBox22->Location = System::Drawing::Point(687, 329);
			this->textBox22->Name = L"textBox22";
			this->textBox22->Size = System::Drawing::Size(34, 20);
			this->textBox22->TabIndex = 82;
			// 
			// textBox23
			// 
			this->textBox23->Location = System::Drawing::Point(655, 442);
			this->textBox23->Name = L"textBox23";
			this->textBox23->Size = System::Drawing::Size(66, 20);
			this->textBox23->TabIndex = 83;
			this->textBox23->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox23_TextChanged);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(515, 332);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(55, 13);
			this->label17->TabIndex = 84;
			this->label17->Text = L"Таймер 1";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(727, 445);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(55, 13);
			this->label19->TabIndex = 86;
			this->label19->Text = L"Таймер 3";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(515, 197);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(45, 13);
			this->label20->TabIndex = 87;
			this->label20->Text = L"Высота";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(728, 197);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(45, 13);
			this->label9->TabIndex = 97;
			this->label9->Text = L"Высота";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(727, 332);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(55, 13);
			this->label10->TabIndex = 96;
			this->label10->Text = L"Таймер 2";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(727, 303);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(49, 13);
			this->label11->TabIndex = 95;
			this->label11->Text = L"Стоянка";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(727, 276);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(58, 13);
			this->label12->TabIndex = 94;
			this->label12->Text = L"Прибытие";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(727, 250);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(80, 13);
			this->label13->TabIndex = 93;
			this->label13->Text = L"Перемещение";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(727, 223);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(61, 13);
			this->label14->TabIndex = 92;
			this->label14->Text = L"Состояние";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(637, 85);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(33, 13);
			this->label15->TabIndex = 91;
			this->label15->Text = L"Этаж";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(728, 172);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(55, 13);
			this->label16->TabIndex = 90;
			this->label16->Text = L"Скорость";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(728, 145);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(78, 13);
			this->label18->TabIndex = 89;
			this->label18->Text = L"Шаг автомата";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(728, 118);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(75, 13);
			this->label21->TabIndex = 88;
			this->label21->Text = L"Направление";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(727, 419);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(33, 13);
			this->label22->TabIndex = 98;
			this->label22->Text = L"Этаж";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(727, 393);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(46, 13);
			this->label23->TabIndex = 99;
			this->label23->Text = L"Массив";
			// 
			// textBox24
			// 
			this->textBox24->Location = System::Drawing::Point(172, 51);
			this->textBox24->Name = L"textBox24";
			this->textBox24->Size = System::Drawing::Size(20, 20);
			this->textBox24->TabIndex = 100;
			// 
			// textBox25
			// 
			this->textBox25->Location = System::Drawing::Point(234, 51);
			this->textBox25->Name = L"textBox25";
			this->textBox25->Size = System::Drawing::Size(20, 20);
			this->textBox25->TabIndex = 101;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox1->Location = System::Drawing::Point(150, 127);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(12, 11);
			this->checkBox1->TabIndex = 102;
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox2->Location = System::Drawing::Point(132, 127);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(12, 11);
			this->checkBox2->TabIndex = 103;
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox3->Location = System::Drawing::Point(114, 127);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(12, 11);
			this->checkBox3->TabIndex = 105;
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox4->Location = System::Drawing::Point(96, 127);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(12, 11);
			this->checkBox4->TabIndex = 104;
			this->checkBox4->UseVisualStyleBackColor = true;
			// 
			// checkBox5
			// 
			this->checkBox5->AutoSize = true;
			this->checkBox5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox5->Location = System::Drawing::Point(78, 127);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(12, 11);
			this->checkBox5->TabIndex = 107;
			this->checkBox5->UseVisualStyleBackColor = true;
			// 
			// checkBox6
			// 
			this->checkBox6->AutoSize = true;
			this->checkBox6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox6->Location = System::Drawing::Point(60, 127);
			this->checkBox6->Name = L"checkBox6";
			this->checkBox6->Size = System::Drawing::Size(12, 11);
			this->checkBox6->TabIndex = 106;
			this->checkBox6->UseVisualStyleBackColor = true;
			// 
			// checkBox7
			// 
			this->checkBox7->AutoSize = true;
			this->checkBox7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox7->Location = System::Drawing::Point(42, 127);
			this->checkBox7->Name = L"checkBox7";
			this->checkBox7->Size = System::Drawing::Size(12, 11);
			this->checkBox7->TabIndex = 108;
			this->checkBox7->UseVisualStyleBackColor = true;
			// 
			// checkBox8
			// 
			this->checkBox8->AutoSize = true;
			this->checkBox8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox8->Location = System::Drawing::Point(150, 178);
			this->checkBox8->Name = L"checkBox8";
			this->checkBox8->Size = System::Drawing::Size(12, 11);
			this->checkBox8->TabIndex = 115;
			this->checkBox8->UseVisualStyleBackColor = true;
			// 
			// checkBox9
			// 
			this->checkBox9->AutoSize = true;
			this->checkBox9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox9->Location = System::Drawing::Point(114, 178);
			this->checkBox9->Name = L"checkBox9";
			this->checkBox9->Size = System::Drawing::Size(12, 11);
			this->checkBox9->TabIndex = 114;
			this->checkBox9->UseVisualStyleBackColor = true;
			// 
			// checkBox10
			// 
			this->checkBox10->AutoSize = true;
			this->checkBox10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox10->Location = System::Drawing::Point(132, 178);
			this->checkBox10->Name = L"checkBox10";
			this->checkBox10->Size = System::Drawing::Size(12, 11);
			this->checkBox10->TabIndex = 113;
			this->checkBox10->UseVisualStyleBackColor = true;
			// 
			// checkBox11
			// 
			this->checkBox11->AutoSize = true;
			this->checkBox11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox11->Location = System::Drawing::Point(78, 178);
			this->checkBox11->Name = L"checkBox11";
			this->checkBox11->Size = System::Drawing::Size(12, 11);
			this->checkBox11->TabIndex = 112;
			this->checkBox11->UseVisualStyleBackColor = true;
			// 
			// checkBox12
			// 
			this->checkBox12->AutoSize = true;
			this->checkBox12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox12->Location = System::Drawing::Point(96, 178);
			this->checkBox12->Name = L"checkBox12";
			this->checkBox12->Size = System::Drawing::Size(12, 11);
			this->checkBox12->TabIndex = 111;
			this->checkBox12->UseVisualStyleBackColor = true;
			// 
			// checkBox13
			// 
			this->checkBox13->AutoSize = true;
			this->checkBox13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox13->Location = System::Drawing::Point(60, 178);
			this->checkBox13->Name = L"checkBox13";
			this->checkBox13->Size = System::Drawing::Size(12, 11);
			this->checkBox13->TabIndex = 110;
			this->checkBox13->UseVisualStyleBackColor = true;
			// 
			// checkBox14
			// 
			this->checkBox14->AutoSize = true;
			this->checkBox14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox14->Location = System::Drawing::Point(42, 178);
			this->checkBox14->Name = L"checkBox14";
			this->checkBox14->Size = System::Drawing::Size(12, 11);
			this->checkBox14->TabIndex = 109;
			this->checkBox14->UseVisualStyleBackColor = true;
			// 
			// checkBox15
			// 
			this->checkBox15->AutoSize = true;
			this->checkBox15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox15->Location = System::Drawing::Point(150, 231);
			this->checkBox15->Name = L"checkBox15";
			this->checkBox15->Size = System::Drawing::Size(12, 11);
			this->checkBox15->TabIndex = 122;
			this->checkBox15->UseVisualStyleBackColor = true;
			// 
			// checkBox16
			// 
			this->checkBox16->AutoSize = true;
			this->checkBox16->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox16->Location = System::Drawing::Point(114, 231);
			this->checkBox16->Name = L"checkBox16";
			this->checkBox16->Size = System::Drawing::Size(12, 11);
			this->checkBox16->TabIndex = 121;
			this->checkBox16->UseVisualStyleBackColor = true;
			// 
			// checkBox17
			// 
			this->checkBox17->AutoSize = true;
			this->checkBox17->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox17->Location = System::Drawing::Point(132, 231);
			this->checkBox17->Name = L"checkBox17";
			this->checkBox17->Size = System::Drawing::Size(12, 11);
			this->checkBox17->TabIndex = 120;
			this->checkBox17->UseVisualStyleBackColor = true;
			// 
			// checkBox18
			// 
			this->checkBox18->AutoSize = true;
			this->checkBox18->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox18->Location = System::Drawing::Point(78, 231);
			this->checkBox18->Name = L"checkBox18";
			this->checkBox18->Size = System::Drawing::Size(12, 11);
			this->checkBox18->TabIndex = 119;
			this->checkBox18->UseVisualStyleBackColor = true;
			// 
			// checkBox19
			// 
			this->checkBox19->AutoSize = true;
			this->checkBox19->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox19->Location = System::Drawing::Point(96, 231);
			this->checkBox19->Name = L"checkBox19";
			this->checkBox19->Size = System::Drawing::Size(12, 11);
			this->checkBox19->TabIndex = 118;
			this->checkBox19->UseVisualStyleBackColor = true;
			// 
			// checkBox20
			// 
			this->checkBox20->AutoSize = true;
			this->checkBox20->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox20->Location = System::Drawing::Point(60, 231);
			this->checkBox20->Name = L"checkBox20";
			this->checkBox20->Size = System::Drawing::Size(12, 11);
			this->checkBox20->TabIndex = 117;
			this->checkBox20->UseVisualStyleBackColor = true;
			// 
			// checkBox21
			// 
			this->checkBox21->AutoSize = true;
			this->checkBox21->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox21->Location = System::Drawing::Point(42, 231);
			this->checkBox21->Name = L"checkBox21";
			this->checkBox21->Size = System::Drawing::Size(12, 11);
			this->checkBox21->TabIndex = 116;
			this->checkBox21->UseVisualStyleBackColor = true;
			// 
			// checkBox22
			// 
			this->checkBox22->AutoSize = true;
			this->checkBox22->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox22->Location = System::Drawing::Point(150, 281);
			this->checkBox22->Name = L"checkBox22";
			this->checkBox22->Size = System::Drawing::Size(12, 11);
			this->checkBox22->TabIndex = 129;
			this->checkBox22->UseVisualStyleBackColor = true;
			// 
			// checkBox23
			// 
			this->checkBox23->AutoSize = true;
			this->checkBox23->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox23->Location = System::Drawing::Point(114, 281);
			this->checkBox23->Name = L"checkBox23";
			this->checkBox23->Size = System::Drawing::Size(12, 11);
			this->checkBox23->TabIndex = 128;
			this->checkBox23->UseVisualStyleBackColor = true;
			// 
			// checkBox24
			// 
			this->checkBox24->AutoSize = true;
			this->checkBox24->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox24->Location = System::Drawing::Point(132, 281);
			this->checkBox24->Name = L"checkBox24";
			this->checkBox24->Size = System::Drawing::Size(12, 11);
			this->checkBox24->TabIndex = 127;
			this->checkBox24->UseVisualStyleBackColor = true;
			// 
			// checkBox25
			// 
			this->checkBox25->AutoSize = true;
			this->checkBox25->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox25->Location = System::Drawing::Point(78, 281);
			this->checkBox25->Name = L"checkBox25";
			this->checkBox25->Size = System::Drawing::Size(12, 11);
			this->checkBox25->TabIndex = 126;
			this->checkBox25->UseVisualStyleBackColor = true;
			// 
			// checkBox26
			// 
			this->checkBox26->AutoSize = true;
			this->checkBox26->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox26->Location = System::Drawing::Point(96, 281);
			this->checkBox26->Name = L"checkBox26";
			this->checkBox26->Size = System::Drawing::Size(12, 11);
			this->checkBox26->TabIndex = 125;
			this->checkBox26->UseVisualStyleBackColor = true;
			// 
			// checkBox27
			// 
			this->checkBox27->AutoSize = true;
			this->checkBox27->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox27->Location = System::Drawing::Point(60, 281);
			this->checkBox27->Name = L"checkBox27";
			this->checkBox27->Size = System::Drawing::Size(12, 11);
			this->checkBox27->TabIndex = 124;
			this->checkBox27->UseVisualStyleBackColor = true;
			// 
			// checkBox28
			// 
			this->checkBox28->AutoSize = true;
			this->checkBox28->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox28->Location = System::Drawing::Point(42, 281);
			this->checkBox28->Name = L"checkBox28";
			this->checkBox28->Size = System::Drawing::Size(12, 11);
			this->checkBox28->TabIndex = 123;
			this->checkBox28->UseVisualStyleBackColor = true;
			// 
			// checkBox29
			// 
			this->checkBox29->AutoSize = true;
			this->checkBox29->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox29->Location = System::Drawing::Point(150, 329);
			this->checkBox29->Name = L"checkBox29";
			this->checkBox29->Size = System::Drawing::Size(12, 11);
			this->checkBox29->TabIndex = 136;
			this->checkBox29->UseVisualStyleBackColor = true;
			// 
			// checkBox30
			// 
			this->checkBox30->AutoSize = true;
			this->checkBox30->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox30->Location = System::Drawing::Point(114, 329);
			this->checkBox30->Name = L"checkBox30";
			this->checkBox30->Size = System::Drawing::Size(12, 11);
			this->checkBox30->TabIndex = 135;
			this->checkBox30->UseVisualStyleBackColor = true;
			// 
			// checkBox31
			// 
			this->checkBox31->AutoSize = true;
			this->checkBox31->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox31->Location = System::Drawing::Point(132, 329);
			this->checkBox31->Name = L"checkBox31";
			this->checkBox31->Size = System::Drawing::Size(12, 11);
			this->checkBox31->TabIndex = 134;
			this->checkBox31->UseVisualStyleBackColor = true;
			// 
			// checkBox32
			// 
			this->checkBox32->AutoSize = true;
			this->checkBox32->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox32->Location = System::Drawing::Point(78, 329);
			this->checkBox32->Name = L"checkBox32";
			this->checkBox32->Size = System::Drawing::Size(12, 11);
			this->checkBox32->TabIndex = 133;
			this->checkBox32->UseVisualStyleBackColor = true;
			// 
			// checkBox33
			// 
			this->checkBox33->AutoSize = true;
			this->checkBox33->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox33->Location = System::Drawing::Point(96, 329);
			this->checkBox33->Name = L"checkBox33";
			this->checkBox33->Size = System::Drawing::Size(12, 11);
			this->checkBox33->TabIndex = 132;
			this->checkBox33->UseVisualStyleBackColor = true;
			// 
			// checkBox34
			// 
			this->checkBox34->AutoSize = true;
			this->checkBox34->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox34->Location = System::Drawing::Point(60, 329);
			this->checkBox34->Name = L"checkBox34";
			this->checkBox34->Size = System::Drawing::Size(12, 11);
			this->checkBox34->TabIndex = 131;
			this->checkBox34->UseVisualStyleBackColor = true;
			// 
			// checkBox35
			// 
			this->checkBox35->AutoSize = true;
			this->checkBox35->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox35->Location = System::Drawing::Point(42, 329);
			this->checkBox35->Name = L"checkBox35";
			this->checkBox35->Size = System::Drawing::Size(12, 11);
			this->checkBox35->TabIndex = 130;
			this->checkBox35->UseVisualStyleBackColor = true;
			// 
			// checkBox36
			// 
			this->checkBox36->AutoSize = true;
			this->checkBox36->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox36->Location = System::Drawing::Point(150, 382);
			this->checkBox36->Name = L"checkBox36";
			this->checkBox36->Size = System::Drawing::Size(12, 11);
			this->checkBox36->TabIndex = 143;
			this->checkBox36->UseVisualStyleBackColor = true;
			// 
			// checkBox37
			// 
			this->checkBox37->AutoSize = true;
			this->checkBox37->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox37->Location = System::Drawing::Point(114, 382);
			this->checkBox37->Name = L"checkBox37";
			this->checkBox37->Size = System::Drawing::Size(12, 11);
			this->checkBox37->TabIndex = 142;
			this->checkBox37->UseVisualStyleBackColor = true;
			// 
			// checkBox38
			// 
			this->checkBox38->AutoSize = true;
			this->checkBox38->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox38->Location = System::Drawing::Point(132, 382);
			this->checkBox38->Name = L"checkBox38";
			this->checkBox38->Size = System::Drawing::Size(12, 11);
			this->checkBox38->TabIndex = 141;
			this->checkBox38->UseVisualStyleBackColor = true;
			// 
			// checkBox39
			// 
			this->checkBox39->AutoSize = true;
			this->checkBox39->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox39->Location = System::Drawing::Point(78, 382);
			this->checkBox39->Name = L"checkBox39";
			this->checkBox39->Size = System::Drawing::Size(12, 11);
			this->checkBox39->TabIndex = 140;
			this->checkBox39->UseVisualStyleBackColor = true;
			// 
			// checkBox40
			// 
			this->checkBox40->AutoSize = true;
			this->checkBox40->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox40->Location = System::Drawing::Point(96, 382);
			this->checkBox40->Name = L"checkBox40";
			this->checkBox40->Size = System::Drawing::Size(12, 11);
			this->checkBox40->TabIndex = 139;
			this->checkBox40->UseVisualStyleBackColor = true;
			// 
			// checkBox41
			// 
			this->checkBox41->AutoSize = true;
			this->checkBox41->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox41->Location = System::Drawing::Point(60, 382);
			this->checkBox41->Name = L"checkBox41";
			this->checkBox41->Size = System::Drawing::Size(12, 11);
			this->checkBox41->TabIndex = 138;
			this->checkBox41->UseVisualStyleBackColor = true;
			// 
			// checkBox42
			// 
			this->checkBox42->AutoSize = true;
			this->checkBox42->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox42->Location = System::Drawing::Point(42, 382);
			this->checkBox42->Name = L"checkBox42";
			this->checkBox42->Size = System::Drawing::Size(12, 11);
			this->checkBox42->TabIndex = 137;
			this->checkBox42->UseVisualStyleBackColor = true;
			// 
			// checkBox43
			// 
			this->checkBox43->AutoSize = true;
			this->checkBox43->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox43->Location = System::Drawing::Point(150, 431);
			this->checkBox43->Name = L"checkBox43";
			this->checkBox43->Size = System::Drawing::Size(12, 11);
			this->checkBox43->TabIndex = 150;
			this->checkBox43->UseVisualStyleBackColor = true;
			// 
			// checkBox44
			// 
			this->checkBox44->AutoSize = true;
			this->checkBox44->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox44->Location = System::Drawing::Point(114, 431);
			this->checkBox44->Name = L"checkBox44";
			this->checkBox44->Size = System::Drawing::Size(12, 11);
			this->checkBox44->TabIndex = 149;
			this->checkBox44->UseVisualStyleBackColor = true;
			// 
			// checkBox45
			// 
			this->checkBox45->AutoSize = true;
			this->checkBox45->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox45->Location = System::Drawing::Point(132, 431);
			this->checkBox45->Name = L"checkBox45";
			this->checkBox45->Size = System::Drawing::Size(12, 11);
			this->checkBox45->TabIndex = 148;
			this->checkBox45->UseVisualStyleBackColor = true;
			// 
			// checkBox46
			// 
			this->checkBox46->AutoSize = true;
			this->checkBox46->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox46->Location = System::Drawing::Point(78, 431);
			this->checkBox46->Name = L"checkBox46";
			this->checkBox46->Size = System::Drawing::Size(12, 11);
			this->checkBox46->TabIndex = 147;
			this->checkBox46->UseVisualStyleBackColor = true;
			// 
			// checkBox47
			// 
			this->checkBox47->AutoSize = true;
			this->checkBox47->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox47->Location = System::Drawing::Point(96, 431);
			this->checkBox47->Name = L"checkBox47";
			this->checkBox47->Size = System::Drawing::Size(12, 11);
			this->checkBox47->TabIndex = 146;
			this->checkBox47->UseVisualStyleBackColor = true;
			// 
			// checkBox48
			// 
			this->checkBox48->AutoSize = true;
			this->checkBox48->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox48->Location = System::Drawing::Point(60, 431);
			this->checkBox48->Name = L"checkBox48";
			this->checkBox48->Size = System::Drawing::Size(12, 11);
			this->checkBox48->TabIndex = 145;
			this->checkBox48->UseVisualStyleBackColor = true;
			// 
			// checkBox49
			// 
			this->checkBox49->AutoSize = true;
			this->checkBox49->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox49->Location = System::Drawing::Point(42, 431);
			this->checkBox49->Name = L"checkBox49";
			this->checkBox49->Size = System::Drawing::Size(12, 11);
			this->checkBox49->TabIndex = 144;
			this->checkBox49->UseVisualStyleBackColor = true;
			// 
			// checkBox50
			// 
			this->checkBox50->AutoSize = true;
			this->checkBox50->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox50->Location = System::Drawing::Point(150, 477);
			this->checkBox50->Name = L"checkBox50";
			this->checkBox50->Size = System::Drawing::Size(12, 11);
			this->checkBox50->TabIndex = 157;
			this->checkBox50->UseVisualStyleBackColor = true;
			// 
			// checkBox51
			// 
			this->checkBox51->AutoSize = true;
			this->checkBox51->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox51->Location = System::Drawing::Point(114, 477);
			this->checkBox51->Name = L"checkBox51";
			this->checkBox51->Size = System::Drawing::Size(12, 11);
			this->checkBox51->TabIndex = 156;
			this->checkBox51->UseVisualStyleBackColor = true;
			// 
			// checkBox52
			// 
			this->checkBox52->AutoSize = true;
			this->checkBox52->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox52->Location = System::Drawing::Point(132, 477);
			this->checkBox52->Name = L"checkBox52";
			this->checkBox52->Size = System::Drawing::Size(12, 11);
			this->checkBox52->TabIndex = 155;
			this->checkBox52->UseVisualStyleBackColor = true;
			// 
			// checkBox53
			// 
			this->checkBox53->AutoSize = true;
			this->checkBox53->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox53->Location = System::Drawing::Point(78, 477);
			this->checkBox53->Name = L"checkBox53";
			this->checkBox53->Size = System::Drawing::Size(12, 11);
			this->checkBox53->TabIndex = 154;
			this->checkBox53->UseVisualStyleBackColor = true;
			// 
			// checkBox54
			// 
			this->checkBox54->AutoSize = true;
			this->checkBox54->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox54->Location = System::Drawing::Point(96, 477);
			this->checkBox54->Name = L"checkBox54";
			this->checkBox54->Size = System::Drawing::Size(12, 11);
			this->checkBox54->TabIndex = 153;
			this->checkBox54->UseVisualStyleBackColor = true;
			// 
			// checkBox55
			// 
			this->checkBox55->AutoSize = true;
			this->checkBox55->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox55->Location = System::Drawing::Point(60, 477);
			this->checkBox55->Name = L"checkBox55";
			this->checkBox55->Size = System::Drawing::Size(12, 11);
			this->checkBox55->TabIndex = 152;
			this->checkBox55->UseVisualStyleBackColor = true;
			// 
			// checkBox56
			// 
			this->checkBox56->AutoSize = true;
			this->checkBox56->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox56->Location = System::Drawing::Point(42, 477);
			this->checkBox56->Name = L"checkBox56";
			this->checkBox56->Size = System::Drawing::Size(12, 11);
			this->checkBox56->TabIndex = 151;
			this->checkBox56->UseVisualStyleBackColor = true;
			// 
			// checkBox57
			// 
			this->checkBox57->AutoSize = true;
			this->checkBox57->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox57->Location = System::Drawing::Point(150, 529);
			this->checkBox57->Name = L"checkBox57";
			this->checkBox57->Size = System::Drawing::Size(12, 11);
			this->checkBox57->TabIndex = 164;
			this->checkBox57->UseVisualStyleBackColor = true;
			// 
			// checkBox58
			// 
			this->checkBox58->AutoSize = true;
			this->checkBox58->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox58->Location = System::Drawing::Point(114, 529);
			this->checkBox58->Name = L"checkBox58";
			this->checkBox58->Size = System::Drawing::Size(12, 11);
			this->checkBox58->TabIndex = 163;
			this->checkBox58->UseVisualStyleBackColor = true;
			// 
			// checkBox59
			// 
			this->checkBox59->AutoSize = true;
			this->checkBox59->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox59->Location = System::Drawing::Point(132, 529);
			this->checkBox59->Name = L"checkBox59";
			this->checkBox59->Size = System::Drawing::Size(12, 11);
			this->checkBox59->TabIndex = 162;
			this->checkBox59->UseVisualStyleBackColor = true;
			// 
			// checkBox60
			// 
			this->checkBox60->AutoSize = true;
			this->checkBox60->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox60->Location = System::Drawing::Point(78, 529);
			this->checkBox60->Name = L"checkBox60";
			this->checkBox60->Size = System::Drawing::Size(12, 11);
			this->checkBox60->TabIndex = 161;
			this->checkBox60->UseVisualStyleBackColor = true;
			// 
			// checkBox61
			// 
			this->checkBox61->AutoSize = true;
			this->checkBox61->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox61->Location = System::Drawing::Point(96, 529);
			this->checkBox61->Name = L"checkBox61";
			this->checkBox61->Size = System::Drawing::Size(12, 11);
			this->checkBox61->TabIndex = 160;
			this->checkBox61->UseVisualStyleBackColor = true;
			// 
			// checkBox62
			// 
			this->checkBox62->AutoSize = true;
			this->checkBox62->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox62->Location = System::Drawing::Point(60, 529);
			this->checkBox62->Name = L"checkBox62";
			this->checkBox62->Size = System::Drawing::Size(12, 11);
			this->checkBox62->TabIndex = 159;
			this->checkBox62->UseVisualStyleBackColor = true;
			// 
			// checkBox63
			// 
			this->checkBox63->AutoSize = true;
			this->checkBox63->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox63->Location = System::Drawing::Point(42, 529);
			this->checkBox63->Name = L"checkBox63";
			this->checkBox63->Size = System::Drawing::Size(12, 11);
			this->checkBox63->TabIndex = 158;
			this->checkBox63->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(848, 604);
			this->Controls->Add(this->checkBox57);
			this->Controls->Add(this->checkBox58);
			this->Controls->Add(this->checkBox59);
			this->Controls->Add(this->checkBox60);
			this->Controls->Add(this->checkBox61);
			this->Controls->Add(this->checkBox62);
			this->Controls->Add(this->checkBox63);
			this->Controls->Add(this->checkBox50);
			this->Controls->Add(this->checkBox51);
			this->Controls->Add(this->checkBox52);
			this->Controls->Add(this->checkBox53);
			this->Controls->Add(this->checkBox54);
			this->Controls->Add(this->checkBox55);
			this->Controls->Add(this->checkBox56);
			this->Controls->Add(this->checkBox43);
			this->Controls->Add(this->checkBox44);
			this->Controls->Add(this->checkBox45);
			this->Controls->Add(this->checkBox46);
			this->Controls->Add(this->checkBox47);
			this->Controls->Add(this->checkBox48);
			this->Controls->Add(this->checkBox49);
			this->Controls->Add(this->checkBox36);
			this->Controls->Add(this->checkBox37);
			this->Controls->Add(this->checkBox38);
			this->Controls->Add(this->checkBox39);
			this->Controls->Add(this->checkBox40);
			this->Controls->Add(this->checkBox41);
			this->Controls->Add(this->checkBox42);
			this->Controls->Add(this->checkBox29);
			this->Controls->Add(this->checkBox30);
			this->Controls->Add(this->checkBox31);
			this->Controls->Add(this->checkBox32);
			this->Controls->Add(this->checkBox33);
			this->Controls->Add(this->checkBox34);
			this->Controls->Add(this->checkBox35);
			this->Controls->Add(this->checkBox22);
			this->Controls->Add(this->checkBox23);
			this->Controls->Add(this->checkBox24);
			this->Controls->Add(this->checkBox25);
			this->Controls->Add(this->checkBox26);
			this->Controls->Add(this->checkBox27);
			this->Controls->Add(this->checkBox28);
			this->Controls->Add(this->checkBox15);
			this->Controls->Add(this->checkBox16);
			this->Controls->Add(this->checkBox17);
			this->Controls->Add(this->checkBox18);
			this->Controls->Add(this->checkBox19);
			this->Controls->Add(this->checkBox20);
			this->Controls->Add(this->checkBox21);
			this->Controls->Add(this->checkBox8);
			this->Controls->Add(this->checkBox9);
			this->Controls->Add(this->checkBox10);
			this->Controls->Add(this->checkBox11);
			this->Controls->Add(this->checkBox12);
			this->Controls->Add(this->checkBox13);
			this->Controls->Add(this->checkBox14);
			this->Controls->Add(this->checkBox7);
			this->Controls->Add(this->checkBox5);
			this->Controls->Add(this->checkBox6);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->checkBox4);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->textBox25);
			this->Controls->Add(this->textBox24);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->textBox23);
			this->Controls->Add(this->textBox22);
			this->Controls->Add(this->textBox21);
			this->Controls->Add(this->textBox20);
			this->Controls->Add(this->textBox19);
			this->Controls->Add(this->button35);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button27);
			this->Controls->Add(this->button28);
			this->Controls->Add(this->button29);
			this->Controls->Add(this->button30);
			this->Controls->Add(this->button31);
			this->Controls->Add(this->button32);
			this->Controls->Add(this->button33);
			this->Controls->Add(this->button34);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->textBox13);
			this->Controls->Add(this->textBox14);
			this->Controls->Add(this->textBox15);
			this->Controls->Add(this->textBox16);
			this->Controls->Add(this->textBox17);
			this->Controls->Add(this->textBox18);
			this->Controls->Add(this->button26);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Лифт";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		void StateDefine()
		{
			switch (State)
			{
			case 0:
				Query = 0;
				for (i = 0; i < 9; i++)
				{
					if ((CallCar[i] == 1 || CallUp[i] == 1 || CallDown[i] == 1) && i < Floor)
					{
						Query = -1;
						break;
					}
					if ((CallCar[i] == 1 || CallUp[i] == 1 || CallDown[i] == 1) && i > Floor)
					{
						Query = 1;
						break;
					}
				}
				State = Query;
				break;
			case 1:
				Query = 0;
				for (i = Floor; i < 9; i++)
					if (CallCar[i] == 1 || CallUp[i] == 1) Query = 1;
				if (Query == 0)
					for (i = Floor; i < 9; i++)
						if (CallDown[i] == 1) Query = 1;
				if (Query == 0)
					for (i = Floor; i >= 0; i--)
						if (CallCar[i] == 1 || CallDown[i] == 1) Query = -1;
				if (Query == 0)
					for (i = Floor; i >= 0; i--)
						if (CallUp[i] == 1) Query = -1;
				if (Query == -1 || (Query == 0 && Floor > 1))
					State = -1;
				if (Query == 0 && Floor == 1)
					State = 0;
				break;
			case -1:
				Query = 0;
				for (i = Floor; i >= 0; i--)
					if (CallCar[i] == 1 || CallDown[i] == 1) Query = -1;
				if (Query == 0)
					for (i = Floor; i >= 0; i--)
						if (CallUp[i] == 1) Query = -1;
				if (Query == 0)
					for (i = Floor; i < 9; i++)
						if (CallCar[i] == 1 || CallUp[i] == 1) Query = 1;
				if (Query == 0)
					for (i = Floor; i < 9; i++)
						if (CallDown[i] == 1) Query = 1;
				if (Query == 1 || (Query == 0 && Floor < 1))
					State = 1;
				if (Query == 0 && Floor == 1)
					State = 0;
				break;
			}
		}

		void MoveDefine()
		{
			switch (State)
			{
			case 1:
				Floor++;
				Speed = -5;
				if (CallCar[Floor] == 1 || CallUp[Floor] == 1)
					CallCar[Floor] = 0, CallUp[Floor] = 0, CallDown[Floor] = 0, StopNext = 1, StopNextTime = 10;
				else 
				{
					Query = 0;
					for (i = Floor; i < 9; i++)
						if (CallUp[i] == 1 || CallCar[i] == 1) Query = 1;
					if (Query == 0 && CallDown[Floor] == 1)
						CallCar[Floor] = 0, CallUp[Floor] = 0, CallDown[Floor] = 0, StopNext = 1, StopNextTime = 10;
				}
				break;
			case -1:
				Floor--;
				Speed = 5;
				if (CallCar[Floor] == 1 || CallDown[Floor] == 1)
					CallCar[Floor] = 0, CallDown[Floor] = 0, CallUp[Floor] = 0, StopNext = 1, StopNextTime = 10;
				else
				{
					Query = 0;
					for (i = Floor; i >= 0; i--)
						if (CallDown[i] == 1 || CallCar[i] == 1) Query = 1;
					if (Query == 0 && CallUp[Floor] == 1)
						CallCar[Floor] = 0, CallUp[Floor] = 0, CallDown[Floor] = 0, StopNext = 1, StopNextTime = 10;
				}
				break;
			case 0:
				Speed = 0;
				break;
			}
		}

		void StateDefine2()
		{
			switch (State2)
			{
			case 0:
				Query2 = 0;
				for (i2 = 0; i2 < 9; i2++)
				{
					if ((CallCar2[i2] == 1 || CallUp[i2] == 1 || CallDown[i2] == 1) && i2 < Floor2)
					{
						Query2 = -1;
						break;
					}
					if ((CallCar2[i2] == 1 || CallUp[i2] == 1 || CallDown[i2] == 1) && i2 > Floor2)
					{
						Query2 = 1;
						break;
					}
				}
				State2 = Query2;
				break;
			case 1:
				Query2 = 0;
				for (i2 = Floor2; i2 < 9; i2++)
					if (CallCar2[i2] == 1 || CallUp[i2] == 1) Query2 = 1;
				if (Query2 == 0)
					for (i2 = Floor2; i2 < 9; i2++)
						if (CallDown[i2] == 1) Query2 = 1;
				if (Query2 == 0)
					for (i2 = Floor2; i2 >= 0; i2--)
						if (CallCar2[i2] == 1 || CallDown[i2] == 1) Query2 = -1;
				if (Query2 == 0)
					for (i2 = Floor2; i2 >= 0; i2--)
						if (CallUp[i2] == 1) Query2 = -1;
				if (Query2 == -1 || (Query2 == 0 && Floor2 > 1))
					State2 = -1;
				if (Query2 == 0 && Floor2 == 1)
					State2 = 0;
				break;
			case -1:
				Query2 = 0;
				for (i2 = Floor2; i2 >= 0; i2--)
					if (CallCar2[i2] == 1 || CallDown[i2] == 1) Query2 = -1;
				if (Query2 == 0)
					for (i2 = Floor2; i2 >= 0; i2--)
						if (CallUp[i2] == 1) Query2 = -1;
				if (Query2 == 0)
					for (i2 = Floor2; i2 < 9; i2++)
						if (CallCar2[i2] == 1 || CallUp[i2] == 1) Query2 = 1;
				if (Query2 == 0)
					for (i2 = Floor2; i2 < 9; i2++)
						if (CallDown[i2] == 1) Query2 = 1;
				if (Query2 == 1 || (Query2 == 0 && Floor2 < 1))
					State2 = 1;
				if (Query2 == 0 && Floor2 == 1)
					State2 = 0;
				break;
			}
		}

		void MoveDefine2()
		{
			switch (State2)
			{
			case 1:
				Floor2++;
				Speed2 = -5;
				if (CallCar2[Floor2] == 1 || CallUp[Floor2] == 1)
					CallCar2[Floor2] = 0, CallUp[Floor2] = 0, CallDown[Floor2] = 0, StopNext2 = 1, StopNextTime2 = 10;
				else
				{
					Query2 = 0;
					for (i2 = Floor2; i2 < 9; i2++)
						if (CallUp[i2] == 1 || CallCar2[i2] == 1) Query2 = 1;
					if (Query2 == 0 && CallDown[Floor2] == 1)
						CallCar2[Floor2] = 0, CallUp[Floor2] = 0, CallDown[Floor2] = 0, StopNext2 = 1, StopNextTime2 = 10;
				}
				break;
			case -1:
				Floor2--;
				Speed2 = 5;
				if (CallCar2[Floor2] == 1 || CallDown[Floor2] == 1)
					CallCar2[Floor2] = 0, CallDown[Floor2] = 0, CallUp[Floor2] = 0, StopNext2 = 1, StopNextTime2 = 10;
				else
				{
					Query2 = 0;
					for (i2 = Floor2; i2 >= 0; i2--)
						if (CallDown[i2] == 1 || CallCar2[i2] == 1) Query2 = 1;
					if (Query2 == 0 && CallUp[Floor2] == 1)
						CallCar2[Floor2] = 0, CallUp[Floor2] = 0, CallDown[Floor2] = 0, StopNext2 = 1, StopNextTime2 = 10;
				}
				break;
			case 0:
				Speed2 = 0;
				break;
			}
		}

	private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		this->Paint += gcnew PaintEventHandler(this, &MyForm::MyForm_Paint);
		this->Paint += gcnew PaintEventHandler(this, &MyForm::MyForm_Paint2);
		Timer ^ timer1 = gcnew Timer();
		Timer ^ timer2 = gcnew Timer();
		timer1->Interval = TimerInterval1;
		timer2->Interval = TimerInterval1;;
		timer1->Enabled = true;
		timer2->Enabled = true;
		for (i = 0; i < 63; i++) Passengers[i] = 0;
		timer1->Tick += gcnew EventHandler(this, &MyForm::timer1_Tick);
		timer2->Tick += gcnew EventHandler(this, &MyForm::timer2_Tick);
	}
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
		Random^ rand = gcnew Random();

		if (!StateDefined)
		{
			StateDefine();
			/*if (State)*/ StateDefined = 1;
		}
		if (!MoveDefined && StateDefined && !StopFlag)
		{
			MoveDefine();
			MoveDefined = 1;
			Time = 10;
		}
		if (MoveDefined && !StopFlag)
		{
			/*if (imgPoint.Y <= 450 && imgPoint.Y >= 50)*/ imgPoint.Y += Speed;
			Time --;
		}
		if (StopNext && !StopFlag)
		{
			StopNextTime--;
			if (StopNextTime <= 0) StopNext = 0, StopFlag = 1, StopTime = 10, OpenFlag = 1, OpenTime = 3;
		}
		if (StopFlag)
		{
			if (OpenFlag == 1) imgPoint.X += 6, OpenTime--;
			if (OpenTime == 0 && OpenFlag == 1) OpenFlag = 0, OpenedTime = 4;
			if (OpenFlag == 0) OpenedTime--;
			if (OpenFlag == 0 && OpenedTime == 0) OpenFlag = -1, CloseTime = 3;
			if (OpenFlag == -1) imgPoint.X -= 6, CloseTime--;
			if (CloseTime == 0 && OpenFlag == -1) OpenFlag = 0;
			
			StopTime--;
			if (StopTime <= 0) StopFlag = 0;
		}
		if (Time <= 0)
		{
			MoveDefined = 0;
			StateDefined = 0;
		}

		this->textBox1->Text = State.ToString();
		this->textBox2->Text = Time.ToString();
		this->textBox3->Text = Speed.ToString();
		this->textBox4->Text = Floor.ToString();
		this->textBox5->Text = StateDefined.ToString();
		this->textBox6->Text = MoveDefined.ToString();
		this->textBox7->Text = StopNextTime.ToString();
		this->textBox8->Text = StopTime.ToString();
		
		this->textBox18->Text = imgPoint.Y.ToString();

		this->textBox21->Text = TimerInterval1.ToString();
		this->textBox22->Text = TimerInterval2.ToString();
		this->textBox23->Text = TimerInterval3.ToString();

		this->textBox24->Text = Floor.ToString();
		this->textBox25->Text = Floor2.ToString();
		
		if (Passengers[0] == 1) this->checkBox1->Checked = true;
		else this->checkBox1->Checked = false;
		if (Passengers[1] == 1) this->checkBox2->Checked = true;
		else this->checkBox2->Checked = false;
		if (Passengers[2] == 1) this->checkBox3->Checked = true;
		else this->checkBox3->Checked = false;
		if (Passengers[3] == 1) this->checkBox4->Checked = true;
		else this->checkBox4->Checked = false;
		if (Passengers[4] == 1) this->checkBox5->Checked = true;
		else this->checkBox5->Checked = false;
		if (Passengers[5] == 1) this->checkBox6->Checked = true;
		else this->checkBox6->Checked = false;
		if (Passengers[6] == 1) this->checkBox7->Checked = true;
		else this->checkBox7->Checked = false;

		if (Passengers[7] == 1) this->checkBox8->Checked = true;
		else this->checkBox8->Checked = false;
		if (Passengers[8] == 1) this->checkBox9->Checked = true;
		else this->checkBox9->Checked = false;
		if (Passengers[9] == 1) this->checkBox10->Checked = true;
		else this->checkBox10->Checked = false;
		if (Passengers[10] == 1) this->checkBox11->Checked = true;
		else this->checkBox11->Checked = false;
		if (Passengers[11] == 1) this->checkBox12->Checked = true;
		else this->checkBox12->Checked = false;
		if (Passengers[12] == 1) this->checkBox13->Checked = true;
		else this->checkBox13->Checked = false;
		if (Passengers[13] == 1) this->checkBox14->Checked = true;
		else this->checkBox14->Checked = false;

		if (Passengers[14] == 1) this->checkBox15->Checked = true;
		else this->checkBox15->Checked = false;
		if (Passengers[15] == 1) this->checkBox16->Checked = true;
		else this->checkBox16->Checked = false;
		if (Passengers[16] == 1) this->checkBox17->Checked = true;
		else this->checkBox17->Checked = false;
		if (Passengers[17] == 1) this->checkBox18->Checked = true;
		else this->checkBox18->Checked = false;
		if (Passengers[18] == 1) this->checkBox19->Checked = true;
		else this->checkBox19->Checked = false;
		if (Passengers[19] == 1) this->checkBox20->Checked = true;
		else this->checkBox20->Checked = false;
		if (Passengers[20] == 1) this->checkBox21->Checked = true;
		else this->checkBox21->Checked = false;

		if (Passengers[21] == 1) this->checkBox22->Checked = true;
		else this->checkBox22->Checked = false;
		if (Passengers[22] == 1) this->checkBox23->Checked = true;
		else this->checkBox23->Checked = false;
		if (Passengers[23] == 1) this->checkBox24->Checked = true;
		else this->checkBox24->Checked = false;
		if (Passengers[24] == 1) this->checkBox25->Checked = true;
		else this->checkBox25->Checked = false;
		if (Passengers[25] == 1) this->checkBox26->Checked = true;
		else this->checkBox26->Checked = false;
		if (Passengers[26] == 1) this->checkBox27->Checked = true;
		else this->checkBox27->Checked = false;
		if (Passengers[27] == 1) this->checkBox28->Checked = true;
		else this->checkBox28->Checked = false;

		if (Passengers[28] == 1) this->checkBox29->Checked = true;
		else this->checkBox29->Checked = false;
		if (Passengers[29] == 1) this->checkBox30->Checked = true;
		else this->checkBox30->Checked = false;
		if (Passengers[30] == 1) this->checkBox31->Checked = true;
		else this->checkBox31->Checked = false;
		if (Passengers[31] == 1) this->checkBox32->Checked = true;
		else this->checkBox32->Checked = false;
		if (Passengers[32] == 1) this->checkBox33->Checked = true;
		else this->checkBox33->Checked = false;
		if (Passengers[33] == 1) this->checkBox34->Checked = true;
		else this->checkBox34->Checked = false;
		if (Passengers[34] == 1) this->checkBox35->Checked = true;
		else this->checkBox35->Checked = false;

		if (Passengers[35] == 1) this->checkBox36->Checked = true;
		else this->checkBox36->Checked = false;
		if (Passengers[36] == 1) this->checkBox37->Checked = true;
		else this->checkBox37->Checked = false;
		if (Passengers[37] == 1) this->checkBox38->Checked = true;
		else this->checkBox38->Checked = false;
		if (Passengers[38] == 1) this->checkBox39->Checked = true;
		else this->checkBox39->Checked = false;
		if (Passengers[39] == 1) this->checkBox40->Checked = true;
		else this->checkBox40->Checked = false;
		if (Passengers[40] == 1) this->checkBox41->Checked = true;
		else this->checkBox41->Checked = false;
		if (Passengers[41] == 1) this->checkBox42->Checked = true;
		else this->checkBox42->Checked = false;

		if (Passengers[42] == 1) this->checkBox43->Checked = true;
		else this->checkBox43->Checked = false;
		if (Passengers[43] == 1) this->checkBox44->Checked = true;
		else this->checkBox44->Checked = false;
		if (Passengers[44] == 1) this->checkBox45->Checked = true;
		else this->checkBox45->Checked = false;
		if (Passengers[45] == 1) this->checkBox46->Checked = true;
		else this->checkBox46->Checked = false;
		if (Passengers[46] == 1) this->checkBox47->Checked = true;
		else this->checkBox47->Checked = false;
		if (Passengers[47] == 1) this->checkBox48->Checked = true;
		else this->checkBox48->Checked = false;
		if (Passengers[48] == 1) this->checkBox49->Checked = true;
		else this->checkBox49->Checked = false;

		if (Passengers[49] == 1) this->checkBox50->Checked = true;
		else this->checkBox50->Checked = false;
		if (Passengers[50] == 1) this->checkBox51->Checked = true;
		else this->checkBox51->Checked = false;
		if (Passengers[51] == 1) this->checkBox52->Checked = true;
		else this->checkBox52->Checked = false;
		if (Passengers[52] == 1) this->checkBox53->Checked = true;
		else this->checkBox53->Checked = false;
		if (Passengers[53] == 1) this->checkBox54->Checked = true;
		else this->checkBox54->Checked = false;
		if (Passengers[54] == 1) this->checkBox55->Checked = true;
		else this->checkBox55->Checked = false;
		if (Passengers[55] == 1) this->checkBox56->Checked = true;
		else this->checkBox56->Checked = false;

		if (Passengers[56] == 1) this->checkBox57->Checked = true;
		else this->checkBox57->Checked = false;
		if (Passengers[57] == 1) this->checkBox58->Checked = true;
		else this->checkBox58->Checked = false;
		if (Passengers[58] == 1) this->checkBox59->Checked = true;
		else this->checkBox59->Checked = false;
		if (Passengers[59] == 1) this->checkBox60->Checked = true;
		else this->checkBox60->Checked = false;
		if (Passengers[60] == 1) this->checkBox61->Checked = true;
		else this->checkBox61->Checked = false;
		if (Passengers[61] == 1) this->checkBox62->Checked = true;
		else this->checkBox62->Checked = false;
		if (Passengers[62] == 1) this->checkBox63->Checked = true;
		else this->checkBox63->Checked = false;

		

		this->Invalidate();
	}
	private: System::Void MyForm_Paint(System::Object^  sender,
		System::Windows::Forms::PaintEventArgs^  e) {
		e->Graphics->DrawImage(img, imgPoint)/*.BringToFront()*/;
	}



	private: System::Void timer2_Tick(System::Object^  sender, System::EventArgs^  e) {
		if (!StateDefined2)
		{
			StateDefine2();
			/*if (State)*/ StateDefined2 = 1;
		}
		if (!MoveDefined2 && StateDefined2 && !StopFlag2)
		{
			MoveDefine2();
			MoveDefined2 = 1;
			Time2 = 10;
		}
		if (MoveDefined2 && !StopFlag2)
		{
			/*if (imgPoint2.Y <= 450 && imgPoint2.Y >= 50)*/ imgPoint2.Y += Speed2;
			Time2--;
		}
		if (StopNext2 && !StopFlag2)
		{
			StopNextTime2--;
			if (StopNextTime2 <= 0) StopNext2 = 0, StopFlag2 = 1, StopTime2 = 10, OpenFlag2 = 1, OpenTime2 = 3;
		}
		if (StopFlag2)
		{
			if (OpenFlag2 == 1) imgPoint2.X -= 6, OpenTime2--;
			if (OpenTime2 == 0 && OpenFlag2 == 1) OpenFlag2 = 0, OpenedTime2 = 4;
			if (OpenFlag2 == 0) OpenedTime2--;
			if (OpenFlag2 == 0 && OpenedTime2 == 0) OpenFlag2 = -1, CloseTime2 = 3;
			if (OpenFlag2 == -1) imgPoint2.X += 6, CloseTime2--;
			if (CloseTime2 == 0 && OpenFlag2 == -1) OpenFlag2 = 0;

			StopTime2--;
			if (StopTime2 <= 0) StopFlag2 = 0;
		}
		if (Time2 <= 0)
		{
			MoveDefined2 = 0;
			StateDefined2 = 0;
		}

		this->textBox17->Text = State2.ToString();
		this->textBox16->Text = Time2.ToString();
		this->textBox15->Text = Speed2.ToString();
		this->textBox14->Text = Floor2.ToString();
		this->textBox13->Text = StateDefined2.ToString();
		this->textBox12->Text = MoveDefined2.ToString();
		this->textBox11->Text = StopNextTime2.ToString();
		this->textBox10->Text = StopTime2.ToString();

		this->textBox9->Text = imgPoint2.Y.ToString();

		if (CallCar[0] == 1) button9->BackColor = Color::IndianRed;
		else button9->BackColor = Color::LightGray;
		if (CallCar[1] == 1) button8->BackColor = Color::IndianRed;
		else button8->BackColor = Color::LightGray;
		if (CallCar[2] == 1) button7->BackColor = Color::IndianRed;
		else button7->BackColor = Color::LightGray;
		if (CallCar[3] == 1) button6->BackColor = Color::IndianRed;
		else button6->BackColor = Color::LightGray;
		if (CallCar[4] == 1) button5->BackColor = Color::IndianRed;
		else button5->BackColor = Color::LightGray;
		if (CallCar[5] == 1) button4->BackColor = Color::IndianRed;
		else button4->BackColor = Color::LightGray;
		if (CallCar[6] == 1) button3->BackColor = Color::IndianRed;
		else button3->BackColor = Color::LightGray;
		if (CallCar[7] == 1) button2->BackColor = Color::IndianRed;
		else button2->BackColor = Color::LightGray;
		if (CallCar[8] == 1) button1->BackColor = Color::IndianRed;
		else button1->BackColor = Color::LightGray;

		if (CallCar2[0] == 1) button10->BackColor = Color::IndianRed;
		else button10->BackColor = Color::LightGray;
		if (CallCar2[1] == 1) button27->BackColor = Color::IndianRed;
		else button27->BackColor = Color::LightGray;
		if (CallCar2[2] == 1) button28->BackColor = Color::IndianRed;
		else button28->BackColor = Color::LightGray;
		if (CallCar2[3] == 1) button29->BackColor = Color::IndianRed;
		else button29->BackColor = Color::LightGray;
		if (CallCar2[4] == 1) button30->BackColor = Color::IndianRed;
		else button30->BackColor = Color::LightGray;
		if (CallCar2[5] == 1) button31->BackColor = Color::IndianRed;
		else button31->BackColor = Color::LightGray;
		if (CallCar2[6] == 1) button32->BackColor = Color::IndianRed;
		else button32->BackColor = Color::LightGray;
		if (CallCar2[7] == 1) button33->BackColor = Color::IndianRed;
		else button33->BackColor = Color::LightGray;
		if (CallCar2[8] == 1) button34->BackColor = Color::IndianRed;
		else button34->BackColor = Color::LightGray;

		if (CallUp[0] == 1) button26->BackColor = Color::IndianRed;
		else button26->BackColor = Color::White;
		if (CallUp[1] == 1) button24->BackColor = Color::IndianRed;
		else button24->BackColor = Color::White;
		if (CallUp[2] == 1) button22->BackColor = Color::IndianRed;
		else button22->BackColor = Color::White;
		if (CallUp[3] == 1) button20->BackColor = Color::IndianRed;
		else button20->BackColor = Color::White;
		if (CallUp[4] == 1) button18->BackColor = Color::IndianRed;
		else button18->BackColor = Color::White;
		if (CallUp[5] == 1) button16->BackColor = Color::IndianRed;
		else button16->BackColor = Color::White;
		if (CallUp[6] == 1) button14->BackColor = Color::IndianRed;
		else button14->BackColor = Color::White;
		if (CallUp[7] == 1) button12->BackColor = Color::IndianRed;
		else button12->BackColor = Color::White;

		if (CallDown[8] == 1) button11->BackColor = Color::IndianRed;
		else button11->BackColor = Color::White;
		if (CallDown[1] == 1) button25->BackColor = Color::IndianRed;
		else button25->BackColor = Color::White;
		if (CallDown[2] == 1) button23->BackColor = Color::IndianRed;
		else button23->BackColor = Color::White;
		if (CallDown[3] == 1) button21->BackColor = Color::IndianRed;
		else button21->BackColor = Color::White;
		if (CallDown[4] == 1) button19->BackColor = Color::IndianRed;
		else button19->BackColor = Color::White;
		if (CallDown[5] == 1) button17->BackColor = Color::IndianRed;
		else button17->BackColor = Color::White;
		if (CallDown[6] == 1) button15->BackColor = Color::IndianRed;
		else button15->BackColor = Color::White;
		if (CallDown[7] == 1) button13->BackColor = Color::IndianRed;
		else button13->BackColor = Color::White;

		
		
		this->Invalidate();
	}
	private: System::Void MyForm_Paint2(System::Object^  sender,
		System::Windows::Forms::PaintEventArgs^  e) {
		e->Graphics->DrawImage(img2, imgPoint2);
	}



private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
	if (Floor != 0) CallCar[0] = 1;
}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
	if (Floor != 1) CallCar[1] = 1;
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	if (Floor != 2) CallCar[2] = 1;
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	if (Floor != 3) CallCar[3] = 1;
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	if (Floor != 4) CallCar[4] = 1;
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	if (Floor != 5) CallCar[5] = 1;
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	if (Floor != 6) CallCar[6] = 1;
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	if (Floor != 7) CallCar[7] = 1;
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	if (Floor != 8) CallCar[8] = 1;
}

private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
	if (Floor2 != 0) CallCar2[0] = 1;
}
private: System::Void button27_Click(System::Object^  sender, System::EventArgs^  e) {
	if (Floor2 != 1) CallCar2[1] = 1;
}
private: System::Void button28_Click(System::Object^  sender, System::EventArgs^  e) {
	if (Floor2 != 2) CallCar2[2] = 1;
}
private: System::Void button29_Click(System::Object^  sender, System::EventArgs^  e) {
	if (Floor2 != 3) CallCar2[3] = 1;
}
private: System::Void button30_Click(System::Object^  sender, System::EventArgs^  e) {
	if (Floor2 != 4) CallCar2[4] = 1;
}
private: System::Void button31_Click(System::Object^  sender, System::EventArgs^  e) {
	if (Floor2 != 5) CallCar2[5] = 1;
}
private: System::Void button32_Click(System::Object^  sender, System::EventArgs^  e) {
	if (Floor2 != 6) CallCar2[6] = 1;
}
private: System::Void button33_Click(System::Object^  sender, System::EventArgs^  e) {
	if (Floor2 != 7) CallCar2[7] = 1;
}
private: System::Void button34_Click(System::Object^  sender, System::EventArgs^  e) {
	if (Floor2 != 8) CallCar2[8] = 1;
}

private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
	if (Floor != 8) CallDown[8] = 1;
}
private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
	if (Floor != 7) CallDown[7] = 1;
}
private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) {
	if (Floor != 6) CallDown[6] = 1;
}
private: System::Void button17_Click(System::Object^  sender, System::EventArgs^  e) {
	if (Floor != 5) CallDown[5] = 1;
}
private: System::Void button19_Click(System::Object^  sender, System::EventArgs^  e) {
	if (Floor != 4) CallDown[4] = 1;
}
private: System::Void button21_Click(System::Object^  sender, System::EventArgs^  e) {
	if (Floor != 3) CallDown[3] = 1;
}
private: System::Void button23_Click(System::Object^  sender, System::EventArgs^  e) {
	if (Floor != 2) CallDown[2] = 1;
}
private: System::Void button25_Click(System::Object^  sender, System::EventArgs^  e) {
	if (Floor != 1) CallDown[1] = 1;
}
private: System::Void button26_Click(System::Object^  sender, System::EventArgs^  e) {
	if (Floor != 0) CallUp[0] = 1;
}
private: System::Void button24_Click(System::Object^  sender, System::EventArgs^  e) {
	if (Floor != 1) CallUp[1] = 1;
}
private: System::Void button22_Click(System::Object^  sender, System::EventArgs^  e) {
	if (Floor != 2) CallUp[2] = 1;
}
private: System::Void button20_Click(System::Object^  sender, System::EventArgs^  e) {
	if (Floor != 3) CallUp[3] = 1;
}
private: System::Void button18_Click(System::Object^  sender, System::EventArgs^  e) {
	if (Floor != 4) CallUp[4] = 1;
}
private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) {
	if (Floor != 5) CallUp[5] = 1;
}
private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
	if (Floor != 6) CallUp[6] = 1;
}
private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
	if (Floor != 7) CallUp[7] = 1;
}

private: System::Void button35_Click(System::Object^  sender, System::EventArgs^  e) {
	button35->BackColor = Color::IndianRed;
	Timer ^ timer3 = gcnew Timer();
	timer3->Interval = TimerInterval3;
	timer3->Enabled = true;
	timer3->Tick += gcnew EventHandler(this, &MyForm::timer3_Tick);
}

private: System::Void timer3_Tick(System::Object^  sender, System::EventArgs^  e) {
	Random^ rand = gcnew Random();
	RandVal = rand->Next(63);
	if (Passengers[RandVal] != 1) Passengers[RandVal] = 1;

	
	for (i = 0; i < 63; i++)
		if (Passengers[i] == 1)
		{
			RandVal = rand->Next(2);
			if (i >= 0 && i <= 6)
				CallDown[8] == 1;
			if (i >= 7 && i <= 13)
				switch (RandVal)
				{
				case 0:
					CallDown[7] = 1;
					break;
				case 1:
					CallUp[7] = 1;
					break;
				}
			if (i >= 14 && i <= 20)
				switch (RandVal)
				{
				case 0:
					CallDown[6] = 1;
					break;
				case 1:
					CallUp[6] = 1;
					break;
				}
			if (i >= 21 && i <= 27)
				switch (RandVal)
				{
				case 0:
					CallDown[5] = 1;
					break;
				case 1:
					CallUp[5] = 1;
					break;
				}
			if (i >= 28 && i <= 34)
				switch (RandVal)
				{
				case 0:
					CallDown[4] = 1;
					break;
				case 1:
					CallUp[4] = 1;
					break;
				}
			if (i >= 35 && i <= 41)
				switch (RandVal)
				{
				case 0:
					CallDown[3] = 1;
					break;
				case 1:
					CallUp[3] = 1;
					break;
				}
			if (i >= 42 && i <= 48)
				switch (RandVal)
				{
				case 0:
					CallDown[2] = 1;
					break;
				case 1:
					CallUp[2] = 1;
					break;
				}
			if (i >= 49 && i <= 55)
				switch (RandVal)
				{
				case 0:
					CallDown[1] = 1;
					break;
				case 1:
					CallUp[1] = 1;
					break;
				}
			if (i >= 56 && i <= 62)
				switch (RandVal)
				{
				case 0:
					CallDown[1] = 1;
					break;
				case 1:
					CallUp[1] = 1;
					break;
				}
		}
}

//private: System::Void timer3_Tick(System::Object^  sender, System::EventArgs^  e) {
//	Random^ rand = gcnew Random();
//	RandQueue = rand->Next(4);
//	RandFloor = rand->Next(9);
//	switch (RandQueue)
//	{
//	 case 0:
//		 if (CallCar[RandFloor] != 1) CallCar[RandFloor] = 1;
//		 break;
//	 case 1:
//		 if (CallCar2[RandFloor] != 1) CallCar2[RandFloor] = 1;
//		 break;
//	 case 2:
//		 if (CallUp[RandFloor] != 1) CallUp[RandFloor] = 1;
//		 break;
//	 case 3:
//		 if (CallDown[RandFloor] != 1) CallDown[RandFloor] = 1;
//		 break;
//	 }
//	this->textBox19->Text = RandQueue.ToString();
//	this->textBox20->Text = RandFloor.ToString();
//}

private: System::Void textBox23_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	//TimerInterval3 = Int32::Parse(this->textBox23->Text);
}
private: System::Void label8_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox4_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
};
}



//Floor = 1, State = 0, CallCar[Floor] = 0, CallUp[Floor] = 0, CallDown[Floor] = 0;
//this->Paint += gcnew PaintEventHandler(this, &MyForm::MyForm_Paint);