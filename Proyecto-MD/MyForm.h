#pragma once

#using <System.dll>
#using <System.Core.dll>

namespace ProyectoMD {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;

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
		System::ComponentModel::Container^ components;
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

		   Button^ btn_tabla;
		   DataGridView^ dgv_karnaugh;
		   Label^ lbl_cabeceraKarnaugh;

		   Label^ lbl_resultado;

	private: System::Windows::Forms::Label^ lb_titulodos;
	private: System::Windows::Forms::Label^ linea;

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
			   this->lb_titulodos = (gcnew System::Windows::Forms::Label());
			   this->linea = (gcnew System::Windows::Forms::Label());
			   this->SuspendLayout();
			   // 
			   // lbl_titulo
			   // 
			   this->lbl_titulo->AutoSize = true;
			   this->lbl_titulo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lbl_titulo->Location = System::Drawing::Point(50, 18);
			   this->lbl_titulo->Name = L"lbl_titulo";
			   this->lbl_titulo->Size = System::Drawing::Size(209, 29);
			   this->lbl_titulo->TabIndex = 0;
			   this->lbl_titulo->Text = L"Ingreso de datos";
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
			   // lb_titulodos
			   // 
			   this->lb_titulodos->AutoSize = true;
			   this->lb_titulodos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lb_titulodos->Location = System::Drawing::Point(491, 18);
			   this->lb_titulodos->Name = L"lb_titulodos";
			   this->lb_titulodos->Size = System::Drawing::Size(232, 29);
			   this->lb_titulodos->TabIndex = 8;
			   this->lb_titulodos->Text = L"Mapa de Karnaugh";
			   // 
			   // linea
			   // 
			   this->linea->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			   this->linea->Location = System::Drawing::Point(469, 21);
			   this->linea->Name = L"linea";
			   this->linea->Size = System::Drawing::Size(1, 532);
			   this->linea->TabIndex = 9;
			   this->linea->Text = L" ";
			   // 
			   // MyForm
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->ClientSize = System::Drawing::Size(1024, 576);
			   this->Controls->Add(this->linea);
			   this->Controls->Add(this->lb_titulodos);
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
		if (dgv_tabla != nullptr) {
			dgv_tabla->Visible = false;
			dgv_tabla->Location = System::Drawing::Point(80, 180);
		}

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

