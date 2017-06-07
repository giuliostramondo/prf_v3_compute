#include "stdsimheader.h"

namespace maxcompilersim {

void prf_v2_Input_Generator::execute0() {
  { // Node ID: 28 (NodeInputMappedReg)
  }
  HWOffsetFix<1,0,UNSIGNED> id29out_result;

  { // Node ID: 29 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id29in_a = id28out_io_input_data_arr0_0_force_disabled;

    id29out_result = (not_fixed(id29in_a));
  }
  { // Node ID: 0 (NodeInputMappedReg)
  }
  HWOffsetFix<1,0,UNSIGNED> id1out_result;

  { // Node ID: 1 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id1in_a = id0out_io_input_vector_force_disabled;

    id1out_result = (not_fixed(id1in_a));
  }
  if ( (getFillLevel() >= (4l)))
  { // Node ID: 2 (NodeInput)
    const HWOffsetFix<1,0,UNSIGNED> &id2in_enable = id1out_result;

    (id2st_read_next_cycle) = ((id2in_enable.getValueAsBool())&(!(((getFlushLevel())>=(4l))&(isFlushingActive()))));
    queueReadRequest(m_input_vector, id2st_read_next_cycle.getValueAsBool());
  }
  HWRawBits<64> id3out_result;

  { // Node ID: 3 (NodeSlice)
    const HWRawBits<768> &id3in_a = id2out_data;

    id3out_result = (slice<0,64>(id3in_a));
  }
  HWOffsetFix<64,0,UNSIGNED> id4out_output;

  { // Node ID: 4 (NodeReinterpret)
    const HWRawBits<64> &id4in_input = id3out_result;

    id4out_output = (cast_bits2fixed<64,0,UNSIGNED>(id4in_input));
  }
  if ( (getFillLevel() >= (9l)) && (getFlushLevel() < (9l)|| !isFlushingActive() ))
  { // Node ID: 31 (NodeOutput)
    const HWOffsetFix<1,0,UNSIGNED> &id31in_output_control = id29out_result;
    const HWOffsetFix<64,0,UNSIGNED> &id31in_data = id4out_output;

    bool id31x_1;

    (id31x_1) = ((id31in_output_control.getValueAsBool())&(!(((getFlushLevel())>=(9l))&(isFlushingActive()))));
    if((id31x_1)) {
      writeOutput(m_input_data_arr0_0, id31in_data);
    }
  }
  { // Node ID: 33 (NodeInputMappedReg)
  }
  HWOffsetFix<1,0,UNSIGNED> id34out_result;

  { // Node ID: 34 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id34in_a = id33out_io_input_data_arr0_1_force_disabled;

    id34out_result = (not_fixed(id34in_a));
  }
  HWRawBits<64> id5out_result;

  { // Node ID: 5 (NodeSlice)
    const HWRawBits<768> &id5in_a = id2out_data;

    id5out_result = (slice<64,64>(id5in_a));
  }
  HWOffsetFix<64,0,UNSIGNED> id6out_output;

  { // Node ID: 6 (NodeReinterpret)
    const HWRawBits<64> &id6in_input = id5out_result;

    id6out_output = (cast_bits2fixed<64,0,UNSIGNED>(id6in_input));
  }
  if ( (getFillLevel() >= (9l)) && (getFlushLevel() < (9l)|| !isFlushingActive() ))
  { // Node ID: 36 (NodeOutput)
    const HWOffsetFix<1,0,UNSIGNED> &id36in_output_control = id34out_result;
    const HWOffsetFix<64,0,UNSIGNED> &id36in_data = id6out_output;

    bool id36x_1;

    (id36x_1) = ((id36in_output_control.getValueAsBool())&(!(((getFlushLevel())>=(9l))&(isFlushingActive()))));
    if((id36x_1)) {
      writeOutput(m_input_data_arr0_1, id36in_data);
    }
  }
  { // Node ID: 38 (NodeInputMappedReg)
  }
  HWOffsetFix<1,0,UNSIGNED> id39out_result;

  { // Node ID: 39 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id39in_a = id38out_io_input_data_arr0_2_force_disabled;

    id39out_result = (not_fixed(id39in_a));
  }
  HWRawBits<64> id7out_result;

  { // Node ID: 7 (NodeSlice)
    const HWRawBits<768> &id7in_a = id2out_data;

    id7out_result = (slice<128,64>(id7in_a));
  }
  HWOffsetFix<64,0,UNSIGNED> id8out_output;

  { // Node ID: 8 (NodeReinterpret)
    const HWRawBits<64> &id8in_input = id7out_result;

    id8out_output = (cast_bits2fixed<64,0,UNSIGNED>(id8in_input));
  }
  if ( (getFillLevel() >= (9l)) && (getFlushLevel() < (9l)|| !isFlushingActive() ))
  { // Node ID: 41 (NodeOutput)
    const HWOffsetFix<1,0,UNSIGNED> &id41in_output_control = id39out_result;
    const HWOffsetFix<64,0,UNSIGNED> &id41in_data = id8out_output;

    bool id41x_1;

    (id41x_1) = ((id41in_output_control.getValueAsBool())&(!(((getFlushLevel())>=(9l))&(isFlushingActive()))));
    if((id41x_1)) {
      writeOutput(m_input_data_arr0_2, id41in_data);
    }
  }
  { // Node ID: 43 (NodeInputMappedReg)
  }
  HWOffsetFix<1,0,UNSIGNED> id44out_result;

  { // Node ID: 44 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id44in_a = id43out_io_input_data_arr0_3_force_disabled;

    id44out_result = (not_fixed(id44in_a));
  }
  HWRawBits<64> id9out_result;

  { // Node ID: 9 (NodeSlice)
    const HWRawBits<768> &id9in_a = id2out_data;

    id9out_result = (slice<192,64>(id9in_a));
  }
  HWOffsetFix<64,0,UNSIGNED> id10out_output;

  { // Node ID: 10 (NodeReinterpret)
    const HWRawBits<64> &id10in_input = id9out_result;

    id10out_output = (cast_bits2fixed<64,0,UNSIGNED>(id10in_input));
  }
  if ( (getFillLevel() >= (9l)) && (getFlushLevel() < (9l)|| !isFlushingActive() ))
  { // Node ID: 46 (NodeOutput)
    const HWOffsetFix<1,0,UNSIGNED> &id46in_output_control = id44out_result;
    const HWOffsetFix<64,0,UNSIGNED> &id46in_data = id10out_output;

    bool id46x_1;

    (id46x_1) = ((id46in_output_control.getValueAsBool())&(!(((getFlushLevel())>=(9l))&(isFlushingActive()))));
    if((id46x_1)) {
      writeOutput(m_input_data_arr0_3, id46in_data);
    }
  }
  { // Node ID: 48 (NodeInputMappedReg)
  }
  HWOffsetFix<1,0,UNSIGNED> id49out_result;

  { // Node ID: 49 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id49in_a = id48out_io_input_data_arr1_0_force_disabled;

    id49out_result = (not_fixed(id49in_a));
  }
  HWRawBits<64> id11out_result;

  { // Node ID: 11 (NodeSlice)
    const HWRawBits<768> &id11in_a = id2out_data;

    id11out_result = (slice<256,64>(id11in_a));
  }
  HWOffsetFix<64,0,UNSIGNED> id12out_output;

  { // Node ID: 12 (NodeReinterpret)
    const HWRawBits<64> &id12in_input = id11out_result;

    id12out_output = (cast_bits2fixed<64,0,UNSIGNED>(id12in_input));
  }
  if ( (getFillLevel() >= (9l)) && (getFlushLevel() < (9l)|| !isFlushingActive() ))
  { // Node ID: 51 (NodeOutput)
    const HWOffsetFix<1,0,UNSIGNED> &id51in_output_control = id49out_result;
    const HWOffsetFix<64,0,UNSIGNED> &id51in_data = id12out_output;

    bool id51x_1;

    (id51x_1) = ((id51in_output_control.getValueAsBool())&(!(((getFlushLevel())>=(9l))&(isFlushingActive()))));
    if((id51x_1)) {
      writeOutput(m_input_data_arr1_0, id51in_data);
    }
  }
  { // Node ID: 53 (NodeInputMappedReg)
  }
  HWOffsetFix<1,0,UNSIGNED> id54out_result;

  { // Node ID: 54 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id54in_a = id53out_io_input_data_arr1_1_force_disabled;

    id54out_result = (not_fixed(id54in_a));
  }
  HWRawBits<64> id13out_result;

  { // Node ID: 13 (NodeSlice)
    const HWRawBits<768> &id13in_a = id2out_data;

    id13out_result = (slice<320,64>(id13in_a));
  }
  HWOffsetFix<64,0,UNSIGNED> id14out_output;

  { // Node ID: 14 (NodeReinterpret)
    const HWRawBits<64> &id14in_input = id13out_result;

    id14out_output = (cast_bits2fixed<64,0,UNSIGNED>(id14in_input));
  }
  if ( (getFillLevel() >= (9l)) && (getFlushLevel() < (9l)|| !isFlushingActive() ))
  { // Node ID: 56 (NodeOutput)
    const HWOffsetFix<1,0,UNSIGNED> &id56in_output_control = id54out_result;
    const HWOffsetFix<64,0,UNSIGNED> &id56in_data = id14out_output;

    bool id56x_1;

    (id56x_1) = ((id56in_output_control.getValueAsBool())&(!(((getFlushLevel())>=(9l))&(isFlushingActive()))));
    if((id56x_1)) {
      writeOutput(m_input_data_arr1_1, id56in_data);
    }
  }
  { // Node ID: 58 (NodeInputMappedReg)
  }
  HWOffsetFix<1,0,UNSIGNED> id59out_result;

  { // Node ID: 59 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id59in_a = id58out_io_input_data_arr1_2_force_disabled;

    id59out_result = (not_fixed(id59in_a));
  }
  HWRawBits<64> id15out_result;

  { // Node ID: 15 (NodeSlice)
    const HWRawBits<768> &id15in_a = id2out_data;

    id15out_result = (slice<384,64>(id15in_a));
  }
  HWOffsetFix<64,0,UNSIGNED> id16out_output;

  { // Node ID: 16 (NodeReinterpret)
    const HWRawBits<64> &id16in_input = id15out_result;

    id16out_output = (cast_bits2fixed<64,0,UNSIGNED>(id16in_input));
  }
  if ( (getFillLevel() >= (9l)) && (getFlushLevel() < (9l)|| !isFlushingActive() ))
  { // Node ID: 61 (NodeOutput)
    const HWOffsetFix<1,0,UNSIGNED> &id61in_output_control = id59out_result;
    const HWOffsetFix<64,0,UNSIGNED> &id61in_data = id16out_output;

    bool id61x_1;

    (id61x_1) = ((id61in_output_control.getValueAsBool())&(!(((getFlushLevel())>=(9l))&(isFlushingActive()))));
    if((id61x_1)) {
      writeOutput(m_input_data_arr1_2, id61in_data);
    }
  }
  { // Node ID: 63 (NodeInputMappedReg)
  }
  HWOffsetFix<1,0,UNSIGNED> id64out_result;

  { // Node ID: 64 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id64in_a = id63out_io_input_data_arr1_3_force_disabled;

    id64out_result = (not_fixed(id64in_a));
  }
  HWRawBits<64> id17out_result;

  { // Node ID: 17 (NodeSlice)
    const HWRawBits<768> &id17in_a = id2out_data;

    id17out_result = (slice<448,64>(id17in_a));
  }
  HWOffsetFix<64,0,UNSIGNED> id18out_output;

  { // Node ID: 18 (NodeReinterpret)
    const HWRawBits<64> &id18in_input = id17out_result;

    id18out_output = (cast_bits2fixed<64,0,UNSIGNED>(id18in_input));
  }
  if ( (getFillLevel() >= (9l)) && (getFlushLevel() < (9l)|| !isFlushingActive() ))
  { // Node ID: 66 (NodeOutput)
    const HWOffsetFix<1,0,UNSIGNED> &id66in_output_control = id64out_result;
    const HWOffsetFix<64,0,UNSIGNED> &id66in_data = id18out_output;

    bool id66x_1;

    (id66x_1) = ((id66in_output_control.getValueAsBool())&(!(((getFlushLevel())>=(9l))&(isFlushingActive()))));
    if((id66x_1)) {
      writeOutput(m_input_data_arr1_3, id66in_data);
    }
  }
  { // Node ID: 68 (NodeInputMappedReg)
  }
  HWOffsetFix<1,0,UNSIGNED> id69out_result;

  { // Node ID: 69 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id69in_a = id68out_io_index_i_force_disabled;

    id69out_result = (not_fixed(id69in_a));
  }
  HWRawBits<64> id19out_result;

  { // Node ID: 19 (NodeSlice)
    const HWRawBits<768> &id19in_a = id2out_data;

    id19out_result = (slice<512,64>(id19in_a));
  }
  HWOffsetFix<64,0,UNSIGNED> id20out_output;

  { // Node ID: 20 (NodeReinterpret)
    const HWRawBits<64> &id20in_input = id19out_result;

    id20out_output = (cast_bits2fixed<64,0,UNSIGNED>(id20in_input));
  }
  if ( (getFillLevel() >= (9l)) && (getFlushLevel() < (9l)|| !isFlushingActive() ))
  { // Node ID: 71 (NodeOutput)
    const HWOffsetFix<1,0,UNSIGNED> &id71in_output_control = id69out_result;
    const HWOffsetFix<64,0,UNSIGNED> &id71in_data = id20out_output;

    bool id71x_1;

    (id71x_1) = ((id71in_output_control.getValueAsBool())&(!(((getFlushLevel())>=(9l))&(isFlushingActive()))));
    if((id71x_1)) {
      writeOutput(m_index_i, id71in_data);
    }
  }
  { // Node ID: 73 (NodeInputMappedReg)
  }
  HWOffsetFix<1,0,UNSIGNED> id74out_result;

  { // Node ID: 74 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id74in_a = id73out_io_index_j_force_disabled;

    id74out_result = (not_fixed(id74in_a));
  }
  HWRawBits<64> id21out_result;

  { // Node ID: 21 (NodeSlice)
    const HWRawBits<768> &id21in_a = id2out_data;

    id21out_result = (slice<576,64>(id21in_a));
  }
  HWOffsetFix<64,0,UNSIGNED> id22out_output;

  { // Node ID: 22 (NodeReinterpret)
    const HWRawBits<64> &id22in_input = id21out_result;

    id22out_output = (cast_bits2fixed<64,0,UNSIGNED>(id22in_input));
  }
  if ( (getFillLevel() >= (9l)) && (getFlushLevel() < (9l)|| !isFlushingActive() ))
  { // Node ID: 76 (NodeOutput)
    const HWOffsetFix<1,0,UNSIGNED> &id76in_output_control = id74out_result;
    const HWOffsetFix<64,0,UNSIGNED> &id76in_data = id22out_output;

    bool id76x_1;

    (id76x_1) = ((id76in_output_control.getValueAsBool())&(!(((getFlushLevel())>=(9l))&(isFlushingActive()))));
    if((id76x_1)) {
      writeOutput(m_index_j, id76in_data);
    }
  }
  { // Node ID: 78 (NodeInputMappedReg)
  }
  HWOffsetFix<1,0,UNSIGNED> id79out_result;

  { // Node ID: 79 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id79in_a = id78out_io_acc_type_force_disabled;

    id79out_result = (not_fixed(id79in_a));
  }
  HWRawBits<64> id23out_result;

  { // Node ID: 23 (NodeSlice)
    const HWRawBits<768> &id23in_a = id2out_data;

    id23out_result = (slice<640,64>(id23in_a));
  }
  HWOffsetFix<64,0,UNSIGNED> id24out_output;

  { // Node ID: 24 (NodeReinterpret)
    const HWRawBits<64> &id24in_input = id23out_result;

    id24out_output = (cast_bits2fixed<64,0,UNSIGNED>(id24in_input));
  }
  if ( (getFillLevel() >= (9l)) && (getFlushLevel() < (9l)|| !isFlushingActive() ))
  { // Node ID: 81 (NodeOutput)
    const HWOffsetFix<1,0,UNSIGNED> &id81in_output_control = id79out_result;
    const HWOffsetFix<64,0,UNSIGNED> &id81in_data = id24out_output;

    bool id81x_1;

    (id81x_1) = ((id81in_output_control.getValueAsBool())&(!(((getFlushLevel())>=(9l))&(isFlushingActive()))));
    if((id81x_1)) {
      writeOutput(m_acc_type, id81in_data);
    }
  }
  { // Node ID: 83 (NodeInputMappedReg)
  }
  HWOffsetFix<1,0,UNSIGNED> id84out_result;

  { // Node ID: 84 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id84in_a = id83out_io_write_enable_force_disabled;

    id84out_result = (not_fixed(id84in_a));
  }
  HWRawBits<64> id25out_result;

  { // Node ID: 25 (NodeSlice)
    const HWRawBits<768> &id25in_a = id2out_data;

    id25out_result = (slice<704,64>(id25in_a));
  }
  HWOffsetFix<64,0,UNSIGNED> id26out_output;

  { // Node ID: 26 (NodeReinterpret)
    const HWRawBits<64> &id26in_input = id25out_result;

    id26out_output = (cast_bits2fixed<64,0,UNSIGNED>(id26in_input));
  }
  if ( (getFillLevel() >= (9l)) && (getFlushLevel() < (9l)|| !isFlushingActive() ))
  { // Node ID: 86 (NodeOutput)
    const HWOffsetFix<1,0,UNSIGNED> &id86in_output_control = id84out_result;
    const HWOffsetFix<64,0,UNSIGNED> &id86in_data = id26out_output;

    bool id86x_1;

    (id86x_1) = ((id86in_output_control.getValueAsBool())&(!(((getFlushLevel())>=(9l))&(isFlushingActive()))));
    if((id86x_1)) {
      writeOutput(m_write_enable, id86in_data);
    }
  }
  { // Node ID: 91 (NodeConstantRawBits)
  }
  { // Node ID: 101 (NodeConstantRawBits)
  }
  { // Node ID: 88 (NodeConstantRawBits)
  }
  if ( (getFillLevel() >= (3l)))
  { // Node ID: 89 (NodeCounter)
    const HWOffsetFix<1,0,UNSIGNED> &id89in_enable = id101out_value;
    const HWOffsetFix<49,0,UNSIGNED> &id89in_max = id88out_value;

    HWOffsetFix<49,0,UNSIGNED> id89x_1;
    HWOffsetFix<1,0,UNSIGNED> id89x_2;
    HWOffsetFix<1,0,UNSIGNED> id89x_3;
    HWOffsetFix<49,0,UNSIGNED> id89x_4t_1e_1;

    id89out_count = (cast_fixed2fixed<48,0,UNSIGNED,TRUNCATE>((id89st_count)));
    (id89x_1) = (add_fixed<49,0,UNSIGNED,TRUNCATE>((id89st_count),(c_hw_fix_49_0_uns_bits_2)));
    (id89x_2) = (gte_fixed((id89x_1),id89in_max));
    (id89x_3) = (and_fixed((id89x_2),id89in_enable));
    id89out_wrap = (id89x_3);
    if((id89in_enable.getValueAsBool())) {
      if(((id89x_3).getValueAsBool())) {
        (id89st_count) = (c_hw_fix_49_0_uns_bits_1);
      }
      else {
        (id89x_4t_1e_1) = (id89x_1);
        (id89st_count) = (id89x_4t_1e_1);
      }
    }
    else {
    }
  }
  HWOffsetFix<48,0,UNSIGNED> id90out_output;

  { // Node ID: 90 (NodeStreamOffset)
    const HWOffsetFix<48,0,UNSIGNED> &id90in_input = id89out_count;

    id90out_output = id90in_input;
  }
  if ( (getFillLevel() >= (4l)) && (getFlushLevel() < (4l)|| !isFlushingActive() ))
  { // Node ID: 92 (NodeOutputMappedReg)
    const HWOffsetFix<1,0,UNSIGNED> &id92in_load = id91out_value;
    const HWOffsetFix<48,0,UNSIGNED> &id92in_data = id90out_output;

    bool id92x_1;

    (id92x_1) = ((id92in_load.getValueAsBool())&(!(((getFlushLevel())>=(4l))&(isFlushingActive()))));
    if((id92x_1)) {
      setMappedRegValue("current_run_cycle_count", id92in_data);
    }
  }
  { // Node ID: 100 (NodeConstantRawBits)
  }
  { // Node ID: 94 (NodeConstantRawBits)
  }
  if ( (getFillLevel() >= (0l)))
  { // Node ID: 95 (NodeCounter)
    const HWOffsetFix<1,0,UNSIGNED> &id95in_enable = id100out_value;
    const HWOffsetFix<49,0,UNSIGNED> &id95in_max = id94out_value;

    HWOffsetFix<49,0,UNSIGNED> id95x_1;
    HWOffsetFix<1,0,UNSIGNED> id95x_2;
    HWOffsetFix<1,0,UNSIGNED> id95x_3;
    HWOffsetFix<49,0,UNSIGNED> id95x_4t_1e_1;

    id95out_count = (cast_fixed2fixed<48,0,UNSIGNED,TRUNCATE>((id95st_count)));
    (id95x_1) = (add_fixed<49,0,UNSIGNED,TRUNCATE>((id95st_count),(c_hw_fix_49_0_uns_bits_2)));
    (id95x_2) = (gte_fixed((id95x_1),id95in_max));
    (id95x_3) = (and_fixed((id95x_2),id95in_enable));
    id95out_wrap = (id95x_3);
    if((id95in_enable.getValueAsBool())) {
      if(((id95x_3).getValueAsBool())) {
        (id95st_count) = (c_hw_fix_49_0_uns_bits_1);
      }
      else {
        (id95x_4t_1e_1) = (id95x_1);
        (id95st_count) = (id95x_4t_1e_1);
      }
    }
    else {
    }
  }
  { // Node ID: 97 (NodeInputMappedReg)
  }
  { // Node ID: 99 (NodeEqInlined)
    const HWOffsetFix<48,0,UNSIGNED> &id99in_a = id95out_count;
    const HWOffsetFix<48,0,UNSIGNED> &id99in_b = id97out_run_cycle_count;

    id99out_result[(getCycle()+1)%2] = (eq_fixed(id99in_a,id99in_b));
  }
  if ( (getFillLevel() >= (1l)))
  { // Node ID: 96 (NodeFlush)
    const HWOffsetFix<1,0,UNSIGNED> &id96in_start = id99out_result[getCycle()%2];

    if((id96in_start.getValueAsBool())) {
      startFlushing();
    }
  }
};

};
