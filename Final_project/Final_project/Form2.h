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
	/// Summary for Form2
	/// </summary>
	public ref class Form2 : public System::Windows::Forms::Form
	{
	public:
		Form2(void)
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
		~Form2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  dataGridView1;
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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(10, 9);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->Size = System::Drawing::Size(364, 441);
			this->dataGridView1->TabIndex = 0;
			// 
			// Form2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(386, 455);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"Form2";
			this->Text = L"Tabela wszystkich produktów";
			this->Load += gcnew System::EventHandler(this, &Form2::Form2_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	
		
	private: System::Void Form2_Load(System::Object^  sender, System::EventArgs^  e) {

			String^ constring=L"datasource=localhost;port=3306;username=yhrabar;password=sweden;database=fresh";
			MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
			conDataBase->Open();
			MySqlCommand^ cmdDataBase1=gcnew MySqlCommand("SELECT * FROM list;", conDataBase);
			
			MySqlDataAdapter ^ sda1 = gcnew MySqlDataAdapter();
			
			sda1->SelectCommand = cmdDataBase1;

			DataTable^ dbdataset1 = gcnew DataTable();
			sda1->Fill(dbdataset1);

			BindingSource^ bSource1 = gcnew BindingSource();

			bSource1 ->DataSource = dbdataset1;
			
			dataGridView1 -> DataSource = bSource1;
			
			sda1->Update(dbdataset1);



			 }
	};
}
