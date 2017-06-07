#include "stdsimheader.h"

using namespace maxcompilersim;

namespace maxcompilersim {
// Templated Types used in the kernel
template class HWRawBits<64>;
template class HWOffsetFix<1,0,UNSIGNED>;
template class HWOffsetFix<48,0,UNSIGNED>;
template class HWOffsetFix<49,0,UNSIGNED>;
template class HWRawBits<768>;
template class HWOffsetFix<64,0,UNSIGNED>;
// add. templates from the default formatter 


// Templated Methods/Functions
template HWOffsetFix<1,0,UNSIGNED>and_fixed<>(const HWOffsetFix<1,0,UNSIGNED> &a, const HWOffsetFix<1,0,UNSIGNED> &b );
template HWRawBits<64> slice<512,64>(const HWRawBits<768> &a);
template HWOffsetFix<49,0,UNSIGNED>add_fixed <49,0,UNSIGNED,TRUNCATE,49,0,UNSIGNED,49,0,UNSIGNED, false>(const HWOffsetFix<49,0,UNSIGNED> &a, const HWOffsetFix<49,0,UNSIGNED> &b , EXCEPTOVERFLOW);
template HWRawBits<64> slice<320,64>(const HWRawBits<768> &a);
template HWOffsetFix<64,0,UNSIGNED> cast_bits2fixed<64,0,UNSIGNED>(const HWRawBits<64> &a);
template HWOffsetFix<1,0,UNSIGNED>gte_fixed<>(const HWOffsetFix<49,0,UNSIGNED> &a, const HWOffsetFix<49,0,UNSIGNED> &b );
template HWRawBits<64> slice<640,64>(const HWRawBits<768> &a);
template HWRawBits<64> slice<0,64>(const HWRawBits<768> &a);
template HWOffsetFix<1,0,UNSIGNED>eq_fixed<>(const HWOffsetFix<48,0,UNSIGNED> &a, const HWOffsetFix<48,0,UNSIGNED> &b );
template HWRawBits<64> slice<384,64>(const HWRawBits<768> &a);
template HWOffsetFix<1,0,UNSIGNED> KernelManagerBlockSync::getMappedRegValue< HWOffsetFix<1,0,UNSIGNED> >(const std::string &name);
template HWRawBits<768> KernelManagerBlockSync::readInput< HWRawBits<768> >(const t_port_number port_number);
template HWRawBits<64> slice<704,64>(const HWRawBits<768> &a);
template HWOffsetFix<48,0,UNSIGNED> cast_fixed2fixed<48,0,UNSIGNED,TRUNCATE>(const HWOffsetFix<49,0,UNSIGNED> &a);
template HWRawBits<64> slice<448,64>(const HWRawBits<768> &a);
template HWOffsetFix<48,0,UNSIGNED> KernelManagerBlockSync::getMappedRegValue< HWOffsetFix<48,0,UNSIGNED> >(const std::string &name);
template HWRawBits<64> slice<128,64>(const HWRawBits<768> &a);
template void KernelManagerBlockSync::writeOutput< HWOffsetFix<64,0,UNSIGNED> >(const t_port_number port_number, const HWOffsetFix<64,0,UNSIGNED> &value);
template HWRawBits<64> slice<192,64>(const HWRawBits<768> &a);
template HWRawBits<64> slice<576,64>(const HWRawBits<768> &a);
template HWRawBits<64> slice<256,64>(const HWRawBits<768> &a);
template HWOffsetFix<1,0,UNSIGNED>not_fixed<>(const HWOffsetFix<1,0,UNSIGNED> &a );
template HWRawBits<64> slice<64,64>(const HWRawBits<768> &a);
template void KernelManagerBlockSync::setMappedRegValue< HWOffsetFix<48,0,UNSIGNED> >(const std::string &name, const HWOffsetFix<48,0,UNSIGNED> & value);


// Additional Code

} // End of maxcompilersim namespace
