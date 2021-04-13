/**
 * Automatically generated by Zserio C++ extension version 2.3.0.
 * Generator setup: writerCode, pubsubCode, serviceCode, sqlCode, sourcesAmalgamation.
 */

#include <zserio/StringConvertUtil.h>
#include <zserio/CppRuntimeException.h>

#include <tutorial/Language.h>

namespace zserio
{

// This is full specialization of enumeration traits and methods for Language enumeration.
constexpr ::std::array<const char*, 4> EnumTraits<::tutorial::Language>::names;
constexpr ::std::array<::tutorial::Language, 4> EnumTraits<::tutorial::Language>::values;

template <>
size_t enumToOrdinal(::tutorial::Language value)
{
    switch (value)
    {
    case ::tutorial::Language::CPP:
        return 0;
    case ::tutorial::Language::JAVA:
        return 1;
    case ::tutorial::Language::PYTHON:
        return 2;
    case ::tutorial::Language::JS:
        return 3;
    default:
        throw ::zserio::CppRuntimeException("Unknown value for enumeration Language: " +
                ::zserio::convertToString(static_cast<uint8_t>(value)) + "!");
    }
}

template <>
::tutorial::Language valueToEnum(
        typename ::std::underlying_type<::tutorial::Language>::type rawValue)
{
    switch (rawValue)
    {
    case UINT8_C(0):
    case UINT8_C(1):
    case UINT8_C(2):
    case UINT8_C(3):
        return ::tutorial::Language(rawValue);
    default:
        throw ::zserio::CppRuntimeException("Unknown value for enumeration Language: " +
                ::zserio::convertToString(rawValue) + "!");
    }
}

template <>
size_t bitSizeOf(::tutorial::Language)
{
    return UINT8_C(2);
}

template <>
size_t initializeOffsets(size_t bitPosition, ::tutorial::Language value)
{
    return bitPosition + bitSizeOf(value);
}

template <>
::tutorial::Language read(::zserio::BitStreamReader& in)
{
    return valueToEnum<::tutorial::Language>(
            static_cast<typename ::std::underlying_type<::tutorial::Language>::type>(
                    in.readBits(UINT8_C(2))));
}

template <>
void write<::tutorial::Language>(BitStreamWriter& out, ::tutorial::Language value)
{
    out.writeBits(enumToValue(value), UINT8_C(2));
}

} // namespace zserio

/**
 * Automatically generated by Zserio C++ extension version 2.3.0.
 * Generator setup: writerCode, pubsubCode, serviceCode, sqlCode, sourcesAmalgamation.
 */

#include <zserio/StringConvertUtil.h>
#include <zserio/CppRuntimeException.h>

#include <tutorial/Role.h>

namespace zserio
{

// This is full specialization of enumeration traits and methods for Role enumeration.
constexpr ::std::array<const char*, 3> EnumTraits<::tutorial::Role>::names;
constexpr ::std::array<::tutorial::Role, 3> EnumTraits<::tutorial::Role>::values;

template <>
size_t enumToOrdinal(::tutorial::Role value)
{
    switch (value)
    {
    case ::tutorial::Role::DEVELOPER:
        return 0;
    case ::tutorial::Role::TEAM_LEAD:
        return 1;
    case ::tutorial::Role::CTO:
        return 2;
    default:
        throw ::zserio::CppRuntimeException("Unknown value for enumeration Role: " +
                ::zserio::convertToString(static_cast<uint8_t>(value)) + "!");
    }
}

template <>
::tutorial::Role valueToEnum(
        typename ::std::underlying_type<::tutorial::Role>::type rawValue)
{
    switch (rawValue)
    {
    case UINT8_C(0):
    case UINT8_C(1):
    case UINT8_C(2):
        return ::tutorial::Role(rawValue);
    default:
        throw ::zserio::CppRuntimeException("Unknown value for enumeration Role: " +
                ::zserio::convertToString(rawValue) + "!");
    }
}

template <>
size_t bitSizeOf(::tutorial::Role)
{
    return UINT8_C(8);
}

template <>
size_t initializeOffsets(size_t bitPosition, ::tutorial::Role value)
{
    return bitPosition + bitSizeOf(value);
}

template <>
::tutorial::Role read(::zserio::BitStreamReader& in)
{
    return valueToEnum<::tutorial::Role>(
            static_cast<typename ::std::underlying_type<::tutorial::Role>::type>(
                    in.readBits(UINT8_C(8))));
}

template <>
void write<::tutorial::Role>(BitStreamWriter& out, ::tutorial::Role value)
{
    out.writeBits(enumToValue(value), UINT8_C(8));
}

} // namespace zserio