		if (btn_tabla != nullptr) btn_tabla->Visible = false;
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
			btn_cargarMinterminos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			btn_cargarMinterminos->Click += gcnew System::EventHandler(this, &MyForm::btn_cargarMinterminos_Click);
			Controls->Add(btn_cargarMinterminos);
		}

		lbl_minterminos->Visible = true;
		txt_minterminos->Visible = true;
		btn_cargarMinterminos->Visible = true;

		lbl_minterminos->BringToFront();
		txt_minterminos->BringToFront();
		btn_cargarMinterminos->BringToFront();
	}
	private: void mostrarIngresoMaxterminos() {
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
			btn_cargarMaxterminos->Click += gcnew System::EventHandler(this, &MyForm::btn_cargarMaxterminos_Click);
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
			btn_cargarExpresion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			btn_cargarExpresion->Click += gcnew System::EventHandler(this, &MyForm::btn_cargarExpresion_Click);
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

	private: void generarTablaDesdeExpresion() {
		int totalCasillas = (int)Math::Pow(2, numeroTerminos);

		dgv_tabla = gcnew DataGridView();
		dgv_tabla->Location = Point(80, 270);
		dgv_tabla->Size = Drawing::Size(340, 250);

		dgv_tabla->AllowUserToAddRows = false;
		dgv_tabla->RowHeadersVisible = false;
		dgv_tabla->AutoSizeColumnsMode =
			DataGridViewAutoSizeColumnsMode::Fill;

		// columnas de variables
		if (numeroTerminos >= 1)
			dgv_tabla->Columns->Add("A", "A");

		if (numeroTerminos >= 2)
			dgv_tabla->Columns->Add("B", "B");

		if (numeroTerminos >= 3)
			dgv_tabla->Columns->Add("C", "C");

		if (numeroTerminos >= 4)
			dgv_tabla->Columns->Add("D", "D");

		dgv_tabla->Columns->Add("F", "F");

		// crear filas
		dgv_tabla->Rows->Add(totalCasillas);

		// generar combinaciones binarias
		for (int i = 0; i < totalCasillas; i++) {

			for (int v = 0; v < numeroTerminos; v++) {

				int bit = (i >> (numeroTerminos - 1 - v)) & 1;

				dgv_tabla->Rows[i]->Cells[v]->Value = bit;
			}
		}

		// limpiar y preparar la expresion
		String^ expresion = txt_expresion->Text
			->Replace(" ", "")
			->ToUpper();

		array<String^>^ terminos = expresion->Split('+');

		for (int i = 0; i < totalCasillas; i++) {
			int resultado = 0;
			for each(String ^ termino in terminos) {

				if (casillaCumpleTermino(
					i,
					numeroTerminos,
					termino))
				{
					resultado = 1;
					break;
				}
			}
			dgv_tabla->Rows[i]->Cells[numeroTerminos]->Value = resultado;
		}

		this->Controls->Add(dgv_tabla);
		dgv_tabla->BringToFront();
	}

	private: System::Void btn_tabla_Click(System::Object^ sender, System::EventArgs^ e) {
		construirKarnaughDesdeTabla();
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

			// btn
			if (btn_tabla == nullptr) {
				btn_tabla = gcnew Button();
				btn_tabla->Location = System::Drawing::Point(80, 440);
				btn_tabla->Size = System::Drawing::Size(340, 35);
				btn_tabla->Text = "Generar Mapa de Karnaugh";
				btn_tabla->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular));
				btn_tabla->Click += gcnew System::EventHandler(this, &MyForm::btn_tabla_Click);
				Controls->Add(btn_tabla);
			}
			btn_tabla->Visible = true;
			btn_tabla->BringToFront();
		}
	}

	private: System::Void btn_cargarExpresion_Click(System::Object^ sender, System::EventArgs^ e) {
		construirKarnaughDesdeExpresion();
		generarTablaDesdeExpresion();
	}
		   //sufrimiento
	private: void construirKarnaughDesdeTabla() {
		if (dgv_tabla == nullptr || numeroTerminos < 2) return;

		if (dgv_karnaugh == nullptr) {
			dgv_karnaugh = gcnew DataGridView();
			dgv_karnaugh->Location = System::Drawing::Point(510, 100);
			dgv_karnaugh->Size = System::Drawing::Size(440, 260);
			dgv_karnaugh->AllowUserToAddRows = false;
			dgv_karnaugh->AllowUserToDeleteRows = false;
			dgv_karnaugh->AllowUserToResizeRows = false;
			dgv_karnaugh->AllowUserToResizeColumns = false;
			dgv_karnaugh->ReadOnly = true;
			dgv_karnaugh->RowHeadersVisible = true;
			dgv_karnaugh->RowHeadersWidth = 80;
			dgv_karnaugh->DefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleCenter;
			dgv_karnaugh->ColumnHeadersDefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleCenter;
			dgv_karnaugh->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular));
			Controls->Add(dgv_karnaugh);
		}

		if (lbl_cabeceraKarnaugh == nullptr) {
			lbl_cabeceraKarnaugh = gcnew Label();
			lbl_cabeceraKarnaugh->Location = System::Drawing::Point(510, 65);
			lbl_cabeceraKarnaugh->Size = System::Drawing::Size(440, 30);
			lbl_cabeceraKarnaugh->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular));
			Controls->Add(lbl_cabeceraKarnaugh);
		}

		dgv_karnaugh->Columns->Clear();
		dgv_karnaugh->Rows->Clear();
		dgv_karnaugh->Visible = true;
		lbl_cabeceraKarnaugh->Visible = true;

		int totalCasillas = (int)Math::Pow(2, numeroTerminos);
		array<int>^ valoresF = gcnew array<int>(totalCasillas);

		for (int i = 0; i < totalCasillas; i++) {
			Object^ val = dgv_tabla->Rows[i]->Cells[numeroTerminos]->Value;
			valoresF[i] = (val != nullptr && val->ToString()->Trim() == "1") ? 1 : 0;
		}

		if (numeroTerminos == 2) {
			lbl_cabeceraKarnaugh->Text = "Filas: A \\ Columnas: B";
			dgv_karnaugh->Columns->Add("B0", "B = 0");
			dgv_karnaugh->Columns->Add("B1", "B = 1");

			array<array<int>^>^ mapa2 = {
				gcnew array<int>{ 0, 1 }, // A = 0
				gcnew array<int>{ 2, 3 }  // A = 1
			};
			array<String^>^ encabezadosFila = { "A = 0", "A = 1" };

			for (int r = 0; r < 2; r++) {
				int idx = dgv_karnaugh->Rows->Add();
				dgv_karnaugh->Rows[idx]->HeaderCell->Value = encabezadosFila[r];
				for (int c = 0; c < 2; c++) {
					dgv_karnaugh->Rows[idx]->Cells[c]->Value = valoresF[mapa2[r][c]].ToString();
				}
			}
		}
		else if (numeroTerminos == 3) {
			lbl_cabeceraKarnaugh->Text = "Filas: A \\ Columnas: BC (Código Gray)";
			array<String^>^ cols = { "00", "01", "11", "10" };
			for (int c = 0; c < 4; c++) dgv_karnaugh->Columns->Add(cols[c], cols[c]);

			array<array<int>^>^ mapa3 = {
				gcnew array<int>{ 0, 1, 3, 2 }, // A = 0
				gcnew array<int>{ 4, 5, 7, 6 }  // A = 1
			};
			array<String^>^ encabezadosFila = { "A = 0", "A = 1" };

			for (int r = 0; r < 2; r++) {
				int idx = dgv_karnaugh->Rows->Add();
				dgv_karnaugh->Rows[idx]->HeaderCell->Value = encabezadosFila[r];
				for (int c = 0; c < 4; c++) {
					dgv_karnaugh->Rows[idx]->Cells[c]->Value = valoresF[mapa3[r][c]].ToString();
				}
			}
		}
		else if (numeroTerminos == 4) {
			lbl_cabeceraKarnaugh->Text = "Filas: AB \\ Columnas: CD (Código Gray)";
			array<String^>^ cols = { "00", "01", "11", "10" };
			for (int c = 0; c < 4; c++) dgv_karnaugh->Columns->Add(cols[c], cols[c]);

			array<array<int>^>^ mapa4 = {
				gcnew array<int>{  0,  1,  3,  2 }, // AB = 00
				gcnew array<int>{  4,  5,  7,  6 }, // AB = 01
				gcnew array<int>{ 12, 13, 15, 14 }, // AB = 11
				gcnew array<int>{  8,  9, 11, 10 }  // AB = 10
			};
			array<String^>^ encabezadosFila = { "00", "01", "11", "10" };

			for (int r = 0; r < 4; r++) {
				int idx = dgv_karnaugh->Rows->Add();
				dgv_karnaugh->Rows[idx]->HeaderCell->Value = encabezadosFila[r];
				for (int c = 0; c < 4; c++) {
					dgv_karnaugh->Rows[idx]->Cells[c]->Value = valoresF[mapa4[r][c]].ToString();
				}
			}
		}

		dgv_karnaugh->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::Fill;
		dgv_karnaugh->BringToFront();
		lbl_cabeceraKarnaugh->BringToFront();

		mostrarResultado(valoresF);
	}

	private: bool casillaCumpleTermino(int indiceCasilla, int numVars, String^ termino) {
		array<String^>^ vars = { "A", "B", "C", "D" };

		for (int v = 0; v < numVars; v++) {
			String^ nombreVar = vars[v];
			// transforma el número de la casilla a la base dos
			int bit = (indiceCasilla >> (numVars - 1 - v)) & 1;

			// 1. Si el término pide la variable negada (ej. A' o !A)
			if (termino->Contains(nombreVar + "'") || termino->Contains("!" + nombreVar)) {
				if (bit != 0) return false; // Si en la casilla no es 0, no cumple
			}
			// 2. Si el término pide la variable afirmada (ej. A)
			else if (termino->Contains(nombreVar)) {
				if (bit != 1) return false; // Si en la casilla no es 1, no cumple
			}
			// 3. Si no contiene la variable, se ignora (no impone condición)
		}

		return true; // Cumplió todas las condiciones del término
	}

	private: void construirKarnaughDesdeExpresion() {
		if (txt_expresion == nullptr || String::IsNullOrWhiteSpace(txt_expresion->Text) || numeroTerminos < 2) return;

		// 1. limpieza del texto ingresado
		String^ expr = txt_expresion->Text->Replace(" ", "")->ToUpper();
		array<String^>^ terminos = expr->Split('+');

		// 2. evaluar cada casilla (del 0 al 2^n - 1)
		int totalCasillas = (int)Math::Pow(2, numeroTerminos);
		array<int>^ valoresF = gcnew array<int>(totalCasillas);

		for (int i = 0; i < totalCasillas; i++) {
			valoresF[i] = 0; // Por defecto 0
			for each(String ^ term in terminos) {
				if (term->Trim()->Length > 0 && casillaCumpleTermino(i, numeroTerminos, term->Trim())) {
					valoresF[i] = 1; // Si cumple al menos un término, vale 1
					break;
				}
			}
		}

		// 3. configurar dgv_karnaugh si aún no fue creado
		if (dgv_karnaugh == nullptr) {
			dgv_karnaugh = gcnew DataGridView();
			dgv_karnaugh->Location = System::Drawing::Point(510, 100);
			dgv_karnaugh->Size = System::Drawing::Size(440, 260);
			dgv_karnaugh->AllowUserToAddRows = false;
			dgv_karnaugh->AllowUserToDeleteRows = false;
			dgv_karnaugh->AllowUserToResizeRows = false;
			dgv_karnaugh->AllowUserToResizeColumns = false;
			dgv_karnaugh->ReadOnly = true;
			dgv_karnaugh->RowHeadersVisible = true;
			dgv_karnaugh->RowHeadersWidth = 80;
			dgv_karnaugh->DefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleCenter;
			dgv_karnaugh->ColumnHeadersDefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleCenter;
			dgv_karnaugh->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular));
			Controls->Add(dgv_karnaugh);
		}

		if (lbl_cabeceraKarnaugh == nullptr) {
			lbl_cabeceraKarnaugh = gcnew Label();
			lbl_cabeceraKarnaugh->Location = System::Drawing::Point(510, 65);
			lbl_cabeceraKarnaugh->Size = System::Drawing::Size(440, 30);
			lbl_cabeceraKarnaugh->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular));
			Controls->Add(lbl_cabeceraKarnaugh);
		}

		dgv_karnaugh->Columns->Clear();
		dgv_karnaugh->Rows->Clear();
		dgv_karnaugh->Visible = true;
		lbl_cabeceraKarnaugh->Visible = true;

		// 4. ubicar los valores en la cuadrícula de Karnaugh (código Gray)
		if (numeroTerminos == 2) {
			lbl_cabeceraKarnaugh->Text = "Filas: A \\ Columnas: B";
			dgv_karnaugh->Columns->Add("B0", "B = 0");
			dgv_karnaugh->Columns->Add("B1", "B = 1");

			array<array<int>^>^ mapa2 = {
				gcnew array<int>{ 0, 1 },
				gcnew array<int>{ 2, 3 }
			};
			array<String^>^ encabezados = { "A = 0", "A = 1" };

			for (int r = 0; r < 2; r++) {
				int idx = dgv_karnaugh->Rows->Add();
				dgv_karnaugh->Rows[idx]->HeaderCell->Value = encabezados[r];
				for (int c = 0; c < 2; c++) {
					dgv_karnaugh->Rows[idx]->Cells[c]->Value = valoresF[mapa2[r][c]].ToString();
				}
			}
		}
		else if (numeroTerminos == 3) {
			lbl_cabeceraKarnaugh->Text = "Filas: A \\ Columnas: BC (Código Gray)";
			array<String^>^ cols = { "00", "01", "11", "10" };
			for (int c = 0; c < 4; c++) dgv_karnaugh->Columns->Add(cols[c], cols[c]);

			array<array<int>^>^ mapa3 = {
				gcnew array<int>{ 0, 1, 3, 2 },
				gcnew array<int>{ 4, 5, 7, 6 }
			};
			array<String^>^ encabezados = { "A = 0", "A = 1" };

			for (int r = 0; r < 2; r++) {
				int idx = dgv_karnaugh->Rows->Add();
				dgv_karnaugh->Rows[idx]->HeaderCell->Value = encabezados[r];
				for (int c = 0; c < 4; c++) {
					dgv_karnaugh->Rows[idx]->Cells[c]->Value = valoresF[mapa3[r][c]].ToString();
				}
			}
		}
		else if (numeroTerminos == 4) {
			lbl_cabeceraKarnaugh->Text = "Filas: AB \\ Columnas: CD (Código Gray)";
			array<String^>^ cols = { "00", "01", "11", "10" };
			for (int c = 0; c < 4; c++) dgv_karnaugh->Columns->Add(cols[c], cols[c]);

			array<array<int>^>^ mapa4 = {
				gcnew array<int>{  0,  1,  3,  2 },
				gcnew array<int>{  4,  5,  7,  6 },
				gcnew array<int>{ 12, 13, 15, 14 },
				gcnew array<int>{  8,  9, 11, 10 }
			};
			array<String^>^ encabezados = { "00", "01", "11", "10" };

			for (int r = 0; r < 4; r++) {
				int idx = dgv_karnaugh->Rows->Add();
				dgv_karnaugh->Rows[idx]->HeaderCell->Value = encabezados[r];
				for (int c = 0; c < 4; c++) {
					dgv_karnaugh->Rows[idx]->Cells[c]->Value = valoresF[mapa4[r][c]].ToString();
				}
			}
		}

		dgv_karnaugh->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::Fill;
		dgv_karnaugh->BringToFront();
		lbl_cabeceraKarnaugh->BringToFront();

		mostrarResultado(valoresF);
	}

	private: void construirKarnaughDesdeMinterminos() {
		String^ texto = txt_minterminos->Text;

		array<String^>^ terminos = texto->Split(',');

		int totalCasillas = (int)Math::Pow(2, numeroTerminos);

		array<int>^ valoresF = gcnew array<int>(totalCasillas);

		for each(String ^ termino in terminos) {

			int indice = Int32::Parse(termino->Trim());

			valoresF[indice] = 1;
		}

		construirMapaKarnaugh(valoresF);
	}

	private: void construirKarnaughDesdeMaxterminos() {
		String^ texto = txt_maxterminos->Text;

		array<String^>^ terminos = texto->Split(',');

		int totalCasillas = (int)Math::Pow(2, numeroTerminos);

		array<int>^ valoresF = gcnew array<int>(totalCasillas);

		for (int i = 0; i < totalCasillas; i++) {
			valoresF[i] = 1;
		}

		for each(String ^ termino in terminos) {

			int indice = Int32::Parse(termino->Trim());

			valoresF[indice] = 0;
		}

		construirMapaKarnaugh(valoresF);
	}

	private: void construirMapaKarnaugh(array<int>^ valoresF) {
		if (numeroTerminos < 2) return;

		// Crear DataGridView si todavía no existe
		if (dgv_karnaugh == nullptr) {

			dgv_karnaugh = gcnew DataGridView();

			dgv_karnaugh->Location = System::Drawing::Point(510, 100);
			dgv_karnaugh->Size = System::Drawing::Size(440, 260);

			dgv_karnaugh->AllowUserToAddRows = false;
			dgv_karnaugh->AllowUserToDeleteRows = false;
			dgv_karnaugh->AllowUserToResizeRows = false;
			dgv_karnaugh->AllowUserToResizeColumns = false;

			dgv_karnaugh->ReadOnly = true;

			dgv_karnaugh->RowHeadersVisible = true;
			dgv_karnaugh->RowHeadersWidth = 80;

			dgv_karnaugh->DefaultCellStyle->Alignment =
				DataGridViewContentAlignment::MiddleCenter;

			dgv_karnaugh->ColumnHeadersDefaultCellStyle->Alignment =
				DataGridViewContentAlignment::MiddleCenter;

			dgv_karnaugh->Font =
				(gcnew System::Drawing::Font(
					L"Microsoft Sans Serif",
					12,
					System::Drawing::FontStyle::Regular
				));

			Controls->Add(dgv_karnaugh);
		}

		// crear encabezado si todavía no existe
		if (lbl_cabeceraKarnaugh == nullptr) {

			lbl_cabeceraKarnaugh = gcnew Label();

			lbl_cabeceraKarnaugh->Location =
				System::Drawing::Point(510, 65);

			lbl_cabeceraKarnaugh->Size =
				System::Drawing::Size(440, 30);

			lbl_cabeceraKarnaugh->Font =
				(gcnew System::Drawing::Font(
					L"Microsoft Sans Serif",
					12,
					System::Drawing::FontStyle::Regular
				));

			Controls->Add(lbl_cabeceraKarnaugh);
		}

		// Limpiar mapa anterior
		dgv_karnaugh->Columns->Clear();
		dgv_karnaugh->Rows->Clear();

		dgv_karnaugh->Visible = true;
		lbl_cabeceraKarnaugh->Visible = true;

		// 2 VARIABLES

		if (numeroTerminos == 2) {

			lbl_cabeceraKarnaugh->Text =
				"Filas: A \\ Columnas: B";

			dgv_karnaugh->Columns->Add("B0", "B = 0");
			dgv_karnaugh->Columns->Add("B1", "B = 1");

			array<array<int>^>^ mapa2 = {
				gcnew array<int>{ 0, 1 },
				gcnew array<int>{ 2, 3 }
			};

			array<String^>^ encabezados = {
				"A = 0",
				"A = 1"
			};

			for (int r = 0; r < 2; r++) {

				int idx = dgv_karnaugh->Rows->Add();

				dgv_karnaugh->Rows[idx]->HeaderCell->Value =
					encabezados[r];

				for (int c = 0; c < 2; c++) {

					dgv_karnaugh->Rows[idx]->Cells[c]->Value =
						valoresF[mapa2[r][c]].ToString();
				}
			}
		}

		// 3 VARIABLES

		else if (numeroTerminos == 3) {

			lbl_cabeceraKarnaugh->Text =
				"Filas: A \\ Columnas: BC (Código Gray)";

			array<String^>^ cols = {
				"00", "01", "11", "10"
			};

			for (int c = 0; c < 4; c++)
				dgv_karnaugh->Columns->Add(cols[c], cols[c]);


			array<array<int>^>^ mapa3 = {
				gcnew array<int>{ 0, 1, 3, 2 },
				gcnew array<int>{ 4, 5, 7, 6 }
			};

			array<String^>^ encabezados = {
				"A = 0",
				"A = 1"
			};

			for (int r = 0; r < 2; r++) {

				int idx = dgv_karnaugh->Rows->Add();

				dgv_karnaugh->Rows[idx]->HeaderCell->Value =
					encabezados[r];

				for (int c = 0; c < 4; c++) {

					dgv_karnaugh->Rows[idx]->Cells[c]->Value =
						valoresF[mapa3[r][c]].ToString();
				}
			}
		}


		// 4 VARIABLES

		else if (numeroTerminos == 4) {

			lbl_cabeceraKarnaugh->Text =
				"Filas: AB \\ Columnas: CD (Código Gray)";

			array<String^>^ cols = {
				"00", "01", "11", "10"
			};

			for (int c = 0; c < 4; c++)
				dgv_karnaugh->Columns->Add(cols[c], cols[c]);


			array<array<int>^>^ mapa4 = {
				gcnew array<int>{ 0, 1, 3, 2 },
				gcnew array<int>{ 4, 5, 7, 6 },
				gcnew array<int>{ 12, 13, 15, 14 },
				gcnew array<int>{ 8, 9, 11, 10 }
			};

			array<String^>^ encabezados = {
				"00", "01", "11", "10"
			};

			for (int r = 0; r < 4; r++) {

				int idx = dgv_karnaugh->Rows->Add();

				dgv_karnaugh->Rows[idx]->HeaderCell->Value =
					encabezados[r];

				for (int c = 0; c < 4; c++) {

					dgv_karnaugh->Rows[idx]->Cells[c]->Value =
						valoresF[mapa4[r][c]].ToString();
				}
			}
		}

		dgv_karnaugh->AutoSizeColumnsMode =
			DataGridViewAutoSizeColumnsMode::Fill;

		dgv_karnaugh->BringToFront();
		lbl_cabeceraKarnaugh->BringToFront();

		mostrarResultado(valoresF);
	}

	private: void generarTablaDesdeMinterminos() {
		int totalCasillas = (int)Math::Pow(2, numeroTerminos);

		dgv_tabla = gcnew DataGridView();
		dgv_tabla->Location = Point(80, 270);
		dgv_tabla->Size = Drawing::Size(340, 250);

		dgv_tabla->AllowUserToAddRows = false;
		dgv_tabla->RowHeadersVisible = false;
		dgv_tabla->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::Fill;

		// columnas de variables
		if (numeroTerminos >= 1)
			dgv_tabla->Columns->Add("A", "A");

		if (numeroTerminos >= 2)
			dgv_tabla->Columns->Add("B", "B");

		if (numeroTerminos >= 3)
			dgv_tabla->Columns->Add("C", "C");

		if (numeroTerminos >= 4)
			dgv_tabla->Columns->Add("D", "D");

		dgv_tabla->Columns->Add("F", "F");

		// crear las filas
		dgv_tabla->Rows->Add(totalCasillas);

		for (int i = 0; i < totalCasillas; i++) {

			for (int v = 0; v < numeroTerminos; v++) {

				int bit = (i >> (numeroTerminos - 1 - v)) & 1;

				dgv_tabla->Rows[i]->Cells[v]->Value = bit;
			}

			dgv_tabla->Rows[i]->Cells[numeroTerminos]->Value = 0;
		}

		// leer  minitérminos
		array<String^>^ terminos =
			txt_minterminos->Text->Split(',');

		for each(String ^ termino in terminos) {

			int indice = Int32::Parse(termino->Trim());

			dgv_tabla->Rows[indice]->Cells[numeroTerminos]->Value = 1;
		}

		this->Controls->Add(dgv_tabla);
		dgv_tabla->BringToFront();
	}

	private: void generarTablaDesdeMaxiterminos() {
		int totalCasillas = (int)Math::Pow(2, numeroTerminos);

		dgv_tabla = gcnew DataGridView();
		dgv_tabla->Location = Point(80, 270);
		dgv_tabla->Size = Drawing::Size(340, 250);

		dgv_tabla->AllowUserToAddRows = false;
		dgv_tabla->RowHeadersVisible = false;
		dgv_tabla->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::Fill;

		if (numeroTerminos >= 1)
			dgv_tabla->Columns->Add("A", "A");

		if (numeroTerminos >= 2)
			dgv_tabla->Columns->Add("B", "B");

		if (numeroTerminos >= 3)
			dgv_tabla->Columns->Add("C", "C");

		if (numeroTerminos >= 4)
			dgv_tabla->Columns->Add("D", "D");

		dgv_tabla->Columns->Add("F", "F");

		dgv_tabla->Rows->Add(totalCasillas);

		// generar combinaciones binarias
		for (int i = 0; i < totalCasillas; i++) {

			for (int v = 0; v < numeroTerminos; v++) {

				int bit = (i >> (numeroTerminos - 1 - v)) & 1;

				dgv_tabla->Rows[i]->Cells[v]->Value = bit;
			}

			dgv_tabla->Rows[i]->Cells[numeroTerminos]->Value = 1;
		}

		// leer los maxitérminos
		array<String^>^ terminos =
			txt_maxterminos->Text->Split(',');

		for each(String ^ termino in terminos) {

			int indice = Int32::Parse(termino->Trim());

			dgv_tabla->Rows[indice]->Cells[numeroTerminos]->Value = 0;
		}

		this->Controls->Add(dgv_tabla);
		dgv_tabla->BringToFront();
	}

		private: int contarBits(int x) {
			int c = 0;
			while (x > 0) { c += x & 1; x >>= 1; }
			return c;
		}
			    
			   // Cubre todos los 1s eligiendo el grupo que más 1s pendientes cubre
	private: List<int>^ cubrirGrupos(List<int>^ grupos, int unosMascara) {
		List<int>^ elegidos = gcnew List<int>();
		int restantes = unosMascara;

		while (restantes != 0) {
			int mejorGrupo = -1;
			int mejorCubre = -1;
			int mejorTam = -1;

			for each(int g in grupos) {
				int cubre = g & restantes;
				int nCubre = contarBits(cubre);
				if (nCubre == 0) continue;

				int tam = contarBits(g);
				if (nCubre > mejorCubre || (nCubre == mejorCubre && tam > mejorTam)) {
					mejorGrupo = g;
					mejorCubre = nCubre;
					mejorTam = tam;
				}
			}

			if (mejorGrupo == -1) break; // no debería pasar

			elegidos->Add(mejorGrupo);
			restantes &= ~mejorGrupo;
		}

		return elegidos;
	}

		// convierte un grupo (máscara de minitérminos) en su término SOP
	private: String^ terminoDeGrupo(int mascara, int filas, int cols, array<array<int>^>^ mapa) {
		// etiquetas y nombres de variables según la dimensión
		array<String^>^ etqFilas;
		array<String^>^ nomFilas;
		if (numeroTerminos == 4) {
			etqFilas = gcnew array<String^>{ "00", "01", "11", "10" };
			nomFilas = gcnew array<String^>{ "A", "B" };
		}
		else {
			etqFilas = gcnew array<String^>{ "0", "1" };
			nomFilas = gcnew array<String^>{ "A" };
		}

		array<String^>^ etqCols;
		array<String^>^ nomCols;
		if (numeroTerminos == 2) {
			etqCols = gcnew array<String^>{ "0", "1" };
			nomCols = gcnew array<String^>{ "B" };
		}
		else {
			etqCols = gcnew array<String^>{ "00", "01", "11", "10" };
			nomCols = (numeroTerminos == 3)
				? gcnew array<String^>{ "B", "C" }
			: gcnew array<String^>{ "C", "D" };
		}

		// Marcar qué filas y columnas cubre el grupo
		array<bool>^ usaFila = gcnew array<bool>(filas);
		array<bool>^ usaCol = gcnew array<bool>(cols);
		for (int r = 0; r < filas; r++)
			for (int c = 0; c < cols; c++)
				if ((mascara >> mapa[r][c]) & 1) {
					usaFila[r] = true;
					usaCol[c] = true;
				}

		String^ termino = "";

		// variables de filas: se incluyen si su bit es constante en el grupo
		for (int b = 0; b < nomFilas->Length; b++) {
			wchar_t valor = 0;
			bool constante = true;
			for (int r = 0; r < filas; r++) {
				if (!usaFila[r]) continue;
				wchar_t bit = etqFilas[r][b];
				if (valor == 0) valor = bit;
				else if (bit != valor) { constante = false; break; }
			}
			if (constante && valor != 0)
				termino += nomFilas[b] + (valor == '0' ? "'" : "");
		}

		// variables de columnas
		for (int b = 0; b < nomCols->Length; b++) {
			wchar_t valor = 0;
			bool constante = true;
			for (int c = 0; c < cols; c++) {
				if (!usaCol[c]) continue;
				wchar_t bit = etqCols[c][b];
				if (valor == 0) valor = bit;
				else if (bit != valor) { constante = false; break; }
			}
			if (constante && valor != 0)
				termino += nomCols[b] + (valor == '0' ? "'" : "");
		}

		return termino; // "" = el grupo cubre todo (F = 1)
	}

	private: String^ obtenerExpresionSimplificada(array<int>^ valoresF) {
		int filas, cols;
		if (numeroTerminos == 2) { filas = 2; cols = 2; }
		else if (numeroTerminos == 3) { filas = 2; cols = 4; }
		else { filas = 4; cols = 4; }

		array<array<int>^>^ mapa;
		if (numeroTerminos == 2) {
			mapa = gcnew array<array<int>^>{ gcnew array<int>{0, 1}, gcnew array<int>{2, 3} };
		}
		else if (numeroTerminos == 3) {
			mapa = gcnew array<array<int>^>{ gcnew array<int>{0, 1, 3, 2}, gcnew array<int>{4, 5, 7, 6} };
		}
		else {
			mapa = gcnew array<array<int>^>{
				gcnew array<int>{ 0,  1,  3,  2 },
				gcnew array<int>{ 4,  5,  7,  6 },
				gcnew array<int>{12, 13, 15, 14 },
				gcnew array<int>{ 8,  9, 11, 10 }
			};
		}

		int total = 1 << numeroTerminos;
		int unosMascara = 0;
		for (int i = 0; i < total; i++)
			if (valoresF[i] == 1) unosMascara |= (1 << i);

		if (unosMascara == 0) return "0";
		if (unosMascara == (total - 1)) return "1";

		// 1 enumerar todos los grupos rectangulares válidos (con envoltura)
		array<int>^ alturas = (filas == 2) ? gcnew array<int>{1, 2} : gcnew array<int>{ 1, 2, 4 };
		array<int>^ anchos = (cols == 2) ? gcnew array<int>{1, 2} : gcnew array<int>{ 1, 2, 4 };

		List<int>^ grupos = gcnew List<int>();
		System::Collections::Generic::HashSet<int>^ vistos = gcnew HashSet<int>();

		for (int r0 = 0; r0 < filas; r0++)
			for (int c0 = 0; c0 < cols; c0++)
				for each(int h in alturas)
					for each(int w in anchos) {
						int mascara = 0;
						for (int i = 0; i < h; i++)
							for (int j = 0; j < w; j++) {
								int r = (r0 + i) % filas;   // envoltura de filas
								int c = (c0 + j) % cols;    // envoltura de columnas
								mascara |= (1 << mapa[r][c]);
							}
						if ((mascara & unosMascara) == mascara && !vistos->Contains(mascara)) {
							vistos->Add(mascara);
							grupos->Add(mascara);
						}
					}

		// 2 quedarse solo con implicantes primos
		List<int>^ primos = gcnew List<int>();
		for each(int g in grupos) {
			bool contenido = false;
			for each(int otro in grupos) {
				if (otro != g && (otro & g) == g) { contenido = true; break; }
			}
			if (!contenido) primos->Add(g);
		}

		// 3 cubrir todos los 1s
		List<int>^ elegidos = cubrirGrupos(primos, unosMascara);

		// 4 armar la expresión
		String^ resultado = "";
		for each(int g in elegidos) {
			String^ t = terminoDeGrupo(g, filas, cols, mapa);
			if (t == "") t = "1";
			if (resultado != "") resultado += " + ";
			resultado += t;
		}

		return resultado;
	}

	private: void mostrarResultado(array<int>^ valoresF) {
		if (lbl_resultado == nullptr) {
			lbl_resultado = gcnew Label();
			lbl_resultado->Location = System::Drawing::Point(510, 375);
			lbl_resultado->Size = System::Drawing::Size(470, 60);
			lbl_resultado->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold));
			Controls->Add(lbl_resultado);
		}
		lbl_resultado->Text = "Expresión simplificada:  F = " + obtenerExpresionSimplificada(valoresF);
		lbl_resultado->Visible = true;
		lbl_resultado->BringToFront();
	}

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void rb_dos_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		numeroTerminos = 2;
		cb_forma->Enabled = true;
		if (dgv_tabla != nullptr && dgv_tabla->Visible) generarTabla();
	}
	private: System::Void rb_tres_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		numeroTerminos = 3;
		cb_forma->Enabled = true;
		if (dgv_tabla != nullptr && dgv_tabla->Visible) generarTabla();
	}
	private: System::Void rb_cuatro_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		numeroTerminos = 4;
		cb_forma->Enabled = true;
		if (dgv_tabla != nullptr && dgv_tabla->Visible) generarTabla();
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
			mostrarIngresoMaxterminos();
		}
	}

	private: System::Void btn_cargarMinterminos_Click(System::Object^ sender, System::EventArgs^ e) {
		construirKarnaughDesdeMinterminos();
		generarTablaDesdeMinterminos();
	}

	private: System::Void btn_cargarMaxterminos_Click(System::Object^ sender, System::EventArgs^ e) {
		construirKarnaughDesdeMaxterminos();
		generarTablaDesdeMaxiterminos();
	}

	};
}
