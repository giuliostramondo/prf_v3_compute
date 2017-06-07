#include "stdsimheader.h"
#include "PRFOutputGen.h"

namespace maxcompilersim {

PRFOutputGen::PRFOutputGen(const std::string &instance_name) : 
  ManagerBlockSync(instance_name),
  KernelManagerBlockSync(instance_name, 9, 2, 0, 0, "",1)
, c_hw_fix_1_0_uns_bits((HWOffsetFix<1,0,UNSIGNED>(varint_u<1>(0x0l))))
, c_hw_fix_64_0_uns_undef((HWOffsetFix<64,0,UNSIGNED>()))
, c_hw_fix_1_0_uns_bits_1((HWOffsetFix<1,0,UNSIGNED>(varint_u<1>(0x1l))))
, c_hw_fix_49_0_uns_bits((HWOffsetFix<49,0,UNSIGNED>(varint_u<49>(0x1000000000000l))))
, c_hw_fix_49_0_uns_bits_1((HWOffsetFix<49,0,UNSIGNED>(varint_u<49>(0x0000000000000l))))
, c_hw_fix_49_0_uns_bits_2((HWOffsetFix<49,0,UNSIGNED>(varint_u<49>(0x0000000000001l))))
{
  { // Node ID: 25 (NodeInputMappedReg)
    registerMappedRegister("io_output_force_disabled", Data(1));
  }
  { // Node ID: 21 (NodeInputMappedReg)
    registerMappedRegister("io_o_1_3_force_disabled", Data(1));
  }
  { // Node ID: 23 (NodeInput)
     m_o_1_3 =  registerInput("o_1_3",7,5);
  }
  { // Node ID: 18 (NodeInputMappedReg)
    registerMappedRegister("io_o_1_2_force_disabled", Data(1));
  }
  { // Node ID: 20 (NodeInput)
     m_o_1_2 =  registerInput("o_1_2",6,5);
  }
  { // Node ID: 15 (NodeInputMappedReg)
    registerMappedRegister("io_o_1_1_force_disabled", Data(1));
  }
  { // Node ID: 17 (NodeInput)
     m_o_1_1 =  registerInput("o_1_1",5,5);
  }
  { // Node ID: 12 (NodeInputMappedReg)
    registerMappedRegister("io_o_1_0_force_disabled", Data(1));
  }
  { // Node ID: 14 (NodeInput)
     m_o_1_0 =  registerInput("o_1_0",4,5);
  }
  { // Node ID: 9 (NodeInputMappedReg)
    registerMappedRegister("io_o_0_3_force_disabled", Data(1));
  }
  { // Node ID: 11 (NodeInput)
     m_o_0_3 =  registerInput("o_0_3",3,5);
  }
  { // Node ID: 6 (NodeInputMappedReg)
    registerMappedRegister("io_o_0_2_force_disabled", Data(1));
  }
  { // Node ID: 8 (NodeInput)
     m_o_0_2 =  registerInput("o_0_2",2,5);
  }
  { // Node ID: 3 (NodeInputMappedReg)
    registerMappedRegister("io_o_0_1_force_disabled", Data(1));
  }
  { // Node ID: 5 (NodeInput)
     m_o_0_1 =  registerInput("o_0_1",1,5);
  }
  { // Node ID: 0 (NodeInputMappedReg)
    registerMappedRegister("io_o_0_0_force_disabled", Data(1));
  }
  { // Node ID: 2 (NodeInput)
     m_o_0_0 =  registerInput("o_0_0",0,5);
  }
  { // Node ID: 28 (NodeOutput)
    m_output = registerOutput("output",0 );
  }
  { // Node ID: 48 (NodeConstantRawBits)
    id48out_value = (c_hw_fix_1_0_uns_bits_1);
  }
  { // Node ID: 64 (NodeConstantRawBits)
    id64out_value = (c_hw_fix_1_0_uns_bits_1);
  }
  { // Node ID: 45 (NodeConstantRawBits)
    id45out_value = (c_hw_fix_49_0_uns_bits);
  }
  { // Node ID: 49 (NodeOutputMappedReg)
    registerMappedRegister("current_run_cycle_count", Data(48), true);
  }
  { // Node ID: 63 (NodeConstantRawBits)
    id63out_value = (c_hw_fix_1_0_uns_bits_1);
  }
  { // Node ID: 51 (NodeConstantRawBits)
    id51out_value = (c_hw_fix_49_0_uns_bits);
  }
  { // Node ID: 54 (NodeInputMappedReg)
    registerMappedRegister("run_cycle_count", Data(48));
  }
}

void PRFOutputGen::resetComputation() {
  resetComputationAfterFlush();
}

void PRFOutputGen::resetComputationAfterFlush() {
  { // Node ID: 25 (NodeInputMappedReg)
    id25out_io_output_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_output_force_disabled");
  }
  { // Node ID: 21 (NodeInputMappedReg)
    id21out_io_o_1_3_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_o_1_3_force_disabled");
  }
  { // Node ID: 23 (NodeInput)

    (id23st_read_next_cycle) = (c_hw_fix_1_0_uns_bits);
    (id23st_last_read_value) = (c_hw_fix_64_0_uns_undef);
  }
  { // Node ID: 18 (NodeInputMappedReg)
    id18out_io_o_1_2_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_o_1_2_force_disabled");
  }
  { // Node ID: 20 (NodeInput)

    (id20st_read_next_cycle) = (c_hw_fix_1_0_uns_bits);
    (id20st_last_read_value) = (c_hw_fix_64_0_uns_undef);
  }
  { // Node ID: 15 (NodeInputMappedReg)
    id15out_io_o_1_1_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_o_1_1_force_disabled");
  }
  { // Node ID: 17 (NodeInput)

    (id17st_read_next_cycle) = (c_hw_fix_1_0_uns_bits);
    (id17st_last_read_value) = (c_hw_fix_64_0_uns_undef);
  }
  { // Node ID: 12 (NodeInputMappedReg)
    id12out_io_o_1_0_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_o_1_0_force_disabled");
  }
  { // Node ID: 14 (NodeInput)

    (id14st_read_next_cycle) = (c_hw_fix_1_0_uns_bits);
    (id14st_last_read_value) = (c_hw_fix_64_0_uns_undef);
  }
  { // Node ID: 9 (NodeInputMappedReg)
    id9out_io_o_0_3_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_o_0_3_force_disabled");
  }
  { // Node ID: 11 (NodeInput)

    (id11st_read_next_cycle) = (c_hw_fix_1_0_uns_bits);
    (id11st_last_read_value) = (c_hw_fix_64_0_uns_undef);
  }
  { // Node ID: 6 (NodeInputMappedReg)
    id6out_io_o_0_2_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_o_0_2_force_disabled");
  }
  { // Node ID: 8 (NodeInput)

    (id8st_read_next_cycle) = (c_hw_fix_1_0_uns_bits);
    (id8st_last_read_value) = (c_hw_fix_64_0_uns_undef);
  }
  { // Node ID: 3 (NodeInputMappedReg)
    id3out_io_o_0_1_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_o_0_1_force_disabled");
  }
  { // Node ID: 5 (NodeInput)

    (id5st_read_next_cycle) = (c_hw_fix_1_0_uns_bits);
    (id5st_last_read_value) = (c_hw_fix_64_0_uns_undef);
  }
  { // Node ID: 0 (NodeInputMappedReg)
    id0out_io_o_0_0_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_o_0_0_force_disabled");
  }
  { // Node ID: 2 (NodeInput)

    (id2st_read_next_cycle) = (c_hw_fix_1_0_uns_bits);
    (id2st_last_read_value) = (c_hw_fix_64_0_uns_undef);
  }
  { // Node ID: 46 (NodeCounter)

    (id46st_count) = (c_hw_fix_49_0_uns_bits_1);
  }
  { // Node ID: 52 (NodeCounter)

    (id52st_count) = (c_hw_fix_49_0_uns_bits_1);
  }
  { // Node ID: 54 (NodeInputMappedReg)
    id54out_run_cycle_count = getMappedRegValue<HWOffsetFix<48,0,UNSIGNED> >("run_cycle_count");
  }
}

void PRFOutputGen::updateState() {
  { // Node ID: 25 (NodeInputMappedReg)
    id25out_io_output_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_output_force_disabled");
  }
  { // Node ID: 21 (NodeInputMappedReg)
    id21out_io_o_1_3_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_o_1_3_force_disabled");
  }
  { // Node ID: 18 (NodeInputMappedReg)
    id18out_io_o_1_2_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_o_1_2_force_disabled");
  }
  { // Node ID: 15 (NodeInputMappedReg)
    id15out_io_o_1_1_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_o_1_1_force_disabled");
  }
  { // Node ID: 12 (NodeInputMappedReg)
    id12out_io_o_1_0_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_o_1_0_force_disabled");
  }
  { // Node ID: 9 (NodeInputMappedReg)
    id9out_io_o_0_3_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_o_0_3_force_disabled");
  }
  { // Node ID: 6 (NodeInputMappedReg)
    id6out_io_o_0_2_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_o_0_2_force_disabled");
  }
  { // Node ID: 3 (NodeInputMappedReg)
    id3out_io_o_0_1_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_o_0_1_force_disabled");
  }
  { // Node ID: 0 (NodeInputMappedReg)
    id0out_io_o_0_0_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_o_0_0_force_disabled");
  }
  { // Node ID: 54 (NodeInputMappedReg)
    id54out_run_cycle_count = getMappedRegValue<HWOffsetFix<48,0,UNSIGNED> >("run_cycle_count");
  }
}

void PRFOutputGen::preExecute() {
  { // Node ID: 23 (NodeInput)
    if(((needsToReadInput(m_o_1_3))&(((getFlushLevel())<((4l)+(5)))|(!(isFlushingActive()))))) {
      (id23st_last_read_value) = (readInput<HWOffsetFix<64,0,UNSIGNED> >(m_o_1_3));
    }
    id23out_data = (id23st_last_read_value);
  }
  { // Node ID: 20 (NodeInput)
    if(((needsToReadInput(m_o_1_2))&(((getFlushLevel())<((4l)+(5)))|(!(isFlushingActive()))))) {
      (id20st_last_read_value) = (readInput<HWOffsetFix<64,0,UNSIGNED> >(m_o_1_2));
    }
    id20out_data = (id20st_last_read_value);
  }
  { // Node ID: 17 (NodeInput)
    if(((needsToReadInput(m_o_1_1))&(((getFlushLevel())<((4l)+(5)))|(!(isFlushingActive()))))) {
      (id17st_last_read_value) = (readInput<HWOffsetFix<64,0,UNSIGNED> >(m_o_1_1));
    }
    id17out_data = (id17st_last_read_value);
  }
  { // Node ID: 14 (NodeInput)
    if(((needsToReadInput(m_o_1_0))&(((getFlushLevel())<((4l)+(5)))|(!(isFlushingActive()))))) {
      (id14st_last_read_value) = (readInput<HWOffsetFix<64,0,UNSIGNED> >(m_o_1_0));
    }
    id14out_data = (id14st_last_read_value);
  }
  { // Node ID: 11 (NodeInput)
    if(((needsToReadInput(m_o_0_3))&(((getFlushLevel())<((4l)+(5)))|(!(isFlushingActive()))))) {
      (id11st_last_read_value) = (readInput<HWOffsetFix<64,0,UNSIGNED> >(m_o_0_3));
    }
    id11out_data = (id11st_last_read_value);
  }
  { // Node ID: 8 (NodeInput)
    if(((needsToReadInput(m_o_0_2))&(((getFlushLevel())<((4l)+(5)))|(!(isFlushingActive()))))) {
      (id8st_last_read_value) = (readInput<HWOffsetFix<64,0,UNSIGNED> >(m_o_0_2));
    }
    id8out_data = (id8st_last_read_value);
  }
  { // Node ID: 5 (NodeInput)
    if(((needsToReadInput(m_o_0_1))&(((getFlushLevel())<((4l)+(5)))|(!(isFlushingActive()))))) {
      (id5st_last_read_value) = (readInput<HWOffsetFix<64,0,UNSIGNED> >(m_o_0_1));
    }
    id5out_data = (id5st_last_read_value);
  }
  { // Node ID: 2 (NodeInput)
    if(((needsToReadInput(m_o_0_0))&(((getFlushLevel())<((4l)+(5)))|(!(isFlushingActive()))))) {
      (id2st_last_read_value) = (readInput<HWOffsetFix<64,0,UNSIGNED> >(m_o_0_0));
    }
    id2out_data = (id2st_last_read_value);
  }
}

void PRFOutputGen::runComputationCycle() {
  if (m_mappedElementsChanged) {
    m_mappedElementsChanged = false;
    updateState();
    std::cout << "PRFOutputGen: Mapped Elements Changed: Reloaded" << std::endl;
  }
  preExecute();
  execute0();
}

int PRFOutputGen::getFlushLevelStart() {
  return ((1l)+(3l));
}

}
