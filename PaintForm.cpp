#include "PaintForm.h"

#include <Windows.h>
#include <stdio.h>

#pragma comment(lib, "user32.lib")

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	PaintinWinFormsC::PaintForm form;
	Application::Run(% form);
}

struct Vector2D {
	int X,
		Y;
};
Vector2D mousePosition;

PaintinWinFormsC::PaintForm::PaintForm(void)
{	
	InitializeComponent();
	
	//Установка фильтров для выборов файлов
	openFileDialog1->Filter = "Файлы изображения (*.bmp, *.jpg, *.png)|*.bmp;*.jpg;*.png";
	saveFileDialog1->Filter = "Файлы изображения (*.bmp, *.jpg, *.png)|*.bmp;*.jpg;*.png";
}

System::Void PaintinWinFormsC::PaintForm::pictureBox1_SizeChanged(System::Object^ sender, System::EventArgs^ e)
{
	
	//После изменения размеров PictureBox
	if (pictureBox1->Image) { //если есть рисунок, скопировать через Bitmap и перерисовать компоненту
		//Bitmap^ img = gcnew Bitmap(pictureBox1->Width, pictureBox1->Height, Graphics::FromImage(pictureBox1->Image));
		
		if(background)
			background = gcnew Bitmap(background, pictureBox1->Width, pictureBox1->Height);
		else
			background = gcnew Bitmap(pictureBox1->Image, pictureBox1->Width, pictureBox1->Height);
			
		delete canvas;
		canvas = Graphics::FromImage(background);
		//canvas = Graphics::FromImage(img);
		pictureBox1->Image = background;
		//pictureBox1->Image = img;
		pictureBox1->Refresh();
		pictureBox1->Invalidate();
	}
}

System::Void PaintinWinFormsC::PaintForm::pictureBox1_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
	//Проверка пера
	if (statePen == 1) {
		//Отслеживаем нажатие кнопки мишы
		points->Clear();//каждый раз рисуем заного, по этому очием список
		points->Add(e->Location);//запоминаем точку
		draw = true;//разрешаем рисовать

		pictureBox1->SizeMode = PictureBoxSizeMode::Normal;
	}
	else {
		//Запоминиаем позицию мышки
		mousePosition.X = e->Location.X;
		mousePosition.Y = e->Location.Y;
	}

	pictureBox1->Invalidate();//перерисовываем 
}

System::Void PaintinWinFormsC::PaintForm::pictureBox1_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
	//Проверяем можно ли рисовать
	if (draw && points->Contains(Point(e->X, e->Y)) == false) {
		//Проверяем нажатие левой кнопки мишы
		if (e->Button == System::Windows::Forms::MouseButtons::Left) {
			//Добавляем точку 
			points->Add(e->Location);
		}
		//Перерисовываем 
		pictureBox1->Invalidate();
	}
}

System::Void PaintinWinFormsC::PaintForm::pictureBox1_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
	draw = false;
	pictureBox1->Invalidate();

	mousePosition.X = -1;
	mousePosition.Y = -1;
}

System::Void PaintinWinFormsC::PaintForm::pictureBox1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e)
{
	//Проверка, чем рисуем
	switch (statePen)
	{
	case 1://рисуем линию
		if (points->Count > 1) {
			canvas->DrawLines(pen, points->ToArray());
		}
		break;

	case 2://рисуем квадрат
		if (mousePosition.X != -1 && mousePosition.Y != -1)
			canvas->DrawRectangle(pen, mousePosition.X, mousePosition.Y, Convert::ToInt32(numericUpDownWidthSquare->Value), Convert::ToInt32(numericUpDownHeightSquare->Value));
		break;

	case 3://рисуем круг
		if (mousePosition.X != -1 && mousePosition.Y != -1)
			canvas->DrawEllipse(pen, mousePosition.X, mousePosition.Y, Convert::ToInt32(numericUpDownWidthCircle->Value), Convert::ToInt32(numericUpDownHeightCircle->Value));
		break;

	case 4://рисуем текстуру
		if (mousePosition.X != -1 && mousePosition.Y != -1)
			canvas->DrawImage(texture, mousePosition.X, mousePosition.Y, texture->Width, texture->Height);
		break;

	default:
		break;
	}

	if (clearAll) {
		points->Clear();		
		canvas->Clear(Color::White);
		clearAll = false;

		mousePosition.X = -1;
		mousePosition.Y = -1;

		//Отрисовка фона
		DrawBackground();
	}
}

