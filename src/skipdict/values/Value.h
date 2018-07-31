/**
 * Automatically generated by Zserio C++ extension version 1.0.
 */

#ifndef SKIPDICT_VALUES_VALUE_H
#define SKIPDICT_VALUES_VALUE_H

#include <zserio/BitStreamReader.h>
#include <zserio/BitStreamWriter.h>
#include <zserio/AnyHolder.h>
#include <zserio/PreWriteAction.h>
#include <zserio/OptionalHolder.h>

#include "skipdict/values/BasketballTeam.h"
#include "skipdict/values/CloudStorage.h"
#include "skipdict/values/Company.h"
#include "skipdict/values/RockBand.h"
#include "skipdict/values/ValueCode.h"

namespace skipdict
{
namespace values
{

class Value
{
public:
    Value();
    Value(zserio::BitStreamReader& _in,
            skipdict::values::ValueCode code);

    Value(const Value& _other);
    Value& operator=(const Value& _other);

    void initialize(
            skipdict::values::ValueCode code);

    skipdict::values::ValueCode getCode() const;

    skipdict::values::Company& getBusiness();
    const skipdict::values::Company& getBusiness() const;
    void setBusiness(const skipdict::values::Company& business);

    skipdict::values::RockBand& getBand();
    const skipdict::values::RockBand& getBand() const;
    void setBand(const skipdict::values::RockBand& band);

    skipdict::values::BasketballTeam& getTeam();
    const skipdict::values::BasketballTeam& getTeam() const;
    void setTeam(const skipdict::values::BasketballTeam& team);

    skipdict::values::CloudStorage getStore() const;
    void setStore(skipdict::values::CloudStorage store);

    size_t bitSizeOf(size_t _bitPosition = 0) const;
    size_t initializeOffsets(size_t _bitPosition);

    bool operator==(const Value& other) const;
    int hashCode() const;

    void read(zserio::BitStreamReader& _in);
    void write(zserio::BitStreamWriter& _out,
            zserio::PreWriteAction _preWriteAction = zserio::ALL_PRE_WRITE_ACTIONS);

private:
    skipdict::values::ValueCode m_code;
    bool m_isInitialized;
    zserio::AnyHolder m_objectChoice;
};

} // namespace values
} // namespace skipdict

#endif // SKIPDICT_VALUES_VALUE_H
