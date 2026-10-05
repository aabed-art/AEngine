#pragma once
#include <vector>

namespace aEng
{
	struct VertexElement
	{
		GLuint index; //Attribute location
		GLuint size; //No of components
		GLuint type; //Data type
		uint32_t offset; //Bytes offset from start of vertex
	};

	struct VertexLayout
	{
		std::vector<VertexElement> elements;
		uint32_t stride = 0; //Total size of a single vertex
	};
}