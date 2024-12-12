#include <OpenXLSX-Exports.hpp>
#include <OpenXLSX.hpp>
#include <pugixml/pugixml.hpp>
#include <new>

std::basic_string<char, std::char_traits<char>, std::allocator<char>> (OpenXLSX::XLCell::*_0)() const = &OpenXLSX::XLCell::getString;
extern "C" __declspec(dllexport) void c__N_OpenXLSX_S_XLCellAssignable_XLCellAssignable(void* __instance) { ::new (__instance) OpenXLSX::XLCellAssignable(); }
bool operator==(const class OpenXLSX::XLCell&, const class OpenXLSX::XLCell&);
bool (*_1)(const class OpenXLSX::XLCell&, const class OpenXLSX::XLCell&) = &OpenXLSX::operator==;
bool operator!=(const class OpenXLSX::XLCell&, const class OpenXLSX::XLCell&);
bool (*_2)(const class OpenXLSX::XLCell&, const class OpenXLSX::XLCell&) = &OpenXLSX::operator!=;
bool operator==(const class OpenXLSX::XLCellReference&, const class OpenXLSX::XLCellReference&);
bool (*_3)(const class OpenXLSX::XLCellReference&, const class OpenXLSX::XLCellReference&) = &OpenXLSX::operator==;
bool operator!=(const class OpenXLSX::XLCellReference&, const class OpenXLSX::XLCellReference&);
bool (*_4)(const class OpenXLSX::XLCellReference&, const class OpenXLSX::XLCellReference&) = &OpenXLSX::operator!=;
bool operator<(const class OpenXLSX::XLCellReference&, const class OpenXLSX::XLCellReference&);
bool (*_5)(const class OpenXLSX::XLCellReference&, const class OpenXLSX::XLCellReference&) = &OpenXLSX::operator<;
bool operator>(const class OpenXLSX::XLCellReference&, const class OpenXLSX::XLCellReference&);
bool (*_6)(const class OpenXLSX::XLCellReference&, const class OpenXLSX::XLCellReference&) = &OpenXLSX::operator>;
bool operator<=(const class OpenXLSX::XLCellReference&, const class OpenXLSX::XLCellReference&);
bool (*_7)(const class OpenXLSX::XLCellReference&, const class OpenXLSX::XLCellReference&) = &OpenXLSX::operator<=;
bool operator>=(const class OpenXLSX::XLCellReference&, const class OpenXLSX::XLCellReference&);
bool (*_8)(const class OpenXLSX::XLCellReference&, const class OpenXLSX::XLCellReference&) = &OpenXLSX::operator>=;
std::basic_string<char, std::char_traits<char>, std::allocator<char>> (OpenXLSX::VisitXLCellValueTypeToString::*_9)(long long) const = &OpenXLSX::VisitXLCellValueTypeToString::operator();
std::basic_string<char, std::char_traits<char>, std::allocator<char>> (OpenXLSX::VisitXLCellValueTypeToString::*_10)(double) const = &OpenXLSX::VisitXLCellValueTypeToString::operator();
std::basic_string<char, std::char_traits<char>, std::allocator<char>> (OpenXLSX::VisitXLCellValueTypeToString::*_11)(bool) const = &OpenXLSX::VisitXLCellValueTypeToString::operator();
std::basic_string<char, std::char_traits<char>, std::allocator<char>> (OpenXLSX::VisitXLCellValueTypeToString::*_12)(std::basic_string<char, std::char_traits<char>, std::allocator<char>>) const = &OpenXLSX::VisitXLCellValueTypeToString::operator();
extern "C" __declspec(dllexport) void c__N_OpenXLSX_S_VisitXLCellValueTypeToString_VisitXLCellValueTypeToString___1__N_OpenXLSX_S_VisitXLCellValueTypeToString(void* __instance, const OpenXLSX::VisitXLCellValueTypeToString& _0) { ::new (__instance) OpenXLSX::VisitXLCellValueTypeToString(_0); }
struct OpenXLSX::VisitXLCellValueTypeToString& (OpenXLSX::VisitXLCellValueTypeToString::*_13)(struct OpenXLSX::VisitXLCellValueTypeToString&&) = &OpenXLSX::VisitXLCellValueTypeToString::operator=;
extern "C" __declspec(dllexport) void c__N_OpenXLSX_S_VisitXLCellValueTypeToString__VisitXLCellValueTypeToString(OpenXLSX::VisitXLCellValueTypeToString*__instance) { __instance->~VisitXLCellValueTypeToString(); }
extern "C" __declspec(dllexport) void c__N_OpenXLSX_S_VisitXLCellValueTypeToString_VisitXLCellValueTypeToString(void* __instance) { ::new (__instance) OpenXLSX::VisitXLCellValueTypeToString(); }
std::basic_string<char, std::char_traits<char>, std::allocator<char>> (OpenXLSX::XLCellValue::*_14)() = &OpenXLSX::XLCellValue::getString;
std::basic_string<char, std::char_traits<char>, std::allocator<char>> (OpenXLSX::XLCellValueProxy::*_15)() const = &OpenXLSX::XLCellValueProxy::getString;
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
extern "C" __declspec(dllexport) void c__N_OpenXLSX_S_XLException_XLException___1__N_std_S_basic_string__C___N_std_S_char_traits__C___N_std_S_allocator__C(void* __instance, const std::basic_string<char, std::char_traits<char>, std::allocator<char>>& err) { ::new (__instance) OpenXLSX::XLException(err); }
class OpenXLSX::XLException& (OpenXLSX::XLException::*_22)(class OpenXLSX::XLException&&) = &OpenXLSX::XLException::operator=;
extern "C" __declspec(dllexport) void c__N_OpenXLSX_S_XLOverflowError_XLOverflowError___1__N_std_S_basic_string__C___N_std_S_char_traits__C___N_std_S_allocator__C(void* __instance, const std::basic_string<char, std::char_traits<char>, std::allocator<char>>& err) { ::new (__instance) OpenXLSX::XLOverflowError(err); }
class OpenXLSX::XLOverflowError& (OpenXLSX::XLOverflowError::*_23)(class OpenXLSX::XLOverflowError&&) = &OpenXLSX::XLOverflowError::operator=;
extern "C" __declspec(dllexport) void c__N_OpenXLSX_S_XLOverflowError_XLOverflowError___1__N_OpenXLSX_S_XLOverflowError(void* __instance, const OpenXLSX::XLOverflowError& _0) { ::new (__instance) OpenXLSX::XLOverflowError(_0); }
extern "C" __declspec(dllexport) void c__N_OpenXLSX_S_XLValueTypeError_XLValueTypeError___1__N_std_S_basic_string__C___N_std_S_char_traits__C___N_std_S_allocator__C(void* __instance, const std::basic_string<char, std::char_traits<char>, std::allocator<char>>& err) { ::new (__instance) OpenXLSX::XLValueTypeError(err); }
class OpenXLSX::XLValueTypeError& (OpenXLSX::XLValueTypeError::*_24)(class OpenXLSX::XLValueTypeError&&) = &OpenXLSX::XLValueTypeError::operator=;
extern "C" __declspec(dllexport) void c__N_OpenXLSX_S_XLValueTypeError_XLValueTypeError___1__N_OpenXLSX_S_XLValueTypeError(void* __instance, const OpenXLSX::XLValueTypeError& _0) { ::new (__instance) OpenXLSX::XLValueTypeError(_0); }
extern "C" __declspec(dllexport) void c__N_OpenXLSX_S_XLCellAddressError_XLCellAddressError___1__N_std_S_basic_string__C___N_std_S_char_traits__C___N_std_S_allocator__C(void* __instance, const std::basic_string<char, std::char_traits<char>, std::allocator<char>>& err) { ::new (__instance) OpenXLSX::XLCellAddressError(err); }
class OpenXLSX::XLCellAddressError& (OpenXLSX::XLCellAddressError::*_25)(class OpenXLSX::XLCellAddressError&&) = &OpenXLSX::XLCellAddressError::operator=;
extern "C" __declspec(dllexport) void c__N_OpenXLSX_S_XLCellAddressError_XLCellAddressError___1__N_OpenXLSX_S_XLCellAddressError(void* __instance, const OpenXLSX::XLCellAddressError& _0) { ::new (__instance) OpenXLSX::XLCellAddressError(_0); }
extern "C" __declspec(dllexport) void c__N_OpenXLSX_S_XLInputError_XLInputError___1__N_std_S_basic_string__C___N_std_S_char_traits__C___N_std_S_allocator__C(void* __instance, const std::basic_string<char, std::char_traits<char>, std::allocator<char>>& err) { ::new (__instance) OpenXLSX::XLInputError(err); }
class OpenXLSX::XLInputError& (OpenXLSX::XLInputError::*_26)(class OpenXLSX::XLInputError&&) = &OpenXLSX::XLInputError::operator=;
extern "C" __declspec(dllexport) void c__N_OpenXLSX_S_XLInputError_XLInputError___1__N_OpenXLSX_S_XLInputError(void* __instance, const OpenXLSX::XLInputError& _0) { ::new (__instance) OpenXLSX::XLInputError(_0); }
extern "C" __declspec(dllexport) void c__N_OpenXLSX_S_XLInternalError_XLInternalError___1__N_std_S_basic_string__C___N_std_S_char_traits__C___N_std_S_allocator__C(void* __instance, const std::basic_string<char, std::char_traits<char>, std::allocator<char>>& err) { ::new (__instance) OpenXLSX::XLInternalError(err); }
class OpenXLSX::XLInternalError& (OpenXLSX::XLInternalError::*_27)(class OpenXLSX::XLInternalError&&) = &OpenXLSX::XLInternalError::operator=;
extern "C" __declspec(dllexport) void c__N_OpenXLSX_S_XLInternalError_XLInternalError___1__N_OpenXLSX_S_XLInternalError(void* __instance, const OpenXLSX::XLInternalError& _0) { ::new (__instance) OpenXLSX::XLInternalError(_0); }
extern "C" __declspec(dllexport) void c__N_OpenXLSX_S_XLPropertyError_XLPropertyError___1__N_std_S_basic_string__C___N_std_S_char_traits__C___N_std_S_allocator__C(void* __instance, const std::basic_string<char, std::char_traits<char>, std::allocator<char>>& err) { ::new (__instance) OpenXLSX::XLPropertyError(err); }
class OpenXLSX::XLPropertyError& (OpenXLSX::XLPropertyError::*_28)(class OpenXLSX::XLPropertyError&&) = &OpenXLSX::XLPropertyError::operator=;
extern "C" __declspec(dllexport) void c__N_OpenXLSX_S_XLPropertyError_XLPropertyError___1__N_OpenXLSX_S_XLPropertyError(void* __instance, const OpenXLSX::XLPropertyError& _0) { ::new (__instance) OpenXLSX::XLPropertyError(_0); }
extern "C" __declspec(dllexport) void c__N_OpenXLSX_S_XLSheetError_XLSheetError___1__N_std_S_basic_string__C___N_std_S_char_traits__C___N_std_S_allocator__C(void* __instance, const std::basic_string<char, std::char_traits<char>, std::allocator<char>>& err) { ::new (__instance) OpenXLSX::XLSheetError(err); }
class OpenXLSX::XLSheetError& (OpenXLSX::XLSheetError::*_29)(class OpenXLSX::XLSheetError&&) = &OpenXLSX::XLSheetError::operator=;
extern "C" __declspec(dllexport) void c__N_OpenXLSX_S_XLSheetError_XLSheetError___1__N_OpenXLSX_S_XLSheetError(void* __instance, const OpenXLSX::XLSheetError& _0) { ::new (__instance) OpenXLSX::XLSheetError(_0); }
extern "C" __declspec(dllexport) void c__N_OpenXLSX_S_XLDateTimeError_XLDateTimeError___1__N_std_S_basic_string__C___N_std_S_char_traits__C___N_std_S_allocator__C(void* __instance, const std::basic_string<char, std::char_traits<char>, std::allocator<char>>& err) { ::new (__instance) OpenXLSX::XLDateTimeError(err); }
class OpenXLSX::XLDateTimeError& (OpenXLSX::XLDateTimeError::*_30)(class OpenXLSX::XLDateTimeError&&) = &OpenXLSX::XLDateTimeError::operator=;
extern "C" __declspec(dllexport) void c__N_OpenXLSX_S_XLDateTimeError_XLDateTimeError___1__N_OpenXLSX_S_XLDateTimeError(void* __instance, const OpenXLSX::XLDateTimeError& _0) { ::new (__instance) OpenXLSX::XLDateTimeError(_0); }
extern "C" __declspec(dllexport) void c__N_OpenXLSX_S_XLFormulaError_XLFormulaError___1__N_std_S_basic_string__C___N_std_S_char_traits__C___N_std_S_allocator__C(void* __instance, const std::basic_string<char, std::char_traits<char>, std::allocator<char>>& err) { ::new (__instance) OpenXLSX::XLFormulaError(err); }
class OpenXLSX::XLFormulaError& (OpenXLSX::XLFormulaError::*_31)(class OpenXLSX::XLFormulaError&&) = &OpenXLSX::XLFormulaError::operator=;
extern "C" __declspec(dllexport) void c__N_OpenXLSX_S_XLFormulaError_XLFormulaError___1__N_OpenXLSX_S_XLFormulaError(void* __instance, const OpenXLSX::XLFormulaError& _0) { ::new (__instance) OpenXLSX::XLFormulaError(_0); }
extern "C" __declspec(dllexport) void c__N_OpenXLSX_S_OpenXLSX_xml_node_OpenXLSX_xml_node(void* __instance) { ::new (__instance) OpenXLSX::OpenXLSX_xml_node(); }
const char* (OpenXLSX::OpenXLSX_xml_node::*_32)() const = &OpenXLSX::OpenXLSX_xml_node::name;
const char* (OpenXLSX::OpenXLSX_xml_node::*_33)() const = &OpenXLSX::OpenXLSX_xml_node::raw_name;
class OpenXLSX::OpenXLSX_xml_node (OpenXLSX::OpenXLSX_xml_node::*_34)() = &OpenXLSX::OpenXLSX_xml_node::parent;
class OpenXLSX::OpenXLSX_xml_node (OpenXLSX::OpenXLSX_xml_node::*_35)(const char*) const = &OpenXLSX::OpenXLSX_xml_node::child;
class OpenXLSX::OpenXLSX_xml_node (OpenXLSX::OpenXLSX_xml_node::*_36)(const char*) const = &OpenXLSX::OpenXLSX_xml_node::next_sibling;
class OpenXLSX::OpenXLSX_xml_node (OpenXLSX::OpenXLSX_xml_node::*_37)() const = &OpenXLSX::OpenXLSX_xml_node::next_sibling;
class OpenXLSX::OpenXLSX_xml_node (OpenXLSX::OpenXLSX_xml_node::*_38)(const char*) const = &OpenXLSX::OpenXLSX_xml_node::previous_sibling;
class OpenXLSX::OpenXLSX_xml_node (OpenXLSX::OpenXLSX_xml_node::*_39)() const = &OpenXLSX::OpenXLSX_xml_node::previous_sibling;
const char* (OpenXLSX::OpenXLSX_xml_node::*_40)() const = &OpenXLSX::OpenXLSX_xml_node::child_value;
const char* (OpenXLSX::OpenXLSX_xml_node::*_41)(const char*) const = &OpenXLSX::OpenXLSX_xml_node::child_value;
bool (OpenXLSX::OpenXLSX_xml_node::*_42)(const char*, bool) = &OpenXLSX::OpenXLSX_xml_node::set_name;
bool (OpenXLSX::OpenXLSX_xml_node::*_43)(const char*, unsigned long long, bool) = &OpenXLSX::OpenXLSX_xml_node::set_name;
class OpenXLSX::OpenXLSX_xml_node (OpenXLSX::OpenXLSX_xml_node::*_44)(const char*, bool) = &OpenXLSX::OpenXLSX_xml_node::append_child;
class OpenXLSX::OpenXLSX_xml_node (OpenXLSX::OpenXLSX_xml_node::*_45)(const char*, bool) = &OpenXLSX::OpenXLSX_xml_node::prepend_child;
bool (OpenXLSX::OpenXLSX_xml_node::*_46)(const char*) = &OpenXLSX::OpenXLSX_xml_node::remove_child;
class OpenXLSX::OpenXLSX_xml_node (OpenXLSX::OpenXLSX_xml_node::*_47)(const char*, const char*, const char*) const = &OpenXLSX::OpenXLSX_xml_node::find_child_by_attribute;
class OpenXLSX::OpenXLSX_xml_node (OpenXLSX::OpenXLSX_xml_node::*_48)(const char*, const char*) const = &OpenXLSX::OpenXLSX_xml_node::find_child_by_attribute;
class OpenXLSX::OpenXLSX_xml_node& (OpenXLSX::OpenXLSX_xml_node::*_49)(class OpenXLSX::OpenXLSX_xml_node&&) = &OpenXLSX::OpenXLSX_xml_node::operator=;
extern "C" __declspec(dllexport) void c__N_OpenXLSX_S_OpenXLSX_xml_document_OpenXLSX_xml_document(void* __instance) { ::new (__instance) OpenXLSX::OpenXLSX_xml_document(); }
class OpenXLSX::OpenXLSX_xml_node (OpenXLSX::OpenXLSX_xml_document::*_50)() const = &OpenXLSX::OpenXLSX_xml_document::document_element;
class OpenXLSX::OpenXLSX_xml_document& (OpenXLSX::OpenXLSX_xml_document::*_51)(class OpenXLSX::OpenXLSX_xml_document&&) = &OpenXLSX::OpenXLSX_xml_document::operator=;
extern "C" __declspec(dllexport) void c__N_OpenXLSX_S_OpenXLSX_xml_document__OpenXLSX_xml_document(OpenXLSX::OpenXLSX_xml_document*__instance) { __instance->~OpenXLSX_xml_document(); }
bool operator==(const class OpenXLSX::XLFormula&, const class OpenXLSX::XLFormula&);
bool (*_52)(const class OpenXLSX::XLFormula&, const class OpenXLSX::XLFormula&) = &OpenXLSX::operator==;
bool operator!=(const class OpenXLSX::XLFormula&, const class OpenXLSX::XLFormula&);
bool (*_53)(const class OpenXLSX::XLFormula&, const class OpenXLSX::XLFormula&) = &OpenXLSX::operator!=;
extern "C" __declspec(dllexport) void c__N_OpenXLSX_S_XLSharedStrings_XLSharedStrings(void* __instance) { ::new (__instance) OpenXLSX::XLSharedStrings(); }
class OpenXLSX::XLSharedStrings& (OpenXLSX::XLSharedStrings::*_54)(class OpenXLSX::XLSharedStrings&&) = &OpenXLSX::XLSharedStrings::operator=;
extern "C" __declspec(dllexport) void c__N_OpenXLSX_S_XLXmlFile_XLXmlFile(void* __instance) { ::new (__instance) OpenXLSX::XLXmlFile(); }
class OpenXLSX::XLXmlFile& (OpenXLSX::XLXmlFile::*_55)(class OpenXLSX::XLXmlFile&&) = &OpenXLSX::XLXmlFile::operator=;
extern "C" __declspec(dllexport) void c__N_OpenXLSX_S_XLUnsupportedElement_XLUnsupportedElement(void* __instance) { ::new (__instance) OpenXLSX::XLUnsupportedElement(); }
bool (OpenXLSX::XLUnsupportedElement::*_56)() = &OpenXLSX::XLUnsupportedElement::empty;
class OpenXLSX::XLUnsupportedElement& (OpenXLSX::XLUnsupportedElement::*_57)(class OpenXLSX::XLUnsupportedElement&&) = &OpenXLSX::XLUnsupportedElement::operator=;
class OpenXLSX::XLNumberFormat& (OpenXLSX::XLNumberFormat::*_58)(class OpenXLSX::XLNumberFormat&&) = &OpenXLSX::XLNumberFormat::operator=;
class OpenXLSX::XLNumberFormats& (OpenXLSX::XLNumberFormats::*_59)(class OpenXLSX::XLNumberFormats&&) = &OpenXLSX::XLNumberFormats::operator=;
class OpenXLSX::XLNumberFormat (OpenXLSX::XLNumberFormats::*_60)(unsigned long long) const = &OpenXLSX::XLNumberFormats::operator[];
class OpenXLSX::XLFont& (OpenXLSX::XLFont::*_61)(class OpenXLSX::XLFont&&) = &OpenXLSX::XLFont::operator=;
class OpenXLSX::XLFonts& (OpenXLSX::XLFonts::*_62)(class OpenXLSX::XLFonts&&) = &OpenXLSX::XLFonts::operator=;
class OpenXLSX::XLFont (OpenXLSX::XLFonts::*_63)(unsigned long long) const = &OpenXLSX::XLFonts::operator[];
extern "C" __declspec(dllexport) void c__N_OpenXLSX_S_XLDataBarColor__XLDataBarColor(OpenXLSX::XLDataBarColor*__instance) { __instance->~XLDataBarColor(); }
class OpenXLSX::XLDataBarColor& (OpenXLSX::XLDataBarColor::*_64)(class OpenXLSX::XLDataBarColor&&) = &OpenXLSX::XLDataBarColor::operator=;
bool (OpenXLSX::XLDataBarColor::*_65)(class OpenXLSX::XLColor) = &OpenXLSX::XLDataBarColor::set;
extern "C" __declspec(dllexport) void c__N_OpenXLSX_S_XLGradientStop__XLGradientStop(OpenXLSX::XLGradientStop*__instance) { __instance->~XLGradientStop(); }
class OpenXLSX::XLGradientStop& (OpenXLSX::XLGradientStop::*_66)(class OpenXLSX::XLGradientStop&&) = &OpenXLSX::XLGradientStop::operator=;
class OpenXLSX::XLGradientStops& (OpenXLSX::XLGradientStops::*_67)(class OpenXLSX::XLGradientStops&&) = &OpenXLSX::XLGradientStops::operator=;
class OpenXLSX::XLGradientStop (OpenXLSX::XLGradientStops::*_68)(unsigned long long) const = &OpenXLSX::XLGradientStops::operator[];
class OpenXLSX::XLFill& (OpenXLSX::XLFill::*_69)(class OpenXLSX::XLFill&&) = &OpenXLSX::XLFill::operator=;
class OpenXLSX::XLFills& (OpenXLSX::XLFills::*_70)(class OpenXLSX::XLFills&&) = &OpenXLSX::XLFills::operator=;
class OpenXLSX::XLFill (OpenXLSX::XLFills::*_71)(unsigned long long) const = &OpenXLSX::XLFills::operator[];
class OpenXLSX::XLLine& (OpenXLSX::XLLine::*_72)(class OpenXLSX::XLLine&&) = &OpenXLSX::XLLine::operator=;
class OpenXLSX::XLBorder& (OpenXLSX::XLBorder::*_73)(class OpenXLSX::XLBorder&&) = &OpenXLSX::XLBorder::operator=;
class OpenXLSX::XLBorders& (OpenXLSX::XLBorders::*_74)(class OpenXLSX::XLBorders&&) = &OpenXLSX::XLBorders::operator=;
class OpenXLSX::XLBorder (OpenXLSX::XLBorders::*_75)(unsigned long long) const = &OpenXLSX::XLBorders::operator[];
class OpenXLSX::XLAlignment& (OpenXLSX::XLAlignment::*_76)(class OpenXLSX::XLAlignment&&) = &OpenXLSX::XLAlignment::operator=;
class OpenXLSX::XLCellFormat& (OpenXLSX::XLCellFormat::*_77)(class OpenXLSX::XLCellFormat&&) = &OpenXLSX::XLCellFormat::operator=;
class OpenXLSX::XLUnsupportedElement (OpenXLSX::XLCellFormat::*_78)() const = &OpenXLSX::XLCellFormat::extLst;
class OpenXLSX::XLCellFormats& (OpenXLSX::XLCellFormats::*_79)(class OpenXLSX::XLCellFormats&&) = &OpenXLSX::XLCellFormats::operator=;
class OpenXLSX::XLCellFormat (OpenXLSX::XLCellFormats::*_80)(unsigned long long) const = &OpenXLSX::XLCellFormats::operator[];
class OpenXLSX::XLCellStyle& (OpenXLSX::XLCellStyle::*_81)(class OpenXLSX::XLCellStyle&&) = &OpenXLSX::XLCellStyle::operator=;
class OpenXLSX::XLUnsupportedElement (OpenXLSX::XLCellStyle::*_82)() const = &OpenXLSX::XLCellStyle::extLst;
class OpenXLSX::XLCellStyles& (OpenXLSX::XLCellStyles::*_83)(class OpenXLSX::XLCellStyles&&) = &OpenXLSX::XLCellStyles::operator=;
class OpenXLSX::XLCellStyle (OpenXLSX::XLCellStyles::*_84)(unsigned long long) const = &OpenXLSX::XLCellStyles::operator[];
extern "C" __declspec(dllexport) void c__N_OpenXLSX_S_XLStyles_XLStyles(void* __instance) { ::new (__instance) OpenXLSX::XLStyles(); }
class OpenXLSX::XLStyles& (OpenXLSX::XLStyles::*_85)(class OpenXLSX::XLStyles&&) = &OpenXLSX::XLStyles::operator=;
bool operator==(const class OpenXLSX::XLColor&, const class OpenXLSX::XLColor&);
bool (*_86)(const class OpenXLSX::XLColor&, const class OpenXLSX::XLColor&) = &OpenXLSX::operator==;
bool operator!=(const class OpenXLSX::XLColor&, const class OpenXLSX::XLColor&);
bool (*_87)(const class OpenXLSX::XLColor&, const class OpenXLSX::XLColor&) = &OpenXLSX::operator!=;
bool (OpenXLSX::XLCellIterator::*_88)() const = &OpenXLSX::XLCellIterator::endReached;
class OpenXLSX::XLColumn& (OpenXLSX::XLColumn::*_89)(class OpenXLSX::XLColumn&&) = &OpenXLSX::XLColumn::operator=;
class OpenXLSX::XLDocument& (OpenXLSX::XLDocument::*_90)(class OpenXLSX::XLDocument&&) = &OpenXLSX::XLDocument::operator=;
extern "C" __declspec(dllexport) void c__N_OpenXLSX_S_IZipArchive_IZipArchive(void* __instance) { ::new (__instance) OpenXLSX::IZipArchive(); }
extern "C" __declspec(dllexport) void c__N_OpenXLSX_S_IZipArchive_IZipArchive___1__N_OpenXLSX_S_IZipArchive(void* __instance, const OpenXLSX::IZipArchive& other) { ::new (__instance) OpenXLSX::IZipArchive(other); }
extern "C" __declspec(dllexport) void c__N_OpenXLSX_S_IZipArchive__IZipArchive(OpenXLSX::IZipArchive*__instance) { __instance->~IZipArchive(); }
class OpenXLSX::IZipArchive& (OpenXLSX::IZipArchive::*_91)(class OpenXLSX::IZipArchive&&) = &OpenXLSX::IZipArchive::operator=;
bool (OpenXLSX::IZipArchive::*_92)() const = &OpenXLSX::IZipArchive::operator bool;
bool (OpenXLSX::IZipArchive::*_93)() const = &OpenXLSX::IZipArchive::isValid;
bool (OpenXLSX::IZipArchive::*_94)() const = &OpenXLSX::IZipArchive::isOpen;
void (OpenXLSX::IZipArchive::*_95)(const std::basic_string<char, std::char_traits<char>, std::allocator<char>>&) = &OpenXLSX::IZipArchive::open;
void (OpenXLSX::IZipArchive::*_96)() const = &OpenXLSX::IZipArchive::close;
void (OpenXLSX::IZipArchive::*_97)(const std::basic_string<char, std::char_traits<char>, std::allocator<char>>&) = &OpenXLSX::IZipArchive::save;
void (OpenXLSX::IZipArchive::*_98)(const std::basic_string<char, std::char_traits<char>, std::allocator<char>>&, const std::basic_string<char, std::char_traits<char>, std::allocator<char>>&) = &OpenXLSX::IZipArchive::addEntry;
void (OpenXLSX::IZipArchive::*_99)(const std::basic_string<char, std::char_traits<char>, std::allocator<char>>&) = &OpenXLSX::IZipArchive::deleteEntry;
std::basic_string<char, std::char_traits<char>, std::allocator<char>> (OpenXLSX::IZipArchive::*_100)(const std::basic_string<char, std::char_traits<char>, std::allocator<char>>&) = &OpenXLSX::IZipArchive::getEntry;
const char* (OpenXLSX::IZipArchive::*_101)(const std::basic_string<char, std::char_traits<char>, std::allocator<char>>&, unsigned int*) = &OpenXLSX::IZipArchive::getEntry;
bool (OpenXLSX::IZipArchive::*_102)(const std::basic_string<char, std::char_traits<char>, std::allocator<char>>&) = &OpenXLSX::IZipArchive::hasEntry;
extern "C" __declspec(dllexport) void c__N_OpenXLSX_S_XLCommand_XLCommand___N_OpenXLSX_E_XLCommandType(void* __instance, OpenXLSX::XLCommandType type) { ::new (__instance) OpenXLSX::XLCommand(type); }
OpenXLSX::XLCommandType (OpenXLSX::XLCommand::*_103)() const = &OpenXLSX::XLCommand::type;
extern "C" __declspec(dllexport) void c__N_OpenXLSX_S_XLCommand_XLCommand___1__N_OpenXLSX_S_XLCommand(void* __instance, const OpenXLSX::XLCommand& _0) { ::new (__instance) OpenXLSX::XLCommand(_0); }
class OpenXLSX::XLCommand& (OpenXLSX::XLCommand::*_104)(class OpenXLSX::XLCommand&&) = &OpenXLSX::XLCommand::operator=;
extern "C" __declspec(dllexport) void c__N_OpenXLSX_S_XLCommand__XLCommand(OpenXLSX::XLCommand*__instance) { __instance->~XLCommand(); }
extern "C" __declspec(dllexport) void c__N_OpenXLSX_S_XLQuery_XLQuery___N_OpenXLSX_E_XLQueryType(void* __instance, OpenXLSX::XLQueryType type) { ::new (__instance) OpenXLSX::XLQuery(type); }
OpenXLSX::XLQueryType (OpenXLSX::XLQuery::*_105)() const = &OpenXLSX::XLQuery::type;
extern "C" __declspec(dllexport) void c__N_OpenXLSX_S_XLQuery_XLQuery___1__N_OpenXLSX_S_XLQuery(void* __instance, const OpenXLSX::XLQuery& _0) { ::new (__instance) OpenXLSX::XLQuery(_0); }
class OpenXLSX::XLQuery& (OpenXLSX::XLQuery::*_106)(class OpenXLSX::XLQuery&&) = &OpenXLSX::XLQuery::operator=;
extern "C" __declspec(dllexport) void c__N_OpenXLSX_S_XLQuery__XLQuery(OpenXLSX::XLQuery*__instance) { __instance->~XLQuery(); }
extern "C" __declspec(dllexport) void c__N_OpenXLSX_S_XLProperties_XLProperties(void* __instance) { ::new (__instance) OpenXLSX::XLProperties(); }
class OpenXLSX::XLProperties& (OpenXLSX::XLProperties::*_107)(class OpenXLSX::XLProperties&&) = &OpenXLSX::XLProperties::operator=;
extern "C" __declspec(dllexport) void c__N_OpenXLSX_S_XLAppProperties_XLAppProperties(void* __instance) { ::new (__instance) OpenXLSX::XLAppProperties(); }
class OpenXLSX::XLAppProperties& (OpenXLSX::XLAppProperties::*_108)(class OpenXLSX::XLAppProperties&&) = &OpenXLSX::XLAppProperties::operator=;
class OpenXLSX::XLRelationshipItem& (OpenXLSX::XLRelationshipItem::*_109)(class OpenXLSX::XLRelationshipItem&&) = &OpenXLSX::XLRelationshipItem::operator=;
extern "C" __declspec(dllexport) void c__N_OpenXLSX_S_XLRelationships_XLRelationships(void* __instance) { ::new (__instance) OpenXLSX::XLRelationships(); }
extern "C" __declspec(dllexport) void c__N_OpenXLSX_S_XLRelationships_XLRelationships___1__N_OpenXLSX_S_XLRelationships(void* __instance, const OpenXLSX::XLRelationships& other) { ::new (__instance) OpenXLSX::XLRelationships(other); }
class OpenXLSX::XLRelationships& (OpenXLSX::XLRelationships::*_110)(class OpenXLSX::XLRelationships&&) = &OpenXLSX::XLRelationships::operator=;
extern "C" __declspec(dllexport) void c__N_OpenXLSX_S_XLWorkbook_XLWorkbook(void* __instance) { ::new (__instance) OpenXLSX::XLWorkbook(); }
class OpenXLSX::XLWorkbook& (OpenXLSX::XLWorkbook::*_111)(class OpenXLSX::XLWorkbook&&) = &OpenXLSX::XLWorkbook::operator=;
extern "C" __declspec(dllexport) void c__N_OpenXLSX_S_XLXmlSavingDeclaration_XLXmlSavingDeclaration(void* __instance) { ::new (__instance) OpenXLSX::XLXmlSavingDeclaration(); }
extern "C" __declspec(dllexport) void c__N_OpenXLSX_S_XLXmlSavingDeclaration_XLXmlSavingDeclaration___1__N_OpenXLSX_S_XLXmlSavingDeclaration(void* __instance, const OpenXLSX::XLXmlSavingDeclaration& other) { ::new (__instance) OpenXLSX::XLXmlSavingDeclaration(other); }
extern "C" __declspec(dllexport) void c__N_OpenXLSX_S_XLXmlSavingDeclaration_XLXmlSavingDeclaration___N_std_S_basic_string__C___N_std_S_char_traits__C___N_std_S_allocator__C_S0__b(void* __instance, std::basic_string<char, std::char_traits<char>, std::allocator<char>> version, std::basic_string<char, std::char_traits<char>, std::allocator<char>> encoding, bool standalone) { ::new (__instance) OpenXLSX::XLXmlSavingDeclaration(version, encoding, standalone); }
extern "C" __declspec(dllexport) void c__N_OpenXLSX_S_XLXmlSavingDeclaration__XLXmlSavingDeclaration(OpenXLSX::XLXmlSavingDeclaration*__instance) { __instance->~XLXmlSavingDeclaration(); }
const std::basic_string<char, std::char_traits<char>, std::allocator<char>>& (OpenXLSX::XLXmlSavingDeclaration::*_112)() const = &OpenXLSX::XLXmlSavingDeclaration::version;
const std::basic_string<char, std::char_traits<char>, std::allocator<char>>& (OpenXLSX::XLXmlSavingDeclaration::*_113)() const = &OpenXLSX::XLXmlSavingDeclaration::encoding;
bool (OpenXLSX::XLXmlSavingDeclaration::*_114)() const = &OpenXLSX::XLXmlSavingDeclaration::standalone_as_bool;
const std::basic_string<char, std::char_traits<char>, std::allocator<char>> (OpenXLSX::XLXmlSavingDeclaration::*_115)() const = &OpenXLSX::XLXmlSavingDeclaration::standalone;
class OpenXLSX::XLXmlSavingDeclaration& (OpenXLSX::XLXmlSavingDeclaration::*_116)(const class OpenXLSX::XLXmlSavingDeclaration&) = &OpenXLSX::XLXmlSavingDeclaration::operator=;
extern "C" __declspec(dllexport) void c__N_OpenXLSX_S_XLXmlData_XLXmlData(void* __instance) { ::new (__instance) OpenXLSX::XLXmlData(); }
class OpenXLSX::XLXmlData& (OpenXLSX::XLXmlData::*_117)(class OpenXLSX::XLXmlData&&) = &OpenXLSX::XLXmlData::operator=;
extern "C" __declspec(dllexport) void c__N_OpenXLSX_S_XLZipArchive_XLZipArchive___1__N_OpenXLSX_S_XLZipArchive(void* __instance, const OpenXLSX::XLZipArchive& other) { ::new (__instance) OpenXLSX::XLZipArchive(other); }
class OpenXLSX::XLZipArchive& (OpenXLSX::XLZipArchive::*_118)(class OpenXLSX::XLZipArchive&&) = &OpenXLSX::XLZipArchive::operator=;
bool operator==(const class OpenXLSX::XLRow&, const class OpenXLSX::XLRow&);
bool (*_119)(const class OpenXLSX::XLRow&, const class OpenXLSX::XLRow&) = &OpenXLSX::operator==;
bool operator!=(const class OpenXLSX::XLRow&, const class OpenXLSX::XLRow&);
bool (*_120)(const class OpenXLSX::XLRow&, const class OpenXLSX::XLRow&) = &OpenXLSX::operator!=;
bool operator<(const class OpenXLSX::XLRow&, const class OpenXLSX::XLRow&);
bool (*_121)(const class OpenXLSX::XLRow&, const class OpenXLSX::XLRow&) = &OpenXLSX::operator<;
bool operator>(const class OpenXLSX::XLRow&, const class OpenXLSX::XLRow&);
bool (*_122)(const class OpenXLSX::XLRow&, const class OpenXLSX::XLRow&) = &OpenXLSX::operator>;
bool operator<=(const class OpenXLSX::XLRow&, const class OpenXLSX::XLRow&);
bool (*_123)(const class OpenXLSX::XLRow&, const class OpenXLSX::XLRow&) = &OpenXLSX::operator<=;
bool operator>=(const class OpenXLSX::XLRow&, const class OpenXLSX::XLRow&);
bool (*_124)(const class OpenXLSX::XLRow&, const class OpenXLSX::XLRow&) = &OpenXLSX::operator>=;
extern "C" __declspec(dllexport) void c__N_OpenXLSX_S_XLWorksheet_XLWorksheet(void* __instance) { ::new (__instance) OpenXLSX::XLWorksheet(); }
extern "C" __declspec(dllexport) void c__N_OpenXLSX_S_XLWorksheet__XLWorksheet(OpenXLSX::XLWorksheet*__instance) { __instance->~XLWorksheet(); }
extern "C" __declspec(dllexport) void c__N_OpenXLSX_S_XLChartsheet_XLChartsheet(void* __instance) { ::new (__instance) OpenXLSX::XLChartsheet(); }
class OpenXLSX::XLChartsheet& (OpenXLSX::XLChartsheet::*_125)(class OpenXLSX::XLChartsheet&&) = &OpenXLSX::XLChartsheet::operator=;
extern "C" __declspec(dllexport) void c__N_OpenXLSX_S_XLSheet_XLSheet___1__N_OpenXLSX_S_XLSheet(void* __instance, const OpenXLSX::XLSheet& other) { ::new (__instance) OpenXLSX::XLSheet(other); }
extern "C" __declspec(dllexport) void c__N_OpenXLSX_S_XLSheet__XLSheet(OpenXLSX::XLSheet*__instance) { __instance->~XLSheet(); }
class OpenXLSX::XLSheet& (OpenXLSX::XLSheet::*_126)(class OpenXLSX::XLSheet&&) = &OpenXLSX::XLSheet::operator=;
extern "C" __declspec(dllexport) void c__N_OpenXLSX_S_XLMergeCells_XLMergeCells(void* __instance) { ::new (__instance) OpenXLSX::XLMergeCells(); }
extern "C" __declspec(dllexport) void c__N_OpenXLSX_S_XLMergeCells_XLMergeCells___1__N_OpenXLSX_S_XLMergeCells(void* __instance, const OpenXLSX::XLMergeCells& other) { ::new (__instance) OpenXLSX::XLMergeCells(other); }
class OpenXLSX::XLMergeCells& (OpenXLSX::XLMergeCells::*_127)(class OpenXLSX::XLMergeCells&&) = &OpenXLSX::XLMergeCells::operator=;
bool (OpenXLSX::XLMergeCells::*_128)() const = &OpenXLSX::XLMergeCells::uninitialized;
const char* (OpenXLSX::XLMergeCells::*_129)(int) const = &OpenXLSX::XLMergeCells::operator[];
