#include "stdsimheader.h"

namespace maxcompilersim {

void PRFOutputGen::execute0() {
  { // Node ID: 25 (NodeInputMappedReg)
  }
  HWOffsetFix<1,0,UNSIGNED> id26out_result;

  { // Node ID: 26 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id26in_a = id25out_io_output_force_disabled;

    id26out_result = (not_fixed(id26in_a));
  }
  { // Node ID: 21 (NodeInputMappedReg)
  }
  HWOffsetFix<1,0,UNSIGNED> id22out_result;

  { // Node ID: 22 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id22in_a = id21out_io_o_1_3_force_disabled;

    id22out_result = (not_fixed(id22in_a));
  }
  if ( (getFillLevel() >= (4l)))
  { // Node ID: 23 (NodeInput)
    const HWOffsetFix<1,0,UNSIGNED> &id23in_enable = id22out_result;

    (id23st_read_next_cycle) = ((id23in_enable.getValueAsBool())&(!(((getFlushLevel())>=(4l))&(isFlushingActive()))));
    queueReadRequest(m_o_1_3, id23st_read_next_cycle.getValueAsBool());
  }
  HWRawBits<64> id42out_output;

  { // Node ID: 42 (NodeReinterpret)
    const HWOffsetFix<64,0,UNSIGNED> &id42in_input = id23out_data;

    id42out_output = (cast_fixed2bits(id42in_input));
  }
  { // Node ID: 18 (NodeInputMappedReg)
  }
  HWOffsetFix<1,0,UNSIGNED> id19out_result;

  { // Node ID: 19 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id19in_a = id18out_io_o_1_2_force_disabled;

    id19out_result = (not_fixed(id19in_a));
  }
  if ( (getFillLevel() >= (4l)))
  { // Node ID: 20 (NodeInput)
    const HWOffsetFix<1,0,UNSIGNED> &id20in_enable = id19out_result;

    (id20st_read_next_cycle) = ((id20in_enable.getValueAsBool())&(!(((getFlushLevel())>=(4l))&(isFlushingActive()))));
    queueReadRequest(m_o_1_2, id20st_read_next_cycle.getValueAsBool());
  }
  HWRawBits<64> id40out_output;

  { // Node ID: 40 (NodeReinterpret)
    const HWOffsetFix<64,0,UNSIGNED> &id40in_input = id20out_data;

    id40out_output = (cast_fixed2bits(id40in_input));
  }
  { // Node ID: 15 (NodeInputMappedReg)
  }
  HWOffsetFix<1,0,UNSIGNED> id16out_result;

  { // Node ID: 16 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id16in_a = id15out_io_o_1_1_force_disabled;

    id16out_result = (not_fixed(id16in_a));
  }
  if ( (getFillLevel() >= (4l)))
  { // Node ID: 17 (NodeInput)
    const HWOffsetFix<1,0,UNSIGNED> &id17in_enable = id16out_result;

    (id17st_read_next_cycle) = ((id17in_enable.getValueAsBool())&(!(((getFlushLevel())>=(4l))&(isFlushingActive()))));
    queueReadRequest(m_o_1_1, id17st_read_next_cycle.getValueAsBool());
  }
  HWRawBits<64> id38out_output;

  { // Node ID: 38 (NodeReinterpret)
    const HWOffsetFix<64,0,UNSIGNED> &id38in_input = id17out_data;

    id38out_output = (cast_fixed2bits(id38in_input));
  }
  { // Node ID: 12 (NodeInputMappedReg)
  }
  HWOffsetFix<1,0,UNSIGNED> id13out_result;

  { // Node ID: 13 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id13in_a = id12out_io_o_1_0_force_disabled;

    id13out_result = (not_fixed(id13in_a));
  }
  if ( (getFillLevel() >= (4l)))
  { // Node ID: 14 (NodeInput)
    const HWOffsetFix<1,0,UNSIGNED> &id14in_enable = id13out_result;

    (id14st_read_next_cycle) = ((id14in_enable.getValueAsBool())&(!(((getFlushLevel())>=(4l))&(isFlushingActive()))));
    queueReadRequest(m_o_1_0, id14st_read_next_cycle.getValueAsBool());
  }
  HWRawBits<64> id36out_output;

  { // Node ID: 36 (NodeReinterpret)
    const HWOffsetFix<64,0,UNSIGNED> &id36in_input = id14out_data;

    id36out_output = (cast_fixed2bits(id36in_input));
  }
  { // Node ID: 9 (NodeInputMappedReg)
  }
  HWOffsetFix<1,0,UNSIGNED> id10out_result;

  { // Node ID: 10 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id10in_a = id9out_io_o_0_3_force_disabled;

    id10out_result = (not_fixed(id10in_a));
  }
  if ( (getFillLevel() >= (4l)))
  { // Node ID: 11 (NodeInput)
    const HWOffsetFix<1,0,UNSIGNED> &id11in_enable = id10out_result;

    (id11st_read_next_cycle) = ((id11in_enable.getValueAsBool())&(!(((getFlushLevel())>=(4l))&(isFlushingActive()))));
    queueReadRequest(m_o_0_3, id11st_read_next_cycle.getValueAsBool());
  }
  HWRawBits<64> id34out_output;

  { // Node ID: 34 (NodeReinterpret)
    const HWOffsetFix<64,0,UNSIGNED> &id34in_input = id11out_data;

    id34out_output = (cast_fixed2bits(id34in_input));
  }
  { // Node ID: 6 (NodeInputMappedReg)
  }
  HWOffsetFix<1,0,UNSIGNED> id7out_result;

  { // Node ID: 7 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id7in_a = id6out_io_o_0_2_force_disabled;

    id7out_result = (not_fixed(id7in_a));
  }
  if ( (getFillLevel() >= (4l)))
  { // Node ID: 8 (NodeInput)
    const HWOffsetFix<1,0,UNSIGNED> &id8in_enable = id7out_result;

    (id8st_read_next_cycle) = ((id8in_enable.getValueAsBool())&(!(((getFlushLevel())>=(4l))&(isFlushingActive()))));
    queueReadRequest(m_o_0_2, id8st_read_next_cycle.getValueAsBool());
  }
  HWRawBits<64> id32out_output;

  { // Node ID: 32 (NodeReinterpret)
    const HWOffsetFix<64,0,UNSIGNED> &id32in_input = id8out_data;

    id32out_output = (cast_fixed2bits(id32in_input));
  }
  { // Node ID: 3 (NodeInputMappedReg)
  }
  HWOffsetFix<1,0,UNSIGNED> id4out_result;

  { // Node ID: 4 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id4in_a = id3out_io_o_0_1_force_disabled;

    id4out_result = (not_fixed(id4in_a));
  }
  if ( (getFillLevel() >= (4l)))
  { // Node ID: 5 (NodeInput)
    const HWOffsetFix<1,0,UNSIGNED> &id5in_enable = id4out_result;

    (id5st_read_next_cycle) = ((id5in_enable.getValueAsBool())&(!(((getFlushLevel())>=(4l))&(isFlushingActive()))));
    queueReadRequest(m_o_0_1, id5st_read_next_cycle.getValueAsBool());
  }
  HWRawBits<64> id30out_output;

  { // Node ID: 30 (NodeReinterpret)
    const HWOffsetFix<64,0,UNSIGNED> &id30in_input = id5out_data;

    id30out_output = (cast_fixed2bits(id30in_input));
  }
  { // Node ID: 0 (NodeInputMappedReg)
  }
  HWOffsetFix<1,0,UNSIGNED> id1out_result;

  { // Node ID: 1 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id1in_a = id0out_io_o_0_0_force_disabled;

    id1out_result = (not_fixed(id1in_a));
  }
  if ( (getFillLevel() >= (4l)))
  { // Node ID: 2 (NodeInput)
    const HWOffsetFix<1,0,UNSIGNED> &id2in_enable = id1out_result;

    (id2st_read_next_cycle) = ((id2in_enable.getValueAsBool())&(!(((getFlushLevel())>=(4l))&(isFlushingActive()))));
    queueReadRequest(m_o_0_0, id2st_read_next_cycle.getValueAsBool());
  }
  HWRawBits<64> id29out_output;

  { // Node ID: 29 (NodeReinterpret)
    const HWOffsetFix<64,0,UNSIGNED> &id29in_input = id2out_data;

    id29out_output = (cast_fixed2bits(id29in_input));
  }
  HWRawBits<512> id61out_result;

  { // Node ID: 61 (NodeCat)
    const HWRawBits<64> &id61in_in0 = id42out_output;
    const HWRawBits<64> &id61in_in1 = id40out_output;
    const HWRawBits<64> &id61in_in2 = id38out_output;
    const HWRawBits<64> &id61in_in3 = id36out_output;
    const HWRawBits<64> &id61in_in4 = id34out_output;
    const HWRawBits<64> &id61in_in5 = id32out_output;
    const HWRawBits<64> &id61in_in6 = id30out_output;
    const HWRawBits<64> &id61in_in7 = id29out_output;

    id61out_result = (cat((cat((cat(id61in_in0,id61in_in1)),(cat(id61in_in2,id61in_in3)))),(cat((cat(id61in_in4,id61in_in5)),(cat(id61in_in6,id61in_in7))))));
  }
  if ( (getFillLevel() >= (9l)) && (getFlushLevel() < (9l)|| !isFlushingActive() ))
  { // Node ID: 28 (NodeOutput)
    const HWOffsetFix<1,0,UNSIGNED> &id28in_output_control = id26out_result;
    const HWRawBits<512> &id28in_data = id61out_result;

    bool id28x_1;

    (id28x_1) = ((id28in_output_control.getValueAsBool())&(!(((getFlushLevel())>=(9l))&(isFlushingActive()))));
    if((id28x_1)) {
      writeOutput(m_output, id28in_data);
    }
  }
  { // Node ID: 48 (NodeConstantRawBits)
  }
  { // Node ID: 64 (NodeConstantRawBits)
  }
  { // Node ID: 45 (NodeConstantRawBits)
  }
  if ( (getFillLevel() >= (3l)))
  { // Node ID: 46 (NodeCounter)
    const HWOffsetFix<1,0,UNSIGNED> &id46in_enable = id64out_value;
    const HWOffsetFix<49,0,UNSIGNED> &id46in_max = id45out_value;

    HWOffsetFix<49,0,UNSIGNED> id46x_1;
    HWOffsetFix<1,0,UNSIGNED> id46x_2;
    HWOffsetFix<1,0,UNSIGNED> id46x_3;
    HWOffsetFix<49,0,UNSIGNED> id46x_4t_1e_1;

    id46out_count = (cast_fixed2fixed<48,0,UNSIGNED,TRUNCATE>((id46st_count)));
    (id46x_1) = (add_fixed<49,0,UNSIGNED,TRUNCATE>((id46st_count),(c_hw_fix_49_0_uns_bits_2)));
    (id46x_2) = (gte_fixed((id46x_1),id46in_max));
    (id46x_3) = (and_fixed((id46x_2),id46in_enable));
    id46out_wrap = (id46x_3);
    if((id46in_enable.getValueAsBool())) {
      if(((id46x_3).getValueAsBool())) {
        (id46st_count) = (c_hw_fix_49_0_uns_bits_1);
      }
      else {
        (id46x_4t_1e_1) = (id46x_1);
        (id46st_count) = (id46x_4t_1e_1);
      }
    }
    else {
    }
  }
  HWOffsetFix<48,0,UNSIGNED> id47out_output;

  { // Node ID: 47 (NodeStreamOffset)
    const HWOffsetFix<48,0,UNSIGNED> &id47in_input = id46out_count;

    id47out_output = id47in_input;
  }
  if ( (getFillLevel() >= (4l)) && (getFlushLevel() < (4l)|| !isFlushingActive() ))
  { // Node ID: 49 (NodeOutputMappedReg)
    const HWOffsetFix<1,0,UNSIGNED> &id49in_load = id48out_value;
    const HWOffsetFix<48,0,UNSIGNED> &id49in_data = id47out_output;

    bool id49x_1;

    (id49x_1) = ((id49in_load.getValueAsBool())&(!(((getFlushLevel())>=(4l))&(isFlushingActive()))));
    if((id49x_1)) {
      setMappedRegValue("current_run_cycle_count", id49in_data);
    }
  }
  { // Node ID: 63 (NodeConstantRawBits)
  }
  { // Node ID: 51 (NodeConstantRawBits)
  }
  if ( (getFillLevel() >= (0l)))
  { // Node ID: 52 (NodeCounter)
    const HWOffsetFix<1,0,UNSIGNED> &id52in_enable = id63out_value;
    const HWOffsetFix<49,0,UNSIGNED> &id52in_max = id51out_value;

    HWOffsetFix<49,0,UNSIGNED> id52x_1;
    HWOffsetFix<1,0,UNSIGNED> id52x_2;
    HWOffsetFix<1,0,UNSIGNED> id52x_3;
    HWOffsetFix<49,0,UNSIGNED> id52x_4t_1e_1;

    id52out_count = (cast_fixed2fixed<48,0,UNSIGNED,TRUNCATE>((id52st_count)));
    (id52x_1) = (add_fixed<49,0,UNSIGNED,TRUNCATE>((id52st_count),(c_hw_fix_49_0_uns_bits_2)));
    (id52x_2) = (gte_fixed((id52x_1),id52in_max));
    (id52x_3) = (and_fixed((id52x_2),id52in_enable));
    id52out_wrap = (id52x_3);
    if((id52in_enable.getValueAsBool())) {
      if(((id52x_3).getValueAsBool())) {
        (id52st_count) = (c_hw_fix_49_0_uns_bits_1);
      }
      else {
        (id52x_4t_1e_1) = (id52x_1);
        (id52st_count) = (id52x_4t_1e_1);
      }
    }
    else {
    }
  }
  { // Node ID: 54 (NodeInputMappedReg)
  }
  { // Node ID: 62 (NodeEqInlined)
    const HWOffsetFix<48,0,UNSIGNED> &id62in_a = id52out_count;
    const HWOffsetFix<48,0,UNSIGNED> &id62in_b = id54out_run_cycle_count;

    id62out_result[(getCycle()+1)%2] = (eq_fixed(id62in_a,id62in_b));
  }
  if ( (getFillLevel() >= (1l)))
  { // Node ID: 53 (NodeFlush)
    const HWOffsetFix<1,0,UNSIGNED> &id53in_start = id62out_result[getCycle()%2];

    if((id53in_start.getValueAsBool())) {
      startFlushing();
    }
  }
};

};
