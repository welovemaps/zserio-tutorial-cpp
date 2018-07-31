/**
 * Automatically generated by Zserio C++ extension version 1.0.
 */

#ifndef SKIPDICT_VALUES_COMPANY_H
#define SKIPDICT_VALUES_COMPANY_H

#include <zserio/BitStreamReader.h>
#include <zserio/BitStreamWriter.h>
#include <zserio/BitFieldUtil.h>
#include <zserio/CppRuntimeException.h>
#include <zserio/StringConvertUtil.h>
#include <zserio/PreWriteAction.h>
#include <string>
#include <zserio/Types.h>

namespace skipdict
{
namespace values
{

class Company
{
public:
    Company();
    Company(zserio::BitStreamReader& _in);

    std::string& getName();
    const std::string& getName() const;
    void setName(const std::string& name);

    std::string& getWebsite();
    const std::string& getWebsite() const;
    void setWebsite(const std::string& website);

    uint32_t getNumEmployees() const;
    void setNumEmployees(uint32_t numEmployees);

    size_t bitSizeOf(size_t _bitPosition = 0) const;
    size_t initializeOffsets(size_t _bitPosition);

    bool operator==(const Company& other) const;
    int hashCode() const;

    void read(zserio::BitStreamReader& _in);
    void write(zserio::BitStreamWriter& _out,
            zserio::PreWriteAction _preWriteAction = zserio::ALL_PRE_WRITE_ACTIONS);

private:
    std::string m_name;
    std::string m_website;
    uint32_t m_numEmployees;
};

} // namespace values
} // namespace skipdict

#endif // SKIPDICT_VALUES_COMPANY_H
