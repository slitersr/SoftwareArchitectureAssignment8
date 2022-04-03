#pragma once

#include <string>
#include "JournalCallParamData.h"

namespace Journal
{
	class JournalCallParamDataString : public JournalCallParamData
	{
	public:
		JournalCallParamDataString(std::string paramName,
			ParameterMetaType paramType, std::string value);

		void Journal() override;
		JournalCallParamDataString() = delete;
		JournalCallParamDataString(const JournalCallParamDataString&) = delete;
		JournalCallParamDataString& operator=(const JournalCallParamDataString&) = delete;
	private:

		std::string m_value;
	};




	class JournalCallParamDataInteger : public JournalCallParamData
	{
	public:
		JournalCallParamDataInteger(std::string paramName,
			ParameterMetaType paramType, int value);

		void Journal() override;
		JournalCallParamDataInteger() = delete;
		JournalCallParamDataInteger(const JournalCallParamDataInteger&) = delete;
		JournalCallParamDataInteger& operator=(const JournalCallParamDataInteger&) = delete;
	private:

		int m_value;
	};



	class JournalCallParamDataBoolean : public JournalCallParamData
	{
	public:
		JournalCallParamDataBoolean(std::string paramName,
			ParameterMetaType paramType, bool value);

		void Journal() override;
		JournalCallParamDataBoolean() = delete;
		JournalCallParamDataBoolean(const JournalCallParamDataBoolean&) = delete;
		JournalCallParamDataBoolean& operator=(const JournalCallParamDataBoolean&) = delete;
	private:
		bool m_value;
	};

}