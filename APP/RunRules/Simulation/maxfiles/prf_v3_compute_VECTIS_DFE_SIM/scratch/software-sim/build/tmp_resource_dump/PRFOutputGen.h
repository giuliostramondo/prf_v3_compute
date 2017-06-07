#ifndef PRFOUTPUTGEN_H_
#define PRFOUTPUTGEN_H_

// #include "KernelManagerBlockSync.h"


namespace maxcompilersim {

class PRFOutputGen : public KernelManagerBlockSync {
public:
  PRFOutputGen(const std::string &instance_name);

protected:
  virtual void runComputationCycle();
  virtual void resetComputation();
  virtual void resetComputationAfterFlush();
          void updateState();
          void preExecute();
  virtual int  getFlushLevelStart();

private:
  t_port_number m_o_1_3;
  t_port_number m_o_1_2;
  t_port_number m_o_1_1;
  t_port_number m_o_1_0;
  t_port_number m_o_0_3;
  t_port_number m_o_0_2;
  t_port_number m_o_0_1;
  t_port_number m_o_0_0;
  t_port_number m_output;
  HWOffsetFix<1,0,UNSIGNED> id25out_io_output_force_disabled;

  HWOffsetFix<1,0,UNSIGNED> id21out_io_o_1_3_force_disabled;

  HWOffsetFix<64,0,UNSIGNED> id23out_data;

  HWOffsetFix<1,0,UNSIGNED> id23st_read_next_cycle;
  HWOffsetFix<64,0,UNSIGNED> id23st_last_read_value;

  HWOffsetFix<1,0,UNSIGNED> id18out_io_o_1_2_force_disabled;

  HWOffsetFix<64,0,UNSIGNED> id20out_data;

  HWOffsetFix<1,0,UNSIGNED> id20st_read_next_cycle;
  HWOffsetFix<64,0,UNSIGNED> id20st_last_read_value;

  HWOffsetFix<1,0,UNSIGNED> id15out_io_o_1_1_force_disabled;

  HWOffsetFix<64,0,UNSIGNED> id17out_data;

  HWOffsetFix<1,0,UNSIGNED> id17st_read_next_cycle;
  HWOffsetFix<64,0,UNSIGNED> id17st_last_read_value;

  HWOffsetFix<1,0,UNSIGNED> id12out_io_o_1_0_force_disabled;

  HWOffsetFix<64,0,UNSIGNED> id14out_data;

  HWOffsetFix<1,0,UNSIGNED> id14st_read_next_cycle;
  HWOffsetFix<64,0,UNSIGNED> id14st_last_read_value;

  HWOffsetFix<1,0,UNSIGNED> id9out_io_o_0_3_force_disabled;

  HWOffsetFix<64,0,UNSIGNED> id11out_data;

  HWOffsetFix<1,0,UNSIGNED> id11st_read_next_cycle;
  HWOffsetFix<64,0,UNSIGNED> id11st_last_read_value;

  HWOffsetFix<1,0,UNSIGNED> id6out_io_o_0_2_force_disabled;

  HWOffsetFix<64,0,UNSIGNED> id8out_data;

  HWOffsetFix<1,0,UNSIGNED> id8st_read_next_cycle;
  HWOffsetFix<64,0,UNSIGNED> id8st_last_read_value;

  HWOffsetFix<1,0,UNSIGNED> id3out_io_o_0_1_force_disabled;

  HWOffsetFix<64,0,UNSIGNED> id5out_data;

  HWOffsetFix<1,0,UNSIGNED> id5st_read_next_cycle;
  HWOffsetFix<64,0,UNSIGNED> id5st_last_read_value;

  HWOffsetFix<1,0,UNSIGNED> id0out_io_o_0_0_force_disabled;

  HWOffsetFix<64,0,UNSIGNED> id2out_data;

  HWOffsetFix<1,0,UNSIGNED> id2st_read_next_cycle;
  HWOffsetFix<64,0,UNSIGNED> id2st_last_read_value;

  HWOffsetFix<1,0,UNSIGNED> id48out_value;

  HWOffsetFix<1,0,UNSIGNED> id64out_value;

  HWOffsetFix<49,0,UNSIGNED> id45out_value;

  HWOffsetFix<48,0,UNSIGNED> id46out_count;
  HWOffsetFix<1,0,UNSIGNED> id46out_wrap;

  HWOffsetFix<49,0,UNSIGNED> id46st_count;

  HWOffsetFix<1,0,UNSIGNED> id63out_value;

  HWOffsetFix<49,0,UNSIGNED> id51out_value;

  HWOffsetFix<48,0,UNSIGNED> id52out_count;
  HWOffsetFix<1,0,UNSIGNED> id52out_wrap;

  HWOffsetFix<49,0,UNSIGNED> id52st_count;

  HWOffsetFix<48,0,UNSIGNED> id54out_run_cycle_count;

  HWOffsetFix<1,0,UNSIGNED> id62out_result[2];

  const HWOffsetFix<1,0,UNSIGNED> c_hw_fix_1_0_uns_bits;
  const HWOffsetFix<64,0,UNSIGNED> c_hw_fix_64_0_uns_undef;
  const HWOffsetFix<1,0,UNSIGNED> c_hw_fix_1_0_uns_bits_1;
  const HWOffsetFix<49,0,UNSIGNED> c_hw_fix_49_0_uns_bits;
  const HWOffsetFix<49,0,UNSIGNED> c_hw_fix_49_0_uns_bits_1;
  const HWOffsetFix<49,0,UNSIGNED> c_hw_fix_49_0_uns_bits_2;

  void execute0();
};

}

#endif /* PRFOUTPUTGEN_H_ */
