#include "MenuScene.h"
#include "GUI.hh"


MenuScene::MenuScene()
{
	m_background = { { 0, 0, W.GetWidth(), W.GetHeight() }, ObjectID::BG_01 };
}


MenuScene::~MenuScene()
{

}

void MenuScene::OnEntry(void) {
}

void MenuScene::OnExit(void) {
}

void MenuScene::Update(void) {
}

void MenuScene::Draw(void) {
	m_background.Draw(); // Render background
	GUI::DrawTextShaded<FontID::FACTORY>("ENTI CRUSH",
	{ W.GetWidth() >> 1, int(W.GetHeight()*.1f), 1, 1 },
	{ 190, 0, 160 }, { 50, 200, 230 }); // Render score that will be different when updated
	GUI::DrawTextShaded<FontID::FACTORY>("Play",
	{ W.GetWidth() >> 1, int(W.GetHeight()/2), 1, 1 },
	{ 190, 0, 160 }, { 50, 200, 230 }); // Render score that will be different when updated
	GUI::DrawTextShaded<FontID::FACTORY>("Exit",
	{ W.GetWidth() >> 1, int(W.GetHeight()*0.65f), 1, 1 },
	{ 190, 0, 160 }, { 50, 200, 230 }); // Render score that will be different when updated

	//std::string &&msg, Transform &&transform, Color &&foregroundColor, Color &&backgroundColor
}