/**
 * Automatically generated by Zserio C++ extension version 2.3.0.
 * Generator setup: writerCode, pubsubCode, serviceCode, sqlCode, sourcesAmalgamation.
 */

#include <zserio/StringConvertUtil.h>
#include <zserio/CppRuntimeException.h>
#include <zserio/HashCodeUtil.h>
#include <zserio/BitPositionUtil.h>
#include <zserio/BitSizeOfCalculator.h>
#include <zserio/BitFieldUtil.h>
#include <zserio/ConstraintException.h>

#include <tutorial/Employee.h>
#include <tutorial/Role.h>

namespace tutorial
{

class Employee::ElementFactory_skills
{
public:
    explicit ElementFactory_skills(Employee& owner) : m_owner(owner) {}

    void create(::std::vector<::tutorial::Experience>& array, ::zserio::BitStreamReader& in, size_t index) const
    {
        (void)index;
        array.emplace_back(in);
    }

private:
    Employee& m_owner;
};

Employee::Employee() noexcept :
        m_age_(uint8_t()),
        m_salary_(uint16_t()),
        m_role_(::tutorial::Role())
{
}

Employee::Employee(::zserio::BitStreamReader& in) :
        m_age_(readAge(in)),
        m_name_(readName(in)),
        m_salary_(readSalary(in)),
        m_bonus_(readBonus(in)),
        m_role_(readRole(in)),
        m_skills_(readSkills(in))
{
}

uint8_t Employee::getAge() const
{
    return m_age_;
}

void Employee::setAge(uint8_t age_)
{
    m_age_ = age_;
}

::std::string& Employee::getName()
{
    return m_name_;
}

const ::std::string& Employee::getName() const
{
    return m_name_;
}

void Employee::setName(const ::std::string& name_)
{
    m_name_ = name_;
}

void Employee::setName(::std::string&& name_)
{
    m_name_ = ::std::move(name_);
}

uint16_t Employee::getSalary() const
{
    return m_salary_;
}

void Employee::setSalary(uint16_t salary_)
{
    m_salary_ = salary_;
}

uint16_t Employee::getBonus() const
{
    return m_bonus_.value();
}

void Employee::setBonus(uint16_t bonus_)
{
    m_bonus_ = bonus_;
}

void Employee::resetBonus()
{
    m_bonus_.reset();
}

bool Employee::isBonusUsed() const
{
    return (m_bonus_.hasValue());
}

::tutorial::Role Employee::getRole() const
{
    return m_role_;
}

void Employee::setRole(::tutorial::Role role_)
{
    m_role_ = role_;
}

::std::vector<::tutorial::Experience>& Employee::getSkills()
{
    return m_skills_.value();
}

const ::std::vector<::tutorial::Experience>& Employee::getSkills() const
{
    return m_skills_.value();
}

void Employee::setSkills(const ::std::vector<::tutorial::Experience>& skills_)
{
    m_skills_ = skills_;
}

void Employee::setSkills(::std::vector<::tutorial::Experience>&& skills_)
{
    m_skills_ = ::std::move(skills_);
}

void Employee::resetSkills()
{
    m_skills_.reset();
}

bool Employee::isSkillsUsed() const
{
    return (getRole() == ::tutorial::Role::DEVELOPER);
}

size_t Employee::bitSizeOf(size_t bitPosition) const
{
    size_t endBitPosition = bitPosition;

    endBitPosition += UINT8_C(8);
    endBitPosition += ::zserio::bitSizeOfString(m_name_);
    endBitPosition += UINT8_C(16);
    endBitPosition += 1;
    if (m_bonus_.hasValue())
    {
        endBitPosition += UINT8_C(16);
    }
    endBitPosition += ::zserio::bitSizeOf(m_role_);
    if (getRole() == ::tutorial::Role::DEVELOPER)
    {
        endBitPosition += ::zserio::bitSizeOfAuto(::zserio::ObjectArrayTraits<::tutorial::Experience>(), m_skills_.value(), endBitPosition);
    }

    return endBitPosition - bitPosition;
}

size_t Employee::initializeOffsets(size_t bitPosition)
{
    size_t endBitPosition = bitPosition;

    endBitPosition += UINT8_C(8);
    endBitPosition += ::zserio::bitSizeOfString(m_name_);
    endBitPosition += UINT8_C(16);
    endBitPosition += 1;
    if (m_bonus_.hasValue())
    {
        endBitPosition += UINT8_C(16);
    }
    endBitPosition = ::zserio::initializeOffsets(endBitPosition, m_role_);
    if (getRole() == ::tutorial::Role::DEVELOPER)
    {
        endBitPosition = ::zserio::initializeOffsetsAuto(::zserio::ObjectArrayTraits<::tutorial::Experience>(), m_skills_.value(), endBitPosition);
    }

    return endBitPosition;
}

bool Employee::operator==(const Employee& other) const
{
    if (this != &other)
    {
        return
                (m_age_ == other.m_age_) &&
                (m_name_ == other.m_name_) &&
                (m_salary_ == other.m_salary_) &&
                (m_bonus_ == other.m_bonus_) &&
                (m_role_ == other.m_role_) &&
                (!(getRole() == ::tutorial::Role::DEVELOPER) || m_skills_ == other.m_skills_);
    }

    return true;
}

int Employee::hashCode() const
{
    int result = ::zserio::HASH_SEED;

    result = ::zserio::calcHashCode(result, m_age_);
    result = ::zserio::calcHashCode(result, m_name_);
    result = ::zserio::calcHashCode(result, m_salary_);
    result = ::zserio::calcHashCode(result, m_bonus_);
    result = ::zserio::calcHashCode(result, m_role_);
    if (getRole() == ::tutorial::Role::DEVELOPER)
        result = ::zserio::calcHashCode(result, m_skills_);

    return result;
}

void Employee::read(::zserio::BitStreamReader& in)
{
    m_age_ = readAge(in);
    m_name_ = readName(in);
    m_salary_ = readSalary(in);
    m_bonus_ = readBonus(in);
    m_role_ = readRole(in);
    m_skills_ = readSkills(in);
}

void Employee::write(::zserio::BitStreamWriter& out, ::zserio::PreWriteAction)
{
    // check constraint
    if (!(getAge() <= 65))
        throw ::zserio::ConstraintException("Write: Constraint violated at Employee.age!");
    out.writeBits(m_age_, UINT8_C(8));

    out.writeString(m_name_);

    out.writeBits(m_salary_, UINT8_C(16));

    if (m_bonus_.hasValue())
    {
        out.writeBool(true);
        out.writeBits(m_bonus_.value(), UINT8_C(16));
    }
    else
    {
        out.writeBool(false);
    }

    ::zserio::write(out, m_role_);

    if (getRole() == ::tutorial::Role::DEVELOPER)
    {
        ::zserio::writeAuto(::zserio::ObjectArrayTraits<::tutorial::Experience>(), m_skills_.value(), out);
    }
}

uint8_t Employee::readAge(::zserio::BitStreamReader& in)
{
    const uint8_t readField = static_cast<uint8_t>(in.readBits(UINT8_C(8)));
    // check constraint
    if (!(readField <= 65))
        throw ::zserio::ConstraintException("Read: Constraint violated at Employee.age!");

    return readField;
}

::std::string Employee::readName(::zserio::BitStreamReader& in)
{
    return static_cast<::std::string>(in.readString());
}

uint16_t Employee::readSalary(::zserio::BitStreamReader& in)
{
    return static_cast<uint16_t>(in.readBits(UINT8_C(16)));
}

::zserio::OptionalHolder<uint16_t> Employee::readBonus(::zserio::BitStreamReader& in)
{
    if (in.readBool())
    {
        return static_cast<uint16_t>(in.readBits(UINT8_C(16)));
    }

    return ::zserio::NullOpt;
}

::tutorial::Role Employee::readRole(::zserio::BitStreamReader& in)
{
    return ::zserio::read<::tutorial::Role>(in);
}

::zserio::OptionalHolder<::std::vector<::tutorial::Experience>> Employee::readSkills(::zserio::BitStreamReader& in)
{
    if (getRole() == ::tutorial::Role::DEVELOPER)
    {
        ::std::vector<::tutorial::Experience> readField;
        ::zserio::readAuto(::zserio::ObjectArrayTraits<::tutorial::Experience, ElementFactory_skills>(ElementFactory_skills(*this)), readField, in);
        return readField;
    }

    return ::zserio::NullOpt;
}

} // namespace tutorial

