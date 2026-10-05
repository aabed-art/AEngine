#pragma once 
#include <vector>
#include <glm/mat4x4.hpp>

namespace aEng
{
	class Mesh;
	class Material;
	class GraphicsAPI;

	struct RenderCommand
	{
		Mesh* mesh = nullptr;
		Material* material = nullptr;
		glm::mat4 modelMatrix;
	};

	class RenderQueue
	{
	public:
		void Submit(const RenderCommand& command);
		void Draw(GraphicsAPI& graphicsAPI);

	private:
		std::vector<RenderCommand> m_commands;
	};
}