System::Void PaintinWinFormsC::PaintForm::PaintForm_Load(System::Object^ sender, System::EventArgs^ e)
{
	//Инициализируем данные
	color = Color::Red;
	size = 15;
	pen = gcnew Pen(color, size);
	points = gcnew List <Point>();
	draw = false;
	statePen = 1;

	buttonActiveLine->BackColor = Color::Green;

	//Остальным кнопкам меняем цвет на нейтральный
	buttonActiveCircle->BackColor = Color::LightGray;
	buttonActiveSquare->BackColor = Color::LightGray;
	buttonActiveTexture->BackColor = Color::LightGray;

	Bitmap^ Img = gcnew Bitmap(pictureBox1->Width, pictureBox1->Height);
	canvas = Graphics::FromImage(Img);
	pictureBox1->Image = Img;
	pictureBox1->BackColor = Color::White;

	//Ограничения разрешения создаваемого холста
	numericUpDownWigtnForm->Minimum = 300;
	numericUpDownHeightForm->Minimum = 300;
	numericUpDownWigtnForm->Maximum = GetSystemMetrics(SM_CXSCREEN);
	numericUpDownHeightForm->Maximum = GetSystemMetrics(SM_CYSCREEN);

	clearAll = false;

	filename = "openFileDialog1";

	buttonColor->BackColor = color;

	return System::Void();
}

System::Void PaintinWinFormsC::PaintForm::выходToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	Application::Exit();
}

System::Void PaintinWinFormsC::PaintForm::оПрограммеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show("Информация о программе!","Информация");
}

System::Void PaintinWinFormsC::PaintForm::создатьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (groupBoxCreateProject->Visible) {
		groupBoxCreateProject->Visible = false;
	}
	else {
		groupBoxCreateProject->Visible = true; 
		groupBoxCreateProject->Location = Point(12, 37);
	}

	return System::Void();
}

System::Void PaintinWinFormsC::PaintForm::сохранитьКакToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ fname;
	saveFileDialog1->ShowDialog();//показываем диолог для сохранения
	fname = saveFileDialog1->FileName;//запоминаем расположение сохарения

	//Проверяем 
	if (fname == "")
		return;

	//Запоминаем изображение
	Bitmap^ img = gcnew Bitmap(pictureBox1->Image);
	img->Save(fname);//сохраняем

	MessageBox::Show("Изображение сохранено по адресу \"" + fname + "\".", "Внимание!");

	return System::Void();
}

System::Void PaintinWinFormsC::PaintForm::панельЭлементовToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (groupBoxToolbar->Visible) {
		groupBoxToolbar->Visible = false;
	}
	else {
		groupBoxToolbar->Visible = true;
		groupBoxToolbar->Location = Point(12, 37);
	}
	
	return System::Void();
}

System::Void PaintinWinFormsC::PaintForm::buttonApplySize_Click(System::Object^ sender, System::EventArgs^ e)
{
	size = Convert::ToSingle(numericUpDownSize->Value);
	pen = gcnew Pen(color, size);

	return System::Void();
}

System::Void PaintinWinFormsC::PaintForm::buttonColor_Click(System::Object^ sender, System::EventArgs^ e)
{
	colorDialog1->ShowDialog();
	color = colorDialog1->Color;

	buttonColor->BackColor = color;

	if (color == Color::Black) {
		buttonColor->ForeColor = Color::White;
	}
	else {
		buttonColor->ForeColor = Color::Black;
	}

	pen = gcnew Pen(color, size);

	return System::Void();
}

