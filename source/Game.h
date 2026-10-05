#pragma once
#include <aEng.h>
#include <memory>

class Game : public aEng::Application
{
public:
	bool Init() override;
	void Update(float deltaTime) override;
	void Destroy() override;

private:
	aEng::Scene m_scene;
};

