#pragma once

#include <aEng.h>

class TestObject : public aEng::GameObject
{
public:
	TestObject();

	void Update(float deltaTime) override;

private:

	aEng::Material m_material;
	std::shared_ptr<aEng::Mesh> m_mesh;
};