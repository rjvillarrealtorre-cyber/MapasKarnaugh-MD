#pragma once

namespace ProyectoMD {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			numeroTerminos = -1;
			formaIngresoDatos = -1;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
				delete dgv_tabla;
			}
		}
	private: System::Windows::Forms::Label^ lbl_titulo;
	private: System::Windows::Forms::Label^ lbl_numterm;

	private: System::Windows::Forms::RadioButton^ rb_tres;
	private: System::Windows::Forms::RadioButton^ rb_cuatro;
	private: System::Windows::Forms::Label^ lbl_forma;
	private: System::Windows::Forms::ComboBox^ cb_forma;
	private: System::Windows::Forms::GroupBox^ gb_ingreso;

	protected:
	protected:
	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;
	private: System::Windows::Forms::RadioButton^ rb_dos;

		int numeroTerminos;
		int formaIngresoDatos;
		DataGridView^ dgv_tabla;
		Label^ lbl_expresion;
		TextBox^ txt_expresion;
		Button^ btn_cargarExpresion;

		Label^ lbl_minterminos;
		TextBox^ txt_minterminos;
		Button^ btn_cargarMinterminos;

		Label^ lbl_maxterminos;
		TextBox^ txt_maxterminos;
		Button^ btn_cargarMaxterminos;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->lbl_titulo = (gcnew System::Windows::Forms::Label());
			this->lbl_numterm = (gcnew System::Windows::Forms::Label());
			this->rb_tres = (gcnew System::Windows::Forms::RadioButton());
			this->rb_cuatro = (gcnew System::Windows::Forms::RadioButton());
			this->lbl_forma = (gcnew System::Windows::Forms::Label());
			this->cb_forma = (gcnew System::Windows::Forms::ComboBox());
			this->gb_ingreso = (gcnew System::Windows::Forms::GroupBox());
			this->rb_dos = (gcnew System::Windows::Forms::RadioButton());
			this->SuspendLayout();
			// 
			// lbl_titulo
			// 
			this->lbl_titulo->AutoSize = true;
			this->lbl_titulo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_titulo->Location = System::Drawing::Point(50, 18);
			this->lbl_titulo->Name = L"lbl_titulo";
			this->lbl_titulo->Size = System::Drawing::Size(245, 29);
			this->lbl_titulo->TabIndex = 0;
			this->lbl_titulo->Text = L"Mapas de Karnaugh";
			// 
			// lbl_numterm
			// 
			this->lbl_numterm->AutoSize = true;
			this->lbl_numterm->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_numterm->Location = System::Drawing::Point(51, 62);
			this->lbl_numterm->Name = L"lbl_numterm";
			this->lbl_numterm->Size = System::Drawing::Size(228, 20);
			this->lbl_numterm->TabIndex = 1;
			this->lbl_numterm->Text = L"Ingrese el número de términos:";
			// 
			// rb_tres
			// 
			this->rb_tres->AutoSize = true;
			this->rb_tres->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rb_tres->Location = System::Drawing::Point(356, 60);
			this->rb_tres->Name = L"rb_tres";
			this->rb_tres->Size = System::Drawing::Size(36, 24);
			this->rb_tres->TabIndex = 3;
			this->rb_tres->Text = L"3";
			this->rb_tres->UseVisualStyleBackColor = true;
			this->rb_tres->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rb_tres_CheckedChanged);
			// 
			// rb_cuatro
			// 
			this->rb_cuatro->AutoSize = true;
			this->rb_cuatro->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rb_cuatro->Location = System::Drawing::Point(410, 60);
			this->rb_cuatro->Name = L"rb_cuatro";
			this->rb_cuatro->Size = System::Drawing::Size(36, 24);
			this->rb_cuatro->TabIndex = 4;
			this->rb_cuatro->Text = L"4";
			this->rb_cuatro->UseVisualStyleBackColor = true;
			this->rb_cuatro->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rb_cuatro_CheckedChanged);
			// 
			// lbl_forma
			// 
			this->lbl_forma->AutoSize = true;
			this->lbl_forma->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_forma->Location = System::Drawing::Point(51, 101);
			this->lbl_forma->Name = L"lbl_forma";
			this->lbl_forma->Size = System::Drawing::Size(227, 20);
			this->lbl_forma->TabIndex = 5;
			this->lbl_forma->Text = L"Forma de ingreso de los datos:";
			// 
			// cb_forma
			// 
			this->cb_forma->Enabled = false;
			this->cb_forma->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cb_forma->FormattingEnabled = true;
			this->cb_forma->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"Expresión Lógica", L"Tabla de Verdad", L"Lista de Minitérminos",
					L"Lista de Maxitérminos"
			});
			this->cb_forma->Location = System::Drawing::Point(301, 98);
			this->cb_forma->Name = L"cb_forma";
			this->cb_forma->Size = System::Drawing::Size(145, 28);
			this->cb_forma->TabIndex = 6;
			this->cb_forma->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::cb_forma_SelectedIndexChanged);
			// 
			// gb_ingreso
			// 
			this->gb_ingreso->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->gb_ingreso->Location = System::Drawing::Point(55, 146);
			this->gb_ingreso->Name = L"gb_ingreso";
			this->gb_ingreso->Size = System::Drawing::Size(391, 407);
			this->gb_ingreso->TabIndex = 7;
			this->gb_ingreso->TabStop = false;
			this->gb_ingreso->Text = L"Ingreso de Datos";
			// 
			// rb_dos
			// 
			this->rb_dos->AutoSize = true;
			this->rb_dos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rb_dos->Location = System::Drawing::Point(301, 60);
			this->rb_dos->Name = L"rb_dos";
			this->rb_dos->Size = System::Drawing::Size(36, 24);
			this->rb_dos->TabIndex = 2;
			this->rb_dos->Text = L"2";
			this->rb_dos->UseVisualStyleBackColor = true;
			this->rb_dos->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rb_dos_CheckedChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1024, 576);
			this->Controls->Add(this->gb_ingreso);
			this->Controls->Add(this->cb_forma);
			this->Controls->Add(this->lbl_forma);
			this->Controls->Add(this->rb_cuatro);
			this->Controls->Add(this->rb_tres);
			this->Controls->Add(this->rb_dos);
			this->Controls->Add(this->lbl_numterm);
			this->Controls->Add(this->lbl_titulo);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: void ocultarIngresos() {
		// tabla
		if (dgv_tabla != nullptr) dgv_tabla->Visible = false;

		// el
		if (lbl_expresion != nullptr) lbl_expresion->Visible = false;
		if (txt_expresion != nullptr) txt_expresion->Visible = false;
		if (btn_cargarExpresion != nullptr) btn_cargarExpresion->Visible = false;

		// mini
		if (lbl_minterminos != nullptr) lbl_minterminos->Visible = false;
		if (txt_minterminos != nullptr) txt_minterminos->Visible = false;
		if (btn_cargarMinterminos != nullptr) btn_cargarMinterminos->Visible = false;

		// maxi
		if (lbl_maxterminos != nullptr) lbl_maxterminos->Visible = false;
		if (txt_maxterminos != nullptr) txt_maxterminos->Visible = false;
		if (btn_cargarMaxterminos != nullptr) btn_cargarMaxterminos->Visible = false;
	}
	private: void mostrarIngresoMinterminos() {
		if (lbl_minterminos == nullptr) {
			lbl_minterminos = gcnew System::Windows::Forms::Label();
			lbl_minterminos->Location = System::Drawing::Point(80, 180);
			lbl_minterminos->Size = System::Drawing::Size(340, 60);
			lbl_minterminos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			lbl_minterminos->Text = "Ingrese minitérminos separados por comas (ej. 0, 2, 5, 7):";
			Controls->Add(lbl_minterminos);
		}

		if (txt_minterminos == nullptr) {
			txt_minterminos = gcnew System::Windows::Forms::TextBox();
			txt_minterminos->Location = System::Drawing::Point(80, 225);
			txt_minterminos->Size = System::Drawing::Size(220, 25);
			txt_minterminos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			Controls->Add(txt_minterminos);
		}

		if (btn_cargarMinterminos == nullptr) {
			btn_cargarMinterminos = gcnew System::Windows::Forms::Button();
			btn_cargarMinterminos->Location = System::Drawing::Point(310, 223);
			btn_cargarMinterminos->Size = System::Drawing::Size(90, 28);
			btn_cargarMinterminos->Text = "Cargar";
			btn_cargarMinterminos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			Controls->Add(btn_cargarMinterminos);
		}

		lbl_minterminos->Visible = true;
		txt_minterminos->Visible = true;
		btn_cargarMinterminos->Visible = true;

		lbl_minterminos->BringToFront();
		txt_minterminos->BringToFront();
		btn_cargarMinterminos->BringToFront();
	}
	private: void MostrarIngresoMaxterminos() {
		if (lbl_maxterminos == nullptr) {
			lbl_maxterminos = gcnew System::Windows::Forms::Label();
			lbl_maxterminos->Location = System::Drawing::Point(80, 180);
			lbl_maxterminos->Size = System::Drawing::Size(340, 60);
			lbl_maxterminos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			lbl_maxterminos->Text = "Ingrese maxitérminos separados por comas (ej. 1, 3, 4, 6):";
			Controls->Add(lbl_maxterminos);
		}

		if (txt_maxterminos == nullptr) {
			txt_maxterminos = gcnew System::Windows::Forms::TextBox();
			txt_maxterminos->Location = System::Drawing::Point(80, 225);
			txt_maxterminos->Size = System::Drawing::Size(220, 25);
			txt_maxterminos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			Controls->Add(txt_maxterminos);
		}

		if (btn_cargarMaxterminos == nullptr) {
			btn_cargarMaxterminos = gcnew System::Windows::Forms::Button();
			btn_cargarMaxterminos->Location = System::Drawing::Point(310, 223);
			btn_cargarMaxterminos->Size = System::Drawing::Size(90, 28);
			btn_cargarMaxterminos->Text = "Cargar";
			btn_cargarMaxterminos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			Controls->Add(btn_cargarMaxterminos);
		}

		lbl_maxterminos->Visible = true;
		txt_maxterminos->Visible = true;
		btn_cargarMaxterminos->Visible = true;

		lbl_maxterminos->BringToFront();
		txt_maxterminos->BringToFront();
		btn_cargarMaxterminos->BringToFront();
	}
	private: void mostrarIngresoExpresion() {
		// crear
		if (lbl_expresion == nullptr) {
			lbl_expresion = gcnew System::Windows::Forms::Label();
			lbl_expresion->Location = System::Drawing::Point(80, 180);
			lbl_expresion->Size = System::Drawing::Size(320, 30);
			lbl_expresion->Text = "Ingrese la expresión (ejemplo: A'B + CD):";
			lbl_expresion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			Controls->Add(lbl_expresion);
		}

		// crear txtbox si no existe
		if (txt_expresion == nullptr) {
			txt_expresion = gcnew System::Windows::Forms::TextBox();
			txt_expresion->Location = System::Drawing::Point(80, 215);
			txt_expresion->Size = System::Drawing::Size(220, 25);
			txt_expresion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			Controls->Add(txt_expresion);
		}

		// 3. crear el boton si no existe
		if (btn_cargarExpresion == nullptr) {
			btn_cargarExpresion = gcnew System::Windows::Forms::Button();
			btn_cargarExpresion->Location = System::Drawing::Point(310, 213);
			btn_cargarExpresion->Size = System::Drawing::Size(90, 28);
			btn_cargarExpresion->Text = "Cargar";
			btn_cargarExpresion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			Controls->Add(btn_cargarExpresion);
		}

		// hacerlos visibles
		lbl_expresion->Visible = true;
		txt_expresion->Visible = true;
		btn_cargarExpresion->Visible = true;

		lbl_expresion->BringToFront();
		txt_expresion->BringToFront();
		btn_cargarExpresion->BringToFront();
	}
	private: void generarTabla() {
		if (dgv_tabla == nullptr) {
			dgv_tabla = gcnew System::Windows::Forms::DataGridView();

			// inicialización
			dgv_tabla->Location = System::Drawing::Point(80, 180);
			dgv_tabla->Size = System::Drawing::Size(340, 250);
			dgv_tabla->AllowUserToAddRows = false;
			dgv_tabla->AllowUserToDeleteRows = false;
			dgv_tabla->AllowUserToResizeRows = false;
			dgv_tabla->RowHeadersVisible = false;
			dgv_tabla->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::CellSelect;
			dgv_tabla->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;

			Controls->Add(dgv_tabla);
		}

		// limpiar
		dgv_tabla->Columns->Clear();
		dgv_tabla->Rows->Clear();
		dgv_tabla->Visible = true;

		// crear columnas
		array<String^>^ nombresVars = { "A", "B", "C", "D" };
		for (int v = 0; v < numeroTerminos; v++) {
			dgv_tabla->Columns->Add(nombresVars[v], nombresVars[v]);
			dgv_tabla->Columns[v]->ReadOnly = true;
		}

		// columna de salida (valor de la expresión)
		dgv_tabla->Columns->Add("F", "Salida (F)");
		dgv_tabla->Columns[numeroTerminos]->ReadOnly = false;

		//Llenado de filas
		int totalFilas = (int)Math::Pow(2, numeroTerminos);
		for (int i = 0; i < totalFilas; i++) {
			int index = dgv_tabla->Rows->Add();

			// Llena las filas. Para llenar una tabla de verdad, se
			// cuenta del 0 hasta 2^n - 1, y ese número se transfor
			// ma hacia la base 2 (binaria). Esto se podría hacer
			// transformando "v" de la base diez hacia la base
			// dos con divisiones y residuos; pero es más fácil
			// hacerlo con bits.
			for (int v = 0; v < numeroTerminos; v++) {
				int bit = (i >> (numeroTerminos - 1 - v)) & 1;
				dgv_tabla->Rows[index]->Cells[v]->Value = bit.ToString();
			}

			// valor por defecto
			dgv_tabla->Rows[index]->Cells[numeroTerminos]->Value = "0";
		}
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void rb_dos_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		numeroTerminos = 2;
		cb_forma->Enabled = true;
		if (dgv_tabla != nullptr) generarTabla();
	}
	private: System::Void rb_tres_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		numeroTerminos = 3;
		cb_forma->Enabled = true;
		if (dgv_tabla != nullptr) generarTabla();
	}
	private: System::Void rb_cuatro_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		numeroTerminos = 4;
		cb_forma->Enabled = true;
		if (dgv_tabla != nullptr) generarTabla();
	}
	private: System::Void cb_forma_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (cb_forma->SelectedItem->ToString() == "Expresión Lógica") {
			ocultarIngresos();
			mostrarIngresoExpresion();
		}
		else if (cb_forma->SelectedItem->ToString() == "Tabla de Verdad") {
			ocultarIngresos();
			generarTabla();
			dgv_tabla->BringToFront();
		}
		else if (cb_forma->SelectedItem->ToString() == "Lista de Minitérminos") {
			ocultarIngresos();
			mostrarIngresoMinterminos();
		}
		else if (cb_forma->SelectedItem->ToString() == "Lista de Maxitérminos") {
			ocultarIngresos();
			MostrarIngresoMaxterminos();
		}
	}
};
}
