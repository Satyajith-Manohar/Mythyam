#pragma once

#include "Core.h"

namespace Mythyam {

	class MYTHYAM_API Application {
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	Application* CreateApplication();
}