System::Void PaintinWinFormsC::PaintForm::buttonClearCanvas_Click(System::Object^ sender, System::EventArgs^ e)
{
	clearAll = true;
	pictureBox1->Invalidate();

	return System::Void();
}

System::Void PaintinWinFormsC::PaintForm::buttonActiveLine_Click(System::Object^ sender, System::EventArgs^ e)
{
	//Проверяем выбранное перо
	if (statePen != 1) {

		//Выбераем перо
		statePen = 1;

		//Меняем цвет кнопки
		buttonActiveLine->BackColor = Color::Green;

		//Остальным кнопкам меняем цвет на нейтральный
		buttonActiveCircle->BackColor = Color::LightGray;
		buttonActiveSquare->BackColor = Color::LightGray;
		buttonActiveTexture->BackColor = Color::LightGray;
	}

	return System::Void();
}

System::Void PaintinWinFormsC::PaintForm::buttonActiveSquare_Click(System::Object^ sender, System::EventArgs^ e)
{
	//Проверяем состояние пера
	if (statePen != 2) {
		//меняем состояние пера
		statePen = 2;

		//меняем цвет кнопки активной фигуры
		buttonActiveSquare->BackColor = Color::Green;

		//меняем цвет кнопом не активных фигур
		buttonActiveCircle->BackColor = Color::LightGray;
		buttonActiveTexture->BackColor = Color::LightGray;
		buttonActiveLine->BackColor = Color::LightGray;

		//активируем настройки квадрата
		groupBoxSettingsSquare->Visible = true;
		groupBoxSettingsSquare->Location = Point(30, 172);

		//деактивируем остальные настройки
		groupBoxSettingsCircle->Visible = false;
		groupBoxSettingsTexture->Visible = false;
	}
	else {
		//Проверка активации настройки
		if (groupBoxSettingsSquare->Visible) {
			groupBoxSettingsSquare->Visible = false;
		}
		else {
			groupBoxSettingsSquare->Visible = true;
			groupBoxSettingsSquare->Location = Point(30, 172);
		}
	}

	return System::Void();
}

System::Void PaintinWinFormsC::PaintForm::buttonActiveTexture_Click(System::Object^ sender, System::EventArgs^ e)
{
	//Проверка кисти
	if (statePen != 4) {

		//активируем настройки
		groupBoxSettingsTexture->Visible = true;
		groupBoxSettingsTexture->Location = Point(30, 172);

		//деактивируем остальные настройки
		groupBoxSettingsSquare->Visible = false;
		groupBoxSettingsCircle->Visible = false;

		if (texture != nullptr) {
			statePen = 4;

			//меняем цвет кнопки активной фигуры
			buttonActiveTexture->BackColor = Color::Green;

			//меняем цвет кнопок не активных фигур
			buttonActiveSquare->BackColor = Color::LightGray;
			buttonActiveCircle->BackColor = Color::LightGray;
			buttonActiveLine->BackColor = Color::LightGray;
		}
	}
	else{
		if (groupBoxSettingsTexture->Visible) {
			groupBoxSettingsTexture->Visible = false;
		}
		else {
			groupBoxSettingsTexture->Visible = true;
			groupBoxSettingsTexture->Location = Point(30, 172);
		}
	}

	return System::Void();
}

System::Void PaintinWinFormsC::PaintForm::buttonActiveCircle_Click(System::Object^ sender, System::EventArgs^ e)
{
	//Проверяем состояние пера
	if (statePen != 3) {
		//меняем состояние пера
		statePen = 3;

		//меняем цвет кнопки активной фигуры
		buttonActiveCircle->BackColor = Color::Green;

		//меняем цвет кнопом не активных фигур
		buttonActiveSquare->BackColor = Color::LightGray;
		buttonActiveTexture->BackColor = Color::LightGray;
		buttonActiveLine->BackColor = Color::LightGray;

		//активируем настройки круга
		groupBoxSettingsCircle->Visible = true;
		groupBoxSettingsCircle->Location = Point(30, 172);

		//деактивируем остальные настройки
		groupBoxSettingsSquare->Visible = false;
		groupBoxSettingsTexture->Visible = false;
	}
	else {
		//Проверка активации настройки
		if (groupBoxSettingsCircle->Visible) {
			groupBoxSettingsCircle->Visible = false;
		}
		else {
			groupBoxSettingsCircle->Visible = true;
			groupBoxSettingsCircle->Location = Point(30, 172);
		}
	}

	return System::Void();
}

