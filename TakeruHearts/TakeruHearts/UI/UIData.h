#pragma once

namespace UI
{
	class UIData
	{
	public:
		enum class UIType
		{
			Botton
		};
		
		UIData(UIType uiType) { this->uiType = uiType; }

		virtual ~UIData() {}

		UIType GetUIType()const { return uiType; }
		
	protected:
		UIType uiType;

	};
}

