#include "stdsimheader.h"
#include "prf_v2_Input_Generator.h"

namespace maxcompilersim {

prf_v2_Input_Generator::prf_v2_Input_Generator(const std::string &instance_name) : 
  ManagerBlockSync(instance_name),
  KernelManagerBlockSync(instance_name, 9, 2, 0, 0, "",1)
, c_hw_fix_1_0_uns_bits((HWOffsetFix<1,0,UNSIGNED>(varint_u<1>(0x0l))))
, c_hw_bit_768_undef((HWRawBits<768>()))
, c_hw_fix_1_0_uns_bits_1((HWOffsetFix<1,0,UNSIGNED>(varint_u<1>(0x1l))))
, c_hw_fix_49_0_uns_bits((HWOffsetFix<49,0,UNSIGNED>(varint_u<49>(0x1000000000000l))))
, c_hw_fix_49_0_uns_bits_1((HWOffsetFix<49,0,UNSIGNED>(varint_u<49>(0x0000000000000l))))
, c_hw_fix_49_0_uns_bits_2((HWOffsetFix<49,0,UNSIGNED>(varint_u<49>(0x0000000000001l))))
{
  { // Node ID: 28 (NodeInputMappedReg)
    registerMappedRegister("io_input_data_arr0_0_force_disabled", Data(1));
  }
  { // Node ID: 0 (NodeInputMappedReg)
    registerMappedRegister("io_input_vector_force_disabled", Data(1));
  }
  { // Node ID: 2 (NodeInput)
     m_input_vector =  registerInput("input_vector",0,5);
  }
  { // Node ID: 31 (NodeOutput)
    m_input_data_arr0_0 = registerOutput("input_data_arr0_0",0 );
  }
  { // Node ID: 33 (NodeInputMappedReg)
    registerMappedRegister("io_input_data_arr0_1_force_disabled", Data(1));
  }
  { // Node ID: 36 (NodeOutput)
    m_input_data_arr0_1 = registerOutput("input_data_arr0_1",1 );
  }
  { // Node ID: 38 (NodeInputMappedReg)
    registerMappedRegister("io_input_data_arr0_2_force_disabled", Data(1));
  }
  { // Node ID: 41 (NodeOutput)
    m_input_data_arr0_2 = registerOutput("input_data_arr0_2",2 );
  }
  { // Node ID: 43 (NodeInputMappedReg)
    registerMappedRegister("io_input_data_arr0_3_force_disabled", Data(1));
  }
  { // Node ID: 46 (NodeOutput)
    m_input_data_arr0_3 = registerOutput("input_data_arr0_3",3 );
  }
  { // Node ID: 48 (NodeInputMappedReg)
    registerMappedRegister("io_input_data_arr1_0_force_disabled", Data(1));
  }
  { // Node ID: 51 (NodeOutput)
    m_input_data_arr1_0 = registerOutput("input_data_arr1_0",4 );
  }
  { // Node ID: 53 (NodeInputMappedReg)
    registerMappedRegister("io_input_data_arr1_1_force_disabled", Data(1));
  }
  { // Node ID: 56 (NodeOutput)
    m_input_data_arr1_1 = registerOutput("input_data_arr1_1",5 );
  }
  { // Node ID: 58 (NodeInputMappedReg)
    registerMappedRegister("io_input_data_arr1_2_force_disabled", Data(1));
  }
  { // Node ID: 61 (NodeOutput)
    m_input_data_arr1_2 = registerOutput("input_data_arr1_2",6 );
  }
  { // Node ID: 63 (NodeInputMappedReg)
    registerMappedRegister("io_input_data_arr1_3_force_disabled", Data(1));
  }
  { // Node ID: 66 (NodeOutput)
    m_input_data_arr1_3 = registerOutput("input_data_arr1_3",7 );
  }
  { // Node ID: 68 (NodeInputMappedReg)
    registerMappedRegister("io_index_i_force_disabled", Data(1));
  }
  { // Node ID: 71 (NodeOutput)
    m_index_i = registerOutput("index_i",8 );
  }
  { // Node ID: 73 (NodeInputMappedReg)
    registerMappedRegister("io_index_j_force_disabled", Data(1));
  }
  { // Node ID: 76 (NodeOutput)
    m_index_j = registerOutput("index_j",9 );
  }
  { // Node ID: 78 (NodeInputMappedReg)
    registerMappedRegister("io_acc_type_force_disabled", Data(1));
  }
  { // Node ID: 81 (NodeOutput)
    m_acc_type = registerOutput("acc_type",10 );
  }
  { // Node ID: 83 (NodeInputMappedReg)
    registerMappedRegister("io_write_enable_force_disabled", Data(1));
  }
  { // Node ID: 86 (NodeOutput)
    m_write_enable = registerOutput("write_enable",11 );
  }
  { // Node ID: 91 (NodeConstantRawBits)
    id91out_value = (c_hw_fix_1_0_uns_bits_1);
  }
  { // Node ID: 101 (NodeConstantRawBits)
    id101out_value = (c_hw_fix_1_0_uns_bits_1);
  }
  { // Node ID: 88 (NodeConstantRawBits)
    id88out_value = (c_hw_fix_49_0_uns_bits);
  }
  { // Node ID: 92 (NodeOutputMappedReg)
    registerMappedRegister("current_run_cycle_count", Data(48), true);
  }
  { // Node ID: 100 (NodeConstantRawBits)
    id100out_value = (c_hw_fix_1_0_uns_bits_1);
  }
  { // Node ID: 94 (NodeConstantRawBits)
    id94out_value = (c_hw_fix_49_0_uns_bits);
  }
  { // Node ID: 97 (NodeInputMappedReg)
    registerMappedRegister("run_cycle_count", Data(48));
  }
}

void prf_v2_Input_Generator::resetComputation() {
  resetComputationAfterFlush();
}

void prf_v2_Input_Generator::resetComputationAfterFlush() {
  { // Node ID: 28 (NodeInputMappedReg)
    id28out_io_input_data_arr0_0_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_input_data_arr0_0_force_disabled");
  }
  { // Node ID: 0 (NodeInputMappedReg)
    id0out_io_input_vector_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_input_vector_force_disabled");
  }
  { // Node ID: 2 (NodeInput)

    (id2st_read_next_cycle) = (c_hw_fix_1_0_uns_bits);
    (id2st_last_read_value) = (c_hw_bit_768_undef);
  }
  { // Node ID: 33 (NodeInputMappedReg)
    id33out_io_input_data_arr0_1_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_input_data_arr0_1_force_disabled");
  }
  { // Node ID: 38 (NodeInputMappedReg)
    id38out_io_input_data_arr0_2_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_input_data_arr0_2_force_disabled");
  }
  { // Node ID: 43 (NodeInputMappedReg)
    id43out_io_input_data_arr0_3_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_input_data_arr0_3_force_disabled");
  }
  { // Node ID: 48 (NodeInputMappedReg)
    id48out_io_input_data_arr1_0_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_input_data_arr1_0_force_disabled");
  }
  { // Node ID: 53 (NodeInputMappedReg)
    id53out_io_input_data_arr1_1_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_input_data_arr1_1_force_disabled");
  }
  { // Node ID: 58 (NodeInputMappedReg)
    id58out_io_input_data_arr1_2_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_input_data_arr1_2_force_disabled");
  }
  { // Node ID: 63 (NodeInputMappedReg)
    id63out_io_input_data_arr1_3_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_input_data_arr1_3_force_disabled");
  }
  { // Node ID: 68 (NodeInputMappedReg)
    id68out_io_index_i_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_index_i_force_disabled");
  }
  { // Node ID: 73 (NodeInputMappedReg)
    id73out_io_index_j_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_index_j_force_disabled");
  }
  { // Node ID: 78 (NodeInputMappedReg)
    id78out_io_acc_type_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_acc_type_force_disabled");
  }
  { // Node ID: 83 (NodeInputMappedReg)
    id83out_io_write_enable_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_write_enable_force_disabled");
  }
  { // Node ID: 89 (NodeCounter)

    (id89st_count) = (c_hw_fix_49_0_uns_bits_1);
  }
  { // Node ID: 95 (NodeCounter)

    (id95st_count) = (c_hw_fix_49_0_uns_bits_1);
  }
  { // Node ID: 97 (NodeInputMappedReg)
    id97out_run_cycle_count = getMappedRegValue<HWOffsetFix<48,0,UNSIGNED> >("run_cycle_count");
  }
}

void prf_v2_Input_Generator::updateState() {
  { // Node ID: 28 (NodeInputMappedReg)
    id28out_io_input_data_arr0_0_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_input_data_arr0_0_force_disabled");
  }
  { // Node ID: 0 (NodeInputMappedReg)
    id0out_io_input_vector_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_input_vector_force_disabled");
  }
  { // Node ID: 33 (NodeInputMappedReg)
    id33out_io_input_data_arr0_1_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_input_data_arr0_1_force_disabled");
  }
  { // Node ID: 38 (NodeInputMappedReg)
    id38out_io_input_data_arr0_2_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_input_data_arr0_2_force_disabled");
  }
  { // Node ID: 43 (NodeInputMappedReg)
    id43out_io_input_data_arr0_3_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_input_data_arr0_3_force_disabled");
  }
  { // Node ID: 48 (NodeInputMappedReg)
    id48out_io_input_data_arr1_0_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_input_data_arr1_0_force_disabled");
  }
  { // Node ID: 53 (NodeInputMappedReg)
    id53out_io_input_data_arr1_1_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_input_data_arr1_1_force_disabled");
  }
  { // Node ID: 58 (NodeInputMappedReg)
    id58out_io_input_data_arr1_2_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_input_data_arr1_2_force_disabled");
  }
  { // Node ID: 63 (NodeInputMappedReg)
    id63out_io_input_data_arr1_3_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_input_data_arr1_3_force_disabled");
  }
  { // Node ID: 68 (NodeInputMappedReg)
    id68out_io_index_i_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_index_i_force_disabled");
  }
  { // Node ID: 73 (NodeInputMappedReg)
    id73out_io_index_j_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_index_j_force_disabled");
  }
  { // Node ID: 78 (NodeInputMappedReg)
    id78out_io_acc_type_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_acc_type_force_disabled");
  }
  { // Node ID: 83 (NodeInputMappedReg)
    id83out_io_write_enable_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_write_enable_force_disabled");
  }
  { // Node ID: 97 (NodeInputMappedReg)
    id97out_run_cycle_count = getMappedRegValue<HWOffsetFix<48,0,UNSIGNED> >("run_cycle_count");
  }
}

void prf_v2_Input_Generator::preExecute() {
  { // Node ID: 2 (NodeInput)
    if(((needsToReadInput(m_input_vector))&(((getFlushLevel())<((4l)+(5)))|(!(isFlushingActive()))))) {
      (id2st_last_read_value) = (readInput<HWRawBits<768> >(m_input_vector));
    }
    id2out_data = (id2st_last_read_value);
  }
}

void prf_v2_Input_Generator::runComputationCycle() {
  if (m_mappedElementsChanged) {
    m_mappedElementsChanged = false;
    updateState();
    std::cout << "prf_v2_Input_Generator: Mapped Elements Changed: Reloaded" << std::endl;
  }
  preExecute();
  execute0();
}

int prf_v2_Input_Generator::getFlushLevelStart() {
  return ((1l)+(3l));
}

}
