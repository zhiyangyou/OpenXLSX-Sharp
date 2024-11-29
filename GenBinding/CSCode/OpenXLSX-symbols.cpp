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
extern "C" __declspec(dllexport) void c__N_OpenXLSX_S_XLXmlFile_XLXmlFile(void* __instance) { ::new (__instance) OpenXLSX::XLXmlFile(); }
extern "C" __declspec(dllexport) void c__N_OpenXLSX_S_XLUnsupportedElement_XLUnsupportedElement(void* __instance) { ::new (__instance) OpenXLSX::XLUnsupportedElement(); }
bool (OpenXLSX::XLUnsupportedElement::*_54)() = &OpenXLSX::XLUnsupportedElement::empty;
class OpenXLSX::XLUnsupportedElement& (OpenXLSX::XLUnsupportedElement::*_55)(class OpenXLSX::XLUnsupportedElement&&) = &OpenXLSX::XLUnsupportedElement::operator=;
class OpenXLSX::XLNumberFormat (OpenXLSX::XLNumberFormats::*_56)(unsigned long long) const = &OpenXLSX::XLNumberFormats::operator[];
class OpenXLSX::XLFont (OpenXLSX::XLFonts::*_57)(unsigned long long) const = &OpenXLSX::XLFonts::operator[];
bool (OpenXLSX::XLDataBarColor::*_58)(class OpenXLSX::XLColor) = &OpenXLSX::XLDataBarColor::set;
extern "C" __declspec(dllexport) void c__N_OpenXLSX_S_XLGradientStop__XLGradientStop(OpenXLSX::XLGradientStop*__instance) { __instance->~XLGradientStop(); }
class OpenXLSX::XLGradientStop (OpenXLSX::XLGradientStops::*_59)(unsigned long long) const = &OpenXLSX::XLGradientStops::operator[];
class OpenXLSX::XLFill (OpenXLSX::XLFills::*_60)(unsigned long long) const = &OpenXLSX::XLFills::operator[];
class OpenXLSX::XLBorder (OpenXLSX::XLBorders::*_61)(unsigned long long) const = &OpenXLSX::XLBorders::operator[];
class OpenXLSX::XLUnsupportedElement (OpenXLSX::XLCellFormat::*_62)() const = &OpenXLSX::XLCellFormat::extLst;
class OpenXLSX::XLCellFormat (OpenXLSX::XLCellFormats::*_63)(unsigned long long) const = &OpenXLSX::XLCellFormats::operator[];
class OpenXLSX::XLUnsupportedElement (OpenXLSX::XLCellStyle::*_64)() const = &OpenXLSX::XLCellStyle::extLst;
class OpenXLSX::XLCellStyle (OpenXLSX::XLCellStyles::*_65)(unsigned long long) const = &OpenXLSX::XLCellStyles::operator[];
bool operator==(const class OpenXLSX::XLColor&, const class OpenXLSX::XLColor&);
bool (*_66)(const class OpenXLSX::XLColor&, const class OpenXLSX::XLColor&) = &OpenXLSX::operator==;
bool operator!=(const class OpenXLSX::XLColor&, const class OpenXLSX::XLColor&);
bool (*_67)(const class OpenXLSX::XLColor&, const class OpenXLSX::XLColor&) = &OpenXLSX::operator!=;
bool (OpenXLSX::XLCellIterator::*_68)() const = &OpenXLSX::XLCellIterator::endReached;
extern "C" __declspec(dllexport) void c__N_OpenXLSX_S_IZipArchive_IZipArchive(void* __instance) { ::new (__instance) OpenXLSX::IZipArchive(); }
extern "C" __declspec(dllexport) void c__N_OpenXLSX_S_IZipArchive_IZipArchive___1__N_OpenXLSX_S_IZipArchive(void* __instance, const OpenXLSX::IZipArchive& other) { ::new (__instance) OpenXLSX::IZipArchive(other); }
extern "C" __declspec(dllexport) void c__N_OpenXLSX_S_IZipArchive__IZipArchive(OpenXLSX::IZipArchive*__instance) { __instance->~IZipArchive(); }
class OpenXLSX::IZipArchive& (OpenXLSX::IZipArchive::*_69)(class OpenXLSX::IZipArchive&&) = &OpenXLSX::IZipArchive::operator=;
bool (OpenXLSX::IZipArchive::*_70)() const = &OpenXLSX::IZipArchive::operator bool;
bool (OpenXLSX::IZipArchive::*_71)() const = &OpenXLSX::IZipArchive::isValid;
bool (OpenXLSX::IZipArchive::*_72)() const = &OpenXLSX::IZipArchive::isOpen;
void (OpenXLSX::IZipArchive::*_73)(const std::basic_string<char, std::char_traits<char>, std::allocator<char>>&) = &OpenXLSX::IZipArchive::open;
void (OpenXLSX::IZipArchive::*_74)() const = &OpenXLSX::IZipArchive::close;
void (OpenXLSX::IZipArchive::*_75)(const std::basic_string<char, std::char_traits<char>, std::allocator<char>>&) = &OpenXLSX::IZipArchive::save;
void (OpenXLSX::IZipArchive::*_76)(const std::basic_string<char, std::char_traits<char>, std::allocator<char>>&, const std::basic_string<char, std::char_traits<char>, std::allocator<char>>&) = &OpenXLSX::IZipArchive::addEntry;
void (OpenXLSX::IZipArchive::*_77)(const std::basic_string<char, std::char_traits<char>, std::allocator<char>>&) = &OpenXLSX::IZipArchive::deleteEntry;
std::basic_string<char, std::char_traits<char>, std::allocator<char>> (OpenXLSX::IZipArchive::*_78)(const std::basic_string<char, std::char_traits<char>, std::allocator<char>>&) = &OpenXLSX::IZipArchive::getEntry;
bool (OpenXLSX::IZipArchive::*_79)(const std::basic_string<char, std::char_traits<char>, std::allocator<char>>&) = &OpenXLSX::IZipArchive::hasEntry;
extern "C" __declspec(dllexport) void c__N_OpenXLSX_S_XLCommand_XLCommand___N_OpenXLSX_E_XLCommandType(void* __instance, OpenXLSX::XLCommandType type) { ::new (__instance) OpenXLSX::XLCommand(type); }
OpenXLSX::XLCommandType (OpenXLSX::XLCommand::*_80)() const = &OpenXLSX::XLCommand::type;
extern "C" __declspec(dllexport) void c__N_OpenXLSX_S_XLCommand_XLCommand___1__N_OpenXLSX_S_XLCommand(void* __instance, const OpenXLSX::XLCommand& _0) { ::new (__instance) OpenXLSX::XLCommand(_0); }
class OpenXLSX::XLCommand& (OpenXLSX::XLCommand::*_81)(class OpenXLSX::XLCommand&&) = &OpenXLSX::XLCommand::operator=;
extern "C" __declspec(dllexport) void c__N_OpenXLSX_S_XLCommand__XLCommand(OpenXLSX::XLCommand*__instance) { __instance->~XLCommand(); }
extern "C" __declspec(dllexport) void c__N_OpenXLSX_S_XLQuery_XLQuery___N_OpenXLSX_E_XLQueryType(void* __instance, OpenXLSX::XLQueryType type) { ::new (__instance) OpenXLSX::XLQuery(type); }
OpenXLSX::XLQueryType (OpenXLSX::XLQuery::*_82)() const = &OpenXLSX::XLQuery::type;
extern "C" __declspec(dllexport) void c__N_OpenXLSX_S_XLQuery_XLQuery___1__N_OpenXLSX_S_XLQuery(void* __instance, const OpenXLSX::XLQuery& _0) { ::new (__instance) OpenXLSX::XLQuery(_0); }
class OpenXLSX::XLQuery& (OpenXLSX::XLQuery::*_83)(class OpenXLSX::XLQuery&&) = &OpenXLSX::XLQuery::operator=;
extern "C" __declspec(dllexport) void c__N_OpenXLSX_S_XLQuery__XLQuery(OpenXLSX::XLQuery*__instance) { __instance->~XLQuery(); }
extern "C" __declspec(dllexport) void c__N_OpenXLSX_S_XLProperties_XLProperties(void* __instance) { ::new (__instance) OpenXLSX::XLProperties(); }
extern "C" __declspec(dllexport) void c__N_OpenXLSX_S_XLAppProperties_XLAppProperties(void* __instance) { ::new (__instance) OpenXLSX::XLAppProperties(); }
extern "C" __declspec(dllexport) void c__N_OpenXLSX_S_XLWorkbook_XLWorkbook(void* __instance) { ::new (__instance) OpenXLSX::XLWorkbook(); }
extern "C" __declspec(dllexport) void c__N_OpenXLSX_S_XLXmlSavingDeclaration_XLXmlSavingDeclaration(void* __instance) { ::new (__instance) OpenXLSX::XLXmlSavingDeclaration(); }
extern "C" __declspec(dllexport) void c__N_OpenXLSX_S_XLXmlSavingDeclaration_XLXmlSavingDeclaration___N_std_S_basic_string__C___N_std_S_char_traits__C___N_std_S_allocator__C_S0__b(void* __instance, std::basic_string<char, std::char_traits<char>, std::allocator<char>> version, std::basic_string<char, std::char_traits<char>, std::allocator<char>> encoding, bool standalone) { ::new (__instance) OpenXLSX::XLXmlSavingDeclaration(version, encoding, standalone); }
extern "C" __declspec(dllexport) void c__N_OpenXLSX_S_XLXmlSavingDeclaration__XLXmlSavingDeclaration(OpenXLSX::XLXmlSavingDeclaration*__instance) { __instance->~XLXmlSavingDeclaration(); }
const std::basic_string<char, std::char_traits<char>, std::allocator<char>>& (OpenXLSX::XLXmlSavingDeclaration::*_84)() const = &OpenXLSX::XLXmlSavingDeclaration::version;
const std::basic_string<char, std::char_traits<char>, std::allocator<char>>& (OpenXLSX::XLXmlSavingDeclaration::*_85)() const = &OpenXLSX::XLXmlSavingDeclaration::encoding;
bool (OpenXLSX::XLXmlSavingDeclaration::*_86)() const = &OpenXLSX::XLXmlSavingDeclaration::standalone_as_bool;
const std::basic_string<char, std::char_traits<char>, std::allocator<char>> (OpenXLSX::XLXmlSavingDeclaration::*_87)() const = &OpenXLSX::XLXmlSavingDeclaration::standalone;
class OpenXLSX::XLXmlSavingDeclaration& (OpenXLSX::XLXmlSavingDeclaration::*_88)(const class OpenXLSX::XLXmlSavingDeclaration&) = &OpenXLSX::XLXmlSavingDeclaration::operator=;
bool operator==(const class OpenXLSX::XLRow&, const class OpenXLSX::XLRow&);
bool (*_89)(const class OpenXLSX::XLRow&, const class OpenXLSX::XLRow&) = &OpenXLSX::operator==;
bool operator!=(const class OpenXLSX::XLRow&, const class OpenXLSX::XLRow&);
bool (*_90)(const class OpenXLSX::XLRow&, const class OpenXLSX::XLRow&) = &OpenXLSX::operator!=;
bool operator<(const class OpenXLSX::XLRow&, const class OpenXLSX::XLRow&);
bool (*_91)(const class OpenXLSX::XLRow&, const class OpenXLSX::XLRow&) = &OpenXLSX::operator<;
bool operator>(const class OpenXLSX::XLRow&, const class OpenXLSX::XLRow&);
bool (*_92)(const class OpenXLSX::XLRow&, const class OpenXLSX::XLRow&) = &OpenXLSX::operator>;
bool operator<=(const class OpenXLSX::XLRow&, const class OpenXLSX::XLRow&);
bool (*_93)(const class OpenXLSX::XLRow&, const class OpenXLSX::XLRow&) = &OpenXLSX::operator<=;
bool operator>=(const class OpenXLSX::XLRow&, const class OpenXLSX::XLRow&);
bool (*_94)(const class OpenXLSX::XLRow&, const class OpenXLSX::XLRow&) = &OpenXLSX::operator>=;
extern "C" __declspec(dllexport) void c__N_OpenXLSX_S_XLWorksheet_XLWorksheet(void* __instance) { ::new (__instance) OpenXLSX::XLWorksheet(); }
extern "C" __declspec(dllexport) void c__N_OpenXLSX_S_XLChartsheet_XLChartsheet(void* __instance) { ::new (__instance) OpenXLSX::XLChartsheet(); }
extern "C" __declspec(dllexport) void c__N_OpenXLSX_S_XLMergeCells_XLMergeCells(void* __instance) { ::new (__instance) OpenXLSX::XLMergeCells(); }
extern "C" __declspec(dllexport) void c__N_OpenXLSX_S_XLMergeCells_XLMergeCells___1__N_OpenXLSX_S_XLMergeCells(void* __instance, const OpenXLSX::XLMergeCells& other) { ::new (__instance) OpenXLSX::XLMergeCells(other); }
class OpenXLSX::XLMergeCells& (OpenXLSX::XLMergeCells::*_95)(class OpenXLSX::XLMergeCells&&) = &OpenXLSX::XLMergeCells::operator=;
bool (OpenXLSX::XLMergeCells::*_96)() const = &OpenXLSX::XLMergeCells::uninitialized;
const char* (OpenXLSX::XLMergeCells::*_97)(int) const = &OpenXLSX::XLMergeCells::operator[];
struct SStrPosInfo& (SStrPosInfo::*_98)(struct SStrPosInfo&&) = &SStrPosInfo::operator=;
