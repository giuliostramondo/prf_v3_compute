#include "stdsimheader.h"

namespace maxcompilersim {

void prf_v2_Kernel::execute0() {
  { // Node ID: 2241 (NodeConstantRawBits)
  }
  { // Node ID: 12 (NodeInputMappedReg)
  }
  if ( (getFillLevel() >= (4l)) && (getFlushLevel() < (4l)|| !isFlushingActive() ))
  { // Node ID: 2242 (NodeOutput)
    const HWOffsetFix<1,0,UNSIGNED> &id2242in_output_control = id2241out_value;
    const HWOffsetFix<32,0,TWOSCOMPLEMENT> &id2242in_data = id12out_compute;

    bool id2242x_1;

    (id2242x_1) = ((id2242in_output_control.getValueAsBool())&(!(((getFlushLevel())>=(4l))&(isFlushingActive()))));
    if((id2242x_1)) {
      writeOutput(m_internal_watch_compute_b_output, id2242in_data);
    }
  }
  if ( (getFillLevel() >= (4l)) && (getFlushLevel() < (4l)|| !isFlushingActive() ))
  { // Node ID: 2243 (NodeOutput)
    const HWOffsetFix<1,0,UNSIGNED> &id2243in_output_control = id2241out_value;
    const HWOffsetFix<32,0,TWOSCOMPLEMENT> &id2243in_data = id12out_compute;

    bool id2243x_1;

    (id2243x_1) = ((id2243in_output_control.getValueAsBool())&(!(((getFlushLevel())>=(4l))&(isFlushingActive()))));
    if((id2243x_1)) {
      writeOutput(m_internal_watch_compute_bla_output, id2243in_data);
    }
  }
  { // Node ID: 2859 (NodeConstantRawBits)
  }
  HWOffsetFix<1,0,UNSIGNED> id1800out_result;

  { // Node ID: 1800 (NodeEqInlined)
    const HWOffsetFix<32,0,TWOSCOMPLEMENT> &id1800in_a = id12out_compute;
    const HWOffsetFix<32,0,TWOSCOMPLEMENT> &id1800in_b = id2859out_value;

    id1800out_result = (eq_fixed(id1800in_a,id1800in_b));
  }
  if ( (getFillLevel() >= (4l)) && (getFlushLevel() < (4l)|| !isFlushingActive() ))
  { // Node ID: 2244 (NodeOutput)
    const HWOffsetFix<1,0,UNSIGNED> &id2244in_output_control = id2241out_value;
    const HWOffsetFix<1,0,UNSIGNED> &id2244in_data = id1800out_result;

    bool id2244x_1;

    (id2244x_1) = ((id2244in_output_control.getValueAsBool())&(!(((getFlushLevel())>=(4l))&(isFlushingActive()))));
    if((id2244x_1)) {
      writeOutput(m_internal_watch_compute_eq_output, id2244in_data);
    }
  }
  if ( (getFillLevel() >= (4l)) && (getFlushLevel() < (4l)|| !isFlushingActive() ))
  { // Node ID: 13 (NodeWatch)
  }
  { // Node ID: 1741 (NodeInputMappedReg)
  }
  HWOffsetFix<1,0,UNSIGNED> id1742out_result;

  { // Node ID: 1742 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id1742in_a = id1741out_io_o_0_0_force_disabled;

    id1742out_result = (not_fixed(id1742in_a));
  }
  { // Node ID: 2858 (NodeConstantRawBits)
  }
  HWOffsetFix<1,0,UNSIGNED> id1801out_result;

  { // Node ID: 1801 (NodeEqInlined)
    const HWOffsetFix<32,0,TWOSCOMPLEMENT> &id1801in_a = id12out_compute;
    const HWOffsetFix<32,0,TWOSCOMPLEMENT> &id1801in_b = id2858out_value;

    id1801out_result = (eq_fixed(id1801in_a,id1801in_b));
  }
  { // Node ID: 6 (NodeInputMappedReg)
  }
  HWOffsetFix<1,0,UNSIGNED> id7out_result;

  { // Node ID: 7 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id7in_a = id6out_io_acc_type_force_disabled;

    id7out_result = (not_fixed(id7in_a));
  }
  if ( (getFillLevel() >= (5l)))
  { // Node ID: 8 (NodeInput)
    const HWOffsetFix<1,0,UNSIGNED> &id8in_enable = id7out_result;

    (id8st_read_next_cycle) = ((id8in_enable.getValueAsBool())&(!(((getFlushLevel())>=(5l))&(isFlushingActive()))));
    queueReadRequest(m_acc_type, id8st_read_next_cycle.getValueAsBool());
  }
  { // Node ID: 2857 (NodeConstantRawBits)
  }
  { // Node ID: 1802 (NodeEqInlined)
    const HWOffsetFix<64,0,UNSIGNED> &id1802in_a = id8out_data;
    const HWOffsetFix<64,0,UNSIGNED> &id1802in_b = id2857out_value;

    id1802out_result[(getCycle()+1)%2] = (eq_fixed(id1802in_a,id1802in_b));
  }
  { // Node ID: 2258 (NodeFIFO)
    const HWOffsetFix<1,0,UNSIGNED> &id2258in_input = id1802out_result[getCycle()%2];

    id2258out_output[(getCycle()+4)%5] = id2258in_input;
  }
  { // Node ID: 2856 (NodeConstantRawBits)
  }
  { // Node ID: 1803 (NodeEqInlined)
    const HWOffsetFix<64,0,UNSIGNED> &id1803in_a = id8out_data;
    const HWOffsetFix<64,0,UNSIGNED> &id1803in_b = id2856out_value;

    id1803out_result[(getCycle()+1)%2] = (eq_fixed(id1803in_a,id1803in_b));
  }
  { // Node ID: 2255 (NodeFIFO)
    const HWOffsetFix<1,0,UNSIGNED> &id2255in_input = id1803out_result[getCycle()%2];

    id2255out_output[(getCycle()+3)%4] = id2255in_input;
  }
  { // Node ID: 2855 (NodeConstantRawBits)
  }
  { // Node ID: 1804 (NodeEqInlined)
    const HWOffsetFix<64,0,UNSIGNED> &id1804in_a = id8out_data;
    const HWOffsetFix<64,0,UNSIGNED> &id1804in_b = id2855out_value;

    id1804out_result[(getCycle()+1)%2] = (eq_fixed(id1804in_a,id1804in_b));
  }
  { // Node ID: 2252 (NodeFIFO)
    const HWOffsetFix<1,0,UNSIGNED> &id2252in_input = id1804out_result[getCycle()%2];

    id2252out_output[(getCycle()+2)%3] = id2252in_input;
  }
  { // Node ID: 2854 (NodeConstantRawBits)
  }
  { // Node ID: 1805 (NodeEqInlined)
    const HWOffsetFix<64,0,UNSIGNED> &id1805in_a = id8out_data;
    const HWOffsetFix<64,0,UNSIGNED> &id1805in_b = id2854out_value;

    id1805out_result[(getCycle()+1)%2] = (eq_fixed(id1805in_a,id1805in_b));
  }
  { // Node ID: 2249 (NodeFIFO)
    const HWOffsetFix<1,0,UNSIGNED> &id2249in_input = id1805out_result[getCycle()%2];

    id2249out_output[(getCycle()+1)%2] = id2249in_input;
  }
  { // Node ID: 2853 (NodeConstantRawBits)
  }
  { // Node ID: 1806 (NodeEqInlined)
    const HWOffsetFix<64,0,UNSIGNED> &id1806in_a = id8out_data;
    const HWOffsetFix<64,0,UNSIGNED> &id1806in_b = id2853out_value;

    id1806out_result[(getCycle()+1)%2] = (eq_fixed(id1806in_a,id1806in_b));
  }
  { // Node ID: 0 (NodeInputMappedReg)
  }
  HWOffsetFix<1,0,UNSIGNED> id1out_result;

  { // Node ID: 1 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id1in_a = id0out_io_index_i_force_disabled;

    id1out_result = (not_fixed(id1in_a));
  }
  if ( (getFillLevel() >= (5l)))
  { // Node ID: 2 (NodeInput)
    const HWOffsetFix<1,0,UNSIGNED> &id2in_enable = id1out_result;

    (id2st_read_next_cycle) = ((id2in_enable.getValueAsBool())&(!(((getFlushLevel())>=(5l))&(isFlushingActive()))));
    queueReadRequest(m_index_i, id2st_read_next_cycle.getValueAsBool());
  }
  HWRawBits<64> id1808out_dataout;

  { // Node ID: 1808 (NodeShift)
    const HWOffsetFix<64,0,UNSIGNED> &id1808in_datain = id2out_data;

    id1808out_dataout = (shift_left_fixed(id1808in_datain,(16l)));
  }
  HWOffsetFix<64,0,UNSIGNED> id42out_output;

  { // Node ID: 42 (NodeReinterpret)
    const HWRawBits<64> &id42in_input = id1808out_dataout;

    id42out_output = (cast_bits2fixed<64,0,UNSIGNED>(id42in_input));
  }
  { // Node ID: 3 (NodeInputMappedReg)
  }
  HWOffsetFix<1,0,UNSIGNED> id4out_result;

  { // Node ID: 4 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id4in_a = id3out_io_index_j_force_disabled;

    id4out_result = (not_fixed(id4in_a));
  }
  if ( (getFillLevel() >= (4l)))
  { // Node ID: 5 (NodeInput)
    const HWOffsetFix<1,0,UNSIGNED> &id5in_enable = id4out_result;

    (id5st_read_next_cycle) = ((id5in_enable.getValueAsBool())&(!(((getFlushLevel())>=(4l))&(isFlushingActive()))));
    queueReadRequest(m_index_j, id5st_read_next_cycle.getValueAsBool());
  }
  { // Node ID: 2245 (NodeFIFO)
    const HWOffsetFix<64,0,UNSIGNED> &id2245in_input = id5out_data;

    id2245out_output[(getCycle()+1)%2] = id2245in_input;
  }
  { // Node ID: 45 (NodeOr)
    const HWOffsetFix<64,0,UNSIGNED> &id45in_a = id42out_output;
    const HWOffsetFix<64,0,UNSIGNED> &id45in_b = id2245out_output[getCycle()%2];

    HWOffsetFix<64,0,UNSIGNED> id45x_1;

    (id45x_1) = (or_fixed(id45in_a,id45in_b));
    id45out_result[(getCycle()+1)%2] = (id45x_1);
  }
  HWRawBits<64> id1809out_dataout;

  { // Node ID: 1809 (NodeShift)
    const HWOffsetFix<64,0,UNSIGNED> &id1809in_datain = id2out_data;

    id1809out_dataout = (shift_left_fixed(id1809in_datain,(16l)));
  }
  HWOffsetFix<64,0,UNSIGNED> id49out_output;

  { // Node ID: 49 (NodeReinterpret)
    const HWRawBits<64> &id49in_input = id1809out_dataout;

    id49out_output = (cast_bits2fixed<64,0,UNSIGNED>(id49in_input));
  }
  { // Node ID: 54 (NodeOr)
    const HWOffsetFix<64,0,UNSIGNED> &id54in_a = id49out_output;
    const HWOffsetFix<64,0,UNSIGNED> &id54in_b = id2245out_output[getCycle()%2];

    HWOffsetFix<64,0,UNSIGNED> id54x_1;

    (id54x_1) = (or_fixed(id54in_a,id54in_b));
    id54out_result[(getCycle()+1)%2] = (id54x_1);
  }
  { // Node ID: 530 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id530in_sel = id1806out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id530in_option0 = id45out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id530in_option1 = id54out_result[getCycle()%2];

    HWOffsetFix<64,0,UNSIGNED> id530x_1;

    switch((id530in_sel.getValueAsLong())) {
      case 0l:
        id530x_1 = id530in_option0;
        break;
      case 1l:
        id530x_1 = id530in_option1;
        break;
      default:
        id530x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id530out_result[(getCycle()+1)%2] = (id530x_1);
  }
  { // Node ID: 2247 (NodeFIFO)
    const HWOffsetFix<64,0,UNSIGNED> &id2247in_input = id2out_data;

    id2247out_output[(getCycle()+1)%2] = id2247in_input;
  }
  HWRawBits<64> id1810out_dataout;

  { // Node ID: 1810 (NodeShift)
    const HWOffsetFix<64,0,UNSIGNED> &id1810in_datain = id2247out_output[getCycle()%2];

    id1810out_dataout = (shift_left_fixed(id1810in_datain,(16l)));
  }
  HWOffsetFix<64,0,UNSIGNED> id62out_output;

  { // Node ID: 62 (NodeReinterpret)
    const HWRawBits<64> &id62in_input = id1810out_dataout;

    id62out_output = (cast_bits2fixed<64,0,UNSIGNED>(id62in_input));
  }
  { // Node ID: 2595 (NodeFIFO)
    const HWOffsetFix<64,0,UNSIGNED> &id2595in_input = id2245out_output[getCycle()%2];

    id2595out_output[(getCycle()+1)%2] = id2595in_input;
  }
  { // Node ID: 63 (NodeOr)
    const HWOffsetFix<64,0,UNSIGNED> &id63in_a = id62out_output;
    const HWOffsetFix<64,0,UNSIGNED> &id63in_b = id2595out_output[getCycle()%2];

    HWOffsetFix<64,0,UNSIGNED> id63x_1;

    (id63x_1) = (or_fixed(id63in_a,id63in_b));
    id63out_result[(getCycle()+1)%2] = (id63x_1);
  }
  { // Node ID: 540 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id540in_sel = id2249out_output[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id540in_option0 = id530out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id540in_option1 = id63out_result[getCycle()%2];

    HWOffsetFix<64,0,UNSIGNED> id540x_1;

    switch((id540in_sel.getValueAsLong())) {
      case 0l:
        id540x_1 = id540in_option0;
        break;
      case 1l:
        id540x_1 = id540in_option1;
        break;
      default:
        id540x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id540out_result[(getCycle()+1)%2] = (id540x_1);
  }
  { // Node ID: 2592 (NodeFIFO)
    const HWOffsetFix<64,0,UNSIGNED> &id2592in_input = id2247out_output[getCycle()%2];

    id2592out_output[(getCycle()+1)%2] = id2592in_input;
  }
  HWRawBits<64> id1811out_dataout;

  { // Node ID: 1811 (NodeShift)
    const HWOffsetFix<64,0,UNSIGNED> &id1811in_datain = id2592out_output[getCycle()%2];

    id1811out_dataout = (shift_left_fixed(id1811in_datain,(16l)));
  }
  HWOffsetFix<64,0,UNSIGNED> id71out_output;

  { // Node ID: 71 (NodeReinterpret)
    const HWRawBits<64> &id71in_input = id1811out_dataout;

    id71out_output = (cast_bits2fixed<64,0,UNSIGNED>(id71in_input));
  }
  { // Node ID: 2596 (NodeFIFO)
    const HWOffsetFix<64,0,UNSIGNED> &id2596in_input = id2595out_output[getCycle()%2];

    id2596out_output[(getCycle()+1)%2] = id2596in_input;
  }
  { // Node ID: 76 (NodeOr)
    const HWOffsetFix<64,0,UNSIGNED> &id76in_a = id71out_output;
    const HWOffsetFix<64,0,UNSIGNED> &id76in_b = id2596out_output[getCycle()%2];

    HWOffsetFix<64,0,UNSIGNED> id76x_1;

    (id76x_1) = (or_fixed(id76in_a,id76in_b));
    id76out_result[(getCycle()+1)%2] = (id76x_1);
  }
  { // Node ID: 550 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id550in_sel = id2252out_output[getCycle()%3];
    const HWOffsetFix<64,0,UNSIGNED> &id550in_option0 = id540out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id550in_option1 = id76out_result[getCycle()%2];

    HWOffsetFix<64,0,UNSIGNED> id550x_1;

    switch((id550in_sel.getValueAsLong())) {
      case 0l:
        id550x_1 = id550in_option0;
        break;
      case 1l:
        id550x_1 = id550in_option1;
        break;
      default:
        id550x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id550out_result[(getCycle()+1)%2] = (id550x_1);
  }
  { // Node ID: 2593 (NodeFIFO)
    const HWOffsetFix<64,0,UNSIGNED> &id2593in_input = id2592out_output[getCycle()%2];

    id2593out_output[(getCycle()+1)%2] = id2593in_input;
  }
  HWRawBits<64> id1812out_dataout;

  { // Node ID: 1812 (NodeShift)
    const HWOffsetFix<64,0,UNSIGNED> &id1812in_datain = id2593out_output[getCycle()%2];

    id1812out_dataout = (shift_left_fixed(id1812in_datain,(16l)));
  }
  HWOffsetFix<64,0,UNSIGNED> id84out_output;

  { // Node ID: 84 (NodeReinterpret)
    const HWRawBits<64> &id84in_input = id1812out_dataout;

    id84out_output = (cast_bits2fixed<64,0,UNSIGNED>(id84in_input));
  }
  { // Node ID: 2597 (NodeFIFO)
    const HWOffsetFix<64,0,UNSIGNED> &id2597in_input = id2596out_output[getCycle()%2];

    id2597out_output[(getCycle()+1)%2] = id2597in_input;
  }
  { // Node ID: 87 (NodeOr)
    const HWOffsetFix<64,0,UNSIGNED> &id87in_a = id84out_output;
    const HWOffsetFix<64,0,UNSIGNED> &id87in_b = id2597out_output[getCycle()%2];

    HWOffsetFix<64,0,UNSIGNED> id87x_1;

    (id87x_1) = (or_fixed(id87in_a,id87in_b));
    id87out_result[(getCycle()+1)%2] = (id87x_1);
  }
  { // Node ID: 560 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id560in_sel = id2255out_output[getCycle()%4];
    const HWOffsetFix<64,0,UNSIGNED> &id560in_option0 = id550out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id560in_option1 = id87out_result[getCycle()%2];

    HWOffsetFix<64,0,UNSIGNED> id560x_1;

    switch((id560in_sel.getValueAsLong())) {
      case 0l:
        id560x_1 = id560in_option0;
        break;
      case 1l:
        id560x_1 = id560in_option1;
        break;
      default:
        id560x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id560out_result[(getCycle()+1)%2] = (id560x_1);
  }
  { // Node ID: 2594 (NodeFIFO)
    const HWOffsetFix<64,0,UNSIGNED> &id2594in_input = id2593out_output[getCycle()%2];

    id2594out_output[(getCycle()+1)%2] = id2594in_input;
  }
  HWRawBits<64> id1813out_dataout;

  { // Node ID: 1813 (NodeShift)
    const HWOffsetFix<64,0,UNSIGNED> &id1813in_datain = id2594out_output[getCycle()%2];

    id1813out_dataout = (shift_left_fixed(id1813in_datain,(16l)));
  }
  HWOffsetFix<64,0,UNSIGNED> id93out_output;

  { // Node ID: 93 (NodeReinterpret)
    const HWRawBits<64> &id93in_input = id1813out_dataout;

    id93out_output = (cast_bits2fixed<64,0,UNSIGNED>(id93in_input));
  }
  { // Node ID: 2598 (NodeFIFO)
    const HWOffsetFix<64,0,UNSIGNED> &id2598in_input = id2597out_output[getCycle()%2];

    id2598out_output[(getCycle()+1)%2] = id2598in_input;
  }
  { // Node ID: 96 (NodeOr)
    const HWOffsetFix<64,0,UNSIGNED> &id96in_a = id93out_output;
    const HWOffsetFix<64,0,UNSIGNED> &id96in_b = id2598out_output[getCycle()%2];

    HWOffsetFix<64,0,UNSIGNED> id96x_1;

    (id96x_1) = (or_fixed(id96in_a,id96in_b));
    id96out_result[(getCycle()+1)%2] = (id96x_1);
  }
  { // Node ID: 570 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id570in_sel = id2258out_output[getCycle()%5];
    const HWOffsetFix<64,0,UNSIGNED> &id570in_option0 = id560out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id570in_option1 = id96out_result[getCycle()%2];

    HWOffsetFix<64,0,UNSIGNED> id570x_1;

    switch((id570in_sel.getValueAsLong())) {
      case 0l:
        id570x_1 = id570in_option0;
        break;
      case 1l:
        id570x_1 = id570in_option1;
        break;
      default:
        id570x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id570out_result[(getCycle()+1)%2] = (id570x_1);
  }
  { // Node ID: 2401 (NodeFIFO)
    const HWOffsetFix<64,0,UNSIGNED> &id2401in_input = id570out_result[getCycle()%2];

    id2401out_output[(getCycle()+1)%2] = id2401in_input;
  }
  { // Node ID: 2600 (NodeFIFO)
    const HWOffsetFix<64,0,UNSIGNED> &id2600in_input = id2401out_output[getCycle()%2];

    id2600out_output[(getCycle()+1)%2] = id2600in_input;
  }
  HWRawBits<64> id1814out_dataout;

  { // Node ID: 1814 (NodeShift)
    const HWOffsetFix<64,0,UNSIGNED> &id1814in_datain = id2600out_output[getCycle()%2];

    id1814out_dataout = (shift_right_fixed(id1814in_datain,(16l)));
  }
  HWOffsetFix<64,0,UNSIGNED> id676out_output;

  { // Node ID: 676 (NodeReinterpret)
    const HWRawBits<64> &id676in_input = id1814out_dataout;

    id676out_output = (cast_bits2fixed<64,0,UNSIGNED>(id676in_input));
  }
  HWRawBits<64> id714out_output;

  { // Node ID: 714 (NodeReinterpret)
    const HWOffsetFix<64,0,UNSIGNED> &id714in_input = id676out_output;

    id714out_output = (cast_fixed2bits(id714in_input));
  }
  HWRawBits<1> id715out_result;

  { // Node ID: 715 (NodeSlice)
    const HWRawBits<64> &id715in_a = id714out_output;

    id715out_result = (slice<0,1>(id715in_a));
  }
  HWOffsetFix<1,0,UNSIGNED> id716out_output;

  { // Node ID: 716 (NodeReinterpret)
    const HWRawBits<1> &id716in_input = id715out_result;

    id716out_output = (cast_bits2fixed<1,0,UNSIGNED>(id716in_input));
  }
  HWOffsetFix<64,0,UNSIGNED> id717out_o;

  { // Node ID: 717 (NodeCast)
    const HWOffsetFix<1,0,UNSIGNED> &id717in_i = id716out_output;

    id717out_o = (cast_fixed2fixed<64,0,UNSIGNED,TRUNCATE>(id717in_i));
  }
  HWOffsetFix<64,2,UNSIGNED> id1815out_output;

  { // Node ID: 1815 (NodeReinterpret)
    const HWOffsetFix<64,0,UNSIGNED> &id1815in_input = id717out_o;

    id1815out_output = (cast_bits2fixed<64,2,UNSIGNED>((cast_fixed2bits(id1815in_input))));
  }
  HWOffsetFix<64,0,UNSIGNED> id1816out_o;

  { // Node ID: 1816 (NodeCast)
    const HWOffsetFix<64,2,UNSIGNED> &id1816in_i = id1815out_output;

    id1816out_o = (cast_fixed2fixed<64,0,UNSIGNED,TRUNCATE>(id1816in_i));
  }
  HWRawBits<64> id1817out_dataout;

  { // Node ID: 1817 (NodeShift)
    const HWOffsetFix<64,0,UNSIGNED> &id1817in_datain = id570out_result[getCycle()%2];

    id1817out_dataout = (shift_right_fixed(id1817in_datain,(16l)));
  }
  HWOffsetFix<64,0,UNSIGNED> id748out_output;

  { // Node ID: 748 (NodeReinterpret)
    const HWRawBits<64> &id748in_input = id1817out_dataout;

    id748out_output = (cast_bits2fixed<64,0,UNSIGNED>(id748in_input));
  }
  HWRawBits<64> id786out_output;

  { // Node ID: 786 (NodeReinterpret)
    const HWOffsetFix<64,0,UNSIGNED> &id786in_input = id748out_output;

    id786out_output = (cast_fixed2bits(id786in_input));
  }
  HWRawBits<1> id787out_result;

  { // Node ID: 787 (NodeSlice)
    const HWRawBits<64> &id787in_a = id786out_output;

    id787out_result = (slice<0,1>(id787in_a));
  }
  HWOffsetFix<1,0,UNSIGNED> id788out_output;

  { // Node ID: 788 (NodeReinterpret)
    const HWRawBits<1> &id788in_input = id787out_result;

    id788out_output = (cast_bits2fixed<1,0,UNSIGNED>(id788in_input));
  }
  HWOffsetFix<64,0,UNSIGNED> id789out_o;

  { // Node ID: 789 (NodeCast)
    const HWOffsetFix<1,0,UNSIGNED> &id789in_i = id788out_output;

    id789out_o = (cast_fixed2fixed<64,0,UNSIGNED,TRUNCATE>(id789in_i));
  }
  { // Node ID: 790 (NodeSub)
    const HWOffsetFix<64,0,UNSIGNED> &id790in_a = id748out_output;
    const HWOffsetFix<64,0,UNSIGNED> &id790in_b = id789out_o;

    id790out_result[(getCycle()+1)%2] = (sub_fixed<64,0,UNSIGNED,TRUNCATE>(id790in_a,id790in_b));
  }
  { // Node ID: 2852 (NodeConstantRawBits)
  }
  { // Node ID: 750 (NodeAnd)
    const HWOffsetFix<64,0,UNSIGNED> &id750in_a = id570out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id750in_b = id2852out_value;

    HWOffsetFix<64,0,UNSIGNED> id750x_1;

    (id750x_1) = (and_fixed(id750in_a,id750in_b));
    id750out_result[(getCycle()+1)%2] = (id750x_1);
  }
  { // Node ID: 791 (NodeAdd)
    const HWOffsetFix<64,0,UNSIGNED> &id791in_a = id790out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id791in_b = id750out_result[getCycle()%2];

    id791out_result[(getCycle()+1)%2] = (add_fixed<64,0,UNSIGNED,TRUNCATE>(id791in_a,id791in_b));
  }
  HWRawBits<64> id792out_output;

  { // Node ID: 792 (NodeReinterpret)
    const HWOffsetFix<64,0,UNSIGNED> &id792in_input = id791out_result[getCycle()%2];

    id792out_output = (cast_fixed2bits(id792in_input));
  }
  HWRawBits<2> id793out_result;

  { // Node ID: 793 (NodeSlice)
    const HWRawBits<64> &id793in_a = id792out_output;

    id793out_result = (slice<0,2>(id793in_a));
  }
  HWOffsetFix<2,0,UNSIGNED> id794out_output;

  { // Node ID: 794 (NodeReinterpret)
    const HWRawBits<2> &id794in_input = id793out_result;

    id794out_output = (cast_bits2fixed<2,0,UNSIGNED>(id794in_input));
  }
  HWOffsetFix<64,0,UNSIGNED> id795out_o;

  { // Node ID: 795 (NodeCast)
    const HWOffsetFix<2,0,UNSIGNED> &id795in_i = id794out_output;

    id795out_o = (cast_fixed2fixed<64,0,UNSIGNED,TRUNCATE>(id795in_i));
  }
  HWOffsetFix<64,0,UNSIGNED> id1398out_result;

  { // Node ID: 1398 (NodeAdd)
    const HWOffsetFix<64,0,UNSIGNED> &id1398in_a = id1816out_o;
    const HWOffsetFix<64,0,UNSIGNED> &id1398in_b = id795out_o;

    id1398out_result = (add_fixed<64,0,UNSIGNED,TRUNCATE>(id1398in_a,id1398in_b));
  }
  HWRawBits<64> id1818out_dataout;

  { // Node ID: 1818 (NodeShift)
    const HWOffsetFix<64,0,UNSIGNED> &id1818in_datain = id1398out_result;

    id1818out_dataout = (shift_right_fixed(id1818in_datain,(2l)));
  }
  HWOffsetFix<64,0,UNSIGNED> id1452out_output;

  { // Node ID: 1452 (NodeReinterpret)
    const HWRawBits<64> &id1452in_input = id1818out_dataout;

    id1452out_output = (cast_bits2fixed<64,0,UNSIGNED>(id1452in_input));
  }
  HWOffsetFix<1,0,UNSIGNED> id1453out_o;

  { // Node ID: 1453 (NodeCast)
    const HWOffsetFix<64,0,UNSIGNED> &id1453in_i = id1452out_output;

    id1453out_o = (cast_fixed2fixed<1,0,UNSIGNED,TRUNCATE>(id1453in_i));
  }
  { // Node ID: 2538 (NodeFIFO)
    const HWOffsetFix<1,0,UNSIGNED> &id2538in_input = id1453out_o;

    id2538out_output[(getCycle()+12)%13] = id2538in_input;
  }
  HWRawBits<64> id1819out_dataout;

  { // Node ID: 1819 (NodeShift)
    const HWOffsetFix<64,0,UNSIGNED> &id1819in_datain = id1398out_result;

    id1819out_dataout = (shift_right_fixed(id1819in_datain,(1l)));
  }
  HWOffsetFix<64,0,UNSIGNED> id1442out_output;

  { // Node ID: 1442 (NodeReinterpret)
    const HWRawBits<64> &id1442in_input = id1819out_dataout;

    id1442out_output = (cast_bits2fixed<64,0,UNSIGNED>(id1442in_input));
  }
  HWOffsetFix<1,0,UNSIGNED> id1443out_o;

  { // Node ID: 1443 (NodeCast)
    const HWOffsetFix<64,0,UNSIGNED> &id1443in_i = id1442out_output;

    id1443out_o = (cast_fixed2fixed<1,0,UNSIGNED,TRUNCATE>(id1443in_i));
  }
  { // Node ID: 2478 (NodeFIFO)
    const HWOffsetFix<1,0,UNSIGNED> &id2478in_input = id1443out_o;

    id2478out_output[(getCycle()+12)%13] = id2478in_input;
  }
  HWRawBits<64> id2208out_output;

  { // Node ID: 2208 (NodeReinterpret)
    const HWOffsetFix<64,0,UNSIGNED> &id2208in_input = id1398out_result;

    id2208out_output = (cast_fixed2bits(id2208in_input));
  }
  HWOffsetFix<64,0,UNSIGNED> id1422out_output;

  { // Node ID: 1422 (NodeReinterpret)
    const HWRawBits<64> &id1422in_input = id2208out_output;

    id1422out_output = (cast_bits2fixed<64,0,UNSIGNED>(id1422in_input));
  }
  HWOffsetFix<1,0,UNSIGNED> id1423out_o;

  { // Node ID: 1423 (NodeCast)
    const HWOffsetFix<64,0,UNSIGNED> &id1423in_i = id1422out_output;

    id1423out_o = (cast_fixed2fixed<1,0,UNSIGNED,TRUNCATE>(id1423in_i));
  }
  { // Node ID: 2448 (NodeFIFO)
    const HWOffsetFix<1,0,UNSIGNED> &id2448in_input = id1423out_o;

    id2448out_output[(getCycle()+12)%13] = id2448in_input;
  }
  { // Node ID: 2588 (NodeFIFO)
    const HWOffsetFix<1,0,UNSIGNED> &id2588in_input = id2258out_output[getCycle()%5];

    id2588out_output[(getCycle()+1)%2] = id2588in_input;
  }
  { // Node ID: 2589 (NodeFIFO)
    const HWOffsetFix<1,0,UNSIGNED> &id2589in_input = id2255out_output[getCycle()%4];

    id2589out_output[(getCycle()+1)%2] = id2589in_input;
  }
  { // Node ID: 2590 (NodeFIFO)
    const HWOffsetFix<1,0,UNSIGNED> &id2590in_input = id2252out_output[getCycle()%3];

    id2590out_output[(getCycle()+1)%2] = id2590in_input;
  }
  { // Node ID: 2591 (NodeFIFO)
    const HWOffsetFix<1,0,UNSIGNED> &id2591in_input = id2249out_output[getCycle()%2];

    id2591out_output[(getCycle()+1)%2] = id2591in_input;
  }
  { // Node ID: 2262 (NodeFIFO)
    const HWOffsetFix<1,0,UNSIGNED> &id2262in_input = id1806out_result[getCycle()%2];

    id2262out_output[(getCycle()+1)%2] = id2262in_input;
  }
  { // Node ID: 2851 (NodeConstantRawBits)
  }
  { // Node ID: 459 (NodeAdd)
    const HWOffsetFix<64,0,UNSIGNED> &id459in_a = id2out_data;
    const HWOffsetFix<64,0,UNSIGNED> &id459in_b = id2851out_value;

    id459out_result[(getCycle()+1)%2] = (add_fixed<64,0,UNSIGNED,TRUNCATE>(id459in_a,id459in_b));
  }
  HWRawBits<64> id1821out_dataout;

  { // Node ID: 1821 (NodeShift)
    const HWOffsetFix<64,0,UNSIGNED> &id1821in_datain = id459out_result[getCycle()%2];

    id1821out_dataout = (shift_left_fixed(id1821in_datain,(16l)));
  }
  HWOffsetFix<64,0,UNSIGNED> id462out_output;

  { // Node ID: 462 (NodeReinterpret)
    const HWRawBits<64> &id462in_input = id1821out_dataout;

    id462out_output = (cast_bits2fixed<64,0,UNSIGNED>(id462in_input));
  }
  { // Node ID: 2850 (NodeConstantRawBits)
  }
  { // Node ID: 464 (NodeAdd)
    const HWOffsetFix<64,0,UNSIGNED> &id464in_a = id2245out_output[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id464in_b = id2850out_value;

    id464out_result[(getCycle()+1)%2] = (add_fixed<64,0,UNSIGNED,TRUNCATE>(id464in_a,id464in_b));
  }
  { // Node ID: 465 (NodeOr)
    const HWOffsetFix<64,0,UNSIGNED> &id465in_a = id462out_output;
    const HWOffsetFix<64,0,UNSIGNED> &id465in_b = id464out_result[getCycle()%2];

    HWOffsetFix<64,0,UNSIGNED> id465x_1;

    (id465x_1) = (or_fixed(id465in_a,id465in_b));
    id465out_result[(getCycle()+1)%2] = (id465x_1);
  }
  HWRawBits<64> id1822out_dataout;

  { // Node ID: 1822 (NodeShift)
    const HWOffsetFix<64,0,UNSIGNED> &id1822in_datain = id2247out_output[getCycle()%2];

    id1822out_dataout = (shift_left_fixed(id1822in_datain,(16l)));
  }
  HWOffsetFix<64,0,UNSIGNED> id469out_output;

  { // Node ID: 469 (NodeReinterpret)
    const HWRawBits<64> &id469in_input = id1822out_dataout;

    id469out_output = (cast_bits2fixed<64,0,UNSIGNED>(id469in_input));
  }
  { // Node ID: 2849 (NodeConstantRawBits)
  }
  { // Node ID: 471 (NodeAdd)
    const HWOffsetFix<64,0,UNSIGNED> &id471in_a = id5out_data;
    const HWOffsetFix<64,0,UNSIGNED> &id471in_b = id2849out_value;

    id471out_result[(getCycle()+1)%2] = (add_fixed<64,0,UNSIGNED,TRUNCATE>(id471in_a,id471in_b));
  }
  { // Node ID: 2848 (NodeConstantRawBits)
  }
  { // Node ID: 473 (NodeAdd)
    const HWOffsetFix<64,0,UNSIGNED> &id473in_a = id471out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id473in_b = id2848out_value;

    id473out_result[(getCycle()+1)%2] = (add_fixed<64,0,UNSIGNED,TRUNCATE>(id473in_a,id473in_b));
  }
  { // Node ID: 474 (NodeOr)
    const HWOffsetFix<64,0,UNSIGNED> &id474in_a = id469out_output;
    const HWOffsetFix<64,0,UNSIGNED> &id474in_b = id473out_result[getCycle()%2];

    HWOffsetFix<64,0,UNSIGNED> id474x_1;

    (id474x_1) = (or_fixed(id474in_a,id474in_b));
    id474out_result[(getCycle()+1)%2] = (id474x_1);
  }
  { // Node ID: 537 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id537in_sel = id2262out_output[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id537in_option0 = id465out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id537in_option1 = id474out_result[getCycle()%2];

    HWOffsetFix<64,0,UNSIGNED> id537x_1;

    switch((id537in_sel.getValueAsLong())) {
      case 0l:
        id537x_1 = id537in_option0;
        break;
      case 1l:
        id537x_1 = id537in_option1;
        break;
      default:
        id537x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id537out_result[(getCycle()+1)%2] = (id537x_1);
  }
  { // Node ID: 2847 (NodeConstantRawBits)
  }
  { // Node ID: 477 (NodeAdd)
    const HWOffsetFix<64,0,UNSIGNED> &id477in_a = id2out_data;
    const HWOffsetFix<64,0,UNSIGNED> &id477in_b = id2847out_value;

    id477out_result[(getCycle()+1)%2] = (add_fixed<64,0,UNSIGNED,TRUNCATE>(id477in_a,id477in_b));
  }
  { // Node ID: 2846 (NodeConstantRawBits)
  }
  { // Node ID: 479 (NodeAdd)
    const HWOffsetFix<64,0,UNSIGNED> &id479in_a = id477out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id479in_b = id2846out_value;

    id479out_result[(getCycle()+1)%2] = (add_fixed<64,0,UNSIGNED,TRUNCATE>(id479in_a,id479in_b));
  }
  HWRawBits<64> id1823out_dataout;

  { // Node ID: 1823 (NodeShift)
    const HWOffsetFix<64,0,UNSIGNED> &id1823in_datain = id479out_result[getCycle()%2];

    id1823out_dataout = (shift_left_fixed(id1823in_datain,(16l)));
  }
  HWOffsetFix<64,0,UNSIGNED> id482out_output;

  { // Node ID: 482 (NodeReinterpret)
    const HWRawBits<64> &id482in_input = id1823out_dataout;

    id482out_output = (cast_bits2fixed<64,0,UNSIGNED>(id482in_input));
  }
  { // Node ID: 483 (NodeOr)
    const HWOffsetFix<64,0,UNSIGNED> &id483in_a = id482out_output;
    const HWOffsetFix<64,0,UNSIGNED> &id483in_b = id2596out_output[getCycle()%2];

    HWOffsetFix<64,0,UNSIGNED> id483x_1;

    (id483x_1) = (or_fixed(id483in_a,id483in_b));
    id483out_result[(getCycle()+1)%2] = (id483x_1);
  }
  { // Node ID: 547 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id547in_sel = id2591out_output[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id547in_option0 = id537out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id547in_option1 = id483out_result[getCycle()%2];

    HWOffsetFix<64,0,UNSIGNED> id547x_1;

    switch((id547in_sel.getValueAsLong())) {
      case 0l:
        id547x_1 = id547in_option0;
        break;
      case 1l:
        id547x_1 = id547in_option1;
        break;
      default:
        id547x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id547out_result[(getCycle()+1)%2] = (id547x_1);
  }
  { // Node ID: 2845 (NodeConstantRawBits)
  }
  { // Node ID: 486 (NodeAdd)
    const HWOffsetFix<64,0,UNSIGNED> &id486in_a = id2247out_output[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id486in_b = id2845out_value;

    id486out_result[(getCycle()+1)%2] = (add_fixed<64,0,UNSIGNED,TRUNCATE>(id486in_a,id486in_b));
  }
  { // Node ID: 2844 (NodeConstantRawBits)
  }
  { // Node ID: 488 (NodeAdd)
    const HWOffsetFix<64,0,UNSIGNED> &id488in_a = id486out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id488in_b = id2844out_value;

    id488out_result[(getCycle()+1)%2] = (add_fixed<64,0,UNSIGNED,TRUNCATE>(id488in_a,id488in_b));
  }
  HWRawBits<64> id1824out_dataout;

  { // Node ID: 1824 (NodeShift)
    const HWOffsetFix<64,0,UNSIGNED> &id1824in_datain = id488out_result[getCycle()%2];

    id1824out_dataout = (shift_left_fixed(id1824in_datain,(16l)));
  }
  HWOffsetFix<64,0,UNSIGNED> id491out_output;

  { // Node ID: 491 (NodeReinterpret)
    const HWRawBits<64> &id491in_input = id1824out_dataout;

    id491out_output = (cast_bits2fixed<64,0,UNSIGNED>(id491in_input));
  }
  { // Node ID: 2843 (NodeConstantRawBits)
  }
  { // Node ID: 493 (NodeAdd)
    const HWOffsetFix<64,0,UNSIGNED> &id493in_a = id2595out_output[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id493in_b = id2843out_value;

    id493out_result[(getCycle()+1)%2] = (add_fixed<64,0,UNSIGNED,TRUNCATE>(id493in_a,id493in_b));
  }
  { // Node ID: 2842 (NodeConstantRawBits)
  }
  { // Node ID: 495 (NodeAdd)
    const HWOffsetFix<64,0,UNSIGNED> &id495in_a = id493out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id495in_b = id2842out_value;

    id495out_result[(getCycle()+1)%2] = (add_fixed<64,0,UNSIGNED,TRUNCATE>(id495in_a,id495in_b));
  }
  { // Node ID: 496 (NodeOr)
    const HWOffsetFix<64,0,UNSIGNED> &id496in_a = id491out_output;
    const HWOffsetFix<64,0,UNSIGNED> &id496in_b = id495out_result[getCycle()%2];

    HWOffsetFix<64,0,UNSIGNED> id496x_1;

    (id496x_1) = (or_fixed(id496in_a,id496in_b));
    id496out_result[(getCycle()+1)%2] = (id496x_1);
  }
  { // Node ID: 557 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id557in_sel = id2590out_output[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id557in_option0 = id547out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id557in_option1 = id496out_result[getCycle()%2];

    HWOffsetFix<64,0,UNSIGNED> id557x_1;

    switch((id557in_sel.getValueAsLong())) {
      case 0l:
        id557x_1 = id557in_option0;
        break;
      case 1l:
        id557x_1 = id557in_option1;
        break;
      default:
        id557x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id557out_result[(getCycle()+1)%2] = (id557x_1);
  }
  { // Node ID: 2841 (NodeConstantRawBits)
  }
  { // Node ID: 499 (NodeAdd)
    const HWOffsetFix<64,0,UNSIGNED> &id499in_a = id2592out_output[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id499in_b = id2841out_value;

    id499out_result[(getCycle()+1)%2] = (add_fixed<64,0,UNSIGNED,TRUNCATE>(id499in_a,id499in_b));
  }
  { // Node ID: 2840 (NodeConstantRawBits)
  }
  { // Node ID: 501 (NodeAdd)
    const HWOffsetFix<64,0,UNSIGNED> &id501in_a = id499out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id501in_b = id2840out_value;

    id501out_result[(getCycle()+1)%2] = (add_fixed<64,0,UNSIGNED,TRUNCATE>(id501in_a,id501in_b));
  }
  HWRawBits<64> id1825out_dataout;

  { // Node ID: 1825 (NodeShift)
    const HWOffsetFix<64,0,UNSIGNED> &id1825in_datain = id501out_result[getCycle()%2];

    id1825out_dataout = (shift_left_fixed(id1825in_datain,(16l)));
  }
  HWOffsetFix<64,0,UNSIGNED> id504out_output;

  { // Node ID: 504 (NodeReinterpret)
    const HWRawBits<64> &id504in_input = id1825out_dataout;

    id504out_output = (cast_bits2fixed<64,0,UNSIGNED>(id504in_input));
  }
  { // Node ID: 2839 (NodeConstantRawBits)
  }
  { // Node ID: 506 (NodeSub)
    const HWOffsetFix<64,0,UNSIGNED> &id506in_a = id2597out_output[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id506in_b = id2839out_value;

    id506out_result[(getCycle()+1)%2] = (sub_fixed<64,0,UNSIGNED,TRUNCATE>(id506in_a,id506in_b));
  }
  { // Node ID: 507 (NodeOr)
    const HWOffsetFix<64,0,UNSIGNED> &id507in_a = id504out_output;
    const HWOffsetFix<64,0,UNSIGNED> &id507in_b = id506out_result[getCycle()%2];

    HWOffsetFix<64,0,UNSIGNED> id507x_1;

    (id507x_1) = (or_fixed(id507in_a,id507in_b));
    id507out_result[(getCycle()+1)%2] = (id507x_1);
  }
  { // Node ID: 567 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id567in_sel = id2589out_output[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id567in_option0 = id557out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id567in_option1 = id507out_result[getCycle()%2];

    HWOffsetFix<64,0,UNSIGNED> id567x_1;

    switch((id567in_sel.getValueAsLong())) {
      case 0l:
        id567x_1 = id567in_option0;
        break;
      case 1l:
        id567x_1 = id567in_option1;
        break;
      default:
        id567x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id567out_result[(getCycle()+1)%2] = (id567x_1);
  }
  { // Node ID: 2838 (NodeConstantRawBits)
  }
  { // Node ID: 510 (NodeAdd)
    const HWOffsetFix<64,0,UNSIGNED> &id510in_a = id2594out_output[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id510in_b = id2838out_value;

    id510out_result[(getCycle()+1)%2] = (add_fixed<64,0,UNSIGNED,TRUNCATE>(id510in_a,id510in_b));
  }
  HWRawBits<64> id1826out_dataout;

  { // Node ID: 1826 (NodeShift)
    const HWOffsetFix<64,0,UNSIGNED> &id1826in_datain = id510out_result[getCycle()%2];

    id1826out_dataout = (shift_left_fixed(id1826in_datain,(16l)));
  }
  HWOffsetFix<64,0,UNSIGNED> id513out_output;

  { // Node ID: 513 (NodeReinterpret)
    const HWRawBits<64> &id513in_input = id1826out_dataout;

    id513out_output = (cast_bits2fixed<64,0,UNSIGNED>(id513in_input));
  }
  { // Node ID: 2837 (NodeConstantRawBits)
  }
  { // Node ID: 515 (NodeAdd)
    const HWOffsetFix<64,0,UNSIGNED> &id515in_a = id2598out_output[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id515in_b = id2837out_value;

    id515out_result[(getCycle()+1)%2] = (add_fixed<64,0,UNSIGNED,TRUNCATE>(id515in_a,id515in_b));
  }
  { // Node ID: 516 (NodeOr)
    const HWOffsetFix<64,0,UNSIGNED> &id516in_a = id513out_output;
    const HWOffsetFix<64,0,UNSIGNED> &id516in_b = id515out_result[getCycle()%2];

    HWOffsetFix<64,0,UNSIGNED> id516x_1;

    (id516x_1) = (or_fixed(id516in_a,id516in_b));
    id516out_result[(getCycle()+1)%2] = (id516x_1);
  }
  { // Node ID: 577 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id577in_sel = id2588out_output[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id577in_option0 = id567out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id577in_option1 = id516out_result[getCycle()%2];

    HWOffsetFix<64,0,UNSIGNED> id577x_1;

    switch((id577in_sel.getValueAsLong())) {
      case 0l:
        id577x_1 = id577in_option0;
        break;
      case 1l:
        id577x_1 = id577in_option1;
        break;
      default:
        id577x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id577out_result[(getCycle()+1)%2] = (id577x_1);
  }
  { // Node ID: 2274 (NodeFIFO)
    const HWOffsetFix<64,0,UNSIGNED> &id2274in_input = id577out_result[getCycle()%2];

    id2274out_output[(getCycle()+1)%2] = id2274in_input;
  }
  HWRawBits<64> id1827out_dataout;

  { // Node ID: 1827 (NodeShift)
    const HWOffsetFix<64,0,UNSIGNED> &id1827in_datain = id2274out_output[getCycle()%2];

    id1827out_dataout = (shift_right_fixed(id1827in_datain,(16l)));
  }
  HWOffsetFix<64,0,UNSIGNED> id711out_output;

  { // Node ID: 711 (NodeReinterpret)
    const HWRawBits<64> &id711in_input = id1827out_dataout;

    id711out_output = (cast_bits2fixed<64,0,UNSIGNED>(id711in_input));
  }
  HWRawBits<64> id742out_output;

  { // Node ID: 742 (NodeReinterpret)
    const HWOffsetFix<64,0,UNSIGNED> &id742in_input = id711out_output;

    id742out_output = (cast_fixed2bits(id742in_input));
  }
  HWRawBits<1> id743out_result;

  { // Node ID: 743 (NodeSlice)
    const HWRawBits<64> &id743in_a = id742out_output;

    id743out_result = (slice<0,1>(id743in_a));
  }
  { // Node ID: 2275 (NodeFIFO)
    const HWRawBits<1> &id2275in_input = id743out_result;

    id2275out_output[(getCycle()+7)%8] = id2275in_input;
  }
  HWOffsetFix<1,0,UNSIGNED> id744out_output;

  { // Node ID: 744 (NodeReinterpret)
    const HWRawBits<1> &id744in_input = id2275out_output[getCycle()%8];

    id744out_output = (cast_bits2fixed<1,0,UNSIGNED>(id744in_input));
  }
  HWOffsetFix<64,0,UNSIGNED> id745out_o;

  { // Node ID: 745 (NodeCast)
    const HWOffsetFix<1,0,UNSIGNED> &id745in_i = id744out_output;

    id745out_o = (cast_fixed2fixed<64,0,UNSIGNED,TRUNCATE>(id745in_i));
  }
  HWOffsetFix<64,2,UNSIGNED> id1828out_output;

  { // Node ID: 1828 (NodeReinterpret)
    const HWOffsetFix<64,0,UNSIGNED> &id1828in_input = id745out_o;

    id1828out_output = (cast_bits2fixed<64,2,UNSIGNED>((cast_fixed2bits(id1828in_input))));
  }
  HWOffsetFix<64,0,UNSIGNED> id1829out_o;

  { // Node ID: 1829 (NodeCast)
    const HWOffsetFix<64,2,UNSIGNED> &id1829in_i = id1828out_output;

    id1829out_o = (cast_fixed2fixed<64,0,UNSIGNED,TRUNCATE>(id1829in_i));
  }
  HWRawBits<64> id1830out_dataout;

  { // Node ID: 1830 (NodeShift)
    const HWOffsetFix<64,0,UNSIGNED> &id1830in_datain = id2274out_output[getCycle()%2];

    id1830out_dataout = (shift_right_fixed(id1830in_datain,(16l)));
  }
  HWOffsetFix<64,0,UNSIGNED> id783out_output;

  { // Node ID: 783 (NodeReinterpret)
    const HWRawBits<64> &id783in_input = id1830out_dataout;

    id783out_output = (cast_bits2fixed<64,0,UNSIGNED>(id783in_input));
  }
  HWRawBits<64> id856out_output;

  { // Node ID: 856 (NodeReinterpret)
    const HWOffsetFix<64,0,UNSIGNED> &id856in_input = id783out_output;

    id856out_output = (cast_fixed2bits(id856in_input));
  }
  HWRawBits<1> id857out_result;

  { // Node ID: 857 (NodeSlice)
    const HWRawBits<64> &id857in_a = id856out_output;

    id857out_result = (slice<0,1>(id857in_a));
  }
  HWOffsetFix<1,0,UNSIGNED> id858out_output;

  { // Node ID: 858 (NodeReinterpret)
    const HWRawBits<1> &id858in_input = id857out_result;

    id858out_output = (cast_bits2fixed<1,0,UNSIGNED>(id858in_input));
  }
  HWOffsetFix<64,0,UNSIGNED> id859out_o;

  { // Node ID: 859 (NodeCast)
    const HWOffsetFix<1,0,UNSIGNED> &id859in_i = id858out_output;

    id859out_o = (cast_fixed2fixed<64,0,UNSIGNED,TRUNCATE>(id859in_i));
  }
  { // Node ID: 860 (NodeSub)
    const HWOffsetFix<64,0,UNSIGNED> &id860in_a = id783out_output;
    const HWOffsetFix<64,0,UNSIGNED> &id860in_b = id859out_o;

    id860out_result[(getCycle()+1)%2] = (sub_fixed<64,0,UNSIGNED,TRUNCATE>(id860in_a,id860in_b));
  }
  { // Node ID: 2836 (NodeConstantRawBits)
  }
  { // Node ID: 785 (NodeAnd)
    const HWOffsetFix<64,0,UNSIGNED> &id785in_a = id2274out_output[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id785in_b = id2836out_value;

    HWOffsetFix<64,0,UNSIGNED> id785x_1;

    (id785x_1) = (and_fixed(id785in_a,id785in_b));
    id785out_result[(getCycle()+1)%2] = (id785x_1);
  }
  { // Node ID: 861 (NodeAdd)
    const HWOffsetFix<64,0,UNSIGNED> &id861in_a = id860out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id861in_b = id785out_result[getCycle()%2];

    id861out_result[(getCycle()+1)%2] = (add_fixed<64,0,UNSIGNED,TRUNCATE>(id861in_a,id861in_b));
  }
  HWRawBits<64> id862out_output;

  { // Node ID: 862 (NodeReinterpret)
    const HWOffsetFix<64,0,UNSIGNED> &id862in_input = id861out_result[getCycle()%2];

    id862out_output = (cast_fixed2bits(id862in_input));
  }
  HWRawBits<2> id863out_result;

  { // Node ID: 863 (NodeSlice)
    const HWRawBits<64> &id863in_a = id862out_output;

    id863out_result = (slice<0,2>(id863in_a));
  }
  { // Node ID: 2278 (NodeFIFO)
    const HWRawBits<2> &id2278in_input = id863out_result;

    id2278out_output[(getCycle()+5)%6] = id2278in_input;
  }
  HWOffsetFix<2,0,UNSIGNED> id864out_output;

  { // Node ID: 864 (NodeReinterpret)
    const HWRawBits<2> &id864in_input = id2278out_output[getCycle()%6];

    id864out_output = (cast_bits2fixed<2,0,UNSIGNED>(id864in_input));
  }
  HWOffsetFix<64,0,UNSIGNED> id865out_o;

  { // Node ID: 865 (NodeCast)
    const HWOffsetFix<2,0,UNSIGNED> &id865in_i = id864out_output;

    id865out_o = (cast_fixed2fixed<64,0,UNSIGNED,TRUNCATE>(id865in_i));
  }
  { // Node ID: 889 (NodeAdd)
    const HWOffsetFix<64,0,UNSIGNED> &id889in_a = id1829out_o;
    const HWOffsetFix<64,0,UNSIGNED> &id889in_b = id865out_o;

    id889out_result[(getCycle()+1)%2] = (add_fixed<64,0,UNSIGNED,TRUNCATE>(id889in_a,id889in_b));
  }
  { // Node ID: 2835 (NodeConstantRawBits)
  }
  { // Node ID: 1831 (NodeEqInlined)
    const HWOffsetFix<64,0,UNSIGNED> &id1831in_a = id889out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1831in_b = id2835out_value;

    id1831out_result[(getCycle()+1)%2] = (eq_fixed(id1831in_a,id1831in_b));
  }
  { // Node ID: 2834 (NodeConstantRawBits)
  }
  { // Node ID: 399 (NodeAdd)
    const HWOffsetFix<64,0,UNSIGNED> &id399in_a = id2out_data;
    const HWOffsetFix<64,0,UNSIGNED> &id399in_b = id2834out_value;

    id399out_result[(getCycle()+1)%2] = (add_fixed<64,0,UNSIGNED,TRUNCATE>(id399in_a,id399in_b));
  }
  HWRawBits<64> id1832out_dataout;

  { // Node ID: 1832 (NodeShift)
    const HWOffsetFix<64,0,UNSIGNED> &id1832in_datain = id399out_result[getCycle()%2];

    id1832out_dataout = (shift_left_fixed(id1832in_datain,(16l)));
  }
  HWOffsetFix<64,0,UNSIGNED> id402out_output;

  { // Node ID: 402 (NodeReinterpret)
    const HWRawBits<64> &id402in_input = id1832out_dataout;

    id402out_output = (cast_bits2fixed<64,0,UNSIGNED>(id402in_input));
  }
  { // Node ID: 2833 (NodeConstantRawBits)
  }
  { // Node ID: 404 (NodeAdd)
    const HWOffsetFix<64,0,UNSIGNED> &id404in_a = id2245out_output[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id404in_b = id2833out_value;

    id404out_result[(getCycle()+1)%2] = (add_fixed<64,0,UNSIGNED,TRUNCATE>(id404in_a,id404in_b));
  }
  { // Node ID: 405 (NodeOr)
    const HWOffsetFix<64,0,UNSIGNED> &id405in_a = id402out_output;
    const HWOffsetFix<64,0,UNSIGNED> &id405in_b = id404out_result[getCycle()%2];

    HWOffsetFix<64,0,UNSIGNED> id405x_1;

    (id405x_1) = (or_fixed(id405in_a,id405in_b));
    id405out_result[(getCycle()+1)%2] = (id405x_1);
  }
  HWRawBits<64> id1833out_dataout;

  { // Node ID: 1833 (NodeShift)
    const HWOffsetFix<64,0,UNSIGNED> &id1833in_datain = id2247out_output[getCycle()%2];

    id1833out_dataout = (shift_left_fixed(id1833in_datain,(16l)));
  }
  HWOffsetFix<64,0,UNSIGNED> id409out_output;

  { // Node ID: 409 (NodeReinterpret)
    const HWRawBits<64> &id409in_input = id1833out_dataout;

    id409out_output = (cast_bits2fixed<64,0,UNSIGNED>(id409in_input));
  }
  { // Node ID: 2832 (NodeConstantRawBits)
  }
  { // Node ID: 411 (NodeAdd)
    const HWOffsetFix<64,0,UNSIGNED> &id411in_a = id5out_data;
    const HWOffsetFix<64,0,UNSIGNED> &id411in_b = id2832out_value;

    id411out_result[(getCycle()+1)%2] = (add_fixed<64,0,UNSIGNED,TRUNCATE>(id411in_a,id411in_b));
  }
  { // Node ID: 2831 (NodeConstantRawBits)
  }
  { // Node ID: 413 (NodeAdd)
    const HWOffsetFix<64,0,UNSIGNED> &id413in_a = id411out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id413in_b = id2831out_value;

    id413out_result[(getCycle()+1)%2] = (add_fixed<64,0,UNSIGNED,TRUNCATE>(id413in_a,id413in_b));
  }
  { // Node ID: 414 (NodeOr)
    const HWOffsetFix<64,0,UNSIGNED> &id414in_a = id409out_output;
    const HWOffsetFix<64,0,UNSIGNED> &id414in_b = id413out_result[getCycle()%2];

    HWOffsetFix<64,0,UNSIGNED> id414x_1;

    (id414x_1) = (or_fixed(id414in_a,id414in_b));
    id414out_result[(getCycle()+1)%2] = (id414x_1);
  }
  { // Node ID: 536 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id536in_sel = id2262out_output[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id536in_option0 = id405out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id536in_option1 = id414out_result[getCycle()%2];

    HWOffsetFix<64,0,UNSIGNED> id536x_1;

    switch((id536in_sel.getValueAsLong())) {
      case 0l:
        id536x_1 = id536in_option0;
        break;
      case 1l:
        id536x_1 = id536in_option1;
        break;
      default:
        id536x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id536out_result[(getCycle()+1)%2] = (id536x_1);
  }
  { // Node ID: 2830 (NodeConstantRawBits)
  }
  { // Node ID: 417 (NodeAdd)
    const HWOffsetFix<64,0,UNSIGNED> &id417in_a = id2out_data;
    const HWOffsetFix<64,0,UNSIGNED> &id417in_b = id2830out_value;

    id417out_result[(getCycle()+1)%2] = (add_fixed<64,0,UNSIGNED,TRUNCATE>(id417in_a,id417in_b));
  }
  { // Node ID: 2829 (NodeConstantRawBits)
  }
  { // Node ID: 419 (NodeAdd)
    const HWOffsetFix<64,0,UNSIGNED> &id419in_a = id417out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id419in_b = id2829out_value;

    id419out_result[(getCycle()+1)%2] = (add_fixed<64,0,UNSIGNED,TRUNCATE>(id419in_a,id419in_b));
  }
  HWRawBits<64> id1834out_dataout;

  { // Node ID: 1834 (NodeShift)
    const HWOffsetFix<64,0,UNSIGNED> &id1834in_datain = id419out_result[getCycle()%2];

    id1834out_dataout = (shift_left_fixed(id1834in_datain,(16l)));
  }
  HWOffsetFix<64,0,UNSIGNED> id422out_output;

  { // Node ID: 422 (NodeReinterpret)
    const HWRawBits<64> &id422in_input = id1834out_dataout;

    id422out_output = (cast_bits2fixed<64,0,UNSIGNED>(id422in_input));
  }
  { // Node ID: 423 (NodeOr)
    const HWOffsetFix<64,0,UNSIGNED> &id423in_a = id422out_output;
    const HWOffsetFix<64,0,UNSIGNED> &id423in_b = id2596out_output[getCycle()%2];

    HWOffsetFix<64,0,UNSIGNED> id423x_1;

    (id423x_1) = (or_fixed(id423in_a,id423in_b));
    id423out_result[(getCycle()+1)%2] = (id423x_1);
  }
  { // Node ID: 546 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id546in_sel = id2591out_output[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id546in_option0 = id536out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id546in_option1 = id423out_result[getCycle()%2];

    HWOffsetFix<64,0,UNSIGNED> id546x_1;

    switch((id546in_sel.getValueAsLong())) {
      case 0l:
        id546x_1 = id546in_option0;
        break;
      case 1l:
        id546x_1 = id546in_option1;
        break;
      default:
        id546x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id546out_result[(getCycle()+1)%2] = (id546x_1);
  }
  { // Node ID: 2828 (NodeConstantRawBits)
  }
  { // Node ID: 426 (NodeAdd)
    const HWOffsetFix<64,0,UNSIGNED> &id426in_a = id2247out_output[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id426in_b = id2828out_value;

    id426out_result[(getCycle()+1)%2] = (add_fixed<64,0,UNSIGNED,TRUNCATE>(id426in_a,id426in_b));
  }
  { // Node ID: 2827 (NodeConstantRawBits)
  }
  { // Node ID: 428 (NodeAdd)
    const HWOffsetFix<64,0,UNSIGNED> &id428in_a = id426out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id428in_b = id2827out_value;

    id428out_result[(getCycle()+1)%2] = (add_fixed<64,0,UNSIGNED,TRUNCATE>(id428in_a,id428in_b));
  }
  HWRawBits<64> id1835out_dataout;

  { // Node ID: 1835 (NodeShift)
    const HWOffsetFix<64,0,UNSIGNED> &id1835in_datain = id428out_result[getCycle()%2];

    id1835out_dataout = (shift_left_fixed(id1835in_datain,(16l)));
  }
  HWOffsetFix<64,0,UNSIGNED> id431out_output;

  { // Node ID: 431 (NodeReinterpret)
    const HWRawBits<64> &id431in_input = id1835out_dataout;

    id431out_output = (cast_bits2fixed<64,0,UNSIGNED>(id431in_input));
  }
  { // Node ID: 2826 (NodeConstantRawBits)
  }
  { // Node ID: 433 (NodeAdd)
    const HWOffsetFix<64,0,UNSIGNED> &id433in_a = id2595out_output[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id433in_b = id2826out_value;

    id433out_result[(getCycle()+1)%2] = (add_fixed<64,0,UNSIGNED,TRUNCATE>(id433in_a,id433in_b));
  }
  { // Node ID: 2825 (NodeConstantRawBits)
  }
  { // Node ID: 435 (NodeAdd)
    const HWOffsetFix<64,0,UNSIGNED> &id435in_a = id433out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id435in_b = id2825out_value;

    id435out_result[(getCycle()+1)%2] = (add_fixed<64,0,UNSIGNED,TRUNCATE>(id435in_a,id435in_b));
  }
  { // Node ID: 436 (NodeOr)
    const HWOffsetFix<64,0,UNSIGNED> &id436in_a = id431out_output;
    const HWOffsetFix<64,0,UNSIGNED> &id436in_b = id435out_result[getCycle()%2];

    HWOffsetFix<64,0,UNSIGNED> id436x_1;

    (id436x_1) = (or_fixed(id436in_a,id436in_b));
    id436out_result[(getCycle()+1)%2] = (id436x_1);
  }
  { // Node ID: 556 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id556in_sel = id2590out_output[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id556in_option0 = id546out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id556in_option1 = id436out_result[getCycle()%2];

    HWOffsetFix<64,0,UNSIGNED> id556x_1;

    switch((id556in_sel.getValueAsLong())) {
      case 0l:
        id556x_1 = id556in_option0;
        break;
      case 1l:
        id556x_1 = id556in_option1;
        break;
      default:
        id556x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id556out_result[(getCycle()+1)%2] = (id556x_1);
  }
  { // Node ID: 2824 (NodeConstantRawBits)
  }
  { // Node ID: 439 (NodeAdd)
    const HWOffsetFix<64,0,UNSIGNED> &id439in_a = id2592out_output[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id439in_b = id2824out_value;

    id439out_result[(getCycle()+1)%2] = (add_fixed<64,0,UNSIGNED,TRUNCATE>(id439in_a,id439in_b));
  }
  { // Node ID: 2823 (NodeConstantRawBits)
  }
  { // Node ID: 441 (NodeAdd)
    const HWOffsetFix<64,0,UNSIGNED> &id441in_a = id439out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id441in_b = id2823out_value;

    id441out_result[(getCycle()+1)%2] = (add_fixed<64,0,UNSIGNED,TRUNCATE>(id441in_a,id441in_b));
  }
  HWRawBits<64> id1836out_dataout;

  { // Node ID: 1836 (NodeShift)
    const HWOffsetFix<64,0,UNSIGNED> &id1836in_datain = id441out_result[getCycle()%2];

    id1836out_dataout = (shift_left_fixed(id1836in_datain,(16l)));
  }
  HWOffsetFix<64,0,UNSIGNED> id444out_output;

  { // Node ID: 444 (NodeReinterpret)
    const HWRawBits<64> &id444in_input = id1836out_dataout;

    id444out_output = (cast_bits2fixed<64,0,UNSIGNED>(id444in_input));
  }
  { // Node ID: 2822 (NodeConstantRawBits)
  }
  { // Node ID: 446 (NodeSub)
    const HWOffsetFix<64,0,UNSIGNED> &id446in_a = id2597out_output[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id446in_b = id2822out_value;

    id446out_result[(getCycle()+1)%2] = (sub_fixed<64,0,UNSIGNED,TRUNCATE>(id446in_a,id446in_b));
  }
  { // Node ID: 447 (NodeOr)
    const HWOffsetFix<64,0,UNSIGNED> &id447in_a = id444out_output;
    const HWOffsetFix<64,0,UNSIGNED> &id447in_b = id446out_result[getCycle()%2];

    HWOffsetFix<64,0,UNSIGNED> id447x_1;

    (id447x_1) = (or_fixed(id447in_a,id447in_b));
    id447out_result[(getCycle()+1)%2] = (id447x_1);
  }
  { // Node ID: 566 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id566in_sel = id2589out_output[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id566in_option0 = id556out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id566in_option1 = id447out_result[getCycle()%2];

    HWOffsetFix<64,0,UNSIGNED> id566x_1;

    switch((id566in_sel.getValueAsLong())) {
      case 0l:
        id566x_1 = id566in_option0;
        break;
      case 1l:
        id566x_1 = id566in_option1;
        break;
      default:
        id566x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id566out_result[(getCycle()+1)%2] = (id566x_1);
  }
  { // Node ID: 2821 (NodeConstantRawBits)
  }
  { // Node ID: 450 (NodeAdd)
    const HWOffsetFix<64,0,UNSIGNED> &id450in_a = id2594out_output[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id450in_b = id2821out_value;

    id450out_result[(getCycle()+1)%2] = (add_fixed<64,0,UNSIGNED,TRUNCATE>(id450in_a,id450in_b));
  }
  HWRawBits<64> id1837out_dataout;

  { // Node ID: 1837 (NodeShift)
    const HWOffsetFix<64,0,UNSIGNED> &id1837in_datain = id450out_result[getCycle()%2];

    id1837out_dataout = (shift_left_fixed(id1837in_datain,(16l)));
  }
  HWOffsetFix<64,0,UNSIGNED> id453out_output;

  { // Node ID: 453 (NodeReinterpret)
    const HWRawBits<64> &id453in_input = id1837out_dataout;

    id453out_output = (cast_bits2fixed<64,0,UNSIGNED>(id453in_input));
  }
  { // Node ID: 2820 (NodeConstantRawBits)
  }
  { // Node ID: 455 (NodeAdd)
    const HWOffsetFix<64,0,UNSIGNED> &id455in_a = id2598out_output[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id455in_b = id2820out_value;

    id455out_result[(getCycle()+1)%2] = (add_fixed<64,0,UNSIGNED,TRUNCATE>(id455in_a,id455in_b));
  }
  { // Node ID: 456 (NodeOr)
    const HWOffsetFix<64,0,UNSIGNED> &id456in_a = id453out_output;
    const HWOffsetFix<64,0,UNSIGNED> &id456in_b = id455out_result[getCycle()%2];

    HWOffsetFix<64,0,UNSIGNED> id456x_1;

    (id456x_1) = (or_fixed(id456in_a,id456in_b));
    id456out_result[(getCycle()+1)%2] = (id456x_1);
  }
  { // Node ID: 576 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id576in_sel = id2588out_output[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id576in_option0 = id566out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id576in_option1 = id456out_result[getCycle()%2];

    HWOffsetFix<64,0,UNSIGNED> id576x_1;

    switch((id576in_sel.getValueAsLong())) {
      case 0l:
        id576x_1 = id576in_option0;
        break;
      case 1l:
        id576x_1 = id576in_option1;
        break;
      default:
        id576x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id576out_result[(getCycle()+1)%2] = (id576x_1);
  }
  { // Node ID: 2293 (NodeFIFO)
    const HWOffsetFix<64,0,UNSIGNED> &id2293in_input = id576out_result[getCycle()%2];

    id2293out_output[(getCycle()+1)%2] = id2293in_input;
  }
  HWRawBits<64> id1838out_dataout;

  { // Node ID: 1838 (NodeShift)
    const HWOffsetFix<64,0,UNSIGNED> &id1838in_datain = id2293out_output[getCycle()%2];

    id1838out_dataout = (shift_right_fixed(id1838in_datain,(16l)));
  }
  HWOffsetFix<64,0,UNSIGNED> id706out_output;

  { // Node ID: 706 (NodeReinterpret)
    const HWRawBits<64> &id706in_input = id1838out_dataout;

    id706out_output = (cast_bits2fixed<64,0,UNSIGNED>(id706in_input));
  }
  HWRawBits<64> id738out_output;

  { // Node ID: 738 (NodeReinterpret)
    const HWOffsetFix<64,0,UNSIGNED> &id738in_input = id706out_output;

    id738out_output = (cast_fixed2bits(id738in_input));
  }
  HWRawBits<1> id739out_result;

  { // Node ID: 739 (NodeSlice)
    const HWRawBits<64> &id739in_a = id738out_output;

    id739out_result = (slice<0,1>(id739in_a));
  }
  { // Node ID: 2294 (NodeFIFO)
    const HWRawBits<1> &id2294in_input = id739out_result;

    id2294out_output[(getCycle()+6)%7] = id2294in_input;
  }
  HWOffsetFix<1,0,UNSIGNED> id740out_output;

  { // Node ID: 740 (NodeReinterpret)
    const HWRawBits<1> &id740in_input = id2294out_output[getCycle()%7];

    id740out_output = (cast_bits2fixed<1,0,UNSIGNED>(id740in_input));
  }
  HWOffsetFix<64,0,UNSIGNED> id741out_o;

  { // Node ID: 741 (NodeCast)
    const HWOffsetFix<1,0,UNSIGNED> &id741in_i = id740out_output;

    id741out_o = (cast_fixed2fixed<64,0,UNSIGNED,TRUNCATE>(id741in_i));
  }
  HWOffsetFix<64,2,UNSIGNED> id1839out_output;

  { // Node ID: 1839 (NodeReinterpret)
    const HWOffsetFix<64,0,UNSIGNED> &id1839in_input = id741out_o;

    id1839out_output = (cast_bits2fixed<64,2,UNSIGNED>((cast_fixed2bits(id1839in_input))));
  }
  HWOffsetFix<64,0,UNSIGNED> id1840out_o;

  { // Node ID: 1840 (NodeCast)
    const HWOffsetFix<64,2,UNSIGNED> &id1840in_i = id1839out_output;

    id1840out_o = (cast_fixed2fixed<64,0,UNSIGNED,TRUNCATE>(id1840in_i));
  }
  HWRawBits<64> id1841out_dataout;

  { // Node ID: 1841 (NodeShift)
    const HWOffsetFix<64,0,UNSIGNED> &id1841in_datain = id2293out_output[getCycle()%2];

    id1841out_dataout = (shift_right_fixed(id1841in_datain,(16l)));
  }
  HWOffsetFix<64,0,UNSIGNED> id778out_output;

  { // Node ID: 778 (NodeReinterpret)
    const HWRawBits<64> &id778in_input = id1841out_dataout;

    id778out_output = (cast_bits2fixed<64,0,UNSIGNED>(id778in_input));
  }
  HWRawBits<64> id846out_output;

  { // Node ID: 846 (NodeReinterpret)
    const HWOffsetFix<64,0,UNSIGNED> &id846in_input = id778out_output;

    id846out_output = (cast_fixed2bits(id846in_input));
  }
  HWRawBits<1> id847out_result;

  { // Node ID: 847 (NodeSlice)
    const HWRawBits<64> &id847in_a = id846out_output;

    id847out_result = (slice<0,1>(id847in_a));
  }
  HWOffsetFix<1,0,UNSIGNED> id848out_output;

  { // Node ID: 848 (NodeReinterpret)
    const HWRawBits<1> &id848in_input = id847out_result;

    id848out_output = (cast_bits2fixed<1,0,UNSIGNED>(id848in_input));
  }
  HWOffsetFix<64,0,UNSIGNED> id849out_o;

  { // Node ID: 849 (NodeCast)
    const HWOffsetFix<1,0,UNSIGNED> &id849in_i = id848out_output;

    id849out_o = (cast_fixed2fixed<64,0,UNSIGNED,TRUNCATE>(id849in_i));
  }
  { // Node ID: 850 (NodeSub)
    const HWOffsetFix<64,0,UNSIGNED> &id850in_a = id778out_output;
    const HWOffsetFix<64,0,UNSIGNED> &id850in_b = id849out_o;

    id850out_result[(getCycle()+1)%2] = (sub_fixed<64,0,UNSIGNED,TRUNCATE>(id850in_a,id850in_b));
  }
  { // Node ID: 2819 (NodeConstantRawBits)
  }
  { // Node ID: 780 (NodeAnd)
    const HWOffsetFix<64,0,UNSIGNED> &id780in_a = id2293out_output[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id780in_b = id2819out_value;

    HWOffsetFix<64,0,UNSIGNED> id780x_1;

    (id780x_1) = (and_fixed(id780in_a,id780in_b));
    id780out_result[(getCycle()+1)%2] = (id780x_1);
  }
  { // Node ID: 851 (NodeAdd)
    const HWOffsetFix<64,0,UNSIGNED> &id851in_a = id850out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id851in_b = id780out_result[getCycle()%2];

    id851out_result[(getCycle()+1)%2] = (add_fixed<64,0,UNSIGNED,TRUNCATE>(id851in_a,id851in_b));
  }
  HWRawBits<64> id852out_output;

  { // Node ID: 852 (NodeReinterpret)
    const HWOffsetFix<64,0,UNSIGNED> &id852in_input = id851out_result[getCycle()%2];

    id852out_output = (cast_fixed2bits(id852in_input));
  }
  HWRawBits<2> id853out_result;

  { // Node ID: 853 (NodeSlice)
    const HWRawBits<64> &id853in_a = id852out_output;

    id853out_result = (slice<0,2>(id853in_a));
  }
  { // Node ID: 2297 (NodeFIFO)
    const HWRawBits<2> &id2297in_input = id853out_result;

    id2297out_output[(getCycle()+4)%5] = id2297in_input;
  }
  HWOffsetFix<2,0,UNSIGNED> id854out_output;

  { // Node ID: 854 (NodeReinterpret)
    const HWRawBits<2> &id854in_input = id2297out_output[getCycle()%5];

    id854out_output = (cast_bits2fixed<2,0,UNSIGNED>(id854in_input));
  }
  HWOffsetFix<64,0,UNSIGNED> id855out_o;

  { // Node ID: 855 (NodeCast)
    const HWOffsetFix<2,0,UNSIGNED> &id855in_i = id854out_output;

    id855out_o = (cast_fixed2fixed<64,0,UNSIGNED,TRUNCATE>(id855in_i));
  }
  { // Node ID: 886 (NodeAdd)
    const HWOffsetFix<64,0,UNSIGNED> &id886in_a = id1840out_o;
    const HWOffsetFix<64,0,UNSIGNED> &id886in_b = id855out_o;

    id886out_result[(getCycle()+1)%2] = (add_fixed<64,0,UNSIGNED,TRUNCATE>(id886in_a,id886in_b));
  }
  { // Node ID: 2818 (NodeConstantRawBits)
  }
  { // Node ID: 1842 (NodeEqInlined)
    const HWOffsetFix<64,0,UNSIGNED> &id1842in_a = id886out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1842in_b = id2818out_value;

    id1842out_result[(getCycle()+1)%2] = (eq_fixed(id1842in_a,id1842in_b));
  }
  { // Node ID: 2817 (NodeConstantRawBits)
  }
  { // Node ID: 339 (NodeAdd)
    const HWOffsetFix<64,0,UNSIGNED> &id339in_a = id2out_data;
    const HWOffsetFix<64,0,UNSIGNED> &id339in_b = id2817out_value;

    id339out_result[(getCycle()+1)%2] = (add_fixed<64,0,UNSIGNED,TRUNCATE>(id339in_a,id339in_b));
  }
  HWRawBits<64> id1843out_dataout;

  { // Node ID: 1843 (NodeShift)
    const HWOffsetFix<64,0,UNSIGNED> &id1843in_datain = id339out_result[getCycle()%2];

    id1843out_dataout = (shift_left_fixed(id1843in_datain,(16l)));
  }
  HWOffsetFix<64,0,UNSIGNED> id342out_output;

  { // Node ID: 342 (NodeReinterpret)
    const HWRawBits<64> &id342in_input = id1843out_dataout;

    id342out_output = (cast_bits2fixed<64,0,UNSIGNED>(id342in_input));
  }
  { // Node ID: 2816 (NodeConstantRawBits)
  }
  { // Node ID: 344 (NodeAdd)
    const HWOffsetFix<64,0,UNSIGNED> &id344in_a = id2245out_output[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id344in_b = id2816out_value;

    id344out_result[(getCycle()+1)%2] = (add_fixed<64,0,UNSIGNED,TRUNCATE>(id344in_a,id344in_b));
  }
  { // Node ID: 345 (NodeOr)
    const HWOffsetFix<64,0,UNSIGNED> &id345in_a = id342out_output;
    const HWOffsetFix<64,0,UNSIGNED> &id345in_b = id344out_result[getCycle()%2];

    HWOffsetFix<64,0,UNSIGNED> id345x_1;

    (id345x_1) = (or_fixed(id345in_a,id345in_b));
    id345out_result[(getCycle()+1)%2] = (id345x_1);
  }
  HWRawBits<64> id1844out_dataout;

  { // Node ID: 1844 (NodeShift)
    const HWOffsetFix<64,0,UNSIGNED> &id1844in_datain = id2247out_output[getCycle()%2];

    id1844out_dataout = (shift_left_fixed(id1844in_datain,(16l)));
  }
  HWOffsetFix<64,0,UNSIGNED> id349out_output;

  { // Node ID: 349 (NodeReinterpret)
    const HWRawBits<64> &id349in_input = id1844out_dataout;

    id349out_output = (cast_bits2fixed<64,0,UNSIGNED>(id349in_input));
  }
  { // Node ID: 2815 (NodeConstantRawBits)
  }
  { // Node ID: 351 (NodeAdd)
    const HWOffsetFix<64,0,UNSIGNED> &id351in_a = id5out_data;
    const HWOffsetFix<64,0,UNSIGNED> &id351in_b = id2815out_value;

    id351out_result[(getCycle()+1)%2] = (add_fixed<64,0,UNSIGNED,TRUNCATE>(id351in_a,id351in_b));
  }
  { // Node ID: 2814 (NodeConstantRawBits)
  }
  { // Node ID: 353 (NodeAdd)
    const HWOffsetFix<64,0,UNSIGNED> &id353in_a = id351out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id353in_b = id2814out_value;

    id353out_result[(getCycle()+1)%2] = (add_fixed<64,0,UNSIGNED,TRUNCATE>(id353in_a,id353in_b));
  }
  { // Node ID: 354 (NodeOr)
    const HWOffsetFix<64,0,UNSIGNED> &id354in_a = id349out_output;
    const HWOffsetFix<64,0,UNSIGNED> &id354in_b = id353out_result[getCycle()%2];

    HWOffsetFix<64,0,UNSIGNED> id354x_1;

    (id354x_1) = (or_fixed(id354in_a,id354in_b));
    id354out_result[(getCycle()+1)%2] = (id354x_1);
  }
  { // Node ID: 535 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id535in_sel = id2262out_output[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id535in_option0 = id345out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id535in_option1 = id354out_result[getCycle()%2];

    HWOffsetFix<64,0,UNSIGNED> id535x_1;

    switch((id535in_sel.getValueAsLong())) {
      case 0l:
        id535x_1 = id535in_option0;
        break;
      case 1l:
        id535x_1 = id535in_option1;
        break;
      default:
        id535x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id535out_result[(getCycle()+1)%2] = (id535x_1);
  }
  { // Node ID: 2813 (NodeConstantRawBits)
  }
  { // Node ID: 357 (NodeAdd)
    const HWOffsetFix<64,0,UNSIGNED> &id357in_a = id2out_data;
    const HWOffsetFix<64,0,UNSIGNED> &id357in_b = id2813out_value;

    id357out_result[(getCycle()+1)%2] = (add_fixed<64,0,UNSIGNED,TRUNCATE>(id357in_a,id357in_b));
  }
  { // Node ID: 2812 (NodeConstantRawBits)
  }
  { // Node ID: 359 (NodeAdd)
    const HWOffsetFix<64,0,UNSIGNED> &id359in_a = id357out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id359in_b = id2812out_value;

    id359out_result[(getCycle()+1)%2] = (add_fixed<64,0,UNSIGNED,TRUNCATE>(id359in_a,id359in_b));
  }
  HWRawBits<64> id1845out_dataout;

  { // Node ID: 1845 (NodeShift)
    const HWOffsetFix<64,0,UNSIGNED> &id1845in_datain = id359out_result[getCycle()%2];

    id1845out_dataout = (shift_left_fixed(id1845in_datain,(16l)));
  }
  HWOffsetFix<64,0,UNSIGNED> id362out_output;

  { // Node ID: 362 (NodeReinterpret)
    const HWRawBits<64> &id362in_input = id1845out_dataout;

    id362out_output = (cast_bits2fixed<64,0,UNSIGNED>(id362in_input));
  }
  { // Node ID: 363 (NodeOr)
    const HWOffsetFix<64,0,UNSIGNED> &id363in_a = id362out_output;
    const HWOffsetFix<64,0,UNSIGNED> &id363in_b = id2596out_output[getCycle()%2];

    HWOffsetFix<64,0,UNSIGNED> id363x_1;

    (id363x_1) = (or_fixed(id363in_a,id363in_b));
    id363out_result[(getCycle()+1)%2] = (id363x_1);
  }
  { // Node ID: 545 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id545in_sel = id2591out_output[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id545in_option0 = id535out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id545in_option1 = id363out_result[getCycle()%2];

    HWOffsetFix<64,0,UNSIGNED> id545x_1;

    switch((id545in_sel.getValueAsLong())) {
      case 0l:
        id545x_1 = id545in_option0;
        break;
      case 1l:
        id545x_1 = id545in_option1;
        break;
      default:
        id545x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id545out_result[(getCycle()+1)%2] = (id545x_1);
  }
  { // Node ID: 2811 (NodeConstantRawBits)
  }
  { // Node ID: 366 (NodeAdd)
    const HWOffsetFix<64,0,UNSIGNED> &id366in_a = id2247out_output[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id366in_b = id2811out_value;

    id366out_result[(getCycle()+1)%2] = (add_fixed<64,0,UNSIGNED,TRUNCATE>(id366in_a,id366in_b));
  }
  { // Node ID: 2810 (NodeConstantRawBits)
  }
  { // Node ID: 368 (NodeAdd)
    const HWOffsetFix<64,0,UNSIGNED> &id368in_a = id366out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id368in_b = id2810out_value;

    id368out_result[(getCycle()+1)%2] = (add_fixed<64,0,UNSIGNED,TRUNCATE>(id368in_a,id368in_b));
  }
  HWRawBits<64> id1846out_dataout;

  { // Node ID: 1846 (NodeShift)
    const HWOffsetFix<64,0,UNSIGNED> &id1846in_datain = id368out_result[getCycle()%2];

    id1846out_dataout = (shift_left_fixed(id1846in_datain,(16l)));
  }
  HWOffsetFix<64,0,UNSIGNED> id371out_output;

  { // Node ID: 371 (NodeReinterpret)
    const HWRawBits<64> &id371in_input = id1846out_dataout;

    id371out_output = (cast_bits2fixed<64,0,UNSIGNED>(id371in_input));
  }
  { // Node ID: 2809 (NodeConstantRawBits)
  }
  { // Node ID: 373 (NodeAdd)
    const HWOffsetFix<64,0,UNSIGNED> &id373in_a = id2595out_output[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id373in_b = id2809out_value;

    id373out_result[(getCycle()+1)%2] = (add_fixed<64,0,UNSIGNED,TRUNCATE>(id373in_a,id373in_b));
  }
  { // Node ID: 2808 (NodeConstantRawBits)
  }
  { // Node ID: 375 (NodeAdd)
    const HWOffsetFix<64,0,UNSIGNED> &id375in_a = id373out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id375in_b = id2808out_value;

    id375out_result[(getCycle()+1)%2] = (add_fixed<64,0,UNSIGNED,TRUNCATE>(id375in_a,id375in_b));
  }
  { // Node ID: 376 (NodeOr)
    const HWOffsetFix<64,0,UNSIGNED> &id376in_a = id371out_output;
    const HWOffsetFix<64,0,UNSIGNED> &id376in_b = id375out_result[getCycle()%2];

    HWOffsetFix<64,0,UNSIGNED> id376x_1;

    (id376x_1) = (or_fixed(id376in_a,id376in_b));
    id376out_result[(getCycle()+1)%2] = (id376x_1);
  }
  { // Node ID: 555 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id555in_sel = id2590out_output[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id555in_option0 = id545out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id555in_option1 = id376out_result[getCycle()%2];

    HWOffsetFix<64,0,UNSIGNED> id555x_1;

    switch((id555in_sel.getValueAsLong())) {
      case 0l:
        id555x_1 = id555in_option0;
        break;
      case 1l:
        id555x_1 = id555in_option1;
        break;
      default:
        id555x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id555out_result[(getCycle()+1)%2] = (id555x_1);
  }
  { // Node ID: 2807 (NodeConstantRawBits)
  }
  { // Node ID: 379 (NodeAdd)
    const HWOffsetFix<64,0,UNSIGNED> &id379in_a = id2592out_output[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id379in_b = id2807out_value;

    id379out_result[(getCycle()+1)%2] = (add_fixed<64,0,UNSIGNED,TRUNCATE>(id379in_a,id379in_b));
  }
  { // Node ID: 2806 (NodeConstantRawBits)
  }
  { // Node ID: 381 (NodeAdd)
    const HWOffsetFix<64,0,UNSIGNED> &id381in_a = id379out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id381in_b = id2806out_value;

    id381out_result[(getCycle()+1)%2] = (add_fixed<64,0,UNSIGNED,TRUNCATE>(id381in_a,id381in_b));
  }
  HWRawBits<64> id1847out_dataout;

  { // Node ID: 1847 (NodeShift)
    const HWOffsetFix<64,0,UNSIGNED> &id1847in_datain = id381out_result[getCycle()%2];

    id1847out_dataout = (shift_left_fixed(id1847in_datain,(16l)));
  }
  HWOffsetFix<64,0,UNSIGNED> id384out_output;

  { // Node ID: 384 (NodeReinterpret)
    const HWRawBits<64> &id384in_input = id1847out_dataout;

    id384out_output = (cast_bits2fixed<64,0,UNSIGNED>(id384in_input));
  }
  { // Node ID: 2805 (NodeConstantRawBits)
  }
  { // Node ID: 386 (NodeSub)
    const HWOffsetFix<64,0,UNSIGNED> &id386in_a = id2597out_output[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id386in_b = id2805out_value;

    id386out_result[(getCycle()+1)%2] = (sub_fixed<64,0,UNSIGNED,TRUNCATE>(id386in_a,id386in_b));
  }
  { // Node ID: 387 (NodeOr)
    const HWOffsetFix<64,0,UNSIGNED> &id387in_a = id384out_output;
    const HWOffsetFix<64,0,UNSIGNED> &id387in_b = id386out_result[getCycle()%2];

    HWOffsetFix<64,0,UNSIGNED> id387x_1;

    (id387x_1) = (or_fixed(id387in_a,id387in_b));
    id387out_result[(getCycle()+1)%2] = (id387x_1);
  }
  { // Node ID: 565 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id565in_sel = id2589out_output[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id565in_option0 = id555out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id565in_option1 = id387out_result[getCycle()%2];

    HWOffsetFix<64,0,UNSIGNED> id565x_1;

    switch((id565in_sel.getValueAsLong())) {
      case 0l:
        id565x_1 = id565in_option0;
        break;
      case 1l:
        id565x_1 = id565in_option1;
        break;
      default:
        id565x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id565out_result[(getCycle()+1)%2] = (id565x_1);
  }
  { // Node ID: 2804 (NodeConstantRawBits)
  }
  { // Node ID: 390 (NodeAdd)
    const HWOffsetFix<64,0,UNSIGNED> &id390in_a = id2594out_output[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id390in_b = id2804out_value;

    id390out_result[(getCycle()+1)%2] = (add_fixed<64,0,UNSIGNED,TRUNCATE>(id390in_a,id390in_b));
  }
  HWRawBits<64> id1848out_dataout;

  { // Node ID: 1848 (NodeShift)
    const HWOffsetFix<64,0,UNSIGNED> &id1848in_datain = id390out_result[getCycle()%2];

    id1848out_dataout = (shift_left_fixed(id1848in_datain,(16l)));
  }
  HWOffsetFix<64,0,UNSIGNED> id393out_output;

  { // Node ID: 393 (NodeReinterpret)
    const HWRawBits<64> &id393in_input = id1848out_dataout;

    id393out_output = (cast_bits2fixed<64,0,UNSIGNED>(id393in_input));
  }
  { // Node ID: 2803 (NodeConstantRawBits)
  }
  { // Node ID: 395 (NodeAdd)
    const HWOffsetFix<64,0,UNSIGNED> &id395in_a = id2598out_output[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id395in_b = id2803out_value;

    id395out_result[(getCycle()+1)%2] = (add_fixed<64,0,UNSIGNED,TRUNCATE>(id395in_a,id395in_b));
  }
  { // Node ID: 396 (NodeOr)
    const HWOffsetFix<64,0,UNSIGNED> &id396in_a = id393out_output;
    const HWOffsetFix<64,0,UNSIGNED> &id396in_b = id395out_result[getCycle()%2];

    HWOffsetFix<64,0,UNSIGNED> id396x_1;

    (id396x_1) = (or_fixed(id396in_a,id396in_b));
    id396out_result[(getCycle()+1)%2] = (id396x_1);
  }
  { // Node ID: 575 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id575in_sel = id2588out_output[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id575in_option0 = id565out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id575in_option1 = id396out_result[getCycle()%2];

    HWOffsetFix<64,0,UNSIGNED> id575x_1;

    switch((id575in_sel.getValueAsLong())) {
      case 0l:
        id575x_1 = id575in_option0;
        break;
      case 1l:
        id575x_1 = id575in_option1;
        break;
      default:
        id575x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id575out_result[(getCycle()+1)%2] = (id575x_1);
  }
  { // Node ID: 2312 (NodeFIFO)
    const HWOffsetFix<64,0,UNSIGNED> &id2312in_input = id575out_result[getCycle()%2];

    id2312out_output[(getCycle()+1)%2] = id2312in_input;
  }
  HWRawBits<64> id1849out_dataout;

  { // Node ID: 1849 (NodeShift)
    const HWOffsetFix<64,0,UNSIGNED> &id1849in_datain = id2312out_output[getCycle()%2];

    id1849out_dataout = (shift_right_fixed(id1849in_datain,(16l)));
  }
  HWOffsetFix<64,0,UNSIGNED> id701out_output;

  { // Node ID: 701 (NodeReinterpret)
    const HWRawBits<64> &id701in_input = id1849out_dataout;

    id701out_output = (cast_bits2fixed<64,0,UNSIGNED>(id701in_input));
  }
  HWRawBits<64> id734out_output;

  { // Node ID: 734 (NodeReinterpret)
    const HWOffsetFix<64,0,UNSIGNED> &id734in_input = id701out_output;

    id734out_output = (cast_fixed2bits(id734in_input));
  }
  HWRawBits<1> id735out_result;

  { // Node ID: 735 (NodeSlice)
    const HWRawBits<64> &id735in_a = id734out_output;

    id735out_result = (slice<0,1>(id735in_a));
  }
  { // Node ID: 2313 (NodeFIFO)
    const HWRawBits<1> &id2313in_input = id735out_result;

    id2313out_output[(getCycle()+5)%6] = id2313in_input;
  }
  HWOffsetFix<1,0,UNSIGNED> id736out_output;

  { // Node ID: 736 (NodeReinterpret)
    const HWRawBits<1> &id736in_input = id2313out_output[getCycle()%6];

    id736out_output = (cast_bits2fixed<1,0,UNSIGNED>(id736in_input));
  }
  HWOffsetFix<64,0,UNSIGNED> id737out_o;

  { // Node ID: 737 (NodeCast)
    const HWOffsetFix<1,0,UNSIGNED> &id737in_i = id736out_output;

    id737out_o = (cast_fixed2fixed<64,0,UNSIGNED,TRUNCATE>(id737in_i));
  }
  HWOffsetFix<64,2,UNSIGNED> id1850out_output;

  { // Node ID: 1850 (NodeReinterpret)
    const HWOffsetFix<64,0,UNSIGNED> &id1850in_input = id737out_o;

    id1850out_output = (cast_bits2fixed<64,2,UNSIGNED>((cast_fixed2bits(id1850in_input))));
  }
  HWOffsetFix<64,0,UNSIGNED> id1851out_o;

  { // Node ID: 1851 (NodeCast)
    const HWOffsetFix<64,2,UNSIGNED> &id1851in_i = id1850out_output;

    id1851out_o = (cast_fixed2fixed<64,0,UNSIGNED,TRUNCATE>(id1851in_i));
  }
  HWRawBits<64> id1852out_dataout;

  { // Node ID: 1852 (NodeShift)
    const HWOffsetFix<64,0,UNSIGNED> &id1852in_datain = id2312out_output[getCycle()%2];

    id1852out_dataout = (shift_right_fixed(id1852in_datain,(16l)));
  }
  HWOffsetFix<64,0,UNSIGNED> id773out_output;

  { // Node ID: 773 (NodeReinterpret)
    const HWRawBits<64> &id773in_input = id1852out_dataout;

    id773out_output = (cast_bits2fixed<64,0,UNSIGNED>(id773in_input));
  }
  HWRawBits<64> id836out_output;

  { // Node ID: 836 (NodeReinterpret)
    const HWOffsetFix<64,0,UNSIGNED> &id836in_input = id773out_output;

    id836out_output = (cast_fixed2bits(id836in_input));
  }
  HWRawBits<1> id837out_result;

  { // Node ID: 837 (NodeSlice)
    const HWRawBits<64> &id837in_a = id836out_output;

    id837out_result = (slice<0,1>(id837in_a));
  }
  HWOffsetFix<1,0,UNSIGNED> id838out_output;

  { // Node ID: 838 (NodeReinterpret)
    const HWRawBits<1> &id838in_input = id837out_result;

    id838out_output = (cast_bits2fixed<1,0,UNSIGNED>(id838in_input));
  }
  HWOffsetFix<64,0,UNSIGNED> id839out_o;

  { // Node ID: 839 (NodeCast)
    const HWOffsetFix<1,0,UNSIGNED> &id839in_i = id838out_output;

    id839out_o = (cast_fixed2fixed<64,0,UNSIGNED,TRUNCATE>(id839in_i));
  }
  { // Node ID: 840 (NodeSub)
    const HWOffsetFix<64,0,UNSIGNED> &id840in_a = id773out_output;
    const HWOffsetFix<64,0,UNSIGNED> &id840in_b = id839out_o;

    id840out_result[(getCycle()+1)%2] = (sub_fixed<64,0,UNSIGNED,TRUNCATE>(id840in_a,id840in_b));
  }
  { // Node ID: 2802 (NodeConstantRawBits)
  }
  { // Node ID: 775 (NodeAnd)
    const HWOffsetFix<64,0,UNSIGNED> &id775in_a = id2312out_output[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id775in_b = id2802out_value;

    HWOffsetFix<64,0,UNSIGNED> id775x_1;

    (id775x_1) = (and_fixed(id775in_a,id775in_b));
    id775out_result[(getCycle()+1)%2] = (id775x_1);
  }
  { // Node ID: 841 (NodeAdd)
    const HWOffsetFix<64,0,UNSIGNED> &id841in_a = id840out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id841in_b = id775out_result[getCycle()%2];

    id841out_result[(getCycle()+1)%2] = (add_fixed<64,0,UNSIGNED,TRUNCATE>(id841in_a,id841in_b));
  }
  HWRawBits<64> id842out_output;

  { // Node ID: 842 (NodeReinterpret)
    const HWOffsetFix<64,0,UNSIGNED> &id842in_input = id841out_result[getCycle()%2];

    id842out_output = (cast_fixed2bits(id842in_input));
  }
  HWRawBits<2> id843out_result;

  { // Node ID: 843 (NodeSlice)
    const HWRawBits<64> &id843in_a = id842out_output;

    id843out_result = (slice<0,2>(id843in_a));
  }
  { // Node ID: 2316 (NodeFIFO)
    const HWRawBits<2> &id2316in_input = id843out_result;

    id2316out_output[(getCycle()+3)%4] = id2316in_input;
  }
  HWOffsetFix<2,0,UNSIGNED> id844out_output;

  { // Node ID: 844 (NodeReinterpret)
    const HWRawBits<2> &id844in_input = id2316out_output[getCycle()%4];

    id844out_output = (cast_bits2fixed<2,0,UNSIGNED>(id844in_input));
  }
  HWOffsetFix<64,0,UNSIGNED> id845out_o;

  { // Node ID: 845 (NodeCast)
    const HWOffsetFix<2,0,UNSIGNED> &id845in_i = id844out_output;

    id845out_o = (cast_fixed2fixed<64,0,UNSIGNED,TRUNCATE>(id845in_i));
  }
  { // Node ID: 883 (NodeAdd)
    const HWOffsetFix<64,0,UNSIGNED> &id883in_a = id1851out_o;
    const HWOffsetFix<64,0,UNSIGNED> &id883in_b = id845out_o;

    id883out_result[(getCycle()+1)%2] = (add_fixed<64,0,UNSIGNED,TRUNCATE>(id883in_a,id883in_b));
  }
  { // Node ID: 2801 (NodeConstantRawBits)
  }
  { // Node ID: 1853 (NodeEqInlined)
    const HWOffsetFix<64,0,UNSIGNED> &id1853in_a = id883out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1853in_b = id2801out_value;

    id1853out_result[(getCycle()+1)%2] = (eq_fixed(id1853in_a,id1853in_b));
  }
  { // Node ID: 2800 (NodeConstantRawBits)
  }
  { // Node ID: 279 (NodeAdd)
    const HWOffsetFix<64,0,UNSIGNED> &id279in_a = id2out_data;
    const HWOffsetFix<64,0,UNSIGNED> &id279in_b = id2800out_value;

    id279out_result[(getCycle()+1)%2] = (add_fixed<64,0,UNSIGNED,TRUNCATE>(id279in_a,id279in_b));
  }
  HWRawBits<64> id1854out_dataout;

  { // Node ID: 1854 (NodeShift)
    const HWOffsetFix<64,0,UNSIGNED> &id1854in_datain = id279out_result[getCycle()%2];

    id1854out_dataout = (shift_left_fixed(id1854in_datain,(16l)));
  }
  HWOffsetFix<64,0,UNSIGNED> id282out_output;

  { // Node ID: 282 (NodeReinterpret)
    const HWRawBits<64> &id282in_input = id1854out_dataout;

    id282out_output = (cast_bits2fixed<64,0,UNSIGNED>(id282in_input));
  }
  { // Node ID: 285 (NodeOr)
    const HWOffsetFix<64,0,UNSIGNED> &id285in_a = id282out_output;
    const HWOffsetFix<64,0,UNSIGNED> &id285in_b = id2595out_output[getCycle()%2];

    HWOffsetFix<64,0,UNSIGNED> id285x_1;

    (id285x_1) = (or_fixed(id285in_a,id285in_b));
    id285out_result[(getCycle()+1)%2] = (id285x_1);
  }
  HWRawBits<64> id1855out_dataout;

  { // Node ID: 1855 (NodeShift)
    const HWOffsetFix<64,0,UNSIGNED> &id1855in_datain = id2247out_output[getCycle()%2];

    id1855out_dataout = (shift_left_fixed(id1855in_datain,(16l)));
  }
  HWOffsetFix<64,0,UNSIGNED> id289out_output;

  { // Node ID: 289 (NodeReinterpret)
    const HWRawBits<64> &id289in_input = id1855out_dataout;

    id289out_output = (cast_bits2fixed<64,0,UNSIGNED>(id289in_input));
  }
  { // Node ID: 2799 (NodeConstantRawBits)
  }
  { // Node ID: 291 (NodeAdd)
    const HWOffsetFix<64,0,UNSIGNED> &id291in_a = id2245out_output[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id291in_b = id2799out_value;

    id291out_result[(getCycle()+1)%2] = (add_fixed<64,0,UNSIGNED,TRUNCATE>(id291in_a,id291in_b));
  }
  { // Node ID: 294 (NodeOr)
    const HWOffsetFix<64,0,UNSIGNED> &id294in_a = id289out_output;
    const HWOffsetFix<64,0,UNSIGNED> &id294in_b = id291out_result[getCycle()%2];

    HWOffsetFix<64,0,UNSIGNED> id294x_1;

    (id294x_1) = (or_fixed(id294in_a,id294in_b));
    id294out_result[(getCycle()+1)%2] = (id294x_1);
  }
  { // Node ID: 534 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id534in_sel = id2262out_output[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id534in_option0 = id285out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id534in_option1 = id294out_result[getCycle()%2];

    HWOffsetFix<64,0,UNSIGNED> id534x_1;

    switch((id534in_sel.getValueAsLong())) {
      case 0l:
        id534x_1 = id534in_option0;
        break;
      case 1l:
        id534x_1 = id534in_option1;
        break;
      default:
        id534x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id534out_result[(getCycle()+1)%2] = (id534x_1);
  }
  { // Node ID: 2798 (NodeConstantRawBits)
  }
  { // Node ID: 297 (NodeAdd)
    const HWOffsetFix<64,0,UNSIGNED> &id297in_a = id2247out_output[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id297in_b = id2798out_value;

    id297out_result[(getCycle()+1)%2] = (add_fixed<64,0,UNSIGNED,TRUNCATE>(id297in_a,id297in_b));
  }
  HWRawBits<64> id1856out_dataout;

  { // Node ID: 1856 (NodeShift)
    const HWOffsetFix<64,0,UNSIGNED> &id1856in_datain = id297out_result[getCycle()%2];

    id1856out_dataout = (shift_left_fixed(id1856in_datain,(16l)));
  }
  HWOffsetFix<64,0,UNSIGNED> id302out_output;

  { // Node ID: 302 (NodeReinterpret)
    const HWRawBits<64> &id302in_input = id1856out_dataout;

    id302out_output = (cast_bits2fixed<64,0,UNSIGNED>(id302in_input));
  }
  { // Node ID: 303 (NodeOr)
    const HWOffsetFix<64,0,UNSIGNED> &id303in_a = id302out_output;
    const HWOffsetFix<64,0,UNSIGNED> &id303in_b = id2596out_output[getCycle()%2];

    HWOffsetFix<64,0,UNSIGNED> id303x_1;

    (id303x_1) = (or_fixed(id303in_a,id303in_b));
    id303out_result[(getCycle()+1)%2] = (id303x_1);
  }
  { // Node ID: 544 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id544in_sel = id2591out_output[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id544in_option0 = id534out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id544in_option1 = id303out_result[getCycle()%2];

    HWOffsetFix<64,0,UNSIGNED> id544x_1;

    switch((id544in_sel.getValueAsLong())) {
      case 0l:
        id544x_1 = id544in_option0;
        break;
      case 1l:
        id544x_1 = id544in_option1;
        break;
      default:
        id544x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id544out_result[(getCycle()+1)%2] = (id544x_1);
  }
  { // Node ID: 2797 (NodeConstantRawBits)
  }
  { // Node ID: 306 (NodeAdd)
    const HWOffsetFix<64,0,UNSIGNED> &id306in_a = id2592out_output[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id306in_b = id2797out_value;

    id306out_result[(getCycle()+1)%2] = (add_fixed<64,0,UNSIGNED,TRUNCATE>(id306in_a,id306in_b));
  }
  HWRawBits<64> id1857out_dataout;

  { // Node ID: 1857 (NodeShift)
    const HWOffsetFix<64,0,UNSIGNED> &id1857in_datain = id306out_result[getCycle()%2];

    id1857out_dataout = (shift_left_fixed(id1857in_datain,(16l)));
  }
  HWOffsetFix<64,0,UNSIGNED> id311out_output;

  { // Node ID: 311 (NodeReinterpret)
    const HWRawBits<64> &id311in_input = id1857out_dataout;

    id311out_output = (cast_bits2fixed<64,0,UNSIGNED>(id311in_input));
  }
  { // Node ID: 2796 (NodeConstantRawBits)
  }
  { // Node ID: 313 (NodeAdd)
    const HWOffsetFix<64,0,UNSIGNED> &id313in_a = id2596out_output[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id313in_b = id2796out_value;

    id313out_result[(getCycle()+1)%2] = (add_fixed<64,0,UNSIGNED,TRUNCATE>(id313in_a,id313in_b));
  }
  { // Node ID: 316 (NodeOr)
    const HWOffsetFix<64,0,UNSIGNED> &id316in_a = id311out_output;
    const HWOffsetFix<64,0,UNSIGNED> &id316in_b = id313out_result[getCycle()%2];

    HWOffsetFix<64,0,UNSIGNED> id316x_1;

    (id316x_1) = (or_fixed(id316in_a,id316in_b));
    id316out_result[(getCycle()+1)%2] = (id316x_1);
  }
  { // Node ID: 554 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id554in_sel = id2590out_output[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id554in_option0 = id544out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id554in_option1 = id316out_result[getCycle()%2];

    HWOffsetFix<64,0,UNSIGNED> id554x_1;

    switch((id554in_sel.getValueAsLong())) {
      case 0l:
        id554x_1 = id554in_option0;
        break;
      case 1l:
        id554x_1 = id554in_option1;
        break;
      default:
        id554x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id554out_result[(getCycle()+1)%2] = (id554x_1);
  }
  { // Node ID: 2795 (NodeConstantRawBits)
  }
  { // Node ID: 319 (NodeAdd)
    const HWOffsetFix<64,0,UNSIGNED> &id319in_a = id2593out_output[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id319in_b = id2795out_value;

    id319out_result[(getCycle()+1)%2] = (add_fixed<64,0,UNSIGNED,TRUNCATE>(id319in_a,id319in_b));
  }
  HWRawBits<64> id1858out_dataout;

  { // Node ID: 1858 (NodeShift)
    const HWOffsetFix<64,0,UNSIGNED> &id1858in_datain = id319out_result[getCycle()%2];

    id1858out_dataout = (shift_left_fixed(id1858in_datain,(16l)));
  }
  HWOffsetFix<64,0,UNSIGNED> id324out_output;

  { // Node ID: 324 (NodeReinterpret)
    const HWRawBits<64> &id324in_input = id1858out_dataout;

    id324out_output = (cast_bits2fixed<64,0,UNSIGNED>(id324in_input));
  }
  { // Node ID: 2794 (NodeConstantRawBits)
  }
  { // Node ID: 326 (NodeSub)
    const HWOffsetFix<64,0,UNSIGNED> &id326in_a = id2597out_output[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id326in_b = id2794out_value;

    id326out_result[(getCycle()+1)%2] = (sub_fixed<64,0,UNSIGNED,TRUNCATE>(id326in_a,id326in_b));
  }
  { // Node ID: 327 (NodeOr)
    const HWOffsetFix<64,0,UNSIGNED> &id327in_a = id324out_output;
    const HWOffsetFix<64,0,UNSIGNED> &id327in_b = id326out_result[getCycle()%2];

    HWOffsetFix<64,0,UNSIGNED> id327x_1;

    (id327x_1) = (or_fixed(id327in_a,id327in_b));
    id327out_result[(getCycle()+1)%2] = (id327x_1);
  }
  { // Node ID: 564 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id564in_sel = id2589out_output[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id564in_option0 = id554out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id564in_option1 = id327out_result[getCycle()%2];

    HWOffsetFix<64,0,UNSIGNED> id564x_1;

    switch((id564in_sel.getValueAsLong())) {
      case 0l:
        id564x_1 = id564in_option0;
        break;
      case 1l:
        id564x_1 = id564in_option1;
        break;
      default:
        id564x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id564out_result[(getCycle()+1)%2] = (id564x_1);
  }
  HWRawBits<64> id1859out_dataout;

  { // Node ID: 1859 (NodeShift)
    const HWOffsetFix<64,0,UNSIGNED> &id1859in_datain = id2594out_output[getCycle()%2];

    id1859out_dataout = (shift_left_fixed(id1859in_datain,(16l)));
  }
  { // Node ID: 2331 (NodeFIFO)
    const HWRawBits<64> &id2331in_input = id1859out_dataout;

    id2331out_output[(getCycle()+1)%2] = id2331in_input;
  }
  HWOffsetFix<64,0,UNSIGNED> id333out_output;

  { // Node ID: 333 (NodeReinterpret)
    const HWRawBits<64> &id333in_input = id2331out_output[getCycle()%2];

    id333out_output = (cast_bits2fixed<64,0,UNSIGNED>(id333in_input));
  }
  { // Node ID: 2793 (NodeConstantRawBits)
  }
  { // Node ID: 335 (NodeAdd)
    const HWOffsetFix<64,0,UNSIGNED> &id335in_a = id2598out_output[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id335in_b = id2793out_value;

    id335out_result[(getCycle()+1)%2] = (add_fixed<64,0,UNSIGNED,TRUNCATE>(id335in_a,id335in_b));
  }
  { // Node ID: 336 (NodeOr)
    const HWOffsetFix<64,0,UNSIGNED> &id336in_a = id333out_output;
    const HWOffsetFix<64,0,UNSIGNED> &id336in_b = id335out_result[getCycle()%2];

    HWOffsetFix<64,0,UNSIGNED> id336x_1;

    (id336x_1) = (or_fixed(id336in_a,id336in_b));
    id336out_result[(getCycle()+1)%2] = (id336x_1);
  }
  { // Node ID: 574 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id574in_sel = id2588out_output[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id574in_option0 = id564out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id574in_option1 = id336out_result[getCycle()%2];

    HWOffsetFix<64,0,UNSIGNED> id574x_1;

    switch((id574in_sel.getValueAsLong())) {
      case 0l:
        id574x_1 = id574in_option0;
        break;
      case 1l:
        id574x_1 = id574in_option1;
        break;
      default:
        id574x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id574out_result[(getCycle()+1)%2] = (id574x_1);
  }
  { // Node ID: 2334 (NodeFIFO)
    const HWOffsetFix<64,0,UNSIGNED> &id2334in_input = id574out_result[getCycle()%2];

    id2334out_output[(getCycle()+1)%2] = id2334in_input;
  }
  HWRawBits<64> id1860out_dataout;

  { // Node ID: 1860 (NodeShift)
    const HWOffsetFix<64,0,UNSIGNED> &id1860in_datain = id2334out_output[getCycle()%2];

    id1860out_dataout = (shift_right_fixed(id1860in_datain,(16l)));
  }
  HWOffsetFix<64,0,UNSIGNED> id696out_output;

  { // Node ID: 696 (NodeReinterpret)
    const HWRawBits<64> &id696in_input = id1860out_dataout;

    id696out_output = (cast_bits2fixed<64,0,UNSIGNED>(id696in_input));
  }
  HWRawBits<64> id730out_output;

  { // Node ID: 730 (NodeReinterpret)
    const HWOffsetFix<64,0,UNSIGNED> &id730in_input = id696out_output;

    id730out_output = (cast_fixed2bits(id730in_input));
  }
  HWRawBits<1> id731out_result;

  { // Node ID: 731 (NodeSlice)
    const HWRawBits<64> &id731in_a = id730out_output;

    id731out_result = (slice<0,1>(id731in_a));
  }
  { // Node ID: 2335 (NodeFIFO)
    const HWRawBits<1> &id2335in_input = id731out_result;

    id2335out_output[(getCycle()+4)%5] = id2335in_input;
  }
  HWOffsetFix<1,0,UNSIGNED> id732out_output;

  { // Node ID: 732 (NodeReinterpret)
    const HWRawBits<1> &id732in_input = id2335out_output[getCycle()%5];

    id732out_output = (cast_bits2fixed<1,0,UNSIGNED>(id732in_input));
  }
  HWOffsetFix<64,0,UNSIGNED> id733out_o;

  { // Node ID: 733 (NodeCast)
    const HWOffsetFix<1,0,UNSIGNED> &id733in_i = id732out_output;

    id733out_o = (cast_fixed2fixed<64,0,UNSIGNED,TRUNCATE>(id733in_i));
  }
  HWOffsetFix<64,2,UNSIGNED> id1861out_output;

  { // Node ID: 1861 (NodeReinterpret)
    const HWOffsetFix<64,0,UNSIGNED> &id1861in_input = id733out_o;

    id1861out_output = (cast_bits2fixed<64,2,UNSIGNED>((cast_fixed2bits(id1861in_input))));
  }
  HWOffsetFix<64,0,UNSIGNED> id1862out_o;

  { // Node ID: 1862 (NodeCast)
    const HWOffsetFix<64,2,UNSIGNED> &id1862in_i = id1861out_output;

    id1862out_o = (cast_fixed2fixed<64,0,UNSIGNED,TRUNCATE>(id1862in_i));
  }
  HWRawBits<64> id1863out_dataout;

  { // Node ID: 1863 (NodeShift)
    const HWOffsetFix<64,0,UNSIGNED> &id1863in_datain = id2334out_output[getCycle()%2];

    id1863out_dataout = (shift_right_fixed(id1863in_datain,(16l)));
  }
  HWOffsetFix<64,0,UNSIGNED> id768out_output;

  { // Node ID: 768 (NodeReinterpret)
    const HWRawBits<64> &id768in_input = id1863out_dataout;

    id768out_output = (cast_bits2fixed<64,0,UNSIGNED>(id768in_input));
  }
  HWRawBits<64> id826out_output;

  { // Node ID: 826 (NodeReinterpret)
    const HWOffsetFix<64,0,UNSIGNED> &id826in_input = id768out_output;

    id826out_output = (cast_fixed2bits(id826in_input));
  }
  HWRawBits<1> id827out_result;

  { // Node ID: 827 (NodeSlice)
    const HWRawBits<64> &id827in_a = id826out_output;

    id827out_result = (slice<0,1>(id827in_a));
  }
  HWOffsetFix<1,0,UNSIGNED> id828out_output;

  { // Node ID: 828 (NodeReinterpret)
    const HWRawBits<1> &id828in_input = id827out_result;

    id828out_output = (cast_bits2fixed<1,0,UNSIGNED>(id828in_input));
  }
  HWOffsetFix<64,0,UNSIGNED> id829out_o;

  { // Node ID: 829 (NodeCast)
    const HWOffsetFix<1,0,UNSIGNED> &id829in_i = id828out_output;

    id829out_o = (cast_fixed2fixed<64,0,UNSIGNED,TRUNCATE>(id829in_i));
  }
  { // Node ID: 830 (NodeSub)
    const HWOffsetFix<64,0,UNSIGNED> &id830in_a = id768out_output;
    const HWOffsetFix<64,0,UNSIGNED> &id830in_b = id829out_o;

    id830out_result[(getCycle()+1)%2] = (sub_fixed<64,0,UNSIGNED,TRUNCATE>(id830in_a,id830in_b));
  }
  { // Node ID: 2792 (NodeConstantRawBits)
  }
  { // Node ID: 770 (NodeAnd)
    const HWOffsetFix<64,0,UNSIGNED> &id770in_a = id2334out_output[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id770in_b = id2792out_value;

    HWOffsetFix<64,0,UNSIGNED> id770x_1;

    (id770x_1) = (and_fixed(id770in_a,id770in_b));
    id770out_result[(getCycle()+1)%2] = (id770x_1);
  }
  { // Node ID: 831 (NodeAdd)
    const HWOffsetFix<64,0,UNSIGNED> &id831in_a = id830out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id831in_b = id770out_result[getCycle()%2];

    id831out_result[(getCycle()+1)%2] = (add_fixed<64,0,UNSIGNED,TRUNCATE>(id831in_a,id831in_b));
  }
  HWRawBits<64> id832out_output;

  { // Node ID: 832 (NodeReinterpret)
    const HWOffsetFix<64,0,UNSIGNED> &id832in_input = id831out_result[getCycle()%2];

    id832out_output = (cast_fixed2bits(id832in_input));
  }
  HWRawBits<2> id833out_result;

  { // Node ID: 833 (NodeSlice)
    const HWRawBits<64> &id833in_a = id832out_output;

    id833out_result = (slice<0,2>(id833in_a));
  }
  { // Node ID: 2338 (NodeFIFO)
    const HWRawBits<2> &id2338in_input = id833out_result;

    id2338out_output[(getCycle()+2)%3] = id2338in_input;
  }
  HWOffsetFix<2,0,UNSIGNED> id834out_output;

  { // Node ID: 834 (NodeReinterpret)
    const HWRawBits<2> &id834in_input = id2338out_output[getCycle()%3];

    id834out_output = (cast_bits2fixed<2,0,UNSIGNED>(id834in_input));
  }
  HWOffsetFix<64,0,UNSIGNED> id835out_o;

  { // Node ID: 835 (NodeCast)
    const HWOffsetFix<2,0,UNSIGNED> &id835in_i = id834out_output;

    id835out_o = (cast_fixed2fixed<64,0,UNSIGNED,TRUNCATE>(id835in_i));
  }
  { // Node ID: 880 (NodeAdd)
    const HWOffsetFix<64,0,UNSIGNED> &id880in_a = id1862out_o;
    const HWOffsetFix<64,0,UNSIGNED> &id880in_b = id835out_o;

    id880out_result[(getCycle()+1)%2] = (add_fixed<64,0,UNSIGNED,TRUNCATE>(id880in_a,id880in_b));
  }
  { // Node ID: 2791 (NodeConstantRawBits)
  }
  { // Node ID: 1864 (NodeEqInlined)
    const HWOffsetFix<64,0,UNSIGNED> &id1864in_a = id880out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1864in_b = id2791out_value;

    id1864out_result[(getCycle()+1)%2] = (eq_fixed(id1864in_a,id1864in_b));
  }
  HWRawBits<64> id1865out_dataout;

  { // Node ID: 1865 (NodeShift)
    const HWOffsetFix<64,0,UNSIGNED> &id1865in_datain = id2247out_output[getCycle()%2];

    id1865out_dataout = (shift_left_fixed(id1865in_datain,(16l)));
  }
  HWOffsetFix<64,0,UNSIGNED> id222out_output;

  { // Node ID: 222 (NodeReinterpret)
    const HWRawBits<64> &id222in_input = id1865out_dataout;

    id222out_output = (cast_bits2fixed<64,0,UNSIGNED>(id222in_input));
  }
  { // Node ID: 2790 (NodeConstantRawBits)
  }
  { // Node ID: 224 (NodeAdd)
    const HWOffsetFix<64,0,UNSIGNED> &id224in_a = id2245out_output[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id224in_b = id2790out_value;

    id224out_result[(getCycle()+1)%2] = (add_fixed<64,0,UNSIGNED,TRUNCATE>(id224in_a,id224in_b));
  }
  { // Node ID: 225 (NodeOr)
    const HWOffsetFix<64,0,UNSIGNED> &id225in_a = id222out_output;
    const HWOffsetFix<64,0,UNSIGNED> &id225in_b = id224out_result[getCycle()%2];

    HWOffsetFix<64,0,UNSIGNED> id225x_1;

    (id225x_1) = (or_fixed(id225in_a,id225in_b));
    id225out_result[(getCycle()+1)%2] = (id225x_1);
  }
  HWRawBits<64> id1866out_dataout;

  { // Node ID: 1866 (NodeShift)
    const HWOffsetFix<64,0,UNSIGNED> &id1866in_datain = id2247out_output[getCycle()%2];

    id1866out_dataout = (shift_left_fixed(id1866in_datain,(16l)));
  }
  HWOffsetFix<64,0,UNSIGNED> id229out_output;

  { // Node ID: 229 (NodeReinterpret)
    const HWRawBits<64> &id229in_input = id1866out_dataout;

    id229out_output = (cast_bits2fixed<64,0,UNSIGNED>(id229in_input));
  }
  { // Node ID: 2789 (NodeConstantRawBits)
  }
  { // Node ID: 233 (NodeAdd)
    const HWOffsetFix<64,0,UNSIGNED> &id233in_a = id2245out_output[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id233in_b = id2789out_value;

    id233out_result[(getCycle()+1)%2] = (add_fixed<64,0,UNSIGNED,TRUNCATE>(id233in_a,id233in_b));
  }
  { // Node ID: 234 (NodeOr)
    const HWOffsetFix<64,0,UNSIGNED> &id234in_a = id229out_output;
    const HWOffsetFix<64,0,UNSIGNED> &id234in_b = id233out_result[getCycle()%2];

    HWOffsetFix<64,0,UNSIGNED> id234x_1;

    (id234x_1) = (or_fixed(id234in_a,id234in_b));
    id234out_result[(getCycle()+1)%2] = (id234x_1);
  }
  { // Node ID: 533 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id533in_sel = id2262out_output[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id533in_option0 = id225out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id533in_option1 = id234out_result[getCycle()%2];

    HWOffsetFix<64,0,UNSIGNED> id533x_1;

    switch((id533in_sel.getValueAsLong())) {
      case 0l:
        id533x_1 = id533in_option0;
        break;
      case 1l:
        id533x_1 = id533in_option1;
        break;
      default:
        id533x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id533out_result[(getCycle()+1)%2] = (id533x_1);
  }
  { // Node ID: 2788 (NodeConstantRawBits)
  }
  { // Node ID: 239 (NodeAdd)
    const HWOffsetFix<64,0,UNSIGNED> &id239in_a = id2247out_output[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id239in_b = id2788out_value;

    id239out_result[(getCycle()+1)%2] = (add_fixed<64,0,UNSIGNED,TRUNCATE>(id239in_a,id239in_b));
  }
  HWRawBits<64> id1867out_dataout;

  { // Node ID: 1867 (NodeShift)
    const HWOffsetFix<64,0,UNSIGNED> &id1867in_datain = id239out_result[getCycle()%2];

    id1867out_dataout = (shift_left_fixed(id1867in_datain,(16l)));
  }
  HWOffsetFix<64,0,UNSIGNED> id242out_output;

  { // Node ID: 242 (NodeReinterpret)
    const HWRawBits<64> &id242in_input = id1867out_dataout;

    id242out_output = (cast_bits2fixed<64,0,UNSIGNED>(id242in_input));
  }
  { // Node ID: 243 (NodeOr)
    const HWOffsetFix<64,0,UNSIGNED> &id243in_a = id242out_output;
    const HWOffsetFix<64,0,UNSIGNED> &id243in_b = id2596out_output[getCycle()%2];

    HWOffsetFix<64,0,UNSIGNED> id243x_1;

    (id243x_1) = (or_fixed(id243in_a,id243in_b));
    id243out_result[(getCycle()+1)%2] = (id243x_1);
  }
  { // Node ID: 543 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id543in_sel = id2591out_output[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id543in_option0 = id533out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id543in_option1 = id243out_result[getCycle()%2];

    HWOffsetFix<64,0,UNSIGNED> id543x_1;

    switch((id543in_sel.getValueAsLong())) {
      case 0l:
        id543x_1 = id543in_option0;
        break;
      case 1l:
        id543x_1 = id543in_option1;
        break;
      default:
        id543x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id543out_result[(getCycle()+1)%2] = (id543x_1);
  }
  { // Node ID: 2787 (NodeConstantRawBits)
  }
  { // Node ID: 248 (NodeAdd)
    const HWOffsetFix<64,0,UNSIGNED> &id248in_a = id2592out_output[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id248in_b = id2787out_value;

    id248out_result[(getCycle()+1)%2] = (add_fixed<64,0,UNSIGNED,TRUNCATE>(id248in_a,id248in_b));
  }
  HWRawBits<64> id1868out_dataout;

  { // Node ID: 1868 (NodeShift)
    const HWOffsetFix<64,0,UNSIGNED> &id1868in_datain = id248out_result[getCycle()%2];

    id1868out_dataout = (shift_left_fixed(id1868in_datain,(16l)));
  }
  HWOffsetFix<64,0,UNSIGNED> id251out_output;

  { // Node ID: 251 (NodeReinterpret)
    const HWRawBits<64> &id251in_input = id1868out_dataout;

    id251out_output = (cast_bits2fixed<64,0,UNSIGNED>(id251in_input));
  }
  { // Node ID: 2786 (NodeConstantRawBits)
  }
  { // Node ID: 255 (NodeAdd)
    const HWOffsetFix<64,0,UNSIGNED> &id255in_a = id2596out_output[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id255in_b = id2786out_value;

    id255out_result[(getCycle()+1)%2] = (add_fixed<64,0,UNSIGNED,TRUNCATE>(id255in_a,id255in_b));
  }
  { // Node ID: 256 (NodeOr)
    const HWOffsetFix<64,0,UNSIGNED> &id256in_a = id251out_output;
    const HWOffsetFix<64,0,UNSIGNED> &id256in_b = id255out_result[getCycle()%2];

    HWOffsetFix<64,0,UNSIGNED> id256x_1;

    (id256x_1) = (or_fixed(id256in_a,id256in_b));
    id256out_result[(getCycle()+1)%2] = (id256x_1);
  }
  { // Node ID: 553 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id553in_sel = id2590out_output[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id553in_option0 = id543out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id553in_option1 = id256out_result[getCycle()%2];

    HWOffsetFix<64,0,UNSIGNED> id553x_1;

    switch((id553in_sel.getValueAsLong())) {
      case 0l:
        id553x_1 = id553in_option0;
        break;
      case 1l:
        id553x_1 = id553in_option1;
        break;
      default:
        id553x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id553out_result[(getCycle()+1)%2] = (id553x_1);
  }
  { // Node ID: 2785 (NodeConstantRawBits)
  }
  { // Node ID: 261 (NodeAdd)
    const HWOffsetFix<64,0,UNSIGNED> &id261in_a = id2593out_output[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id261in_b = id2785out_value;

    id261out_result[(getCycle()+1)%2] = (add_fixed<64,0,UNSIGNED,TRUNCATE>(id261in_a,id261in_b));
  }
  HWRawBits<64> id1869out_dataout;

  { // Node ID: 1869 (NodeShift)
    const HWOffsetFix<64,0,UNSIGNED> &id1869in_datain = id261out_result[getCycle()%2];

    id1869out_dataout = (shift_left_fixed(id1869in_datain,(16l)));
  }
  HWOffsetFix<64,0,UNSIGNED> id264out_output;

  { // Node ID: 264 (NodeReinterpret)
    const HWRawBits<64> &id264in_input = id1869out_dataout;

    id264out_output = (cast_bits2fixed<64,0,UNSIGNED>(id264in_input));
  }
  { // Node ID: 2784 (NodeConstantRawBits)
  }
  { // Node ID: 266 (NodeSub)
    const HWOffsetFix<64,0,UNSIGNED> &id266in_a = id2597out_output[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id266in_b = id2784out_value;

    id266out_result[(getCycle()+1)%2] = (sub_fixed<64,0,UNSIGNED,TRUNCATE>(id266in_a,id266in_b));
  }
  { // Node ID: 267 (NodeOr)
    const HWOffsetFix<64,0,UNSIGNED> &id267in_a = id264out_output;
    const HWOffsetFix<64,0,UNSIGNED> &id267in_b = id266out_result[getCycle()%2];

    HWOffsetFix<64,0,UNSIGNED> id267x_1;

    (id267x_1) = (or_fixed(id267in_a,id267in_b));
    id267out_result[(getCycle()+1)%2] = (id267x_1);
  }
  { // Node ID: 563 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id563in_sel = id2589out_output[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id563in_option0 = id553out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id563in_option1 = id267out_result[getCycle()%2];

    HWOffsetFix<64,0,UNSIGNED> id563x_1;

    switch((id563in_sel.getValueAsLong())) {
      case 0l:
        id563x_1 = id563in_option0;
        break;
      case 1l:
        id563x_1 = id563in_option1;
        break;
      default:
        id563x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id563out_result[(getCycle()+1)%2] = (id563x_1);
  }
  { // Node ID: 2783 (NodeConstantRawBits)
  }
  { // Node ID: 270 (NodeAdd)
    const HWOffsetFix<64,0,UNSIGNED> &id270in_a = id2594out_output[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id270in_b = id2783out_value;

    id270out_result[(getCycle()+1)%2] = (add_fixed<64,0,UNSIGNED,TRUNCATE>(id270in_a,id270in_b));
  }
  HWRawBits<64> id1870out_dataout;

  { // Node ID: 1870 (NodeShift)
    const HWOffsetFix<64,0,UNSIGNED> &id1870in_datain = id270out_result[getCycle()%2];

    id1870out_dataout = (shift_left_fixed(id1870in_datain,(16l)));
  }
  HWOffsetFix<64,0,UNSIGNED> id273out_output;

  { // Node ID: 273 (NodeReinterpret)
    const HWRawBits<64> &id273in_input = id1870out_dataout;

    id273out_output = (cast_bits2fixed<64,0,UNSIGNED>(id273in_input));
  }
  { // Node ID: 2599 (NodeFIFO)
    const HWOffsetFix<64,0,UNSIGNED> &id2599in_input = id2598out_output[getCycle()%2];

    id2599out_output[(getCycle()+1)%2] = id2599in_input;
  }
  { // Node ID: 276 (NodeOr)
    const HWOffsetFix<64,0,UNSIGNED> &id276in_a = id273out_output;
    const HWOffsetFix<64,0,UNSIGNED> &id276in_b = id2599out_output[getCycle()%2];

    HWOffsetFix<64,0,UNSIGNED> id276x_1;

    (id276x_1) = (or_fixed(id276in_a,id276in_b));
    id276out_result[(getCycle()+1)%2] = (id276x_1);
  }
  { // Node ID: 573 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id573in_sel = id2588out_output[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id573in_option0 = id563out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id573in_option1 = id276out_result[getCycle()%2];

    HWOffsetFix<64,0,UNSIGNED> id573x_1;

    switch((id573in_sel.getValueAsLong())) {
      case 0l:
        id573x_1 = id573in_option0;
        break;
      case 1l:
        id573x_1 = id573in_option1;
        break;
      default:
        id573x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id573out_result[(getCycle()+1)%2] = (id573x_1);
  }
  { // Node ID: 2356 (NodeFIFO)
    const HWOffsetFix<64,0,UNSIGNED> &id2356in_input = id573out_result[getCycle()%2];

    id2356out_output[(getCycle()+1)%2] = id2356in_input;
  }
  HWRawBits<64> id1871out_dataout;

  { // Node ID: 1871 (NodeShift)
    const HWOffsetFix<64,0,UNSIGNED> &id1871in_datain = id2356out_output[getCycle()%2];

    id1871out_dataout = (shift_right_fixed(id1871in_datain,(16l)));
  }
  HWOffsetFix<64,0,UNSIGNED> id691out_output;

  { // Node ID: 691 (NodeReinterpret)
    const HWRawBits<64> &id691in_input = id1871out_dataout;

    id691out_output = (cast_bits2fixed<64,0,UNSIGNED>(id691in_input));
  }
  HWRawBits<64> id726out_output;

  { // Node ID: 726 (NodeReinterpret)
    const HWOffsetFix<64,0,UNSIGNED> &id726in_input = id691out_output;

    id726out_output = (cast_fixed2bits(id726in_input));
  }
  HWRawBits<1> id727out_result;

  { // Node ID: 727 (NodeSlice)
    const HWRawBits<64> &id727in_a = id726out_output;

    id727out_result = (slice<0,1>(id727in_a));
  }
  { // Node ID: 2357 (NodeFIFO)
    const HWRawBits<1> &id2357in_input = id727out_result;

    id2357out_output[(getCycle()+3)%4] = id2357in_input;
  }
  HWOffsetFix<1,0,UNSIGNED> id728out_output;

  { // Node ID: 728 (NodeReinterpret)
    const HWRawBits<1> &id728in_input = id2357out_output[getCycle()%4];

    id728out_output = (cast_bits2fixed<1,0,UNSIGNED>(id728in_input));
  }
  HWOffsetFix<64,0,UNSIGNED> id729out_o;

  { // Node ID: 729 (NodeCast)
    const HWOffsetFix<1,0,UNSIGNED> &id729in_i = id728out_output;

    id729out_o = (cast_fixed2fixed<64,0,UNSIGNED,TRUNCATE>(id729in_i));
  }
  HWOffsetFix<64,2,UNSIGNED> id1872out_output;

  { // Node ID: 1872 (NodeReinterpret)
    const HWOffsetFix<64,0,UNSIGNED> &id1872in_input = id729out_o;

    id1872out_output = (cast_bits2fixed<64,2,UNSIGNED>((cast_fixed2bits(id1872in_input))));
  }
  HWOffsetFix<64,0,UNSIGNED> id1873out_o;

  { // Node ID: 1873 (NodeCast)
    const HWOffsetFix<64,2,UNSIGNED> &id1873in_i = id1872out_output;

    id1873out_o = (cast_fixed2fixed<64,0,UNSIGNED,TRUNCATE>(id1873in_i));
  }
  HWRawBits<64> id1874out_dataout;

  { // Node ID: 1874 (NodeShift)
    const HWOffsetFix<64,0,UNSIGNED> &id1874in_datain = id2356out_output[getCycle()%2];

    id1874out_dataout = (shift_right_fixed(id1874in_datain,(16l)));
  }
  HWOffsetFix<64,0,UNSIGNED> id763out_output;

  { // Node ID: 763 (NodeReinterpret)
    const HWRawBits<64> &id763in_input = id1874out_dataout;

    id763out_output = (cast_bits2fixed<64,0,UNSIGNED>(id763in_input));
  }
  HWRawBits<64> id816out_output;

  { // Node ID: 816 (NodeReinterpret)
    const HWOffsetFix<64,0,UNSIGNED> &id816in_input = id763out_output;

    id816out_output = (cast_fixed2bits(id816in_input));
  }
  HWRawBits<1> id817out_result;

  { // Node ID: 817 (NodeSlice)
    const HWRawBits<64> &id817in_a = id816out_output;

    id817out_result = (slice<0,1>(id817in_a));
  }
  HWOffsetFix<1,0,UNSIGNED> id818out_output;

  { // Node ID: 818 (NodeReinterpret)
    const HWRawBits<1> &id818in_input = id817out_result;

    id818out_output = (cast_bits2fixed<1,0,UNSIGNED>(id818in_input));
  }
  HWOffsetFix<64,0,UNSIGNED> id819out_o;

  { // Node ID: 819 (NodeCast)
    const HWOffsetFix<1,0,UNSIGNED> &id819in_i = id818out_output;

    id819out_o = (cast_fixed2fixed<64,0,UNSIGNED,TRUNCATE>(id819in_i));
  }
  { // Node ID: 820 (NodeSub)
    const HWOffsetFix<64,0,UNSIGNED> &id820in_a = id763out_output;
    const HWOffsetFix<64,0,UNSIGNED> &id820in_b = id819out_o;

    id820out_result[(getCycle()+1)%2] = (sub_fixed<64,0,UNSIGNED,TRUNCATE>(id820in_a,id820in_b));
  }
  { // Node ID: 2782 (NodeConstantRawBits)
  }
  { // Node ID: 765 (NodeAnd)
    const HWOffsetFix<64,0,UNSIGNED> &id765in_a = id2356out_output[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id765in_b = id2782out_value;

    HWOffsetFix<64,0,UNSIGNED> id765x_1;

    (id765x_1) = (and_fixed(id765in_a,id765in_b));
    id765out_result[(getCycle()+1)%2] = (id765x_1);
  }
  { // Node ID: 821 (NodeAdd)
    const HWOffsetFix<64,0,UNSIGNED> &id821in_a = id820out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id821in_b = id765out_result[getCycle()%2];

    id821out_result[(getCycle()+1)%2] = (add_fixed<64,0,UNSIGNED,TRUNCATE>(id821in_a,id821in_b));
  }
  HWRawBits<64> id822out_output;

  { // Node ID: 822 (NodeReinterpret)
    const HWOffsetFix<64,0,UNSIGNED> &id822in_input = id821out_result[getCycle()%2];

    id822out_output = (cast_fixed2bits(id822in_input));
  }
  HWRawBits<2> id823out_result;

  { // Node ID: 823 (NodeSlice)
    const HWRawBits<64> &id823in_a = id822out_output;

    id823out_result = (slice<0,2>(id823in_a));
  }
  { // Node ID: 2360 (NodeFIFO)
    const HWRawBits<2> &id2360in_input = id823out_result;

    id2360out_output[(getCycle()+1)%2] = id2360in_input;
  }
  HWOffsetFix<2,0,UNSIGNED> id824out_output;

  { // Node ID: 824 (NodeReinterpret)
    const HWRawBits<2> &id824in_input = id2360out_output[getCycle()%2];

    id824out_output = (cast_bits2fixed<2,0,UNSIGNED>(id824in_input));
  }
  HWOffsetFix<64,0,UNSIGNED> id825out_o;

  { // Node ID: 825 (NodeCast)
    const HWOffsetFix<2,0,UNSIGNED> &id825in_i = id824out_output;

    id825out_o = (cast_fixed2fixed<64,0,UNSIGNED,TRUNCATE>(id825in_i));
  }
  { // Node ID: 877 (NodeAdd)
    const HWOffsetFix<64,0,UNSIGNED> &id877in_a = id1873out_o;
    const HWOffsetFix<64,0,UNSIGNED> &id877in_b = id825out_o;

    id877out_result[(getCycle()+1)%2] = (add_fixed<64,0,UNSIGNED,TRUNCATE>(id877in_a,id877in_b));
  }
  { // Node ID: 2781 (NodeConstantRawBits)
  }
  { // Node ID: 1875 (NodeEqInlined)
    const HWOffsetFix<64,0,UNSIGNED> &id1875in_a = id877out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1875in_b = id2781out_value;

    id1875out_result[(getCycle()+1)%2] = (eq_fixed(id1875in_a,id1875in_b));
  }
  HWRawBits<64> id1876out_dataout;

  { // Node ID: 1876 (NodeShift)
    const HWOffsetFix<64,0,UNSIGNED> &id1876in_datain = id2247out_output[getCycle()%2];

    id1876out_dataout = (shift_left_fixed(id1876in_datain,(16l)));
  }
  HWOffsetFix<64,0,UNSIGNED> id162out_output;

  { // Node ID: 162 (NodeReinterpret)
    const HWRawBits<64> &id162in_input = id1876out_dataout;

    id162out_output = (cast_bits2fixed<64,0,UNSIGNED>(id162in_input));
  }
  { // Node ID: 2780 (NodeConstantRawBits)
  }
  { // Node ID: 164 (NodeAdd)
    const HWOffsetFix<64,0,UNSIGNED> &id164in_a = id2245out_output[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id164in_b = id2780out_value;

    id164out_result[(getCycle()+1)%2] = (add_fixed<64,0,UNSIGNED,TRUNCATE>(id164in_a,id164in_b));
  }
  { // Node ID: 165 (NodeOr)
    const HWOffsetFix<64,0,UNSIGNED> &id165in_a = id162out_output;
    const HWOffsetFix<64,0,UNSIGNED> &id165in_b = id164out_result[getCycle()%2];

    HWOffsetFix<64,0,UNSIGNED> id165x_1;

    (id165x_1) = (or_fixed(id165in_a,id165in_b));
    id165out_result[(getCycle()+1)%2] = (id165x_1);
  }
  HWRawBits<64> id1877out_dataout;

  { // Node ID: 1877 (NodeShift)
    const HWOffsetFix<64,0,UNSIGNED> &id1877in_datain = id2247out_output[getCycle()%2];

    id1877out_dataout = (shift_left_fixed(id1877in_datain,(16l)));
  }
  HWOffsetFix<64,0,UNSIGNED> id169out_output;

  { // Node ID: 169 (NodeReinterpret)
    const HWRawBits<64> &id169in_input = id1877out_dataout;

    id169out_output = (cast_bits2fixed<64,0,UNSIGNED>(id169in_input));
  }
  { // Node ID: 2779 (NodeConstantRawBits)
  }
  { // Node ID: 173 (NodeAdd)
    const HWOffsetFix<64,0,UNSIGNED> &id173in_a = id2245out_output[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id173in_b = id2779out_value;

    id173out_result[(getCycle()+1)%2] = (add_fixed<64,0,UNSIGNED,TRUNCATE>(id173in_a,id173in_b));
  }
  { // Node ID: 174 (NodeOr)
    const HWOffsetFix<64,0,UNSIGNED> &id174in_a = id169out_output;
    const HWOffsetFix<64,0,UNSIGNED> &id174in_b = id173out_result[getCycle()%2];

    HWOffsetFix<64,0,UNSIGNED> id174x_1;

    (id174x_1) = (or_fixed(id174in_a,id174in_b));
    id174out_result[(getCycle()+1)%2] = (id174x_1);
  }
  { // Node ID: 532 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id532in_sel = id2262out_output[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id532in_option0 = id165out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id532in_option1 = id174out_result[getCycle()%2];

    HWOffsetFix<64,0,UNSIGNED> id532x_1;

    switch((id532in_sel.getValueAsLong())) {
      case 0l:
        id532x_1 = id532in_option0;
        break;
      case 1l:
        id532x_1 = id532in_option1;
        break;
      default:
        id532x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id532out_result[(getCycle()+1)%2] = (id532x_1);
  }
  { // Node ID: 2778 (NodeConstantRawBits)
  }
  { // Node ID: 179 (NodeAdd)
    const HWOffsetFix<64,0,UNSIGNED> &id179in_a = id2247out_output[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id179in_b = id2778out_value;

    id179out_result[(getCycle()+1)%2] = (add_fixed<64,0,UNSIGNED,TRUNCATE>(id179in_a,id179in_b));
  }
  HWRawBits<64> id1878out_dataout;

  { // Node ID: 1878 (NodeShift)
    const HWOffsetFix<64,0,UNSIGNED> &id1878in_datain = id179out_result[getCycle()%2];

    id1878out_dataout = (shift_left_fixed(id1878in_datain,(16l)));
  }
  HWOffsetFix<64,0,UNSIGNED> id182out_output;

  { // Node ID: 182 (NodeReinterpret)
    const HWRawBits<64> &id182in_input = id1878out_dataout;

    id182out_output = (cast_bits2fixed<64,0,UNSIGNED>(id182in_input));
  }
  { // Node ID: 183 (NodeOr)
    const HWOffsetFix<64,0,UNSIGNED> &id183in_a = id182out_output;
    const HWOffsetFix<64,0,UNSIGNED> &id183in_b = id2596out_output[getCycle()%2];

    HWOffsetFix<64,0,UNSIGNED> id183x_1;

    (id183x_1) = (or_fixed(id183in_a,id183in_b));
    id183out_result[(getCycle()+1)%2] = (id183x_1);
  }
  { // Node ID: 542 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id542in_sel = id2591out_output[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id542in_option0 = id532out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id542in_option1 = id183out_result[getCycle()%2];

    HWOffsetFix<64,0,UNSIGNED> id542x_1;

    switch((id542in_sel.getValueAsLong())) {
      case 0l:
        id542x_1 = id542in_option0;
        break;
      case 1l:
        id542x_1 = id542in_option1;
        break;
      default:
        id542x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id542out_result[(getCycle()+1)%2] = (id542x_1);
  }
  { // Node ID: 2777 (NodeConstantRawBits)
  }
  { // Node ID: 188 (NodeAdd)
    const HWOffsetFix<64,0,UNSIGNED> &id188in_a = id2592out_output[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id188in_b = id2777out_value;

    id188out_result[(getCycle()+1)%2] = (add_fixed<64,0,UNSIGNED,TRUNCATE>(id188in_a,id188in_b));
  }
  HWRawBits<64> id1879out_dataout;

  { // Node ID: 1879 (NodeShift)
    const HWOffsetFix<64,0,UNSIGNED> &id1879in_datain = id188out_result[getCycle()%2];

    id1879out_dataout = (shift_left_fixed(id1879in_datain,(16l)));
  }
  HWOffsetFix<64,0,UNSIGNED> id191out_output;

  { // Node ID: 191 (NodeReinterpret)
    const HWRawBits<64> &id191in_input = id1879out_dataout;

    id191out_output = (cast_bits2fixed<64,0,UNSIGNED>(id191in_input));
  }
  { // Node ID: 2776 (NodeConstantRawBits)
  }
  { // Node ID: 195 (NodeAdd)
    const HWOffsetFix<64,0,UNSIGNED> &id195in_a = id2596out_output[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id195in_b = id2776out_value;

    id195out_result[(getCycle()+1)%2] = (add_fixed<64,0,UNSIGNED,TRUNCATE>(id195in_a,id195in_b));
  }
  { // Node ID: 196 (NodeOr)
    const HWOffsetFix<64,0,UNSIGNED> &id196in_a = id191out_output;
    const HWOffsetFix<64,0,UNSIGNED> &id196in_b = id195out_result[getCycle()%2];

    HWOffsetFix<64,0,UNSIGNED> id196x_1;

    (id196x_1) = (or_fixed(id196in_a,id196in_b));
    id196out_result[(getCycle()+1)%2] = (id196x_1);
  }
  { // Node ID: 552 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id552in_sel = id2590out_output[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id552in_option0 = id542out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id552in_option1 = id196out_result[getCycle()%2];

    HWOffsetFix<64,0,UNSIGNED> id552x_1;

    switch((id552in_sel.getValueAsLong())) {
      case 0l:
        id552x_1 = id552in_option0;
        break;
      case 1l:
        id552x_1 = id552in_option1;
        break;
      default:
        id552x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id552out_result[(getCycle()+1)%2] = (id552x_1);
  }
  { // Node ID: 2775 (NodeConstantRawBits)
  }
  { // Node ID: 201 (NodeAdd)
    const HWOffsetFix<64,0,UNSIGNED> &id201in_a = id2593out_output[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id201in_b = id2775out_value;

    id201out_result[(getCycle()+1)%2] = (add_fixed<64,0,UNSIGNED,TRUNCATE>(id201in_a,id201in_b));
  }
  HWRawBits<64> id1880out_dataout;

  { // Node ID: 1880 (NodeShift)
    const HWOffsetFix<64,0,UNSIGNED> &id1880in_datain = id201out_result[getCycle()%2];

    id1880out_dataout = (shift_left_fixed(id1880in_datain,(16l)));
  }
  HWOffsetFix<64,0,UNSIGNED> id204out_output;

  { // Node ID: 204 (NodeReinterpret)
    const HWRawBits<64> &id204in_input = id1880out_dataout;

    id204out_output = (cast_bits2fixed<64,0,UNSIGNED>(id204in_input));
  }
  { // Node ID: 2774 (NodeConstantRawBits)
  }
  { // Node ID: 206 (NodeSub)
    const HWOffsetFix<64,0,UNSIGNED> &id206in_a = id2597out_output[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id206in_b = id2774out_value;

    id206out_result[(getCycle()+1)%2] = (sub_fixed<64,0,UNSIGNED,TRUNCATE>(id206in_a,id206in_b));
  }
  { // Node ID: 207 (NodeOr)
    const HWOffsetFix<64,0,UNSIGNED> &id207in_a = id204out_output;
    const HWOffsetFix<64,0,UNSIGNED> &id207in_b = id206out_result[getCycle()%2];

    HWOffsetFix<64,0,UNSIGNED> id207x_1;

    (id207x_1) = (or_fixed(id207in_a,id207in_b));
    id207out_result[(getCycle()+1)%2] = (id207x_1);
  }
  { // Node ID: 562 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id562in_sel = id2589out_output[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id562in_option0 = id552out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id562in_option1 = id207out_result[getCycle()%2];

    HWOffsetFix<64,0,UNSIGNED> id562x_1;

    switch((id562in_sel.getValueAsLong())) {
      case 0l:
        id562x_1 = id562in_option0;
        break;
      case 1l:
        id562x_1 = id562in_option1;
        break;
      default:
        id562x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id562out_result[(getCycle()+1)%2] = (id562x_1);
  }
  { // Node ID: 2773 (NodeConstantRawBits)
  }
  { // Node ID: 210 (NodeAdd)
    const HWOffsetFix<64,0,UNSIGNED> &id210in_a = id2594out_output[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id210in_b = id2773out_value;

    id210out_result[(getCycle()+1)%2] = (add_fixed<64,0,UNSIGNED,TRUNCATE>(id210in_a,id210in_b));
  }
  HWRawBits<64> id1881out_dataout;

  { // Node ID: 1881 (NodeShift)
    const HWOffsetFix<64,0,UNSIGNED> &id1881in_datain = id210out_result[getCycle()%2];

    id1881out_dataout = (shift_left_fixed(id1881in_datain,(16l)));
  }
  HWOffsetFix<64,0,UNSIGNED> id213out_output;

  { // Node ID: 213 (NodeReinterpret)
    const HWRawBits<64> &id213in_input = id1881out_dataout;

    id213out_output = (cast_bits2fixed<64,0,UNSIGNED>(id213in_input));
  }
  { // Node ID: 216 (NodeOr)
    const HWOffsetFix<64,0,UNSIGNED> &id216in_a = id213out_output;
    const HWOffsetFix<64,0,UNSIGNED> &id216in_b = id2599out_output[getCycle()%2];

    HWOffsetFix<64,0,UNSIGNED> id216x_1;

    (id216x_1) = (or_fixed(id216in_a,id216in_b));
    id216out_result[(getCycle()+1)%2] = (id216x_1);
  }
  { // Node ID: 572 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id572in_sel = id2588out_output[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id572in_option0 = id562out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id572in_option1 = id216out_result[getCycle()%2];

    HWOffsetFix<64,0,UNSIGNED> id572x_1;

    switch((id572in_sel.getValueAsLong())) {
      case 0l:
        id572x_1 = id572in_option0;
        break;
      case 1l:
        id572x_1 = id572in_option1;
        break;
      default:
        id572x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id572out_result[(getCycle()+1)%2] = (id572x_1);
  }
  { // Node ID: 2378 (NodeFIFO)
    const HWOffsetFix<64,0,UNSIGNED> &id2378in_input = id572out_result[getCycle()%2];

    id2378out_output[(getCycle()+1)%2] = id2378in_input;
  }
  HWRawBits<64> id1882out_dataout;

  { // Node ID: 1882 (NodeShift)
    const HWOffsetFix<64,0,UNSIGNED> &id1882in_datain = id2378out_output[getCycle()%2];

    id1882out_dataout = (shift_right_fixed(id1882in_datain,(16l)));
  }
  HWOffsetFix<64,0,UNSIGNED> id686out_output;

  { // Node ID: 686 (NodeReinterpret)
    const HWRawBits<64> &id686in_input = id1882out_dataout;

    id686out_output = (cast_bits2fixed<64,0,UNSIGNED>(id686in_input));
  }
  HWRawBits<64> id722out_output;

  { // Node ID: 722 (NodeReinterpret)
    const HWOffsetFix<64,0,UNSIGNED> &id722in_input = id686out_output;

    id722out_output = (cast_fixed2bits(id722in_input));
  }
  HWRawBits<1> id723out_result;

  { // Node ID: 723 (NodeSlice)
    const HWRawBits<64> &id723in_a = id722out_output;

    id723out_result = (slice<0,1>(id723in_a));
  }
  { // Node ID: 2379 (NodeFIFO)
    const HWRawBits<1> &id2379in_input = id723out_result;

    id2379out_output[(getCycle()+2)%3] = id2379in_input;
  }
  HWOffsetFix<1,0,UNSIGNED> id724out_output;

  { // Node ID: 724 (NodeReinterpret)
    const HWRawBits<1> &id724in_input = id2379out_output[getCycle()%3];

    id724out_output = (cast_bits2fixed<1,0,UNSIGNED>(id724in_input));
  }
  HWOffsetFix<64,0,UNSIGNED> id725out_o;

  { // Node ID: 725 (NodeCast)
    const HWOffsetFix<1,0,UNSIGNED> &id725in_i = id724out_output;

    id725out_o = (cast_fixed2fixed<64,0,UNSIGNED,TRUNCATE>(id725in_i));
  }
  HWOffsetFix<64,2,UNSIGNED> id1883out_output;

  { // Node ID: 1883 (NodeReinterpret)
    const HWOffsetFix<64,0,UNSIGNED> &id1883in_input = id725out_o;

    id1883out_output = (cast_bits2fixed<64,2,UNSIGNED>((cast_fixed2bits(id1883in_input))));
  }
  HWOffsetFix<64,0,UNSIGNED> id1884out_o;

  { // Node ID: 1884 (NodeCast)
    const HWOffsetFix<64,2,UNSIGNED> &id1884in_i = id1883out_output;

    id1884out_o = (cast_fixed2fixed<64,0,UNSIGNED,TRUNCATE>(id1884in_i));
  }
  HWRawBits<64> id1885out_dataout;

  { // Node ID: 1885 (NodeShift)
    const HWOffsetFix<64,0,UNSIGNED> &id1885in_datain = id2378out_output[getCycle()%2];

    id1885out_dataout = (shift_right_fixed(id1885in_datain,(16l)));
  }
  HWOffsetFix<64,0,UNSIGNED> id758out_output;

  { // Node ID: 758 (NodeReinterpret)
    const HWRawBits<64> &id758in_input = id1885out_dataout;

    id758out_output = (cast_bits2fixed<64,0,UNSIGNED>(id758in_input));
  }
  HWRawBits<64> id806out_output;

  { // Node ID: 806 (NodeReinterpret)
    const HWOffsetFix<64,0,UNSIGNED> &id806in_input = id758out_output;

    id806out_output = (cast_fixed2bits(id806in_input));
  }
  HWRawBits<1> id807out_result;

  { // Node ID: 807 (NodeSlice)
    const HWRawBits<64> &id807in_a = id806out_output;

    id807out_result = (slice<0,1>(id807in_a));
  }
  HWOffsetFix<1,0,UNSIGNED> id808out_output;

  { // Node ID: 808 (NodeReinterpret)
    const HWRawBits<1> &id808in_input = id807out_result;

    id808out_output = (cast_bits2fixed<1,0,UNSIGNED>(id808in_input));
  }
  HWOffsetFix<64,0,UNSIGNED> id809out_o;

  { // Node ID: 809 (NodeCast)
    const HWOffsetFix<1,0,UNSIGNED> &id809in_i = id808out_output;

    id809out_o = (cast_fixed2fixed<64,0,UNSIGNED,TRUNCATE>(id809in_i));
  }
  { // Node ID: 810 (NodeSub)
    const HWOffsetFix<64,0,UNSIGNED> &id810in_a = id758out_output;
    const HWOffsetFix<64,0,UNSIGNED> &id810in_b = id809out_o;

    id810out_result[(getCycle()+1)%2] = (sub_fixed<64,0,UNSIGNED,TRUNCATE>(id810in_a,id810in_b));
  }
  { // Node ID: 2772 (NodeConstantRawBits)
  }
  { // Node ID: 760 (NodeAnd)
    const HWOffsetFix<64,0,UNSIGNED> &id760in_a = id2378out_output[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id760in_b = id2772out_value;

    HWOffsetFix<64,0,UNSIGNED> id760x_1;

    (id760x_1) = (and_fixed(id760in_a,id760in_b));
    id760out_result[(getCycle()+1)%2] = (id760x_1);
  }
  { // Node ID: 811 (NodeAdd)
    const HWOffsetFix<64,0,UNSIGNED> &id811in_a = id810out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id811in_b = id760out_result[getCycle()%2];

    id811out_result[(getCycle()+1)%2] = (add_fixed<64,0,UNSIGNED,TRUNCATE>(id811in_a,id811in_b));
  }
  HWRawBits<64> id812out_output;

  { // Node ID: 812 (NodeReinterpret)
    const HWOffsetFix<64,0,UNSIGNED> &id812in_input = id811out_result[getCycle()%2];

    id812out_output = (cast_fixed2bits(id812in_input));
  }
  HWRawBits<2> id813out_result;

  { // Node ID: 813 (NodeSlice)
    const HWRawBits<64> &id813in_a = id812out_output;

    id813out_result = (slice<0,2>(id813in_a));
  }
  HWOffsetFix<2,0,UNSIGNED> id814out_output;

  { // Node ID: 814 (NodeReinterpret)
    const HWRawBits<2> &id814in_input = id813out_result;

    id814out_output = (cast_bits2fixed<2,0,UNSIGNED>(id814in_input));
  }
  HWOffsetFix<64,0,UNSIGNED> id815out_o;

  { // Node ID: 815 (NodeCast)
    const HWOffsetFix<2,0,UNSIGNED> &id815in_i = id814out_output;

    id815out_o = (cast_fixed2fixed<64,0,UNSIGNED,TRUNCATE>(id815in_i));
  }
  { // Node ID: 874 (NodeAdd)
    const HWOffsetFix<64,0,UNSIGNED> &id874in_a = id1884out_o;
    const HWOffsetFix<64,0,UNSIGNED> &id874in_b = id815out_o;

    id874out_result[(getCycle()+1)%2] = (add_fixed<64,0,UNSIGNED,TRUNCATE>(id874in_a,id874in_b));
  }
  { // Node ID: 2771 (NodeConstantRawBits)
  }
  { // Node ID: 1886 (NodeEqInlined)
    const HWOffsetFix<64,0,UNSIGNED> &id1886in_a = id874out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1886in_b = id2771out_value;

    id1886out_result[(getCycle()+1)%2] = (eq_fixed(id1886in_a,id1886in_b));
  }
  HWRawBits<64> id1887out_dataout;

  { // Node ID: 1887 (NodeShift)
    const HWOffsetFix<64,0,UNSIGNED> &id1887in_datain = id2247out_output[getCycle()%2];

    id1887out_dataout = (shift_left_fixed(id1887in_datain,(16l)));
  }
  HWOffsetFix<64,0,UNSIGNED> id102out_output;

  { // Node ID: 102 (NodeReinterpret)
    const HWRawBits<64> &id102in_input = id1887out_dataout;

    id102out_output = (cast_bits2fixed<64,0,UNSIGNED>(id102in_input));
  }
  { // Node ID: 2770 (NodeConstantRawBits)
  }
  { // Node ID: 104 (NodeAdd)
    const HWOffsetFix<64,0,UNSIGNED> &id104in_a = id2245out_output[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id104in_b = id2770out_value;

    id104out_result[(getCycle()+1)%2] = (add_fixed<64,0,UNSIGNED,TRUNCATE>(id104in_a,id104in_b));
  }
  { // Node ID: 105 (NodeOr)
    const HWOffsetFix<64,0,UNSIGNED> &id105in_a = id102out_output;
    const HWOffsetFix<64,0,UNSIGNED> &id105in_b = id104out_result[getCycle()%2];

    HWOffsetFix<64,0,UNSIGNED> id105x_1;

    (id105x_1) = (or_fixed(id105in_a,id105in_b));
    id105out_result[(getCycle()+1)%2] = (id105x_1);
  }
  HWRawBits<64> id1888out_dataout;

  { // Node ID: 1888 (NodeShift)
    const HWOffsetFix<64,0,UNSIGNED> &id1888in_datain = id2247out_output[getCycle()%2];

    id1888out_dataout = (shift_left_fixed(id1888in_datain,(16l)));
  }
  HWOffsetFix<64,0,UNSIGNED> id109out_output;

  { // Node ID: 109 (NodeReinterpret)
    const HWRawBits<64> &id109in_input = id1888out_dataout;

    id109out_output = (cast_bits2fixed<64,0,UNSIGNED>(id109in_input));
  }
  { // Node ID: 2769 (NodeConstantRawBits)
  }
  { // Node ID: 113 (NodeAdd)
    const HWOffsetFix<64,0,UNSIGNED> &id113in_a = id2245out_output[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id113in_b = id2769out_value;

    id113out_result[(getCycle()+1)%2] = (add_fixed<64,0,UNSIGNED,TRUNCATE>(id113in_a,id113in_b));
  }
  { // Node ID: 114 (NodeOr)
    const HWOffsetFix<64,0,UNSIGNED> &id114in_a = id109out_output;
    const HWOffsetFix<64,0,UNSIGNED> &id114in_b = id113out_result[getCycle()%2];

    HWOffsetFix<64,0,UNSIGNED> id114x_1;

    (id114x_1) = (or_fixed(id114in_a,id114in_b));
    id114out_result[(getCycle()+1)%2] = (id114x_1);
  }
  { // Node ID: 531 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id531in_sel = id2262out_output[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id531in_option0 = id105out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id531in_option1 = id114out_result[getCycle()%2];

    HWOffsetFix<64,0,UNSIGNED> id531x_1;

    switch((id531in_sel.getValueAsLong())) {
      case 0l:
        id531x_1 = id531in_option0;
        break;
      case 1l:
        id531x_1 = id531in_option1;
        break;
      default:
        id531x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id531out_result[(getCycle()+1)%2] = (id531x_1);
  }
  { // Node ID: 2768 (NodeConstantRawBits)
  }
  { // Node ID: 119 (NodeAdd)
    const HWOffsetFix<64,0,UNSIGNED> &id119in_a = id2247out_output[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id119in_b = id2768out_value;

    id119out_result[(getCycle()+1)%2] = (add_fixed<64,0,UNSIGNED,TRUNCATE>(id119in_a,id119in_b));
  }
  HWRawBits<64> id1889out_dataout;

  { // Node ID: 1889 (NodeShift)
    const HWOffsetFix<64,0,UNSIGNED> &id1889in_datain = id119out_result[getCycle()%2];

    id1889out_dataout = (shift_left_fixed(id1889in_datain,(16l)));
  }
  HWOffsetFix<64,0,UNSIGNED> id122out_output;

  { // Node ID: 122 (NodeReinterpret)
    const HWRawBits<64> &id122in_input = id1889out_dataout;

    id122out_output = (cast_bits2fixed<64,0,UNSIGNED>(id122in_input));
  }
  { // Node ID: 123 (NodeOr)
    const HWOffsetFix<64,0,UNSIGNED> &id123in_a = id122out_output;
    const HWOffsetFix<64,0,UNSIGNED> &id123in_b = id2596out_output[getCycle()%2];

    HWOffsetFix<64,0,UNSIGNED> id123x_1;

    (id123x_1) = (or_fixed(id123in_a,id123in_b));
    id123out_result[(getCycle()+1)%2] = (id123x_1);
  }
  { // Node ID: 541 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id541in_sel = id2591out_output[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id541in_option0 = id531out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id541in_option1 = id123out_result[getCycle()%2];

    HWOffsetFix<64,0,UNSIGNED> id541x_1;

    switch((id541in_sel.getValueAsLong())) {
      case 0l:
        id541x_1 = id541in_option0;
        break;
      case 1l:
        id541x_1 = id541in_option1;
        break;
      default:
        id541x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id541out_result[(getCycle()+1)%2] = (id541x_1);
  }
  { // Node ID: 2767 (NodeConstantRawBits)
  }
  { // Node ID: 128 (NodeAdd)
    const HWOffsetFix<64,0,UNSIGNED> &id128in_a = id2592out_output[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id128in_b = id2767out_value;

    id128out_result[(getCycle()+1)%2] = (add_fixed<64,0,UNSIGNED,TRUNCATE>(id128in_a,id128in_b));
  }
  HWRawBits<64> id1890out_dataout;

  { // Node ID: 1890 (NodeShift)
    const HWOffsetFix<64,0,UNSIGNED> &id1890in_datain = id128out_result[getCycle()%2];

    id1890out_dataout = (shift_left_fixed(id1890in_datain,(16l)));
  }
  HWOffsetFix<64,0,UNSIGNED> id131out_output;

  { // Node ID: 131 (NodeReinterpret)
    const HWRawBits<64> &id131in_input = id1890out_dataout;

    id131out_output = (cast_bits2fixed<64,0,UNSIGNED>(id131in_input));
  }
  { // Node ID: 2766 (NodeConstantRawBits)
  }
  { // Node ID: 135 (NodeAdd)
    const HWOffsetFix<64,0,UNSIGNED> &id135in_a = id2596out_output[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id135in_b = id2766out_value;

    id135out_result[(getCycle()+1)%2] = (add_fixed<64,0,UNSIGNED,TRUNCATE>(id135in_a,id135in_b));
  }
  { // Node ID: 136 (NodeOr)
    const HWOffsetFix<64,0,UNSIGNED> &id136in_a = id131out_output;
    const HWOffsetFix<64,0,UNSIGNED> &id136in_b = id135out_result[getCycle()%2];

    HWOffsetFix<64,0,UNSIGNED> id136x_1;

    (id136x_1) = (or_fixed(id136in_a,id136in_b));
    id136out_result[(getCycle()+1)%2] = (id136x_1);
  }
  { // Node ID: 551 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id551in_sel = id2590out_output[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id551in_option0 = id541out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id551in_option1 = id136out_result[getCycle()%2];

    HWOffsetFix<64,0,UNSIGNED> id551x_1;

    switch((id551in_sel.getValueAsLong())) {
      case 0l:
        id551x_1 = id551in_option0;
        break;
      case 1l:
        id551x_1 = id551in_option1;
        break;
      default:
        id551x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id551out_result[(getCycle()+1)%2] = (id551x_1);
  }
  { // Node ID: 2765 (NodeConstantRawBits)
  }
  { // Node ID: 141 (NodeAdd)
    const HWOffsetFix<64,0,UNSIGNED> &id141in_a = id2593out_output[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id141in_b = id2765out_value;

    id141out_result[(getCycle()+1)%2] = (add_fixed<64,0,UNSIGNED,TRUNCATE>(id141in_a,id141in_b));
  }
  HWRawBits<64> id1891out_dataout;

  { // Node ID: 1891 (NodeShift)
    const HWOffsetFix<64,0,UNSIGNED> &id1891in_datain = id141out_result[getCycle()%2];

    id1891out_dataout = (shift_left_fixed(id1891in_datain,(16l)));
  }
  HWOffsetFix<64,0,UNSIGNED> id144out_output;

  { // Node ID: 144 (NodeReinterpret)
    const HWRawBits<64> &id144in_input = id1891out_dataout;

    id144out_output = (cast_bits2fixed<64,0,UNSIGNED>(id144in_input));
  }
  { // Node ID: 2764 (NodeConstantRawBits)
  }
  { // Node ID: 146 (NodeSub)
    const HWOffsetFix<64,0,UNSIGNED> &id146in_a = id2597out_output[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id146in_b = id2764out_value;

    id146out_result[(getCycle()+1)%2] = (sub_fixed<64,0,UNSIGNED,TRUNCATE>(id146in_a,id146in_b));
  }
  { // Node ID: 147 (NodeOr)
    const HWOffsetFix<64,0,UNSIGNED> &id147in_a = id144out_output;
    const HWOffsetFix<64,0,UNSIGNED> &id147in_b = id146out_result[getCycle()%2];

    HWOffsetFix<64,0,UNSIGNED> id147x_1;

    (id147x_1) = (or_fixed(id147in_a,id147in_b));
    id147out_result[(getCycle()+1)%2] = (id147x_1);
  }
  { // Node ID: 561 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id561in_sel = id2589out_output[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id561in_option0 = id551out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id561in_option1 = id147out_result[getCycle()%2];

    HWOffsetFix<64,0,UNSIGNED> id561x_1;

    switch((id561in_sel.getValueAsLong())) {
      case 0l:
        id561x_1 = id561in_option0;
        break;
      case 1l:
        id561x_1 = id561in_option1;
        break;
      default:
        id561x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id561out_result[(getCycle()+1)%2] = (id561x_1);
  }
  { // Node ID: 2763 (NodeConstantRawBits)
  }
  { // Node ID: 150 (NodeAdd)
    const HWOffsetFix<64,0,UNSIGNED> &id150in_a = id2594out_output[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id150in_b = id2763out_value;

    id150out_result[(getCycle()+1)%2] = (add_fixed<64,0,UNSIGNED,TRUNCATE>(id150in_a,id150in_b));
  }
  HWRawBits<64> id1892out_dataout;

  { // Node ID: 1892 (NodeShift)
    const HWOffsetFix<64,0,UNSIGNED> &id1892in_datain = id150out_result[getCycle()%2];

    id1892out_dataout = (shift_left_fixed(id1892in_datain,(16l)));
  }
  HWOffsetFix<64,0,UNSIGNED> id153out_output;

  { // Node ID: 153 (NodeReinterpret)
    const HWRawBits<64> &id153in_input = id1892out_dataout;

    id153out_output = (cast_bits2fixed<64,0,UNSIGNED>(id153in_input));
  }
  { // Node ID: 156 (NodeOr)
    const HWOffsetFix<64,0,UNSIGNED> &id156in_a = id153out_output;
    const HWOffsetFix<64,0,UNSIGNED> &id156in_b = id2599out_output[getCycle()%2];

    HWOffsetFix<64,0,UNSIGNED> id156x_1;

    (id156x_1) = (or_fixed(id156in_a,id156in_b));
    id156out_result[(getCycle()+1)%2] = (id156x_1);
  }
  { // Node ID: 571 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id571in_sel = id2588out_output[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id571in_option0 = id561out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id571in_option1 = id156out_result[getCycle()%2];

    HWOffsetFix<64,0,UNSIGNED> id571x_1;

    switch((id571in_sel.getValueAsLong())) {
      case 0l:
        id571x_1 = id571in_option0;
        break;
      case 1l:
        id571x_1 = id571in_option1;
        break;
      default:
        id571x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id571out_result[(getCycle()+1)%2] = (id571x_1);
  }
  { // Node ID: 2399 (NodeFIFO)
    const HWOffsetFix<64,0,UNSIGNED> &id2399in_input = id571out_result[getCycle()%2];

    id2399out_output[(getCycle()+1)%2] = id2399in_input;
  }
  HWRawBits<64> id1893out_dataout;

  { // Node ID: 1893 (NodeShift)
    const HWOffsetFix<64,0,UNSIGNED> &id1893in_datain = id2399out_output[getCycle()%2];

    id1893out_dataout = (shift_right_fixed(id1893in_datain,(16l)));
  }
  HWOffsetFix<64,0,UNSIGNED> id681out_output;

  { // Node ID: 681 (NodeReinterpret)
    const HWRawBits<64> &id681in_input = id1893out_dataout;

    id681out_output = (cast_bits2fixed<64,0,UNSIGNED>(id681in_input));
  }
  HWRawBits<64> id718out_output;

  { // Node ID: 718 (NodeReinterpret)
    const HWOffsetFix<64,0,UNSIGNED> &id718in_input = id681out_output;

    id718out_output = (cast_fixed2bits(id718in_input));
  }
  HWRawBits<1> id719out_result;

  { // Node ID: 719 (NodeSlice)
    const HWRawBits<64> &id719in_a = id718out_output;

    id719out_result = (slice<0,1>(id719in_a));
  }
  { // Node ID: 2400 (NodeFIFO)
    const HWRawBits<1> &id2400in_input = id719out_result;

    id2400out_output[(getCycle()+1)%2] = id2400in_input;
  }
  HWOffsetFix<1,0,UNSIGNED> id720out_output;

  { // Node ID: 720 (NodeReinterpret)
    const HWRawBits<1> &id720in_input = id2400out_output[getCycle()%2];

    id720out_output = (cast_bits2fixed<1,0,UNSIGNED>(id720in_input));
  }
  HWOffsetFix<64,0,UNSIGNED> id721out_o;

  { // Node ID: 721 (NodeCast)
    const HWOffsetFix<1,0,UNSIGNED> &id721in_i = id720out_output;

    id721out_o = (cast_fixed2fixed<64,0,UNSIGNED,TRUNCATE>(id721in_i));
  }
  HWOffsetFix<64,2,UNSIGNED> id1894out_output;

  { // Node ID: 1894 (NodeReinterpret)
    const HWOffsetFix<64,0,UNSIGNED> &id1894in_input = id721out_o;

    id1894out_output = (cast_bits2fixed<64,2,UNSIGNED>((cast_fixed2bits(id1894in_input))));
  }
  HWOffsetFix<64,0,UNSIGNED> id1895out_o;

  { // Node ID: 1895 (NodeCast)
    const HWOffsetFix<64,2,UNSIGNED> &id1895in_i = id1894out_output;

    id1895out_o = (cast_fixed2fixed<64,0,UNSIGNED,TRUNCATE>(id1895in_i));
  }
  HWRawBits<64> id1896out_dataout;

  { // Node ID: 1896 (NodeShift)
    const HWOffsetFix<64,0,UNSIGNED> &id1896in_datain = id571out_result[getCycle()%2];

    id1896out_dataout = (shift_right_fixed(id1896in_datain,(16l)));
  }
  HWOffsetFix<64,0,UNSIGNED> id753out_output;

  { // Node ID: 753 (NodeReinterpret)
    const HWRawBits<64> &id753in_input = id1896out_dataout;

    id753out_output = (cast_bits2fixed<64,0,UNSIGNED>(id753in_input));
  }
  HWRawBits<64> id796out_output;

  { // Node ID: 796 (NodeReinterpret)
    const HWOffsetFix<64,0,UNSIGNED> &id796in_input = id753out_output;

    id796out_output = (cast_fixed2bits(id796in_input));
  }
  HWRawBits<1> id797out_result;

  { // Node ID: 797 (NodeSlice)
    const HWRawBits<64> &id797in_a = id796out_output;

    id797out_result = (slice<0,1>(id797in_a));
  }
  HWOffsetFix<1,0,UNSIGNED> id798out_output;

  { // Node ID: 798 (NodeReinterpret)
    const HWRawBits<1> &id798in_input = id797out_result;

    id798out_output = (cast_bits2fixed<1,0,UNSIGNED>(id798in_input));
  }
  HWOffsetFix<64,0,UNSIGNED> id799out_o;

  { // Node ID: 799 (NodeCast)
    const HWOffsetFix<1,0,UNSIGNED> &id799in_i = id798out_output;

    id799out_o = (cast_fixed2fixed<64,0,UNSIGNED,TRUNCATE>(id799in_i));
  }
  { // Node ID: 800 (NodeSub)
    const HWOffsetFix<64,0,UNSIGNED> &id800in_a = id753out_output;
    const HWOffsetFix<64,0,UNSIGNED> &id800in_b = id799out_o;

    id800out_result[(getCycle()+1)%2] = (sub_fixed<64,0,UNSIGNED,TRUNCATE>(id800in_a,id800in_b));
  }
  { // Node ID: 2762 (NodeConstantRawBits)
  }
  { // Node ID: 755 (NodeAnd)
    const HWOffsetFix<64,0,UNSIGNED> &id755in_a = id571out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id755in_b = id2762out_value;

    HWOffsetFix<64,0,UNSIGNED> id755x_1;

    (id755x_1) = (and_fixed(id755in_a,id755in_b));
    id755out_result[(getCycle()+1)%2] = (id755x_1);
  }
  { // Node ID: 801 (NodeAdd)
    const HWOffsetFix<64,0,UNSIGNED> &id801in_a = id800out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id801in_b = id755out_result[getCycle()%2];

    id801out_result[(getCycle()+1)%2] = (add_fixed<64,0,UNSIGNED,TRUNCATE>(id801in_a,id801in_b));
  }
  HWRawBits<64> id802out_output;

  { // Node ID: 802 (NodeReinterpret)
    const HWOffsetFix<64,0,UNSIGNED> &id802in_input = id801out_result[getCycle()%2];

    id802out_output = (cast_fixed2bits(id802in_input));
  }
  HWRawBits<2> id803out_result;

  { // Node ID: 803 (NodeSlice)
    const HWRawBits<64> &id803in_a = id802out_output;

    id803out_result = (slice<0,2>(id803in_a));
  }
  HWOffsetFix<2,0,UNSIGNED> id804out_output;

  { // Node ID: 804 (NodeReinterpret)
    const HWRawBits<2> &id804in_input = id803out_result;

    id804out_output = (cast_bits2fixed<2,0,UNSIGNED>(id804in_input));
  }
  HWOffsetFix<64,0,UNSIGNED> id805out_o;

  { // Node ID: 805 (NodeCast)
    const HWOffsetFix<2,0,UNSIGNED> &id805in_i = id804out_output;

    id805out_o = (cast_fixed2fixed<64,0,UNSIGNED,TRUNCATE>(id805in_i));
  }
  { // Node ID: 871 (NodeAdd)
    const HWOffsetFix<64,0,UNSIGNED> &id871in_a = id1895out_o;
    const HWOffsetFix<64,0,UNSIGNED> &id871in_b = id805out_o;

    id871out_result[(getCycle()+1)%2] = (add_fixed<64,0,UNSIGNED,TRUNCATE>(id871in_a,id871in_b));
  }
  { // Node ID: 2761 (NodeConstantRawBits)
  }
  { // Node ID: 1897 (NodeEqInlined)
    const HWOffsetFix<64,0,UNSIGNED> &id1897in_a = id871out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1897in_b = id2761out_value;

    id1897out_result[(getCycle()+1)%2] = (eq_fixed(id1897in_a,id1897in_b));
  }
  HWRawBits<64> id1901out_dataout;

  { // Node ID: 1901 (NodeShift)
    const HWOffsetFix<64,0,UNSIGNED> &id1901in_datain = id2401out_output[getCycle()%2];

    id1901out_dataout = (shift_right_fixed(id1901in_datain,(16l)));
  }
  HWOffsetFix<64,0,UNSIGNED> id580out_output;

  { // Node ID: 580 (NodeReinterpret)
    const HWRawBits<64> &id580in_input = id1901out_dataout;

    id580out_output = (cast_bits2fixed<64,0,UNSIGNED>(id580in_input));
  }
  HWOffsetFix<64,-1,UNSIGNED> id1902out_output;

  { // Node ID: 1902 (NodeReinterpret)
    const HWOffsetFix<64,0,UNSIGNED> &id1902in_input = id580out_output;

    id1902out_output = (cast_bits2fixed<64,-1,UNSIGNED>((cast_fixed2bits(id1902in_input))));
  }
  HWOffsetFix<64,0,UNSIGNED> id1903out_o;

  { // Node ID: 1903 (NodeCast)
    const HWOffsetFix<64,-1,UNSIGNED> &id1903in_i = id1902out_output;

    id1903out_o = (cast_fixed2fixed<64,0,UNSIGNED,TRUNCATE>(id1903in_i));
  }
  HWOffsetFix<64,3,UNSIGNED> id1904out_output;

  { // Node ID: 1904 (NodeReinterpret)
    const HWOffsetFix<64,0,UNSIGNED> &id1904in_input = id1903out_o;

    id1904out_output = (cast_bits2fixed<64,3,UNSIGNED>((cast_fixed2bits(id1904in_input))));
  }
  { // Node ID: 1906 (NodeAdd)
    const HWOffsetFix<64,0,UNSIGNED> &id1906in_a = id1903out_o;
    const HWOffsetFix<64,3,UNSIGNED> &id1906in_b = id1904out_output;

    id1906out_result[(getCycle()+1)%2] = (add_fixed<68,0,UNSIGNED,TRUNCATE>(id1906in_a,id1906in_b));
  }
  HWOffsetFix<64,4,UNSIGNED> id1905out_output;

  { // Node ID: 1905 (NodeReinterpret)
    const HWOffsetFix<64,0,UNSIGNED> &id1905in_input = id1903out_o;

    id1905out_output = (cast_bits2fixed<64,4,UNSIGNED>((cast_fixed2bits(id1905in_input))));
  }
  { // Node ID: 2402 (NodeFIFO)
    const HWOffsetFix<64,4,UNSIGNED> &id2402in_input = id1905out_output;

    id2402out_output[(getCycle()+1)%2] = id2402in_input;
  }
  { // Node ID: 1907 (NodeAdd)
    const HWOffsetFix<68,0,UNSIGNED> &id1907in_a = id1906out_result[getCycle()%2];
    const HWOffsetFix<64,4,UNSIGNED> &id1907in_b = id2402out_output[getCycle()%2];

    id1907out_result[(getCycle()+1)%2] = (add_fixed<69,0,UNSIGNED,TRUNCATE>(id1907in_a,id1907in_b));
  }
  HWOffsetFix<64,0,UNSIGNED> id1908out_o;

  { // Node ID: 1908 (NodeCast)
    const HWOffsetFix<69,0,UNSIGNED> &id1908in_i = id1907out_result[getCycle()%2];

    id1908out_o = (cast_fixed2fixed<64,0,UNSIGNED,TRUNCATE>(id1908in_i));
  }
  { // Node ID: 2760 (NodeConstantRawBits)
  }
  { // Node ID: 582 (NodeAnd)
    const HWOffsetFix<64,0,UNSIGNED> &id582in_a = id2600out_output[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id582in_b = id2760out_value;

    HWOffsetFix<64,0,UNSIGNED> id582x_1;

    (id582x_1) = (and_fixed(id582in_a,id582in_b));
    id582out_result[(getCycle()+1)%2] = (id582x_1);
  }
  HWOffsetFix<64,-2,UNSIGNED> id1909out_output;

  { // Node ID: 1909 (NodeReinterpret)
    const HWOffsetFix<64,0,UNSIGNED> &id1909in_input = id582out_result[getCycle()%2];

    id1909out_output = (cast_bits2fixed<64,-2,UNSIGNED>((cast_fixed2bits(id1909in_input))));
  }
  HWOffsetFix<64,0,UNSIGNED> id1910out_o;

  { // Node ID: 1910 (NodeCast)
    const HWOffsetFix<64,-2,UNSIGNED> &id1910in_i = id1909out_output;

    id1910out_o = (cast_fixed2fixed<64,0,UNSIGNED,TRUNCATE>(id1910in_i));
  }
  { // Node ID: 624 (NodeAdd)
    const HWOffsetFix<64,0,UNSIGNED> &id624in_a = id1908out_o;
    const HWOffsetFix<64,0,UNSIGNED> &id624in_b = id1910out_o;

    id624out_result[(getCycle()+1)%2] = (add_fixed<64,0,UNSIGNED,TRUNCATE>(id624in_a,id624in_b));
  }
  { // Node ID: 2406 (NodeFIFO)
    const HWOffsetFix<64,0,UNSIGNED> &id2406in_input = id624out_result[getCycle()%2];

    id2406out_output[(getCycle()+1)%2] = id2406in_input;
  }
  HWRawBits<64> id1911out_dataout;

  { // Node ID: 1911 (NodeShift)
    const HWOffsetFix<64,0,UNSIGNED> &id1911in_datain = id571out_result[getCycle()%2];

    id1911out_dataout = (shift_right_fixed(id1911in_datain,(16l)));
  }
  HWOffsetFix<64,0,UNSIGNED> id585out_output;

  { // Node ID: 585 (NodeReinterpret)
    const HWRawBits<64> &id585in_input = id1911out_dataout;

    id585out_output = (cast_bits2fixed<64,0,UNSIGNED>(id585in_input));
  }
  HWOffsetFix<64,-1,UNSIGNED> id1912out_output;

  { // Node ID: 1912 (NodeReinterpret)
    const HWOffsetFix<64,0,UNSIGNED> &id1912in_input = id585out_output;

    id1912out_output = (cast_bits2fixed<64,-1,UNSIGNED>((cast_fixed2bits(id1912in_input))));
  }
  HWOffsetFix<64,0,UNSIGNED> id1913out_o;

  { // Node ID: 1913 (NodeCast)
    const HWOffsetFix<64,-1,UNSIGNED> &id1913in_i = id1912out_output;

    id1913out_o = (cast_fixed2fixed<64,0,UNSIGNED,TRUNCATE>(id1913in_i));
  }
  HWOffsetFix<64,3,UNSIGNED> id1914out_output;

  { // Node ID: 1914 (NodeReinterpret)
    const HWOffsetFix<64,0,UNSIGNED> &id1914in_input = id1913out_o;

    id1914out_output = (cast_bits2fixed<64,3,UNSIGNED>((cast_fixed2bits(id1914in_input))));
  }
  { // Node ID: 1916 (NodeAdd)
    const HWOffsetFix<64,0,UNSIGNED> &id1916in_a = id1913out_o;
    const HWOffsetFix<64,3,UNSIGNED> &id1916in_b = id1914out_output;

    id1916out_result[(getCycle()+1)%2] = (add_fixed<68,0,UNSIGNED,TRUNCATE>(id1916in_a,id1916in_b));
  }
  HWOffsetFix<64,4,UNSIGNED> id1915out_output;

  { // Node ID: 1915 (NodeReinterpret)
    const HWOffsetFix<64,0,UNSIGNED> &id1915in_input = id1913out_o;

    id1915out_output = (cast_bits2fixed<64,4,UNSIGNED>((cast_fixed2bits(id1915in_input))));
  }
  { // Node ID: 2404 (NodeFIFO)
    const HWOffsetFix<64,4,UNSIGNED> &id2404in_input = id1915out_output;

    id2404out_output[(getCycle()+1)%2] = id2404in_input;
  }
  { // Node ID: 1917 (NodeAdd)
    const HWOffsetFix<68,0,UNSIGNED> &id1917in_a = id1916out_result[getCycle()%2];
    const HWOffsetFix<64,4,UNSIGNED> &id1917in_b = id2404out_output[getCycle()%2];

    id1917out_result[(getCycle()+1)%2] = (add_fixed<69,0,UNSIGNED,TRUNCATE>(id1917in_a,id1917in_b));
  }
  HWOffsetFix<64,0,UNSIGNED> id1918out_o;

  { // Node ID: 1918 (NodeCast)
    const HWOffsetFix<69,0,UNSIGNED> &id1918in_i = id1917out_result[getCycle()%2];

    id1918out_o = (cast_fixed2fixed<64,0,UNSIGNED,TRUNCATE>(id1918in_i));
  }
  { // Node ID: 2759 (NodeConstantRawBits)
  }
  { // Node ID: 587 (NodeAnd)
    const HWOffsetFix<64,0,UNSIGNED> &id587in_a = id2399out_output[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id587in_b = id2759out_value;

    HWOffsetFix<64,0,UNSIGNED> id587x_1;

    (id587x_1) = (and_fixed(id587in_a,id587in_b));
    id587out_result[(getCycle()+1)%2] = (id587x_1);
  }
  HWOffsetFix<64,-2,UNSIGNED> id1919out_output;

  { // Node ID: 1919 (NodeReinterpret)
    const HWOffsetFix<64,0,UNSIGNED> &id1919in_input = id587out_result[getCycle()%2];

    id1919out_output = (cast_bits2fixed<64,-2,UNSIGNED>((cast_fixed2bits(id1919in_input))));
  }
  HWOffsetFix<64,0,UNSIGNED> id1920out_o;

  { // Node ID: 1920 (NodeCast)
    const HWOffsetFix<64,-2,UNSIGNED> &id1920in_i = id1919out_output;

    id1920out_o = (cast_fixed2fixed<64,0,UNSIGNED,TRUNCATE>(id1920in_i));
  }
  { // Node ID: 631 (NodeAdd)
    const HWOffsetFix<64,0,UNSIGNED> &id631in_a = id1918out_o;
    const HWOffsetFix<64,0,UNSIGNED> &id631in_b = id1920out_o;

    id631out_result[(getCycle()+1)%2] = (add_fixed<64,0,UNSIGNED,TRUNCATE>(id631in_a,id631in_b));
  }
  { // Node ID: 2407 (NodeFIFO)
    const HWOffsetFix<64,0,UNSIGNED> &id2407in_input = id631out_result[getCycle()%2];

    id2407out_output[(getCycle()+1)%2] = id2407in_input;
  }
  { // Node ID: 895 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id895in_sel = id1897out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id895in_option0 = id2406out_output[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id895in_option1 = id2407out_output[getCycle()%2];

    HWOffsetFix<64,0,UNSIGNED> id895x_1;

    switch((id895in_sel.getValueAsLong())) {
      case 0l:
        id895x_1 = id895in_option0;
        break;
      case 1l:
        id895x_1 = id895in_option1;
        break;
      default:
        id895x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id895out_result[(getCycle()+1)%2] = (id895x_1);
  }
  HWRawBits<64> id1921out_dataout;

  { // Node ID: 1921 (NodeShift)
    const HWOffsetFix<64,0,UNSIGNED> &id1921in_datain = id572out_result[getCycle()%2];

    id1921out_dataout = (shift_right_fixed(id1921in_datain,(16l)));
  }
  HWOffsetFix<64,0,UNSIGNED> id590out_output;

  { // Node ID: 590 (NodeReinterpret)
    const HWRawBits<64> &id590in_input = id1921out_dataout;

    id590out_output = (cast_bits2fixed<64,0,UNSIGNED>(id590in_input));
  }
  HWOffsetFix<64,-1,UNSIGNED> id1922out_output;

  { // Node ID: 1922 (NodeReinterpret)
    const HWOffsetFix<64,0,UNSIGNED> &id1922in_input = id590out_output;

    id1922out_output = (cast_bits2fixed<64,-1,UNSIGNED>((cast_fixed2bits(id1922in_input))));
  }
  HWOffsetFix<64,0,UNSIGNED> id1923out_o;

  { // Node ID: 1923 (NodeCast)
    const HWOffsetFix<64,-1,UNSIGNED> &id1923in_i = id1922out_output;

    id1923out_o = (cast_fixed2fixed<64,0,UNSIGNED,TRUNCATE>(id1923in_i));
  }
  HWOffsetFix<64,3,UNSIGNED> id1924out_output;

  { // Node ID: 1924 (NodeReinterpret)
    const HWOffsetFix<64,0,UNSIGNED> &id1924in_input = id1923out_o;

    id1924out_output = (cast_bits2fixed<64,3,UNSIGNED>((cast_fixed2bits(id1924in_input))));
  }
  { // Node ID: 1926 (NodeAdd)
    const HWOffsetFix<64,0,UNSIGNED> &id1926in_a = id1923out_o;
    const HWOffsetFix<64,3,UNSIGNED> &id1926in_b = id1924out_output;

    id1926out_result[(getCycle()+1)%2] = (add_fixed<68,0,UNSIGNED,TRUNCATE>(id1926in_a,id1926in_b));
  }
  HWOffsetFix<64,4,UNSIGNED> id1925out_output;

  { // Node ID: 1925 (NodeReinterpret)
    const HWOffsetFix<64,0,UNSIGNED> &id1925in_input = id1923out_o;

    id1925out_output = (cast_bits2fixed<64,4,UNSIGNED>((cast_fixed2bits(id1925in_input))));
  }
  { // Node ID: 2408 (NodeFIFO)
    const HWOffsetFix<64,4,UNSIGNED> &id2408in_input = id1925out_output;

    id2408out_output[(getCycle()+1)%2] = id2408in_input;
  }
  { // Node ID: 1927 (NodeAdd)
    const HWOffsetFix<68,0,UNSIGNED> &id1927in_a = id1926out_result[getCycle()%2];
    const HWOffsetFix<64,4,UNSIGNED> &id1927in_b = id2408out_output[getCycle()%2];

    id1927out_result[(getCycle()+1)%2] = (add_fixed<69,0,UNSIGNED,TRUNCATE>(id1927in_a,id1927in_b));
  }
  HWOffsetFix<64,0,UNSIGNED> id1928out_o;

  { // Node ID: 1928 (NodeCast)
    const HWOffsetFix<69,0,UNSIGNED> &id1928in_i = id1927out_result[getCycle()%2];

    id1928out_o = (cast_fixed2fixed<64,0,UNSIGNED,TRUNCATE>(id1928in_i));
  }
  { // Node ID: 2758 (NodeConstantRawBits)
  }
  { // Node ID: 592 (NodeAnd)
    const HWOffsetFix<64,0,UNSIGNED> &id592in_a = id2378out_output[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id592in_b = id2758out_value;

    HWOffsetFix<64,0,UNSIGNED> id592x_1;

    (id592x_1) = (and_fixed(id592in_a,id592in_b));
    id592out_result[(getCycle()+1)%2] = (id592x_1);
  }
  HWOffsetFix<64,-2,UNSIGNED> id1929out_output;

  { // Node ID: 1929 (NodeReinterpret)
    const HWOffsetFix<64,0,UNSIGNED> &id1929in_input = id592out_result[getCycle()%2];

    id1929out_output = (cast_bits2fixed<64,-2,UNSIGNED>((cast_fixed2bits(id1929in_input))));
  }
  HWOffsetFix<64,0,UNSIGNED> id1930out_o;

  { // Node ID: 1930 (NodeCast)
    const HWOffsetFix<64,-2,UNSIGNED> &id1930in_i = id1929out_output;

    id1930out_o = (cast_fixed2fixed<64,0,UNSIGNED,TRUNCATE>(id1930in_i));
  }
  { // Node ID: 638 (NodeAdd)
    const HWOffsetFix<64,0,UNSIGNED> &id638in_a = id1928out_o;
    const HWOffsetFix<64,0,UNSIGNED> &id638in_b = id1930out_o;

    id638out_result[(getCycle()+1)%2] = (add_fixed<64,0,UNSIGNED,TRUNCATE>(id638in_a,id638in_b));
  }
  { // Node ID: 2410 (NodeFIFO)
    const HWOffsetFix<64,0,UNSIGNED> &id2410in_input = id638out_result[getCycle()%2];

    id2410out_output[(getCycle()+2)%3] = id2410in_input;
  }
  { // Node ID: 898 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id898in_sel = id1886out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id898in_option0 = id895out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id898in_option1 = id2410out_output[getCycle()%3];

    HWOffsetFix<64,0,UNSIGNED> id898x_1;

    switch((id898in_sel.getValueAsLong())) {
      case 0l:
        id898x_1 = id898in_option0;
        break;
      case 1l:
        id898x_1 = id898in_option1;
        break;
      default:
        id898x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id898out_result[(getCycle()+1)%2] = (id898x_1);
  }
  HWRawBits<64> id1931out_dataout;

  { // Node ID: 1931 (NodeShift)
    const HWOffsetFix<64,0,UNSIGNED> &id1931in_datain = id573out_result[getCycle()%2];

    id1931out_dataout = (shift_right_fixed(id1931in_datain,(16l)));
  }
  HWOffsetFix<64,0,UNSIGNED> id595out_output;

  { // Node ID: 595 (NodeReinterpret)
    const HWRawBits<64> &id595in_input = id1931out_dataout;

    id595out_output = (cast_bits2fixed<64,0,UNSIGNED>(id595in_input));
  }
  HWOffsetFix<64,-1,UNSIGNED> id1932out_output;

  { // Node ID: 1932 (NodeReinterpret)
    const HWOffsetFix<64,0,UNSIGNED> &id1932in_input = id595out_output;

    id1932out_output = (cast_bits2fixed<64,-1,UNSIGNED>((cast_fixed2bits(id1932in_input))));
  }
  HWOffsetFix<64,0,UNSIGNED> id1933out_o;

  { // Node ID: 1933 (NodeCast)
    const HWOffsetFix<64,-1,UNSIGNED> &id1933in_i = id1932out_output;

    id1933out_o = (cast_fixed2fixed<64,0,UNSIGNED,TRUNCATE>(id1933in_i));
  }
  HWOffsetFix<64,3,UNSIGNED> id1934out_output;

  { // Node ID: 1934 (NodeReinterpret)
    const HWOffsetFix<64,0,UNSIGNED> &id1934in_input = id1933out_o;

    id1934out_output = (cast_bits2fixed<64,3,UNSIGNED>((cast_fixed2bits(id1934in_input))));
  }
  { // Node ID: 1936 (NodeAdd)
    const HWOffsetFix<64,0,UNSIGNED> &id1936in_a = id1933out_o;
    const HWOffsetFix<64,3,UNSIGNED> &id1936in_b = id1934out_output;

    id1936out_result[(getCycle()+1)%2] = (add_fixed<68,0,UNSIGNED,TRUNCATE>(id1936in_a,id1936in_b));
  }
  HWOffsetFix<64,4,UNSIGNED> id1935out_output;

  { // Node ID: 1935 (NodeReinterpret)
    const HWOffsetFix<64,0,UNSIGNED> &id1935in_input = id1933out_o;

    id1935out_output = (cast_bits2fixed<64,4,UNSIGNED>((cast_fixed2bits(id1935in_input))));
  }
  { // Node ID: 2411 (NodeFIFO)
    const HWOffsetFix<64,4,UNSIGNED> &id2411in_input = id1935out_output;

    id2411out_output[(getCycle()+1)%2] = id2411in_input;
  }
  { // Node ID: 1937 (NodeAdd)
    const HWOffsetFix<68,0,UNSIGNED> &id1937in_a = id1936out_result[getCycle()%2];
    const HWOffsetFix<64,4,UNSIGNED> &id1937in_b = id2411out_output[getCycle()%2];

    id1937out_result[(getCycle()+1)%2] = (add_fixed<69,0,UNSIGNED,TRUNCATE>(id1937in_a,id1937in_b));
  }
  HWOffsetFix<64,0,UNSIGNED> id1938out_o;

  { // Node ID: 1938 (NodeCast)
    const HWOffsetFix<69,0,UNSIGNED> &id1938in_i = id1937out_result[getCycle()%2];

    id1938out_o = (cast_fixed2fixed<64,0,UNSIGNED,TRUNCATE>(id1938in_i));
  }
  { // Node ID: 2757 (NodeConstantRawBits)
  }
  { // Node ID: 597 (NodeAnd)
    const HWOffsetFix<64,0,UNSIGNED> &id597in_a = id2356out_output[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id597in_b = id2757out_value;

    HWOffsetFix<64,0,UNSIGNED> id597x_1;

    (id597x_1) = (and_fixed(id597in_a,id597in_b));
    id597out_result[(getCycle()+1)%2] = (id597x_1);
  }
  HWOffsetFix<64,-2,UNSIGNED> id1939out_output;

  { // Node ID: 1939 (NodeReinterpret)
    const HWOffsetFix<64,0,UNSIGNED> &id1939in_input = id597out_result[getCycle()%2];

    id1939out_output = (cast_bits2fixed<64,-2,UNSIGNED>((cast_fixed2bits(id1939in_input))));
  }
  HWOffsetFix<64,0,UNSIGNED> id1940out_o;

  { // Node ID: 1940 (NodeCast)
    const HWOffsetFix<64,-2,UNSIGNED> &id1940in_i = id1939out_output;

    id1940out_o = (cast_fixed2fixed<64,0,UNSIGNED,TRUNCATE>(id1940in_i));
  }
  { // Node ID: 645 (NodeAdd)
    const HWOffsetFix<64,0,UNSIGNED> &id645in_a = id1938out_o;
    const HWOffsetFix<64,0,UNSIGNED> &id645in_b = id1940out_o;

    id645out_result[(getCycle()+1)%2] = (add_fixed<64,0,UNSIGNED,TRUNCATE>(id645in_a,id645in_b));
  }
  { // Node ID: 2413 (NodeFIFO)
    const HWOffsetFix<64,0,UNSIGNED> &id2413in_input = id645out_result[getCycle()%2];

    id2413out_output[(getCycle()+3)%4] = id2413in_input;
  }
  { // Node ID: 901 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id901in_sel = id1875out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id901in_option0 = id898out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id901in_option1 = id2413out_output[getCycle()%4];

    HWOffsetFix<64,0,UNSIGNED> id901x_1;

    switch((id901in_sel.getValueAsLong())) {
      case 0l:
        id901x_1 = id901in_option0;
        break;
      case 1l:
        id901x_1 = id901in_option1;
        break;
      default:
        id901x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id901out_result[(getCycle()+1)%2] = (id901x_1);
  }
  HWRawBits<64> id1941out_dataout;

  { // Node ID: 1941 (NodeShift)
    const HWOffsetFix<64,0,UNSIGNED> &id1941in_datain = id574out_result[getCycle()%2];

    id1941out_dataout = (shift_right_fixed(id1941in_datain,(16l)));
  }
  HWOffsetFix<64,0,UNSIGNED> id600out_output;

  { // Node ID: 600 (NodeReinterpret)
    const HWRawBits<64> &id600in_input = id1941out_dataout;

    id600out_output = (cast_bits2fixed<64,0,UNSIGNED>(id600in_input));
  }
  HWOffsetFix<64,-1,UNSIGNED> id1942out_output;

  { // Node ID: 1942 (NodeReinterpret)
    const HWOffsetFix<64,0,UNSIGNED> &id1942in_input = id600out_output;

    id1942out_output = (cast_bits2fixed<64,-1,UNSIGNED>((cast_fixed2bits(id1942in_input))));
  }
  HWOffsetFix<64,0,UNSIGNED> id1943out_o;

  { // Node ID: 1943 (NodeCast)
    const HWOffsetFix<64,-1,UNSIGNED> &id1943in_i = id1942out_output;

    id1943out_o = (cast_fixed2fixed<64,0,UNSIGNED,TRUNCATE>(id1943in_i));
  }
  HWOffsetFix<64,3,UNSIGNED> id1944out_output;

  { // Node ID: 1944 (NodeReinterpret)
    const HWOffsetFix<64,0,UNSIGNED> &id1944in_input = id1943out_o;

    id1944out_output = (cast_bits2fixed<64,3,UNSIGNED>((cast_fixed2bits(id1944in_input))));
  }
  { // Node ID: 1946 (NodeAdd)
    const HWOffsetFix<64,0,UNSIGNED> &id1946in_a = id1943out_o;
    const HWOffsetFix<64,3,UNSIGNED> &id1946in_b = id1944out_output;

    id1946out_result[(getCycle()+1)%2] = (add_fixed<68,0,UNSIGNED,TRUNCATE>(id1946in_a,id1946in_b));
  }
  HWOffsetFix<64,4,UNSIGNED> id1945out_output;

  { // Node ID: 1945 (NodeReinterpret)
    const HWOffsetFix<64,0,UNSIGNED> &id1945in_input = id1943out_o;

    id1945out_output = (cast_bits2fixed<64,4,UNSIGNED>((cast_fixed2bits(id1945in_input))));
  }
  { // Node ID: 2414 (NodeFIFO)
    const HWOffsetFix<64,4,UNSIGNED> &id2414in_input = id1945out_output;

    id2414out_output[(getCycle()+1)%2] = id2414in_input;
  }
  { // Node ID: 1947 (NodeAdd)
    const HWOffsetFix<68,0,UNSIGNED> &id1947in_a = id1946out_result[getCycle()%2];
    const HWOffsetFix<64,4,UNSIGNED> &id1947in_b = id2414out_output[getCycle()%2];

    id1947out_result[(getCycle()+1)%2] = (add_fixed<69,0,UNSIGNED,TRUNCATE>(id1947in_a,id1947in_b));
  }
  HWOffsetFix<64,0,UNSIGNED> id1948out_o;

  { // Node ID: 1948 (NodeCast)
    const HWOffsetFix<69,0,UNSIGNED> &id1948in_i = id1947out_result[getCycle()%2];

    id1948out_o = (cast_fixed2fixed<64,0,UNSIGNED,TRUNCATE>(id1948in_i));
  }
  { // Node ID: 2756 (NodeConstantRawBits)
  }
  { // Node ID: 602 (NodeAnd)
    const HWOffsetFix<64,0,UNSIGNED> &id602in_a = id2334out_output[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id602in_b = id2756out_value;

    HWOffsetFix<64,0,UNSIGNED> id602x_1;

    (id602x_1) = (and_fixed(id602in_a,id602in_b));
    id602out_result[(getCycle()+1)%2] = (id602x_1);
  }
  HWOffsetFix<64,-2,UNSIGNED> id1949out_output;

  { // Node ID: 1949 (NodeReinterpret)
    const HWOffsetFix<64,0,UNSIGNED> &id1949in_input = id602out_result[getCycle()%2];

    id1949out_output = (cast_bits2fixed<64,-2,UNSIGNED>((cast_fixed2bits(id1949in_input))));
  }
  HWOffsetFix<64,0,UNSIGNED> id1950out_o;

  { // Node ID: 1950 (NodeCast)
    const HWOffsetFix<64,-2,UNSIGNED> &id1950in_i = id1949out_output;

    id1950out_o = (cast_fixed2fixed<64,0,UNSIGNED,TRUNCATE>(id1950in_i));
  }
  { // Node ID: 652 (NodeAdd)
    const HWOffsetFix<64,0,UNSIGNED> &id652in_a = id1948out_o;
    const HWOffsetFix<64,0,UNSIGNED> &id652in_b = id1950out_o;

    id652out_result[(getCycle()+1)%2] = (add_fixed<64,0,UNSIGNED,TRUNCATE>(id652in_a,id652in_b));
  }
  { // Node ID: 2416 (NodeFIFO)
    const HWOffsetFix<64,0,UNSIGNED> &id2416in_input = id652out_result[getCycle()%2];

    id2416out_output[(getCycle()+4)%5] = id2416in_input;
  }
  { // Node ID: 904 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id904in_sel = id1864out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id904in_option0 = id901out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id904in_option1 = id2416out_output[getCycle()%5];

    HWOffsetFix<64,0,UNSIGNED> id904x_1;

    switch((id904in_sel.getValueAsLong())) {
      case 0l:
        id904x_1 = id904in_option0;
        break;
      case 1l:
        id904x_1 = id904in_option1;
        break;
      default:
        id904x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id904out_result[(getCycle()+1)%2] = (id904x_1);
  }
  HWRawBits<64> id1951out_dataout;

  { // Node ID: 1951 (NodeShift)
    const HWOffsetFix<64,0,UNSIGNED> &id1951in_datain = id575out_result[getCycle()%2];

    id1951out_dataout = (shift_right_fixed(id1951in_datain,(16l)));
  }
  HWOffsetFix<64,0,UNSIGNED> id605out_output;

  { // Node ID: 605 (NodeReinterpret)
    const HWRawBits<64> &id605in_input = id1951out_dataout;

    id605out_output = (cast_bits2fixed<64,0,UNSIGNED>(id605in_input));
  }
  HWOffsetFix<64,-1,UNSIGNED> id1952out_output;

  { // Node ID: 1952 (NodeReinterpret)
    const HWOffsetFix<64,0,UNSIGNED> &id1952in_input = id605out_output;

    id1952out_output = (cast_bits2fixed<64,-1,UNSIGNED>((cast_fixed2bits(id1952in_input))));
  }
  HWOffsetFix<64,0,UNSIGNED> id1953out_o;

  { // Node ID: 1953 (NodeCast)
    const HWOffsetFix<64,-1,UNSIGNED> &id1953in_i = id1952out_output;

    id1953out_o = (cast_fixed2fixed<64,0,UNSIGNED,TRUNCATE>(id1953in_i));
  }
  HWOffsetFix<64,3,UNSIGNED> id1954out_output;

  { // Node ID: 1954 (NodeReinterpret)
    const HWOffsetFix<64,0,UNSIGNED> &id1954in_input = id1953out_o;

    id1954out_output = (cast_bits2fixed<64,3,UNSIGNED>((cast_fixed2bits(id1954in_input))));
  }
  { // Node ID: 1956 (NodeAdd)
    const HWOffsetFix<64,0,UNSIGNED> &id1956in_a = id1953out_o;
    const HWOffsetFix<64,3,UNSIGNED> &id1956in_b = id1954out_output;

    id1956out_result[(getCycle()+1)%2] = (add_fixed<68,0,UNSIGNED,TRUNCATE>(id1956in_a,id1956in_b));
  }
  HWOffsetFix<64,4,UNSIGNED> id1955out_output;

  { // Node ID: 1955 (NodeReinterpret)
    const HWOffsetFix<64,0,UNSIGNED> &id1955in_input = id1953out_o;

    id1955out_output = (cast_bits2fixed<64,4,UNSIGNED>((cast_fixed2bits(id1955in_input))));
  }
  { // Node ID: 2417 (NodeFIFO)
    const HWOffsetFix<64,4,UNSIGNED> &id2417in_input = id1955out_output;

    id2417out_output[(getCycle()+1)%2] = id2417in_input;
  }
  { // Node ID: 1957 (NodeAdd)
    const HWOffsetFix<68,0,UNSIGNED> &id1957in_a = id1956out_result[getCycle()%2];
    const HWOffsetFix<64,4,UNSIGNED> &id1957in_b = id2417out_output[getCycle()%2];

    id1957out_result[(getCycle()+1)%2] = (add_fixed<69,0,UNSIGNED,TRUNCATE>(id1957in_a,id1957in_b));
  }
  HWOffsetFix<64,0,UNSIGNED> id1958out_o;

  { // Node ID: 1958 (NodeCast)
    const HWOffsetFix<69,0,UNSIGNED> &id1958in_i = id1957out_result[getCycle()%2];

    id1958out_o = (cast_fixed2fixed<64,0,UNSIGNED,TRUNCATE>(id1958in_i));
  }
  { // Node ID: 2755 (NodeConstantRawBits)
  }
  { // Node ID: 607 (NodeAnd)
    const HWOffsetFix<64,0,UNSIGNED> &id607in_a = id2312out_output[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id607in_b = id2755out_value;

    HWOffsetFix<64,0,UNSIGNED> id607x_1;

    (id607x_1) = (and_fixed(id607in_a,id607in_b));
    id607out_result[(getCycle()+1)%2] = (id607x_1);
  }
  HWOffsetFix<64,-2,UNSIGNED> id1959out_output;

  { // Node ID: 1959 (NodeReinterpret)
    const HWOffsetFix<64,0,UNSIGNED> &id1959in_input = id607out_result[getCycle()%2];

    id1959out_output = (cast_bits2fixed<64,-2,UNSIGNED>((cast_fixed2bits(id1959in_input))));
  }
  HWOffsetFix<64,0,UNSIGNED> id1960out_o;

  { // Node ID: 1960 (NodeCast)
    const HWOffsetFix<64,-2,UNSIGNED> &id1960in_i = id1959out_output;

    id1960out_o = (cast_fixed2fixed<64,0,UNSIGNED,TRUNCATE>(id1960in_i));
  }
  { // Node ID: 659 (NodeAdd)
    const HWOffsetFix<64,0,UNSIGNED> &id659in_a = id1958out_o;
    const HWOffsetFix<64,0,UNSIGNED> &id659in_b = id1960out_o;

    id659out_result[(getCycle()+1)%2] = (add_fixed<64,0,UNSIGNED,TRUNCATE>(id659in_a,id659in_b));
  }
  { // Node ID: 2419 (NodeFIFO)
    const HWOffsetFix<64,0,UNSIGNED> &id2419in_input = id659out_result[getCycle()%2];

    id2419out_output[(getCycle()+5)%6] = id2419in_input;
  }
  { // Node ID: 907 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id907in_sel = id1853out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id907in_option0 = id904out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id907in_option1 = id2419out_output[getCycle()%6];

    HWOffsetFix<64,0,UNSIGNED> id907x_1;

    switch((id907in_sel.getValueAsLong())) {
      case 0l:
        id907x_1 = id907in_option0;
        break;
      case 1l:
        id907x_1 = id907in_option1;
        break;
      default:
        id907x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id907out_result[(getCycle()+1)%2] = (id907x_1);
  }
  HWRawBits<64> id1961out_dataout;

  { // Node ID: 1961 (NodeShift)
    const HWOffsetFix<64,0,UNSIGNED> &id1961in_datain = id576out_result[getCycle()%2];

    id1961out_dataout = (shift_right_fixed(id1961in_datain,(16l)));
  }
  HWOffsetFix<64,0,UNSIGNED> id610out_output;

  { // Node ID: 610 (NodeReinterpret)
    const HWRawBits<64> &id610in_input = id1961out_dataout;

    id610out_output = (cast_bits2fixed<64,0,UNSIGNED>(id610in_input));
  }
  HWOffsetFix<64,-1,UNSIGNED> id1962out_output;

  { // Node ID: 1962 (NodeReinterpret)
    const HWOffsetFix<64,0,UNSIGNED> &id1962in_input = id610out_output;

    id1962out_output = (cast_bits2fixed<64,-1,UNSIGNED>((cast_fixed2bits(id1962in_input))));
  }
  HWOffsetFix<64,0,UNSIGNED> id1963out_o;

  { // Node ID: 1963 (NodeCast)
    const HWOffsetFix<64,-1,UNSIGNED> &id1963in_i = id1962out_output;

    id1963out_o = (cast_fixed2fixed<64,0,UNSIGNED,TRUNCATE>(id1963in_i));
  }
  HWOffsetFix<64,3,UNSIGNED> id1964out_output;

  { // Node ID: 1964 (NodeReinterpret)
    const HWOffsetFix<64,0,UNSIGNED> &id1964in_input = id1963out_o;

    id1964out_output = (cast_bits2fixed<64,3,UNSIGNED>((cast_fixed2bits(id1964in_input))));
  }
  { // Node ID: 1966 (NodeAdd)
    const HWOffsetFix<64,0,UNSIGNED> &id1966in_a = id1963out_o;
    const HWOffsetFix<64,3,UNSIGNED> &id1966in_b = id1964out_output;

    id1966out_result[(getCycle()+1)%2] = (add_fixed<68,0,UNSIGNED,TRUNCATE>(id1966in_a,id1966in_b));
  }
  HWOffsetFix<64,4,UNSIGNED> id1965out_output;

  { // Node ID: 1965 (NodeReinterpret)
    const HWOffsetFix<64,0,UNSIGNED> &id1965in_input = id1963out_o;

    id1965out_output = (cast_bits2fixed<64,4,UNSIGNED>((cast_fixed2bits(id1965in_input))));
  }
  { // Node ID: 2420 (NodeFIFO)
    const HWOffsetFix<64,4,UNSIGNED> &id2420in_input = id1965out_output;

    id2420out_output[(getCycle()+1)%2] = id2420in_input;
  }
  { // Node ID: 1967 (NodeAdd)
    const HWOffsetFix<68,0,UNSIGNED> &id1967in_a = id1966out_result[getCycle()%2];
    const HWOffsetFix<64,4,UNSIGNED> &id1967in_b = id2420out_output[getCycle()%2];

    id1967out_result[(getCycle()+1)%2] = (add_fixed<69,0,UNSIGNED,TRUNCATE>(id1967in_a,id1967in_b));
  }
  HWOffsetFix<64,0,UNSIGNED> id1968out_o;

  { // Node ID: 1968 (NodeCast)
    const HWOffsetFix<69,0,UNSIGNED> &id1968in_i = id1967out_result[getCycle()%2];

    id1968out_o = (cast_fixed2fixed<64,0,UNSIGNED,TRUNCATE>(id1968in_i));
  }
  { // Node ID: 2754 (NodeConstantRawBits)
  }
  { // Node ID: 612 (NodeAnd)
    const HWOffsetFix<64,0,UNSIGNED> &id612in_a = id2293out_output[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id612in_b = id2754out_value;

    HWOffsetFix<64,0,UNSIGNED> id612x_1;

    (id612x_1) = (and_fixed(id612in_a,id612in_b));
    id612out_result[(getCycle()+1)%2] = (id612x_1);
  }
  HWOffsetFix<64,-2,UNSIGNED> id1969out_output;

  { // Node ID: 1969 (NodeReinterpret)
    const HWOffsetFix<64,0,UNSIGNED> &id1969in_input = id612out_result[getCycle()%2];

    id1969out_output = (cast_bits2fixed<64,-2,UNSIGNED>((cast_fixed2bits(id1969in_input))));
  }
  HWOffsetFix<64,0,UNSIGNED> id1970out_o;

  { // Node ID: 1970 (NodeCast)
    const HWOffsetFix<64,-2,UNSIGNED> &id1970in_i = id1969out_output;

    id1970out_o = (cast_fixed2fixed<64,0,UNSIGNED,TRUNCATE>(id1970in_i));
  }
  { // Node ID: 666 (NodeAdd)
    const HWOffsetFix<64,0,UNSIGNED> &id666in_a = id1968out_o;
    const HWOffsetFix<64,0,UNSIGNED> &id666in_b = id1970out_o;

    id666out_result[(getCycle()+1)%2] = (add_fixed<64,0,UNSIGNED,TRUNCATE>(id666in_a,id666in_b));
  }
  { // Node ID: 2422 (NodeFIFO)
    const HWOffsetFix<64,0,UNSIGNED> &id2422in_input = id666out_result[getCycle()%2];

    id2422out_output[(getCycle()+6)%7] = id2422in_input;
  }
  { // Node ID: 910 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id910in_sel = id1842out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id910in_option0 = id907out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id910in_option1 = id2422out_output[getCycle()%7];

    HWOffsetFix<64,0,UNSIGNED> id910x_1;

    switch((id910in_sel.getValueAsLong())) {
      case 0l:
        id910x_1 = id910in_option0;
        break;
      case 1l:
        id910x_1 = id910in_option1;
        break;
      default:
        id910x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id910out_result[(getCycle()+1)%2] = (id910x_1);
  }
  HWRawBits<64> id1971out_dataout;

  { // Node ID: 1971 (NodeShift)
    const HWOffsetFix<64,0,UNSIGNED> &id1971in_datain = id577out_result[getCycle()%2];

    id1971out_dataout = (shift_right_fixed(id1971in_datain,(16l)));
  }
  HWOffsetFix<64,0,UNSIGNED> id615out_output;

  { // Node ID: 615 (NodeReinterpret)
    const HWRawBits<64> &id615in_input = id1971out_dataout;

    id615out_output = (cast_bits2fixed<64,0,UNSIGNED>(id615in_input));
  }
  HWOffsetFix<64,-1,UNSIGNED> id1972out_output;

  { // Node ID: 1972 (NodeReinterpret)
    const HWOffsetFix<64,0,UNSIGNED> &id1972in_input = id615out_output;

    id1972out_output = (cast_bits2fixed<64,-1,UNSIGNED>((cast_fixed2bits(id1972in_input))));
  }
  HWOffsetFix<64,0,UNSIGNED> id1973out_o;

  { // Node ID: 1973 (NodeCast)
    const HWOffsetFix<64,-1,UNSIGNED> &id1973in_i = id1972out_output;

    id1973out_o = (cast_fixed2fixed<64,0,UNSIGNED,TRUNCATE>(id1973in_i));
  }
  HWOffsetFix<64,3,UNSIGNED> id1974out_output;

  { // Node ID: 1974 (NodeReinterpret)
    const HWOffsetFix<64,0,UNSIGNED> &id1974in_input = id1973out_o;

    id1974out_output = (cast_bits2fixed<64,3,UNSIGNED>((cast_fixed2bits(id1974in_input))));
  }
  { // Node ID: 1976 (NodeAdd)
    const HWOffsetFix<64,0,UNSIGNED> &id1976in_a = id1973out_o;
    const HWOffsetFix<64,3,UNSIGNED> &id1976in_b = id1974out_output;

    id1976out_result[(getCycle()+1)%2] = (add_fixed<68,0,UNSIGNED,TRUNCATE>(id1976in_a,id1976in_b));
  }
  { // Node ID: 2423 (NodeFIFO)
    const HWOffsetFix<64,0,UNSIGNED> &id2423in_input = id1973out_o;

    id2423out_output[(getCycle()+1)%2] = id2423in_input;
  }
  HWOffsetFix<64,4,UNSIGNED> id1975out_output;

  { // Node ID: 1975 (NodeReinterpret)
    const HWOffsetFix<64,0,UNSIGNED> &id1975in_input = id2423out_output[getCycle()%2];

    id1975out_output = (cast_bits2fixed<64,4,UNSIGNED>((cast_fixed2bits(id1975in_input))));
  }
  { // Node ID: 1977 (NodeAdd)
    const HWOffsetFix<68,0,UNSIGNED> &id1977in_a = id1976out_result[getCycle()%2];
    const HWOffsetFix<64,4,UNSIGNED> &id1977in_b = id1975out_output;

    id1977out_result[(getCycle()+1)%2] = (add_fixed<69,0,UNSIGNED,TRUNCATE>(id1977in_a,id1977in_b));
  }
  HWOffsetFix<64,0,UNSIGNED> id1978out_o;

  { // Node ID: 1978 (NodeCast)
    const HWOffsetFix<69,0,UNSIGNED> &id1978in_i = id1977out_result[getCycle()%2];

    id1978out_o = (cast_fixed2fixed<64,0,UNSIGNED,TRUNCATE>(id1978in_i));
  }
  { // Node ID: 2753 (NodeConstantRawBits)
  }
  { // Node ID: 617 (NodeAnd)
    const HWOffsetFix<64,0,UNSIGNED> &id617in_a = id2274out_output[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id617in_b = id2753out_value;

    HWOffsetFix<64,0,UNSIGNED> id617x_1;

    (id617x_1) = (and_fixed(id617in_a,id617in_b));
    id617out_result[(getCycle()+1)%2] = (id617x_1);
  }
  HWOffsetFix<64,-2,UNSIGNED> id1979out_output;

  { // Node ID: 1979 (NodeReinterpret)
    const HWOffsetFix<64,0,UNSIGNED> &id1979in_input = id617out_result[getCycle()%2];

    id1979out_output = (cast_bits2fixed<64,-2,UNSIGNED>((cast_fixed2bits(id1979in_input))));
  }
  HWOffsetFix<64,0,UNSIGNED> id1980out_o;

  { // Node ID: 1980 (NodeCast)
    const HWOffsetFix<64,-2,UNSIGNED> &id1980in_i = id1979out_output;

    id1980out_o = (cast_fixed2fixed<64,0,UNSIGNED,TRUNCATE>(id1980in_i));
  }
  { // Node ID: 673 (NodeAdd)
    const HWOffsetFix<64,0,UNSIGNED> &id673in_a = id1978out_o;
    const HWOffsetFix<64,0,UNSIGNED> &id673in_b = id1980out_o;

    id673out_result[(getCycle()+1)%2] = (add_fixed<64,0,UNSIGNED,TRUNCATE>(id673in_a,id673in_b));
  }
  { // Node ID: 2425 (NodeFIFO)
    const HWOffsetFix<64,0,UNSIGNED> &id2425in_input = id673out_result[getCycle()%2];

    id2425out_output[(getCycle()+7)%8] = id2425in_input;
  }
  { // Node ID: 913 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id913in_sel = id1831out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id913in_option0 = id910out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id913in_option1 = id2425out_output[getCycle()%8];

    HWOffsetFix<64,0,UNSIGNED> id913x_1;

    switch((id913in_sel.getValueAsLong())) {
      case 0l:
        id913x_1 = id913in_option0;
        break;
      case 1l:
        id913x_1 = id913in_option1;
        break;
      default:
        id913x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id913out_result[(getCycle()+1)%2] = (id913x_1);
  }
  HWOffsetFix<11,0,UNSIGNED> id1352out_o;

  { // Node ID: 1352 (NodeCast)
    const HWOffsetFix<64,0,UNSIGNED> &id1352in_i = id913out_result[getCycle()%2];

    id1352out_o = (cast_fixed2fixed<11,0,UNSIGNED,TRUNCATE>(id1352in_i));
  }
  { // Node ID: 2752 (NodeConstantRawBits)
  }
  HWOffsetFix<1,0,UNSIGNED> id1981out_result;

  { // Node ID: 1981 (NodeEqInlined)
    const HWOffsetFix<32,0,TWOSCOMPLEMENT> &id1981in_a = id12out_compute;
    const HWOffsetFix<32,0,TWOSCOMPLEMENT> &id1981in_b = id2752out_value;

    id1981out_result = (eq_fixed(id1981in_a,id1981in_b));
  }
  HWOffsetFix<64,2,UNSIGNED> id1982out_output;

  { // Node ID: 1982 (NodeReinterpret)
    const HWOffsetFix<64,0,UNSIGNED> &id1982in_input = id745out_o;

    id1982out_output = (cast_bits2fixed<64,2,UNSIGNED>((cast_fixed2bits(id1982in_input))));
  }
  HWOffsetFix<64,0,UNSIGNED> id1983out_o;

  { // Node ID: 1983 (NodeCast)
    const HWOffsetFix<64,2,UNSIGNED> &id1983in_i = id1982out_output;

    id1983out_o = (cast_fixed2fixed<64,0,UNSIGNED,TRUNCATE>(id1983in_i));
  }
  { // Node ID: 1105 (NodeAdd)
    const HWOffsetFix<64,0,UNSIGNED> &id1105in_a = id1983out_o;
    const HWOffsetFix<64,0,UNSIGNED> &id1105in_b = id865out_o;

    id1105out_result[(getCycle()+1)%2] = (add_fixed<64,0,UNSIGNED,TRUNCATE>(id1105in_a,id1105in_b));
  }
  { // Node ID: 2751 (NodeConstantRawBits)
  }
  { // Node ID: 1984 (NodeEqInlined)
    const HWOffsetFix<64,0,UNSIGNED> &id1984in_a = id1105out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1984in_b = id2751out_value;

    id1984out_result[(getCycle()+1)%2] = (eq_fixed(id1984in_a,id1984in_b));
  }
  HWOffsetFix<64,2,UNSIGNED> id1985out_output;

  { // Node ID: 1985 (NodeReinterpret)
    const HWOffsetFix<64,0,UNSIGNED> &id1985in_input = id741out_o;

    id1985out_output = (cast_bits2fixed<64,2,UNSIGNED>((cast_fixed2bits(id1985in_input))));
  }
  HWOffsetFix<64,0,UNSIGNED> id1986out_o;

  { // Node ID: 1986 (NodeCast)
    const HWOffsetFix<64,2,UNSIGNED> &id1986in_i = id1985out_output;

    id1986out_o = (cast_fixed2fixed<64,0,UNSIGNED,TRUNCATE>(id1986in_i));
  }
  { // Node ID: 1102 (NodeAdd)
    const HWOffsetFix<64,0,UNSIGNED> &id1102in_a = id1986out_o;
    const HWOffsetFix<64,0,UNSIGNED> &id1102in_b = id855out_o;

    id1102out_result[(getCycle()+1)%2] = (add_fixed<64,0,UNSIGNED,TRUNCATE>(id1102in_a,id1102in_b));
  }
  { // Node ID: 2750 (NodeConstantRawBits)
  }
  { // Node ID: 1987 (NodeEqInlined)
    const HWOffsetFix<64,0,UNSIGNED> &id1987in_a = id1102out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1987in_b = id2750out_value;

    id1987out_result[(getCycle()+1)%2] = (eq_fixed(id1987in_a,id1987in_b));
  }
  HWOffsetFix<64,2,UNSIGNED> id1988out_output;

  { // Node ID: 1988 (NodeReinterpret)
    const HWOffsetFix<64,0,UNSIGNED> &id1988in_input = id737out_o;

    id1988out_output = (cast_bits2fixed<64,2,UNSIGNED>((cast_fixed2bits(id1988in_input))));
  }
  HWOffsetFix<64,0,UNSIGNED> id1989out_o;

  { // Node ID: 1989 (NodeCast)
    const HWOffsetFix<64,2,UNSIGNED> &id1989in_i = id1988out_output;

    id1989out_o = (cast_fixed2fixed<64,0,UNSIGNED,TRUNCATE>(id1989in_i));
  }
  { // Node ID: 1099 (NodeAdd)
    const HWOffsetFix<64,0,UNSIGNED> &id1099in_a = id1989out_o;
    const HWOffsetFix<64,0,UNSIGNED> &id1099in_b = id845out_o;

    id1099out_result[(getCycle()+1)%2] = (add_fixed<64,0,UNSIGNED,TRUNCATE>(id1099in_a,id1099in_b));
  }
  { // Node ID: 2749 (NodeConstantRawBits)
  }
  { // Node ID: 1990 (NodeEqInlined)
    const HWOffsetFix<64,0,UNSIGNED> &id1990in_a = id1099out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1990in_b = id2749out_value;

    id1990out_result[(getCycle()+1)%2] = (eq_fixed(id1990in_a,id1990in_b));
  }
  HWOffsetFix<64,2,UNSIGNED> id1991out_output;

  { // Node ID: 1991 (NodeReinterpret)
    const HWOffsetFix<64,0,UNSIGNED> &id1991in_input = id733out_o;

    id1991out_output = (cast_bits2fixed<64,2,UNSIGNED>((cast_fixed2bits(id1991in_input))));
  }
  HWOffsetFix<64,0,UNSIGNED> id1992out_o;

  { // Node ID: 1992 (NodeCast)
    const HWOffsetFix<64,2,UNSIGNED> &id1992in_i = id1991out_output;

    id1992out_o = (cast_fixed2fixed<64,0,UNSIGNED,TRUNCATE>(id1992in_i));
  }
  { // Node ID: 1096 (NodeAdd)
    const HWOffsetFix<64,0,UNSIGNED> &id1096in_a = id1992out_o;
    const HWOffsetFix<64,0,UNSIGNED> &id1096in_b = id835out_o;

    id1096out_result[(getCycle()+1)%2] = (add_fixed<64,0,UNSIGNED,TRUNCATE>(id1096in_a,id1096in_b));
  }
  { // Node ID: 2748 (NodeConstantRawBits)
  }
  { // Node ID: 1993 (NodeEqInlined)
    const HWOffsetFix<64,0,UNSIGNED> &id1993in_a = id1096out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1993in_b = id2748out_value;

    id1993out_result[(getCycle()+1)%2] = (eq_fixed(id1993in_a,id1993in_b));
  }
  HWOffsetFix<64,2,UNSIGNED> id1994out_output;

  { // Node ID: 1994 (NodeReinterpret)
    const HWOffsetFix<64,0,UNSIGNED> &id1994in_input = id729out_o;

    id1994out_output = (cast_bits2fixed<64,2,UNSIGNED>((cast_fixed2bits(id1994in_input))));
  }
  HWOffsetFix<64,0,UNSIGNED> id1995out_o;

  { // Node ID: 1995 (NodeCast)
    const HWOffsetFix<64,2,UNSIGNED> &id1995in_i = id1994out_output;

    id1995out_o = (cast_fixed2fixed<64,0,UNSIGNED,TRUNCATE>(id1995in_i));
  }
  { // Node ID: 1093 (NodeAdd)
    const HWOffsetFix<64,0,UNSIGNED> &id1093in_a = id1995out_o;
    const HWOffsetFix<64,0,UNSIGNED> &id1093in_b = id825out_o;

    id1093out_result[(getCycle()+1)%2] = (add_fixed<64,0,UNSIGNED,TRUNCATE>(id1093in_a,id1093in_b));
  }
  { // Node ID: 2747 (NodeConstantRawBits)
  }
  { // Node ID: 1996 (NodeEqInlined)
    const HWOffsetFix<64,0,UNSIGNED> &id1996in_a = id1093out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1996in_b = id2747out_value;

    id1996out_result[(getCycle()+1)%2] = (eq_fixed(id1996in_a,id1996in_b));
  }
  HWOffsetFix<64,2,UNSIGNED> id1997out_output;

  { // Node ID: 1997 (NodeReinterpret)
    const HWOffsetFix<64,0,UNSIGNED> &id1997in_input = id725out_o;

    id1997out_output = (cast_bits2fixed<64,2,UNSIGNED>((cast_fixed2bits(id1997in_input))));
  }
  HWOffsetFix<64,0,UNSIGNED> id1998out_o;

  { // Node ID: 1998 (NodeCast)
    const HWOffsetFix<64,2,UNSIGNED> &id1998in_i = id1997out_output;

    id1998out_o = (cast_fixed2fixed<64,0,UNSIGNED,TRUNCATE>(id1998in_i));
  }
  { // Node ID: 1090 (NodeAdd)
    const HWOffsetFix<64,0,UNSIGNED> &id1090in_a = id1998out_o;
    const HWOffsetFix<64,0,UNSIGNED> &id1090in_b = id815out_o;

    id1090out_result[(getCycle()+1)%2] = (add_fixed<64,0,UNSIGNED,TRUNCATE>(id1090in_a,id1090in_b));
  }
  { // Node ID: 2746 (NodeConstantRawBits)
  }
  { // Node ID: 1999 (NodeEqInlined)
    const HWOffsetFix<64,0,UNSIGNED> &id1999in_a = id1090out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1999in_b = id2746out_value;

    id1999out_result[(getCycle()+1)%2] = (eq_fixed(id1999in_a,id1999in_b));
  }
  HWOffsetFix<64,2,UNSIGNED> id2000out_output;

  { // Node ID: 2000 (NodeReinterpret)
    const HWOffsetFix<64,0,UNSIGNED> &id2000in_input = id721out_o;

    id2000out_output = (cast_bits2fixed<64,2,UNSIGNED>((cast_fixed2bits(id2000in_input))));
  }
  HWOffsetFix<64,0,UNSIGNED> id2001out_o;

  { // Node ID: 2001 (NodeCast)
    const HWOffsetFix<64,2,UNSIGNED> &id2001in_i = id2000out_output;

    id2001out_o = (cast_fixed2fixed<64,0,UNSIGNED,TRUNCATE>(id2001in_i));
  }
  { // Node ID: 1087 (NodeAdd)
    const HWOffsetFix<64,0,UNSIGNED> &id1087in_a = id2001out_o;
    const HWOffsetFix<64,0,UNSIGNED> &id1087in_b = id805out_o;

    id1087out_result[(getCycle()+1)%2] = (add_fixed<64,0,UNSIGNED,TRUNCATE>(id1087in_a,id1087in_b));
  }
  { // Node ID: 2745 (NodeConstantRawBits)
  }
  { // Node ID: 2002 (NodeEqInlined)
    const HWOffsetFix<64,0,UNSIGNED> &id2002in_a = id1087out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id2002in_b = id2745out_value;

    id2002out_result[(getCycle()+1)%2] = (eq_fixed(id2002in_a,id2002in_b));
  }
  { // Node ID: 14 (NodeInputMappedReg)
  }
  HWOffsetFix<1,0,UNSIGNED> id15out_result;

  { // Node ID: 15 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id15in_a = id14out_io_input_data_arr0_0_force_disabled;

    id15out_result = (not_fixed(id15in_a));
  }
  if ( (getFillLevel() >= (15l)))
  { // Node ID: 16 (NodeInput)
    const HWOffsetFix<1,0,UNSIGNED> &id16in_enable = id15out_result;

    (id16st_read_next_cycle) = ((id16in_enable.getValueAsBool())&(!(((getFlushLevel())>=(15l))&(isFlushingActive()))));
    queueReadRequest(m_input_data_arr0_0, id16st_read_next_cycle.getValueAsBool());
  }
  { // Node ID: 2426 (NodeFIFO)
    const HWOffsetFix<64,0,UNSIGNED> &id2426in_input = id16out_data;

    id2426out_output[(getCycle()+1)%2] = id2426in_input;
  }
  { // Node ID: 17 (NodeInputMappedReg)
  }
  HWOffsetFix<1,0,UNSIGNED> id18out_result;

  { // Node ID: 18 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id18in_a = id17out_io_input_data_arr0_1_force_disabled;

    id18out_result = (not_fixed(id18in_a));
  }
  if ( (getFillLevel() >= (15l)))
  { // Node ID: 19 (NodeInput)
    const HWOffsetFix<1,0,UNSIGNED> &id19in_enable = id18out_result;

    (id19st_read_next_cycle) = ((id19in_enable.getValueAsBool())&(!(((getFlushLevel())>=(15l))&(isFlushingActive()))));
    queueReadRequest(m_input_data_arr0_1, id19st_read_next_cycle.getValueAsBool());
  }
  { // Node ID: 2427 (NodeFIFO)
    const HWOffsetFix<64,0,UNSIGNED> &id2427in_input = id19out_data;

    id2427out_output[(getCycle()+1)%2] = id2427in_input;
  }
  { // Node ID: 1111 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1111in_sel = id2002out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1111in_option0 = id2426out_output[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1111in_option1 = id2427out_output[getCycle()%2];

    HWOffsetFix<64,0,UNSIGNED> id1111x_1;

    switch((id1111in_sel.getValueAsLong())) {
      case 0l:
        id1111x_1 = id1111in_option0;
        break;
      case 1l:
        id1111x_1 = id1111in_option1;
        break;
      default:
        id1111x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1111out_result[(getCycle()+1)%2] = (id1111x_1);
  }
  { // Node ID: 20 (NodeInputMappedReg)
  }
  HWOffsetFix<1,0,UNSIGNED> id21out_result;

  { // Node ID: 21 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id21in_a = id20out_io_input_data_arr0_2_force_disabled;

    id21out_result = (not_fixed(id21in_a));
  }
  if ( (getFillLevel() >= (15l)))
  { // Node ID: 22 (NodeInput)
    const HWOffsetFix<1,0,UNSIGNED> &id22in_enable = id21out_result;

    (id22st_read_next_cycle) = ((id22in_enable.getValueAsBool())&(!(((getFlushLevel())>=(15l))&(isFlushingActive()))));
    queueReadRequest(m_input_data_arr0_2, id22st_read_next_cycle.getValueAsBool());
  }
  { // Node ID: 2428 (NodeFIFO)
    const HWOffsetFix<64,0,UNSIGNED> &id2428in_input = id22out_data;

    id2428out_output[(getCycle()+2)%3] = id2428in_input;
  }
  { // Node ID: 1114 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1114in_sel = id1999out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1114in_option0 = id1111out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1114in_option1 = id2428out_output[getCycle()%3];

    HWOffsetFix<64,0,UNSIGNED> id1114x_1;

    switch((id1114in_sel.getValueAsLong())) {
      case 0l:
        id1114x_1 = id1114in_option0;
        break;
      case 1l:
        id1114x_1 = id1114in_option1;
        break;
      default:
        id1114x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1114out_result[(getCycle()+1)%2] = (id1114x_1);
  }
  { // Node ID: 23 (NodeInputMappedReg)
  }
  HWOffsetFix<1,0,UNSIGNED> id24out_result;

  { // Node ID: 24 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id24in_a = id23out_io_input_data_arr0_3_force_disabled;

    id24out_result = (not_fixed(id24in_a));
  }
  if ( (getFillLevel() >= (15l)))
  { // Node ID: 25 (NodeInput)
    const HWOffsetFix<1,0,UNSIGNED> &id25in_enable = id24out_result;

    (id25st_read_next_cycle) = ((id25in_enable.getValueAsBool())&(!(((getFlushLevel())>=(15l))&(isFlushingActive()))));
    queueReadRequest(m_input_data_arr0_3, id25st_read_next_cycle.getValueAsBool());
  }
  { // Node ID: 2429 (NodeFIFO)
    const HWOffsetFix<64,0,UNSIGNED> &id2429in_input = id25out_data;

    id2429out_output[(getCycle()+3)%4] = id2429in_input;
  }
  { // Node ID: 1117 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1117in_sel = id1996out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1117in_option0 = id1114out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1117in_option1 = id2429out_output[getCycle()%4];

    HWOffsetFix<64,0,UNSIGNED> id1117x_1;

    switch((id1117in_sel.getValueAsLong())) {
      case 0l:
        id1117x_1 = id1117in_option0;
        break;
      case 1l:
        id1117x_1 = id1117in_option1;
        break;
      default:
        id1117x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1117out_result[(getCycle()+1)%2] = (id1117x_1);
  }
  { // Node ID: 26 (NodeInputMappedReg)
  }
  HWOffsetFix<1,0,UNSIGNED> id27out_result;

  { // Node ID: 27 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id27in_a = id26out_io_input_data_arr1_0_force_disabled;

    id27out_result = (not_fixed(id27in_a));
  }
  if ( (getFillLevel() >= (15l)))
  { // Node ID: 28 (NodeInput)
    const HWOffsetFix<1,0,UNSIGNED> &id28in_enable = id27out_result;

    (id28st_read_next_cycle) = ((id28in_enable.getValueAsBool())&(!(((getFlushLevel())>=(15l))&(isFlushingActive()))));
    queueReadRequest(m_input_data_arr1_0, id28st_read_next_cycle.getValueAsBool());
  }
  { // Node ID: 2430 (NodeFIFO)
    const HWOffsetFix<64,0,UNSIGNED> &id2430in_input = id28out_data;

    id2430out_output[(getCycle()+4)%5] = id2430in_input;
  }
  { // Node ID: 1120 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1120in_sel = id1993out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1120in_option0 = id1117out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1120in_option1 = id2430out_output[getCycle()%5];

    HWOffsetFix<64,0,UNSIGNED> id1120x_1;

    switch((id1120in_sel.getValueAsLong())) {
      case 0l:
        id1120x_1 = id1120in_option0;
        break;
      case 1l:
        id1120x_1 = id1120in_option1;
        break;
      default:
        id1120x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1120out_result[(getCycle()+1)%2] = (id1120x_1);
  }
  { // Node ID: 29 (NodeInputMappedReg)
  }
  HWOffsetFix<1,0,UNSIGNED> id30out_result;

  { // Node ID: 30 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id30in_a = id29out_io_input_data_arr1_1_force_disabled;

    id30out_result = (not_fixed(id30in_a));
  }
  if ( (getFillLevel() >= (15l)))
  { // Node ID: 31 (NodeInput)
    const HWOffsetFix<1,0,UNSIGNED> &id31in_enable = id30out_result;

    (id31st_read_next_cycle) = ((id31in_enable.getValueAsBool())&(!(((getFlushLevel())>=(15l))&(isFlushingActive()))));
    queueReadRequest(m_input_data_arr1_1, id31st_read_next_cycle.getValueAsBool());
  }
  { // Node ID: 2431 (NodeFIFO)
    const HWOffsetFix<64,0,UNSIGNED> &id2431in_input = id31out_data;

    id2431out_output[(getCycle()+5)%6] = id2431in_input;
  }
  { // Node ID: 1123 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1123in_sel = id1990out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1123in_option0 = id1120out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1123in_option1 = id2431out_output[getCycle()%6];

    HWOffsetFix<64,0,UNSIGNED> id1123x_1;

    switch((id1123in_sel.getValueAsLong())) {
      case 0l:
        id1123x_1 = id1123in_option0;
        break;
      case 1l:
        id1123x_1 = id1123in_option1;
        break;
      default:
        id1123x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1123out_result[(getCycle()+1)%2] = (id1123x_1);
  }
  { // Node ID: 32 (NodeInputMappedReg)
  }
  HWOffsetFix<1,0,UNSIGNED> id33out_result;

  { // Node ID: 33 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id33in_a = id32out_io_input_data_arr1_2_force_disabled;

    id33out_result = (not_fixed(id33in_a));
  }
  if ( (getFillLevel() >= (15l)))
  { // Node ID: 34 (NodeInput)
    const HWOffsetFix<1,0,UNSIGNED> &id34in_enable = id33out_result;

    (id34st_read_next_cycle) = ((id34in_enable.getValueAsBool())&(!(((getFlushLevel())>=(15l))&(isFlushingActive()))));
    queueReadRequest(m_input_data_arr1_2, id34st_read_next_cycle.getValueAsBool());
  }
  { // Node ID: 2432 (NodeFIFO)
    const HWOffsetFix<64,0,UNSIGNED> &id2432in_input = id34out_data;

    id2432out_output[(getCycle()+6)%7] = id2432in_input;
  }
  { // Node ID: 1126 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1126in_sel = id1987out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1126in_option0 = id1123out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1126in_option1 = id2432out_output[getCycle()%7];

    HWOffsetFix<64,0,UNSIGNED> id1126x_1;

    switch((id1126in_sel.getValueAsLong())) {
      case 0l:
        id1126x_1 = id1126in_option0;
        break;
      case 1l:
        id1126x_1 = id1126in_option1;
        break;
      default:
        id1126x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1126out_result[(getCycle()+1)%2] = (id1126x_1);
  }
  { // Node ID: 35 (NodeInputMappedReg)
  }
  HWOffsetFix<1,0,UNSIGNED> id36out_result;

  { // Node ID: 36 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id36in_a = id35out_io_input_data_arr1_3_force_disabled;

    id36out_result = (not_fixed(id36in_a));
  }
  if ( (getFillLevel() >= (15l)))
  { // Node ID: 37 (NodeInput)
    const HWOffsetFix<1,0,UNSIGNED> &id37in_enable = id36out_result;

    (id37st_read_next_cycle) = ((id37in_enable.getValueAsBool())&(!(((getFlushLevel())>=(15l))&(isFlushingActive()))));
    queueReadRequest(m_input_data_arr1_3, id37st_read_next_cycle.getValueAsBool());
  }
  { // Node ID: 2433 (NodeFIFO)
    const HWOffsetFix<64,0,UNSIGNED> &id2433in_input = id37out_data;

    id2433out_output[(getCycle()+7)%8] = id2433in_input;
  }
  { // Node ID: 1129 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1129in_sel = id1984out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1129in_option0 = id1126out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1129in_option1 = id2433out_output[getCycle()%8];

    HWOffsetFix<64,0,UNSIGNED> id1129x_1;

    switch((id1129in_sel.getValueAsLong())) {
      case 0l:
        id1129x_1 = id1129in_option0;
        break;
      case 1l:
        id1129x_1 = id1129in_option1;
        break;
      default:
        id1129x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1129out_result[(getCycle()+1)%2] = (id1129x_1);
  }
  { // Node ID: 2744 (NodeConstantRawBits)
  }
  HWOffsetFix<64,0,UNSIGNED> id1311out_result;

  { // Node ID: 1311 (NodeAdd)
    const HWOffsetFix<64,0,UNSIGNED> &id1311in_a = id1129out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1311in_b = id2744out_value;

    id1311out_result = (add_fixed<64,0,UNSIGNED,TRUNCATE>(id1311in_a,id1311in_b));
  }
  HWOffsetFix<64,0,UNSIGNED> id1312out_result;

  { // Node ID: 1312 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1312in_sel = id1981out_result;
    const HWOffsetFix<64,0,UNSIGNED> &id1312in_option0 = id1129out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1312in_option1 = id1311out_result;

    HWOffsetFix<64,0,UNSIGNED> id1312x_1;

    switch((id1312in_sel.getValueAsLong())) {
      case 0l:
        id1312x_1 = id1312in_option0;
        break;
      case 1l:
        id1312x_1 = id1312in_option1;
        break;
      default:
        id1312x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1312out_result = (id1312x_1);
  }
  { // Node ID: 9 (NodeInputMappedReg)
  }
  HWOffsetFix<1,0,UNSIGNED> id10out_result;

  { // Node ID: 10 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id10in_a = id9out_io_write_enable_force_disabled;

    id10out_result = (not_fixed(id10in_a));
  }
  if ( (getFillLevel() >= (23l)))
  { // Node ID: 11 (NodeInput)
    const HWOffsetFix<1,0,UNSIGNED> &id11in_enable = id10out_result;

    (id11st_read_next_cycle) = ((id11in_enable.getValueAsBool())&(!(((getFlushLevel())>=(23l))&(isFlushingActive()))));
    queueReadRequest(m_write_enable, id11st_read_next_cycle.getValueAsBool());
  }
  HWRawBits<64> id2209out_output;

  { // Node ID: 2209 (NodeReinterpret)
    const HWOffsetFix<64,0,UNSIGNED> &id2209in_input = id11out_data;

    id2209out_output = (cast_fixed2bits(id2209in_input));
  }
  HWOffsetFix<64,0,UNSIGNED> id1350out_output;

  { // Node ID: 1350 (NodeReinterpret)
    const HWRawBits<64> &id1350in_input = id2209out_output;

    id1350out_output = (cast_bits2fixed<64,0,UNSIGNED>(id1350in_input));
  }
  HWOffsetFix<1,0,UNSIGNED> id1351out_o;

  { // Node ID: 1351 (NodeCast)
    const HWOffsetFix<64,0,UNSIGNED> &id1351in_i = id1350out_output;

    id1351out_o = (cast_fixed2fixed<1,0,UNSIGNED,TRUNCATE>(id1351in_i));
  }
  HWOffsetFix<11,0,UNSIGNED> id1353out_o;

  { // Node ID: 1353 (NodeCast)
    const HWOffsetFix<64,0,UNSIGNED> &id1353in_i = id913out_result[getCycle()%2];

    id1353out_o = (cast_fixed2fixed<11,0,UNSIGNED,TRUNCATE>(id1353in_i));
  }
  if ( (getFillLevel() >= (28l)))
  { // Node ID: 1780 (NodeRAM)
    const bool id1780_inputvalid = !(isFlushingActive() && getFlushLevel() >= (28l));
    const HWOffsetFix<11,0,UNSIGNED> &id1780in_addrA = id1352out_o;
    const HWOffsetFix<64,0,UNSIGNED> &id1780in_dina = id1312out_result;
    const HWOffsetFix<1,0,UNSIGNED> &id1780in_wea = id1351out_o;
    const HWOffsetFix<11,0,UNSIGNED> &id1780in_addrB = id1353out_o;

    long id1780x_1;
    long id1780x_2;
    HWOffsetFix<64,0,UNSIGNED> id1780x_3;

    (id1780x_1) = (id1780in_addrA.getValueAsLong());
    (id1780x_2) = (id1780in_addrB.getValueAsLong());
    switch(((long)((id1780x_2)<(1250l)))) {
      case 0l:
        id1780x_3 = (c_hw_fix_64_0_uns_undef);
        break;
      case 1l:
        id1780x_3 = (id1780sta_ram_store[(id1780x_2)]);
        break;
      default:
        id1780x_3 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1780out_doutb[(getCycle()+2)%3] = (id1780x_3);
    if(((id1780in_wea.getValueAsBool())&id1780_inputvalid)) {
      if(((id1780x_1)<(1250l))) {
        (id1780sta_ram_store[(id1780x_1)]) = id1780in_dina;
      }
      else {
        throw std::runtime_error((format_string_prf_v2_Kernel_1("Run-time exception during simulation: Out of bounds write to NodeRAM (ID: 1780) on port A, ram depth is 1250.")));
      }
    }
  }
  { // Node ID: 2743 (NodeConstantRawBits)
  }
  { // Node ID: 2007 (NodeEqInlined)
    const HWOffsetFix<64,0,UNSIGNED> &id2007in_a = id889out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id2007in_b = id2743out_value;

    id2007out_result[(getCycle()+1)%2] = (eq_fixed(id2007in_a,id2007in_b));
  }
  { // Node ID: 2742 (NodeConstantRawBits)
  }
  { // Node ID: 2008 (NodeEqInlined)
    const HWOffsetFix<64,0,UNSIGNED> &id2008in_a = id886out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id2008in_b = id2742out_value;

    id2008out_result[(getCycle()+1)%2] = (eq_fixed(id2008in_a,id2008in_b));
  }
  { // Node ID: 2741 (NodeConstantRawBits)
  }
  { // Node ID: 2009 (NodeEqInlined)
    const HWOffsetFix<64,0,UNSIGNED> &id2009in_a = id883out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id2009in_b = id2741out_value;

    id2009out_result[(getCycle()+1)%2] = (eq_fixed(id2009in_a,id2009in_b));
  }
  { // Node ID: 2740 (NodeConstantRawBits)
  }
  { // Node ID: 2010 (NodeEqInlined)
    const HWOffsetFix<64,0,UNSIGNED> &id2010in_a = id880out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id2010in_b = id2740out_value;

    id2010out_result[(getCycle()+1)%2] = (eq_fixed(id2010in_a,id2010in_b));
  }
  { // Node ID: 2739 (NodeConstantRawBits)
  }
  { // Node ID: 2011 (NodeEqInlined)
    const HWOffsetFix<64,0,UNSIGNED> &id2011in_a = id877out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id2011in_b = id2739out_value;

    id2011out_result[(getCycle()+1)%2] = (eq_fixed(id2011in_a,id2011in_b));
  }
  { // Node ID: 2738 (NodeConstantRawBits)
  }
  { // Node ID: 2012 (NodeEqInlined)
    const HWOffsetFix<64,0,UNSIGNED> &id2012in_a = id874out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id2012in_b = id2738out_value;

    id2012out_result[(getCycle()+1)%2] = (eq_fixed(id2012in_a,id2012in_b));
  }
  { // Node ID: 2737 (NodeConstantRawBits)
  }
  { // Node ID: 2013 (NodeEqInlined)
    const HWOffsetFix<64,0,UNSIGNED> &id2013in_a = id871out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id2013in_b = id2737out_value;

    id2013out_result[(getCycle()+1)%2] = (eq_fixed(id2013in_a,id2013in_b));
  }
  HWOffsetFix<64,2,UNSIGNED> id1898out_output;

  { // Node ID: 1898 (NodeReinterpret)
    const HWOffsetFix<64,0,UNSIGNED> &id1898in_input = id717out_o;

    id1898out_output = (cast_bits2fixed<64,2,UNSIGNED>((cast_fixed2bits(id1898in_input))));
  }
  HWOffsetFix<64,0,UNSIGNED> id1899out_o;

  { // Node ID: 1899 (NodeCast)
    const HWOffsetFix<64,2,UNSIGNED> &id1899in_i = id1898out_output;

    id1899out_o = (cast_fixed2fixed<64,0,UNSIGNED,TRUNCATE>(id1899in_i));
  }
  { // Node ID: 868 (NodeAdd)
    const HWOffsetFix<64,0,UNSIGNED> &id868in_a = id1899out_o;
    const HWOffsetFix<64,0,UNSIGNED> &id868in_b = id795out_o;

    id868out_result[(getCycle()+1)%2] = (add_fixed<64,0,UNSIGNED,TRUNCATE>(id868in_a,id868in_b));
  }
  { // Node ID: 2736 (NodeConstantRawBits)
  }
  { // Node ID: 2014 (NodeEqInlined)
    const HWOffsetFix<64,0,UNSIGNED> &id2014in_a = id868out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id2014in_b = id2736out_value;

    id2014out_result[(getCycle()+1)%2] = (eq_fixed(id2014in_a,id2014in_b));
  }
  { // Node ID: 916 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id916in_sel = id2014out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id916in_option0 = id631out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id916in_option1 = id624out_result[getCycle()%2];

    HWOffsetFix<64,0,UNSIGNED> id916x_1;

    switch((id916in_sel.getValueAsLong())) {
      case 0l:
        id916x_1 = id916in_option0;
        break;
      case 1l:
        id916x_1 = id916in_option1;
        break;
      default:
        id916x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id916out_result[(getCycle()+1)%2] = (id916x_1);
  }
  { // Node ID: 919 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id919in_sel = id2013out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id919in_option0 = id916out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id919in_option1 = id2407out_output[getCycle()%2];

    HWOffsetFix<64,0,UNSIGNED> id919x_1;

    switch((id919in_sel.getValueAsLong())) {
      case 0l:
        id919x_1 = id919in_option0;
        break;
      case 1l:
        id919x_1 = id919in_option1;
        break;
      default:
        id919x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id919out_result[(getCycle()+1)%2] = (id919x_1);
  }
  { // Node ID: 922 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id922in_sel = id2012out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id922in_option0 = id919out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id922in_option1 = id2410out_output[getCycle()%3];

    HWOffsetFix<64,0,UNSIGNED> id922x_1;

    switch((id922in_sel.getValueAsLong())) {
      case 0l:
        id922x_1 = id922in_option0;
        break;
      case 1l:
        id922x_1 = id922in_option1;
        break;
      default:
        id922x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id922out_result[(getCycle()+1)%2] = (id922x_1);
  }
  { // Node ID: 925 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id925in_sel = id2011out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id925in_option0 = id922out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id925in_option1 = id2413out_output[getCycle()%4];

    HWOffsetFix<64,0,UNSIGNED> id925x_1;

    switch((id925in_sel.getValueAsLong())) {
      case 0l:
        id925x_1 = id925in_option0;
        break;
      case 1l:
        id925x_1 = id925in_option1;
        break;
      default:
        id925x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id925out_result[(getCycle()+1)%2] = (id925x_1);
  }
  { // Node ID: 928 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id928in_sel = id2010out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id928in_option0 = id925out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id928in_option1 = id2416out_output[getCycle()%5];

    HWOffsetFix<64,0,UNSIGNED> id928x_1;

    switch((id928in_sel.getValueAsLong())) {
      case 0l:
        id928x_1 = id928in_option0;
        break;
      case 1l:
        id928x_1 = id928in_option1;
        break;
      default:
        id928x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id928out_result[(getCycle()+1)%2] = (id928x_1);
  }
  { // Node ID: 931 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id931in_sel = id2009out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id931in_option0 = id928out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id931in_option1 = id2419out_output[getCycle()%6];

    HWOffsetFix<64,0,UNSIGNED> id931x_1;

    switch((id931in_sel.getValueAsLong())) {
      case 0l:
        id931x_1 = id931in_option0;
        break;
      case 1l:
        id931x_1 = id931in_option1;
        break;
      default:
        id931x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id931out_result[(getCycle()+1)%2] = (id931x_1);
  }
  { // Node ID: 934 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id934in_sel = id2008out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id934in_option0 = id931out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id934in_option1 = id2422out_output[getCycle()%7];

    HWOffsetFix<64,0,UNSIGNED> id934x_1;

    switch((id934in_sel.getValueAsLong())) {
      case 0l:
        id934x_1 = id934in_option0;
        break;
      case 1l:
        id934x_1 = id934in_option1;
        break;
      default:
        id934x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id934out_result[(getCycle()+1)%2] = (id934x_1);
  }
  { // Node ID: 937 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id937in_sel = id2007out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id937in_option0 = id934out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id937in_option1 = id2425out_output[getCycle()%8];

    HWOffsetFix<64,0,UNSIGNED> id937x_1;

    switch((id937in_sel.getValueAsLong())) {
      case 0l:
        id937x_1 = id937in_option0;
        break;
      case 1l:
        id937x_1 = id937in_option1;
        break;
      default:
        id937x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id937out_result[(getCycle()+1)%2] = (id937x_1);
  }
  HWOffsetFix<11,0,UNSIGNED> id1358out_o;

  { // Node ID: 1358 (NodeCast)
    const HWOffsetFix<64,0,UNSIGNED> &id1358in_i = id937out_result[getCycle()%2];

    id1358out_o = (cast_fixed2fixed<11,0,UNSIGNED,TRUNCATE>(id1358in_i));
  }
  { // Node ID: 2735 (NodeConstantRawBits)
  }
  HWOffsetFix<1,0,UNSIGNED> id2015out_result;

  { // Node ID: 2015 (NodeEqInlined)
    const HWOffsetFix<32,0,TWOSCOMPLEMENT> &id2015in_a = id12out_compute;
    const HWOffsetFix<32,0,TWOSCOMPLEMENT> &id2015in_b = id2735out_value;

    id2015out_result = (eq_fixed(id2015in_a,id2015in_b));
  }
  { // Node ID: 2734 (NodeConstantRawBits)
  }
  { // Node ID: 2016 (NodeEqInlined)
    const HWOffsetFix<64,0,UNSIGNED> &id2016in_a = id1105out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id2016in_b = id2734out_value;

    id2016out_result[(getCycle()+1)%2] = (eq_fixed(id2016in_a,id2016in_b));
  }
  { // Node ID: 2733 (NodeConstantRawBits)
  }
  { // Node ID: 2017 (NodeEqInlined)
    const HWOffsetFix<64,0,UNSIGNED> &id2017in_a = id1102out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id2017in_b = id2733out_value;

    id2017out_result[(getCycle()+1)%2] = (eq_fixed(id2017in_a,id2017in_b));
  }
  { // Node ID: 2732 (NodeConstantRawBits)
  }
  { // Node ID: 2018 (NodeEqInlined)
    const HWOffsetFix<64,0,UNSIGNED> &id2018in_a = id1099out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id2018in_b = id2732out_value;

    id2018out_result[(getCycle()+1)%2] = (eq_fixed(id2018in_a,id2018in_b));
  }
  { // Node ID: 2731 (NodeConstantRawBits)
  }
  { // Node ID: 2019 (NodeEqInlined)
    const HWOffsetFix<64,0,UNSIGNED> &id2019in_a = id1096out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id2019in_b = id2731out_value;

    id2019out_result[(getCycle()+1)%2] = (eq_fixed(id2019in_a,id2019in_b));
  }
  { // Node ID: 2730 (NodeConstantRawBits)
  }
  { // Node ID: 2020 (NodeEqInlined)
    const HWOffsetFix<64,0,UNSIGNED> &id2020in_a = id1093out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id2020in_b = id2730out_value;

    id2020out_result[(getCycle()+1)%2] = (eq_fixed(id2020in_a,id2020in_b));
  }
  { // Node ID: 2729 (NodeConstantRawBits)
  }
  { // Node ID: 2021 (NodeEqInlined)
    const HWOffsetFix<64,0,UNSIGNED> &id2021in_a = id1090out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id2021in_b = id2729out_value;

    id2021out_result[(getCycle()+1)%2] = (eq_fixed(id2021in_a,id2021in_b));
  }
  { // Node ID: 2728 (NodeConstantRawBits)
  }
  { // Node ID: 2022 (NodeEqInlined)
    const HWOffsetFix<64,0,UNSIGNED> &id2022in_a = id1087out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id2022in_b = id2728out_value;

    id2022out_result[(getCycle()+1)%2] = (eq_fixed(id2022in_a,id2022in_b));
  }
  HWOffsetFix<64,2,UNSIGNED> id2003out_output;

  { // Node ID: 2003 (NodeReinterpret)
    const HWOffsetFix<64,0,UNSIGNED> &id2003in_input = id717out_o;

    id2003out_output = (cast_bits2fixed<64,2,UNSIGNED>((cast_fixed2bits(id2003in_input))));
  }
  HWOffsetFix<64,0,UNSIGNED> id2004out_o;

  { // Node ID: 2004 (NodeCast)
    const HWOffsetFix<64,2,UNSIGNED> &id2004in_i = id2003out_output;

    id2004out_o = (cast_fixed2fixed<64,0,UNSIGNED,TRUNCATE>(id2004in_i));
  }
  { // Node ID: 1084 (NodeAdd)
    const HWOffsetFix<64,0,UNSIGNED> &id1084in_a = id2004out_o;
    const HWOffsetFix<64,0,UNSIGNED> &id1084in_b = id795out_o;

    id1084out_result[(getCycle()+1)%2] = (add_fixed<64,0,UNSIGNED,TRUNCATE>(id1084in_a,id1084in_b));
  }
  { // Node ID: 2727 (NodeConstantRawBits)
  }
  { // Node ID: 2023 (NodeEqInlined)
    const HWOffsetFix<64,0,UNSIGNED> &id2023in_a = id1084out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id2023in_b = id2727out_value;

    id2023out_result[(getCycle()+1)%2] = (eq_fixed(id2023in_a,id2023in_b));
  }
  { // Node ID: 1132 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1132in_sel = id2023out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1132in_option0 = id19out_data;
    const HWOffsetFix<64,0,UNSIGNED> &id1132in_option1 = id16out_data;

    HWOffsetFix<64,0,UNSIGNED> id1132x_1;

    switch((id1132in_sel.getValueAsLong())) {
      case 0l:
        id1132x_1 = id1132in_option0;
        break;
      case 1l:
        id1132x_1 = id1132in_option1;
        break;
      default:
        id1132x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1132out_result[(getCycle()+1)%2] = (id1132x_1);
  }
  { // Node ID: 1135 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1135in_sel = id2022out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1135in_option0 = id1132out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1135in_option1 = id2427out_output[getCycle()%2];

    HWOffsetFix<64,0,UNSIGNED> id1135x_1;

    switch((id1135in_sel.getValueAsLong())) {
      case 0l:
        id1135x_1 = id1135in_option0;
        break;
      case 1l:
        id1135x_1 = id1135in_option1;
        break;
      default:
        id1135x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1135out_result[(getCycle()+1)%2] = (id1135x_1);
  }
  { // Node ID: 1138 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1138in_sel = id2021out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1138in_option0 = id1135out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1138in_option1 = id2428out_output[getCycle()%3];

    HWOffsetFix<64,0,UNSIGNED> id1138x_1;

    switch((id1138in_sel.getValueAsLong())) {
      case 0l:
        id1138x_1 = id1138in_option0;
        break;
      case 1l:
        id1138x_1 = id1138in_option1;
        break;
      default:
        id1138x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1138out_result[(getCycle()+1)%2] = (id1138x_1);
  }
  { // Node ID: 1141 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1141in_sel = id2020out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1141in_option0 = id1138out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1141in_option1 = id2429out_output[getCycle()%4];

    HWOffsetFix<64,0,UNSIGNED> id1141x_1;

    switch((id1141in_sel.getValueAsLong())) {
      case 0l:
        id1141x_1 = id1141in_option0;
        break;
      case 1l:
        id1141x_1 = id1141in_option1;
        break;
      default:
        id1141x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1141out_result[(getCycle()+1)%2] = (id1141x_1);
  }
  { // Node ID: 1144 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1144in_sel = id2019out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1144in_option0 = id1141out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1144in_option1 = id2430out_output[getCycle()%5];

    HWOffsetFix<64,0,UNSIGNED> id1144x_1;

    switch((id1144in_sel.getValueAsLong())) {
      case 0l:
        id1144x_1 = id1144in_option0;
        break;
      case 1l:
        id1144x_1 = id1144in_option1;
        break;
      default:
        id1144x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1144out_result[(getCycle()+1)%2] = (id1144x_1);
  }
  { // Node ID: 1147 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1147in_sel = id2018out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1147in_option0 = id1144out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1147in_option1 = id2431out_output[getCycle()%6];

    HWOffsetFix<64,0,UNSIGNED> id1147x_1;

    switch((id1147in_sel.getValueAsLong())) {
      case 0l:
        id1147x_1 = id1147in_option0;
        break;
      case 1l:
        id1147x_1 = id1147in_option1;
        break;
      default:
        id1147x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1147out_result[(getCycle()+1)%2] = (id1147x_1);
  }
  { // Node ID: 1150 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1150in_sel = id2017out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1150in_option0 = id1147out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1150in_option1 = id2432out_output[getCycle()%7];

    HWOffsetFix<64,0,UNSIGNED> id1150x_1;

    switch((id1150in_sel.getValueAsLong())) {
      case 0l:
        id1150x_1 = id1150in_option0;
        break;
      case 1l:
        id1150x_1 = id1150in_option1;
        break;
      default:
        id1150x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1150out_result[(getCycle()+1)%2] = (id1150x_1);
  }
  { // Node ID: 1153 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1153in_sel = id2016out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1153in_option0 = id1150out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1153in_option1 = id2433out_output[getCycle()%8];

    HWOffsetFix<64,0,UNSIGNED> id1153x_1;

    switch((id1153in_sel.getValueAsLong())) {
      case 0l:
        id1153x_1 = id1153in_option0;
        break;
      case 1l:
        id1153x_1 = id1153in_option1;
        break;
      default:
        id1153x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1153out_result[(getCycle()+1)%2] = (id1153x_1);
  }
  { // Node ID: 2726 (NodeConstantRawBits)
  }
  HWOffsetFix<64,0,UNSIGNED> id1316out_result;

  { // Node ID: 1316 (NodeAdd)
    const HWOffsetFix<64,0,UNSIGNED> &id1316in_a = id1153out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1316in_b = id2726out_value;

    id1316out_result = (add_fixed<64,0,UNSIGNED,TRUNCATE>(id1316in_a,id1316in_b));
  }
  HWOffsetFix<64,0,UNSIGNED> id1317out_result;

  { // Node ID: 1317 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1317in_sel = id2015out_result;
    const HWOffsetFix<64,0,UNSIGNED> &id1317in_option0 = id1153out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1317in_option1 = id1316out_result;

    HWOffsetFix<64,0,UNSIGNED> id1317x_1;

    switch((id1317in_sel.getValueAsLong())) {
      case 0l:
        id1317x_1 = id1317in_option0;
        break;
      case 1l:
        id1317x_1 = id1317in_option1;
        break;
      default:
        id1317x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1317out_result = (id1317x_1);
  }
  HWRawBits<64> id2024out_dataout;

  { // Node ID: 2024 (NodeShift)
    const HWOffsetFix<64,0,UNSIGNED> &id2024in_datain = id11out_data;

    id2024out_dataout = (shift_right_fixed(id2024in_datain,(1l)));
  }
  HWOffsetFix<64,0,UNSIGNED> id1356out_output;

  { // Node ID: 1356 (NodeReinterpret)
    const HWRawBits<64> &id1356in_input = id2024out_dataout;

    id1356out_output = (cast_bits2fixed<64,0,UNSIGNED>(id1356in_input));
  }
  HWOffsetFix<1,0,UNSIGNED> id1357out_o;

  { // Node ID: 1357 (NodeCast)
    const HWOffsetFix<64,0,UNSIGNED> &id1357in_i = id1356out_output;

    id1357out_o = (cast_fixed2fixed<1,0,UNSIGNED,TRUNCATE>(id1357in_i));
  }
  HWOffsetFix<11,0,UNSIGNED> id1359out_o;

  { // Node ID: 1359 (NodeCast)
    const HWOffsetFix<64,0,UNSIGNED> &id1359in_i = id937out_result[getCycle()%2];

    id1359out_o = (cast_fixed2fixed<11,0,UNSIGNED,TRUNCATE>(id1359in_i));
  }
  if ( (getFillLevel() >= (28l)))
  { // Node ID: 1781 (NodeRAM)
    const bool id1781_inputvalid = !(isFlushingActive() && getFlushLevel() >= (28l));
    const HWOffsetFix<11,0,UNSIGNED> &id1781in_addrA = id1358out_o;
    const HWOffsetFix<64,0,UNSIGNED> &id1781in_dina = id1317out_result;
    const HWOffsetFix<1,0,UNSIGNED> &id1781in_wea = id1357out_o;
    const HWOffsetFix<11,0,UNSIGNED> &id1781in_addrB = id1359out_o;

    long id1781x_1;
    long id1781x_2;
    HWOffsetFix<64,0,UNSIGNED> id1781x_3;

    (id1781x_1) = (id1781in_addrA.getValueAsLong());
    (id1781x_2) = (id1781in_addrB.getValueAsLong());
    switch(((long)((id1781x_2)<(1250l)))) {
      case 0l:
        id1781x_3 = (c_hw_fix_64_0_uns_undef);
        break;
      case 1l:
        id1781x_3 = (id1781sta_ram_store[(id1781x_2)]);
        break;
      default:
        id1781x_3 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1781out_doutb[(getCycle()+2)%3] = (id1781x_3);
    if(((id1781in_wea.getValueAsBool())&id1781_inputvalid)) {
      if(((id1781x_1)<(1250l))) {
        (id1781sta_ram_store[(id1781x_1)]) = id1781in_dina;
      }
      else {
        throw std::runtime_error((format_string_prf_v2_Kernel_2("Run-time exception during simulation: Out of bounds write to NodeRAM (ID: 1781) on port A, ram depth is 1250.")));
      }
    }
  }
  HWOffsetFix<64,0,UNSIGNED> id1424out_result;

  { // Node ID: 1424 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1424in_sel = id2448out_output[getCycle()%13];
    const HWOffsetFix<64,0,UNSIGNED> &id1424in_option0 = id1780out_doutb[getCycle()%3];
    const HWOffsetFix<64,0,UNSIGNED> &id1424in_option1 = id1781out_doutb[getCycle()%3];

    HWOffsetFix<64,0,UNSIGNED> id1424x_1;

    switch((id1424in_sel.getValueAsLong())) {
      case 0l:
        id1424x_1 = id1424in_option0;
        break;
      case 1l:
        id1424x_1 = id1424in_option1;
        break;
      default:
        id1424x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1424out_result = (id1424x_1);
  }
  HWRawBits<64> id2210out_output;

  { // Node ID: 2210 (NodeReinterpret)
    const HWOffsetFix<64,0,UNSIGNED> &id2210in_input = id1398out_result;

    id2210out_output = (cast_fixed2bits(id2210in_input));
  }
  HWOffsetFix<64,0,UNSIGNED> id1427out_output;

  { // Node ID: 1427 (NodeReinterpret)
    const HWRawBits<64> &id1427in_input = id2210out_output;

    id1427out_output = (cast_bits2fixed<64,0,UNSIGNED>(id1427in_input));
  }
  HWOffsetFix<1,0,UNSIGNED> id1428out_o;

  { // Node ID: 1428 (NodeCast)
    const HWOffsetFix<64,0,UNSIGNED> &id1428in_i = id1427out_output;

    id1428out_o = (cast_fixed2fixed<1,0,UNSIGNED,TRUNCATE>(id1428in_i));
  }
  { // Node ID: 2477 (NodeFIFO)
    const HWOffsetFix<1,0,UNSIGNED> &id2477in_input = id1428out_o;

    id2477out_output[(getCycle()+12)%13] = id2477in_input;
  }
  { // Node ID: 2725 (NodeConstantRawBits)
  }
  { // Node ID: 2026 (NodeEqInlined)
    const HWOffsetFix<64,0,UNSIGNED> &id2026in_a = id889out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id2026in_b = id2725out_value;

    id2026out_result[(getCycle()+1)%2] = (eq_fixed(id2026in_a,id2026in_b));
  }
  { // Node ID: 2724 (NodeConstantRawBits)
  }
  { // Node ID: 2027 (NodeEqInlined)
    const HWOffsetFix<64,0,UNSIGNED> &id2027in_a = id886out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id2027in_b = id2724out_value;

    id2027out_result[(getCycle()+1)%2] = (eq_fixed(id2027in_a,id2027in_b));
  }
  { // Node ID: 2723 (NodeConstantRawBits)
  }
  { // Node ID: 2028 (NodeEqInlined)
    const HWOffsetFix<64,0,UNSIGNED> &id2028in_a = id883out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id2028in_b = id2723out_value;

    id2028out_result[(getCycle()+1)%2] = (eq_fixed(id2028in_a,id2028in_b));
  }
  { // Node ID: 2722 (NodeConstantRawBits)
  }
  { // Node ID: 2029 (NodeEqInlined)
    const HWOffsetFix<64,0,UNSIGNED> &id2029in_a = id880out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id2029in_b = id2722out_value;

    id2029out_result[(getCycle()+1)%2] = (eq_fixed(id2029in_a,id2029in_b));
  }
  { // Node ID: 2721 (NodeConstantRawBits)
  }
  { // Node ID: 2030 (NodeEqInlined)
    const HWOffsetFix<64,0,UNSIGNED> &id2030in_a = id877out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id2030in_b = id2721out_value;

    id2030out_result[(getCycle()+1)%2] = (eq_fixed(id2030in_a,id2030in_b));
  }
  { // Node ID: 2720 (NodeConstantRawBits)
  }
  { // Node ID: 2031 (NodeEqInlined)
    const HWOffsetFix<64,0,UNSIGNED> &id2031in_a = id874out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id2031in_b = id2720out_value;

    id2031out_result[(getCycle()+1)%2] = (eq_fixed(id2031in_a,id2031in_b));
  }
  { // Node ID: 2719 (NodeConstantRawBits)
  }
  { // Node ID: 2032 (NodeEqInlined)
    const HWOffsetFix<64,0,UNSIGNED> &id2032in_a = id871out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id2032in_b = id2719out_value;

    id2032out_result[(getCycle()+1)%2] = (eq_fixed(id2032in_a,id2032in_b));
  }
  { // Node ID: 2718 (NodeConstantRawBits)
  }
  { // Node ID: 2033 (NodeEqInlined)
    const HWOffsetFix<64,0,UNSIGNED> &id2033in_a = id868out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id2033in_b = id2718out_value;

    id2033out_result[(getCycle()+1)%2] = (eq_fixed(id2033in_a,id2033in_b));
  }
  { // Node ID: 940 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id940in_sel = id2033out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id940in_option0 = id638out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id940in_option1 = id624out_result[getCycle()%2];

    HWOffsetFix<64,0,UNSIGNED> id940x_1;

    switch((id940in_sel.getValueAsLong())) {
      case 0l:
        id940x_1 = id940in_option0;
        break;
      case 1l:
        id940x_1 = id940in_option1;
        break;
      default:
        id940x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id940out_result[(getCycle()+1)%2] = (id940x_1);
  }
  { // Node ID: 943 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id943in_sel = id2032out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id943in_option0 = id940out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id943in_option1 = id2407out_output[getCycle()%2];

    HWOffsetFix<64,0,UNSIGNED> id943x_1;

    switch((id943in_sel.getValueAsLong())) {
      case 0l:
        id943x_1 = id943in_option0;
        break;
      case 1l:
        id943x_1 = id943in_option1;
        break;
      default:
        id943x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id943out_result[(getCycle()+1)%2] = (id943x_1);
  }
  { // Node ID: 946 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id946in_sel = id2031out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id946in_option0 = id943out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id946in_option1 = id2410out_output[getCycle()%3];

    HWOffsetFix<64,0,UNSIGNED> id946x_1;

    switch((id946in_sel.getValueAsLong())) {
      case 0l:
        id946x_1 = id946in_option0;
        break;
      case 1l:
        id946x_1 = id946in_option1;
        break;
      default:
        id946x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id946out_result[(getCycle()+1)%2] = (id946x_1);
  }
  { // Node ID: 949 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id949in_sel = id2030out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id949in_option0 = id946out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id949in_option1 = id2413out_output[getCycle()%4];

    HWOffsetFix<64,0,UNSIGNED> id949x_1;

    switch((id949in_sel.getValueAsLong())) {
      case 0l:
        id949x_1 = id949in_option0;
        break;
      case 1l:
        id949x_1 = id949in_option1;
        break;
      default:
        id949x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id949out_result[(getCycle()+1)%2] = (id949x_1);
  }
  { // Node ID: 952 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id952in_sel = id2029out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id952in_option0 = id949out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id952in_option1 = id2416out_output[getCycle()%5];

    HWOffsetFix<64,0,UNSIGNED> id952x_1;

    switch((id952in_sel.getValueAsLong())) {
      case 0l:
        id952x_1 = id952in_option0;
        break;
      case 1l:
        id952x_1 = id952in_option1;
        break;
      default:
        id952x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id952out_result[(getCycle()+1)%2] = (id952x_1);
  }
  { // Node ID: 955 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id955in_sel = id2028out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id955in_option0 = id952out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id955in_option1 = id2419out_output[getCycle()%6];

    HWOffsetFix<64,0,UNSIGNED> id955x_1;

    switch((id955in_sel.getValueAsLong())) {
      case 0l:
        id955x_1 = id955in_option0;
        break;
      case 1l:
        id955x_1 = id955in_option1;
        break;
      default:
        id955x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id955out_result[(getCycle()+1)%2] = (id955x_1);
  }
  { // Node ID: 958 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id958in_sel = id2027out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id958in_option0 = id955out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id958in_option1 = id2422out_output[getCycle()%7];

    HWOffsetFix<64,0,UNSIGNED> id958x_1;

    switch((id958in_sel.getValueAsLong())) {
      case 0l:
        id958x_1 = id958in_option0;
        break;
      case 1l:
        id958x_1 = id958in_option1;
        break;
      default:
        id958x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id958out_result[(getCycle()+1)%2] = (id958x_1);
  }
  { // Node ID: 961 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id961in_sel = id2026out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id961in_option0 = id958out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id961in_option1 = id2425out_output[getCycle()%8];

    HWOffsetFix<64,0,UNSIGNED> id961x_1;

    switch((id961in_sel.getValueAsLong())) {
      case 0l:
        id961x_1 = id961in_option0;
        break;
      case 1l:
        id961x_1 = id961in_option1;
        break;
      default:
        id961x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id961out_result[(getCycle()+1)%2] = (id961x_1);
  }
  HWOffsetFix<11,0,UNSIGNED> id1364out_o;

  { // Node ID: 1364 (NodeCast)
    const HWOffsetFix<64,0,UNSIGNED> &id1364in_i = id961out_result[getCycle()%2];

    id1364out_o = (cast_fixed2fixed<11,0,UNSIGNED,TRUNCATE>(id1364in_i));
  }
  { // Node ID: 2717 (NodeConstantRawBits)
  }
  HWOffsetFix<1,0,UNSIGNED> id2034out_result;

  { // Node ID: 2034 (NodeEqInlined)
    const HWOffsetFix<32,0,TWOSCOMPLEMENT> &id2034in_a = id12out_compute;
    const HWOffsetFix<32,0,TWOSCOMPLEMENT> &id2034in_b = id2717out_value;

    id2034out_result = (eq_fixed(id2034in_a,id2034in_b));
  }
  { // Node ID: 2716 (NodeConstantRawBits)
  }
  { // Node ID: 2035 (NodeEqInlined)
    const HWOffsetFix<64,0,UNSIGNED> &id2035in_a = id1105out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id2035in_b = id2716out_value;

    id2035out_result[(getCycle()+1)%2] = (eq_fixed(id2035in_a,id2035in_b));
  }
  { // Node ID: 2715 (NodeConstantRawBits)
  }
  { // Node ID: 2036 (NodeEqInlined)
    const HWOffsetFix<64,0,UNSIGNED> &id2036in_a = id1102out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id2036in_b = id2715out_value;

    id2036out_result[(getCycle()+1)%2] = (eq_fixed(id2036in_a,id2036in_b));
  }
  { // Node ID: 2714 (NodeConstantRawBits)
  }
  { // Node ID: 2037 (NodeEqInlined)
    const HWOffsetFix<64,0,UNSIGNED> &id2037in_a = id1099out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id2037in_b = id2714out_value;

    id2037out_result[(getCycle()+1)%2] = (eq_fixed(id2037in_a,id2037in_b));
  }
  { // Node ID: 2713 (NodeConstantRawBits)
  }
  { // Node ID: 2038 (NodeEqInlined)
    const HWOffsetFix<64,0,UNSIGNED> &id2038in_a = id1096out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id2038in_b = id2713out_value;

    id2038out_result[(getCycle()+1)%2] = (eq_fixed(id2038in_a,id2038in_b));
  }
  { // Node ID: 2712 (NodeConstantRawBits)
  }
  { // Node ID: 2039 (NodeEqInlined)
    const HWOffsetFix<64,0,UNSIGNED> &id2039in_a = id1093out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id2039in_b = id2712out_value;

    id2039out_result[(getCycle()+1)%2] = (eq_fixed(id2039in_a,id2039in_b));
  }
  { // Node ID: 2711 (NodeConstantRawBits)
  }
  { // Node ID: 2040 (NodeEqInlined)
    const HWOffsetFix<64,0,UNSIGNED> &id2040in_a = id1090out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id2040in_b = id2711out_value;

    id2040out_result[(getCycle()+1)%2] = (eq_fixed(id2040in_a,id2040in_b));
  }
  { // Node ID: 2710 (NodeConstantRawBits)
  }
  { // Node ID: 2041 (NodeEqInlined)
    const HWOffsetFix<64,0,UNSIGNED> &id2041in_a = id1087out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id2041in_b = id2710out_value;

    id2041out_result[(getCycle()+1)%2] = (eq_fixed(id2041in_a,id2041in_b));
  }
  { // Node ID: 2709 (NodeConstantRawBits)
  }
  { // Node ID: 2042 (NodeEqInlined)
    const HWOffsetFix<64,0,UNSIGNED> &id2042in_a = id1084out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id2042in_b = id2709out_value;

    id2042out_result[(getCycle()+1)%2] = (eq_fixed(id2042in_a,id2042in_b));
  }
  { // Node ID: 1156 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1156in_sel = id2042out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1156in_option0 = id22out_data;
    const HWOffsetFix<64,0,UNSIGNED> &id1156in_option1 = id16out_data;

    HWOffsetFix<64,0,UNSIGNED> id1156x_1;

    switch((id1156in_sel.getValueAsLong())) {
      case 0l:
        id1156x_1 = id1156in_option0;
        break;
      case 1l:
        id1156x_1 = id1156in_option1;
        break;
      default:
        id1156x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1156out_result[(getCycle()+1)%2] = (id1156x_1);
  }
  { // Node ID: 1159 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1159in_sel = id2041out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1159in_option0 = id1156out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1159in_option1 = id2427out_output[getCycle()%2];

    HWOffsetFix<64,0,UNSIGNED> id1159x_1;

    switch((id1159in_sel.getValueAsLong())) {
      case 0l:
        id1159x_1 = id1159in_option0;
        break;
      case 1l:
        id1159x_1 = id1159in_option1;
        break;
      default:
        id1159x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1159out_result[(getCycle()+1)%2] = (id1159x_1);
  }
  { // Node ID: 1162 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1162in_sel = id2040out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1162in_option0 = id1159out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1162in_option1 = id2428out_output[getCycle()%3];

    HWOffsetFix<64,0,UNSIGNED> id1162x_1;

    switch((id1162in_sel.getValueAsLong())) {
      case 0l:
        id1162x_1 = id1162in_option0;
        break;
      case 1l:
        id1162x_1 = id1162in_option1;
        break;
      default:
        id1162x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1162out_result[(getCycle()+1)%2] = (id1162x_1);
  }
  { // Node ID: 1165 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1165in_sel = id2039out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1165in_option0 = id1162out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1165in_option1 = id2429out_output[getCycle()%4];

    HWOffsetFix<64,0,UNSIGNED> id1165x_1;

    switch((id1165in_sel.getValueAsLong())) {
      case 0l:
        id1165x_1 = id1165in_option0;
        break;
      case 1l:
        id1165x_1 = id1165in_option1;
        break;
      default:
        id1165x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1165out_result[(getCycle()+1)%2] = (id1165x_1);
  }
  { // Node ID: 1168 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1168in_sel = id2038out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1168in_option0 = id1165out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1168in_option1 = id2430out_output[getCycle()%5];

    HWOffsetFix<64,0,UNSIGNED> id1168x_1;

    switch((id1168in_sel.getValueAsLong())) {
      case 0l:
        id1168x_1 = id1168in_option0;
        break;
      case 1l:
        id1168x_1 = id1168in_option1;
        break;
      default:
        id1168x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1168out_result[(getCycle()+1)%2] = (id1168x_1);
  }
  { // Node ID: 1171 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1171in_sel = id2037out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1171in_option0 = id1168out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1171in_option1 = id2431out_output[getCycle()%6];

    HWOffsetFix<64,0,UNSIGNED> id1171x_1;

    switch((id1171in_sel.getValueAsLong())) {
      case 0l:
        id1171x_1 = id1171in_option0;
        break;
      case 1l:
        id1171x_1 = id1171in_option1;
        break;
      default:
        id1171x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1171out_result[(getCycle()+1)%2] = (id1171x_1);
  }
  { // Node ID: 1174 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1174in_sel = id2036out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1174in_option0 = id1171out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1174in_option1 = id2432out_output[getCycle()%7];

    HWOffsetFix<64,0,UNSIGNED> id1174x_1;

    switch((id1174in_sel.getValueAsLong())) {
      case 0l:
        id1174x_1 = id1174in_option0;
        break;
      case 1l:
        id1174x_1 = id1174in_option1;
        break;
      default:
        id1174x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1174out_result[(getCycle()+1)%2] = (id1174x_1);
  }
  { // Node ID: 1177 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1177in_sel = id2035out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1177in_option0 = id1174out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1177in_option1 = id2433out_output[getCycle()%8];

    HWOffsetFix<64,0,UNSIGNED> id1177x_1;

    switch((id1177in_sel.getValueAsLong())) {
      case 0l:
        id1177x_1 = id1177in_option0;
        break;
      case 1l:
        id1177x_1 = id1177in_option1;
        break;
      default:
        id1177x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1177out_result[(getCycle()+1)%2] = (id1177x_1);
  }
  { // Node ID: 2708 (NodeConstantRawBits)
  }
  HWOffsetFix<64,0,UNSIGNED> id1321out_result;

  { // Node ID: 1321 (NodeAdd)
    const HWOffsetFix<64,0,UNSIGNED> &id1321in_a = id1177out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1321in_b = id2708out_value;

    id1321out_result = (add_fixed<64,0,UNSIGNED,TRUNCATE>(id1321in_a,id1321in_b));
  }
  HWOffsetFix<64,0,UNSIGNED> id1322out_result;

  { // Node ID: 1322 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1322in_sel = id2034out_result;
    const HWOffsetFix<64,0,UNSIGNED> &id1322in_option0 = id1177out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1322in_option1 = id1321out_result;

    HWOffsetFix<64,0,UNSIGNED> id1322x_1;

    switch((id1322in_sel.getValueAsLong())) {
      case 0l:
        id1322x_1 = id1322in_option0;
        break;
      case 1l:
        id1322x_1 = id1322in_option1;
        break;
      default:
        id1322x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1322out_result = (id1322x_1);
  }
  HWRawBits<64> id2043out_dataout;

  { // Node ID: 2043 (NodeShift)
    const HWOffsetFix<64,0,UNSIGNED> &id2043in_datain = id11out_data;

    id2043out_dataout = (shift_right_fixed(id2043in_datain,(2l)));
  }
  HWOffsetFix<64,0,UNSIGNED> id1362out_output;

  { // Node ID: 1362 (NodeReinterpret)
    const HWRawBits<64> &id1362in_input = id2043out_dataout;

    id1362out_output = (cast_bits2fixed<64,0,UNSIGNED>(id1362in_input));
  }
  HWOffsetFix<1,0,UNSIGNED> id1363out_o;

  { // Node ID: 1363 (NodeCast)
    const HWOffsetFix<64,0,UNSIGNED> &id1363in_i = id1362out_output;

    id1363out_o = (cast_fixed2fixed<1,0,UNSIGNED,TRUNCATE>(id1363in_i));
  }
  HWOffsetFix<11,0,UNSIGNED> id1365out_o;

  { // Node ID: 1365 (NodeCast)
    const HWOffsetFix<64,0,UNSIGNED> &id1365in_i = id961out_result[getCycle()%2];

    id1365out_o = (cast_fixed2fixed<11,0,UNSIGNED,TRUNCATE>(id1365in_i));
  }
  if ( (getFillLevel() >= (28l)))
  { // Node ID: 1782 (NodeRAM)
    const bool id1782_inputvalid = !(isFlushingActive() && getFlushLevel() >= (28l));
    const HWOffsetFix<11,0,UNSIGNED> &id1782in_addrA = id1364out_o;
    const HWOffsetFix<64,0,UNSIGNED> &id1782in_dina = id1322out_result;
    const HWOffsetFix<1,0,UNSIGNED> &id1782in_wea = id1363out_o;
    const HWOffsetFix<11,0,UNSIGNED> &id1782in_addrB = id1365out_o;

    long id1782x_1;
    long id1782x_2;
    HWOffsetFix<64,0,UNSIGNED> id1782x_3;

    (id1782x_1) = (id1782in_addrA.getValueAsLong());
    (id1782x_2) = (id1782in_addrB.getValueAsLong());
    switch(((long)((id1782x_2)<(1250l)))) {
      case 0l:
        id1782x_3 = (c_hw_fix_64_0_uns_undef);
        break;
      case 1l:
        id1782x_3 = (id1782sta_ram_store[(id1782x_2)]);
        break;
      default:
        id1782x_3 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1782out_doutb[(getCycle()+2)%3] = (id1782x_3);
    if(((id1782in_wea.getValueAsBool())&id1782_inputvalid)) {
      if(((id1782x_1)<(1250l))) {
        (id1782sta_ram_store[(id1782x_1)]) = id1782in_dina;
      }
      else {
        throw std::runtime_error((format_string_prf_v2_Kernel_3("Run-time exception during simulation: Out of bounds write to NodeRAM (ID: 1782) on port A, ram depth is 1250.")));
      }
    }
  }
  { // Node ID: 2707 (NodeConstantRawBits)
  }
  { // Node ID: 2044 (NodeEqInlined)
    const HWOffsetFix<64,0,UNSIGNED> &id2044in_a = id889out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id2044in_b = id2707out_value;

    id2044out_result[(getCycle()+1)%2] = (eq_fixed(id2044in_a,id2044in_b));
  }
  { // Node ID: 2706 (NodeConstantRawBits)
  }
  { // Node ID: 2045 (NodeEqInlined)
    const HWOffsetFix<64,0,UNSIGNED> &id2045in_a = id886out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id2045in_b = id2706out_value;

    id2045out_result[(getCycle()+1)%2] = (eq_fixed(id2045in_a,id2045in_b));
  }
  { // Node ID: 2705 (NodeConstantRawBits)
  }
  { // Node ID: 2046 (NodeEqInlined)
    const HWOffsetFix<64,0,UNSIGNED> &id2046in_a = id883out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id2046in_b = id2705out_value;

    id2046out_result[(getCycle()+1)%2] = (eq_fixed(id2046in_a,id2046in_b));
  }
  { // Node ID: 2704 (NodeConstantRawBits)
  }
  { // Node ID: 2047 (NodeEqInlined)
    const HWOffsetFix<64,0,UNSIGNED> &id2047in_a = id880out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id2047in_b = id2704out_value;

    id2047out_result[(getCycle()+1)%2] = (eq_fixed(id2047in_a,id2047in_b));
  }
  { // Node ID: 2703 (NodeConstantRawBits)
  }
  { // Node ID: 2048 (NodeEqInlined)
    const HWOffsetFix<64,0,UNSIGNED> &id2048in_a = id877out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id2048in_b = id2703out_value;

    id2048out_result[(getCycle()+1)%2] = (eq_fixed(id2048in_a,id2048in_b));
  }
  { // Node ID: 2702 (NodeConstantRawBits)
  }
  { // Node ID: 2049 (NodeEqInlined)
    const HWOffsetFix<64,0,UNSIGNED> &id2049in_a = id874out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id2049in_b = id2702out_value;

    id2049out_result[(getCycle()+1)%2] = (eq_fixed(id2049in_a,id2049in_b));
  }
  { // Node ID: 2701 (NodeConstantRawBits)
  }
  { // Node ID: 2050 (NodeEqInlined)
    const HWOffsetFix<64,0,UNSIGNED> &id2050in_a = id871out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id2050in_b = id2701out_value;

    id2050out_result[(getCycle()+1)%2] = (eq_fixed(id2050in_a,id2050in_b));
  }
  { // Node ID: 2700 (NodeConstantRawBits)
  }
  { // Node ID: 2051 (NodeEqInlined)
    const HWOffsetFix<64,0,UNSIGNED> &id2051in_a = id868out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id2051in_b = id2700out_value;

    id2051out_result[(getCycle()+1)%2] = (eq_fixed(id2051in_a,id2051in_b));
  }
  { // Node ID: 964 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id964in_sel = id2051out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id964in_option0 = id645out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id964in_option1 = id624out_result[getCycle()%2];

    HWOffsetFix<64,0,UNSIGNED> id964x_1;

    switch((id964in_sel.getValueAsLong())) {
      case 0l:
        id964x_1 = id964in_option0;
        break;
      case 1l:
        id964x_1 = id964in_option1;
        break;
      default:
        id964x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id964out_result[(getCycle()+1)%2] = (id964x_1);
  }
  { // Node ID: 967 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id967in_sel = id2050out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id967in_option0 = id964out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id967in_option1 = id2407out_output[getCycle()%2];

    HWOffsetFix<64,0,UNSIGNED> id967x_1;

    switch((id967in_sel.getValueAsLong())) {
      case 0l:
        id967x_1 = id967in_option0;
        break;
      case 1l:
        id967x_1 = id967in_option1;
        break;
      default:
        id967x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id967out_result[(getCycle()+1)%2] = (id967x_1);
  }
  { // Node ID: 970 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id970in_sel = id2049out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id970in_option0 = id967out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id970in_option1 = id2410out_output[getCycle()%3];

    HWOffsetFix<64,0,UNSIGNED> id970x_1;

    switch((id970in_sel.getValueAsLong())) {
      case 0l:
        id970x_1 = id970in_option0;
        break;
      case 1l:
        id970x_1 = id970in_option1;
        break;
      default:
        id970x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id970out_result[(getCycle()+1)%2] = (id970x_1);
  }
  { // Node ID: 973 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id973in_sel = id2048out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id973in_option0 = id970out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id973in_option1 = id2413out_output[getCycle()%4];

    HWOffsetFix<64,0,UNSIGNED> id973x_1;

    switch((id973in_sel.getValueAsLong())) {
      case 0l:
        id973x_1 = id973in_option0;
        break;
      case 1l:
        id973x_1 = id973in_option1;
        break;
      default:
        id973x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id973out_result[(getCycle()+1)%2] = (id973x_1);
  }
  { // Node ID: 976 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id976in_sel = id2047out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id976in_option0 = id973out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id976in_option1 = id2416out_output[getCycle()%5];

    HWOffsetFix<64,0,UNSIGNED> id976x_1;

    switch((id976in_sel.getValueAsLong())) {
      case 0l:
        id976x_1 = id976in_option0;
        break;
      case 1l:
        id976x_1 = id976in_option1;
        break;
      default:
        id976x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id976out_result[(getCycle()+1)%2] = (id976x_1);
  }
  { // Node ID: 979 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id979in_sel = id2046out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id979in_option0 = id976out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id979in_option1 = id2419out_output[getCycle()%6];

    HWOffsetFix<64,0,UNSIGNED> id979x_1;

    switch((id979in_sel.getValueAsLong())) {
      case 0l:
        id979x_1 = id979in_option0;
        break;
      case 1l:
        id979x_1 = id979in_option1;
        break;
      default:
        id979x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id979out_result[(getCycle()+1)%2] = (id979x_1);
  }
  { // Node ID: 982 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id982in_sel = id2045out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id982in_option0 = id979out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id982in_option1 = id2422out_output[getCycle()%7];

    HWOffsetFix<64,0,UNSIGNED> id982x_1;

    switch((id982in_sel.getValueAsLong())) {
      case 0l:
        id982x_1 = id982in_option0;
        break;
      case 1l:
        id982x_1 = id982in_option1;
        break;
      default:
        id982x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id982out_result[(getCycle()+1)%2] = (id982x_1);
  }
  { // Node ID: 985 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id985in_sel = id2044out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id985in_option0 = id982out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id985in_option1 = id2425out_output[getCycle()%8];

    HWOffsetFix<64,0,UNSIGNED> id985x_1;

    switch((id985in_sel.getValueAsLong())) {
      case 0l:
        id985x_1 = id985in_option0;
        break;
      case 1l:
        id985x_1 = id985in_option1;
        break;
      default:
        id985x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id985out_result[(getCycle()+1)%2] = (id985x_1);
  }
  HWOffsetFix<11,0,UNSIGNED> id1370out_o;

  { // Node ID: 1370 (NodeCast)
    const HWOffsetFix<64,0,UNSIGNED> &id1370in_i = id985out_result[getCycle()%2];

    id1370out_o = (cast_fixed2fixed<11,0,UNSIGNED,TRUNCATE>(id1370in_i));
  }
  { // Node ID: 2699 (NodeConstantRawBits)
  }
  HWOffsetFix<1,0,UNSIGNED> id2052out_result;

  { // Node ID: 2052 (NodeEqInlined)
    const HWOffsetFix<32,0,TWOSCOMPLEMENT> &id2052in_a = id12out_compute;
    const HWOffsetFix<32,0,TWOSCOMPLEMENT> &id2052in_b = id2699out_value;

    id2052out_result = (eq_fixed(id2052in_a,id2052in_b));
  }
  { // Node ID: 2698 (NodeConstantRawBits)
  }
  { // Node ID: 2053 (NodeEqInlined)
    const HWOffsetFix<64,0,UNSIGNED> &id2053in_a = id1105out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id2053in_b = id2698out_value;

    id2053out_result[(getCycle()+1)%2] = (eq_fixed(id2053in_a,id2053in_b));
  }
  { // Node ID: 2697 (NodeConstantRawBits)
  }
  { // Node ID: 2054 (NodeEqInlined)
    const HWOffsetFix<64,0,UNSIGNED> &id2054in_a = id1102out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id2054in_b = id2697out_value;

    id2054out_result[(getCycle()+1)%2] = (eq_fixed(id2054in_a,id2054in_b));
  }
  { // Node ID: 2696 (NodeConstantRawBits)
  }
  { // Node ID: 2055 (NodeEqInlined)
    const HWOffsetFix<64,0,UNSIGNED> &id2055in_a = id1099out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id2055in_b = id2696out_value;

    id2055out_result[(getCycle()+1)%2] = (eq_fixed(id2055in_a,id2055in_b));
  }
  { // Node ID: 2695 (NodeConstantRawBits)
  }
  { // Node ID: 2056 (NodeEqInlined)
    const HWOffsetFix<64,0,UNSIGNED> &id2056in_a = id1096out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id2056in_b = id2695out_value;

    id2056out_result[(getCycle()+1)%2] = (eq_fixed(id2056in_a,id2056in_b));
  }
  { // Node ID: 2694 (NodeConstantRawBits)
  }
  { // Node ID: 2057 (NodeEqInlined)
    const HWOffsetFix<64,0,UNSIGNED> &id2057in_a = id1093out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id2057in_b = id2694out_value;

    id2057out_result[(getCycle()+1)%2] = (eq_fixed(id2057in_a,id2057in_b));
  }
  { // Node ID: 2693 (NodeConstantRawBits)
  }
  { // Node ID: 2058 (NodeEqInlined)
    const HWOffsetFix<64,0,UNSIGNED> &id2058in_a = id1090out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id2058in_b = id2693out_value;

    id2058out_result[(getCycle()+1)%2] = (eq_fixed(id2058in_a,id2058in_b));
  }
  { // Node ID: 2692 (NodeConstantRawBits)
  }
  { // Node ID: 2059 (NodeEqInlined)
    const HWOffsetFix<64,0,UNSIGNED> &id2059in_a = id1087out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id2059in_b = id2692out_value;

    id2059out_result[(getCycle()+1)%2] = (eq_fixed(id2059in_a,id2059in_b));
  }
  { // Node ID: 2691 (NodeConstantRawBits)
  }
  { // Node ID: 2060 (NodeEqInlined)
    const HWOffsetFix<64,0,UNSIGNED> &id2060in_a = id1084out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id2060in_b = id2691out_value;

    id2060out_result[(getCycle()+1)%2] = (eq_fixed(id2060in_a,id2060in_b));
  }
  { // Node ID: 1180 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1180in_sel = id2060out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1180in_option0 = id25out_data;
    const HWOffsetFix<64,0,UNSIGNED> &id1180in_option1 = id16out_data;

    HWOffsetFix<64,0,UNSIGNED> id1180x_1;

    switch((id1180in_sel.getValueAsLong())) {
      case 0l:
        id1180x_1 = id1180in_option0;
        break;
      case 1l:
        id1180x_1 = id1180in_option1;
        break;
      default:
        id1180x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1180out_result[(getCycle()+1)%2] = (id1180x_1);
  }
  { // Node ID: 1183 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1183in_sel = id2059out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1183in_option0 = id1180out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1183in_option1 = id2427out_output[getCycle()%2];

    HWOffsetFix<64,0,UNSIGNED> id1183x_1;

    switch((id1183in_sel.getValueAsLong())) {
      case 0l:
        id1183x_1 = id1183in_option0;
        break;
      case 1l:
        id1183x_1 = id1183in_option1;
        break;
      default:
        id1183x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1183out_result[(getCycle()+1)%2] = (id1183x_1);
  }
  { // Node ID: 1186 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1186in_sel = id2058out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1186in_option0 = id1183out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1186in_option1 = id2428out_output[getCycle()%3];

    HWOffsetFix<64,0,UNSIGNED> id1186x_1;

    switch((id1186in_sel.getValueAsLong())) {
      case 0l:
        id1186x_1 = id1186in_option0;
        break;
      case 1l:
        id1186x_1 = id1186in_option1;
        break;
      default:
        id1186x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1186out_result[(getCycle()+1)%2] = (id1186x_1);
  }
  { // Node ID: 1189 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1189in_sel = id2057out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1189in_option0 = id1186out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1189in_option1 = id2429out_output[getCycle()%4];

    HWOffsetFix<64,0,UNSIGNED> id1189x_1;

    switch((id1189in_sel.getValueAsLong())) {
      case 0l:
        id1189x_1 = id1189in_option0;
        break;
      case 1l:
        id1189x_1 = id1189in_option1;
        break;
      default:
        id1189x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1189out_result[(getCycle()+1)%2] = (id1189x_1);
  }
  { // Node ID: 1192 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1192in_sel = id2056out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1192in_option0 = id1189out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1192in_option1 = id2430out_output[getCycle()%5];

    HWOffsetFix<64,0,UNSIGNED> id1192x_1;

    switch((id1192in_sel.getValueAsLong())) {
      case 0l:
        id1192x_1 = id1192in_option0;
        break;
      case 1l:
        id1192x_1 = id1192in_option1;
        break;
      default:
        id1192x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1192out_result[(getCycle()+1)%2] = (id1192x_1);
  }
  { // Node ID: 1195 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1195in_sel = id2055out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1195in_option0 = id1192out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1195in_option1 = id2431out_output[getCycle()%6];

    HWOffsetFix<64,0,UNSIGNED> id1195x_1;

    switch((id1195in_sel.getValueAsLong())) {
      case 0l:
        id1195x_1 = id1195in_option0;
        break;
      case 1l:
        id1195x_1 = id1195in_option1;
        break;
      default:
        id1195x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1195out_result[(getCycle()+1)%2] = (id1195x_1);
  }
  { // Node ID: 1198 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1198in_sel = id2054out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1198in_option0 = id1195out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1198in_option1 = id2432out_output[getCycle()%7];

    HWOffsetFix<64,0,UNSIGNED> id1198x_1;

    switch((id1198in_sel.getValueAsLong())) {
      case 0l:
        id1198x_1 = id1198in_option0;
        break;
      case 1l:
        id1198x_1 = id1198in_option1;
        break;
      default:
        id1198x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1198out_result[(getCycle()+1)%2] = (id1198x_1);
  }
  { // Node ID: 1201 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1201in_sel = id2053out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1201in_option0 = id1198out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1201in_option1 = id2433out_output[getCycle()%8];

    HWOffsetFix<64,0,UNSIGNED> id1201x_1;

    switch((id1201in_sel.getValueAsLong())) {
      case 0l:
        id1201x_1 = id1201in_option0;
        break;
      case 1l:
        id1201x_1 = id1201in_option1;
        break;
      default:
        id1201x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1201out_result[(getCycle()+1)%2] = (id1201x_1);
  }
  { // Node ID: 2690 (NodeConstantRawBits)
  }
  HWOffsetFix<64,0,UNSIGNED> id1326out_result;

  { // Node ID: 1326 (NodeAdd)
    const HWOffsetFix<64,0,UNSIGNED> &id1326in_a = id1201out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1326in_b = id2690out_value;

    id1326out_result = (add_fixed<64,0,UNSIGNED,TRUNCATE>(id1326in_a,id1326in_b));
  }
  HWOffsetFix<64,0,UNSIGNED> id1327out_result;

  { // Node ID: 1327 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1327in_sel = id2052out_result;
    const HWOffsetFix<64,0,UNSIGNED> &id1327in_option0 = id1201out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1327in_option1 = id1326out_result;

    HWOffsetFix<64,0,UNSIGNED> id1327x_1;

    switch((id1327in_sel.getValueAsLong())) {
      case 0l:
        id1327x_1 = id1327in_option0;
        break;
      case 1l:
        id1327x_1 = id1327in_option1;
        break;
      default:
        id1327x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1327out_result = (id1327x_1);
  }
  HWRawBits<64> id2061out_dataout;

  { // Node ID: 2061 (NodeShift)
    const HWOffsetFix<64,0,UNSIGNED> &id2061in_datain = id11out_data;

    id2061out_dataout = (shift_right_fixed(id2061in_datain,(3l)));
  }
  HWOffsetFix<64,0,UNSIGNED> id1368out_output;

  { // Node ID: 1368 (NodeReinterpret)
    const HWRawBits<64> &id1368in_input = id2061out_dataout;

    id1368out_output = (cast_bits2fixed<64,0,UNSIGNED>(id1368in_input));
  }
  HWOffsetFix<1,0,UNSIGNED> id1369out_o;

  { // Node ID: 1369 (NodeCast)
    const HWOffsetFix<64,0,UNSIGNED> &id1369in_i = id1368out_output;

    id1369out_o = (cast_fixed2fixed<1,0,UNSIGNED,TRUNCATE>(id1369in_i));
  }
  HWOffsetFix<11,0,UNSIGNED> id1371out_o;

  { // Node ID: 1371 (NodeCast)
    const HWOffsetFix<64,0,UNSIGNED> &id1371in_i = id985out_result[getCycle()%2];

    id1371out_o = (cast_fixed2fixed<11,0,UNSIGNED,TRUNCATE>(id1371in_i));
  }
  if ( (getFillLevel() >= (28l)))
  { // Node ID: 1783 (NodeRAM)
    const bool id1783_inputvalid = !(isFlushingActive() && getFlushLevel() >= (28l));
    const HWOffsetFix<11,0,UNSIGNED> &id1783in_addrA = id1370out_o;
    const HWOffsetFix<64,0,UNSIGNED> &id1783in_dina = id1327out_result;
    const HWOffsetFix<1,0,UNSIGNED> &id1783in_wea = id1369out_o;
    const HWOffsetFix<11,0,UNSIGNED> &id1783in_addrB = id1371out_o;

    long id1783x_1;
    long id1783x_2;
    HWOffsetFix<64,0,UNSIGNED> id1783x_3;

    (id1783x_1) = (id1783in_addrA.getValueAsLong());
    (id1783x_2) = (id1783in_addrB.getValueAsLong());
    switch(((long)((id1783x_2)<(1250l)))) {
      case 0l:
        id1783x_3 = (c_hw_fix_64_0_uns_undef);
        break;
      case 1l:
        id1783x_3 = (id1783sta_ram_store[(id1783x_2)]);
        break;
      default:
        id1783x_3 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1783out_doutb[(getCycle()+2)%3] = (id1783x_3);
    if(((id1783in_wea.getValueAsBool())&id1783_inputvalid)) {
      if(((id1783x_1)<(1250l))) {
        (id1783sta_ram_store[(id1783x_1)]) = id1783in_dina;
      }
      else {
        throw std::runtime_error((format_string_prf_v2_Kernel_4("Run-time exception during simulation: Out of bounds write to NodeRAM (ID: 1783) on port A, ram depth is 1250.")));
      }
    }
  }
  HWOffsetFix<64,0,UNSIGNED> id1429out_result;

  { // Node ID: 1429 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1429in_sel = id2477out_output[getCycle()%13];
    const HWOffsetFix<64,0,UNSIGNED> &id1429in_option0 = id1782out_doutb[getCycle()%3];
    const HWOffsetFix<64,0,UNSIGNED> &id1429in_option1 = id1783out_doutb[getCycle()%3];

    HWOffsetFix<64,0,UNSIGNED> id1429x_1;

    switch((id1429in_sel.getValueAsLong())) {
      case 0l:
        id1429x_1 = id1429in_option0;
        break;
      case 1l:
        id1429x_1 = id1429in_option1;
        break;
      default:
        id1429x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1429out_result = (id1429x_1);
  }
  HWOffsetFix<64,0,UNSIGNED> id1444out_result;

  { // Node ID: 1444 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1444in_sel = id2478out_output[getCycle()%13];
    const HWOffsetFix<64,0,UNSIGNED> &id1444in_option0 = id1424out_result;
    const HWOffsetFix<64,0,UNSIGNED> &id1444in_option1 = id1429out_result;

    HWOffsetFix<64,0,UNSIGNED> id1444x_1;

    switch((id1444in_sel.getValueAsLong())) {
      case 0l:
        id1444x_1 = id1444in_option0;
        break;
      case 1l:
        id1444x_1 = id1444in_option1;
        break;
      default:
        id1444x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1444out_result = (id1444x_1);
  }
  HWRawBits<64> id2062out_dataout;

  { // Node ID: 2062 (NodeShift)
    const HWOffsetFix<64,0,UNSIGNED> &id2062in_datain = id1398out_result;

    id2062out_dataout = (shift_right_fixed(id2062in_datain,(1l)));
  }
  HWOffsetFix<64,0,UNSIGNED> id1447out_output;

  { // Node ID: 1447 (NodeReinterpret)
    const HWRawBits<64> &id1447in_input = id2062out_dataout;

    id1447out_output = (cast_bits2fixed<64,0,UNSIGNED>(id1447in_input));
  }
  HWOffsetFix<1,0,UNSIGNED> id1448out_o;

  { // Node ID: 1448 (NodeCast)
    const HWOffsetFix<64,0,UNSIGNED> &id1448in_i = id1447out_output;

    id1448out_o = (cast_fixed2fixed<1,0,UNSIGNED,TRUNCATE>(id1448in_i));
  }
  { // Node ID: 2537 (NodeFIFO)
    const HWOffsetFix<1,0,UNSIGNED> &id2537in_input = id1448out_o;

    id2537out_output[(getCycle()+12)%13] = id2537in_input;
  }
  HWRawBits<64> id2211out_output;

  { // Node ID: 2211 (NodeReinterpret)
    const HWOffsetFix<64,0,UNSIGNED> &id2211in_input = id1398out_result;

    id2211out_output = (cast_fixed2bits(id2211in_input));
  }
  HWOffsetFix<64,0,UNSIGNED> id1432out_output;

  { // Node ID: 1432 (NodeReinterpret)
    const HWRawBits<64> &id1432in_input = id2211out_output;

    id1432out_output = (cast_bits2fixed<64,0,UNSIGNED>(id1432in_input));
  }
  HWOffsetFix<1,0,UNSIGNED> id1433out_o;

  { // Node ID: 1433 (NodeCast)
    const HWOffsetFix<64,0,UNSIGNED> &id1433in_i = id1432out_output;

    id1433out_o = (cast_fixed2fixed<1,0,UNSIGNED,TRUNCATE>(id1433in_i));
  }
  { // Node ID: 2507 (NodeFIFO)
    const HWOffsetFix<1,0,UNSIGNED> &id2507in_input = id1433out_o;

    id2507out_output[(getCycle()+12)%13] = id2507in_input;
  }
  { // Node ID: 2689 (NodeConstantRawBits)
  }
  { // Node ID: 2064 (NodeEqInlined)
    const HWOffsetFix<64,0,UNSIGNED> &id2064in_a = id889out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id2064in_b = id2689out_value;

    id2064out_result[(getCycle()+1)%2] = (eq_fixed(id2064in_a,id2064in_b));
  }
  { // Node ID: 2688 (NodeConstantRawBits)
  }
  { // Node ID: 2065 (NodeEqInlined)
    const HWOffsetFix<64,0,UNSIGNED> &id2065in_a = id886out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id2065in_b = id2688out_value;

    id2065out_result[(getCycle()+1)%2] = (eq_fixed(id2065in_a,id2065in_b));
  }
  { // Node ID: 2687 (NodeConstantRawBits)
  }
  { // Node ID: 2066 (NodeEqInlined)
    const HWOffsetFix<64,0,UNSIGNED> &id2066in_a = id883out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id2066in_b = id2687out_value;

    id2066out_result[(getCycle()+1)%2] = (eq_fixed(id2066in_a,id2066in_b));
  }
  { // Node ID: 2686 (NodeConstantRawBits)
  }
  { // Node ID: 2067 (NodeEqInlined)
    const HWOffsetFix<64,0,UNSIGNED> &id2067in_a = id880out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id2067in_b = id2686out_value;

    id2067out_result[(getCycle()+1)%2] = (eq_fixed(id2067in_a,id2067in_b));
  }
  { // Node ID: 2685 (NodeConstantRawBits)
  }
  { // Node ID: 2068 (NodeEqInlined)
    const HWOffsetFix<64,0,UNSIGNED> &id2068in_a = id877out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id2068in_b = id2685out_value;

    id2068out_result[(getCycle()+1)%2] = (eq_fixed(id2068in_a,id2068in_b));
  }
  { // Node ID: 2684 (NodeConstantRawBits)
  }
  { // Node ID: 2069 (NodeEqInlined)
    const HWOffsetFix<64,0,UNSIGNED> &id2069in_a = id874out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id2069in_b = id2684out_value;

    id2069out_result[(getCycle()+1)%2] = (eq_fixed(id2069in_a,id2069in_b));
  }
  { // Node ID: 2683 (NodeConstantRawBits)
  }
  { // Node ID: 2070 (NodeEqInlined)
    const HWOffsetFix<64,0,UNSIGNED> &id2070in_a = id871out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id2070in_b = id2683out_value;

    id2070out_result[(getCycle()+1)%2] = (eq_fixed(id2070in_a,id2070in_b));
  }
  { // Node ID: 2682 (NodeConstantRawBits)
  }
  { // Node ID: 2071 (NodeEqInlined)
    const HWOffsetFix<64,0,UNSIGNED> &id2071in_a = id868out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id2071in_b = id2682out_value;

    id2071out_result[(getCycle()+1)%2] = (eq_fixed(id2071in_a,id2071in_b));
  }
  { // Node ID: 988 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id988in_sel = id2071out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id988in_option0 = id652out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id988in_option1 = id624out_result[getCycle()%2];

    HWOffsetFix<64,0,UNSIGNED> id988x_1;

    switch((id988in_sel.getValueAsLong())) {
      case 0l:
        id988x_1 = id988in_option0;
        break;
      case 1l:
        id988x_1 = id988in_option1;
        break;
      default:
        id988x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id988out_result[(getCycle()+1)%2] = (id988x_1);
  }
  { // Node ID: 991 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id991in_sel = id2070out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id991in_option0 = id988out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id991in_option1 = id2407out_output[getCycle()%2];

    HWOffsetFix<64,0,UNSIGNED> id991x_1;

    switch((id991in_sel.getValueAsLong())) {
      case 0l:
        id991x_1 = id991in_option0;
        break;
      case 1l:
        id991x_1 = id991in_option1;
        break;
      default:
        id991x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id991out_result[(getCycle()+1)%2] = (id991x_1);
  }
  { // Node ID: 994 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id994in_sel = id2069out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id994in_option0 = id991out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id994in_option1 = id2410out_output[getCycle()%3];

    HWOffsetFix<64,0,UNSIGNED> id994x_1;

    switch((id994in_sel.getValueAsLong())) {
      case 0l:
        id994x_1 = id994in_option0;
        break;
      case 1l:
        id994x_1 = id994in_option1;
        break;
      default:
        id994x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id994out_result[(getCycle()+1)%2] = (id994x_1);
  }
  { // Node ID: 997 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id997in_sel = id2068out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id997in_option0 = id994out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id997in_option1 = id2413out_output[getCycle()%4];

    HWOffsetFix<64,0,UNSIGNED> id997x_1;

    switch((id997in_sel.getValueAsLong())) {
      case 0l:
        id997x_1 = id997in_option0;
        break;
      case 1l:
        id997x_1 = id997in_option1;
        break;
      default:
        id997x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id997out_result[(getCycle()+1)%2] = (id997x_1);
  }
  { // Node ID: 1000 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1000in_sel = id2067out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1000in_option0 = id997out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1000in_option1 = id2416out_output[getCycle()%5];

    HWOffsetFix<64,0,UNSIGNED> id1000x_1;

    switch((id1000in_sel.getValueAsLong())) {
      case 0l:
        id1000x_1 = id1000in_option0;
        break;
      case 1l:
        id1000x_1 = id1000in_option1;
        break;
      default:
        id1000x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1000out_result[(getCycle()+1)%2] = (id1000x_1);
  }
  { // Node ID: 1003 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1003in_sel = id2066out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1003in_option0 = id1000out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1003in_option1 = id2419out_output[getCycle()%6];

    HWOffsetFix<64,0,UNSIGNED> id1003x_1;

    switch((id1003in_sel.getValueAsLong())) {
      case 0l:
        id1003x_1 = id1003in_option0;
        break;
      case 1l:
        id1003x_1 = id1003in_option1;
        break;
      default:
        id1003x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1003out_result[(getCycle()+1)%2] = (id1003x_1);
  }
  { // Node ID: 1006 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1006in_sel = id2065out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1006in_option0 = id1003out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1006in_option1 = id2422out_output[getCycle()%7];

    HWOffsetFix<64,0,UNSIGNED> id1006x_1;

    switch((id1006in_sel.getValueAsLong())) {
      case 0l:
        id1006x_1 = id1006in_option0;
        break;
      case 1l:
        id1006x_1 = id1006in_option1;
        break;
      default:
        id1006x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1006out_result[(getCycle()+1)%2] = (id1006x_1);
  }
  { // Node ID: 1009 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1009in_sel = id2064out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1009in_option0 = id1006out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1009in_option1 = id2425out_output[getCycle()%8];

    HWOffsetFix<64,0,UNSIGNED> id1009x_1;

    switch((id1009in_sel.getValueAsLong())) {
      case 0l:
        id1009x_1 = id1009in_option0;
        break;
      case 1l:
        id1009x_1 = id1009in_option1;
        break;
      default:
        id1009x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1009out_result[(getCycle()+1)%2] = (id1009x_1);
  }
  HWOffsetFix<11,0,UNSIGNED> id1376out_o;

  { // Node ID: 1376 (NodeCast)
    const HWOffsetFix<64,0,UNSIGNED> &id1376in_i = id1009out_result[getCycle()%2];

    id1376out_o = (cast_fixed2fixed<11,0,UNSIGNED,TRUNCATE>(id1376in_i));
  }
  { // Node ID: 2681 (NodeConstantRawBits)
  }
  HWOffsetFix<1,0,UNSIGNED> id2072out_result;

  { // Node ID: 2072 (NodeEqInlined)
    const HWOffsetFix<32,0,TWOSCOMPLEMENT> &id2072in_a = id12out_compute;
    const HWOffsetFix<32,0,TWOSCOMPLEMENT> &id2072in_b = id2681out_value;

    id2072out_result = (eq_fixed(id2072in_a,id2072in_b));
  }
  { // Node ID: 2680 (NodeConstantRawBits)
  }
  { // Node ID: 2073 (NodeEqInlined)
    const HWOffsetFix<64,0,UNSIGNED> &id2073in_a = id1105out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id2073in_b = id2680out_value;

    id2073out_result[(getCycle()+1)%2] = (eq_fixed(id2073in_a,id2073in_b));
  }
  { // Node ID: 2679 (NodeConstantRawBits)
  }
  { // Node ID: 2074 (NodeEqInlined)
    const HWOffsetFix<64,0,UNSIGNED> &id2074in_a = id1102out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id2074in_b = id2679out_value;

    id2074out_result[(getCycle()+1)%2] = (eq_fixed(id2074in_a,id2074in_b));
  }
  { // Node ID: 2678 (NodeConstantRawBits)
  }
  { // Node ID: 2075 (NodeEqInlined)
    const HWOffsetFix<64,0,UNSIGNED> &id2075in_a = id1099out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id2075in_b = id2678out_value;

    id2075out_result[(getCycle()+1)%2] = (eq_fixed(id2075in_a,id2075in_b));
  }
  { // Node ID: 2677 (NodeConstantRawBits)
  }
  { // Node ID: 2076 (NodeEqInlined)
    const HWOffsetFix<64,0,UNSIGNED> &id2076in_a = id1096out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id2076in_b = id2677out_value;

    id2076out_result[(getCycle()+1)%2] = (eq_fixed(id2076in_a,id2076in_b));
  }
  { // Node ID: 2676 (NodeConstantRawBits)
  }
  { // Node ID: 2077 (NodeEqInlined)
    const HWOffsetFix<64,0,UNSIGNED> &id2077in_a = id1093out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id2077in_b = id2676out_value;

    id2077out_result[(getCycle()+1)%2] = (eq_fixed(id2077in_a,id2077in_b));
  }
  { // Node ID: 2675 (NodeConstantRawBits)
  }
  { // Node ID: 2078 (NodeEqInlined)
    const HWOffsetFix<64,0,UNSIGNED> &id2078in_a = id1090out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id2078in_b = id2675out_value;

    id2078out_result[(getCycle()+1)%2] = (eq_fixed(id2078in_a,id2078in_b));
  }
  { // Node ID: 2674 (NodeConstantRawBits)
  }
  { // Node ID: 2079 (NodeEqInlined)
    const HWOffsetFix<64,0,UNSIGNED> &id2079in_a = id1087out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id2079in_b = id2674out_value;

    id2079out_result[(getCycle()+1)%2] = (eq_fixed(id2079in_a,id2079in_b));
  }
  { // Node ID: 2673 (NodeConstantRawBits)
  }
  { // Node ID: 2080 (NodeEqInlined)
    const HWOffsetFix<64,0,UNSIGNED> &id2080in_a = id1084out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id2080in_b = id2673out_value;

    id2080out_result[(getCycle()+1)%2] = (eq_fixed(id2080in_a,id2080in_b));
  }
  { // Node ID: 1204 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1204in_sel = id2080out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1204in_option0 = id28out_data;
    const HWOffsetFix<64,0,UNSIGNED> &id1204in_option1 = id16out_data;

    HWOffsetFix<64,0,UNSIGNED> id1204x_1;

    switch((id1204in_sel.getValueAsLong())) {
      case 0l:
        id1204x_1 = id1204in_option0;
        break;
      case 1l:
        id1204x_1 = id1204in_option1;
        break;
      default:
        id1204x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1204out_result[(getCycle()+1)%2] = (id1204x_1);
  }
  { // Node ID: 1207 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1207in_sel = id2079out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1207in_option0 = id1204out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1207in_option1 = id2427out_output[getCycle()%2];

    HWOffsetFix<64,0,UNSIGNED> id1207x_1;

    switch((id1207in_sel.getValueAsLong())) {
      case 0l:
        id1207x_1 = id1207in_option0;
        break;
      case 1l:
        id1207x_1 = id1207in_option1;
        break;
      default:
        id1207x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1207out_result[(getCycle()+1)%2] = (id1207x_1);
  }
  { // Node ID: 1210 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1210in_sel = id2078out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1210in_option0 = id1207out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1210in_option1 = id2428out_output[getCycle()%3];

    HWOffsetFix<64,0,UNSIGNED> id1210x_1;

    switch((id1210in_sel.getValueAsLong())) {
      case 0l:
        id1210x_1 = id1210in_option0;
        break;
      case 1l:
        id1210x_1 = id1210in_option1;
        break;
      default:
        id1210x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1210out_result[(getCycle()+1)%2] = (id1210x_1);
  }
  { // Node ID: 1213 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1213in_sel = id2077out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1213in_option0 = id1210out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1213in_option1 = id2429out_output[getCycle()%4];

    HWOffsetFix<64,0,UNSIGNED> id1213x_1;

    switch((id1213in_sel.getValueAsLong())) {
      case 0l:
        id1213x_1 = id1213in_option0;
        break;
      case 1l:
        id1213x_1 = id1213in_option1;
        break;
      default:
        id1213x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1213out_result[(getCycle()+1)%2] = (id1213x_1);
  }
  { // Node ID: 1216 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1216in_sel = id2076out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1216in_option0 = id1213out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1216in_option1 = id2430out_output[getCycle()%5];

    HWOffsetFix<64,0,UNSIGNED> id1216x_1;

    switch((id1216in_sel.getValueAsLong())) {
      case 0l:
        id1216x_1 = id1216in_option0;
        break;
      case 1l:
        id1216x_1 = id1216in_option1;
        break;
      default:
        id1216x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1216out_result[(getCycle()+1)%2] = (id1216x_1);
  }
  { // Node ID: 1219 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1219in_sel = id2075out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1219in_option0 = id1216out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1219in_option1 = id2431out_output[getCycle()%6];

    HWOffsetFix<64,0,UNSIGNED> id1219x_1;

    switch((id1219in_sel.getValueAsLong())) {
      case 0l:
        id1219x_1 = id1219in_option0;
        break;
      case 1l:
        id1219x_1 = id1219in_option1;
        break;
      default:
        id1219x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1219out_result[(getCycle()+1)%2] = (id1219x_1);
  }
  { // Node ID: 1222 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1222in_sel = id2074out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1222in_option0 = id1219out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1222in_option1 = id2432out_output[getCycle()%7];

    HWOffsetFix<64,0,UNSIGNED> id1222x_1;

    switch((id1222in_sel.getValueAsLong())) {
      case 0l:
        id1222x_1 = id1222in_option0;
        break;
      case 1l:
        id1222x_1 = id1222in_option1;
        break;
      default:
        id1222x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1222out_result[(getCycle()+1)%2] = (id1222x_1);
  }
  { // Node ID: 1225 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1225in_sel = id2073out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1225in_option0 = id1222out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1225in_option1 = id2433out_output[getCycle()%8];

    HWOffsetFix<64,0,UNSIGNED> id1225x_1;

    switch((id1225in_sel.getValueAsLong())) {
      case 0l:
        id1225x_1 = id1225in_option0;
        break;
      case 1l:
        id1225x_1 = id1225in_option1;
        break;
      default:
        id1225x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1225out_result[(getCycle()+1)%2] = (id1225x_1);
  }
  { // Node ID: 2672 (NodeConstantRawBits)
  }
  HWOffsetFix<64,0,UNSIGNED> id1331out_result;

  { // Node ID: 1331 (NodeAdd)
    const HWOffsetFix<64,0,UNSIGNED> &id1331in_a = id1225out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1331in_b = id2672out_value;

    id1331out_result = (add_fixed<64,0,UNSIGNED,TRUNCATE>(id1331in_a,id1331in_b));
  }
  HWOffsetFix<64,0,UNSIGNED> id1332out_result;

  { // Node ID: 1332 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1332in_sel = id2072out_result;
    const HWOffsetFix<64,0,UNSIGNED> &id1332in_option0 = id1225out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1332in_option1 = id1331out_result;

    HWOffsetFix<64,0,UNSIGNED> id1332x_1;

    switch((id1332in_sel.getValueAsLong())) {
      case 0l:
        id1332x_1 = id1332in_option0;
        break;
      case 1l:
        id1332x_1 = id1332in_option1;
        break;
      default:
        id1332x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1332out_result = (id1332x_1);
  }
  HWRawBits<64> id2081out_dataout;

  { // Node ID: 2081 (NodeShift)
    const HWOffsetFix<64,0,UNSIGNED> &id2081in_datain = id11out_data;

    id2081out_dataout = (shift_right_fixed(id2081in_datain,(4l)));
  }
  HWOffsetFix<64,0,UNSIGNED> id1374out_output;

  { // Node ID: 1374 (NodeReinterpret)
    const HWRawBits<64> &id1374in_input = id2081out_dataout;

    id1374out_output = (cast_bits2fixed<64,0,UNSIGNED>(id1374in_input));
  }
  HWOffsetFix<1,0,UNSIGNED> id1375out_o;

  { // Node ID: 1375 (NodeCast)
    const HWOffsetFix<64,0,UNSIGNED> &id1375in_i = id1374out_output;

    id1375out_o = (cast_fixed2fixed<1,0,UNSIGNED,TRUNCATE>(id1375in_i));
  }
  HWOffsetFix<11,0,UNSIGNED> id1377out_o;

  { // Node ID: 1377 (NodeCast)
    const HWOffsetFix<64,0,UNSIGNED> &id1377in_i = id1009out_result[getCycle()%2];

    id1377out_o = (cast_fixed2fixed<11,0,UNSIGNED,TRUNCATE>(id1377in_i));
  }
  if ( (getFillLevel() >= (28l)))
  { // Node ID: 1784 (NodeRAM)
    const bool id1784_inputvalid = !(isFlushingActive() && getFlushLevel() >= (28l));
    const HWOffsetFix<11,0,UNSIGNED> &id1784in_addrA = id1376out_o;
    const HWOffsetFix<64,0,UNSIGNED> &id1784in_dina = id1332out_result;
    const HWOffsetFix<1,0,UNSIGNED> &id1784in_wea = id1375out_o;
    const HWOffsetFix<11,0,UNSIGNED> &id1784in_addrB = id1377out_o;

    long id1784x_1;
    long id1784x_2;
    HWOffsetFix<64,0,UNSIGNED> id1784x_3;

    (id1784x_1) = (id1784in_addrA.getValueAsLong());
    (id1784x_2) = (id1784in_addrB.getValueAsLong());
    switch(((long)((id1784x_2)<(1250l)))) {
      case 0l:
        id1784x_3 = (c_hw_fix_64_0_uns_undef);
        break;
      case 1l:
        id1784x_3 = (id1784sta_ram_store[(id1784x_2)]);
        break;
      default:
        id1784x_3 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1784out_doutb[(getCycle()+2)%3] = (id1784x_3);
    if(((id1784in_wea.getValueAsBool())&id1784_inputvalid)) {
      if(((id1784x_1)<(1250l))) {
        (id1784sta_ram_store[(id1784x_1)]) = id1784in_dina;
      }
      else {
        throw std::runtime_error((format_string_prf_v2_Kernel_5("Run-time exception during simulation: Out of bounds write to NodeRAM (ID: 1784) on port A, ram depth is 1250.")));
      }
    }
  }
  { // Node ID: 2671 (NodeConstantRawBits)
  }
  { // Node ID: 2082 (NodeEqInlined)
    const HWOffsetFix<64,0,UNSIGNED> &id2082in_a = id889out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id2082in_b = id2671out_value;

    id2082out_result[(getCycle()+1)%2] = (eq_fixed(id2082in_a,id2082in_b));
  }
  { // Node ID: 2670 (NodeConstantRawBits)
  }
  { // Node ID: 2083 (NodeEqInlined)
    const HWOffsetFix<64,0,UNSIGNED> &id2083in_a = id886out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id2083in_b = id2670out_value;

    id2083out_result[(getCycle()+1)%2] = (eq_fixed(id2083in_a,id2083in_b));
  }
  { // Node ID: 2669 (NodeConstantRawBits)
  }
  { // Node ID: 2084 (NodeEqInlined)
    const HWOffsetFix<64,0,UNSIGNED> &id2084in_a = id883out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id2084in_b = id2669out_value;

    id2084out_result[(getCycle()+1)%2] = (eq_fixed(id2084in_a,id2084in_b));
  }
  { // Node ID: 2668 (NodeConstantRawBits)
  }
  { // Node ID: 2085 (NodeEqInlined)
    const HWOffsetFix<64,0,UNSIGNED> &id2085in_a = id880out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id2085in_b = id2668out_value;

    id2085out_result[(getCycle()+1)%2] = (eq_fixed(id2085in_a,id2085in_b));
  }
  { // Node ID: 2667 (NodeConstantRawBits)
  }
  { // Node ID: 2086 (NodeEqInlined)
    const HWOffsetFix<64,0,UNSIGNED> &id2086in_a = id877out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id2086in_b = id2667out_value;

    id2086out_result[(getCycle()+1)%2] = (eq_fixed(id2086in_a,id2086in_b));
  }
  { // Node ID: 2666 (NodeConstantRawBits)
  }
  { // Node ID: 2087 (NodeEqInlined)
    const HWOffsetFix<64,0,UNSIGNED> &id2087in_a = id874out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id2087in_b = id2666out_value;

    id2087out_result[(getCycle()+1)%2] = (eq_fixed(id2087in_a,id2087in_b));
  }
  { // Node ID: 2665 (NodeConstantRawBits)
  }
  { // Node ID: 2088 (NodeEqInlined)
    const HWOffsetFix<64,0,UNSIGNED> &id2088in_a = id871out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id2088in_b = id2665out_value;

    id2088out_result[(getCycle()+1)%2] = (eq_fixed(id2088in_a,id2088in_b));
  }
  { // Node ID: 2664 (NodeConstantRawBits)
  }
  { // Node ID: 2089 (NodeEqInlined)
    const HWOffsetFix<64,0,UNSIGNED> &id2089in_a = id868out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id2089in_b = id2664out_value;

    id2089out_result[(getCycle()+1)%2] = (eq_fixed(id2089in_a,id2089in_b));
  }
  { // Node ID: 1012 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1012in_sel = id2089out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1012in_option0 = id659out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1012in_option1 = id624out_result[getCycle()%2];

    HWOffsetFix<64,0,UNSIGNED> id1012x_1;

    switch((id1012in_sel.getValueAsLong())) {
      case 0l:
        id1012x_1 = id1012in_option0;
        break;
      case 1l:
        id1012x_1 = id1012in_option1;
        break;
      default:
        id1012x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1012out_result[(getCycle()+1)%2] = (id1012x_1);
  }
  { // Node ID: 1015 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1015in_sel = id2088out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1015in_option0 = id1012out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1015in_option1 = id2407out_output[getCycle()%2];

    HWOffsetFix<64,0,UNSIGNED> id1015x_1;

    switch((id1015in_sel.getValueAsLong())) {
      case 0l:
        id1015x_1 = id1015in_option0;
        break;
      case 1l:
        id1015x_1 = id1015in_option1;
        break;
      default:
        id1015x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1015out_result[(getCycle()+1)%2] = (id1015x_1);
  }
  { // Node ID: 1018 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1018in_sel = id2087out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1018in_option0 = id1015out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1018in_option1 = id2410out_output[getCycle()%3];

    HWOffsetFix<64,0,UNSIGNED> id1018x_1;

    switch((id1018in_sel.getValueAsLong())) {
      case 0l:
        id1018x_1 = id1018in_option0;
        break;
      case 1l:
        id1018x_1 = id1018in_option1;
        break;
      default:
        id1018x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1018out_result[(getCycle()+1)%2] = (id1018x_1);
  }
  { // Node ID: 1021 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1021in_sel = id2086out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1021in_option0 = id1018out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1021in_option1 = id2413out_output[getCycle()%4];

    HWOffsetFix<64,0,UNSIGNED> id1021x_1;

    switch((id1021in_sel.getValueAsLong())) {
      case 0l:
        id1021x_1 = id1021in_option0;
        break;
      case 1l:
        id1021x_1 = id1021in_option1;
        break;
      default:
        id1021x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1021out_result[(getCycle()+1)%2] = (id1021x_1);
  }
  { // Node ID: 1024 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1024in_sel = id2085out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1024in_option0 = id1021out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1024in_option1 = id2416out_output[getCycle()%5];

    HWOffsetFix<64,0,UNSIGNED> id1024x_1;

    switch((id1024in_sel.getValueAsLong())) {
      case 0l:
        id1024x_1 = id1024in_option0;
        break;
      case 1l:
        id1024x_1 = id1024in_option1;
        break;
      default:
        id1024x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1024out_result[(getCycle()+1)%2] = (id1024x_1);
  }
  { // Node ID: 1027 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1027in_sel = id2084out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1027in_option0 = id1024out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1027in_option1 = id2419out_output[getCycle()%6];

    HWOffsetFix<64,0,UNSIGNED> id1027x_1;

    switch((id1027in_sel.getValueAsLong())) {
      case 0l:
        id1027x_1 = id1027in_option0;
        break;
      case 1l:
        id1027x_1 = id1027in_option1;
        break;
      default:
        id1027x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1027out_result[(getCycle()+1)%2] = (id1027x_1);
  }
  { // Node ID: 1030 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1030in_sel = id2083out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1030in_option0 = id1027out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1030in_option1 = id2422out_output[getCycle()%7];

    HWOffsetFix<64,0,UNSIGNED> id1030x_1;

    switch((id1030in_sel.getValueAsLong())) {
      case 0l:
        id1030x_1 = id1030in_option0;
        break;
      case 1l:
        id1030x_1 = id1030in_option1;
        break;
      default:
        id1030x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1030out_result[(getCycle()+1)%2] = (id1030x_1);
  }
  { // Node ID: 1033 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1033in_sel = id2082out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1033in_option0 = id1030out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1033in_option1 = id2425out_output[getCycle()%8];

    HWOffsetFix<64,0,UNSIGNED> id1033x_1;

    switch((id1033in_sel.getValueAsLong())) {
      case 0l:
        id1033x_1 = id1033in_option0;
        break;
      case 1l:
        id1033x_1 = id1033in_option1;
        break;
      default:
        id1033x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1033out_result[(getCycle()+1)%2] = (id1033x_1);
  }
  HWOffsetFix<11,0,UNSIGNED> id1382out_o;

  { // Node ID: 1382 (NodeCast)
    const HWOffsetFix<64,0,UNSIGNED> &id1382in_i = id1033out_result[getCycle()%2];

    id1382out_o = (cast_fixed2fixed<11,0,UNSIGNED,TRUNCATE>(id1382in_i));
  }
  { // Node ID: 2663 (NodeConstantRawBits)
  }
  HWOffsetFix<1,0,UNSIGNED> id2090out_result;

  { // Node ID: 2090 (NodeEqInlined)
    const HWOffsetFix<32,0,TWOSCOMPLEMENT> &id2090in_a = id12out_compute;
    const HWOffsetFix<32,0,TWOSCOMPLEMENT> &id2090in_b = id2663out_value;

    id2090out_result = (eq_fixed(id2090in_a,id2090in_b));
  }
  { // Node ID: 2662 (NodeConstantRawBits)
  }
  { // Node ID: 2091 (NodeEqInlined)
    const HWOffsetFix<64,0,UNSIGNED> &id2091in_a = id1105out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id2091in_b = id2662out_value;

    id2091out_result[(getCycle()+1)%2] = (eq_fixed(id2091in_a,id2091in_b));
  }
  { // Node ID: 2661 (NodeConstantRawBits)
  }
  { // Node ID: 2092 (NodeEqInlined)
    const HWOffsetFix<64,0,UNSIGNED> &id2092in_a = id1102out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id2092in_b = id2661out_value;

    id2092out_result[(getCycle()+1)%2] = (eq_fixed(id2092in_a,id2092in_b));
  }
  { // Node ID: 2660 (NodeConstantRawBits)
  }
  { // Node ID: 2093 (NodeEqInlined)
    const HWOffsetFix<64,0,UNSIGNED> &id2093in_a = id1099out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id2093in_b = id2660out_value;

    id2093out_result[(getCycle()+1)%2] = (eq_fixed(id2093in_a,id2093in_b));
  }
  { // Node ID: 2659 (NodeConstantRawBits)
  }
  { // Node ID: 2094 (NodeEqInlined)
    const HWOffsetFix<64,0,UNSIGNED> &id2094in_a = id1096out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id2094in_b = id2659out_value;

    id2094out_result[(getCycle()+1)%2] = (eq_fixed(id2094in_a,id2094in_b));
  }
  { // Node ID: 2658 (NodeConstantRawBits)
  }
  { // Node ID: 2095 (NodeEqInlined)
    const HWOffsetFix<64,0,UNSIGNED> &id2095in_a = id1093out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id2095in_b = id2658out_value;

    id2095out_result[(getCycle()+1)%2] = (eq_fixed(id2095in_a,id2095in_b));
  }
  { // Node ID: 2657 (NodeConstantRawBits)
  }
  { // Node ID: 2096 (NodeEqInlined)
    const HWOffsetFix<64,0,UNSIGNED> &id2096in_a = id1090out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id2096in_b = id2657out_value;

    id2096out_result[(getCycle()+1)%2] = (eq_fixed(id2096in_a,id2096in_b));
  }
  { // Node ID: 2656 (NodeConstantRawBits)
  }
  { // Node ID: 2097 (NodeEqInlined)
    const HWOffsetFix<64,0,UNSIGNED> &id2097in_a = id1087out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id2097in_b = id2656out_value;

    id2097out_result[(getCycle()+1)%2] = (eq_fixed(id2097in_a,id2097in_b));
  }
  { // Node ID: 2655 (NodeConstantRawBits)
  }
  { // Node ID: 2098 (NodeEqInlined)
    const HWOffsetFix<64,0,UNSIGNED> &id2098in_a = id1084out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id2098in_b = id2655out_value;

    id2098out_result[(getCycle()+1)%2] = (eq_fixed(id2098in_a,id2098in_b));
  }
  { // Node ID: 1228 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1228in_sel = id2098out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1228in_option0 = id31out_data;
    const HWOffsetFix<64,0,UNSIGNED> &id1228in_option1 = id16out_data;

    HWOffsetFix<64,0,UNSIGNED> id1228x_1;

    switch((id1228in_sel.getValueAsLong())) {
      case 0l:
        id1228x_1 = id1228in_option0;
        break;
      case 1l:
        id1228x_1 = id1228in_option1;
        break;
      default:
        id1228x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1228out_result[(getCycle()+1)%2] = (id1228x_1);
  }
  { // Node ID: 1231 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1231in_sel = id2097out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1231in_option0 = id1228out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1231in_option1 = id2427out_output[getCycle()%2];

    HWOffsetFix<64,0,UNSIGNED> id1231x_1;

    switch((id1231in_sel.getValueAsLong())) {
      case 0l:
        id1231x_1 = id1231in_option0;
        break;
      case 1l:
        id1231x_1 = id1231in_option1;
        break;
      default:
        id1231x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1231out_result[(getCycle()+1)%2] = (id1231x_1);
  }
  { // Node ID: 1234 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1234in_sel = id2096out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1234in_option0 = id1231out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1234in_option1 = id2428out_output[getCycle()%3];

    HWOffsetFix<64,0,UNSIGNED> id1234x_1;

    switch((id1234in_sel.getValueAsLong())) {
      case 0l:
        id1234x_1 = id1234in_option0;
        break;
      case 1l:
        id1234x_1 = id1234in_option1;
        break;
      default:
        id1234x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1234out_result[(getCycle()+1)%2] = (id1234x_1);
  }
  { // Node ID: 1237 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1237in_sel = id2095out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1237in_option0 = id1234out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1237in_option1 = id2429out_output[getCycle()%4];

    HWOffsetFix<64,0,UNSIGNED> id1237x_1;

    switch((id1237in_sel.getValueAsLong())) {
      case 0l:
        id1237x_1 = id1237in_option0;
        break;
      case 1l:
        id1237x_1 = id1237in_option1;
        break;
      default:
        id1237x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1237out_result[(getCycle()+1)%2] = (id1237x_1);
  }
  { // Node ID: 1240 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1240in_sel = id2094out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1240in_option0 = id1237out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1240in_option1 = id2430out_output[getCycle()%5];

    HWOffsetFix<64,0,UNSIGNED> id1240x_1;

    switch((id1240in_sel.getValueAsLong())) {
      case 0l:
        id1240x_1 = id1240in_option0;
        break;
      case 1l:
        id1240x_1 = id1240in_option1;
        break;
      default:
        id1240x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1240out_result[(getCycle()+1)%2] = (id1240x_1);
  }
  { // Node ID: 1243 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1243in_sel = id2093out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1243in_option0 = id1240out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1243in_option1 = id2431out_output[getCycle()%6];

    HWOffsetFix<64,0,UNSIGNED> id1243x_1;

    switch((id1243in_sel.getValueAsLong())) {
      case 0l:
        id1243x_1 = id1243in_option0;
        break;
      case 1l:
        id1243x_1 = id1243in_option1;
        break;
      default:
        id1243x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1243out_result[(getCycle()+1)%2] = (id1243x_1);
  }
  { // Node ID: 1246 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1246in_sel = id2092out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1246in_option0 = id1243out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1246in_option1 = id2432out_output[getCycle()%7];

    HWOffsetFix<64,0,UNSIGNED> id1246x_1;

    switch((id1246in_sel.getValueAsLong())) {
      case 0l:
        id1246x_1 = id1246in_option0;
        break;
      case 1l:
        id1246x_1 = id1246in_option1;
        break;
      default:
        id1246x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1246out_result[(getCycle()+1)%2] = (id1246x_1);
  }
  { // Node ID: 1249 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1249in_sel = id2091out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1249in_option0 = id1246out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1249in_option1 = id2433out_output[getCycle()%8];

    HWOffsetFix<64,0,UNSIGNED> id1249x_1;

    switch((id1249in_sel.getValueAsLong())) {
      case 0l:
        id1249x_1 = id1249in_option0;
        break;
      case 1l:
        id1249x_1 = id1249in_option1;
        break;
      default:
        id1249x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1249out_result[(getCycle()+1)%2] = (id1249x_1);
  }
  { // Node ID: 2654 (NodeConstantRawBits)
  }
  HWOffsetFix<64,0,UNSIGNED> id1336out_result;

  { // Node ID: 1336 (NodeAdd)
    const HWOffsetFix<64,0,UNSIGNED> &id1336in_a = id1249out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1336in_b = id2654out_value;

    id1336out_result = (add_fixed<64,0,UNSIGNED,TRUNCATE>(id1336in_a,id1336in_b));
  }
  HWOffsetFix<64,0,UNSIGNED> id1337out_result;

  { // Node ID: 1337 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1337in_sel = id2090out_result;
    const HWOffsetFix<64,0,UNSIGNED> &id1337in_option0 = id1249out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1337in_option1 = id1336out_result;

    HWOffsetFix<64,0,UNSIGNED> id1337x_1;

    switch((id1337in_sel.getValueAsLong())) {
      case 0l:
        id1337x_1 = id1337in_option0;
        break;
      case 1l:
        id1337x_1 = id1337in_option1;
        break;
      default:
        id1337x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1337out_result = (id1337x_1);
  }
  HWRawBits<64> id2099out_dataout;

  { // Node ID: 2099 (NodeShift)
    const HWOffsetFix<64,0,UNSIGNED> &id2099in_datain = id11out_data;

    id2099out_dataout = (shift_right_fixed(id2099in_datain,(5l)));
  }
  HWOffsetFix<64,0,UNSIGNED> id1380out_output;

  { // Node ID: 1380 (NodeReinterpret)
    const HWRawBits<64> &id1380in_input = id2099out_dataout;

    id1380out_output = (cast_bits2fixed<64,0,UNSIGNED>(id1380in_input));
  }
  HWOffsetFix<1,0,UNSIGNED> id1381out_o;

  { // Node ID: 1381 (NodeCast)
    const HWOffsetFix<64,0,UNSIGNED> &id1381in_i = id1380out_output;

    id1381out_o = (cast_fixed2fixed<1,0,UNSIGNED,TRUNCATE>(id1381in_i));
  }
  HWOffsetFix<11,0,UNSIGNED> id1383out_o;

  { // Node ID: 1383 (NodeCast)
    const HWOffsetFix<64,0,UNSIGNED> &id1383in_i = id1033out_result[getCycle()%2];

    id1383out_o = (cast_fixed2fixed<11,0,UNSIGNED,TRUNCATE>(id1383in_i));
  }
  if ( (getFillLevel() >= (28l)))
  { // Node ID: 1785 (NodeRAM)
    const bool id1785_inputvalid = !(isFlushingActive() && getFlushLevel() >= (28l));
    const HWOffsetFix<11,0,UNSIGNED> &id1785in_addrA = id1382out_o;
    const HWOffsetFix<64,0,UNSIGNED> &id1785in_dina = id1337out_result;
    const HWOffsetFix<1,0,UNSIGNED> &id1785in_wea = id1381out_o;
    const HWOffsetFix<11,0,UNSIGNED> &id1785in_addrB = id1383out_o;

    long id1785x_1;
    long id1785x_2;
    HWOffsetFix<64,0,UNSIGNED> id1785x_3;

    (id1785x_1) = (id1785in_addrA.getValueAsLong());
    (id1785x_2) = (id1785in_addrB.getValueAsLong());
    switch(((long)((id1785x_2)<(1250l)))) {
      case 0l:
        id1785x_3 = (c_hw_fix_64_0_uns_undef);
        break;
      case 1l:
        id1785x_3 = (id1785sta_ram_store[(id1785x_2)]);
        break;
      default:
        id1785x_3 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1785out_doutb[(getCycle()+2)%3] = (id1785x_3);
    if(((id1785in_wea.getValueAsBool())&id1785_inputvalid)) {
      if(((id1785x_1)<(1250l))) {
        (id1785sta_ram_store[(id1785x_1)]) = id1785in_dina;
      }
      else {
        throw std::runtime_error((format_string_prf_v2_Kernel_6("Run-time exception during simulation: Out of bounds write to NodeRAM (ID: 1785) on port A, ram depth is 1250.")));
      }
    }
  }
  HWOffsetFix<64,0,UNSIGNED> id1434out_result;

  { // Node ID: 1434 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1434in_sel = id2507out_output[getCycle()%13];
    const HWOffsetFix<64,0,UNSIGNED> &id1434in_option0 = id1784out_doutb[getCycle()%3];
    const HWOffsetFix<64,0,UNSIGNED> &id1434in_option1 = id1785out_doutb[getCycle()%3];

    HWOffsetFix<64,0,UNSIGNED> id1434x_1;

    switch((id1434in_sel.getValueAsLong())) {
      case 0l:
        id1434x_1 = id1434in_option0;
        break;
      case 1l:
        id1434x_1 = id1434in_option1;
        break;
      default:
        id1434x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1434out_result = (id1434x_1);
  }
  HWRawBits<64> id2212out_output;

  { // Node ID: 2212 (NodeReinterpret)
    const HWOffsetFix<64,0,UNSIGNED> &id2212in_input = id1398out_result;

    id2212out_output = (cast_fixed2bits(id2212in_input));
  }
  HWOffsetFix<64,0,UNSIGNED> id1437out_output;

  { // Node ID: 1437 (NodeReinterpret)
    const HWRawBits<64> &id1437in_input = id2212out_output;

    id1437out_output = (cast_bits2fixed<64,0,UNSIGNED>(id1437in_input));
  }
  HWOffsetFix<1,0,UNSIGNED> id1438out_o;

  { // Node ID: 1438 (NodeCast)
    const HWOffsetFix<64,0,UNSIGNED> &id1438in_i = id1437out_output;

    id1438out_o = (cast_fixed2fixed<1,0,UNSIGNED,TRUNCATE>(id1438in_i));
  }
  { // Node ID: 2536 (NodeFIFO)
    const HWOffsetFix<1,0,UNSIGNED> &id2536in_input = id1438out_o;

    id2536out_output[(getCycle()+12)%13] = id2536in_input;
  }
  { // Node ID: 2653 (NodeConstantRawBits)
  }
  { // Node ID: 2101 (NodeEqInlined)
    const HWOffsetFix<64,0,UNSIGNED> &id2101in_a = id889out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id2101in_b = id2653out_value;

    id2101out_result[(getCycle()+1)%2] = (eq_fixed(id2101in_a,id2101in_b));
  }
  { // Node ID: 2652 (NodeConstantRawBits)
  }
  { // Node ID: 2102 (NodeEqInlined)
    const HWOffsetFix<64,0,UNSIGNED> &id2102in_a = id886out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id2102in_b = id2652out_value;

    id2102out_result[(getCycle()+1)%2] = (eq_fixed(id2102in_a,id2102in_b));
  }
  { // Node ID: 2651 (NodeConstantRawBits)
  }
  { // Node ID: 2103 (NodeEqInlined)
    const HWOffsetFix<64,0,UNSIGNED> &id2103in_a = id883out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id2103in_b = id2651out_value;

    id2103out_result[(getCycle()+1)%2] = (eq_fixed(id2103in_a,id2103in_b));
  }
  { // Node ID: 2650 (NodeConstantRawBits)
  }
  { // Node ID: 2104 (NodeEqInlined)
    const HWOffsetFix<64,0,UNSIGNED> &id2104in_a = id880out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id2104in_b = id2650out_value;

    id2104out_result[(getCycle()+1)%2] = (eq_fixed(id2104in_a,id2104in_b));
  }
  { // Node ID: 2649 (NodeConstantRawBits)
  }
  { // Node ID: 2105 (NodeEqInlined)
    const HWOffsetFix<64,0,UNSIGNED> &id2105in_a = id877out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id2105in_b = id2649out_value;

    id2105out_result[(getCycle()+1)%2] = (eq_fixed(id2105in_a,id2105in_b));
  }
  { // Node ID: 2648 (NodeConstantRawBits)
  }
  { // Node ID: 2106 (NodeEqInlined)
    const HWOffsetFix<64,0,UNSIGNED> &id2106in_a = id874out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id2106in_b = id2648out_value;

    id2106out_result[(getCycle()+1)%2] = (eq_fixed(id2106in_a,id2106in_b));
  }
  { // Node ID: 2647 (NodeConstantRawBits)
  }
  { // Node ID: 2107 (NodeEqInlined)
    const HWOffsetFix<64,0,UNSIGNED> &id2107in_a = id871out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id2107in_b = id2647out_value;

    id2107out_result[(getCycle()+1)%2] = (eq_fixed(id2107in_a,id2107in_b));
  }
  { // Node ID: 2646 (NodeConstantRawBits)
  }
  { // Node ID: 2108 (NodeEqInlined)
    const HWOffsetFix<64,0,UNSIGNED> &id2108in_a = id868out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id2108in_b = id2646out_value;

    id2108out_result[(getCycle()+1)%2] = (eq_fixed(id2108in_a,id2108in_b));
  }
  { // Node ID: 1036 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1036in_sel = id2108out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1036in_option0 = id666out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1036in_option1 = id624out_result[getCycle()%2];

    HWOffsetFix<64,0,UNSIGNED> id1036x_1;

    switch((id1036in_sel.getValueAsLong())) {
      case 0l:
        id1036x_1 = id1036in_option0;
        break;
      case 1l:
        id1036x_1 = id1036in_option1;
        break;
      default:
        id1036x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1036out_result[(getCycle()+1)%2] = (id1036x_1);
  }
  { // Node ID: 1039 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1039in_sel = id2107out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1039in_option0 = id1036out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1039in_option1 = id2407out_output[getCycle()%2];

    HWOffsetFix<64,0,UNSIGNED> id1039x_1;

    switch((id1039in_sel.getValueAsLong())) {
      case 0l:
        id1039x_1 = id1039in_option0;
        break;
      case 1l:
        id1039x_1 = id1039in_option1;
        break;
      default:
        id1039x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1039out_result[(getCycle()+1)%2] = (id1039x_1);
  }
  { // Node ID: 1042 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1042in_sel = id2106out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1042in_option0 = id1039out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1042in_option1 = id2410out_output[getCycle()%3];

    HWOffsetFix<64,0,UNSIGNED> id1042x_1;

    switch((id1042in_sel.getValueAsLong())) {
      case 0l:
        id1042x_1 = id1042in_option0;
        break;
      case 1l:
        id1042x_1 = id1042in_option1;
        break;
      default:
        id1042x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1042out_result[(getCycle()+1)%2] = (id1042x_1);
  }
  { // Node ID: 1045 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1045in_sel = id2105out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1045in_option0 = id1042out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1045in_option1 = id2413out_output[getCycle()%4];

    HWOffsetFix<64,0,UNSIGNED> id1045x_1;

    switch((id1045in_sel.getValueAsLong())) {
      case 0l:
        id1045x_1 = id1045in_option0;
        break;
      case 1l:
        id1045x_1 = id1045in_option1;
        break;
      default:
        id1045x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1045out_result[(getCycle()+1)%2] = (id1045x_1);
  }
  { // Node ID: 1048 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1048in_sel = id2104out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1048in_option0 = id1045out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1048in_option1 = id2416out_output[getCycle()%5];

    HWOffsetFix<64,0,UNSIGNED> id1048x_1;

    switch((id1048in_sel.getValueAsLong())) {
      case 0l:
        id1048x_1 = id1048in_option0;
        break;
      case 1l:
        id1048x_1 = id1048in_option1;
        break;
      default:
        id1048x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1048out_result[(getCycle()+1)%2] = (id1048x_1);
  }
  { // Node ID: 1051 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1051in_sel = id2103out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1051in_option0 = id1048out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1051in_option1 = id2419out_output[getCycle()%6];

    HWOffsetFix<64,0,UNSIGNED> id1051x_1;

    switch((id1051in_sel.getValueAsLong())) {
      case 0l:
        id1051x_1 = id1051in_option0;
        break;
      case 1l:
        id1051x_1 = id1051in_option1;
        break;
      default:
        id1051x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1051out_result[(getCycle()+1)%2] = (id1051x_1);
  }
  { // Node ID: 1054 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1054in_sel = id2102out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1054in_option0 = id1051out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1054in_option1 = id2422out_output[getCycle()%7];

    HWOffsetFix<64,0,UNSIGNED> id1054x_1;

    switch((id1054in_sel.getValueAsLong())) {
      case 0l:
        id1054x_1 = id1054in_option0;
        break;
      case 1l:
        id1054x_1 = id1054in_option1;
        break;
      default:
        id1054x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1054out_result[(getCycle()+1)%2] = (id1054x_1);
  }
  { // Node ID: 1057 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1057in_sel = id2101out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1057in_option0 = id1054out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1057in_option1 = id2425out_output[getCycle()%8];

    HWOffsetFix<64,0,UNSIGNED> id1057x_1;

    switch((id1057in_sel.getValueAsLong())) {
      case 0l:
        id1057x_1 = id1057in_option0;
        break;
      case 1l:
        id1057x_1 = id1057in_option1;
        break;
      default:
        id1057x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1057out_result[(getCycle()+1)%2] = (id1057x_1);
  }
  HWOffsetFix<11,0,UNSIGNED> id1388out_o;

  { // Node ID: 1388 (NodeCast)
    const HWOffsetFix<64,0,UNSIGNED> &id1388in_i = id1057out_result[getCycle()%2];

    id1388out_o = (cast_fixed2fixed<11,0,UNSIGNED,TRUNCATE>(id1388in_i));
  }
  { // Node ID: 2645 (NodeConstantRawBits)
  }
  HWOffsetFix<1,0,UNSIGNED> id2109out_result;

  { // Node ID: 2109 (NodeEqInlined)
    const HWOffsetFix<32,0,TWOSCOMPLEMENT> &id2109in_a = id12out_compute;
    const HWOffsetFix<32,0,TWOSCOMPLEMENT> &id2109in_b = id2645out_value;

    id2109out_result = (eq_fixed(id2109in_a,id2109in_b));
  }
  { // Node ID: 2644 (NodeConstantRawBits)
  }
  { // Node ID: 2110 (NodeEqInlined)
    const HWOffsetFix<64,0,UNSIGNED> &id2110in_a = id1105out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id2110in_b = id2644out_value;

    id2110out_result[(getCycle()+1)%2] = (eq_fixed(id2110in_a,id2110in_b));
  }
  { // Node ID: 2643 (NodeConstantRawBits)
  }
  { // Node ID: 2111 (NodeEqInlined)
    const HWOffsetFix<64,0,UNSIGNED> &id2111in_a = id1102out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id2111in_b = id2643out_value;

    id2111out_result[(getCycle()+1)%2] = (eq_fixed(id2111in_a,id2111in_b));
  }
  { // Node ID: 2642 (NodeConstantRawBits)
  }
  { // Node ID: 2112 (NodeEqInlined)
    const HWOffsetFix<64,0,UNSIGNED> &id2112in_a = id1099out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id2112in_b = id2642out_value;

    id2112out_result[(getCycle()+1)%2] = (eq_fixed(id2112in_a,id2112in_b));
  }
  { // Node ID: 2641 (NodeConstantRawBits)
  }
  { // Node ID: 2113 (NodeEqInlined)
    const HWOffsetFix<64,0,UNSIGNED> &id2113in_a = id1096out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id2113in_b = id2641out_value;

    id2113out_result[(getCycle()+1)%2] = (eq_fixed(id2113in_a,id2113in_b));
  }
  { // Node ID: 2640 (NodeConstantRawBits)
  }
  { // Node ID: 2114 (NodeEqInlined)
    const HWOffsetFix<64,0,UNSIGNED> &id2114in_a = id1093out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id2114in_b = id2640out_value;

    id2114out_result[(getCycle()+1)%2] = (eq_fixed(id2114in_a,id2114in_b));
  }
  { // Node ID: 2639 (NodeConstantRawBits)
  }
  { // Node ID: 2115 (NodeEqInlined)
    const HWOffsetFix<64,0,UNSIGNED> &id2115in_a = id1090out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id2115in_b = id2639out_value;

    id2115out_result[(getCycle()+1)%2] = (eq_fixed(id2115in_a,id2115in_b));
  }
  { // Node ID: 2638 (NodeConstantRawBits)
  }
  { // Node ID: 2116 (NodeEqInlined)
    const HWOffsetFix<64,0,UNSIGNED> &id2116in_a = id1087out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id2116in_b = id2638out_value;

    id2116out_result[(getCycle()+1)%2] = (eq_fixed(id2116in_a,id2116in_b));
  }
  { // Node ID: 2637 (NodeConstantRawBits)
  }
  { // Node ID: 2117 (NodeEqInlined)
    const HWOffsetFix<64,0,UNSIGNED> &id2117in_a = id1084out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id2117in_b = id2637out_value;

    id2117out_result[(getCycle()+1)%2] = (eq_fixed(id2117in_a,id2117in_b));
  }
  { // Node ID: 1252 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1252in_sel = id2117out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1252in_option0 = id34out_data;
    const HWOffsetFix<64,0,UNSIGNED> &id1252in_option1 = id16out_data;

    HWOffsetFix<64,0,UNSIGNED> id1252x_1;

    switch((id1252in_sel.getValueAsLong())) {
      case 0l:
        id1252x_1 = id1252in_option0;
        break;
      case 1l:
        id1252x_1 = id1252in_option1;
        break;
      default:
        id1252x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1252out_result[(getCycle()+1)%2] = (id1252x_1);
  }
  { // Node ID: 1255 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1255in_sel = id2116out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1255in_option0 = id1252out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1255in_option1 = id2427out_output[getCycle()%2];

    HWOffsetFix<64,0,UNSIGNED> id1255x_1;

    switch((id1255in_sel.getValueAsLong())) {
      case 0l:
        id1255x_1 = id1255in_option0;
        break;
      case 1l:
        id1255x_1 = id1255in_option1;
        break;
      default:
        id1255x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1255out_result[(getCycle()+1)%2] = (id1255x_1);
  }
  { // Node ID: 1258 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1258in_sel = id2115out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1258in_option0 = id1255out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1258in_option1 = id2428out_output[getCycle()%3];

    HWOffsetFix<64,0,UNSIGNED> id1258x_1;

    switch((id1258in_sel.getValueAsLong())) {
      case 0l:
        id1258x_1 = id1258in_option0;
        break;
      case 1l:
        id1258x_1 = id1258in_option1;
        break;
      default:
        id1258x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1258out_result[(getCycle()+1)%2] = (id1258x_1);
  }
  { // Node ID: 1261 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1261in_sel = id2114out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1261in_option0 = id1258out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1261in_option1 = id2429out_output[getCycle()%4];

    HWOffsetFix<64,0,UNSIGNED> id1261x_1;

    switch((id1261in_sel.getValueAsLong())) {
      case 0l:
        id1261x_1 = id1261in_option0;
        break;
      case 1l:
        id1261x_1 = id1261in_option1;
        break;
      default:
        id1261x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1261out_result[(getCycle()+1)%2] = (id1261x_1);
  }
  { // Node ID: 1264 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1264in_sel = id2113out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1264in_option0 = id1261out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1264in_option1 = id2430out_output[getCycle()%5];

    HWOffsetFix<64,0,UNSIGNED> id1264x_1;

    switch((id1264in_sel.getValueAsLong())) {
      case 0l:
        id1264x_1 = id1264in_option0;
        break;
      case 1l:
        id1264x_1 = id1264in_option1;
        break;
      default:
        id1264x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1264out_result[(getCycle()+1)%2] = (id1264x_1);
  }
  { // Node ID: 1267 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1267in_sel = id2112out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1267in_option0 = id1264out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1267in_option1 = id2431out_output[getCycle()%6];

    HWOffsetFix<64,0,UNSIGNED> id1267x_1;

    switch((id1267in_sel.getValueAsLong())) {
      case 0l:
        id1267x_1 = id1267in_option0;
        break;
      case 1l:
        id1267x_1 = id1267in_option1;
        break;
      default:
        id1267x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1267out_result[(getCycle()+1)%2] = (id1267x_1);
  }
  { // Node ID: 1270 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1270in_sel = id2111out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1270in_option0 = id1267out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1270in_option1 = id2432out_output[getCycle()%7];

    HWOffsetFix<64,0,UNSIGNED> id1270x_1;

    switch((id1270in_sel.getValueAsLong())) {
      case 0l:
        id1270x_1 = id1270in_option0;
        break;
      case 1l:
        id1270x_1 = id1270in_option1;
        break;
      default:
        id1270x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1270out_result[(getCycle()+1)%2] = (id1270x_1);
  }
  { // Node ID: 1273 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1273in_sel = id2110out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1273in_option0 = id1270out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1273in_option1 = id2433out_output[getCycle()%8];

    HWOffsetFix<64,0,UNSIGNED> id1273x_1;

    switch((id1273in_sel.getValueAsLong())) {
      case 0l:
        id1273x_1 = id1273in_option0;
        break;
      case 1l:
        id1273x_1 = id1273in_option1;
        break;
      default:
        id1273x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1273out_result[(getCycle()+1)%2] = (id1273x_1);
  }
  { // Node ID: 2636 (NodeConstantRawBits)
  }
  HWOffsetFix<64,0,UNSIGNED> id1341out_result;

  { // Node ID: 1341 (NodeAdd)
    const HWOffsetFix<64,0,UNSIGNED> &id1341in_a = id1273out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1341in_b = id2636out_value;

    id1341out_result = (add_fixed<64,0,UNSIGNED,TRUNCATE>(id1341in_a,id1341in_b));
  }
  HWOffsetFix<64,0,UNSIGNED> id1342out_result;

  { // Node ID: 1342 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1342in_sel = id2109out_result;
    const HWOffsetFix<64,0,UNSIGNED> &id1342in_option0 = id1273out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1342in_option1 = id1341out_result;

    HWOffsetFix<64,0,UNSIGNED> id1342x_1;

    switch((id1342in_sel.getValueAsLong())) {
      case 0l:
        id1342x_1 = id1342in_option0;
        break;
      case 1l:
        id1342x_1 = id1342in_option1;
        break;
      default:
        id1342x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1342out_result = (id1342x_1);
  }
  HWRawBits<64> id2118out_dataout;

  { // Node ID: 2118 (NodeShift)
    const HWOffsetFix<64,0,UNSIGNED> &id2118in_datain = id11out_data;

    id2118out_dataout = (shift_right_fixed(id2118in_datain,(6l)));
  }
  HWOffsetFix<64,0,UNSIGNED> id1386out_output;

  { // Node ID: 1386 (NodeReinterpret)
    const HWRawBits<64> &id1386in_input = id2118out_dataout;

    id1386out_output = (cast_bits2fixed<64,0,UNSIGNED>(id1386in_input));
  }
  HWOffsetFix<1,0,UNSIGNED> id1387out_o;

  { // Node ID: 1387 (NodeCast)
    const HWOffsetFix<64,0,UNSIGNED> &id1387in_i = id1386out_output;

    id1387out_o = (cast_fixed2fixed<1,0,UNSIGNED,TRUNCATE>(id1387in_i));
  }
  HWOffsetFix<11,0,UNSIGNED> id1389out_o;

  { // Node ID: 1389 (NodeCast)
    const HWOffsetFix<64,0,UNSIGNED> &id1389in_i = id1057out_result[getCycle()%2];

    id1389out_o = (cast_fixed2fixed<11,0,UNSIGNED,TRUNCATE>(id1389in_i));
  }
  if ( (getFillLevel() >= (28l)))
  { // Node ID: 1786 (NodeRAM)
    const bool id1786_inputvalid = !(isFlushingActive() && getFlushLevel() >= (28l));
    const HWOffsetFix<11,0,UNSIGNED> &id1786in_addrA = id1388out_o;
    const HWOffsetFix<64,0,UNSIGNED> &id1786in_dina = id1342out_result;
    const HWOffsetFix<1,0,UNSIGNED> &id1786in_wea = id1387out_o;
    const HWOffsetFix<11,0,UNSIGNED> &id1786in_addrB = id1389out_o;

    long id1786x_1;
    long id1786x_2;
    HWOffsetFix<64,0,UNSIGNED> id1786x_3;

    (id1786x_1) = (id1786in_addrA.getValueAsLong());
    (id1786x_2) = (id1786in_addrB.getValueAsLong());
    switch(((long)((id1786x_2)<(1250l)))) {
      case 0l:
        id1786x_3 = (c_hw_fix_64_0_uns_undef);
        break;
      case 1l:
        id1786x_3 = (id1786sta_ram_store[(id1786x_2)]);
        break;
      default:
        id1786x_3 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1786out_doutb[(getCycle()+2)%3] = (id1786x_3);
    if(((id1786in_wea.getValueAsBool())&id1786_inputvalid)) {
      if(((id1786x_1)<(1250l))) {
        (id1786sta_ram_store[(id1786x_1)]) = id1786in_dina;
      }
      else {
        throw std::runtime_error((format_string_prf_v2_Kernel_7("Run-time exception during simulation: Out of bounds write to NodeRAM (ID: 1786) on port A, ram depth is 1250.")));
      }
    }
  }
  { // Node ID: 2635 (NodeConstantRawBits)
  }
  { // Node ID: 2119 (NodeEqInlined)
    const HWOffsetFix<64,0,UNSIGNED> &id2119in_a = id889out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id2119in_b = id2635out_value;

    id2119out_result[(getCycle()+1)%2] = (eq_fixed(id2119in_a,id2119in_b));
  }
  { // Node ID: 2634 (NodeConstantRawBits)
  }
  { // Node ID: 2120 (NodeEqInlined)
    const HWOffsetFix<64,0,UNSIGNED> &id2120in_a = id886out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id2120in_b = id2634out_value;

    id2120out_result[(getCycle()+1)%2] = (eq_fixed(id2120in_a,id2120in_b));
  }
  { // Node ID: 2633 (NodeConstantRawBits)
  }
  { // Node ID: 2121 (NodeEqInlined)
    const HWOffsetFix<64,0,UNSIGNED> &id2121in_a = id883out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id2121in_b = id2633out_value;

    id2121out_result[(getCycle()+1)%2] = (eq_fixed(id2121in_a,id2121in_b));
  }
  { // Node ID: 2632 (NodeConstantRawBits)
  }
  { // Node ID: 2122 (NodeEqInlined)
    const HWOffsetFix<64,0,UNSIGNED> &id2122in_a = id880out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id2122in_b = id2632out_value;

    id2122out_result[(getCycle()+1)%2] = (eq_fixed(id2122in_a,id2122in_b));
  }
  { // Node ID: 2631 (NodeConstantRawBits)
  }
  { // Node ID: 2123 (NodeEqInlined)
    const HWOffsetFix<64,0,UNSIGNED> &id2123in_a = id877out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id2123in_b = id2631out_value;

    id2123out_result[(getCycle()+1)%2] = (eq_fixed(id2123in_a,id2123in_b));
  }
  { // Node ID: 2630 (NodeConstantRawBits)
  }
  { // Node ID: 2124 (NodeEqInlined)
    const HWOffsetFix<64,0,UNSIGNED> &id2124in_a = id874out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id2124in_b = id2630out_value;

    id2124out_result[(getCycle()+1)%2] = (eq_fixed(id2124in_a,id2124in_b));
  }
  { // Node ID: 2629 (NodeConstantRawBits)
  }
  { // Node ID: 2125 (NodeEqInlined)
    const HWOffsetFix<64,0,UNSIGNED> &id2125in_a = id871out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id2125in_b = id2629out_value;

    id2125out_result[(getCycle()+1)%2] = (eq_fixed(id2125in_a,id2125in_b));
  }
  { // Node ID: 2628 (NodeConstantRawBits)
  }
  { // Node ID: 2126 (NodeEqInlined)
    const HWOffsetFix<64,0,UNSIGNED> &id2126in_a = id868out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id2126in_b = id2628out_value;

    id2126out_result[(getCycle()+1)%2] = (eq_fixed(id2126in_a,id2126in_b));
  }
  { // Node ID: 1060 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1060in_sel = id2126out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1060in_option0 = id673out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1060in_option1 = id624out_result[getCycle()%2];

    HWOffsetFix<64,0,UNSIGNED> id1060x_1;

    switch((id1060in_sel.getValueAsLong())) {
      case 0l:
        id1060x_1 = id1060in_option0;
        break;
      case 1l:
        id1060x_1 = id1060in_option1;
        break;
      default:
        id1060x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1060out_result[(getCycle()+1)%2] = (id1060x_1);
  }
  { // Node ID: 1063 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1063in_sel = id2125out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1063in_option0 = id1060out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1063in_option1 = id2407out_output[getCycle()%2];

    HWOffsetFix<64,0,UNSIGNED> id1063x_1;

    switch((id1063in_sel.getValueAsLong())) {
      case 0l:
        id1063x_1 = id1063in_option0;
        break;
      case 1l:
        id1063x_1 = id1063in_option1;
        break;
      default:
        id1063x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1063out_result[(getCycle()+1)%2] = (id1063x_1);
  }
  { // Node ID: 1066 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1066in_sel = id2124out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1066in_option0 = id1063out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1066in_option1 = id2410out_output[getCycle()%3];

    HWOffsetFix<64,0,UNSIGNED> id1066x_1;

    switch((id1066in_sel.getValueAsLong())) {
      case 0l:
        id1066x_1 = id1066in_option0;
        break;
      case 1l:
        id1066x_1 = id1066in_option1;
        break;
      default:
        id1066x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1066out_result[(getCycle()+1)%2] = (id1066x_1);
  }
  { // Node ID: 1069 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1069in_sel = id2123out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1069in_option0 = id1066out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1069in_option1 = id2413out_output[getCycle()%4];

    HWOffsetFix<64,0,UNSIGNED> id1069x_1;

    switch((id1069in_sel.getValueAsLong())) {
      case 0l:
        id1069x_1 = id1069in_option0;
        break;
      case 1l:
        id1069x_1 = id1069in_option1;
        break;
      default:
        id1069x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1069out_result[(getCycle()+1)%2] = (id1069x_1);
  }
  { // Node ID: 1072 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1072in_sel = id2122out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1072in_option0 = id1069out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1072in_option1 = id2416out_output[getCycle()%5];

    HWOffsetFix<64,0,UNSIGNED> id1072x_1;

    switch((id1072in_sel.getValueAsLong())) {
      case 0l:
        id1072x_1 = id1072in_option0;
        break;
      case 1l:
        id1072x_1 = id1072in_option1;
        break;
      default:
        id1072x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1072out_result[(getCycle()+1)%2] = (id1072x_1);
  }
  { // Node ID: 1075 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1075in_sel = id2121out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1075in_option0 = id1072out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1075in_option1 = id2419out_output[getCycle()%6];

    HWOffsetFix<64,0,UNSIGNED> id1075x_1;

    switch((id1075in_sel.getValueAsLong())) {
      case 0l:
        id1075x_1 = id1075in_option0;
        break;
      case 1l:
        id1075x_1 = id1075in_option1;
        break;
      default:
        id1075x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1075out_result[(getCycle()+1)%2] = (id1075x_1);
  }
  { // Node ID: 1078 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1078in_sel = id2120out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1078in_option0 = id1075out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1078in_option1 = id2422out_output[getCycle()%7];

    HWOffsetFix<64,0,UNSIGNED> id1078x_1;

    switch((id1078in_sel.getValueAsLong())) {
      case 0l:
        id1078x_1 = id1078in_option0;
        break;
      case 1l:
        id1078x_1 = id1078in_option1;
        break;
      default:
        id1078x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1078out_result[(getCycle()+1)%2] = (id1078x_1);
  }
  { // Node ID: 1081 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1081in_sel = id2119out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1081in_option0 = id1078out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1081in_option1 = id2425out_output[getCycle()%8];

    HWOffsetFix<64,0,UNSIGNED> id1081x_1;

    switch((id1081in_sel.getValueAsLong())) {
      case 0l:
        id1081x_1 = id1081in_option0;
        break;
      case 1l:
        id1081x_1 = id1081in_option1;
        break;
      default:
        id1081x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1081out_result[(getCycle()+1)%2] = (id1081x_1);
  }
  HWOffsetFix<11,0,UNSIGNED> id1394out_o;

  { // Node ID: 1394 (NodeCast)
    const HWOffsetFix<64,0,UNSIGNED> &id1394in_i = id1081out_result[getCycle()%2];

    id1394out_o = (cast_fixed2fixed<11,0,UNSIGNED,TRUNCATE>(id1394in_i));
  }
  { // Node ID: 2627 (NodeConstantRawBits)
  }
  HWOffsetFix<1,0,UNSIGNED> id2127out_result;

  { // Node ID: 2127 (NodeEqInlined)
    const HWOffsetFix<32,0,TWOSCOMPLEMENT> &id2127in_a = id12out_compute;
    const HWOffsetFix<32,0,TWOSCOMPLEMENT> &id2127in_b = id2627out_value;

    id2127out_result = (eq_fixed(id2127in_a,id2127in_b));
  }
  { // Node ID: 2626 (NodeConstantRawBits)
  }
  { // Node ID: 2128 (NodeEqInlined)
    const HWOffsetFix<64,0,UNSIGNED> &id2128in_a = id1105out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id2128in_b = id2626out_value;

    id2128out_result[(getCycle()+1)%2] = (eq_fixed(id2128in_a,id2128in_b));
  }
  { // Node ID: 2625 (NodeConstantRawBits)
  }
  { // Node ID: 2129 (NodeEqInlined)
    const HWOffsetFix<64,0,UNSIGNED> &id2129in_a = id1102out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id2129in_b = id2625out_value;

    id2129out_result[(getCycle()+1)%2] = (eq_fixed(id2129in_a,id2129in_b));
  }
  { // Node ID: 2624 (NodeConstantRawBits)
  }
  { // Node ID: 2130 (NodeEqInlined)
    const HWOffsetFix<64,0,UNSIGNED> &id2130in_a = id1099out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id2130in_b = id2624out_value;

    id2130out_result[(getCycle()+1)%2] = (eq_fixed(id2130in_a,id2130in_b));
  }
  { // Node ID: 2623 (NodeConstantRawBits)
  }
  { // Node ID: 2131 (NodeEqInlined)
    const HWOffsetFix<64,0,UNSIGNED> &id2131in_a = id1096out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id2131in_b = id2623out_value;

    id2131out_result[(getCycle()+1)%2] = (eq_fixed(id2131in_a,id2131in_b));
  }
  { // Node ID: 2622 (NodeConstantRawBits)
  }
  { // Node ID: 2132 (NodeEqInlined)
    const HWOffsetFix<64,0,UNSIGNED> &id2132in_a = id1093out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id2132in_b = id2622out_value;

    id2132out_result[(getCycle()+1)%2] = (eq_fixed(id2132in_a,id2132in_b));
  }
  { // Node ID: 2621 (NodeConstantRawBits)
  }
  { // Node ID: 2133 (NodeEqInlined)
    const HWOffsetFix<64,0,UNSIGNED> &id2133in_a = id1090out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id2133in_b = id2621out_value;

    id2133out_result[(getCycle()+1)%2] = (eq_fixed(id2133in_a,id2133in_b));
  }
  { // Node ID: 2620 (NodeConstantRawBits)
  }
  { // Node ID: 2134 (NodeEqInlined)
    const HWOffsetFix<64,0,UNSIGNED> &id2134in_a = id1087out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id2134in_b = id2620out_value;

    id2134out_result[(getCycle()+1)%2] = (eq_fixed(id2134in_a,id2134in_b));
  }
  { // Node ID: 2619 (NodeConstantRawBits)
  }
  { // Node ID: 2135 (NodeEqInlined)
    const HWOffsetFix<64,0,UNSIGNED> &id2135in_a = id1084out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id2135in_b = id2619out_value;

    id2135out_result[(getCycle()+1)%2] = (eq_fixed(id2135in_a,id2135in_b));
  }
  { // Node ID: 1276 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1276in_sel = id2135out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1276in_option0 = id37out_data;
    const HWOffsetFix<64,0,UNSIGNED> &id1276in_option1 = id16out_data;

    HWOffsetFix<64,0,UNSIGNED> id1276x_1;

    switch((id1276in_sel.getValueAsLong())) {
      case 0l:
        id1276x_1 = id1276in_option0;
        break;
      case 1l:
        id1276x_1 = id1276in_option1;
        break;
      default:
        id1276x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1276out_result[(getCycle()+1)%2] = (id1276x_1);
  }
  { // Node ID: 1279 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1279in_sel = id2134out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1279in_option0 = id1276out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1279in_option1 = id2427out_output[getCycle()%2];

    HWOffsetFix<64,0,UNSIGNED> id1279x_1;

    switch((id1279in_sel.getValueAsLong())) {
      case 0l:
        id1279x_1 = id1279in_option0;
        break;
      case 1l:
        id1279x_1 = id1279in_option1;
        break;
      default:
        id1279x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1279out_result[(getCycle()+1)%2] = (id1279x_1);
  }
  { // Node ID: 1282 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1282in_sel = id2133out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1282in_option0 = id1279out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1282in_option1 = id2428out_output[getCycle()%3];

    HWOffsetFix<64,0,UNSIGNED> id1282x_1;

    switch((id1282in_sel.getValueAsLong())) {
      case 0l:
        id1282x_1 = id1282in_option0;
        break;
      case 1l:
        id1282x_1 = id1282in_option1;
        break;
      default:
        id1282x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1282out_result[(getCycle()+1)%2] = (id1282x_1);
  }
  { // Node ID: 1285 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1285in_sel = id2132out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1285in_option0 = id1282out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1285in_option1 = id2429out_output[getCycle()%4];

    HWOffsetFix<64,0,UNSIGNED> id1285x_1;

    switch((id1285in_sel.getValueAsLong())) {
      case 0l:
        id1285x_1 = id1285in_option0;
        break;
      case 1l:
        id1285x_1 = id1285in_option1;
        break;
      default:
        id1285x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1285out_result[(getCycle()+1)%2] = (id1285x_1);
  }
  { // Node ID: 1288 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1288in_sel = id2131out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1288in_option0 = id1285out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1288in_option1 = id2430out_output[getCycle()%5];

    HWOffsetFix<64,0,UNSIGNED> id1288x_1;

    switch((id1288in_sel.getValueAsLong())) {
      case 0l:
        id1288x_1 = id1288in_option0;
        break;
      case 1l:
        id1288x_1 = id1288in_option1;
        break;
      default:
        id1288x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1288out_result[(getCycle()+1)%2] = (id1288x_1);
  }
  { // Node ID: 1291 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1291in_sel = id2130out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1291in_option0 = id1288out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1291in_option1 = id2431out_output[getCycle()%6];

    HWOffsetFix<64,0,UNSIGNED> id1291x_1;

    switch((id1291in_sel.getValueAsLong())) {
      case 0l:
        id1291x_1 = id1291in_option0;
        break;
      case 1l:
        id1291x_1 = id1291in_option1;
        break;
      default:
        id1291x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1291out_result[(getCycle()+1)%2] = (id1291x_1);
  }
  { // Node ID: 1294 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1294in_sel = id2129out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1294in_option0 = id1291out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1294in_option1 = id2432out_output[getCycle()%7];

    HWOffsetFix<64,0,UNSIGNED> id1294x_1;

    switch((id1294in_sel.getValueAsLong())) {
      case 0l:
        id1294x_1 = id1294in_option0;
        break;
      case 1l:
        id1294x_1 = id1294in_option1;
        break;
      default:
        id1294x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1294out_result[(getCycle()+1)%2] = (id1294x_1);
  }
  { // Node ID: 1297 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1297in_sel = id2128out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1297in_option0 = id1294out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1297in_option1 = id2433out_output[getCycle()%8];

    HWOffsetFix<64,0,UNSIGNED> id1297x_1;

    switch((id1297in_sel.getValueAsLong())) {
      case 0l:
        id1297x_1 = id1297in_option0;
        break;
      case 1l:
        id1297x_1 = id1297in_option1;
        break;
      default:
        id1297x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1297out_result[(getCycle()+1)%2] = (id1297x_1);
  }
  { // Node ID: 2618 (NodeConstantRawBits)
  }
  HWOffsetFix<64,0,UNSIGNED> id1346out_result;

  { // Node ID: 1346 (NodeAdd)
    const HWOffsetFix<64,0,UNSIGNED> &id1346in_a = id1297out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1346in_b = id2618out_value;

    id1346out_result = (add_fixed<64,0,UNSIGNED,TRUNCATE>(id1346in_a,id1346in_b));
  }
  HWOffsetFix<64,0,UNSIGNED> id1347out_result;

  { // Node ID: 1347 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1347in_sel = id2127out_result;
    const HWOffsetFix<64,0,UNSIGNED> &id1347in_option0 = id1297out_result[getCycle()%2];
    const HWOffsetFix<64,0,UNSIGNED> &id1347in_option1 = id1346out_result;

    HWOffsetFix<64,0,UNSIGNED> id1347x_1;

    switch((id1347in_sel.getValueAsLong())) {
      case 0l:
        id1347x_1 = id1347in_option0;
        break;
      case 1l:
        id1347x_1 = id1347in_option1;
        break;
      default:
        id1347x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1347out_result = (id1347x_1);
  }
  HWRawBits<64> id2136out_dataout;

  { // Node ID: 2136 (NodeShift)
    const HWOffsetFix<64,0,UNSIGNED> &id2136in_datain = id11out_data;

    id2136out_dataout = (shift_right_fixed(id2136in_datain,(7l)));
  }
  HWOffsetFix<64,0,UNSIGNED> id1392out_output;

  { // Node ID: 1392 (NodeReinterpret)
    const HWRawBits<64> &id1392in_input = id2136out_dataout;

    id1392out_output = (cast_bits2fixed<64,0,UNSIGNED>(id1392in_input));
  }
  HWOffsetFix<1,0,UNSIGNED> id1393out_o;

  { // Node ID: 1393 (NodeCast)
    const HWOffsetFix<64,0,UNSIGNED> &id1393in_i = id1392out_output;

    id1393out_o = (cast_fixed2fixed<1,0,UNSIGNED,TRUNCATE>(id1393in_i));
  }
  HWOffsetFix<11,0,UNSIGNED> id1395out_o;

  { // Node ID: 1395 (NodeCast)
    const HWOffsetFix<64,0,UNSIGNED> &id1395in_i = id1081out_result[getCycle()%2];

    id1395out_o = (cast_fixed2fixed<11,0,UNSIGNED,TRUNCATE>(id1395in_i));
  }
  if ( (getFillLevel() >= (28l)))
  { // Node ID: 1787 (NodeRAM)
    const bool id1787_inputvalid = !(isFlushingActive() && getFlushLevel() >= (28l));
    const HWOffsetFix<11,0,UNSIGNED> &id1787in_addrA = id1394out_o;
    const HWOffsetFix<64,0,UNSIGNED> &id1787in_dina = id1347out_result;
    const HWOffsetFix<1,0,UNSIGNED> &id1787in_wea = id1393out_o;
    const HWOffsetFix<11,0,UNSIGNED> &id1787in_addrB = id1395out_o;

    long id1787x_1;
    long id1787x_2;
    HWOffsetFix<64,0,UNSIGNED> id1787x_3;

    (id1787x_1) = (id1787in_addrA.getValueAsLong());
    (id1787x_2) = (id1787in_addrB.getValueAsLong());
    switch(((long)((id1787x_2)<(1250l)))) {
      case 0l:
        id1787x_3 = (c_hw_fix_64_0_uns_undef);
        break;
      case 1l:
        id1787x_3 = (id1787sta_ram_store[(id1787x_2)]);
        break;
      default:
        id1787x_3 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1787out_doutb[(getCycle()+2)%3] = (id1787x_3);
    if(((id1787in_wea.getValueAsBool())&id1787_inputvalid)) {
      if(((id1787x_1)<(1250l))) {
        (id1787sta_ram_store[(id1787x_1)]) = id1787in_dina;
      }
      else {
        throw std::runtime_error((format_string_prf_v2_Kernel_8("Run-time exception during simulation: Out of bounds write to NodeRAM (ID: 1787) on port A, ram depth is 1250.")));
      }
    }
  }
  HWOffsetFix<64,0,UNSIGNED> id1439out_result;

  { // Node ID: 1439 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1439in_sel = id2536out_output[getCycle()%13];
    const HWOffsetFix<64,0,UNSIGNED> &id1439in_option0 = id1786out_doutb[getCycle()%3];
    const HWOffsetFix<64,0,UNSIGNED> &id1439in_option1 = id1787out_doutb[getCycle()%3];

    HWOffsetFix<64,0,UNSIGNED> id1439x_1;

    switch((id1439in_sel.getValueAsLong())) {
      case 0l:
        id1439x_1 = id1439in_option0;
        break;
      case 1l:
        id1439x_1 = id1439in_option1;
        break;
      default:
        id1439x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1439out_result = (id1439x_1);
  }
  HWOffsetFix<64,0,UNSIGNED> id1449out_result;

  { // Node ID: 1449 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1449in_sel = id2537out_output[getCycle()%13];
    const HWOffsetFix<64,0,UNSIGNED> &id1449in_option0 = id1434out_result;
    const HWOffsetFix<64,0,UNSIGNED> &id1449in_option1 = id1439out_result;

    HWOffsetFix<64,0,UNSIGNED> id1449x_1;

    switch((id1449in_sel.getValueAsLong())) {
      case 0l:
        id1449x_1 = id1449in_option0;
        break;
      case 1l:
        id1449x_1 = id1449in_option1;
        break;
      default:
        id1449x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1449out_result = (id1449x_1);
  }
  HWOffsetFix<64,0,UNSIGNED> id1454out_result;

  { // Node ID: 1454 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1454in_sel = id2538out_output[getCycle()%13];
    const HWOffsetFix<64,0,UNSIGNED> &id1454in_option0 = id1444out_result;
    const HWOffsetFix<64,0,UNSIGNED> &id1454in_option1 = id1449out_result;

    HWOffsetFix<64,0,UNSIGNED> id1454x_1;

    switch((id1454in_sel.getValueAsLong())) {
      case 0l:
        id1454x_1 = id1454in_option0;
        break;
      case 1l:
        id1454x_1 = id1454in_option1;
        break;
      default:
        id1454x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1454out_result = (id1454x_1);
  }
  { // Node ID: 2617 (NodeConstantRawBits)
  }
  HWOffsetFix<64,0,UNSIGNED> id1703out_result;

  { // Node ID: 1703 (NodeAdd)
    const HWOffsetFix<64,0,UNSIGNED> &id1703in_a = id1454out_result;
    const HWOffsetFix<64,0,UNSIGNED> &id1703in_b = id2617out_value;

    id1703out_result = (add_fixed<64,0,UNSIGNED,TRUNCATE>(id1703in_a,id1703in_b));
  }
  HWOffsetFix<64,0,UNSIGNED> id1704out_result;

  { // Node ID: 1704 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1704in_sel = id1801out_result;
    const HWOffsetFix<64,0,UNSIGNED> &id1704in_option0 = id1454out_result;
    const HWOffsetFix<64,0,UNSIGNED> &id1704in_option1 = id1703out_result;

    HWOffsetFix<64,0,UNSIGNED> id1704x_1;

    switch((id1704in_sel.getValueAsLong())) {
      case 0l:
        id1704x_1 = id1704in_option0;
        break;
      case 1l:
        id1704x_1 = id1704in_option1;
        break;
      default:
        id1704x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1704out_result = (id1704x_1);
  }
  if ( (getFillLevel() >= (30l)) && (getFlushLevel() < (30l)|| !isFlushingActive() ))
  { // Node ID: 1744 (NodeOutput)
    const HWOffsetFix<1,0,UNSIGNED> &id1744in_output_control = id1742out_result;
    const HWOffsetFix<64,0,UNSIGNED> &id1744in_data = id1704out_result;

    bool id1744x_1;

    (id1744x_1) = ((id1744in_output_control.getValueAsBool())&(!(((getFlushLevel())>=(30l))&(isFlushingActive()))));
    if((id1744x_1)) {
      writeOutput(m_o_0_0, id1744in_data);
    }
  }
  { // Node ID: 1746 (NodeInputMappedReg)
  }
  HWOffsetFix<1,0,UNSIGNED> id1747out_result;

  { // Node ID: 1747 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id1747in_a = id1746out_io_o_0_1_force_disabled;

    id1747out_result = (not_fixed(id1747in_a));
  }
  { // Node ID: 2616 (NodeConstantRawBits)
  }
  HWOffsetFix<1,0,UNSIGNED> id2137out_result;

  { // Node ID: 2137 (NodeEqInlined)
    const HWOffsetFix<32,0,TWOSCOMPLEMENT> &id2137in_a = id12out_compute;
    const HWOffsetFix<32,0,TWOSCOMPLEMENT> &id2137in_b = id2616out_value;

    id2137out_result = (eq_fixed(id2137in_a,id2137in_b));
  }
  HWOffsetFix<64,2,UNSIGNED> id2138out_output;

  { // Node ID: 2138 (NodeReinterpret)
    const HWOffsetFix<64,0,UNSIGNED> &id2138in_input = id721out_o;

    id2138out_output = (cast_bits2fixed<64,2,UNSIGNED>((cast_fixed2bits(id2138in_input))));
  }
  HWOffsetFix<64,0,UNSIGNED> id2139out_o;

  { // Node ID: 2139 (NodeCast)
    const HWOffsetFix<64,2,UNSIGNED> &id2139in_i = id2138out_output;

    id2139out_o = (cast_fixed2fixed<64,0,UNSIGNED,TRUNCATE>(id2139in_i));
  }
  HWOffsetFix<64,0,UNSIGNED> id1401out_result;

  { // Node ID: 1401 (NodeAdd)
    const HWOffsetFix<64,0,UNSIGNED> &id1401in_a = id2139out_o;
    const HWOffsetFix<64,0,UNSIGNED> &id1401in_b = id805out_o;

    id1401out_result = (add_fixed<64,0,UNSIGNED,TRUNCATE>(id1401in_a,id1401in_b));
  }
  HWRawBits<64> id2140out_dataout;

  { // Node ID: 2140 (NodeShift)
    const HWOffsetFix<64,0,UNSIGNED> &id2140in_datain = id1401out_result;

    id2140out_dataout = (shift_right_fixed(id2140in_datain,(2l)));
  }
  HWOffsetFix<64,0,UNSIGNED> id1487out_output;

  { // Node ID: 1487 (NodeReinterpret)
    const HWRawBits<64> &id1487in_input = id2140out_dataout;

    id1487out_output = (cast_bits2fixed<64,0,UNSIGNED>(id1487in_input));
  }
  HWOffsetFix<1,0,UNSIGNED> id1488out_o;

  { // Node ID: 1488 (NodeCast)
    const HWOffsetFix<64,0,UNSIGNED> &id1488in_i = id1487out_output;

    id1488out_o = (cast_fixed2fixed<1,0,UNSIGNED,TRUNCATE>(id1488in_i));
  }
  { // Node ID: 2545 (NodeFIFO)
    const HWOffsetFix<1,0,UNSIGNED> &id2545in_input = id1488out_o;

    id2545out_output[(getCycle()+11)%12] = id2545in_input;
  }
  HWRawBits<64> id2141out_dataout;

  { // Node ID: 2141 (NodeShift)
    const HWOffsetFix<64,0,UNSIGNED> &id2141in_datain = id1401out_result;

    id2141out_dataout = (shift_right_fixed(id2141in_datain,(1l)));
  }
  HWOffsetFix<64,0,UNSIGNED> id1477out_output;

  { // Node ID: 1477 (NodeReinterpret)
    const HWRawBits<64> &id1477in_input = id2141out_dataout;

    id1477out_output = (cast_bits2fixed<64,0,UNSIGNED>(id1477in_input));
  }
  HWOffsetFix<1,0,UNSIGNED> id1478out_o;

  { // Node ID: 1478 (NodeCast)
    const HWOffsetFix<64,0,UNSIGNED> &id1478in_i = id1477out_output;

    id1478out_o = (cast_fixed2fixed<1,0,UNSIGNED,TRUNCATE>(id1478in_i));
  }
  { // Node ID: 2541 (NodeFIFO)
    const HWOffsetFix<1,0,UNSIGNED> &id2541in_input = id1478out_o;

    id2541out_output[(getCycle()+11)%12] = id2541in_input;
  }
  HWRawBits<64> id2213out_output;

  { // Node ID: 2213 (NodeReinterpret)
    const HWOffsetFix<64,0,UNSIGNED> &id2213in_input = id1401out_result;

    id2213out_output = (cast_fixed2bits(id2213in_input));
  }
  HWOffsetFix<64,0,UNSIGNED> id1457out_output;

  { // Node ID: 1457 (NodeReinterpret)
    const HWRawBits<64> &id1457in_input = id2213out_output;

    id1457out_output = (cast_bits2fixed<64,0,UNSIGNED>(id1457in_input));
  }
  HWOffsetFix<1,0,UNSIGNED> id1458out_o;

  { // Node ID: 1458 (NodeCast)
    const HWOffsetFix<64,0,UNSIGNED> &id1458in_i = id1457out_output;

    id1458out_o = (cast_fixed2fixed<1,0,UNSIGNED,TRUNCATE>(id1458in_i));
  }
  { // Node ID: 2539 (NodeFIFO)
    const HWOffsetFix<1,0,UNSIGNED> &id2539in_input = id1458out_o;

    id2539out_output[(getCycle()+11)%12] = id2539in_input;
  }
  HWOffsetFix<64,0,UNSIGNED> id1459out_result;

  { // Node ID: 1459 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1459in_sel = id2539out_output[getCycle()%12];
    const HWOffsetFix<64,0,UNSIGNED> &id1459in_option0 = id1780out_doutb[getCycle()%3];
    const HWOffsetFix<64,0,UNSIGNED> &id1459in_option1 = id1781out_doutb[getCycle()%3];

    HWOffsetFix<64,0,UNSIGNED> id1459x_1;

    switch((id1459in_sel.getValueAsLong())) {
      case 0l:
        id1459x_1 = id1459in_option0;
        break;
      case 1l:
        id1459x_1 = id1459in_option1;
        break;
      default:
        id1459x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1459out_result = (id1459x_1);
  }
  HWRawBits<64> id2214out_output;

  { // Node ID: 2214 (NodeReinterpret)
    const HWOffsetFix<64,0,UNSIGNED> &id2214in_input = id1401out_result;

    id2214out_output = (cast_fixed2bits(id2214in_input));
  }
  HWOffsetFix<64,0,UNSIGNED> id1462out_output;

  { // Node ID: 1462 (NodeReinterpret)
    const HWRawBits<64> &id1462in_input = id2214out_output;

    id1462out_output = (cast_bits2fixed<64,0,UNSIGNED>(id1462in_input));
  }
  HWOffsetFix<1,0,UNSIGNED> id1463out_o;

  { // Node ID: 1463 (NodeCast)
    const HWOffsetFix<64,0,UNSIGNED> &id1463in_i = id1462out_output;

    id1463out_o = (cast_fixed2fixed<1,0,UNSIGNED,TRUNCATE>(id1463in_i));
  }
  { // Node ID: 2540 (NodeFIFO)
    const HWOffsetFix<1,0,UNSIGNED> &id2540in_input = id1463out_o;

    id2540out_output[(getCycle()+11)%12] = id2540in_input;
  }
  HWOffsetFix<64,0,UNSIGNED> id1464out_result;

  { // Node ID: 1464 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1464in_sel = id2540out_output[getCycle()%12];
    const HWOffsetFix<64,0,UNSIGNED> &id1464in_option0 = id1782out_doutb[getCycle()%3];
    const HWOffsetFix<64,0,UNSIGNED> &id1464in_option1 = id1783out_doutb[getCycle()%3];

    HWOffsetFix<64,0,UNSIGNED> id1464x_1;

    switch((id1464in_sel.getValueAsLong())) {
      case 0l:
        id1464x_1 = id1464in_option0;
        break;
      case 1l:
        id1464x_1 = id1464in_option1;
        break;
      default:
        id1464x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1464out_result = (id1464x_1);
  }
  HWOffsetFix<64,0,UNSIGNED> id1479out_result;

  { // Node ID: 1479 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1479in_sel = id2541out_output[getCycle()%12];
    const HWOffsetFix<64,0,UNSIGNED> &id1479in_option0 = id1459out_result;
    const HWOffsetFix<64,0,UNSIGNED> &id1479in_option1 = id1464out_result;

    HWOffsetFix<64,0,UNSIGNED> id1479x_1;

    switch((id1479in_sel.getValueAsLong())) {
      case 0l:
        id1479x_1 = id1479in_option0;
        break;
      case 1l:
        id1479x_1 = id1479in_option1;
        break;
      default:
        id1479x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1479out_result = (id1479x_1);
  }
  HWRawBits<64> id2144out_dataout;

  { // Node ID: 2144 (NodeShift)
    const HWOffsetFix<64,0,UNSIGNED> &id2144in_datain = id1401out_result;

    id2144out_dataout = (shift_right_fixed(id2144in_datain,(1l)));
  }
  HWOffsetFix<64,0,UNSIGNED> id1482out_output;

  { // Node ID: 1482 (NodeReinterpret)
    const HWRawBits<64> &id1482in_input = id2144out_dataout;

    id1482out_output = (cast_bits2fixed<64,0,UNSIGNED>(id1482in_input));
  }
  HWOffsetFix<1,0,UNSIGNED> id1483out_o;

  { // Node ID: 1483 (NodeCast)
    const HWOffsetFix<64,0,UNSIGNED> &id1483in_i = id1482out_output;

    id1483out_o = (cast_fixed2fixed<1,0,UNSIGNED,TRUNCATE>(id1483in_i));
  }
  { // Node ID: 2544 (NodeFIFO)
    const HWOffsetFix<1,0,UNSIGNED> &id2544in_input = id1483out_o;

    id2544out_output[(getCycle()+11)%12] = id2544in_input;
  }
  HWRawBits<64> id2215out_output;

  { // Node ID: 2215 (NodeReinterpret)
    const HWOffsetFix<64,0,UNSIGNED> &id2215in_input = id1401out_result;

    id2215out_output = (cast_fixed2bits(id2215in_input));
  }
  HWOffsetFix<64,0,UNSIGNED> id1467out_output;

  { // Node ID: 1467 (NodeReinterpret)
    const HWRawBits<64> &id1467in_input = id2215out_output;

    id1467out_output = (cast_bits2fixed<64,0,UNSIGNED>(id1467in_input));
  }
  HWOffsetFix<1,0,UNSIGNED> id1468out_o;

  { // Node ID: 1468 (NodeCast)
    const HWOffsetFix<64,0,UNSIGNED> &id1468in_i = id1467out_output;

    id1468out_o = (cast_fixed2fixed<1,0,UNSIGNED,TRUNCATE>(id1468in_i));
  }
  { // Node ID: 2542 (NodeFIFO)
    const HWOffsetFix<1,0,UNSIGNED> &id2542in_input = id1468out_o;

    id2542out_output[(getCycle()+11)%12] = id2542in_input;
  }
  HWOffsetFix<64,0,UNSIGNED> id1469out_result;

  { // Node ID: 1469 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1469in_sel = id2542out_output[getCycle()%12];
    const HWOffsetFix<64,0,UNSIGNED> &id1469in_option0 = id1784out_doutb[getCycle()%3];
    const HWOffsetFix<64,0,UNSIGNED> &id1469in_option1 = id1785out_doutb[getCycle()%3];

    HWOffsetFix<64,0,UNSIGNED> id1469x_1;

    switch((id1469in_sel.getValueAsLong())) {
      case 0l:
        id1469x_1 = id1469in_option0;
        break;
      case 1l:
        id1469x_1 = id1469in_option1;
        break;
      default:
        id1469x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1469out_result = (id1469x_1);
  }
  HWRawBits<64> id2216out_output;

  { // Node ID: 2216 (NodeReinterpret)
    const HWOffsetFix<64,0,UNSIGNED> &id2216in_input = id1401out_result;

    id2216out_output = (cast_fixed2bits(id2216in_input));
  }
  HWOffsetFix<64,0,UNSIGNED> id1472out_output;

  { // Node ID: 1472 (NodeReinterpret)
    const HWRawBits<64> &id1472in_input = id2216out_output;

    id1472out_output = (cast_bits2fixed<64,0,UNSIGNED>(id1472in_input));
  }
  HWOffsetFix<1,0,UNSIGNED> id1473out_o;

  { // Node ID: 1473 (NodeCast)
    const HWOffsetFix<64,0,UNSIGNED> &id1473in_i = id1472out_output;

    id1473out_o = (cast_fixed2fixed<1,0,UNSIGNED,TRUNCATE>(id1473in_i));
  }
  { // Node ID: 2543 (NodeFIFO)
    const HWOffsetFix<1,0,UNSIGNED> &id2543in_input = id1473out_o;

    id2543out_output[(getCycle()+11)%12] = id2543in_input;
  }
  HWOffsetFix<64,0,UNSIGNED> id1474out_result;

  { // Node ID: 1474 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1474in_sel = id2543out_output[getCycle()%12];
    const HWOffsetFix<64,0,UNSIGNED> &id1474in_option0 = id1786out_doutb[getCycle()%3];
    const HWOffsetFix<64,0,UNSIGNED> &id1474in_option1 = id1787out_doutb[getCycle()%3];

    HWOffsetFix<64,0,UNSIGNED> id1474x_1;

    switch((id1474in_sel.getValueAsLong())) {
      case 0l:
        id1474x_1 = id1474in_option0;
        break;
      case 1l:
        id1474x_1 = id1474in_option1;
        break;
      default:
        id1474x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1474out_result = (id1474x_1);
  }
  HWOffsetFix<64,0,UNSIGNED> id1484out_result;

  { // Node ID: 1484 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1484in_sel = id2544out_output[getCycle()%12];
    const HWOffsetFix<64,0,UNSIGNED> &id1484in_option0 = id1469out_result;
    const HWOffsetFix<64,0,UNSIGNED> &id1484in_option1 = id1474out_result;

    HWOffsetFix<64,0,UNSIGNED> id1484x_1;

    switch((id1484in_sel.getValueAsLong())) {
      case 0l:
        id1484x_1 = id1484in_option0;
        break;
      case 1l:
        id1484x_1 = id1484in_option1;
        break;
      default:
        id1484x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1484out_result = (id1484x_1);
  }
  HWOffsetFix<64,0,UNSIGNED> id1489out_result;

  { // Node ID: 1489 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1489in_sel = id2545out_output[getCycle()%12];
    const HWOffsetFix<64,0,UNSIGNED> &id1489in_option0 = id1479out_result;
    const HWOffsetFix<64,0,UNSIGNED> &id1489in_option1 = id1484out_result;

    HWOffsetFix<64,0,UNSIGNED> id1489x_1;

    switch((id1489in_sel.getValueAsLong())) {
      case 0l:
        id1489x_1 = id1489in_option0;
        break;
      case 1l:
        id1489x_1 = id1489in_option1;
        break;
      default:
        id1489x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1489out_result = (id1489x_1);
  }
  { // Node ID: 2615 (NodeConstantRawBits)
  }
  HWOffsetFix<64,0,UNSIGNED> id1708out_result;

  { // Node ID: 1708 (NodeAdd)
    const HWOffsetFix<64,0,UNSIGNED> &id1708in_a = id1489out_result;
    const HWOffsetFix<64,0,UNSIGNED> &id1708in_b = id2615out_value;

    id1708out_result = (add_fixed<64,0,UNSIGNED,TRUNCATE>(id1708in_a,id1708in_b));
  }
  HWOffsetFix<64,0,UNSIGNED> id1709out_result;

  { // Node ID: 1709 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1709in_sel = id2137out_result;
    const HWOffsetFix<64,0,UNSIGNED> &id1709in_option0 = id1489out_result;
    const HWOffsetFix<64,0,UNSIGNED> &id1709in_option1 = id1708out_result;

    HWOffsetFix<64,0,UNSIGNED> id1709x_1;

    switch((id1709in_sel.getValueAsLong())) {
      case 0l:
        id1709x_1 = id1709in_option0;
        break;
      case 1l:
        id1709x_1 = id1709in_option1;
        break;
      default:
        id1709x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1709out_result = (id1709x_1);
  }
  if ( (getFillLevel() >= (30l)) && (getFlushLevel() < (30l)|| !isFlushingActive() ))
  { // Node ID: 1749 (NodeOutput)
    const HWOffsetFix<1,0,UNSIGNED> &id1749in_output_control = id1747out_result;
    const HWOffsetFix<64,0,UNSIGNED> &id1749in_data = id1709out_result;

    bool id1749x_1;

    (id1749x_1) = ((id1749in_output_control.getValueAsBool())&(!(((getFlushLevel())>=(30l))&(isFlushingActive()))));
    if((id1749x_1)) {
      writeOutput(m_o_0_1, id1749in_data);
    }
  }
  { // Node ID: 1751 (NodeInputMappedReg)
  }
  HWOffsetFix<1,0,UNSIGNED> id1752out_result;

  { // Node ID: 1752 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id1752in_a = id1751out_io_o_0_2_force_disabled;

    id1752out_result = (not_fixed(id1752in_a));
  }
  { // Node ID: 2614 (NodeConstantRawBits)
  }
  HWOffsetFix<1,0,UNSIGNED> id2147out_result;

  { // Node ID: 2147 (NodeEqInlined)
    const HWOffsetFix<32,0,TWOSCOMPLEMENT> &id2147in_a = id12out_compute;
    const HWOffsetFix<32,0,TWOSCOMPLEMENT> &id2147in_b = id2614out_value;

    id2147out_result = (eq_fixed(id2147in_a,id2147in_b));
  }
  HWOffsetFix<64,2,UNSIGNED> id2148out_output;

  { // Node ID: 2148 (NodeReinterpret)
    const HWOffsetFix<64,0,UNSIGNED> &id2148in_input = id725out_o;

    id2148out_output = (cast_bits2fixed<64,2,UNSIGNED>((cast_fixed2bits(id2148in_input))));
  }
  HWOffsetFix<64,0,UNSIGNED> id2149out_o;

  { // Node ID: 2149 (NodeCast)
    const HWOffsetFix<64,2,UNSIGNED> &id2149in_i = id2148out_output;

    id2149out_o = (cast_fixed2fixed<64,0,UNSIGNED,TRUNCATE>(id2149in_i));
  }
  HWOffsetFix<64,0,UNSIGNED> id1404out_result;

  { // Node ID: 1404 (NodeAdd)
    const HWOffsetFix<64,0,UNSIGNED> &id1404in_a = id2149out_o;
    const HWOffsetFix<64,0,UNSIGNED> &id1404in_b = id815out_o;

    id1404out_result = (add_fixed<64,0,UNSIGNED,TRUNCATE>(id1404in_a,id1404in_b));
  }
  HWRawBits<64> id2150out_dataout;

  { // Node ID: 2150 (NodeShift)
    const HWOffsetFix<64,0,UNSIGNED> &id2150in_datain = id1404out_result;

    id2150out_dataout = (shift_right_fixed(id2150in_datain,(2l)));
  }
  HWOffsetFix<64,0,UNSIGNED> id1522out_output;

  { // Node ID: 1522 (NodeReinterpret)
    const HWRawBits<64> &id1522in_input = id2150out_dataout;

    id1522out_output = (cast_bits2fixed<64,0,UNSIGNED>(id1522in_input));
  }
  HWOffsetFix<1,0,UNSIGNED> id1523out_o;

  { // Node ID: 1523 (NodeCast)
    const HWOffsetFix<64,0,UNSIGNED> &id1523in_i = id1522out_output;

    id1523out_o = (cast_fixed2fixed<1,0,UNSIGNED,TRUNCATE>(id1523in_i));
  }
  { // Node ID: 2552 (NodeFIFO)
    const HWOffsetFix<1,0,UNSIGNED> &id2552in_input = id1523out_o;

    id2552out_output[(getCycle()+10)%11] = id2552in_input;
  }
  HWRawBits<64> id2151out_dataout;

  { // Node ID: 2151 (NodeShift)
    const HWOffsetFix<64,0,UNSIGNED> &id2151in_datain = id1404out_result;

    id2151out_dataout = (shift_right_fixed(id2151in_datain,(1l)));
  }
  HWOffsetFix<64,0,UNSIGNED> id1512out_output;

  { // Node ID: 1512 (NodeReinterpret)
    const HWRawBits<64> &id1512in_input = id2151out_dataout;

    id1512out_output = (cast_bits2fixed<64,0,UNSIGNED>(id1512in_input));
  }
  HWOffsetFix<1,0,UNSIGNED> id1513out_o;

  { // Node ID: 1513 (NodeCast)
    const HWOffsetFix<64,0,UNSIGNED> &id1513in_i = id1512out_output;

    id1513out_o = (cast_fixed2fixed<1,0,UNSIGNED,TRUNCATE>(id1513in_i));
  }
  { // Node ID: 2548 (NodeFIFO)
    const HWOffsetFix<1,0,UNSIGNED> &id2548in_input = id1513out_o;

    id2548out_output[(getCycle()+10)%11] = id2548in_input;
  }
  HWRawBits<64> id2217out_output;

  { // Node ID: 2217 (NodeReinterpret)
    const HWOffsetFix<64,0,UNSIGNED> &id2217in_input = id1404out_result;

    id2217out_output = (cast_fixed2bits(id2217in_input));
  }
  HWOffsetFix<64,0,UNSIGNED> id1492out_output;

  { // Node ID: 1492 (NodeReinterpret)
    const HWRawBits<64> &id1492in_input = id2217out_output;

    id1492out_output = (cast_bits2fixed<64,0,UNSIGNED>(id1492in_input));
  }
  HWOffsetFix<1,0,UNSIGNED> id1493out_o;

  { // Node ID: 1493 (NodeCast)
    const HWOffsetFix<64,0,UNSIGNED> &id1493in_i = id1492out_output;

    id1493out_o = (cast_fixed2fixed<1,0,UNSIGNED,TRUNCATE>(id1493in_i));
  }
  { // Node ID: 2546 (NodeFIFO)
    const HWOffsetFix<1,0,UNSIGNED> &id2546in_input = id1493out_o;

    id2546out_output[(getCycle()+10)%11] = id2546in_input;
  }
  HWOffsetFix<64,0,UNSIGNED> id1494out_result;

  { // Node ID: 1494 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1494in_sel = id2546out_output[getCycle()%11];
    const HWOffsetFix<64,0,UNSIGNED> &id1494in_option0 = id1780out_doutb[getCycle()%3];
    const HWOffsetFix<64,0,UNSIGNED> &id1494in_option1 = id1781out_doutb[getCycle()%3];

    HWOffsetFix<64,0,UNSIGNED> id1494x_1;

    switch((id1494in_sel.getValueAsLong())) {
      case 0l:
        id1494x_1 = id1494in_option0;
        break;
      case 1l:
        id1494x_1 = id1494in_option1;
        break;
      default:
        id1494x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1494out_result = (id1494x_1);
  }
  HWRawBits<64> id2218out_output;

  { // Node ID: 2218 (NodeReinterpret)
    const HWOffsetFix<64,0,UNSIGNED> &id2218in_input = id1404out_result;

    id2218out_output = (cast_fixed2bits(id2218in_input));
  }
  HWOffsetFix<64,0,UNSIGNED> id1497out_output;

  { // Node ID: 1497 (NodeReinterpret)
    const HWRawBits<64> &id1497in_input = id2218out_output;

    id1497out_output = (cast_bits2fixed<64,0,UNSIGNED>(id1497in_input));
  }
  HWOffsetFix<1,0,UNSIGNED> id1498out_o;

  { // Node ID: 1498 (NodeCast)
    const HWOffsetFix<64,0,UNSIGNED> &id1498in_i = id1497out_output;

    id1498out_o = (cast_fixed2fixed<1,0,UNSIGNED,TRUNCATE>(id1498in_i));
  }
  { // Node ID: 2547 (NodeFIFO)
    const HWOffsetFix<1,0,UNSIGNED> &id2547in_input = id1498out_o;

    id2547out_output[(getCycle()+10)%11] = id2547in_input;
  }
  HWOffsetFix<64,0,UNSIGNED> id1499out_result;

  { // Node ID: 1499 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1499in_sel = id2547out_output[getCycle()%11];
    const HWOffsetFix<64,0,UNSIGNED> &id1499in_option0 = id1782out_doutb[getCycle()%3];
    const HWOffsetFix<64,0,UNSIGNED> &id1499in_option1 = id1783out_doutb[getCycle()%3];

    HWOffsetFix<64,0,UNSIGNED> id1499x_1;

    switch((id1499in_sel.getValueAsLong())) {
      case 0l:
        id1499x_1 = id1499in_option0;
        break;
      case 1l:
        id1499x_1 = id1499in_option1;
        break;
      default:
        id1499x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1499out_result = (id1499x_1);
  }
  HWOffsetFix<64,0,UNSIGNED> id1514out_result;

  { // Node ID: 1514 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1514in_sel = id2548out_output[getCycle()%11];
    const HWOffsetFix<64,0,UNSIGNED> &id1514in_option0 = id1494out_result;
    const HWOffsetFix<64,0,UNSIGNED> &id1514in_option1 = id1499out_result;

    HWOffsetFix<64,0,UNSIGNED> id1514x_1;

    switch((id1514in_sel.getValueAsLong())) {
      case 0l:
        id1514x_1 = id1514in_option0;
        break;
      case 1l:
        id1514x_1 = id1514in_option1;
        break;
      default:
        id1514x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1514out_result = (id1514x_1);
  }
  HWRawBits<64> id2154out_dataout;

  { // Node ID: 2154 (NodeShift)
    const HWOffsetFix<64,0,UNSIGNED> &id2154in_datain = id1404out_result;

    id2154out_dataout = (shift_right_fixed(id2154in_datain,(1l)));
  }
  HWOffsetFix<64,0,UNSIGNED> id1517out_output;

  { // Node ID: 1517 (NodeReinterpret)
    const HWRawBits<64> &id1517in_input = id2154out_dataout;

    id1517out_output = (cast_bits2fixed<64,0,UNSIGNED>(id1517in_input));
  }
  HWOffsetFix<1,0,UNSIGNED> id1518out_o;

  { // Node ID: 1518 (NodeCast)
    const HWOffsetFix<64,0,UNSIGNED> &id1518in_i = id1517out_output;

    id1518out_o = (cast_fixed2fixed<1,0,UNSIGNED,TRUNCATE>(id1518in_i));
  }
  { // Node ID: 2551 (NodeFIFO)
    const HWOffsetFix<1,0,UNSIGNED> &id2551in_input = id1518out_o;

    id2551out_output[(getCycle()+10)%11] = id2551in_input;
  }
  HWRawBits<64> id2219out_output;

  { // Node ID: 2219 (NodeReinterpret)
    const HWOffsetFix<64,0,UNSIGNED> &id2219in_input = id1404out_result;

    id2219out_output = (cast_fixed2bits(id2219in_input));
  }
  HWOffsetFix<64,0,UNSIGNED> id1502out_output;

  { // Node ID: 1502 (NodeReinterpret)
    const HWRawBits<64> &id1502in_input = id2219out_output;

    id1502out_output = (cast_bits2fixed<64,0,UNSIGNED>(id1502in_input));
  }
  HWOffsetFix<1,0,UNSIGNED> id1503out_o;

  { // Node ID: 1503 (NodeCast)
    const HWOffsetFix<64,0,UNSIGNED> &id1503in_i = id1502out_output;

    id1503out_o = (cast_fixed2fixed<1,0,UNSIGNED,TRUNCATE>(id1503in_i));
  }
  { // Node ID: 2549 (NodeFIFO)
    const HWOffsetFix<1,0,UNSIGNED> &id2549in_input = id1503out_o;

    id2549out_output[(getCycle()+10)%11] = id2549in_input;
  }
  HWOffsetFix<64,0,UNSIGNED> id1504out_result;

  { // Node ID: 1504 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1504in_sel = id2549out_output[getCycle()%11];
    const HWOffsetFix<64,0,UNSIGNED> &id1504in_option0 = id1784out_doutb[getCycle()%3];
    const HWOffsetFix<64,0,UNSIGNED> &id1504in_option1 = id1785out_doutb[getCycle()%3];

    HWOffsetFix<64,0,UNSIGNED> id1504x_1;

    switch((id1504in_sel.getValueAsLong())) {
      case 0l:
        id1504x_1 = id1504in_option0;
        break;
      case 1l:
        id1504x_1 = id1504in_option1;
        break;
      default:
        id1504x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1504out_result = (id1504x_1);
  }
  HWRawBits<64> id2220out_output;

  { // Node ID: 2220 (NodeReinterpret)
    const HWOffsetFix<64,0,UNSIGNED> &id2220in_input = id1404out_result;

    id2220out_output = (cast_fixed2bits(id2220in_input));
  }
  HWOffsetFix<64,0,UNSIGNED> id1507out_output;

  { // Node ID: 1507 (NodeReinterpret)
    const HWRawBits<64> &id1507in_input = id2220out_output;

    id1507out_output = (cast_bits2fixed<64,0,UNSIGNED>(id1507in_input));
  }
  HWOffsetFix<1,0,UNSIGNED> id1508out_o;

  { // Node ID: 1508 (NodeCast)
    const HWOffsetFix<64,0,UNSIGNED> &id1508in_i = id1507out_output;

    id1508out_o = (cast_fixed2fixed<1,0,UNSIGNED,TRUNCATE>(id1508in_i));
  }
  { // Node ID: 2550 (NodeFIFO)
    const HWOffsetFix<1,0,UNSIGNED> &id2550in_input = id1508out_o;

    id2550out_output[(getCycle()+10)%11] = id2550in_input;
  }
  HWOffsetFix<64,0,UNSIGNED> id1509out_result;

  { // Node ID: 1509 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1509in_sel = id2550out_output[getCycle()%11];
    const HWOffsetFix<64,0,UNSIGNED> &id1509in_option0 = id1786out_doutb[getCycle()%3];
    const HWOffsetFix<64,0,UNSIGNED> &id1509in_option1 = id1787out_doutb[getCycle()%3];

    HWOffsetFix<64,0,UNSIGNED> id1509x_1;

    switch((id1509in_sel.getValueAsLong())) {
      case 0l:
        id1509x_1 = id1509in_option0;
        break;
      case 1l:
        id1509x_1 = id1509in_option1;
        break;
      default:
        id1509x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1509out_result = (id1509x_1);
  }
  HWOffsetFix<64,0,UNSIGNED> id1519out_result;

  { // Node ID: 1519 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1519in_sel = id2551out_output[getCycle()%11];
    const HWOffsetFix<64,0,UNSIGNED> &id1519in_option0 = id1504out_result;
    const HWOffsetFix<64,0,UNSIGNED> &id1519in_option1 = id1509out_result;

    HWOffsetFix<64,0,UNSIGNED> id1519x_1;

    switch((id1519in_sel.getValueAsLong())) {
      case 0l:
        id1519x_1 = id1519in_option0;
        break;
      case 1l:
        id1519x_1 = id1519in_option1;
        break;
      default:
        id1519x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1519out_result = (id1519x_1);
  }
  HWOffsetFix<64,0,UNSIGNED> id1524out_result;

  { // Node ID: 1524 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1524in_sel = id2552out_output[getCycle()%11];
    const HWOffsetFix<64,0,UNSIGNED> &id1524in_option0 = id1514out_result;
    const HWOffsetFix<64,0,UNSIGNED> &id1524in_option1 = id1519out_result;

    HWOffsetFix<64,0,UNSIGNED> id1524x_1;

    switch((id1524in_sel.getValueAsLong())) {
      case 0l:
        id1524x_1 = id1524in_option0;
        break;
      case 1l:
        id1524x_1 = id1524in_option1;
        break;
      default:
        id1524x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1524out_result = (id1524x_1);
  }
  { // Node ID: 2613 (NodeConstantRawBits)
  }
  HWOffsetFix<64,0,UNSIGNED> id1713out_result;

  { // Node ID: 1713 (NodeAdd)
    const HWOffsetFix<64,0,UNSIGNED> &id1713in_a = id1524out_result;
    const HWOffsetFix<64,0,UNSIGNED> &id1713in_b = id2613out_value;

    id1713out_result = (add_fixed<64,0,UNSIGNED,TRUNCATE>(id1713in_a,id1713in_b));
  }
  HWOffsetFix<64,0,UNSIGNED> id1714out_result;

  { // Node ID: 1714 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1714in_sel = id2147out_result;
    const HWOffsetFix<64,0,UNSIGNED> &id1714in_option0 = id1524out_result;
    const HWOffsetFix<64,0,UNSIGNED> &id1714in_option1 = id1713out_result;

    HWOffsetFix<64,0,UNSIGNED> id1714x_1;

    switch((id1714in_sel.getValueAsLong())) {
      case 0l:
        id1714x_1 = id1714in_option0;
        break;
      case 1l:
        id1714x_1 = id1714in_option1;
        break;
      default:
        id1714x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1714out_result = (id1714x_1);
  }
  if ( (getFillLevel() >= (30l)) && (getFlushLevel() < (30l)|| !isFlushingActive() ))
  { // Node ID: 1754 (NodeOutput)
    const HWOffsetFix<1,0,UNSIGNED> &id1754in_output_control = id1752out_result;
    const HWOffsetFix<64,0,UNSIGNED> &id1754in_data = id1714out_result;

    bool id1754x_1;

    (id1754x_1) = ((id1754in_output_control.getValueAsBool())&(!(((getFlushLevel())>=(30l))&(isFlushingActive()))));
    if((id1754x_1)) {
      writeOutput(m_o_0_2, id1754in_data);
    }
  }
  { // Node ID: 1756 (NodeInputMappedReg)
  }
  HWOffsetFix<1,0,UNSIGNED> id1757out_result;

  { // Node ID: 1757 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id1757in_a = id1756out_io_o_0_3_force_disabled;

    id1757out_result = (not_fixed(id1757in_a));
  }
  { // Node ID: 2612 (NodeConstantRawBits)
  }
  HWOffsetFix<1,0,UNSIGNED> id2157out_result;

  { // Node ID: 2157 (NodeEqInlined)
    const HWOffsetFix<32,0,TWOSCOMPLEMENT> &id2157in_a = id12out_compute;
    const HWOffsetFix<32,0,TWOSCOMPLEMENT> &id2157in_b = id2612out_value;

    id2157out_result = (eq_fixed(id2157in_a,id2157in_b));
  }
  HWOffsetFix<64,2,UNSIGNED> id2158out_output;

  { // Node ID: 2158 (NodeReinterpret)
    const HWOffsetFix<64,0,UNSIGNED> &id2158in_input = id729out_o;

    id2158out_output = (cast_bits2fixed<64,2,UNSIGNED>((cast_fixed2bits(id2158in_input))));
  }
  HWOffsetFix<64,0,UNSIGNED> id2159out_o;

  { // Node ID: 2159 (NodeCast)
    const HWOffsetFix<64,2,UNSIGNED> &id2159in_i = id2158out_output;

    id2159out_o = (cast_fixed2fixed<64,0,UNSIGNED,TRUNCATE>(id2159in_i));
  }
  HWOffsetFix<64,0,UNSIGNED> id1407out_result;

  { // Node ID: 1407 (NodeAdd)
    const HWOffsetFix<64,0,UNSIGNED> &id1407in_a = id2159out_o;
    const HWOffsetFix<64,0,UNSIGNED> &id1407in_b = id825out_o;

    id1407out_result = (add_fixed<64,0,UNSIGNED,TRUNCATE>(id1407in_a,id1407in_b));
  }
  HWRawBits<64> id2160out_dataout;

  { // Node ID: 2160 (NodeShift)
    const HWOffsetFix<64,0,UNSIGNED> &id2160in_datain = id1407out_result;

    id2160out_dataout = (shift_right_fixed(id2160in_datain,(2l)));
  }
  HWOffsetFix<64,0,UNSIGNED> id1557out_output;

  { // Node ID: 1557 (NodeReinterpret)
    const HWRawBits<64> &id1557in_input = id2160out_dataout;

    id1557out_output = (cast_bits2fixed<64,0,UNSIGNED>(id1557in_input));
  }
  HWOffsetFix<1,0,UNSIGNED> id1558out_o;

  { // Node ID: 1558 (NodeCast)
    const HWOffsetFix<64,0,UNSIGNED> &id1558in_i = id1557out_output;

    id1558out_o = (cast_fixed2fixed<1,0,UNSIGNED,TRUNCATE>(id1558in_i));
  }
  { // Node ID: 2559 (NodeFIFO)
    const HWOffsetFix<1,0,UNSIGNED> &id2559in_input = id1558out_o;

    id2559out_output[(getCycle()+9)%10] = id2559in_input;
  }
  HWRawBits<64> id2161out_dataout;

  { // Node ID: 2161 (NodeShift)
    const HWOffsetFix<64,0,UNSIGNED> &id2161in_datain = id1407out_result;

    id2161out_dataout = (shift_right_fixed(id2161in_datain,(1l)));
  }
  HWOffsetFix<64,0,UNSIGNED> id1547out_output;

  { // Node ID: 1547 (NodeReinterpret)
    const HWRawBits<64> &id1547in_input = id2161out_dataout;

    id1547out_output = (cast_bits2fixed<64,0,UNSIGNED>(id1547in_input));
  }
  HWOffsetFix<1,0,UNSIGNED> id1548out_o;

  { // Node ID: 1548 (NodeCast)
    const HWOffsetFix<64,0,UNSIGNED> &id1548in_i = id1547out_output;

    id1548out_o = (cast_fixed2fixed<1,0,UNSIGNED,TRUNCATE>(id1548in_i));
  }
  { // Node ID: 2555 (NodeFIFO)
    const HWOffsetFix<1,0,UNSIGNED> &id2555in_input = id1548out_o;

    id2555out_output[(getCycle()+9)%10] = id2555in_input;
  }
  HWRawBits<64> id2221out_output;

  { // Node ID: 2221 (NodeReinterpret)
    const HWOffsetFix<64,0,UNSIGNED> &id2221in_input = id1407out_result;

    id2221out_output = (cast_fixed2bits(id2221in_input));
  }
  HWOffsetFix<64,0,UNSIGNED> id1527out_output;

  { // Node ID: 1527 (NodeReinterpret)
    const HWRawBits<64> &id1527in_input = id2221out_output;

    id1527out_output = (cast_bits2fixed<64,0,UNSIGNED>(id1527in_input));
  }
  HWOffsetFix<1,0,UNSIGNED> id1528out_o;

  { // Node ID: 1528 (NodeCast)
    const HWOffsetFix<64,0,UNSIGNED> &id1528in_i = id1527out_output;

    id1528out_o = (cast_fixed2fixed<1,0,UNSIGNED,TRUNCATE>(id1528in_i));
  }
  { // Node ID: 2553 (NodeFIFO)
    const HWOffsetFix<1,0,UNSIGNED> &id2553in_input = id1528out_o;

    id2553out_output[(getCycle()+9)%10] = id2553in_input;
  }
  HWOffsetFix<64,0,UNSIGNED> id1529out_result;

  { // Node ID: 1529 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1529in_sel = id2553out_output[getCycle()%10];
    const HWOffsetFix<64,0,UNSIGNED> &id1529in_option0 = id1780out_doutb[getCycle()%3];
    const HWOffsetFix<64,0,UNSIGNED> &id1529in_option1 = id1781out_doutb[getCycle()%3];

    HWOffsetFix<64,0,UNSIGNED> id1529x_1;

    switch((id1529in_sel.getValueAsLong())) {
      case 0l:
        id1529x_1 = id1529in_option0;
        break;
      case 1l:
        id1529x_1 = id1529in_option1;
        break;
      default:
        id1529x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1529out_result = (id1529x_1);
  }
  HWRawBits<64> id2222out_output;

  { // Node ID: 2222 (NodeReinterpret)
    const HWOffsetFix<64,0,UNSIGNED> &id2222in_input = id1407out_result;

    id2222out_output = (cast_fixed2bits(id2222in_input));
  }
  HWOffsetFix<64,0,UNSIGNED> id1532out_output;

  { // Node ID: 1532 (NodeReinterpret)
    const HWRawBits<64> &id1532in_input = id2222out_output;

    id1532out_output = (cast_bits2fixed<64,0,UNSIGNED>(id1532in_input));
  }
  HWOffsetFix<1,0,UNSIGNED> id1533out_o;

  { // Node ID: 1533 (NodeCast)
    const HWOffsetFix<64,0,UNSIGNED> &id1533in_i = id1532out_output;

    id1533out_o = (cast_fixed2fixed<1,0,UNSIGNED,TRUNCATE>(id1533in_i));
  }
  { // Node ID: 2554 (NodeFIFO)
    const HWOffsetFix<1,0,UNSIGNED> &id2554in_input = id1533out_o;

    id2554out_output[(getCycle()+9)%10] = id2554in_input;
  }
  HWOffsetFix<64,0,UNSIGNED> id1534out_result;

  { // Node ID: 1534 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1534in_sel = id2554out_output[getCycle()%10];
    const HWOffsetFix<64,0,UNSIGNED> &id1534in_option0 = id1782out_doutb[getCycle()%3];
    const HWOffsetFix<64,0,UNSIGNED> &id1534in_option1 = id1783out_doutb[getCycle()%3];

    HWOffsetFix<64,0,UNSIGNED> id1534x_1;

    switch((id1534in_sel.getValueAsLong())) {
      case 0l:
        id1534x_1 = id1534in_option0;
        break;
      case 1l:
        id1534x_1 = id1534in_option1;
        break;
      default:
        id1534x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1534out_result = (id1534x_1);
  }
  HWOffsetFix<64,0,UNSIGNED> id1549out_result;

  { // Node ID: 1549 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1549in_sel = id2555out_output[getCycle()%10];
    const HWOffsetFix<64,0,UNSIGNED> &id1549in_option0 = id1529out_result;
    const HWOffsetFix<64,0,UNSIGNED> &id1549in_option1 = id1534out_result;

    HWOffsetFix<64,0,UNSIGNED> id1549x_1;

    switch((id1549in_sel.getValueAsLong())) {
      case 0l:
        id1549x_1 = id1549in_option0;
        break;
      case 1l:
        id1549x_1 = id1549in_option1;
        break;
      default:
        id1549x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1549out_result = (id1549x_1);
  }
  HWRawBits<64> id2164out_dataout;

  { // Node ID: 2164 (NodeShift)
    const HWOffsetFix<64,0,UNSIGNED> &id2164in_datain = id1407out_result;

    id2164out_dataout = (shift_right_fixed(id2164in_datain,(1l)));
  }
  HWOffsetFix<64,0,UNSIGNED> id1552out_output;

  { // Node ID: 1552 (NodeReinterpret)
    const HWRawBits<64> &id1552in_input = id2164out_dataout;

    id1552out_output = (cast_bits2fixed<64,0,UNSIGNED>(id1552in_input));
  }
  HWOffsetFix<1,0,UNSIGNED> id1553out_o;

  { // Node ID: 1553 (NodeCast)
    const HWOffsetFix<64,0,UNSIGNED> &id1553in_i = id1552out_output;

    id1553out_o = (cast_fixed2fixed<1,0,UNSIGNED,TRUNCATE>(id1553in_i));
  }
  { // Node ID: 2558 (NodeFIFO)
    const HWOffsetFix<1,0,UNSIGNED> &id2558in_input = id1553out_o;

    id2558out_output[(getCycle()+9)%10] = id2558in_input;
  }
  HWRawBits<64> id2223out_output;

  { // Node ID: 2223 (NodeReinterpret)
    const HWOffsetFix<64,0,UNSIGNED> &id2223in_input = id1407out_result;

    id2223out_output = (cast_fixed2bits(id2223in_input));
  }
  HWOffsetFix<64,0,UNSIGNED> id1537out_output;

  { // Node ID: 1537 (NodeReinterpret)
    const HWRawBits<64> &id1537in_input = id2223out_output;

    id1537out_output = (cast_bits2fixed<64,0,UNSIGNED>(id1537in_input));
  }
  HWOffsetFix<1,0,UNSIGNED> id1538out_o;

  { // Node ID: 1538 (NodeCast)
    const HWOffsetFix<64,0,UNSIGNED> &id1538in_i = id1537out_output;

    id1538out_o = (cast_fixed2fixed<1,0,UNSIGNED,TRUNCATE>(id1538in_i));
  }
  { // Node ID: 2556 (NodeFIFO)
    const HWOffsetFix<1,0,UNSIGNED> &id2556in_input = id1538out_o;

    id2556out_output[(getCycle()+9)%10] = id2556in_input;
  }
  HWOffsetFix<64,0,UNSIGNED> id1539out_result;

  { // Node ID: 1539 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1539in_sel = id2556out_output[getCycle()%10];
    const HWOffsetFix<64,0,UNSIGNED> &id1539in_option0 = id1784out_doutb[getCycle()%3];
    const HWOffsetFix<64,0,UNSIGNED> &id1539in_option1 = id1785out_doutb[getCycle()%3];

    HWOffsetFix<64,0,UNSIGNED> id1539x_1;

    switch((id1539in_sel.getValueAsLong())) {
      case 0l:
        id1539x_1 = id1539in_option0;
        break;
      case 1l:
        id1539x_1 = id1539in_option1;
        break;
      default:
        id1539x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1539out_result = (id1539x_1);
  }
  HWRawBits<64> id2224out_output;

  { // Node ID: 2224 (NodeReinterpret)
    const HWOffsetFix<64,0,UNSIGNED> &id2224in_input = id1407out_result;

    id2224out_output = (cast_fixed2bits(id2224in_input));
  }
  HWOffsetFix<64,0,UNSIGNED> id1542out_output;

  { // Node ID: 1542 (NodeReinterpret)
    const HWRawBits<64> &id1542in_input = id2224out_output;

    id1542out_output = (cast_bits2fixed<64,0,UNSIGNED>(id1542in_input));
  }
  HWOffsetFix<1,0,UNSIGNED> id1543out_o;

  { // Node ID: 1543 (NodeCast)
    const HWOffsetFix<64,0,UNSIGNED> &id1543in_i = id1542out_output;

    id1543out_o = (cast_fixed2fixed<1,0,UNSIGNED,TRUNCATE>(id1543in_i));
  }
  { // Node ID: 2557 (NodeFIFO)
    const HWOffsetFix<1,0,UNSIGNED> &id2557in_input = id1543out_o;

    id2557out_output[(getCycle()+9)%10] = id2557in_input;
  }
  HWOffsetFix<64,0,UNSIGNED> id1544out_result;

  { // Node ID: 1544 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1544in_sel = id2557out_output[getCycle()%10];
    const HWOffsetFix<64,0,UNSIGNED> &id1544in_option0 = id1786out_doutb[getCycle()%3];
    const HWOffsetFix<64,0,UNSIGNED> &id1544in_option1 = id1787out_doutb[getCycle()%3];

    HWOffsetFix<64,0,UNSIGNED> id1544x_1;

    switch((id1544in_sel.getValueAsLong())) {
      case 0l:
        id1544x_1 = id1544in_option0;
        break;
      case 1l:
        id1544x_1 = id1544in_option1;
        break;
      default:
        id1544x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1544out_result = (id1544x_1);
  }
  HWOffsetFix<64,0,UNSIGNED> id1554out_result;

  { // Node ID: 1554 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1554in_sel = id2558out_output[getCycle()%10];
    const HWOffsetFix<64,0,UNSIGNED> &id1554in_option0 = id1539out_result;
    const HWOffsetFix<64,0,UNSIGNED> &id1554in_option1 = id1544out_result;

    HWOffsetFix<64,0,UNSIGNED> id1554x_1;

    switch((id1554in_sel.getValueAsLong())) {
      case 0l:
        id1554x_1 = id1554in_option0;
        break;
      case 1l:
        id1554x_1 = id1554in_option1;
        break;
      default:
        id1554x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1554out_result = (id1554x_1);
  }
  HWOffsetFix<64,0,UNSIGNED> id1559out_result;

  { // Node ID: 1559 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1559in_sel = id2559out_output[getCycle()%10];
    const HWOffsetFix<64,0,UNSIGNED> &id1559in_option0 = id1549out_result;
    const HWOffsetFix<64,0,UNSIGNED> &id1559in_option1 = id1554out_result;

    HWOffsetFix<64,0,UNSIGNED> id1559x_1;

    switch((id1559in_sel.getValueAsLong())) {
      case 0l:
        id1559x_1 = id1559in_option0;
        break;
      case 1l:
        id1559x_1 = id1559in_option1;
        break;
      default:
        id1559x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1559out_result = (id1559x_1);
  }
  { // Node ID: 2611 (NodeConstantRawBits)
  }
  HWOffsetFix<64,0,UNSIGNED> id1718out_result;

  { // Node ID: 1718 (NodeAdd)
    const HWOffsetFix<64,0,UNSIGNED> &id1718in_a = id1559out_result;
    const HWOffsetFix<64,0,UNSIGNED> &id1718in_b = id2611out_value;

    id1718out_result = (add_fixed<64,0,UNSIGNED,TRUNCATE>(id1718in_a,id1718in_b));
  }
  HWOffsetFix<64,0,UNSIGNED> id1719out_result;

  { // Node ID: 1719 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1719in_sel = id2157out_result;
    const HWOffsetFix<64,0,UNSIGNED> &id1719in_option0 = id1559out_result;
    const HWOffsetFix<64,0,UNSIGNED> &id1719in_option1 = id1718out_result;

    HWOffsetFix<64,0,UNSIGNED> id1719x_1;

    switch((id1719in_sel.getValueAsLong())) {
      case 0l:
        id1719x_1 = id1719in_option0;
        break;
      case 1l:
        id1719x_1 = id1719in_option1;
        break;
      default:
        id1719x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1719out_result = (id1719x_1);
  }
  if ( (getFillLevel() >= (30l)) && (getFlushLevel() < (30l)|| !isFlushingActive() ))
  { // Node ID: 1759 (NodeOutput)
    const HWOffsetFix<1,0,UNSIGNED> &id1759in_output_control = id1757out_result;
    const HWOffsetFix<64,0,UNSIGNED> &id1759in_data = id1719out_result;

    bool id1759x_1;

    (id1759x_1) = ((id1759in_output_control.getValueAsBool())&(!(((getFlushLevel())>=(30l))&(isFlushingActive()))));
    if((id1759x_1)) {
      writeOutput(m_o_0_3, id1759in_data);
    }
  }
  { // Node ID: 1761 (NodeInputMappedReg)
  }
  HWOffsetFix<1,0,UNSIGNED> id1762out_result;

  { // Node ID: 1762 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id1762in_a = id1761out_io_o_1_0_force_disabled;

    id1762out_result = (not_fixed(id1762in_a));
  }
  { // Node ID: 2610 (NodeConstantRawBits)
  }
  HWOffsetFix<1,0,UNSIGNED> id2167out_result;

  { // Node ID: 2167 (NodeEqInlined)
    const HWOffsetFix<32,0,TWOSCOMPLEMENT> &id2167in_a = id12out_compute;
    const HWOffsetFix<32,0,TWOSCOMPLEMENT> &id2167in_b = id2610out_value;

    id2167out_result = (eq_fixed(id2167in_a,id2167in_b));
  }
  HWOffsetFix<64,2,UNSIGNED> id2168out_output;

  { // Node ID: 2168 (NodeReinterpret)
    const HWOffsetFix<64,0,UNSIGNED> &id2168in_input = id733out_o;

    id2168out_output = (cast_bits2fixed<64,2,UNSIGNED>((cast_fixed2bits(id2168in_input))));
  }
  HWOffsetFix<64,0,UNSIGNED> id2169out_o;

  { // Node ID: 2169 (NodeCast)
    const HWOffsetFix<64,2,UNSIGNED> &id2169in_i = id2168out_output;

    id2169out_o = (cast_fixed2fixed<64,0,UNSIGNED,TRUNCATE>(id2169in_i));
  }
  HWOffsetFix<64,0,UNSIGNED> id1410out_result;

  { // Node ID: 1410 (NodeAdd)
    const HWOffsetFix<64,0,UNSIGNED> &id1410in_a = id2169out_o;
    const HWOffsetFix<64,0,UNSIGNED> &id1410in_b = id835out_o;

    id1410out_result = (add_fixed<64,0,UNSIGNED,TRUNCATE>(id1410in_a,id1410in_b));
  }
  HWRawBits<64> id2170out_dataout;

  { // Node ID: 2170 (NodeShift)
    const HWOffsetFix<64,0,UNSIGNED> &id2170in_datain = id1410out_result;

    id2170out_dataout = (shift_right_fixed(id2170in_datain,(2l)));
  }
  HWOffsetFix<64,0,UNSIGNED> id1592out_output;

  { // Node ID: 1592 (NodeReinterpret)
    const HWRawBits<64> &id1592in_input = id2170out_dataout;

    id1592out_output = (cast_bits2fixed<64,0,UNSIGNED>(id1592in_input));
  }
  HWOffsetFix<1,0,UNSIGNED> id1593out_o;

  { // Node ID: 1593 (NodeCast)
    const HWOffsetFix<64,0,UNSIGNED> &id1593in_i = id1592out_output;

    id1593out_o = (cast_fixed2fixed<1,0,UNSIGNED,TRUNCATE>(id1593in_i));
  }
  { // Node ID: 2566 (NodeFIFO)
    const HWOffsetFix<1,0,UNSIGNED> &id2566in_input = id1593out_o;

    id2566out_output[(getCycle()+8)%9] = id2566in_input;
  }
  HWRawBits<64> id2171out_dataout;

  { // Node ID: 2171 (NodeShift)
    const HWOffsetFix<64,0,UNSIGNED> &id2171in_datain = id1410out_result;

    id2171out_dataout = (shift_right_fixed(id2171in_datain,(1l)));
  }
  HWOffsetFix<64,0,UNSIGNED> id1582out_output;

  { // Node ID: 1582 (NodeReinterpret)
    const HWRawBits<64> &id1582in_input = id2171out_dataout;

    id1582out_output = (cast_bits2fixed<64,0,UNSIGNED>(id1582in_input));
  }
  HWOffsetFix<1,0,UNSIGNED> id1583out_o;

  { // Node ID: 1583 (NodeCast)
    const HWOffsetFix<64,0,UNSIGNED> &id1583in_i = id1582out_output;

    id1583out_o = (cast_fixed2fixed<1,0,UNSIGNED,TRUNCATE>(id1583in_i));
  }
  { // Node ID: 2562 (NodeFIFO)
    const HWOffsetFix<1,0,UNSIGNED> &id2562in_input = id1583out_o;

    id2562out_output[(getCycle()+8)%9] = id2562in_input;
  }
  HWRawBits<64> id2225out_output;

  { // Node ID: 2225 (NodeReinterpret)
    const HWOffsetFix<64,0,UNSIGNED> &id2225in_input = id1410out_result;

    id2225out_output = (cast_fixed2bits(id2225in_input));
  }
  HWOffsetFix<64,0,UNSIGNED> id1562out_output;

  { // Node ID: 1562 (NodeReinterpret)
    const HWRawBits<64> &id1562in_input = id2225out_output;

    id1562out_output = (cast_bits2fixed<64,0,UNSIGNED>(id1562in_input));
  }
  HWOffsetFix<1,0,UNSIGNED> id1563out_o;

  { // Node ID: 1563 (NodeCast)
    const HWOffsetFix<64,0,UNSIGNED> &id1563in_i = id1562out_output;

    id1563out_o = (cast_fixed2fixed<1,0,UNSIGNED,TRUNCATE>(id1563in_i));
  }
  { // Node ID: 2560 (NodeFIFO)
    const HWOffsetFix<1,0,UNSIGNED> &id2560in_input = id1563out_o;

    id2560out_output[(getCycle()+8)%9] = id2560in_input;
  }
  HWOffsetFix<64,0,UNSIGNED> id1564out_result;

  { // Node ID: 1564 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1564in_sel = id2560out_output[getCycle()%9];
    const HWOffsetFix<64,0,UNSIGNED> &id1564in_option0 = id1780out_doutb[getCycle()%3];
    const HWOffsetFix<64,0,UNSIGNED> &id1564in_option1 = id1781out_doutb[getCycle()%3];

    HWOffsetFix<64,0,UNSIGNED> id1564x_1;

    switch((id1564in_sel.getValueAsLong())) {
      case 0l:
        id1564x_1 = id1564in_option0;
        break;
      case 1l:
        id1564x_1 = id1564in_option1;
        break;
      default:
        id1564x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1564out_result = (id1564x_1);
  }
  HWRawBits<64> id2226out_output;

  { // Node ID: 2226 (NodeReinterpret)
    const HWOffsetFix<64,0,UNSIGNED> &id2226in_input = id1410out_result;

    id2226out_output = (cast_fixed2bits(id2226in_input));
  }
  HWOffsetFix<64,0,UNSIGNED> id1567out_output;

  { // Node ID: 1567 (NodeReinterpret)
    const HWRawBits<64> &id1567in_input = id2226out_output;

    id1567out_output = (cast_bits2fixed<64,0,UNSIGNED>(id1567in_input));
  }
  HWOffsetFix<1,0,UNSIGNED> id1568out_o;

  { // Node ID: 1568 (NodeCast)
    const HWOffsetFix<64,0,UNSIGNED> &id1568in_i = id1567out_output;

    id1568out_o = (cast_fixed2fixed<1,0,UNSIGNED,TRUNCATE>(id1568in_i));
  }
  { // Node ID: 2561 (NodeFIFO)
    const HWOffsetFix<1,0,UNSIGNED> &id2561in_input = id1568out_o;

    id2561out_output[(getCycle()+8)%9] = id2561in_input;
  }
  HWOffsetFix<64,0,UNSIGNED> id1569out_result;

  { // Node ID: 1569 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1569in_sel = id2561out_output[getCycle()%9];
    const HWOffsetFix<64,0,UNSIGNED> &id1569in_option0 = id1782out_doutb[getCycle()%3];
    const HWOffsetFix<64,0,UNSIGNED> &id1569in_option1 = id1783out_doutb[getCycle()%3];

    HWOffsetFix<64,0,UNSIGNED> id1569x_1;

    switch((id1569in_sel.getValueAsLong())) {
      case 0l:
        id1569x_1 = id1569in_option0;
        break;
      case 1l:
        id1569x_1 = id1569in_option1;
        break;
      default:
        id1569x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1569out_result = (id1569x_1);
  }
  HWOffsetFix<64,0,UNSIGNED> id1584out_result;

  { // Node ID: 1584 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1584in_sel = id2562out_output[getCycle()%9];
    const HWOffsetFix<64,0,UNSIGNED> &id1584in_option0 = id1564out_result;
    const HWOffsetFix<64,0,UNSIGNED> &id1584in_option1 = id1569out_result;

    HWOffsetFix<64,0,UNSIGNED> id1584x_1;

    switch((id1584in_sel.getValueAsLong())) {
      case 0l:
        id1584x_1 = id1584in_option0;
        break;
      case 1l:
        id1584x_1 = id1584in_option1;
        break;
      default:
        id1584x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1584out_result = (id1584x_1);
  }
  HWRawBits<64> id2174out_dataout;

  { // Node ID: 2174 (NodeShift)
    const HWOffsetFix<64,0,UNSIGNED> &id2174in_datain = id1410out_result;

    id2174out_dataout = (shift_right_fixed(id2174in_datain,(1l)));
  }
  HWOffsetFix<64,0,UNSIGNED> id1587out_output;

  { // Node ID: 1587 (NodeReinterpret)
    const HWRawBits<64> &id1587in_input = id2174out_dataout;

    id1587out_output = (cast_bits2fixed<64,0,UNSIGNED>(id1587in_input));
  }
  HWOffsetFix<1,0,UNSIGNED> id1588out_o;

  { // Node ID: 1588 (NodeCast)
    const HWOffsetFix<64,0,UNSIGNED> &id1588in_i = id1587out_output;

    id1588out_o = (cast_fixed2fixed<1,0,UNSIGNED,TRUNCATE>(id1588in_i));
  }
  { // Node ID: 2565 (NodeFIFO)
    const HWOffsetFix<1,0,UNSIGNED> &id2565in_input = id1588out_o;

    id2565out_output[(getCycle()+8)%9] = id2565in_input;
  }
  HWRawBits<64> id2227out_output;

  { // Node ID: 2227 (NodeReinterpret)
    const HWOffsetFix<64,0,UNSIGNED> &id2227in_input = id1410out_result;

    id2227out_output = (cast_fixed2bits(id2227in_input));
  }
  HWOffsetFix<64,0,UNSIGNED> id1572out_output;

  { // Node ID: 1572 (NodeReinterpret)
    const HWRawBits<64> &id1572in_input = id2227out_output;

    id1572out_output = (cast_bits2fixed<64,0,UNSIGNED>(id1572in_input));
  }
  HWOffsetFix<1,0,UNSIGNED> id1573out_o;

  { // Node ID: 1573 (NodeCast)
    const HWOffsetFix<64,0,UNSIGNED> &id1573in_i = id1572out_output;

    id1573out_o = (cast_fixed2fixed<1,0,UNSIGNED,TRUNCATE>(id1573in_i));
  }
  { // Node ID: 2563 (NodeFIFO)
    const HWOffsetFix<1,0,UNSIGNED> &id2563in_input = id1573out_o;

    id2563out_output[(getCycle()+8)%9] = id2563in_input;
  }
  HWOffsetFix<64,0,UNSIGNED> id1574out_result;

  { // Node ID: 1574 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1574in_sel = id2563out_output[getCycle()%9];
    const HWOffsetFix<64,0,UNSIGNED> &id1574in_option0 = id1784out_doutb[getCycle()%3];
    const HWOffsetFix<64,0,UNSIGNED> &id1574in_option1 = id1785out_doutb[getCycle()%3];

    HWOffsetFix<64,0,UNSIGNED> id1574x_1;

    switch((id1574in_sel.getValueAsLong())) {
      case 0l:
        id1574x_1 = id1574in_option0;
        break;
      case 1l:
        id1574x_1 = id1574in_option1;
        break;
      default:
        id1574x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1574out_result = (id1574x_1);
  }
  HWRawBits<64> id2228out_output;

  { // Node ID: 2228 (NodeReinterpret)
    const HWOffsetFix<64,0,UNSIGNED> &id2228in_input = id1410out_result;

    id2228out_output = (cast_fixed2bits(id2228in_input));
  }
  HWOffsetFix<64,0,UNSIGNED> id1577out_output;

  { // Node ID: 1577 (NodeReinterpret)
    const HWRawBits<64> &id1577in_input = id2228out_output;

    id1577out_output = (cast_bits2fixed<64,0,UNSIGNED>(id1577in_input));
  }
  HWOffsetFix<1,0,UNSIGNED> id1578out_o;

  { // Node ID: 1578 (NodeCast)
    const HWOffsetFix<64,0,UNSIGNED> &id1578in_i = id1577out_output;

    id1578out_o = (cast_fixed2fixed<1,0,UNSIGNED,TRUNCATE>(id1578in_i));
  }
  { // Node ID: 2564 (NodeFIFO)
    const HWOffsetFix<1,0,UNSIGNED> &id2564in_input = id1578out_o;

    id2564out_output[(getCycle()+8)%9] = id2564in_input;
  }
  HWOffsetFix<64,0,UNSIGNED> id1579out_result;

  { // Node ID: 1579 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1579in_sel = id2564out_output[getCycle()%9];
    const HWOffsetFix<64,0,UNSIGNED> &id1579in_option0 = id1786out_doutb[getCycle()%3];
    const HWOffsetFix<64,0,UNSIGNED> &id1579in_option1 = id1787out_doutb[getCycle()%3];

    HWOffsetFix<64,0,UNSIGNED> id1579x_1;

    switch((id1579in_sel.getValueAsLong())) {
      case 0l:
        id1579x_1 = id1579in_option0;
        break;
      case 1l:
        id1579x_1 = id1579in_option1;
        break;
      default:
        id1579x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1579out_result = (id1579x_1);
  }
  HWOffsetFix<64,0,UNSIGNED> id1589out_result;

  { // Node ID: 1589 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1589in_sel = id2565out_output[getCycle()%9];
    const HWOffsetFix<64,0,UNSIGNED> &id1589in_option0 = id1574out_result;
    const HWOffsetFix<64,0,UNSIGNED> &id1589in_option1 = id1579out_result;

    HWOffsetFix<64,0,UNSIGNED> id1589x_1;

    switch((id1589in_sel.getValueAsLong())) {
      case 0l:
        id1589x_1 = id1589in_option0;
        break;
      case 1l:
        id1589x_1 = id1589in_option1;
        break;
      default:
        id1589x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1589out_result = (id1589x_1);
  }
  HWOffsetFix<64,0,UNSIGNED> id1594out_result;

  { // Node ID: 1594 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1594in_sel = id2566out_output[getCycle()%9];
    const HWOffsetFix<64,0,UNSIGNED> &id1594in_option0 = id1584out_result;
    const HWOffsetFix<64,0,UNSIGNED> &id1594in_option1 = id1589out_result;

    HWOffsetFix<64,0,UNSIGNED> id1594x_1;

    switch((id1594in_sel.getValueAsLong())) {
      case 0l:
        id1594x_1 = id1594in_option0;
        break;
      case 1l:
        id1594x_1 = id1594in_option1;
        break;
      default:
        id1594x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1594out_result = (id1594x_1);
  }
  { // Node ID: 2609 (NodeConstantRawBits)
  }
  HWOffsetFix<64,0,UNSIGNED> id1723out_result;

  { // Node ID: 1723 (NodeAdd)
    const HWOffsetFix<64,0,UNSIGNED> &id1723in_a = id1594out_result;
    const HWOffsetFix<64,0,UNSIGNED> &id1723in_b = id2609out_value;

    id1723out_result = (add_fixed<64,0,UNSIGNED,TRUNCATE>(id1723in_a,id1723in_b));
  }
  HWOffsetFix<64,0,UNSIGNED> id1724out_result;

  { // Node ID: 1724 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1724in_sel = id2167out_result;
    const HWOffsetFix<64,0,UNSIGNED> &id1724in_option0 = id1594out_result;
    const HWOffsetFix<64,0,UNSIGNED> &id1724in_option1 = id1723out_result;

    HWOffsetFix<64,0,UNSIGNED> id1724x_1;

    switch((id1724in_sel.getValueAsLong())) {
      case 0l:
        id1724x_1 = id1724in_option0;
        break;
      case 1l:
        id1724x_1 = id1724in_option1;
        break;
      default:
        id1724x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1724out_result = (id1724x_1);
  }
  if ( (getFillLevel() >= (30l)) && (getFlushLevel() < (30l)|| !isFlushingActive() ))
  { // Node ID: 1764 (NodeOutput)
    const HWOffsetFix<1,0,UNSIGNED> &id1764in_output_control = id1762out_result;
    const HWOffsetFix<64,0,UNSIGNED> &id1764in_data = id1724out_result;

    bool id1764x_1;

    (id1764x_1) = ((id1764in_output_control.getValueAsBool())&(!(((getFlushLevel())>=(30l))&(isFlushingActive()))));
    if((id1764x_1)) {
      writeOutput(m_o_1_0, id1764in_data);
    }
  }
  { // Node ID: 1766 (NodeInputMappedReg)
  }
  HWOffsetFix<1,0,UNSIGNED> id1767out_result;

  { // Node ID: 1767 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id1767in_a = id1766out_io_o_1_1_force_disabled;

    id1767out_result = (not_fixed(id1767in_a));
  }
  { // Node ID: 2608 (NodeConstantRawBits)
  }
  HWOffsetFix<1,0,UNSIGNED> id2177out_result;

  { // Node ID: 2177 (NodeEqInlined)
    const HWOffsetFix<32,0,TWOSCOMPLEMENT> &id2177in_a = id12out_compute;
    const HWOffsetFix<32,0,TWOSCOMPLEMENT> &id2177in_b = id2608out_value;

    id2177out_result = (eq_fixed(id2177in_a,id2177in_b));
  }
  HWOffsetFix<64,2,UNSIGNED> id2178out_output;

  { // Node ID: 2178 (NodeReinterpret)
    const HWOffsetFix<64,0,UNSIGNED> &id2178in_input = id737out_o;

    id2178out_output = (cast_bits2fixed<64,2,UNSIGNED>((cast_fixed2bits(id2178in_input))));
  }
  HWOffsetFix<64,0,UNSIGNED> id2179out_o;

  { // Node ID: 2179 (NodeCast)
    const HWOffsetFix<64,2,UNSIGNED> &id2179in_i = id2178out_output;

    id2179out_o = (cast_fixed2fixed<64,0,UNSIGNED,TRUNCATE>(id2179in_i));
  }
  HWOffsetFix<64,0,UNSIGNED> id1413out_result;

  { // Node ID: 1413 (NodeAdd)
    const HWOffsetFix<64,0,UNSIGNED> &id1413in_a = id2179out_o;
    const HWOffsetFix<64,0,UNSIGNED> &id1413in_b = id845out_o;

    id1413out_result = (add_fixed<64,0,UNSIGNED,TRUNCATE>(id1413in_a,id1413in_b));
  }
  HWRawBits<64> id2180out_dataout;

  { // Node ID: 2180 (NodeShift)
    const HWOffsetFix<64,0,UNSIGNED> &id2180in_datain = id1413out_result;

    id2180out_dataout = (shift_right_fixed(id2180in_datain,(2l)));
  }
  HWOffsetFix<64,0,UNSIGNED> id1627out_output;

  { // Node ID: 1627 (NodeReinterpret)
    const HWRawBits<64> &id1627in_input = id2180out_dataout;

    id1627out_output = (cast_bits2fixed<64,0,UNSIGNED>(id1627in_input));
  }
  HWOffsetFix<1,0,UNSIGNED> id1628out_o;

  { // Node ID: 1628 (NodeCast)
    const HWOffsetFix<64,0,UNSIGNED> &id1628in_i = id1627out_output;

    id1628out_o = (cast_fixed2fixed<1,0,UNSIGNED,TRUNCATE>(id1628in_i));
  }
  { // Node ID: 2573 (NodeFIFO)
    const HWOffsetFix<1,0,UNSIGNED> &id2573in_input = id1628out_o;

    id2573out_output[(getCycle()+7)%8] = id2573in_input;
  }
  HWRawBits<64> id2181out_dataout;

  { // Node ID: 2181 (NodeShift)
    const HWOffsetFix<64,0,UNSIGNED> &id2181in_datain = id1413out_result;

    id2181out_dataout = (shift_right_fixed(id2181in_datain,(1l)));
  }
  HWOffsetFix<64,0,UNSIGNED> id1617out_output;

  { // Node ID: 1617 (NodeReinterpret)
    const HWRawBits<64> &id1617in_input = id2181out_dataout;

    id1617out_output = (cast_bits2fixed<64,0,UNSIGNED>(id1617in_input));
  }
  HWOffsetFix<1,0,UNSIGNED> id1618out_o;

  { // Node ID: 1618 (NodeCast)
    const HWOffsetFix<64,0,UNSIGNED> &id1618in_i = id1617out_output;

    id1618out_o = (cast_fixed2fixed<1,0,UNSIGNED,TRUNCATE>(id1618in_i));
  }
  { // Node ID: 2569 (NodeFIFO)
    const HWOffsetFix<1,0,UNSIGNED> &id2569in_input = id1618out_o;

    id2569out_output[(getCycle()+7)%8] = id2569in_input;
  }
  HWRawBits<64> id2229out_output;

  { // Node ID: 2229 (NodeReinterpret)
    const HWOffsetFix<64,0,UNSIGNED> &id2229in_input = id1413out_result;

    id2229out_output = (cast_fixed2bits(id2229in_input));
  }
  HWOffsetFix<64,0,UNSIGNED> id1597out_output;

  { // Node ID: 1597 (NodeReinterpret)
    const HWRawBits<64> &id1597in_input = id2229out_output;

    id1597out_output = (cast_bits2fixed<64,0,UNSIGNED>(id1597in_input));
  }
  HWOffsetFix<1,0,UNSIGNED> id1598out_o;

  { // Node ID: 1598 (NodeCast)
    const HWOffsetFix<64,0,UNSIGNED> &id1598in_i = id1597out_output;

    id1598out_o = (cast_fixed2fixed<1,0,UNSIGNED,TRUNCATE>(id1598in_i));
  }
  { // Node ID: 2567 (NodeFIFO)
    const HWOffsetFix<1,0,UNSIGNED> &id2567in_input = id1598out_o;

    id2567out_output[(getCycle()+7)%8] = id2567in_input;
  }
  HWOffsetFix<64,0,UNSIGNED> id1599out_result;

  { // Node ID: 1599 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1599in_sel = id2567out_output[getCycle()%8];
    const HWOffsetFix<64,0,UNSIGNED> &id1599in_option0 = id1780out_doutb[getCycle()%3];
    const HWOffsetFix<64,0,UNSIGNED> &id1599in_option1 = id1781out_doutb[getCycle()%3];

    HWOffsetFix<64,0,UNSIGNED> id1599x_1;

    switch((id1599in_sel.getValueAsLong())) {
      case 0l:
        id1599x_1 = id1599in_option0;
        break;
      case 1l:
        id1599x_1 = id1599in_option1;
        break;
      default:
        id1599x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1599out_result = (id1599x_1);
  }
  HWRawBits<64> id2230out_output;

  { // Node ID: 2230 (NodeReinterpret)
    const HWOffsetFix<64,0,UNSIGNED> &id2230in_input = id1413out_result;

    id2230out_output = (cast_fixed2bits(id2230in_input));
  }
  HWOffsetFix<64,0,UNSIGNED> id1602out_output;

  { // Node ID: 1602 (NodeReinterpret)
    const HWRawBits<64> &id1602in_input = id2230out_output;

    id1602out_output = (cast_bits2fixed<64,0,UNSIGNED>(id1602in_input));
  }
  HWOffsetFix<1,0,UNSIGNED> id1603out_o;

  { // Node ID: 1603 (NodeCast)
    const HWOffsetFix<64,0,UNSIGNED> &id1603in_i = id1602out_output;

    id1603out_o = (cast_fixed2fixed<1,0,UNSIGNED,TRUNCATE>(id1603in_i));
  }
  { // Node ID: 2568 (NodeFIFO)
    const HWOffsetFix<1,0,UNSIGNED> &id2568in_input = id1603out_o;

    id2568out_output[(getCycle()+7)%8] = id2568in_input;
  }
  HWOffsetFix<64,0,UNSIGNED> id1604out_result;

  { // Node ID: 1604 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1604in_sel = id2568out_output[getCycle()%8];
    const HWOffsetFix<64,0,UNSIGNED> &id1604in_option0 = id1782out_doutb[getCycle()%3];
    const HWOffsetFix<64,0,UNSIGNED> &id1604in_option1 = id1783out_doutb[getCycle()%3];

    HWOffsetFix<64,0,UNSIGNED> id1604x_1;

    switch((id1604in_sel.getValueAsLong())) {
      case 0l:
        id1604x_1 = id1604in_option0;
        break;
      case 1l:
        id1604x_1 = id1604in_option1;
        break;
      default:
        id1604x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1604out_result = (id1604x_1);
  }
  HWOffsetFix<64,0,UNSIGNED> id1619out_result;

  { // Node ID: 1619 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1619in_sel = id2569out_output[getCycle()%8];
    const HWOffsetFix<64,0,UNSIGNED> &id1619in_option0 = id1599out_result;
    const HWOffsetFix<64,0,UNSIGNED> &id1619in_option1 = id1604out_result;

    HWOffsetFix<64,0,UNSIGNED> id1619x_1;

    switch((id1619in_sel.getValueAsLong())) {
      case 0l:
        id1619x_1 = id1619in_option0;
        break;
      case 1l:
        id1619x_1 = id1619in_option1;
        break;
      default:
        id1619x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1619out_result = (id1619x_1);
  }
  HWRawBits<64> id2184out_dataout;

  { // Node ID: 2184 (NodeShift)
    const HWOffsetFix<64,0,UNSIGNED> &id2184in_datain = id1413out_result;

    id2184out_dataout = (shift_right_fixed(id2184in_datain,(1l)));
  }
  HWOffsetFix<64,0,UNSIGNED> id1622out_output;

  { // Node ID: 1622 (NodeReinterpret)
    const HWRawBits<64> &id1622in_input = id2184out_dataout;

    id1622out_output = (cast_bits2fixed<64,0,UNSIGNED>(id1622in_input));
  }
  HWOffsetFix<1,0,UNSIGNED> id1623out_o;

  { // Node ID: 1623 (NodeCast)
    const HWOffsetFix<64,0,UNSIGNED> &id1623in_i = id1622out_output;

    id1623out_o = (cast_fixed2fixed<1,0,UNSIGNED,TRUNCATE>(id1623in_i));
  }
  { // Node ID: 2572 (NodeFIFO)
    const HWOffsetFix<1,0,UNSIGNED> &id2572in_input = id1623out_o;

    id2572out_output[(getCycle()+7)%8] = id2572in_input;
  }
  HWRawBits<64> id2231out_output;

  { // Node ID: 2231 (NodeReinterpret)
    const HWOffsetFix<64,0,UNSIGNED> &id2231in_input = id1413out_result;

    id2231out_output = (cast_fixed2bits(id2231in_input));
  }
  HWOffsetFix<64,0,UNSIGNED> id1607out_output;

  { // Node ID: 1607 (NodeReinterpret)
    const HWRawBits<64> &id1607in_input = id2231out_output;

    id1607out_output = (cast_bits2fixed<64,0,UNSIGNED>(id1607in_input));
  }
  HWOffsetFix<1,0,UNSIGNED> id1608out_o;

  { // Node ID: 1608 (NodeCast)
    const HWOffsetFix<64,0,UNSIGNED> &id1608in_i = id1607out_output;

    id1608out_o = (cast_fixed2fixed<1,0,UNSIGNED,TRUNCATE>(id1608in_i));
  }
  { // Node ID: 2570 (NodeFIFO)
    const HWOffsetFix<1,0,UNSIGNED> &id2570in_input = id1608out_o;

    id2570out_output[(getCycle()+7)%8] = id2570in_input;
  }
  HWOffsetFix<64,0,UNSIGNED> id1609out_result;

  { // Node ID: 1609 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1609in_sel = id2570out_output[getCycle()%8];
    const HWOffsetFix<64,0,UNSIGNED> &id1609in_option0 = id1784out_doutb[getCycle()%3];
    const HWOffsetFix<64,0,UNSIGNED> &id1609in_option1 = id1785out_doutb[getCycle()%3];

    HWOffsetFix<64,0,UNSIGNED> id1609x_1;

    switch((id1609in_sel.getValueAsLong())) {
      case 0l:
        id1609x_1 = id1609in_option0;
        break;
      case 1l:
        id1609x_1 = id1609in_option1;
        break;
      default:
        id1609x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1609out_result = (id1609x_1);
  }
  HWRawBits<64> id2232out_output;

  { // Node ID: 2232 (NodeReinterpret)
    const HWOffsetFix<64,0,UNSIGNED> &id2232in_input = id1413out_result;

    id2232out_output = (cast_fixed2bits(id2232in_input));
  }
  HWOffsetFix<64,0,UNSIGNED> id1612out_output;

  { // Node ID: 1612 (NodeReinterpret)
    const HWRawBits<64> &id1612in_input = id2232out_output;

    id1612out_output = (cast_bits2fixed<64,0,UNSIGNED>(id1612in_input));
  }
  HWOffsetFix<1,0,UNSIGNED> id1613out_o;

  { // Node ID: 1613 (NodeCast)
    const HWOffsetFix<64,0,UNSIGNED> &id1613in_i = id1612out_output;

    id1613out_o = (cast_fixed2fixed<1,0,UNSIGNED,TRUNCATE>(id1613in_i));
  }
  { // Node ID: 2571 (NodeFIFO)
    const HWOffsetFix<1,0,UNSIGNED> &id2571in_input = id1613out_o;

    id2571out_output[(getCycle()+7)%8] = id2571in_input;
  }
  HWOffsetFix<64,0,UNSIGNED> id1614out_result;

  { // Node ID: 1614 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1614in_sel = id2571out_output[getCycle()%8];
    const HWOffsetFix<64,0,UNSIGNED> &id1614in_option0 = id1786out_doutb[getCycle()%3];
    const HWOffsetFix<64,0,UNSIGNED> &id1614in_option1 = id1787out_doutb[getCycle()%3];

    HWOffsetFix<64,0,UNSIGNED> id1614x_1;

    switch((id1614in_sel.getValueAsLong())) {
      case 0l:
        id1614x_1 = id1614in_option0;
        break;
      case 1l:
        id1614x_1 = id1614in_option1;
        break;
      default:
        id1614x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1614out_result = (id1614x_1);
  }
  HWOffsetFix<64,0,UNSIGNED> id1624out_result;

  { // Node ID: 1624 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1624in_sel = id2572out_output[getCycle()%8];
    const HWOffsetFix<64,0,UNSIGNED> &id1624in_option0 = id1609out_result;
    const HWOffsetFix<64,0,UNSIGNED> &id1624in_option1 = id1614out_result;

    HWOffsetFix<64,0,UNSIGNED> id1624x_1;

    switch((id1624in_sel.getValueAsLong())) {
      case 0l:
        id1624x_1 = id1624in_option0;
        break;
      case 1l:
        id1624x_1 = id1624in_option1;
        break;
      default:
        id1624x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1624out_result = (id1624x_1);
  }
  HWOffsetFix<64,0,UNSIGNED> id1629out_result;

  { // Node ID: 1629 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1629in_sel = id2573out_output[getCycle()%8];
    const HWOffsetFix<64,0,UNSIGNED> &id1629in_option0 = id1619out_result;
    const HWOffsetFix<64,0,UNSIGNED> &id1629in_option1 = id1624out_result;

    HWOffsetFix<64,0,UNSIGNED> id1629x_1;

    switch((id1629in_sel.getValueAsLong())) {
      case 0l:
        id1629x_1 = id1629in_option0;
        break;
      case 1l:
        id1629x_1 = id1629in_option1;
        break;
      default:
        id1629x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1629out_result = (id1629x_1);
  }
  { // Node ID: 2607 (NodeConstantRawBits)
  }
  HWOffsetFix<64,0,UNSIGNED> id1728out_result;

  { // Node ID: 1728 (NodeAdd)
    const HWOffsetFix<64,0,UNSIGNED> &id1728in_a = id1629out_result;
    const HWOffsetFix<64,0,UNSIGNED> &id1728in_b = id2607out_value;

    id1728out_result = (add_fixed<64,0,UNSIGNED,TRUNCATE>(id1728in_a,id1728in_b));
  }
  HWOffsetFix<64,0,UNSIGNED> id1729out_result;

  { // Node ID: 1729 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1729in_sel = id2177out_result;
    const HWOffsetFix<64,0,UNSIGNED> &id1729in_option0 = id1629out_result;
    const HWOffsetFix<64,0,UNSIGNED> &id1729in_option1 = id1728out_result;

    HWOffsetFix<64,0,UNSIGNED> id1729x_1;

    switch((id1729in_sel.getValueAsLong())) {
      case 0l:
        id1729x_1 = id1729in_option0;
        break;
      case 1l:
        id1729x_1 = id1729in_option1;
        break;
      default:
        id1729x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1729out_result = (id1729x_1);
  }
  if ( (getFillLevel() >= (30l)) && (getFlushLevel() < (30l)|| !isFlushingActive() ))
  { // Node ID: 1769 (NodeOutput)
    const HWOffsetFix<1,0,UNSIGNED> &id1769in_output_control = id1767out_result;
    const HWOffsetFix<64,0,UNSIGNED> &id1769in_data = id1729out_result;

    bool id1769x_1;

    (id1769x_1) = ((id1769in_output_control.getValueAsBool())&(!(((getFlushLevel())>=(30l))&(isFlushingActive()))));
    if((id1769x_1)) {
      writeOutput(m_o_1_1, id1769in_data);
    }
  }
  { // Node ID: 1771 (NodeInputMappedReg)
  }
  HWOffsetFix<1,0,UNSIGNED> id1772out_result;

  { // Node ID: 1772 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id1772in_a = id1771out_io_o_1_2_force_disabled;

    id1772out_result = (not_fixed(id1772in_a));
  }
  { // Node ID: 2606 (NodeConstantRawBits)
  }
  HWOffsetFix<1,0,UNSIGNED> id2187out_result;

  { // Node ID: 2187 (NodeEqInlined)
    const HWOffsetFix<32,0,TWOSCOMPLEMENT> &id2187in_a = id12out_compute;
    const HWOffsetFix<32,0,TWOSCOMPLEMENT> &id2187in_b = id2606out_value;

    id2187out_result = (eq_fixed(id2187in_a,id2187in_b));
  }
  HWOffsetFix<64,2,UNSIGNED> id2188out_output;

  { // Node ID: 2188 (NodeReinterpret)
    const HWOffsetFix<64,0,UNSIGNED> &id2188in_input = id741out_o;

    id2188out_output = (cast_bits2fixed<64,2,UNSIGNED>((cast_fixed2bits(id2188in_input))));
  }
  HWOffsetFix<64,0,UNSIGNED> id2189out_o;

  { // Node ID: 2189 (NodeCast)
    const HWOffsetFix<64,2,UNSIGNED> &id2189in_i = id2188out_output;

    id2189out_o = (cast_fixed2fixed<64,0,UNSIGNED,TRUNCATE>(id2189in_i));
  }
  HWOffsetFix<64,0,UNSIGNED> id1416out_result;

  { // Node ID: 1416 (NodeAdd)
    const HWOffsetFix<64,0,UNSIGNED> &id1416in_a = id2189out_o;
    const HWOffsetFix<64,0,UNSIGNED> &id1416in_b = id855out_o;

    id1416out_result = (add_fixed<64,0,UNSIGNED,TRUNCATE>(id1416in_a,id1416in_b));
  }
  HWRawBits<64> id2190out_dataout;

  { // Node ID: 2190 (NodeShift)
    const HWOffsetFix<64,0,UNSIGNED> &id2190in_datain = id1416out_result;

    id2190out_dataout = (shift_right_fixed(id2190in_datain,(2l)));
  }
  HWOffsetFix<64,0,UNSIGNED> id1662out_output;

  { // Node ID: 1662 (NodeReinterpret)
    const HWRawBits<64> &id1662in_input = id2190out_dataout;

    id1662out_output = (cast_bits2fixed<64,0,UNSIGNED>(id1662in_input));
  }
  HWOffsetFix<1,0,UNSIGNED> id1663out_o;

  { // Node ID: 1663 (NodeCast)
    const HWOffsetFix<64,0,UNSIGNED> &id1663in_i = id1662out_output;

    id1663out_o = (cast_fixed2fixed<1,0,UNSIGNED,TRUNCATE>(id1663in_i));
  }
  { // Node ID: 2580 (NodeFIFO)
    const HWOffsetFix<1,0,UNSIGNED> &id2580in_input = id1663out_o;

    id2580out_output[(getCycle()+6)%7] = id2580in_input;
  }
  HWRawBits<64> id2191out_dataout;

  { // Node ID: 2191 (NodeShift)
    const HWOffsetFix<64,0,UNSIGNED> &id2191in_datain = id1416out_result;

    id2191out_dataout = (shift_right_fixed(id2191in_datain,(1l)));
  }
  HWOffsetFix<64,0,UNSIGNED> id1652out_output;

  { // Node ID: 1652 (NodeReinterpret)
    const HWRawBits<64> &id1652in_input = id2191out_dataout;

    id1652out_output = (cast_bits2fixed<64,0,UNSIGNED>(id1652in_input));
  }
  HWOffsetFix<1,0,UNSIGNED> id1653out_o;

  { // Node ID: 1653 (NodeCast)
    const HWOffsetFix<64,0,UNSIGNED> &id1653in_i = id1652out_output;

    id1653out_o = (cast_fixed2fixed<1,0,UNSIGNED,TRUNCATE>(id1653in_i));
  }
  { // Node ID: 2576 (NodeFIFO)
    const HWOffsetFix<1,0,UNSIGNED> &id2576in_input = id1653out_o;

    id2576out_output[(getCycle()+6)%7] = id2576in_input;
  }
  HWRawBits<64> id2233out_output;

  { // Node ID: 2233 (NodeReinterpret)
    const HWOffsetFix<64,0,UNSIGNED> &id2233in_input = id1416out_result;

    id2233out_output = (cast_fixed2bits(id2233in_input));
  }
  HWOffsetFix<64,0,UNSIGNED> id1632out_output;

  { // Node ID: 1632 (NodeReinterpret)
    const HWRawBits<64> &id1632in_input = id2233out_output;

    id1632out_output = (cast_bits2fixed<64,0,UNSIGNED>(id1632in_input));
  }
  HWOffsetFix<1,0,UNSIGNED> id1633out_o;

  { // Node ID: 1633 (NodeCast)
    const HWOffsetFix<64,0,UNSIGNED> &id1633in_i = id1632out_output;

    id1633out_o = (cast_fixed2fixed<1,0,UNSIGNED,TRUNCATE>(id1633in_i));
  }
  { // Node ID: 2574 (NodeFIFO)
    const HWOffsetFix<1,0,UNSIGNED> &id2574in_input = id1633out_o;

    id2574out_output[(getCycle()+6)%7] = id2574in_input;
  }
  HWOffsetFix<64,0,UNSIGNED> id1634out_result;

  { // Node ID: 1634 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1634in_sel = id2574out_output[getCycle()%7];
    const HWOffsetFix<64,0,UNSIGNED> &id1634in_option0 = id1780out_doutb[getCycle()%3];
    const HWOffsetFix<64,0,UNSIGNED> &id1634in_option1 = id1781out_doutb[getCycle()%3];

    HWOffsetFix<64,0,UNSIGNED> id1634x_1;

    switch((id1634in_sel.getValueAsLong())) {
      case 0l:
        id1634x_1 = id1634in_option0;
        break;
      case 1l:
        id1634x_1 = id1634in_option1;
        break;
      default:
        id1634x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1634out_result = (id1634x_1);
  }
  HWRawBits<64> id2234out_output;

  { // Node ID: 2234 (NodeReinterpret)
    const HWOffsetFix<64,0,UNSIGNED> &id2234in_input = id1416out_result;

    id2234out_output = (cast_fixed2bits(id2234in_input));
  }
  HWOffsetFix<64,0,UNSIGNED> id1637out_output;

  { // Node ID: 1637 (NodeReinterpret)
    const HWRawBits<64> &id1637in_input = id2234out_output;

    id1637out_output = (cast_bits2fixed<64,0,UNSIGNED>(id1637in_input));
  }
  HWOffsetFix<1,0,UNSIGNED> id1638out_o;

  { // Node ID: 1638 (NodeCast)
    const HWOffsetFix<64,0,UNSIGNED> &id1638in_i = id1637out_output;

    id1638out_o = (cast_fixed2fixed<1,0,UNSIGNED,TRUNCATE>(id1638in_i));
  }
  { // Node ID: 2575 (NodeFIFO)
    const HWOffsetFix<1,0,UNSIGNED> &id2575in_input = id1638out_o;

    id2575out_output[(getCycle()+6)%7] = id2575in_input;
  }
  HWOffsetFix<64,0,UNSIGNED> id1639out_result;

  { // Node ID: 1639 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1639in_sel = id2575out_output[getCycle()%7];
    const HWOffsetFix<64,0,UNSIGNED> &id1639in_option0 = id1782out_doutb[getCycle()%3];
    const HWOffsetFix<64,0,UNSIGNED> &id1639in_option1 = id1783out_doutb[getCycle()%3];

    HWOffsetFix<64,0,UNSIGNED> id1639x_1;

    switch((id1639in_sel.getValueAsLong())) {
      case 0l:
        id1639x_1 = id1639in_option0;
        break;
      case 1l:
        id1639x_1 = id1639in_option1;
        break;
      default:
        id1639x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1639out_result = (id1639x_1);
  }
  HWOffsetFix<64,0,UNSIGNED> id1654out_result;

  { // Node ID: 1654 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1654in_sel = id2576out_output[getCycle()%7];
    const HWOffsetFix<64,0,UNSIGNED> &id1654in_option0 = id1634out_result;
    const HWOffsetFix<64,0,UNSIGNED> &id1654in_option1 = id1639out_result;

    HWOffsetFix<64,0,UNSIGNED> id1654x_1;

    switch((id1654in_sel.getValueAsLong())) {
      case 0l:
        id1654x_1 = id1654in_option0;
        break;
      case 1l:
        id1654x_1 = id1654in_option1;
        break;
      default:
        id1654x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1654out_result = (id1654x_1);
  }
  HWRawBits<64> id2194out_dataout;

  { // Node ID: 2194 (NodeShift)
    const HWOffsetFix<64,0,UNSIGNED> &id2194in_datain = id1416out_result;

    id2194out_dataout = (shift_right_fixed(id2194in_datain,(1l)));
  }
  HWOffsetFix<64,0,UNSIGNED> id1657out_output;

  { // Node ID: 1657 (NodeReinterpret)
    const HWRawBits<64> &id1657in_input = id2194out_dataout;

    id1657out_output = (cast_bits2fixed<64,0,UNSIGNED>(id1657in_input));
  }
  HWOffsetFix<1,0,UNSIGNED> id1658out_o;

  { // Node ID: 1658 (NodeCast)
    const HWOffsetFix<64,0,UNSIGNED> &id1658in_i = id1657out_output;

    id1658out_o = (cast_fixed2fixed<1,0,UNSIGNED,TRUNCATE>(id1658in_i));
  }
  { // Node ID: 2579 (NodeFIFO)
    const HWOffsetFix<1,0,UNSIGNED> &id2579in_input = id1658out_o;

    id2579out_output[(getCycle()+6)%7] = id2579in_input;
  }
  HWRawBits<64> id2235out_output;

  { // Node ID: 2235 (NodeReinterpret)
    const HWOffsetFix<64,0,UNSIGNED> &id2235in_input = id1416out_result;

    id2235out_output = (cast_fixed2bits(id2235in_input));
  }
  HWOffsetFix<64,0,UNSIGNED> id1642out_output;

  { // Node ID: 1642 (NodeReinterpret)
    const HWRawBits<64> &id1642in_input = id2235out_output;

    id1642out_output = (cast_bits2fixed<64,0,UNSIGNED>(id1642in_input));
  }
  HWOffsetFix<1,0,UNSIGNED> id1643out_o;

  { // Node ID: 1643 (NodeCast)
    const HWOffsetFix<64,0,UNSIGNED> &id1643in_i = id1642out_output;

    id1643out_o = (cast_fixed2fixed<1,0,UNSIGNED,TRUNCATE>(id1643in_i));
  }
  { // Node ID: 2577 (NodeFIFO)
    const HWOffsetFix<1,0,UNSIGNED> &id2577in_input = id1643out_o;

    id2577out_output[(getCycle()+6)%7] = id2577in_input;
  }
  HWOffsetFix<64,0,UNSIGNED> id1644out_result;

  { // Node ID: 1644 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1644in_sel = id2577out_output[getCycle()%7];
    const HWOffsetFix<64,0,UNSIGNED> &id1644in_option0 = id1784out_doutb[getCycle()%3];
    const HWOffsetFix<64,0,UNSIGNED> &id1644in_option1 = id1785out_doutb[getCycle()%3];

    HWOffsetFix<64,0,UNSIGNED> id1644x_1;

    switch((id1644in_sel.getValueAsLong())) {
      case 0l:
        id1644x_1 = id1644in_option0;
        break;
      case 1l:
        id1644x_1 = id1644in_option1;
        break;
      default:
        id1644x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1644out_result = (id1644x_1);
  }
  HWRawBits<64> id2236out_output;

  { // Node ID: 2236 (NodeReinterpret)
    const HWOffsetFix<64,0,UNSIGNED> &id2236in_input = id1416out_result;

    id2236out_output = (cast_fixed2bits(id2236in_input));
  }
  HWOffsetFix<64,0,UNSIGNED> id1647out_output;

  { // Node ID: 1647 (NodeReinterpret)
    const HWRawBits<64> &id1647in_input = id2236out_output;

    id1647out_output = (cast_bits2fixed<64,0,UNSIGNED>(id1647in_input));
  }
  HWOffsetFix<1,0,UNSIGNED> id1648out_o;

  { // Node ID: 1648 (NodeCast)
    const HWOffsetFix<64,0,UNSIGNED> &id1648in_i = id1647out_output;

    id1648out_o = (cast_fixed2fixed<1,0,UNSIGNED,TRUNCATE>(id1648in_i));
  }
  { // Node ID: 2578 (NodeFIFO)
    const HWOffsetFix<1,0,UNSIGNED> &id2578in_input = id1648out_o;

    id2578out_output[(getCycle()+6)%7] = id2578in_input;
  }
  HWOffsetFix<64,0,UNSIGNED> id1649out_result;

  { // Node ID: 1649 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1649in_sel = id2578out_output[getCycle()%7];
    const HWOffsetFix<64,0,UNSIGNED> &id1649in_option0 = id1786out_doutb[getCycle()%3];
    const HWOffsetFix<64,0,UNSIGNED> &id1649in_option1 = id1787out_doutb[getCycle()%3];

    HWOffsetFix<64,0,UNSIGNED> id1649x_1;

    switch((id1649in_sel.getValueAsLong())) {
      case 0l:
        id1649x_1 = id1649in_option0;
        break;
      case 1l:
        id1649x_1 = id1649in_option1;
        break;
      default:
        id1649x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1649out_result = (id1649x_1);
  }
  HWOffsetFix<64,0,UNSIGNED> id1659out_result;

  { // Node ID: 1659 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1659in_sel = id2579out_output[getCycle()%7];
    const HWOffsetFix<64,0,UNSIGNED> &id1659in_option0 = id1644out_result;
    const HWOffsetFix<64,0,UNSIGNED> &id1659in_option1 = id1649out_result;

    HWOffsetFix<64,0,UNSIGNED> id1659x_1;

    switch((id1659in_sel.getValueAsLong())) {
      case 0l:
        id1659x_1 = id1659in_option0;
        break;
      case 1l:
        id1659x_1 = id1659in_option1;
        break;
      default:
        id1659x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1659out_result = (id1659x_1);
  }
  HWOffsetFix<64,0,UNSIGNED> id1664out_result;

  { // Node ID: 1664 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1664in_sel = id2580out_output[getCycle()%7];
    const HWOffsetFix<64,0,UNSIGNED> &id1664in_option0 = id1654out_result;
    const HWOffsetFix<64,0,UNSIGNED> &id1664in_option1 = id1659out_result;

    HWOffsetFix<64,0,UNSIGNED> id1664x_1;

    switch((id1664in_sel.getValueAsLong())) {
      case 0l:
        id1664x_1 = id1664in_option0;
        break;
      case 1l:
        id1664x_1 = id1664in_option1;
        break;
      default:
        id1664x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1664out_result = (id1664x_1);
  }
  { // Node ID: 2605 (NodeConstantRawBits)
  }
  HWOffsetFix<64,0,UNSIGNED> id1733out_result;

  { // Node ID: 1733 (NodeAdd)
    const HWOffsetFix<64,0,UNSIGNED> &id1733in_a = id1664out_result;
    const HWOffsetFix<64,0,UNSIGNED> &id1733in_b = id2605out_value;

    id1733out_result = (add_fixed<64,0,UNSIGNED,TRUNCATE>(id1733in_a,id1733in_b));
  }
  HWOffsetFix<64,0,UNSIGNED> id1734out_result;

  { // Node ID: 1734 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1734in_sel = id2187out_result;
    const HWOffsetFix<64,0,UNSIGNED> &id1734in_option0 = id1664out_result;
    const HWOffsetFix<64,0,UNSIGNED> &id1734in_option1 = id1733out_result;

    HWOffsetFix<64,0,UNSIGNED> id1734x_1;

    switch((id1734in_sel.getValueAsLong())) {
      case 0l:
        id1734x_1 = id1734in_option0;
        break;
      case 1l:
        id1734x_1 = id1734in_option1;
        break;
      default:
        id1734x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1734out_result = (id1734x_1);
  }
  if ( (getFillLevel() >= (30l)) && (getFlushLevel() < (30l)|| !isFlushingActive() ))
  { // Node ID: 1774 (NodeOutput)
    const HWOffsetFix<1,0,UNSIGNED> &id1774in_output_control = id1772out_result;
    const HWOffsetFix<64,0,UNSIGNED> &id1774in_data = id1734out_result;

    bool id1774x_1;

    (id1774x_1) = ((id1774in_output_control.getValueAsBool())&(!(((getFlushLevel())>=(30l))&(isFlushingActive()))));
    if((id1774x_1)) {
      writeOutput(m_o_1_2, id1774in_data);
    }
  }
  { // Node ID: 1776 (NodeInputMappedReg)
  }
  HWOffsetFix<1,0,UNSIGNED> id1777out_result;

  { // Node ID: 1777 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id1777in_a = id1776out_io_o_1_3_force_disabled;

    id1777out_result = (not_fixed(id1777in_a));
  }
  { // Node ID: 2604 (NodeConstantRawBits)
  }
  HWOffsetFix<1,0,UNSIGNED> id2197out_result;

  { // Node ID: 2197 (NodeEqInlined)
    const HWOffsetFix<32,0,TWOSCOMPLEMENT> &id2197in_a = id12out_compute;
    const HWOffsetFix<32,0,TWOSCOMPLEMENT> &id2197in_b = id2604out_value;

    id2197out_result = (eq_fixed(id2197in_a,id2197in_b));
  }
  HWOffsetFix<64,2,UNSIGNED> id2198out_output;

  { // Node ID: 2198 (NodeReinterpret)
    const HWOffsetFix<64,0,UNSIGNED> &id2198in_input = id745out_o;

    id2198out_output = (cast_bits2fixed<64,2,UNSIGNED>((cast_fixed2bits(id2198in_input))));
  }
  HWOffsetFix<64,0,UNSIGNED> id2199out_o;

  { // Node ID: 2199 (NodeCast)
    const HWOffsetFix<64,2,UNSIGNED> &id2199in_i = id2198out_output;

    id2199out_o = (cast_fixed2fixed<64,0,UNSIGNED,TRUNCATE>(id2199in_i));
  }
  HWOffsetFix<64,0,UNSIGNED> id1419out_result;

  { // Node ID: 1419 (NodeAdd)
    const HWOffsetFix<64,0,UNSIGNED> &id1419in_a = id2199out_o;
    const HWOffsetFix<64,0,UNSIGNED> &id1419in_b = id865out_o;

    id1419out_result = (add_fixed<64,0,UNSIGNED,TRUNCATE>(id1419in_a,id1419in_b));
  }
  HWRawBits<64> id2200out_dataout;

  { // Node ID: 2200 (NodeShift)
    const HWOffsetFix<64,0,UNSIGNED> &id2200in_datain = id1419out_result;

    id2200out_dataout = (shift_right_fixed(id2200in_datain,(2l)));
  }
  HWOffsetFix<64,0,UNSIGNED> id1697out_output;

  { // Node ID: 1697 (NodeReinterpret)
    const HWRawBits<64> &id1697in_input = id2200out_dataout;

    id1697out_output = (cast_bits2fixed<64,0,UNSIGNED>(id1697in_input));
  }
  HWOffsetFix<1,0,UNSIGNED> id1698out_o;

  { // Node ID: 1698 (NodeCast)
    const HWOffsetFix<64,0,UNSIGNED> &id1698in_i = id1697out_output;

    id1698out_o = (cast_fixed2fixed<1,0,UNSIGNED,TRUNCATE>(id1698in_i));
  }
  { // Node ID: 2587 (NodeFIFO)
    const HWOffsetFix<1,0,UNSIGNED> &id2587in_input = id1698out_o;

    id2587out_output[(getCycle()+5)%6] = id2587in_input;
  }
  HWRawBits<64> id2201out_dataout;

  { // Node ID: 2201 (NodeShift)
    const HWOffsetFix<64,0,UNSIGNED> &id2201in_datain = id1419out_result;

    id2201out_dataout = (shift_right_fixed(id2201in_datain,(1l)));
  }
  HWOffsetFix<64,0,UNSIGNED> id1687out_output;

  { // Node ID: 1687 (NodeReinterpret)
    const HWRawBits<64> &id1687in_input = id2201out_dataout;

    id1687out_output = (cast_bits2fixed<64,0,UNSIGNED>(id1687in_input));
  }
  HWOffsetFix<1,0,UNSIGNED> id1688out_o;

  { // Node ID: 1688 (NodeCast)
    const HWOffsetFix<64,0,UNSIGNED> &id1688in_i = id1687out_output;

    id1688out_o = (cast_fixed2fixed<1,0,UNSIGNED,TRUNCATE>(id1688in_i));
  }
  { // Node ID: 2583 (NodeFIFO)
    const HWOffsetFix<1,0,UNSIGNED> &id2583in_input = id1688out_o;

    id2583out_output[(getCycle()+5)%6] = id2583in_input;
  }
  HWRawBits<64> id2237out_output;

  { // Node ID: 2237 (NodeReinterpret)
    const HWOffsetFix<64,0,UNSIGNED> &id2237in_input = id1419out_result;

    id2237out_output = (cast_fixed2bits(id2237in_input));
  }
  HWOffsetFix<64,0,UNSIGNED> id1667out_output;

  { // Node ID: 1667 (NodeReinterpret)
    const HWRawBits<64> &id1667in_input = id2237out_output;

    id1667out_output = (cast_bits2fixed<64,0,UNSIGNED>(id1667in_input));
  }
  HWOffsetFix<1,0,UNSIGNED> id1668out_o;

  { // Node ID: 1668 (NodeCast)
    const HWOffsetFix<64,0,UNSIGNED> &id1668in_i = id1667out_output;

    id1668out_o = (cast_fixed2fixed<1,0,UNSIGNED,TRUNCATE>(id1668in_i));
  }
  { // Node ID: 2581 (NodeFIFO)
    const HWOffsetFix<1,0,UNSIGNED> &id2581in_input = id1668out_o;

    id2581out_output[(getCycle()+5)%6] = id2581in_input;
  }
  HWOffsetFix<64,0,UNSIGNED> id1669out_result;

  { // Node ID: 1669 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1669in_sel = id2581out_output[getCycle()%6];
    const HWOffsetFix<64,0,UNSIGNED> &id1669in_option0 = id1780out_doutb[getCycle()%3];
    const HWOffsetFix<64,0,UNSIGNED> &id1669in_option1 = id1781out_doutb[getCycle()%3];

    HWOffsetFix<64,0,UNSIGNED> id1669x_1;

    switch((id1669in_sel.getValueAsLong())) {
      case 0l:
        id1669x_1 = id1669in_option0;
        break;
      case 1l:
        id1669x_1 = id1669in_option1;
        break;
      default:
        id1669x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1669out_result = (id1669x_1);
  }
  HWRawBits<64> id2238out_output;

  { // Node ID: 2238 (NodeReinterpret)
    const HWOffsetFix<64,0,UNSIGNED> &id2238in_input = id1419out_result;

    id2238out_output = (cast_fixed2bits(id2238in_input));
  }
  HWOffsetFix<64,0,UNSIGNED> id1672out_output;

  { // Node ID: 1672 (NodeReinterpret)
    const HWRawBits<64> &id1672in_input = id2238out_output;

    id1672out_output = (cast_bits2fixed<64,0,UNSIGNED>(id1672in_input));
  }
  HWOffsetFix<1,0,UNSIGNED> id1673out_o;

  { // Node ID: 1673 (NodeCast)
    const HWOffsetFix<64,0,UNSIGNED> &id1673in_i = id1672out_output;

    id1673out_o = (cast_fixed2fixed<1,0,UNSIGNED,TRUNCATE>(id1673in_i));
  }
  { // Node ID: 2582 (NodeFIFO)
    const HWOffsetFix<1,0,UNSIGNED> &id2582in_input = id1673out_o;

    id2582out_output[(getCycle()+5)%6] = id2582in_input;
  }
  HWOffsetFix<64,0,UNSIGNED> id1674out_result;

  { // Node ID: 1674 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1674in_sel = id2582out_output[getCycle()%6];
    const HWOffsetFix<64,0,UNSIGNED> &id1674in_option0 = id1782out_doutb[getCycle()%3];
    const HWOffsetFix<64,0,UNSIGNED> &id1674in_option1 = id1783out_doutb[getCycle()%3];

    HWOffsetFix<64,0,UNSIGNED> id1674x_1;

    switch((id1674in_sel.getValueAsLong())) {
      case 0l:
        id1674x_1 = id1674in_option0;
        break;
      case 1l:
        id1674x_1 = id1674in_option1;
        break;
      default:
        id1674x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1674out_result = (id1674x_1);
  }
  HWOffsetFix<64,0,UNSIGNED> id1689out_result;

  { // Node ID: 1689 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1689in_sel = id2583out_output[getCycle()%6];
    const HWOffsetFix<64,0,UNSIGNED> &id1689in_option0 = id1669out_result;
    const HWOffsetFix<64,0,UNSIGNED> &id1689in_option1 = id1674out_result;

    HWOffsetFix<64,0,UNSIGNED> id1689x_1;

    switch((id1689in_sel.getValueAsLong())) {
      case 0l:
        id1689x_1 = id1689in_option0;
        break;
      case 1l:
        id1689x_1 = id1689in_option1;
        break;
      default:
        id1689x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1689out_result = (id1689x_1);
  }
  HWRawBits<64> id2204out_dataout;

  { // Node ID: 2204 (NodeShift)
    const HWOffsetFix<64,0,UNSIGNED> &id2204in_datain = id1419out_result;

    id2204out_dataout = (shift_right_fixed(id2204in_datain,(1l)));
  }
  HWOffsetFix<64,0,UNSIGNED> id1692out_output;

  { // Node ID: 1692 (NodeReinterpret)
    const HWRawBits<64> &id1692in_input = id2204out_dataout;

    id1692out_output = (cast_bits2fixed<64,0,UNSIGNED>(id1692in_input));
  }
  HWOffsetFix<1,0,UNSIGNED> id1693out_o;

  { // Node ID: 1693 (NodeCast)
    const HWOffsetFix<64,0,UNSIGNED> &id1693in_i = id1692out_output;

    id1693out_o = (cast_fixed2fixed<1,0,UNSIGNED,TRUNCATE>(id1693in_i));
  }
  { // Node ID: 2586 (NodeFIFO)
    const HWOffsetFix<1,0,UNSIGNED> &id2586in_input = id1693out_o;

    id2586out_output[(getCycle()+5)%6] = id2586in_input;
  }
  HWRawBits<64> id2239out_output;

  { // Node ID: 2239 (NodeReinterpret)
    const HWOffsetFix<64,0,UNSIGNED> &id2239in_input = id1419out_result;

    id2239out_output = (cast_fixed2bits(id2239in_input));
  }
  HWOffsetFix<64,0,UNSIGNED> id1677out_output;

  { // Node ID: 1677 (NodeReinterpret)
    const HWRawBits<64> &id1677in_input = id2239out_output;

    id1677out_output = (cast_bits2fixed<64,0,UNSIGNED>(id1677in_input));
  }
  HWOffsetFix<1,0,UNSIGNED> id1678out_o;

  { // Node ID: 1678 (NodeCast)
    const HWOffsetFix<64,0,UNSIGNED> &id1678in_i = id1677out_output;

    id1678out_o = (cast_fixed2fixed<1,0,UNSIGNED,TRUNCATE>(id1678in_i));
  }
  { // Node ID: 2584 (NodeFIFO)
    const HWOffsetFix<1,0,UNSIGNED> &id2584in_input = id1678out_o;

    id2584out_output[(getCycle()+5)%6] = id2584in_input;
  }
  HWOffsetFix<64,0,UNSIGNED> id1679out_result;

  { // Node ID: 1679 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1679in_sel = id2584out_output[getCycle()%6];
    const HWOffsetFix<64,0,UNSIGNED> &id1679in_option0 = id1784out_doutb[getCycle()%3];
    const HWOffsetFix<64,0,UNSIGNED> &id1679in_option1 = id1785out_doutb[getCycle()%3];

    HWOffsetFix<64,0,UNSIGNED> id1679x_1;

    switch((id1679in_sel.getValueAsLong())) {
      case 0l:
        id1679x_1 = id1679in_option0;
        break;
      case 1l:
        id1679x_1 = id1679in_option1;
        break;
      default:
        id1679x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1679out_result = (id1679x_1);
  }
  HWRawBits<64> id2240out_output;

  { // Node ID: 2240 (NodeReinterpret)
    const HWOffsetFix<64,0,UNSIGNED> &id2240in_input = id1419out_result;

    id2240out_output = (cast_fixed2bits(id2240in_input));
  }
  HWOffsetFix<64,0,UNSIGNED> id1682out_output;

  { // Node ID: 1682 (NodeReinterpret)
    const HWRawBits<64> &id1682in_input = id2240out_output;

    id1682out_output = (cast_bits2fixed<64,0,UNSIGNED>(id1682in_input));
  }
  HWOffsetFix<1,0,UNSIGNED> id1683out_o;

  { // Node ID: 1683 (NodeCast)
    const HWOffsetFix<64,0,UNSIGNED> &id1683in_i = id1682out_output;

    id1683out_o = (cast_fixed2fixed<1,0,UNSIGNED,TRUNCATE>(id1683in_i));
  }
  { // Node ID: 2585 (NodeFIFO)
    const HWOffsetFix<1,0,UNSIGNED> &id2585in_input = id1683out_o;

    id2585out_output[(getCycle()+5)%6] = id2585in_input;
  }
  HWOffsetFix<64,0,UNSIGNED> id1684out_result;

  { // Node ID: 1684 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1684in_sel = id2585out_output[getCycle()%6];
    const HWOffsetFix<64,0,UNSIGNED> &id1684in_option0 = id1786out_doutb[getCycle()%3];
    const HWOffsetFix<64,0,UNSIGNED> &id1684in_option1 = id1787out_doutb[getCycle()%3];

    HWOffsetFix<64,0,UNSIGNED> id1684x_1;

    switch((id1684in_sel.getValueAsLong())) {
      case 0l:
        id1684x_1 = id1684in_option0;
        break;
      case 1l:
        id1684x_1 = id1684in_option1;
        break;
      default:
        id1684x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1684out_result = (id1684x_1);
  }
  HWOffsetFix<64,0,UNSIGNED> id1694out_result;

  { // Node ID: 1694 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1694in_sel = id2586out_output[getCycle()%6];
    const HWOffsetFix<64,0,UNSIGNED> &id1694in_option0 = id1679out_result;
    const HWOffsetFix<64,0,UNSIGNED> &id1694in_option1 = id1684out_result;

    HWOffsetFix<64,0,UNSIGNED> id1694x_1;

    switch((id1694in_sel.getValueAsLong())) {
      case 0l:
        id1694x_1 = id1694in_option0;
        break;
      case 1l:
        id1694x_1 = id1694in_option1;
        break;
      default:
        id1694x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1694out_result = (id1694x_1);
  }
  HWOffsetFix<64,0,UNSIGNED> id1699out_result;

  { // Node ID: 1699 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1699in_sel = id2587out_output[getCycle()%6];
    const HWOffsetFix<64,0,UNSIGNED> &id1699in_option0 = id1689out_result;
    const HWOffsetFix<64,0,UNSIGNED> &id1699in_option1 = id1694out_result;

    HWOffsetFix<64,0,UNSIGNED> id1699x_1;

    switch((id1699in_sel.getValueAsLong())) {
      case 0l:
        id1699x_1 = id1699in_option0;
        break;
      case 1l:
        id1699x_1 = id1699in_option1;
        break;
      default:
        id1699x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1699out_result = (id1699x_1);
  }
  { // Node ID: 2603 (NodeConstantRawBits)
  }
  HWOffsetFix<64,0,UNSIGNED> id1738out_result;

  { // Node ID: 1738 (NodeAdd)
    const HWOffsetFix<64,0,UNSIGNED> &id1738in_a = id1699out_result;
    const HWOffsetFix<64,0,UNSIGNED> &id1738in_b = id2603out_value;

    id1738out_result = (add_fixed<64,0,UNSIGNED,TRUNCATE>(id1738in_a,id1738in_b));
  }
  HWOffsetFix<64,0,UNSIGNED> id1739out_result;

  { // Node ID: 1739 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1739in_sel = id2197out_result;
    const HWOffsetFix<64,0,UNSIGNED> &id1739in_option0 = id1699out_result;
    const HWOffsetFix<64,0,UNSIGNED> &id1739in_option1 = id1738out_result;

    HWOffsetFix<64,0,UNSIGNED> id1739x_1;

    switch((id1739in_sel.getValueAsLong())) {
      case 0l:
        id1739x_1 = id1739in_option0;
        break;
      case 1l:
        id1739x_1 = id1739in_option1;
        break;
      default:
        id1739x_1 = (c_hw_fix_64_0_uns_undef);
        break;
    }
    id1739out_result = (id1739x_1);
  }
  if ( (getFillLevel() >= (30l)) && (getFlushLevel() < (30l)|| !isFlushingActive() ))
  { // Node ID: 1779 (NodeOutput)
    const HWOffsetFix<1,0,UNSIGNED> &id1779in_output_control = id1777out_result;
    const HWOffsetFix<64,0,UNSIGNED> &id1779in_data = id1739out_result;

    bool id1779x_1;

    (id1779x_1) = ((id1779in_output_control.getValueAsBool())&(!(((getFlushLevel())>=(30l))&(isFlushingActive()))));
    if((id1779x_1)) {
      writeOutput(m_o_1_3, id1779in_data);
    }
  }
  { // Node ID: 1792 (NodeConstantRawBits)
  }
  { // Node ID: 2602 (NodeConstantRawBits)
  }
  { // Node ID: 1789 (NodeConstantRawBits)
  }
  if ( (getFillLevel() >= (3l)))
  { // Node ID: 1790 (NodeCounter)
    const HWOffsetFix<1,0,UNSIGNED> &id1790in_enable = id2602out_value;
    const HWOffsetFix<49,0,UNSIGNED> &id1790in_max = id1789out_value;

    HWOffsetFix<49,0,UNSIGNED> id1790x_1;
    HWOffsetFix<1,0,UNSIGNED> id1790x_2;
    HWOffsetFix<1,0,UNSIGNED> id1790x_3;
    HWOffsetFix<49,0,UNSIGNED> id1790x_4t_1e_1;

    id1790out_count = (cast_fixed2fixed<48,0,UNSIGNED,TRUNCATE>((id1790st_count)));
    (id1790x_1) = (add_fixed<49,0,UNSIGNED,TRUNCATE>((id1790st_count),(c_hw_fix_49_0_uns_bits_2)));
    (id1790x_2) = (gte_fixed((id1790x_1),id1790in_max));
    (id1790x_3) = (and_fixed((id1790x_2),id1790in_enable));
    id1790out_wrap = (id1790x_3);
    if((id1790in_enable.getValueAsBool())) {
      if(((id1790x_3).getValueAsBool())) {
        (id1790st_count) = (c_hw_fix_49_0_uns_bits_1);
      }
      else {
        (id1790x_4t_1e_1) = (id1790x_1);
        (id1790st_count) = (id1790x_4t_1e_1);
      }
    }
    else {
    }
  }
  HWOffsetFix<48,0,UNSIGNED> id1791out_output;

  { // Node ID: 1791 (NodeStreamOffset)
    const HWOffsetFix<48,0,UNSIGNED> &id1791in_input = id1790out_count;

    id1791out_output = id1791in_input;
  }
  if ( (getFillLevel() >= (4l)) && (getFlushLevel() < (4l)|| !isFlushingActive() ))
  { // Node ID: 1793 (NodeOutputMappedReg)
    const HWOffsetFix<1,0,UNSIGNED> &id1793in_load = id1792out_value;
    const HWOffsetFix<48,0,UNSIGNED> &id1793in_data = id1791out_output;

    bool id1793x_1;

    (id1793x_1) = ((id1793in_load.getValueAsBool())&(!(((getFlushLevel())>=(4l))&(isFlushingActive()))));
    if((id1793x_1)) {
      setMappedRegValue("current_run_cycle_count", id1793in_data);
    }
  }
  { // Node ID: 2601 (NodeConstantRawBits)
  }
  { // Node ID: 1795 (NodeConstantRawBits)
  }
  if ( (getFillLevel() >= (0l)))
  { // Node ID: 1796 (NodeCounter)
    const HWOffsetFix<1,0,UNSIGNED> &id1796in_enable = id2601out_value;
    const HWOffsetFix<49,0,UNSIGNED> &id1796in_max = id1795out_value;

    HWOffsetFix<49,0,UNSIGNED> id1796x_1;
    HWOffsetFix<1,0,UNSIGNED> id1796x_2;
    HWOffsetFix<1,0,UNSIGNED> id1796x_3;
    HWOffsetFix<49,0,UNSIGNED> id1796x_4t_1e_1;

    id1796out_count = (cast_fixed2fixed<48,0,UNSIGNED,TRUNCATE>((id1796st_count)));
    (id1796x_1) = (add_fixed<49,0,UNSIGNED,TRUNCATE>((id1796st_count),(c_hw_fix_49_0_uns_bits_2)));
    (id1796x_2) = (gte_fixed((id1796x_1),id1796in_max));
    (id1796x_3) = (and_fixed((id1796x_2),id1796in_enable));
    id1796out_wrap = (id1796x_3);
    if((id1796in_enable.getValueAsBool())) {
      if(((id1796x_3).getValueAsBool())) {
        (id1796st_count) = (c_hw_fix_49_0_uns_bits_1);
      }
      else {
        (id1796x_4t_1e_1) = (id1796x_1);
        (id1796st_count) = (id1796x_4t_1e_1);
      }
    }
    else {
    }
  }
  { // Node ID: 1798 (NodeInputMappedReg)
  }
  { // Node ID: 2207 (NodeEqInlined)
    const HWOffsetFix<48,0,UNSIGNED> &id2207in_a = id1796out_count;
    const HWOffsetFix<48,0,UNSIGNED> &id2207in_b = id1798out_run_cycle_count;

    id2207out_result[(getCycle()+1)%2] = (eq_fixed(id2207in_a,id2207in_b));
  }
  if ( (getFillLevel() >= (1l)))
  { // Node ID: 1797 (NodeFlush)
    const HWOffsetFix<1,0,UNSIGNED> &id1797in_start = id2207out_result[getCycle()%2];

    if((id1797in_start.getValueAsBool())) {
      startFlushing();
    }
  }
};

};
