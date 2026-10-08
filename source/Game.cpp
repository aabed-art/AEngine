#include "Game.h"
#include <GLFW/glfw3.h>
#include <iostream>
#include <TestObject.h>

bool Game::Init()
{
	m_scene = new aEng::Scene();

	auto camera = m_scene->CreateObject("Camera");
	camera->AddComponent(new aEng::CameraComponent());
	camera->SetPosition(glm::vec3(0.0f, 0.0f, 2.0f));

	m_scene->SetMainCamera(camera);

	m_scene->CreateObject<TestObject>("TestObject");

	aEng::Engine::GetInstance().SetScene(m_scene);

	return true;
}

void Game::Update(float deltaTime)
{
	m_scene->Update(deltaTime);
}

void Game::Destroy()
{

}