System::Void PaintinWinFormsC::PaintForm::buttonCreateNewProject_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->Width = Convert::ToInt32(numericUpDownWigtnForm->Value);
	this->Height = Convert::ToInt32(numericUpDownHeightForm->Value);

	if (groupBoxCreateProject->Visible) {
		groupBoxCreateProject->Visible = false;
	}

	filename = "openFileDialog1";

	return System::Void();
}

System::Void PaintinWinFormsC::PaintForm::buttonOpenProject_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (radioButtonOriginalSize->Checked == false && radioButtonSetSize->Checked == false) {
		MessageBox::Show("Выберите размер фона!", "Внимание!");
		return;
	}

	openFileDialog1->ShowDialog();//открываем диологовое окно для простмотра файлов
	filename = openFileDialog1->FileName;//считываем путь до файла ("полное имя")

	//Проверка выбора
	if (filename == "openFileDialog1")
		return;

	background = gcnew Bitmap(filename);//загружаем фон

	if (radioButtonOriginalSize->Checked) {
		this->Width = background->Width;
		this->Height = background->Height;
	}
	else if (radioButtonSetSize->Checked) {
		background = gcnew Bitmap(background, Convert::ToInt32(numericUpDownWigtnForm->Value), Convert::ToInt32(numericUpDownHeightForm->Value));//загружаем фон
		this->Width = background->Width;
		this->Height = background->Height;
	}
	
	canvas = Graphics::FromImage(background);//применяем фон
	pictureBox1->Image = background;

	if (groupBoxCreateProject->Visible) {
		groupBoxCreateProject->Visible = false;
	}

	return System::Void();
}

void PaintinWinFormsC::PaintForm::DrawBackground()
{
	//Применяем фон
	if (filename != "openFileDialog1") {
		background = gcnew Bitmap(filename);
		background = gcnew Bitmap(background, pictureBox1->Width, pictureBox1->Height);
	}
	else
		background = gcnew Bitmap(pictureBox1->Image, pictureBox1->Width, pictureBox1->Height);
	
	delete canvas;
	canvas = Graphics::FromImage(background);
	pictureBox1->Image = background;
	pictureBox1->Refresh();
	pictureBox1->Invalidate();
}

System::Void PaintinWinFormsC::PaintForm::buttonChooseTexture_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ file;//расположение текстуры
	openFileDialog1->ShowDialog();//показываем диологовое окно для выбора
	file = openFileDialog1->FileName;//запоминаем адрес и файл

	//Проверка выбора
	if (file == "openFileDialog1")
		return;

	statePen = 4;

	//Загружаем текстуру
	texture = gcnew Bitmap(file);

	//меняем цвет кнопки активной фигуры
	buttonActiveTexture->BackColor = Color::Green;

	//меняем цвет кнопок не активных фигур
	buttonActiveSquare->BackColor = Color::LightGray;
	buttonActiveCircle->BackColor = Color::LightGray;
	buttonActiveLine->BackColor = Color::LightGray;

	return System::Void();
}

System::Void PaintinWinFormsC::PaintForm::buttonApplyTexture_Click(System::Object^ sender, System::EventArgs^ e)
{
	float width = Convert::ToSingle(numericUpDownWidtnTexture->Value);
	float height = Convert::ToSingle(numericUpDownHeightTexture->Value);

	texture = gcnew Bitmap(texture, width, height);

	return System::Void();
}
