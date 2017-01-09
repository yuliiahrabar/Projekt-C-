#pragma once

namespace Final_project {

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

	private: System::Windows::Forms::TextBox^  category;


	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  day;
	private: System::Windows::Forms::TextBox^  month;
	private: System::Windows::Forms::TextBox^  year;



	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::TextBox^  id_product;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::DataGridView^  dataGridView3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label8;
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
			this->category = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->day = (gcnew System::Windows::Forms::TextBox());
			this->month = (gcnew System::Windows::Forms::TextBox());
			this->year = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->id_product = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
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
			this->label5->Location = System::Drawing::Point(199, 80);
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
			this->label14->Location = System::Drawing::Point(84, 80);
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
			this->amount->Location = System::Drawing::Point(247, 77);
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
			// category
			// 
			this->category->Location = System::Drawing::Point(167, 77);
			this->category->Name = L"category";
			this->category->Size = System::Drawing::Size(26, 26);
			this->category->TabIndex = 12;
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
			this->day->Size = System::Drawing::Size(24, 26);
			this->day->TabIndex = 15;
			// 
			// month
			// 
			this->month->Location = System::Drawing::Point(181, 121);
			this->month->Name = L"month";
			this->month->Size = System::Drawing::Size(23, 26);
			this->month->TabIndex = 16;
			// 
			// year
			// 
			this->year->Location = System::Drawing::Point(216, 121);
			this->year->Name = L"year";
			this->year->Size = System::Drawing::Size(54, 26);
			this->year->TabIndex = 17;
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(616, 411);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(118, 32);
			this->button3->TabIndex = 18;
			this->button3->Text = L"Wyjscie";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->id_product);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->year);
			this->groupBox1->Controls->Add(this->month);
			this->groupBox1->Controls->Add(this->day);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->category);
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
			this->groupBox1->Text = L"Dodaj produkt";
			// 
			// id_product
			// 
			this->id_product->Location = System::Drawing::Point(52, 77);
			this->id_product->Name = L"id_product";
			this->id_product->Size = System::Drawing::Size(26, 26);
			this->id_product->TabIndex = 19;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(23, 80);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(23, 20);
			this->label3->TabIndex = 18;
			this->label3->Text = L"Id";
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
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Lavender;
			this->ClientSize = System::Drawing::Size(758, 489);
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


		 void fill_table (String^ table_query, int i){
			
			String^ constring=L"datasource=localhost;port=3306;username=yhrabar;password=sweden;database=fresh";
			MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
			conDataBase->Open();
			MySqlCommand^ cmdDataBase1=gcnew MySqlCommand(table_query, conDataBase);
			
			MySqlDataAdapter ^ sda1 = gcnew MySqlDataAdapter();
			
			sda1->SelectCommand = cmdDataBase1;

			DataTable^ dbdataset1 = gcnew DataTable();
			sda1->Fill(dbdataset1);

			BindingSource^ bSource1 = gcnew BindingSource();

			bSource1 ->DataSource = dbdataset1;
			if (i==1)
				dataGridView1 -> DataSource = bSource1;
			else {
				if (i==2) dataGridView2 -> DataSource = bSource1;
				else dataGridView3 -> DataSource = bSource1;
			} 
			sda1->Update(dbdataset1);
			
		 }
		 
		 String^ query_for_table1(int type , int count, int Day, int Month, int Year, String^ l)
		 {
			String^ k;
			
			if (type==2)
				k = "(SELECT " + l + ".amount, " + " list.name, " + l + ".month, " + l + ".year FROM list, " + l + " WHERE list.id_product = " + l + ".id AND ((" + l + ".month<=" + Month.ToString() + " AND " + l + ".year=" + Year.ToString() + ") OR "+ l + ".year<" + Year.ToString() + ")  )";	
			if (type==3 || type==4)
				k = "(SELECT " + l + ".amount, " + " list.name, " + l + ".day, " + l + ".month, " + l + ".year FROM list, " + l + " WHERE list.id_product = " + l + ".id AND (("+ l + ".month<" + Month.ToString() + " AND " + l +".year=" + Year.ToString()+") OR (" + l + ".day<=" + Day.ToString() + " AND " + l + ".month=" + Month.ToString() + " AND " + l + ".year=" + Year.ToString() + ")"+ " OR "+ l + ".year<" + Year.ToString() + ") )";
			
			if (count!=1)
				k = " UNION " + k;	
			
			return (k);
			
		 }


		private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {			 

			
			 String^ l;
			 String^ table_query1;
			 String^ table_query2;
			 String^ table_query3;
			 
			 int count1=0;
			 int count2=0;
			 int count3=0;
			 int number_of_days;
			 int day_coef;
			 int new_Day, new_Month, new_Year;
	         
			 // Current date
			 DateTime datetime1 = DateTime::Now;
			 int Day = datetime1.Day;
			 int Month = datetime1.Month;
			 int Year = datetime1.Year;
			 new_Month = Month;
			 new_Year = Year;

			 int Number_of_Tables;
			 
			 if (Month==4 || Month==6 || Month==9 || Month==11) // Checking lenght of month
					number_of_days = 30;
				else { if (Month==2)
					   number_of_days = 28;
					   else
					   number_of_days = 31;}



			 // Connection to database fresh
			 String^ constring=L"datasource=localhost;port=3306;username=yhrabar;password=sweden;database=fresh";
			 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
			 conDataBase->Open();

			 // Get number of rows in list which is equal to number of tables with products
			 MySqlCommand^ count_rows=gcnew MySqlCommand("SELECT COUNT(*) FROM list;", conDataBase);
			 MySqlDataReader^ myReader_count;
			 myReader_count =count_rows->ExecuteReader();
				while(myReader_count->Read()) 
					{
						Number_of_Tables = (myReader_count->GetInt32(0));
					 }
			    myReader_count->Close();



			 //Get type of the product for all products in the table
			 MySqlDataReader^ myReader_type;
			
			   for (int i=1; i<= Number_of_Tables; i++){
				
				l = "l" + i.ToString(); // Name of the table with amount and expiring date of the product 
				
				// Check which category has product

				MySqlCommand^ check_type=gcnew MySqlCommand("SELECT category FROM list WHERE id_product=" + i.ToString() + ";", conDataBase);
			    myReader_type =check_type->ExecuteReader();
				
				int type_of_product;
				while(myReader_type->Read()) 
					{
						 type_of_product = (myReader_type->GetInt32(0));
					 }
			    myReader_type->Close();

				// Filling first table for products with category 2

	            if (type_of_product==2) {
					count1++;
					table_query1 = table_query1 + query_for_table1(type_of_product, count1, Day, Month, Year, l);}
				

				// Changing expiring date according to the product category


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

			 table_query1 = table_query1 + ";";
			 table_query2 = table_query2 + ";";
			 table_query3 = table_query3 + ";";
			
			 //// End of writing queries

			 try{

				fill_table(table_query1, 1);
				fill_table(table_query2, 2);
				fill_table(table_query3, 3);

			 }catch(Exception^ex){
			 
				 MessageBox::Show(ex->Message);
			 }

			 
		}



	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {

			DateTime datetime = DateTime::Now;
			this -> label1 -> Text = datetime.ToString();
			 }
	private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
			 }


	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
				 Application::Exit();
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

			 String^ constring=L"datasource=localhost;port=3306;username=yhrabar;password=sweden;database=fresh";
			 String^ insert1;
			 String^ create_table;
			 String^ insert2;
			 insert1 = "INSERT INTO list VALUES ('"+ this-> id_product ->Text + "' , '" + this-> name_product ->Text + "' , '" + this-> category ->Text + "' );";
			 create_table = "CREATE TABLE l"+ this-> id_product ->Text + " ( amount int(10) NOT NULL, day int(10), month TINYINT, year INT, id int(10) NOT NULL);";
			 insert2 = "INSERT INTO l"+ this-> id_product ->Text + " VALUES ('"+ this-> amount ->Text + "' , '" + this-> day ->Text + "' , '" + this-> month ->Text + "' , '" + this-> year ->Text + "' , '" + this-> id_product ->Text +"' );";
			 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
			 MySqlCommand^ cmdDataBase1=gcnew MySqlCommand(insert1, conDataBase);
			 MySqlCommand^ cmdDataBase2=gcnew MySqlCommand(create_table,conDataBase);
			 MySqlCommand^ cmdDataBase3=gcnew MySqlCommand(insert2, conDataBase);

			 MySqlDataReader^ myReader;
			 MySqlDataReader^ myReader2;
			 MySqlDataReader^ myReader3;
			 conDataBase->Open();

			 try{
				
				myReader=cmdDataBase1->ExecuteReader();
				while(myReader->Read()) 
					{
					 }
			    myReader->Close();
				
				
				myReader2=cmdDataBase2->ExecuteReader();
				while(myReader2->Read()) 
					{
					 }
				myReader2->Close();


				myReader3=cmdDataBase3->ExecuteReader();
				while(myReader3->Read()) 
					{
					 }
				myReader3->Close();

				MessageBox::Show("Produkt dodany!");
				
			 }
			 catch(Exception^ex){
			 
				 MessageBox::Show(ex->Message);
			 }
			 
		 }
};
}