/**
 * Automatically generated by Zserio C++ extension version 2.3.0.
 * Generator setup: writerCode, pubsubCode, serviceCode, sqlCode, sourcesAmalgamation.
 */

#include <zserio/StringConvertUtil.h>
#include <zserio/CppRuntimeException.h>
#include <zserio/HashCodeUtil.h>
#include <zserio/BitPositionUtil.h>
#include <zserio/BitSizeOfCalculator.h>
#include <zserio/BitFieldUtil.h>

#include <tutorial/Experience.h>

namespace tutorial
{

Experience::Experience() noexcept :
        m_yearsOfExperience_(uint8_t()),
        m_programmingLanguage_(::tutorial::Language())
{
}

Experience::Experience(::zserio::BitStreamReader& in) :
        m_yearsOfExperience_(readYearsOfExperience(in)),
        m_programmingLanguage_(readProgrammingLanguage(in))
{
}

uint8_t Experience::getYearsOfExperience() const
{
    return m_yearsOfExperience_;
}

void Experience::setYearsOfExperience(uint8_t yearsOfExperience_)
{
    m_yearsOfExperience_ = yearsOfExperience_;
}

::tutorial::Language Experience::getProgrammingLanguage() const
{
    return m_programmingLanguage_;
}

void Experience::setProgrammingLanguage(::tutorial::Language programmingLanguage_)
{
    m_programmingLanguage_ = programmingLanguage_;
}

size_t Experience::bitSizeOf(size_t bitPosition) const
{
    size_t endBitPosition = bitPosition;

    endBitPosition += UINT8_C(6);
    endBitPosition += ::zserio::bitSizeOf(m_programmingLanguage_);

    return endBitPosition - bitPosition;
}

size_t Experience::initializeOffsets(size_t bitPosition)
{
    size_t endBitPosition = bitPosition;

    endBitPosition += UINT8_C(6);
    endBitPosition = ::zserio::initializeOffsets(endBitPosition, m_programmingLanguage_);

    return endBitPosition;
}

bool Experience::operator==(const Experience& other) const
{
    if (this != &other)
    {
        return
                (m_yearsOfExperience_ == other.m_yearsOfExperience_) &&
                (m_programmingLanguage_ == other.m_programmingLanguage_);
    }

    return true;
}

int Experience::hashCode() const
{
    int result = ::zserio::HASH_SEED;

    result = ::zserio::calcHashCode(result, m_yearsOfExperience_);
    result = ::zserio::calcHashCode(result, m_programmingLanguage_);

    return result;
}

void Experience::read(::zserio::BitStreamReader& in)
{
    m_yearsOfExperience_ = readYearsOfExperience(in);
    m_programmingLanguage_ = readProgrammingLanguage(in);
}

void Experience::write(::zserio::BitStreamWriter& out, ::zserio::PreWriteAction)
{
    out.writeBits(m_yearsOfExperience_, UINT8_C(6));
    ::zserio::write(out, m_programmingLanguage_);
}

uint8_t Experience::readYearsOfExperience(::zserio::BitStreamReader& in)
{
    return static_cast<uint8_t>(in.readBits(UINT8_C(6)));
}

::tutorial::Language Experience::readProgrammingLanguage(::zserio::BitStreamReader& in)
{
    return ::zserio::read<::tutorial::Language>(in);
}

} // namespace tutorial
