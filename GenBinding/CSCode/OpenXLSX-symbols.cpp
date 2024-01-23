#include <OpenXLSX-Exports.hpp>
#include <OpenXLSX.hpp>
#include <pugixml/pugixml.hpp>
#include <new>

bool operator==(const class OpenXLSX::XLCellReference&, const class OpenXLSX::XLCellReference&);
bool (*_0)(const class OpenXLSX::XLCellReference&, const class OpenXLSX::XLCellReference&) = &OpenXLSX::operator==;
bool operator!=(const class OpenXLSX::XLCellReference&, const class OpenXLSX::XLCellReference&);
bool (*_1)(const class OpenXLSX::XLCellReference&, const class OpenXLSX::XLCellReference&) = &OpenXLSX::operator!=;
bool operator<(const class OpenXLSX::XLCellReference&, const class OpenXLSX::XLCellReference&);
bool (*_2)(const class OpenXLSX::XLCellReference&, const class OpenXLSX::XLCellReference&) = &OpenXLSX::operator<;
bool operator>(const class OpenXLSX::XLCellReference&, const class OpenXLSX::XLCellReference&);
bool (*_3)(const class OpenXLSX::XLCellReference&, const class OpenXLSX::XLCellReference&) = &OpenXLSX::operator>;
bool operator<=(const class OpenXLSX::XLCellReference&, const class OpenXLSX::XLCellReference&);
bool (*_4)(const class OpenXLSX::XLCellReference&, const class OpenXLSX::XLCellReference&) = &OpenXLSX::operator<=;
bool operator>=(const class OpenXLSX::XLCellReference&, const class OpenXLSX::XLCellReference&);
bool (*_5)(const class OpenXLSX::XLCellReference&, const class OpenXLSX::XLCellReference&) = &OpenXLSX::operator>=;
extern "C" __declspec(dllexport) void c__N_OpenXLSX_S_XLException_XLException___1__N_std_S_basic_string__C___N_std_S_char_traits__C___N_std_S_allocator__C(void* __instance, const std::basic_string<char, std::char_traits<char>, std::allocator<char>>& err) { ::new (__instance) OpenXLSX::XLException(err); }
class OpenXLSX::XLException& (OpenXLSX::XLException::*_6)(class OpenXLSX::XLException&&) = &OpenXLSX::XLException::operator=;
extern "C" __declspec(dllexport) void c__N_OpenXLSX_S_XLOverflowError_XLOverflowError___1__N_std_S_basic_string__C___N_std_S_char_traits__C___N_std_S_allocator__C(void* __instance, const std::basic_string<char, std::char_traits<char>, std::allocator<char>>& err) { ::new (__instance) OpenXLSX::XLOverflowError(err); }
class OpenXLSX::XLOverflowError& (OpenXLSX::XLOverflowError::*_7)(class OpenXLSX::XLOverflowError&&) = &OpenXLSX::XLOverflowError::operator=;
extern "C" __declspec(dllexport) void c__N_OpenXLSX_S_XLOverflowError_XLOverflowError___1__N_OpenXLSX_S_XLOverflowError(void* __instance, const OpenXLSX::XLOverflowError& _0) { ::new (__instance) OpenXLSX::XLOverflowError(_0); }
extern "C" __declspec(dllexport) void c__N_OpenXLSX_S_XLValueTypeError_XLValueTypeError___1__N_std_S_basic_string__C___N_std_S_char_traits__C___N_std_S_allocator__C(void* __instance, const std::basic_string<char, std::char_traits<char>, std::allocator<char>>& err) { ::new (__instance) OpenXLSX::XLValueTypeError(err); }
class OpenXLSX::XLValueTypeError& (OpenXLSX::XLValueTypeError::*_8)(class OpenXLSX::XLValueTypeError&&) = &OpenXLSX::XLValueTypeError::operator=;
extern "C" __declspec(dllexport) void c__N_OpenXLSX_S_XLValueTypeError_XLValueTypeError___1__N_OpenXLSX_S_XLValueTypeError(void* __instance, const OpenXLSX::XLValueTypeError& _0) { ::new (__instance) OpenXLSX::XLValueTypeError(_0); }
extern "C" __declspec(dllexport) void c__N_OpenXLSX_S_XLCellAddressError_XLCellAddressError___1__N_std_S_basic_string__C___N_std_S_char_traits__C___N_std_S_allocator__C(void* __instance, const std::basic_string<char, std::char_traits<char>, std::allocator<char>>& err) { ::new (__instance) OpenXLSX::XLCellAddressError(err); }
class OpenXLSX::XLCellAddressError& (OpenXLSX::XLCellAddressError::*_9)(class OpenXLSX::XLCellAddressError&&) = &OpenXLSX::XLCellAddressError::operator=;
extern "C" __declspec(dllexport) void c__N_OpenXLSX_S_XLCellAddressError_XLCellAddressError___1__N_OpenXLSX_S_XLCellAddressError(void* __instance, const OpenXLSX::XLCellAddressError& _0) { ::new (__instance) OpenXLSX::XLCellAddressError(_0); }
extern "C" __declspec(dllexport) void c__N_OpenXLSX_S_XLInputError_XLInputError___1__N_std_S_basic_string__C___N_std_S_char_traits__C___N_std_S_allocator__C(void* __instance, const std::basic_string<char, std::char_traits<char>, std::allocator<char>>& err) { ::new (__instance) OpenXLSX::XLInputError(err); }
class OpenXLSX::XLInputError& (OpenXLSX::XLInputError::*_10)(class OpenXLSX::XLInputError&&) = &OpenXLSX::XLInputError::operator=;
extern "C" __declspec(dllexport) void c__N_OpenXLSX_S_XLInputError_XLInputError___1__N_OpenXLSX_S_XLInputError(void* __instance, const OpenXLSX::XLInputError& _0) { ::new (__instance) OpenXLSX::XLInputError(_0); }
extern "C" __declspec(dllexport) void c__N_OpenXLSX_S_XLInternalError_XLInternalError___1__N_std_S_basic_string__C___N_std_S_char_traits__C___N_std_S_allocator__C(void* __instance, const std::basic_string<char, std::char_traits<char>, std::allocator<char>>& err) { ::new (__instance) OpenXLSX::XLInternalError(err); }
class OpenXLSX::XLInternalError& (OpenXLSX::XLInternalError::*_11)(class OpenXLSX::XLInternalError&&) = &OpenXLSX::XLInternalError::operator=;
extern "C" __declspec(dllexport) void c__N_OpenXLSX_S_XLInternalError_XLInternalError___1__N_OpenXLSX_S_XLInternalError(void* __instance, const OpenXLSX::XLInternalError& _0) { ::new (__instance) OpenXLSX::XLInternalError(_0); }
extern "C" __declspec(dllexport) void c__N_OpenXLSX_S_XLPropertyError_XLPropertyError___1__N_std_S_basic_string__C___N_std_S_char_traits__C___N_std_S_allocator__C(void* __instance, const std::basic_string<char, std::char_traits<char>, std::allocator<char>>& err) { ::new (__instance) OpenXLSX::XLPropertyError(err); }
class OpenXLSX::XLPropertyError& (OpenXLSX::XLPropertyError::*_12)(class OpenXLSX::XLPropertyError&&) = &OpenXLSX::XLPropertyError::operator=;
extern "C" __declspec(dllexport) void c__N_OpenXLSX_S_XLPropertyError_XLPropertyError___1__N_OpenXLSX_S_XLPropertyError(void* __instance, const OpenXLSX::XLPropertyError& _0) { ::new (__instance) OpenXLSX::XLPropertyError(_0); }
extern "C" __declspec(dllexport) void c__N_OpenXLSX_S_XLSheetError_XLSheetError___1__N_std_S_basic_string__C___N_std_S_char_traits__C___N_std_S_allocator__C(void* __instance, const std::basic_string<char, std::char_traits<char>, std::allocator<char>>& err) { ::new (__instance) OpenXLSX::XLSheetError(err); }
class OpenXLSX::XLSheetError& (OpenXLSX::XLSheetError::*_13)(class OpenXLSX::XLSheetError&&) = &OpenXLSX::XLSheetError::operator=;
extern "C" __declspec(dllexport) void c__N_OpenXLSX_S_XLSheetError_XLSheetError___1__N_OpenXLSX_S_XLSheetError(void* __instance, const OpenXLSX::XLSheetError& _0) { ::new (__instance) OpenXLSX::XLSheetError(_0); }
extern "C" __declspec(dllexport) void c__N_OpenXLSX_S_XLDateTimeError_XLDateTimeError___1__N_std_S_basic_string__C___N_std_S_char_traits__C___N_std_S_allocator__C(void* __instance, const std::basic_string<char, std::char_traits<char>, std::allocator<char>>& err) { ::new (__instance) OpenXLSX::XLDateTimeError(err); }
class OpenXLSX::XLDateTimeError& (OpenXLSX::XLDateTimeError::*_14)(class OpenXLSX::XLDateTimeError&&) = &OpenXLSX::XLDateTimeError::operator=;
extern "C" __declspec(dllexport) void c__N_OpenXLSX_S_XLDateTimeError_XLDateTimeError___1__N_OpenXLSX_S_XLDateTimeError(void* __instance, const OpenXLSX::XLDateTimeError& _0) { ::new (__instance) OpenXLSX::XLDateTimeError(_0); }
extern "C" __declspec(dllexport) void c__N_OpenXLSX_S_XLFormulaError_XLFormulaError___1__N_std_S_basic_string__C___N_std_S_char_traits__C___N_std_S_allocator__C(void* __instance, const std::basic_string<char, std::char_traits<char>, std::allocator<char>>& err) { ::new (__instance) OpenXLSX::XLFormulaError(err); }
class OpenXLSX::XLFormulaError& (OpenXLSX::XLFormulaError::*_15)(class OpenXLSX::XLFormulaError&&) = &OpenXLSX::XLFormulaError::operator=;
extern "C" __declspec(dllexport) void c__N_OpenXLSX_S_XLFormulaError_XLFormulaError___1__N_OpenXLSX_S_XLFormulaError(void* __instance, const OpenXLSX::XLFormulaError& _0) { ::new (__instance) OpenXLSX::XLFormulaError(_0); }
bool operator==(const class OpenXLSX::XLCellValue&, const class OpenXLSX::XLCellValue&);
bool (*_16)(const class OpenXLSX::XLCellValue&, const class OpenXLSX::XLCellValue&) = &OpenXLSX::operator==;
bool operator!=(const class OpenXLSX::XLCellValue&, const class OpenXLSX::XLCellValue&);
bool (*_17)(const class OpenXLSX::XLCellValue&, const class OpenXLSX::XLCellValue&) = &OpenXLSX::operator!=;
bool operator<(const class OpenXLSX::XLCellValue&, const class OpenXLSX::XLCellValue&);
bool (*_18)(const class OpenXLSX::XLCellValue&, const class OpenXLSX::XLCellValue&) = &OpenXLSX::operator<;
bool operator>(const class OpenXLSX::XLCellValue&, const class OpenXLSX::XLCellValue&);
bool (*_19)(const class OpenXLSX::XLCellValue&, const class OpenXLSX::XLCellValue&) = &OpenXLSX::operator>;
bool operator<=(const class OpenXLSX::XLCellValue&, const class OpenXLSX::XLCellValue&);
bool (*_20)(const class OpenXLSX::XLCellValue&, const class OpenXLSX::XLCellValue&) = &OpenXLSX::operator<=;
bool operator>=(const class OpenXLSX::XLCellValue&, const class OpenXLSX::XLCellValue&);
bool (*_21)(const class OpenXLSX::XLCellValue&, const class OpenXLSX::XLCellValue&) = &OpenXLSX::operator>=;
bool operator==(const class OpenXLSX::XLFormula&, const class OpenXLSX::XLFormula&);
bool (*_22)(const class OpenXLSX::XLFormula&, const class OpenXLSX::XLFormula&) = &OpenXLSX::operator==;
bool operator!=(const class OpenXLSX::XLFormula&, const class OpenXLSX::XLFormula&);
bool (*_23)(const class OpenXLSX::XLFormula&, const class OpenXLSX::XLFormula&) = &OpenXLSX::operator!=;
extern "C" __declspec(dllexport) void c__N_OpenXLSX_S_XLXmlFile_XLXmlFile(void* __instance) { ::new (__instance) OpenXLSX::XLXmlFile(); }
class OpenXLSX::XLXmlFile& (OpenXLSX::XLXmlFile::*_24)(class OpenXLSX::XLXmlFile&&) = &OpenXLSX::XLXmlFile::operator=;
extern "C" __declspec(dllexport) void c__N_OpenXLSX_S_XLSharedStrings_XLSharedStrings(void* __instance) { ::new (__instance) OpenXLSX::XLSharedStrings(); }
class OpenXLSX::XLSharedStrings& (OpenXLSX::XLSharedStrings::*_25)(class OpenXLSX::XLSharedStrings&&) = &OpenXLSX::XLSharedStrings::operator=;
bool operator==(const class OpenXLSX::XLCell&, const class OpenXLSX::XLCell&);
bool (*_26)(const class OpenXLSX::XLCell&, const class OpenXLSX::XLCell&) = &OpenXLSX::operator==;
bool operator!=(const class OpenXLSX::XLCell&, const class OpenXLSX::XLCell&);
bool (*_27)(const class OpenXLSX::XLCell&, const class OpenXLSX::XLCell&) = &OpenXLSX::operator!=;
class OpenXLSX::XLColumn& (OpenXLSX::XLColumn::*_28)(class OpenXLSX::XLColumn&&) = &OpenXLSX::XLColumn::operator=;
extern "C" __declspec(dllexport) void c__N_OpenXLSX_S_IZipArchive_IZipArchive(void* __instance) { ::new (__instance) OpenXLSX::IZipArchive(); }
extern "C" __declspec(dllexport) void c__N_OpenXLSX_S_IZipArchive_IZipArchive___1__N_OpenXLSX_S_IZipArchive(void* __instance, const OpenXLSX::IZipArchive& other) { ::new (__instance) OpenXLSX::IZipArchive(other); }
extern "C" __declspec(dllexport) void c__N_OpenXLSX_S_IZipArchive__IZipArchive(OpenXLSX::IZipArchive*__instance) { __instance->~IZipArchive(); }
class OpenXLSX::IZipArchive& (OpenXLSX::IZipArchive::*_29)(class OpenXLSX::IZipArchive&&) = &OpenXLSX::IZipArchive::operator=;
bool (OpenXLSX::IZipArchive::*_30)() const = &OpenXLSX::IZipArchive::operator bool;
bool (OpenXLSX::IZipArchive::*_31)() const = &OpenXLSX::IZipArchive::isValid;
bool (OpenXLSX::IZipArchive::*_32)() const = &OpenXLSX::IZipArchive::isOpen;
void (OpenXLSX::IZipArchive::*_33)(const std::basic_string<char, std::char_traits<char>, std::allocator<char>>&) = &OpenXLSX::IZipArchive::open;
void (OpenXLSX::IZipArchive::*_34)() const = &OpenXLSX::IZipArchive::close;
void (OpenXLSX::IZipArchive::*_35)(const std::basic_string<char, std::char_traits<char>, std::allocator<char>>&) = &OpenXLSX::IZipArchive::save;
void (OpenXLSX::IZipArchive::*_36)(const std::basic_string<char, std::char_traits<char>, std::allocator<char>>&, const std::basic_string<char, std::char_traits<char>, std::allocator<char>>&) = &OpenXLSX::IZipArchive::addEntry;
void (OpenXLSX::IZipArchive::*_37)(const std::basic_string<char, std::char_traits<char>, std::allocator<char>>&) = &OpenXLSX::IZipArchive::deleteEntry;
std::basic_string<char, std::char_traits<char>, std::allocator<char>> (OpenXLSX::IZipArchive::*_38)(const std::basic_string<char, std::char_traits<char>, std::allocator<char>>&) = &OpenXLSX::IZipArchive::getEntry;
bool (OpenXLSX::IZipArchive::*_39)(const std::basic_string<char, std::char_traits<char>, std::allocator<char>>&) = &OpenXLSX::IZipArchive::hasEntry;
extern "C" __declspec(dllexport) void c__N_OpenXLSX_S_XLXmlData_XLXmlData(void* __instance) { ::new (__instance) OpenXLSX::XLXmlData(); }
class OpenXLSX::XLXmlData& (OpenXLSX::XLXmlData::*_40)(class OpenXLSX::XLXmlData&&) = &OpenXLSX::XLXmlData::operator=;
extern "C" __declspec(dllexport) void c__N_OpenXLSX_S_XLProperties_XLProperties(void* __instance) { ::new (__instance) OpenXLSX::XLProperties(); }
class OpenXLSX::XLProperties& (OpenXLSX::XLProperties::*_41)(class OpenXLSX::XLProperties&&) = &OpenXLSX::XLProperties::operator=;
extern "C" __declspec(dllexport) void c__N_OpenXLSX_S_XLAppProperties_XLAppProperties(void* __instance) { ::new (__instance) OpenXLSX::XLAppProperties(); }
class OpenXLSX::XLAppProperties& (OpenXLSX::XLAppProperties::*_42)(class OpenXLSX::XLAppProperties&&) = &OpenXLSX::XLAppProperties::operator=;
class OpenXLSX::XLRelationshipItem& (OpenXLSX::XLRelationshipItem::*_43)(class OpenXLSX::XLRelationshipItem&&) = &OpenXLSX::XLRelationshipItem::operator=;
extern "C" __declspec(dllexport) void c__N_OpenXLSX_S_XLRelationships_XLRelationships(void* __instance) { ::new (__instance) OpenXLSX::XLRelationships(); }
class OpenXLSX::XLRelationships& (OpenXLSX::XLRelationships::*_44)(class OpenXLSX::XLRelationships&&) = &OpenXLSX::XLRelationships::operator=;
extern "C" __declspec(dllexport) void c__N_OpenXLSX_S_XLWorkbook_XLWorkbook(void* __instance) { ::new (__instance) OpenXLSX::XLWorkbook(); }
class OpenXLSX::XLWorkbook& (OpenXLSX::XLWorkbook::*_45)(class OpenXLSX::XLWorkbook&&) = &OpenXLSX::XLWorkbook::operator=;
extern "C" __declspec(dllexport) void c__N_OpenXLSX_S_XLZipArchive_XLZipArchive___1__N_OpenXLSX_S_XLZipArchive(void* __instance, const OpenXLSX::XLZipArchive& other) { ::new (__instance) OpenXLSX::XLZipArchive(other); }
class OpenXLSX::XLZipArchive& (OpenXLSX::XLZipArchive::*_46)(class OpenXLSX::XLZipArchive&&) = &OpenXLSX::XLZipArchive::operator=;
class OpenXLSX::XLDocument& (OpenXLSX::XLDocument::*_47)(class OpenXLSX::XLDocument&&) = &OpenXLSX::XLDocument::operator=;
bool operator==(const class OpenXLSX::XLRow&, const class OpenXLSX::XLRow&);
bool (*_48)(const class OpenXLSX::XLRow&, const class OpenXLSX::XLRow&) = &OpenXLSX::operator==;
bool operator!=(const class OpenXLSX::XLRow&, const class OpenXLSX::XLRow&);
bool (*_49)(const class OpenXLSX::XLRow&, const class OpenXLSX::XLRow&) = &OpenXLSX::operator!=;
bool operator<(const class OpenXLSX::XLRow&, const class OpenXLSX::XLRow&);
bool (*_50)(const class OpenXLSX::XLRow&, const class OpenXLSX::XLRow&) = &OpenXLSX::operator<;
bool operator>(const class OpenXLSX::XLRow&, const class OpenXLSX::XLRow&);
bool (*_51)(const class OpenXLSX::XLRow&, const class OpenXLSX::XLRow&) = &OpenXLSX::operator>;
bool operator<=(const class OpenXLSX::XLRow&, const class OpenXLSX::XLRow&);
bool (*_52)(const class OpenXLSX::XLRow&, const class OpenXLSX::XLRow&) = &OpenXLSX::operator<=;
bool operator>=(const class OpenXLSX::XLRow&, const class OpenXLSX::XLRow&);
bool (*_53)(const class OpenXLSX::XLRow&, const class OpenXLSX::XLRow&) = &OpenXLSX::operator>=;
bool operator==(const class OpenXLSX::XLColor&, const class OpenXLSX::XLColor&);
bool (*_54)(const class OpenXLSX::XLColor&, const class OpenXLSX::XLColor&) = &OpenXLSX::operator==;
bool operator!=(const class OpenXLSX::XLColor&, const class OpenXLSX::XLColor&);
bool (*_55)(const class OpenXLSX::XLColor&, const class OpenXLSX::XLColor&) = &OpenXLSX::operator!=;
extern "C" __declspec(dllexport) void c__N_OpenXLSX_S_XLWorksheet_XLWorksheet(void* __instance) { ::new (__instance) OpenXLSX::XLWorksheet(); }
class OpenXLSX::XLWorksheet& (OpenXLSX::XLWorksheet::*_56)(class OpenXLSX::XLWorksheet&&) = &OpenXLSX::XLWorksheet::operator=;
extern "C" __declspec(dllexport) void c__N_OpenXLSX_S_XLChartsheet_XLChartsheet(void* __instance) { ::new (__instance) OpenXLSX::XLChartsheet(); }
class OpenXLSX::XLChartsheet& (OpenXLSX::XLChartsheet::*_57)(class OpenXLSX::XLChartsheet&&) = &OpenXLSX::XLChartsheet::operator=;
extern "C" __declspec(dllexport) void c__N_OpenXLSX_S_XLSheet__XLSheet(OpenXLSX::XLSheet*__instance) { __instance->~XLSheet(); }
class OpenXLSX::XLSheet& (OpenXLSX::XLSheet::*_58)(class OpenXLSX::XLSheet&&) = &OpenXLSX::XLSheet::operator=;
class OpenXLSX::XLWorksheet& (OpenXLSX::XLSheet::*_59)() = &OpenXLSX::XLSheet::getWorkSheet;
class OpenXLSX::XLChartsheet& (OpenXLSX::XLSheet::*_60)() = &OpenXLSX::XLSheet::getChartsheet;
extern "C" __declspec(dllexport) void c__N_OpenXLSX_S_XLCommand_XLCommand___N_OpenXLSX_E_XLCommandType(void* __instance, OpenXLSX::XLCommandType type) { ::new (__instance) OpenXLSX::XLCommand(type); }
OpenXLSX::XLCommandType (OpenXLSX::XLCommand::*_61)() const = &OpenXLSX::XLCommand::type;
extern "C" __declspec(dllexport) void c__N_OpenXLSX_S_XLCommand_XLCommand___1__N_OpenXLSX_S_XLCommand(void* __instance, const OpenXLSX::XLCommand& _0) { ::new (__instance) OpenXLSX::XLCommand(_0); }
class OpenXLSX::XLCommand& (OpenXLSX::XLCommand::*_62)(class OpenXLSX::XLCommand&&) = &OpenXLSX::XLCommand::operator=;
extern "C" __declspec(dllexport) void c__N_OpenXLSX_S_XLCommand__XLCommand(OpenXLSX::XLCommand*__instance) { __instance->~XLCommand(); }
extern "C" __declspec(dllexport) void c__N_OpenXLSX_S_XLQuery_XLQuery___N_OpenXLSX_E_XLQueryType(void* __instance, OpenXLSX::XLQueryType type) { ::new (__instance) OpenXLSX::XLQuery(type); }
OpenXLSX::XLQueryType (OpenXLSX::XLQuery::*_63)() const = &OpenXLSX::XLQuery::type;
extern "C" __declspec(dllexport) void c__N_OpenXLSX_S_XLQuery_XLQuery___1__N_OpenXLSX_S_XLQuery(void* __instance, const OpenXLSX::XLQuery& _0) { ::new (__instance) OpenXLSX::XLQuery(_0); }
class OpenXLSX::XLQuery& (OpenXLSX::XLQuery::*_64)(class OpenXLSX::XLQuery&&) = &OpenXLSX::XLQuery::operator=;
extern "C" __declspec(dllexport) void c__N_OpenXLSX_S_XLQuery__XLQuery(OpenXLSX::XLQuery*__instance) { __instance->~XLQuery(); }
