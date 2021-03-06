#include "JournalCallParamDataString.h"
#include "JournalingInternal.h"
#include "JournalFile.h"

using namespace Journal;

JournalCallParamDataString::JournalCallParamDataString(std::string paramName,
    ParameterMetaType paramType, std::string value) :
    JournalCallParamData(paramName, paramType,
        JournalCallParamData::ParameterBasicType::STRING), m_value(value)
{

}



void JournalCallParamDataString::Journal()
{
    if (this->m_paramType == JournalCallParamData::ParameterMetaType::INPUT)
    {
        //There is a bug here, all \ in the string need to be replaced with \\
        // i.e. if d:\dir\some.prt  we need to actualy change this to 
        //         d:\\dir\\some.prt
        
        std::string jnlString = "\"" + m_value + "\"";
        GetActiveJournalFile()->WriteToFile(jnlString);
    }
    else if (this->m_paramType == JournalCallParamData::ParameterMetaType::OUTPUT)
    {
        throw std::exception("NIY ");
    }
    else // RETURN
    {
        throw std::exception("NIY");
    }
}


JournalCallParamDataInteger::JournalCallParamDataInteger(std::string paramName,
    ParameterMetaType paramType, int value) :
    JournalCallParamData(paramName, paramType,
        JournalCallParamData::ParameterBasicType::STRING), m_value(value)
{

}


void JournalCallParamDataInteger::Journal()
{
    if (this->m_paramType == JournalCallParamData::ParameterMetaType::INPUT)
    {
        //There is a bug here, all \ in the string need to be replaced with \\
        // i.e. if d:\dir\some.prt  we need to actualy change this to 
        //         d:\\dir\\some.prt

        std::string jnlString = "\"" + std::to_string(m_value) + "\"";
        GetActiveJournalFile()->WriteToFile(jnlString);
    }
    else if (this->m_paramType == JournalCallParamData::ParameterMetaType::OUTPUT)
    {
        throw std::exception("NIY ");
    }
    else // RETURN
    {
        throw std::exception("NIY");
    }
}



JournalCallParamDataBoolean::JournalCallParamDataBoolean(std::string paramName,
    ParameterMetaType paramType, bool value) :
    JournalCallParamData(paramName, paramType,
        JournalCallParamData::ParameterBasicType::INTEGER), m_value(value)
{

}


void JournalCallParamDataBoolean::Journal()
{
    if (this->m_paramType == JournalCallParamData::ParameterMetaType::INPUT)
    {
        //There is a bug here, all \ in the string need to be replaced with \\
        // i.e. if d:\dir\some.prt  we need to actualy change this to 
        //         d:\\dir\\some.prt

        std::string jnlString = "\"" + std::to_string(m_value) + "\"";
        GetActiveJournalFile()->WriteToFile(jnlString);
    }
    else if (this->m_paramType == JournalCallParamData::ParameterMetaType::OUTPUT)
    {
        throw std::exception("NIY ");
    }
    else // RETURN
    {
        throw std::exception("NIY");
    }
}