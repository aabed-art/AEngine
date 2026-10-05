#include "Application.h"

namespace aEng
{
	void Application::SetNeedsToBeClosed(bool value)
	{
		m_needsToBeClosed = value;
	}

	bool Application::NeedsToBeClosed() const
	{
		return m_needsToBeClosed;
	}
}