#include "stdsimheader.h"

using namespace maxcompilersim;

namespace maxcompilersim {
// Templated Types used in the kernel
template class HWOffsetFix<32,0,TWOSCOMPLEMENT>;
template class HWRawBits<1>;
template class HWOffsetFix<68,0,UNSIGNED>;
template class HWOffsetFix<64,3,UNSIGNED>;
template class HWOffsetFix<11,0,UNSIGNED>;
template class HWOffsetFix<48,0,UNSIGNED>;
template class HWOffsetFix<49,0,UNSIGNED>;
template class HWOffsetFix<64,2,UNSIGNED>;
template class HWOffsetFix<64,-2,UNSIGNED>;
template class HWOffsetFix<69,0,UNSIGNED>;
template class HWOffsetFix<64,4,UNSIGNED>;
template class HWOffsetFix<2,0,UNSIGNED>;
template class HWRawBits<64>;
template class HWOffsetFix<1,0,UNSIGNED>;
template class HWRawBits<2>;
template class HWOffsetFix<64,-1,UNSIGNED>;
template class HWOffsetFix<64,0,UNSIGNED>;
// add. templates from the default formatter 


// Templated Methods/Functions
template HWOffsetFix<1,0,UNSIGNED>and_fixed<>(const HWOffsetFix<1,0,UNSIGNED> &a, const HWOffsetFix<1,0,UNSIGNED> &b );
template HWOffsetFix<64,3,UNSIGNED> cast_bits2fixed<64,3,UNSIGNED>(const HWRawBits<64> &a);
template HWOffsetFix<1,0,UNSIGNED>eq_fixed<>(const HWOffsetFix<64,0,UNSIGNED> &a, const HWOffsetFix<64,0,UNSIGNED> &b );
template void KernelManagerBlockSync::writeOutput< HWOffsetFix<1,0,UNSIGNED> >(const t_port_number port_number, const HWOffsetFix<1,0,UNSIGNED> &value);
template HWOffsetFix<1,0,UNSIGNED>eq_fixed<>(const HWOffsetFix<48,0,UNSIGNED> &a, const HWOffsetFix<48,0,UNSIGNED> &b );
template HWOffsetFix<64,2,UNSIGNED> cast_bits2fixed<64,2,UNSIGNED>(const HWRawBits<64> &a);
template HWOffsetFix<64,4,UNSIGNED> cast_bits2fixed<64,4,UNSIGNED>(const HWRawBits<64> &a);
template HWOffsetFix<68,0,UNSIGNED>add_fixed <68,0,UNSIGNED,TRUNCATE,64,0,UNSIGNED,64,3,UNSIGNED, false>(const HWOffsetFix<64,0,UNSIGNED> &a, const HWOffsetFix<64,3,UNSIGNED> &b , EXCEPTOVERFLOW);
template HWRawBits<2> slice<0,2>(const HWRawBits<64> &a);
template HWRawBits<64>shift_right_fixed<>(const HWOffsetFix<64,0,UNSIGNED> &a, long shift_by );
template HWOffsetFix<11,0,UNSIGNED> cast_fixed2fixed<11,0,UNSIGNED,TRUNCATE>(const HWOffsetFix<64,0,UNSIGNED> &a);
template HWOffsetFix<1,0,UNSIGNED>eq_fixed<>(const HWOffsetFix<32,0,TWOSCOMPLEMENT> &a, const HWOffsetFix<32,0,TWOSCOMPLEMENT> &b );
template void KernelManagerBlockSync::writeOutput< HWOffsetFix<32,0,TWOSCOMPLEMENT> >(const t_port_number port_number, const HWOffsetFix<32,0,TWOSCOMPLEMENT> &value);
template HWOffsetFix<64,-1,UNSIGNED> cast_bits2fixed<64,-1,UNSIGNED>(const HWRawBits<64> &a);
template HWRawBits<1> slice<0,1>(const HWRawBits<64> &a);
template HWOffsetFix<48,0,UNSIGNED> cast_fixed2fixed<48,0,UNSIGNED,TRUNCATE>(const HWOffsetFix<49,0,UNSIGNED> &a);
template HWOffsetFix<64,0,UNSIGNED> cast_fixed2fixed<64,0,UNSIGNED,TRUNCATE>(const HWOffsetFix<69,0,UNSIGNED> &a);
template HWOffsetFix<1,0,UNSIGNED> cast_fixed2fixed<1,0,UNSIGNED,TRUNCATE>(const HWOffsetFix<64,0,UNSIGNED> &a);
template HWOffsetFix<64,-2,UNSIGNED> cast_bits2fixed<64,-2,UNSIGNED>(const HWRawBits<64> &a);
template HWOffsetFix<1,0,UNSIGNED>not_fixed<>(const HWOffsetFix<1,0,UNSIGNED> &a );
template HWRawBits<64> cast_fixed2bits<>(const HWOffsetFix<64,0,UNSIGNED> &a);
template HWOffsetFix<64,0,UNSIGNED> cast_fixed2fixed<64,0,UNSIGNED,TRUNCATE>(const HWOffsetFix<1,0,UNSIGNED> &a);
template HWOffsetFix<49,0,UNSIGNED>add_fixed <49,0,UNSIGNED,TRUNCATE,49,0,UNSIGNED,49,0,UNSIGNED, false>(const HWOffsetFix<49,0,UNSIGNED> &a, const HWOffsetFix<49,0,UNSIGNED> &b , EXCEPTOVERFLOW);
template HWOffsetFix<64,0,UNSIGNED> cast_bits2fixed<64,0,UNSIGNED>(const HWRawBits<64> &a);
template HWOffsetFix<1,0,UNSIGNED> cast_bits2fixed<1,0,UNSIGNED>(const HWRawBits<1> &a);
template HWOffsetFix<64,0,UNSIGNED>add_fixed <64,0,UNSIGNED,TRUNCATE,64,0,UNSIGNED,64,0,UNSIGNED, false>(const HWOffsetFix<64,0,UNSIGNED> &a, const HWOffsetFix<64,0,UNSIGNED> &b , EXCEPTOVERFLOW);
template HWOffsetFix<1,0,UNSIGNED>gte_fixed<>(const HWOffsetFix<49,0,UNSIGNED> &a, const HWOffsetFix<49,0,UNSIGNED> &b );
template HWOffsetFix<64,0,UNSIGNED>or_fixed<>(const HWOffsetFix<64,0,UNSIGNED> &a, const HWOffsetFix<64,0,UNSIGNED> &b );
template HWOffsetFix<64,0,UNSIGNED>and_fixed<>(const HWOffsetFix<64,0,UNSIGNED> &a, const HWOffsetFix<64,0,UNSIGNED> &b );
template HWOffsetFix<1,0,UNSIGNED> KernelManagerBlockSync::getMappedRegValue< HWOffsetFix<1,0,UNSIGNED> >(const std::string &name);
template HWOffsetFix<64,0,UNSIGNED> cast_fixed2fixed<64,0,UNSIGNED,TRUNCATE>(const HWOffsetFix<64,2,UNSIGNED> &a);
template HWOffsetFix<64,0,UNSIGNED> KernelManagerBlockSync::readInput< HWOffsetFix<64,0,UNSIGNED> >(const t_port_number port_number);
template HWOffsetFix<64,0,UNSIGNED> cast_fixed2fixed<64,0,UNSIGNED,TRUNCATE>(const HWOffsetFix<64,-1,UNSIGNED> &a);
template HWOffsetFix<48,0,UNSIGNED> KernelManagerBlockSync::getMappedRegValue< HWOffsetFix<48,0,UNSIGNED> >(const std::string &name);
template HWOffsetFix<64,0,UNSIGNED>sub_fixed <64,0,UNSIGNED,TRUNCATE,64,0,UNSIGNED,64,0,UNSIGNED, false>(const HWOffsetFix<64,0,UNSIGNED> &a, const HWOffsetFix<64,0,UNSIGNED> &b , EXCEPTOVERFLOW);
template HWRawBits<64>shift_left_fixed<>(const HWOffsetFix<64,0,UNSIGNED> &a, long shift_by );
template HWOffsetFix<2,0,UNSIGNED> cast_bits2fixed<2,0,UNSIGNED>(const HWRawBits<2> &a);
template HWOffsetFix<69,0,UNSIGNED>add_fixed <69,0,UNSIGNED,TRUNCATE,68,0,UNSIGNED,64,4,UNSIGNED, false>(const HWOffsetFix<68,0,UNSIGNED> &a, const HWOffsetFix<64,4,UNSIGNED> &b , EXCEPTOVERFLOW);
template void KernelManagerBlockSync::writeOutput< HWOffsetFix<64,0,UNSIGNED> >(const t_port_number port_number, const HWOffsetFix<64,0,UNSIGNED> &value);
template HWOffsetFix<64,0,UNSIGNED> cast_fixed2fixed<64,0,UNSIGNED,TRUNCATE>(const HWOffsetFix<2,0,UNSIGNED> &a);
template HWOffsetFix<32,0,TWOSCOMPLEMENT> KernelManagerBlockSync::getMappedRegValue< HWOffsetFix<32,0,TWOSCOMPLEMENT> >(const std::string &name);
template HWOffsetFix<64,0,UNSIGNED> cast_fixed2fixed<64,0,UNSIGNED,TRUNCATE>(const HWOffsetFix<64,-2,UNSIGNED> &a);
template void KernelManagerBlockSync::setMappedRegValue< HWOffsetFix<48,0,UNSIGNED> >(const std::string &name, const HWOffsetFix<48,0,UNSIGNED> & value);


// Additional Code
std::string prf_v2_Kernel::format_string_prf_v2_Kernel_1 (const char* _format_arg_format_string)
{return ( bfmt(_format_arg_format_string)).str();}
std::string prf_v2_Kernel::format_string_prf_v2_Kernel_2 (const char* _format_arg_format_string)
{return ( bfmt(_format_arg_format_string)).str();}
std::string prf_v2_Kernel::format_string_prf_v2_Kernel_3 (const char* _format_arg_format_string)
{return ( bfmt(_format_arg_format_string)).str();}
std::string prf_v2_Kernel::format_string_prf_v2_Kernel_4 (const char* _format_arg_format_string)
{return ( bfmt(_format_arg_format_string)).str();}
std::string prf_v2_Kernel::format_string_prf_v2_Kernel_5 (const char* _format_arg_format_string)
{return ( bfmt(_format_arg_format_string)).str();}
std::string prf_v2_Kernel::format_string_prf_v2_Kernel_6 (const char* _format_arg_format_string)
{return ( bfmt(_format_arg_format_string)).str();}
std::string prf_v2_Kernel::format_string_prf_v2_Kernel_7 (const char* _format_arg_format_string)
{return ( bfmt(_format_arg_format_string)).str();}
std::string prf_v2_Kernel::format_string_prf_v2_Kernel_8 (const char* _format_arg_format_string)
{return ( bfmt(_format_arg_format_string)).str();}

} // End of maxcompilersim namespace
