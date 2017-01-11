#pragma once

#include "Form2.h"

namespace Final_project {

	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			timer1->Start();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected: 
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::DataGridView^  dataGridView2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  labael15;


	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label14;


	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  amount;

	private: System::Windows::Forms::TextBox^  name_product;


	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  day;
	private: System::Windows::Forms::TextBox^  month;
	private: System::Windows::Forms::TextBox^  year;


	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::GroupBox^  groupBox1;


	private: System::Windows::Forms::DataGridView^  dataGridView3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::ComponentModel::IContainer^  components;

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
			this->components = (gcnew System::ComponentModel::Container());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->labael15 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->amount = (gcnew System::Windows::Forms::TextBox());
			this->name_product = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->day = (gcnew System::Windows::Forms::TextBox());
			this->month = (gcnew System::Windows::Forms::TextBox());
			this->year = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView2))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView3))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(256, 28);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(127, 57);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Sprawdz produkty";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(13, 61);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(60, 24);
			this->label1->TabIndex = 1;
			this->label1->Text = L"label1";
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &Form1::timer1_Tick);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 120);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->Size = System::Drawing::Size(371, 93);
			this->dataGridView1->TabIndex = 2;
			// 
			// dataGridView2
			// 
			this->dataGridView2->AllowUserToAddRows = false;
			this->dataGridView2->AllowUserToDeleteRows = false;
			this->dataGridView2->AllowUserToResizeColumns = false;
			this->dataGridView2->AllowUserToResizeRows = false;
			this->dataGridView2->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(12, 242);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->ReadOnly = true;
			this->dataGridView2->RowHeadersWidth = 30;
			this->dataGridView2->Size = System::Drawing::Size(371, 102);
			this->dataGridView2->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(12, 27);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(122, 25);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Dzisiaj jest:";
			// 
			// labael15
			// 
			this->labael15->AutoSize = true;
			this->labael15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->labael15->Location = System::Drawing::Point(23, 41);
			this->labael15->Name = L"labael15";
			this->labael15->Size = System::Drawing::Size(124, 20);
			this->labael15->TabIndex = 6;
			this->labael15->Text = L"Nazwa produktu";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(188, 78);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(42, 20);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Ilość";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label14->Location = System::Drawing::Point(23, 80);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(77, 20);
			this->label14->TabIndex = 8;
			this->label14->Text = L"Kategoria";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(203, 177);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(101, 31);
			this->button2->TabIndex = 9;
			this->button2->Text = L"Dodaj";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// amount
			// 
			this->amount->Location = System::Drawing::Point(247, 74);
			this->amount->Name = L"amount";
			this->amount->Size = System::Drawing::Size(23, 26);
			this->amount->TabIndex = 10;
			// 
			// name_product
			// 
			this->name_product->Location = System::Drawing::Point(151, 38);
			this->name_product->Name = L"name_product";
			this->name_product->Size = System::Drawing::Size(119, 26);
			this->name_product->TabIndex = 11;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(23, 124);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(113, 20);
			this->label7->TabIndex = 14;
			this->label7->Text = L"Data ważności";
			// 
			// day
			// 
			this->day->Location = System::Drawing::Point(151, 121);
			this->day->Name = L"day";
			this->day->ReadOnly = true;
			this->day->Size = System::Drawing::Size(24, 26);
			this->day->TabIndex = 15;
			// 
			// month
			// 
			this->month->Location = System::Drawing::Point(181, 121);
			this->month->Name = L"month";
			this->month->ReadOnly = true;
			this->month->Size = System::Drawing::Size(23, 26);
			this->month->TabIndex = 16;
			// 
			// year
			// 
			this->year->Location = System::Drawing::Point(216, 121);
			this->year->Name = L"year";
			this->year->ReadOnly = true;
			this->year->Size = System::Drawing::Size(54, 26);
			this->year->TabIndex = 17;
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(615, 429);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(118, 32);
			this->button3->TabIndex = 18;
			this->button3->Text = L"Wyjscie";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->year);
			this->groupBox1->Controls->Add(this->month);
			this->groupBox1->Controls->Add(this->day);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->name_product);
			this->groupBox1->Controls->Add(this->amount);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->label14);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->labael15);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->groupBox1->Location = System::Drawing::Point(412, 28);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(313, 214);
			this->groupBox1->TabIndex = 19;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Dodaj nowy produkt";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"1", L"2", L"3", L"4"});
			this->comboBox1->Location = System::Drawing::Point(107, 75);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(51, 28);
			this->comboBox1->TabIndex = 26;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::comboBox1_SelectedIndexChanged);
			// 
			// dataGridView3
			// 
			this->dataGridView3->AllowUserToAddRows = false;
			this->dataGridView3->AllowUserToDeleteRows = false;
			this->dataGridView3->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Location = System::Drawing::Point(12, 370);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->ReadOnly = true;
			this->dataGridView3->Size = System::Drawing::Size(371, 108);
			this->dataGridView3->TabIndex = 20;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(13, 97);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(199, 20);
			this->label4->TabIndex = 21;
			this->label4->Text = L"Kategoria 2 (do 1 miesiący)";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(8, 213);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(199, 20);
			this->label6->TabIndex = 22;
			this->label6->Text = L"Kategoria 3 (do 1 tygodnia)";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(12, 347);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(160, 20);
			this->label8->TabIndex = 23;
			this->label8->Text = L"Kategoria 4 (do 3 dni)";
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(412, 257);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(158, 59);
			this->button4->TabIndex = 24;
			this->button4->Text = L"Pokaż wszystkie produkty";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(417, 348);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(152, 63);
			this->button5->TabIndex = 25;
			this->button5->Text = L"Usuń wybrany produkt";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Lavender;
			this->ClientSize = System::Drawing::Size(758, 489);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->dataGridView3);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->Name = L"Form1";
			this->Text = L"Fresh and Easy";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView2))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


		// Returns value after MySql command
	int get_value_mySQL(String^ command){

			String^ constring=L"datasource=localhost;port=3306;username=yhrabar;password=sweden;database=fresh";
			MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
			conDataBase->Open();

			MySqlCommand^ count=gcnew MySqlCommand(command, conDataBase);
			MySqlDataReader^ myReader_count;
			myReader_count = count ->ExecuteReader();
			int value;
			while(myReader_count->Read()){
				value = (myReader_count->GetInt32(0));
			}
			myReader_count->Close();
			return value;
	}


	// Just send command to MySql Server - changes to database
	void mySQL_do_command(String^ command){
				 
			String^ constring=L"datasource=localhost;port=3306;username=yhrabar;password=sweden;database=fresh";
			MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
			MySqlCommand^ cmdDataBase=gcnew MySqlCommand(command, conDataBase);
			MySqlDataReader^ myReader;
			conDataBase->Open();

			myReader=cmdDataBase->ExecuteReader();
			while(myReader->Read()) {}
			myReader->Close();

	}

	// Fill three tables with products depending on category
	void fill_table (String^ table_query, int i){
			
			String^ constring=L"datasource=localhost;port=3306;username=yhrabar;password=sweden;database=fresh";
			MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
			conDataBase->Open();
			MySqlCommand^ cmdDataBase=gcnew MySqlCommand(table_query, conDataBase);
			MySqlDataAdapter ^ sda = gcnew MySqlDataAdapter();
			sda->SelectCommand = cmdDataBase;

			DataTable^ dbdataset = gcnew DataTable();
			sda->Fill(dbdataset);

			BindingSource^ bSource = gcnew BindingSource();
			bSource ->DataSource = dbdataset;
			if (i==1)
				dataGridView1 -> DataSource = bSource;
			else {
				if (i==2) dataGridView2 -> DataSource = bSource;
				else dataGridView3 -> DataSource = bSource;
			} 
			sda->Update(dbdataset);	
		
	}
		 

	// Complete queries for building tables 
	String^ query_for_table1(int type , int count, int Day, int Month, int Year, String^ l){
			
			String^ k;
			if (type==2)
				k = "(SELECT " + " list.name, " + l + ".amount, " +  l + ".month, " + l + ".year FROM list, " + l + " WHERE list.id_product = " + l + ".id AND ((" + l + ".month<=" + Month.ToString() + " AND " + l + ".year=" + Year.ToString() + ") OR "+ l + ".year<" + Year.ToString() + ")  )";	
			if (type==3 || type==4)
				k = "(SELECT " +  " list.name, " + l + ".amount, " + l + ".day, " + l + ".month, " + l + ".year FROM list, " + l + " WHERE list.id_product = " + l + ".id AND (("+ l + ".month<" + Month.ToString() + " AND " + l +".year=" + Year.ToString()+") OR (" + l + ".day<=" + Day.ToString() + " AND " + l + ".month=" + Month.ToString() + " AND " + l + ".year=" + Year.ToString() + ")"+ " OR "+ l + ".year<" + Year.ToString() + ") )";
			if (count!=1)
				k = " UNION " + k;	
			return (k);
			
	}


	// Filling tables with expiered products
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {			 
			
			 String^ l; // Name of product table which has information about its date and amount 
			 
			 String^ table_query1; // queries for filling tables
			 String^ table_query2;
			 String^ table_query3;
			 
			 int Number_of_Tables; // number of tables with products = number of products

			 int count1=0; // variables for table queries
			 int count2=0;
			 int count3=0;

	         
			 // Current date
			 DateTime datetime1 = DateTime::Now;
			 int Day = datetime1.Day;
			 int Month = datetime1.Month;
			 int Year = datetime1.Year;
			 
			 int number_of_days; // find lenght of the month 
			 if (Month==4 || Month==6 || Month==9 || Month==11) // Checking lenght of month
				number_of_days = 30;
			 else { 
				 if (Month==2)
					  number_of_days = 28;
				else
					  number_of_days = 31;
			 }

			 
			 int day_coef; // Day coefficient = +3 days for type 4 and +7 days for type 3
			 int new_Day, new_Month, new_Year;

			 new_Month = Month;
			 new_Year = Year;

			 
			 // Connection to database fresh
			 String^ constring=L"datasource=localhost;port=3306;username=yhrabar;password=sweden;database=fresh";
			 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
			 conDataBase->Open();
			 
			 // Get number of rows in list which is equal to number of tables with products
			 Number_of_Tables = get_value_mySQL("SELECT COUNT(*) FROM list;");

			 
			
			 for (int i=1; i<= Number_of_Tables; i++){
				
				 l = "l" + i.ToString(); // Name of the table with amount and expiring date of the product 
				
				//Get type of the product for all products in the table
			    MySqlDataReader^ myReader_type;
				MySqlCommand^ check_type=gcnew MySqlCommand("SELECT category FROM list WHERE id_product=" + i.ToString() + ";", conDataBase);
			    myReader_type =check_type->ExecuteReader();
				int type_of_product;
				while(myReader_type->Read()) {
						 type_of_product = (myReader_type->GetInt32(0));
				}
			    myReader_type->Close();


				// Filling first table for products with category 2
	            if (type_of_product==2) {
					count1++;
					table_query1 = table_query1 + query_for_table1(type_of_product, count1, Day, Month, Year, l);
				}
				

				// Changing expiring date according for products of category 3 and 4 


				if (type_of_product==3 || type_of_product==4){

				    if (type_of_product==3) day_coef=7;
					else day_coef=3;

					if (Day + day_coef > number_of_days){
						new_Day = (Day + day_coef) - number_of_days;
						if (Month == 12) {
							new_Month = 1;
							new_Year = Year + 1;
							}
						else 
							new_Month = Month + 1;
					}
					else 
						new_Day = day_coef + Day;

					if (type_of_product==3) {count2++; table_query2 = table_query2 + query_for_table1(type_of_product, count2, new_Day, new_Month, new_Year, l);}
					if (type_of_product==4) {count3++; table_query3 = table_query3 + query_for_table1(type_of_product, count3, new_Day, new_Month, new_Year, l);}
				
				}
				
		     }

			 //// End of writing queries
			 table_query1 = table_query1 + ";";
			 table_query2 = table_query2 + ";";
			 table_query3 = table_query3 + ";";
			
			 // Checking if everything is correct with queries
			 try{

				fill_table(table_query1, 1);
				fill_table(table_query2, 2);
				fill_table(table_query3, 3);

			 }catch(Exception^ex){
			 
				 MessageBox::Show(ex->Message);
			 }

			 
	}


	// Uptade time on form
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {

			DateTime datetime = DateTime::Now;
			this -> label1 -> Text = datetime.ToString();
			
	}


	// Close whole application
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {

			 Application::Exit();
		 
	}

	// Changing ability to write to text boxes according to type of the product 
	public: System::Void comboBox1_SelectedIndexChanged( Object^ sender, System::EventArgs^ e ) {
			
			if (this-> name_product ->Text != ""){
				
				String^ type_of_product =  comboBox1 -> SelectedItem -> ToString();
			    int type =  Int32::Parse(type_of_product);
			    
				if (type==1){
					this -> month -> ReadOnly = true;
					this -> year -> ReadOnly = true;
					this -> day -> ReadOnly = true;
				}
			    else {
					this -> month -> ReadOnly = false;
					this -> year -> ReadOnly = false;
				}  

				if (type==2)
					this -> day -> ReadOnly = true;
				if (type==3 || type==4)
					this -> day -> ReadOnly = false;
			}
				 
    }


    // Adding new product
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 
			 bool filledfields = true; // Checking if all filled are filled

			 if(String::IsNullOrWhiteSpace(this->name_product->Text) || this -> comboBox1 -> SelectedIndex == -1 || String::IsNullOrWhiteSpace(this-> amount ->Text) )
				filledfields = false;
			 if( this -> comboBox1 ->SelectedIndex == 2 && (String::IsNullOrWhiteSpace(this-> month ->Text) || String::IsNullOrWhiteSpace(this-> year ->Text)) )
				filledfields = false;
			 if((this -> comboBox1 ->SelectedIndex == 3 || this -> comboBox1 ->SelectedIndex == 4) && (String::IsNullOrWhiteSpace(this-> day ->Text) || String::IsNullOrWhiteSpace(this-> month ->Text) || String::IsNullOrWhiteSpace(this-> year ->Text)))
				    filledfields = false;
			
			
			 if (filledfields==false) 
				 MessageBox::Show("Fill all fields!");

			 else{

				int id = get_value_mySQL("SELECT COUNT(*) FROM list;") + 1;
				String^ type_of_product =  comboBox1 -> SelectedItem -> ToString();
				int type = Int32::Parse(type_of_product);;
			 
				// Add new product to the main list of products 
				mySQL_do_command("INSERT INTO list VALUES ('"+ id.ToString() + "' , '" + this-> name_product ->Text + "' , '" + type_of_product + "' );");

				// Create table for this new product with infromation about amount, date and id
				// Add amount to table of new product

				if (type==2){
					mySQL_do_command("CREATE TABLE l"+ id.ToString() + " ( amount int(10) NOT NULL, month TINYINT, year INT, id int(10) NOT NULL);");
					mySQL_do_command("INSERT INTO l"+ id.ToString() + " VALUES ('"+ this-> amount ->Text + "' , '" + this-> month ->Text + "' , '" + this-> year ->Text + "' , '" + id.ToString() +"' );");
				
				}

				if (type==3 || type==4){
					mySQL_do_command("CREATE TABLE l"+ id.ToString() + " ( amount int(10) NOT NULL, day int(10), month TINYINT, year INT, id int(10) NOT NULL);");
					mySQL_do_command("INSERT INTO l"+ id.ToString() + " VALUES ('"+ this-> amount ->Text + "' , '" + this-> day ->Text + "' , '" + this-> month ->Text + "' , '" + this-> year ->Text + "' , '" + id.ToString() +"' );");
			 
				}

				 MessageBox::Show("Produkt dodany!");

				// Clean fields 
				this-> name_product ->Text = "";
				this-> amount ->Text = "";
				this-> day ->Text ="";
				this-> month ->Text="";
				this-> year ->Text="";
				this -> month -> ReadOnly = true;
				this -> year -> ReadOnly = true;
				this -> day -> ReadOnly = true;
				this -> comboBox1 -> SelectedIndex = -1;
			 }
		}


	// Show new form with list of all products
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			
			 Form2^ f2 = gcnew Form2();
			 f2 -> ShowDialog();
			
	}

	// Delete from selected product from table abd from database 
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {

			 for each (DataGridViewRow^ Tw in dataGridView1->Rows){
				 if(Tw->Selected==true){

					String^ name = dataGridView1->CurrentCell->Value->ToString();
					String^ Month = dataGridView1->SelectedCells[2]->Value->ToString();
					String^ Year = dataGridView1->SelectedCells[3]->Value->ToString();
					int id = get_value_mySQL("SELECT id_product FROM list WHERE name='"+ name +"';");
					mySQL_do_command("DELETE FROM l" + id + " WHERE month=" + Month + " AND year="+ Year + ";");
					dataGridView1 ->Rows -> Remove(Tw);
				}
			  
		    }
		 
			for each (DataGridViewRow^ Tw in dataGridView2->Rows){
				if(Tw->Selected==true){
				   String^ name = dataGridView2->CurrentCell->Value->ToString();
				   String^ Day = dataGridView2->SelectedCells[2]->Value->ToString();
				   String^ Month = dataGridView2->SelectedCells[3]->Value->ToString();
				   String^ Year = dataGridView2->SelectedCells[4]->Value->ToString();
				   int id = get_value_mySQL("SELECT id_product FROM list WHERE name='"+ name +"';");
				   mySQL_do_command("DELETE FROM l" + id + " WHERE day=" + Day +" AND month=" + Month + " AND year="+ Year + ";");
				   dataGridView2 ->Rows -> Remove(Tw);

				}
		    }
		
		    for each (DataGridViewRow^ Tw in dataGridView3->Rows){
			    if(Tw->Selected==true){
				
				 String^ name = dataGridView3->CurrentCell->Value->ToString();
				 String^ Day = dataGridView3->SelectedCells[2]->Value->ToString();
				 String^ Month = dataGridView3->SelectedCells[3]->Value->ToString();
				 String^ Year = dataGridView3->SelectedCells[4]->Value->ToString();
				 int id = get_value_mySQL("SELECT id_product FROM list WHERE name='"+ name +"';");
				 mySQL_do_command("DELETE FROM l" + id + " WHERE day=" + Day +" AND month=" + Month + " AND year="+ Year + ";");
				 dataGridView3 ->Rows -> Remove(Tw);
				
				}
		}
		 
		
		 
	}






};
}

