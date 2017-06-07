#ifndef PRF_V2_INPUT_GENERATOR_H_
#define PRF_V2_INPUT_GENERATOR_H_

// #include "KernelManagerBlockSync.h"


namespace maxcompilersim {

class prf_v2_Input_Generator : public KernelManagerBlockSync {
public:
  prf_v2_Input_Generator(const std::string &instance_name);

protected:
  virtual void runComputationCycle();
  virtual void resetComputation();
  virtual void resetComputationAfterFlush();
          void updateState();
          void preExecute();
  virtual int  getFlushLevelStart();

private:
  t_port_number m_input_vector;
  t_port_number m_input_data_arr0_0;
  t_port_number m_input_data_arr0_1;
  t_port_number m_input_data_arr0_2;
  t_port_number m_input_data_arr0_3;
  t_port_number m_input_data_arr1_0;
  t_port_number m_input_data_arr1_1;
  t_port_number m_input_data_arr1_2;
  t_port_number m_input_data_arr1_3;
  t_port_number m_index_i;
  t_port_number m_index_j;
  t_port_number m_acc_type;
  t_port_number m_write_enable;
  HWOffsetFix<1,0,UNSIGNED> id28out_io_input_data_arr0_0_force_disabled;

  HWOffsetFix<1,0,UNSIGNED> id0out_io_input_vector_force_disabled;

  HWRawBits<768> id2out_data;

  HWOffsetFix<1,0,UNSIGNED> id2st_read_next_cycle;
  HWRawBits<768> id2st_last_read_value;

  HWOffsetFix<1,0,UNSIGNED> id33out_io_input_data_arr0_1_force_disabled;

  HWOffsetFix<1,0,UNSIGNED> id38out_io_input_data_arr0_2_force_disabled;

  HWOffsetFix<1,0,UNSIGNED> id43out_io_input_data_arr0_3_force_disabled;

  HWOffsetFix<1,0,UNSIGNED> id48out_io_input_data_arr1_0_force_disabled;

  HWOffsetFix<1,0,UNSIGNED> id53out_io_input_data_arr1_1_force_disabled;

  HWOffsetFix<1,0,UNSIGNED> id58out_io_input_data_arr1_2_force_disabled;

  HWOffsetFix<1,0,UNSIGNED> id63out_io_input_data_arr1_3_force_disabled;

  HWOffsetFix<1,0,UNSIGNED> id68out_io_index_i_force_disabled;

  HWOffsetFix<1,0,UNSIGNED> id73out_io_index_j_force_disabled;

  HWOffsetFix<1,0,UNSIGNED> id78out_io_acc_type_force_disabled;

  HWOffsetFix<1,0,UNSIGNED> id83out_io_write_enable_force_disabled;

  HWOffsetFix<1,0,UNSIGNED> id91out_value;

  HWOffsetFix<1,0,UNSIGNED> id101out_value;

  HWOffsetFix<49,0,UNSIGNED> id88out_value;

  HWOffsetFix<48,0,UNSIGNED> id89out_count;
  HWOffsetFix<1,0,UNSIGNED> id89out_wrap;

  HWOffsetFix<49,0,UNSIGNED> id89st_count;

  HWOffsetFix<1,0,UNSIGNED> id100out_value;

  HWOffsetFix<49,0,UNSIGNED> id94out_value;

  HWOffsetFix<48,0,UNSIGNED> id95out_count;
  HWOffsetFix<1,0,UNSIGNED> id95out_wrap;

  HWOffsetFix<49,0,UNSIGNED> id95st_count;

  HWOffsetFix<48,0,UNSIGNED> id97out_run_cycle_count;

  HWOffsetFix<1,0,UNSIGNED> id99out_result[2];

  const HWOffsetFix<1,0,UNSIGNED> c_hw_fix_1_0_uns_bits;
  const HWRawBits<768> c_hw_bit_768_undef;
  const HWOffsetFix<1,0,UNSIGNED> c_hw_fix_1_0_uns_bits_1;
  const HWOffsetFix<49,0,UNSIGNED> c_hw_fix_49_0_uns_bits;
  const HWOffsetFix<49,0,UNSIGNED> c_hw_fix_49_0_uns_bits_1;
  const HWOffsetFix<49,0,UNSIGNED> c_hw_fix_49_0_uns_bits_2;

  void execute0();
};

}

#endif /* PRF_V2_INPUT_GENERATOR_H_ */
