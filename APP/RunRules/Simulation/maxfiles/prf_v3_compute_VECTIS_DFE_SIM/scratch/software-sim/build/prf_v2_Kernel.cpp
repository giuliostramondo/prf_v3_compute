#include "stdsimheader.h"
#include "prf_v2_Kernel.h"

namespace maxcompilersim {

prf_v2_Kernel::prf_v2_Kernel(const std::string &instance_name) : 
  ManagerBlockSync(instance_name),
  KernelManagerBlockSync(instance_name, 30, 2, 0, 0, "",1)
, c_hw_fix_1_0_uns_bits((HWOffsetFix<1,0,UNSIGNED>(varint_u<1>(0x1l))))
, c_hw_fix_32_0_sgn_bits((HWOffsetFix<32,0,TWOSCOMPLEMENT>(varint_u<32>(0x00000001l))))
, c_hw_fix_32_0_sgn_bits_1((HWOffsetFix<32,0,TWOSCOMPLEMENT>(varint_u<32>(0x00000002l))))
, c_hw_fix_1_0_uns_bits_1((HWOffsetFix<1,0,UNSIGNED>(varint_u<1>(0x0l))))
, c_hw_fix_64_0_uns_undef((HWOffsetFix<64,0,UNSIGNED>()))
, c_hw_fix_64_0_uns_bits((HWOffsetFix<64,0,UNSIGNED>(varint_u<64>(0x0000000000000005l))))
, c_hw_fix_1_0_uns_undef((HWOffsetFix<1,0,UNSIGNED>()))
, c_hw_fix_64_0_uns_bits_1((HWOffsetFix<64,0,UNSIGNED>(varint_u<64>(0x0000000000000004l))))
, c_hw_fix_64_0_uns_bits_2((HWOffsetFix<64,0,UNSIGNED>(varint_u<64>(0x0000000000000003l))))
, c_hw_fix_64_0_uns_bits_3((HWOffsetFix<64,0,UNSIGNED>(varint_u<64>(0x0000000000000002l))))
, c_hw_fix_64_0_uns_bits_4((HWOffsetFix<64,0,UNSIGNED>(varint_u<64>(0x0000000000000001l))))
, c_hw_fix_64_0_uns_bits_5((HWOffsetFix<64,0,UNSIGNED>(varint_u<64>(0x000000000000ffffl))))
, c_hw_fix_64_0_uns_bits_6((HWOffsetFix<64,0,UNSIGNED>(varint_u<64>(0x0000000000000007l))))
, c_hw_bit_1_undef((HWRawBits<1>()))
, c_hw_bit_2_undef((HWRawBits<2>()))
, c_hw_fix_64_0_uns_bits_7((HWOffsetFix<64,0,UNSIGNED>(varint_u<64>(0x0000000000000000l))))
, c_hw_fix_64_0_uns_bits_8((HWOffsetFix<64,0,UNSIGNED>(varint_u<64>(0x0000000000000006l))))
, c_hw_bit_64_undef((HWRawBits<64>()))
, c_hw_fix_64_4_uns_undef((HWOffsetFix<64,4,UNSIGNED>()))
, c_hw_fix_49_0_uns_bits((HWOffsetFix<49,0,UNSIGNED>(varint_u<49>(0x1000000000000l))))
, c_hw_fix_49_0_uns_bits_1((HWOffsetFix<49,0,UNSIGNED>(varint_u<49>(0x0000000000000l))))
, c_hw_fix_49_0_uns_bits_2((HWOffsetFix<49,0,UNSIGNED>(varint_u<49>(0x0000000000001l))))
{
  { // Node ID: 2241 (NodeConstantRawBits)
    id2241out_value = (c_hw_fix_1_0_uns_bits);
  }
  { // Node ID: 12 (NodeInputMappedReg)
    registerMappedRegister("compute", Data(32));
  }
  { // Node ID: 2242 (NodeOutput)
    m_internal_watch_compute_b_output = registerOutput("internal_watch_compute_b_output",8 );
  }
  { // Node ID: 2243 (NodeOutput)
    m_internal_watch_compute_bla_output = registerOutput("internal_watch_compute_bla_output",9 );
  }
  { // Node ID: 2859 (NodeConstantRawBits)
    id2859out_value = (c_hw_fix_32_0_sgn_bits);
  }
  { // Node ID: 2244 (NodeOutput)
    m_internal_watch_compute_eq_output = registerOutput("internal_watch_compute_eq_output",10 );
  }
  { // Node ID: 1741 (NodeInputMappedReg)
    registerMappedRegister("io_o_0_0_force_disabled", Data(1));
  }
  { // Node ID: 2858 (NodeConstantRawBits)
    id2858out_value = (c_hw_fix_32_0_sgn_bits_1);
  }
  { // Node ID: 6 (NodeInputMappedReg)
    registerMappedRegister("io_acc_type_force_disabled", Data(1));
  }
  { // Node ID: 8 (NodeInput)
     m_acc_type =  registerInput("acc_type",2,5);
  }
  { // Node ID: 2857 (NodeConstantRawBits)
    id2857out_value = (c_hw_fix_64_0_uns_bits);
  }
  { // Node ID: 2856 (NodeConstantRawBits)
    id2856out_value = (c_hw_fix_64_0_uns_bits_1);
  }
  { // Node ID: 2855 (NodeConstantRawBits)
    id2855out_value = (c_hw_fix_64_0_uns_bits_2);
  }
  { // Node ID: 2854 (NodeConstantRawBits)
    id2854out_value = (c_hw_fix_64_0_uns_bits_3);
  }
  { // Node ID: 2853 (NodeConstantRawBits)
    id2853out_value = (c_hw_fix_64_0_uns_bits_4);
  }
  { // Node ID: 0 (NodeInputMappedReg)
    registerMappedRegister("io_index_i_force_disabled", Data(1));
  }
  { // Node ID: 2 (NodeInput)
     m_index_i =  registerInput("index_i",0,5);
  }
  { // Node ID: 3 (NodeInputMappedReg)
    registerMappedRegister("io_index_j_force_disabled", Data(1));
  }
  { // Node ID: 5 (NodeInput)
     m_index_j =  registerInput("index_j",1,5);
  }
  { // Node ID: 2852 (NodeConstantRawBits)
    id2852out_value = (c_hw_fix_64_0_uns_bits_5);
  }
  { // Node ID: 2851 (NodeConstantRawBits)
    id2851out_value = (c_hw_fix_64_0_uns_bits_4);
  }
  { // Node ID: 2850 (NodeConstantRawBits)
    id2850out_value = (c_hw_fix_64_0_uns_bits_2);
  }
  { // Node ID: 2849 (NodeConstantRawBits)
    id2849out_value = (c_hw_fix_64_0_uns_bits_1);
  }
  { // Node ID: 2848 (NodeConstantRawBits)
    id2848out_value = (c_hw_fix_64_0_uns_bits_2);
  }
  { // Node ID: 2847 (NodeConstantRawBits)
    id2847out_value = (c_hw_fix_64_0_uns_bits_1);
  }
  { // Node ID: 2846 (NodeConstantRawBits)
    id2846out_value = (c_hw_fix_64_0_uns_bits_2);
  }
  { // Node ID: 2845 (NodeConstantRawBits)
    id2845out_value = (c_hw_fix_64_0_uns_bits_1);
  }
  { // Node ID: 2844 (NodeConstantRawBits)
    id2844out_value = (c_hw_fix_64_0_uns_bits_2);
  }
  { // Node ID: 2843 (NodeConstantRawBits)
    id2843out_value = (c_hw_fix_64_0_uns_bits_1);
  }
  { // Node ID: 2842 (NodeConstantRawBits)
    id2842out_value = (c_hw_fix_64_0_uns_bits_2);
  }
  { // Node ID: 2841 (NodeConstantRawBits)
    id2841out_value = (c_hw_fix_64_0_uns_bits_1);
  }
  { // Node ID: 2840 (NodeConstantRawBits)
    id2840out_value = (c_hw_fix_64_0_uns_bits_2);
  }
  { // Node ID: 2839 (NodeConstantRawBits)
    id2839out_value = (c_hw_fix_64_0_uns_bits_6);
  }
  { // Node ID: 2838 (NodeConstantRawBits)
    id2838out_value = (c_hw_fix_64_0_uns_bits_2);
  }
  { // Node ID: 2837 (NodeConstantRawBits)
    id2837out_value = (c_hw_fix_64_0_uns_bits_4);
  }
  { // Node ID: 2836 (NodeConstantRawBits)
    id2836out_value = (c_hw_fix_64_0_uns_bits_5);
  }
  { // Node ID: 2835 (NodeConstantRawBits)
    id2835out_value = (c_hw_fix_64_0_uns_bits_7);
  }
  { // Node ID: 2834 (NodeConstantRawBits)
    id2834out_value = (c_hw_fix_64_0_uns_bits_4);
  }
  { // Node ID: 2833 (NodeConstantRawBits)
    id2833out_value = (c_hw_fix_64_0_uns_bits_3);
  }
  { // Node ID: 2832 (NodeConstantRawBits)
    id2832out_value = (c_hw_fix_64_0_uns_bits_1);
  }
  { // Node ID: 2831 (NodeConstantRawBits)
    id2831out_value = (c_hw_fix_64_0_uns_bits_3);
  }
  { // Node ID: 2830 (NodeConstantRawBits)
    id2830out_value = (c_hw_fix_64_0_uns_bits_1);
  }
  { // Node ID: 2829 (NodeConstantRawBits)
    id2829out_value = (c_hw_fix_64_0_uns_bits_3);
  }
  { // Node ID: 2828 (NodeConstantRawBits)
    id2828out_value = (c_hw_fix_64_0_uns_bits_1);
  }
  { // Node ID: 2827 (NodeConstantRawBits)
    id2827out_value = (c_hw_fix_64_0_uns_bits_3);
  }
  { // Node ID: 2826 (NodeConstantRawBits)
    id2826out_value = (c_hw_fix_64_0_uns_bits_1);
  }
  { // Node ID: 2825 (NodeConstantRawBits)
    id2825out_value = (c_hw_fix_64_0_uns_bits_3);
  }
  { // Node ID: 2824 (NodeConstantRawBits)
    id2824out_value = (c_hw_fix_64_0_uns_bits_1);
  }
  { // Node ID: 2823 (NodeConstantRawBits)
    id2823out_value = (c_hw_fix_64_0_uns_bits_3);
  }
  { // Node ID: 2822 (NodeConstantRawBits)
    id2822out_value = (c_hw_fix_64_0_uns_bits_8);
  }
  { // Node ID: 2821 (NodeConstantRawBits)
    id2821out_value = (c_hw_fix_64_0_uns_bits_3);
  }
  { // Node ID: 2820 (NodeConstantRawBits)
    id2820out_value = (c_hw_fix_64_0_uns_bits_4);
  }
  { // Node ID: 2819 (NodeConstantRawBits)
    id2819out_value = (c_hw_fix_64_0_uns_bits_5);
  }
  { // Node ID: 2818 (NodeConstantRawBits)
    id2818out_value = (c_hw_fix_64_0_uns_bits_7);
  }
  { // Node ID: 2817 (NodeConstantRawBits)
    id2817out_value = (c_hw_fix_64_0_uns_bits_4);
  }
  { // Node ID: 2816 (NodeConstantRawBits)
    id2816out_value = (c_hw_fix_64_0_uns_bits_4);
  }
  { // Node ID: 2815 (NodeConstantRawBits)
    id2815out_value = (c_hw_fix_64_0_uns_bits_1);
  }
  { // Node ID: 2814 (NodeConstantRawBits)
    id2814out_value = (c_hw_fix_64_0_uns_bits_4);
  }
  { // Node ID: 2813 (NodeConstantRawBits)
    id2813out_value = (c_hw_fix_64_0_uns_bits_1);
  }
  { // Node ID: 2812 (NodeConstantRawBits)
    id2812out_value = (c_hw_fix_64_0_uns_bits_4);
  }
  { // Node ID: 2811 (NodeConstantRawBits)
    id2811out_value = (c_hw_fix_64_0_uns_bits_1);
  }
  { // Node ID: 2810 (NodeConstantRawBits)
    id2810out_value = (c_hw_fix_64_0_uns_bits_4);
  }
  { // Node ID: 2809 (NodeConstantRawBits)
    id2809out_value = (c_hw_fix_64_0_uns_bits_1);
  }
  { // Node ID: 2808 (NodeConstantRawBits)
    id2808out_value = (c_hw_fix_64_0_uns_bits_4);
  }
  { // Node ID: 2807 (NodeConstantRawBits)
    id2807out_value = (c_hw_fix_64_0_uns_bits_1);
  }
  { // Node ID: 2806 (NodeConstantRawBits)
    id2806out_value = (c_hw_fix_64_0_uns_bits_4);
  }
  { // Node ID: 2805 (NodeConstantRawBits)
    id2805out_value = (c_hw_fix_64_0_uns_bits);
  }
  { // Node ID: 2804 (NodeConstantRawBits)
    id2804out_value = (c_hw_fix_64_0_uns_bits_4);
  }
  { // Node ID: 2803 (NodeConstantRawBits)
    id2803out_value = (c_hw_fix_64_0_uns_bits_4);
  }
  { // Node ID: 2802 (NodeConstantRawBits)
    id2802out_value = (c_hw_fix_64_0_uns_bits_5);
  }
  { // Node ID: 2801 (NodeConstantRawBits)
    id2801out_value = (c_hw_fix_64_0_uns_bits_7);
  }
  { // Node ID: 2800 (NodeConstantRawBits)
    id2800out_value = (c_hw_fix_64_0_uns_bits_4);
  }
  { // Node ID: 2799 (NodeConstantRawBits)
    id2799out_value = (c_hw_fix_64_0_uns_bits_1);
  }
  { // Node ID: 2798 (NodeConstantRawBits)
    id2798out_value = (c_hw_fix_64_0_uns_bits_1);
  }
  { // Node ID: 2797 (NodeConstantRawBits)
    id2797out_value = (c_hw_fix_64_0_uns_bits_1);
  }
  { // Node ID: 2796 (NodeConstantRawBits)
    id2796out_value = (c_hw_fix_64_0_uns_bits_1);
  }
  { // Node ID: 2795 (NodeConstantRawBits)
    id2795out_value = (c_hw_fix_64_0_uns_bits_1);
  }
  { // Node ID: 2794 (NodeConstantRawBits)
    id2794out_value = (c_hw_fix_64_0_uns_bits_1);
  }
  { // Node ID: 2793 (NodeConstantRawBits)
    id2793out_value = (c_hw_fix_64_0_uns_bits_4);
  }
  { // Node ID: 2792 (NodeConstantRawBits)
    id2792out_value = (c_hw_fix_64_0_uns_bits_5);
  }
  { // Node ID: 2791 (NodeConstantRawBits)
    id2791out_value = (c_hw_fix_64_0_uns_bits_7);
  }
  { // Node ID: 2790 (NodeConstantRawBits)
    id2790out_value = (c_hw_fix_64_0_uns_bits_2);
  }
  { // Node ID: 2789 (NodeConstantRawBits)
    id2789out_value = (c_hw_fix_64_0_uns_bits_2);
  }
  { // Node ID: 2788 (NodeConstantRawBits)
    id2788out_value = (c_hw_fix_64_0_uns_bits_2);
  }
  { // Node ID: 2787 (NodeConstantRawBits)
    id2787out_value = (c_hw_fix_64_0_uns_bits_2);
  }
  { // Node ID: 2786 (NodeConstantRawBits)
    id2786out_value = (c_hw_fix_64_0_uns_bits_2);
  }
  { // Node ID: 2785 (NodeConstantRawBits)
    id2785out_value = (c_hw_fix_64_0_uns_bits_2);
  }
  { // Node ID: 2784 (NodeConstantRawBits)
    id2784out_value = (c_hw_fix_64_0_uns_bits_2);
  }
  { // Node ID: 2783 (NodeConstantRawBits)
    id2783out_value = (c_hw_fix_64_0_uns_bits_2);
  }
  { // Node ID: 2782 (NodeConstantRawBits)
    id2782out_value = (c_hw_fix_64_0_uns_bits_5);
  }
  { // Node ID: 2781 (NodeConstantRawBits)
    id2781out_value = (c_hw_fix_64_0_uns_bits_7);
  }
  { // Node ID: 2780 (NodeConstantRawBits)
    id2780out_value = (c_hw_fix_64_0_uns_bits_3);
  }
  { // Node ID: 2779 (NodeConstantRawBits)
    id2779out_value = (c_hw_fix_64_0_uns_bits_3);
  }
  { // Node ID: 2778 (NodeConstantRawBits)
    id2778out_value = (c_hw_fix_64_0_uns_bits_3);
  }
  { // Node ID: 2777 (NodeConstantRawBits)
    id2777out_value = (c_hw_fix_64_0_uns_bits_3);
  }
  { // Node ID: 2776 (NodeConstantRawBits)
    id2776out_value = (c_hw_fix_64_0_uns_bits_3);
  }
  { // Node ID: 2775 (NodeConstantRawBits)
    id2775out_value = (c_hw_fix_64_0_uns_bits_3);
  }
  { // Node ID: 2774 (NodeConstantRawBits)
    id2774out_value = (c_hw_fix_64_0_uns_bits_3);
  }
  { // Node ID: 2773 (NodeConstantRawBits)
    id2773out_value = (c_hw_fix_64_0_uns_bits_3);
  }
  { // Node ID: 2772 (NodeConstantRawBits)
    id2772out_value = (c_hw_fix_64_0_uns_bits_5);
  }
  { // Node ID: 2771 (NodeConstantRawBits)
    id2771out_value = (c_hw_fix_64_0_uns_bits_7);
  }
  { // Node ID: 2770 (NodeConstantRawBits)
    id2770out_value = (c_hw_fix_64_0_uns_bits_4);
  }
  { // Node ID: 2769 (NodeConstantRawBits)
    id2769out_value = (c_hw_fix_64_0_uns_bits_4);
  }
  { // Node ID: 2768 (NodeConstantRawBits)
    id2768out_value = (c_hw_fix_64_0_uns_bits_4);
  }
  { // Node ID: 2767 (NodeConstantRawBits)
    id2767out_value = (c_hw_fix_64_0_uns_bits_4);
  }
  { // Node ID: 2766 (NodeConstantRawBits)
    id2766out_value = (c_hw_fix_64_0_uns_bits_4);
  }
  { // Node ID: 2765 (NodeConstantRawBits)
    id2765out_value = (c_hw_fix_64_0_uns_bits_4);
  }
  { // Node ID: 2764 (NodeConstantRawBits)
    id2764out_value = (c_hw_fix_64_0_uns_bits_4);
  }
  { // Node ID: 2763 (NodeConstantRawBits)
    id2763out_value = (c_hw_fix_64_0_uns_bits_4);
  }
  { // Node ID: 2762 (NodeConstantRawBits)
    id2762out_value = (c_hw_fix_64_0_uns_bits_5);
  }
  { // Node ID: 2761 (NodeConstantRawBits)
    id2761out_value = (c_hw_fix_64_0_uns_bits_7);
  }
  { // Node ID: 2760 (NodeConstantRawBits)
    id2760out_value = (c_hw_fix_64_0_uns_bits_5);
  }
  { // Node ID: 2759 (NodeConstantRawBits)
    id2759out_value = (c_hw_fix_64_0_uns_bits_5);
  }
  { // Node ID: 2758 (NodeConstantRawBits)
    id2758out_value = (c_hw_fix_64_0_uns_bits_5);
  }
  { // Node ID: 2757 (NodeConstantRawBits)
    id2757out_value = (c_hw_fix_64_0_uns_bits_5);
  }
  { // Node ID: 2756 (NodeConstantRawBits)
    id2756out_value = (c_hw_fix_64_0_uns_bits_5);
  }
  { // Node ID: 2755 (NodeConstantRawBits)
    id2755out_value = (c_hw_fix_64_0_uns_bits_5);
  }
  { // Node ID: 2754 (NodeConstantRawBits)
    id2754out_value = (c_hw_fix_64_0_uns_bits_5);
  }
  { // Node ID: 2753 (NodeConstantRawBits)
    id2753out_value = (c_hw_fix_64_0_uns_bits_5);
  }
  { // Node ID: 2752 (NodeConstantRawBits)
    id2752out_value = (c_hw_fix_32_0_sgn_bits);
  }
  { // Node ID: 2751 (NodeConstantRawBits)
    id2751out_value = (c_hw_fix_64_0_uns_bits_7);
  }
  { // Node ID: 2750 (NodeConstantRawBits)
    id2750out_value = (c_hw_fix_64_0_uns_bits_7);
  }
  { // Node ID: 2749 (NodeConstantRawBits)
    id2749out_value = (c_hw_fix_64_0_uns_bits_7);
  }
  { // Node ID: 2748 (NodeConstantRawBits)
    id2748out_value = (c_hw_fix_64_0_uns_bits_7);
  }
  { // Node ID: 2747 (NodeConstantRawBits)
    id2747out_value = (c_hw_fix_64_0_uns_bits_7);
  }
  { // Node ID: 2746 (NodeConstantRawBits)
    id2746out_value = (c_hw_fix_64_0_uns_bits_7);
  }
  { // Node ID: 2745 (NodeConstantRawBits)
    id2745out_value = (c_hw_fix_64_0_uns_bits_7);
  }
  { // Node ID: 14 (NodeInputMappedReg)
    registerMappedRegister("io_input_data_arr0_0_force_disabled", Data(1));
  }
  { // Node ID: 16 (NodeInput)
     m_input_data_arr0_0 =  registerInput("input_data_arr0_0",4,5);
  }
  { // Node ID: 17 (NodeInputMappedReg)
    registerMappedRegister("io_input_data_arr0_1_force_disabled", Data(1));
  }
  { // Node ID: 19 (NodeInput)
     m_input_data_arr0_1 =  registerInput("input_data_arr0_1",5,5);
  }
  { // Node ID: 20 (NodeInputMappedReg)
    registerMappedRegister("io_input_data_arr0_2_force_disabled", Data(1));
  }
  { // Node ID: 22 (NodeInput)
     m_input_data_arr0_2 =  registerInput("input_data_arr0_2",6,5);
  }
  { // Node ID: 23 (NodeInputMappedReg)
    registerMappedRegister("io_input_data_arr0_3_force_disabled", Data(1));
  }
  { // Node ID: 25 (NodeInput)
     m_input_data_arr0_3 =  registerInput("input_data_arr0_3",7,5);
  }
  { // Node ID: 26 (NodeInputMappedReg)
    registerMappedRegister("io_input_data_arr1_0_force_disabled", Data(1));
  }
  { // Node ID: 28 (NodeInput)
     m_input_data_arr1_0 =  registerInput("input_data_arr1_0",8,5);
  }
  { // Node ID: 29 (NodeInputMappedReg)
    registerMappedRegister("io_input_data_arr1_1_force_disabled", Data(1));
  }
  { // Node ID: 31 (NodeInput)
     m_input_data_arr1_1 =  registerInput("input_data_arr1_1",9,5);
  }
  { // Node ID: 32 (NodeInputMappedReg)
    registerMappedRegister("io_input_data_arr1_2_force_disabled", Data(1));
  }
  { // Node ID: 34 (NodeInput)
     m_input_data_arr1_2 =  registerInput("input_data_arr1_2",10,5);
  }
  { // Node ID: 35 (NodeInputMappedReg)
    registerMappedRegister("io_input_data_arr1_3_force_disabled", Data(1));
  }
  { // Node ID: 37 (NodeInput)
     m_input_data_arr1_3 =  registerInput("input_data_arr1_3",11,5);
  }
  { // Node ID: 2744 (NodeConstantRawBits)
    id2744out_value = (c_hw_fix_64_0_uns_bits);
  }
  { // Node ID: 9 (NodeInputMappedReg)
    registerMappedRegister("io_write_enable_force_disabled", Data(1));
  }
  { // Node ID: 11 (NodeInput)
     m_write_enable =  registerInput("write_enable",3,5);
  }
  { // Node ID: 1780 (NodeRAM)
    for(int i=0;i<1250;i++)
      (id1780sta_ram_store[(i)]) = (c_hw_fix_64_0_uns_undef);
  }
  { // Node ID: 2743 (NodeConstantRawBits)
    id2743out_value = (c_hw_fix_64_0_uns_bits_4);
  }
  { // Node ID: 2742 (NodeConstantRawBits)
    id2742out_value = (c_hw_fix_64_0_uns_bits_4);
  }
  { // Node ID: 2741 (NodeConstantRawBits)
    id2741out_value = (c_hw_fix_64_0_uns_bits_4);
  }
  { // Node ID: 2740 (NodeConstantRawBits)
    id2740out_value = (c_hw_fix_64_0_uns_bits_4);
  }
  { // Node ID: 2739 (NodeConstantRawBits)
    id2739out_value = (c_hw_fix_64_0_uns_bits_4);
  }
  { // Node ID: 2738 (NodeConstantRawBits)
    id2738out_value = (c_hw_fix_64_0_uns_bits_4);
  }
  { // Node ID: 2737 (NodeConstantRawBits)
    id2737out_value = (c_hw_fix_64_0_uns_bits_4);
  }
  { // Node ID: 2736 (NodeConstantRawBits)
    id2736out_value = (c_hw_fix_64_0_uns_bits_4);
  }
  { // Node ID: 2735 (NodeConstantRawBits)
    id2735out_value = (c_hw_fix_32_0_sgn_bits);
  }
  { // Node ID: 2734 (NodeConstantRawBits)
    id2734out_value = (c_hw_fix_64_0_uns_bits_4);
  }
  { // Node ID: 2733 (NodeConstantRawBits)
    id2733out_value = (c_hw_fix_64_0_uns_bits_4);
  }
  { // Node ID: 2732 (NodeConstantRawBits)
    id2732out_value = (c_hw_fix_64_0_uns_bits_4);
  }
  { // Node ID: 2731 (NodeConstantRawBits)
    id2731out_value = (c_hw_fix_64_0_uns_bits_4);
  }
  { // Node ID: 2730 (NodeConstantRawBits)
    id2730out_value = (c_hw_fix_64_0_uns_bits_4);
  }
  { // Node ID: 2729 (NodeConstantRawBits)
    id2729out_value = (c_hw_fix_64_0_uns_bits_4);
  }
  { // Node ID: 2728 (NodeConstantRawBits)
    id2728out_value = (c_hw_fix_64_0_uns_bits_4);
  }
  { // Node ID: 2727 (NodeConstantRawBits)
    id2727out_value = (c_hw_fix_64_0_uns_bits_4);
  }
  { // Node ID: 2726 (NodeConstantRawBits)
    id2726out_value = (c_hw_fix_64_0_uns_bits);
  }
  { // Node ID: 1781 (NodeRAM)
    for(int i=0;i<1250;i++)
      (id1781sta_ram_store[(i)]) = (c_hw_fix_64_0_uns_undef);
  }
  { // Node ID: 2725 (NodeConstantRawBits)
    id2725out_value = (c_hw_fix_64_0_uns_bits_3);
  }
  { // Node ID: 2724 (NodeConstantRawBits)
    id2724out_value = (c_hw_fix_64_0_uns_bits_3);
  }
  { // Node ID: 2723 (NodeConstantRawBits)
    id2723out_value = (c_hw_fix_64_0_uns_bits_3);
  }
  { // Node ID: 2722 (NodeConstantRawBits)
    id2722out_value = (c_hw_fix_64_0_uns_bits_3);
  }
  { // Node ID: 2721 (NodeConstantRawBits)
    id2721out_value = (c_hw_fix_64_0_uns_bits_3);
  }
  { // Node ID: 2720 (NodeConstantRawBits)
    id2720out_value = (c_hw_fix_64_0_uns_bits_3);
  }
  { // Node ID: 2719 (NodeConstantRawBits)
    id2719out_value = (c_hw_fix_64_0_uns_bits_3);
  }
  { // Node ID: 2718 (NodeConstantRawBits)
    id2718out_value = (c_hw_fix_64_0_uns_bits_3);
  }
  { // Node ID: 2717 (NodeConstantRawBits)
    id2717out_value = (c_hw_fix_32_0_sgn_bits);
  }
  { // Node ID: 2716 (NodeConstantRawBits)
    id2716out_value = (c_hw_fix_64_0_uns_bits_3);
  }
  { // Node ID: 2715 (NodeConstantRawBits)
    id2715out_value = (c_hw_fix_64_0_uns_bits_3);
  }
  { // Node ID: 2714 (NodeConstantRawBits)
    id2714out_value = (c_hw_fix_64_0_uns_bits_3);
  }
  { // Node ID: 2713 (NodeConstantRawBits)
    id2713out_value = (c_hw_fix_64_0_uns_bits_3);
  }
  { // Node ID: 2712 (NodeConstantRawBits)
    id2712out_value = (c_hw_fix_64_0_uns_bits_3);
  }
  { // Node ID: 2711 (NodeConstantRawBits)
    id2711out_value = (c_hw_fix_64_0_uns_bits_3);
  }
  { // Node ID: 2710 (NodeConstantRawBits)
    id2710out_value = (c_hw_fix_64_0_uns_bits_3);
  }
  { // Node ID: 2709 (NodeConstantRawBits)
    id2709out_value = (c_hw_fix_64_0_uns_bits_3);
  }
  { // Node ID: 2708 (NodeConstantRawBits)
    id2708out_value = (c_hw_fix_64_0_uns_bits);
  }
  { // Node ID: 1782 (NodeRAM)
    for(int i=0;i<1250;i++)
      (id1782sta_ram_store[(i)]) = (c_hw_fix_64_0_uns_undef);
  }
  { // Node ID: 2707 (NodeConstantRawBits)
    id2707out_value = (c_hw_fix_64_0_uns_bits_2);
  }
  { // Node ID: 2706 (NodeConstantRawBits)
    id2706out_value = (c_hw_fix_64_0_uns_bits_2);
  }
  { // Node ID: 2705 (NodeConstantRawBits)
    id2705out_value = (c_hw_fix_64_0_uns_bits_2);
  }
  { // Node ID: 2704 (NodeConstantRawBits)
    id2704out_value = (c_hw_fix_64_0_uns_bits_2);
  }
  { // Node ID: 2703 (NodeConstantRawBits)
    id2703out_value = (c_hw_fix_64_0_uns_bits_2);
  }
  { // Node ID: 2702 (NodeConstantRawBits)
    id2702out_value = (c_hw_fix_64_0_uns_bits_2);
  }
  { // Node ID: 2701 (NodeConstantRawBits)
    id2701out_value = (c_hw_fix_64_0_uns_bits_2);
  }
  { // Node ID: 2700 (NodeConstantRawBits)
    id2700out_value = (c_hw_fix_64_0_uns_bits_2);
  }
  { // Node ID: 2699 (NodeConstantRawBits)
    id2699out_value = (c_hw_fix_32_0_sgn_bits);
  }
  { // Node ID: 2698 (NodeConstantRawBits)
    id2698out_value = (c_hw_fix_64_0_uns_bits_2);
  }
  { // Node ID: 2697 (NodeConstantRawBits)
    id2697out_value = (c_hw_fix_64_0_uns_bits_2);
  }
  { // Node ID: 2696 (NodeConstantRawBits)
    id2696out_value = (c_hw_fix_64_0_uns_bits_2);
  }
  { // Node ID: 2695 (NodeConstantRawBits)
    id2695out_value = (c_hw_fix_64_0_uns_bits_2);
  }
  { // Node ID: 2694 (NodeConstantRawBits)
    id2694out_value = (c_hw_fix_64_0_uns_bits_2);
  }
  { // Node ID: 2693 (NodeConstantRawBits)
    id2693out_value = (c_hw_fix_64_0_uns_bits_2);
  }
  { // Node ID: 2692 (NodeConstantRawBits)
    id2692out_value = (c_hw_fix_64_0_uns_bits_2);
  }
  { // Node ID: 2691 (NodeConstantRawBits)
    id2691out_value = (c_hw_fix_64_0_uns_bits_2);
  }
  { // Node ID: 2690 (NodeConstantRawBits)
    id2690out_value = (c_hw_fix_64_0_uns_bits);
  }
  { // Node ID: 1783 (NodeRAM)
    for(int i=0;i<1250;i++)
      (id1783sta_ram_store[(i)]) = (c_hw_fix_64_0_uns_undef);
  }
  { // Node ID: 2689 (NodeConstantRawBits)
    id2689out_value = (c_hw_fix_64_0_uns_bits_1);
  }
  { // Node ID: 2688 (NodeConstantRawBits)
    id2688out_value = (c_hw_fix_64_0_uns_bits_1);
  }
  { // Node ID: 2687 (NodeConstantRawBits)
    id2687out_value = (c_hw_fix_64_0_uns_bits_1);
  }
  { // Node ID: 2686 (NodeConstantRawBits)
    id2686out_value = (c_hw_fix_64_0_uns_bits_1);
  }
  { // Node ID: 2685 (NodeConstantRawBits)
    id2685out_value = (c_hw_fix_64_0_uns_bits_1);
  }
  { // Node ID: 2684 (NodeConstantRawBits)
    id2684out_value = (c_hw_fix_64_0_uns_bits_1);
  }
  { // Node ID: 2683 (NodeConstantRawBits)
    id2683out_value = (c_hw_fix_64_0_uns_bits_1);
  }
  { // Node ID: 2682 (NodeConstantRawBits)
    id2682out_value = (c_hw_fix_64_0_uns_bits_1);
  }
  { // Node ID: 2681 (NodeConstantRawBits)
    id2681out_value = (c_hw_fix_32_0_sgn_bits);
  }
  { // Node ID: 2680 (NodeConstantRawBits)
    id2680out_value = (c_hw_fix_64_0_uns_bits_1);
  }
  { // Node ID: 2679 (NodeConstantRawBits)
    id2679out_value = (c_hw_fix_64_0_uns_bits_1);
  }
  { // Node ID: 2678 (NodeConstantRawBits)
    id2678out_value = (c_hw_fix_64_0_uns_bits_1);
  }
  { // Node ID: 2677 (NodeConstantRawBits)
    id2677out_value = (c_hw_fix_64_0_uns_bits_1);
  }
  { // Node ID: 2676 (NodeConstantRawBits)
    id2676out_value = (c_hw_fix_64_0_uns_bits_1);
  }
  { // Node ID: 2675 (NodeConstantRawBits)
    id2675out_value = (c_hw_fix_64_0_uns_bits_1);
  }
  { // Node ID: 2674 (NodeConstantRawBits)
    id2674out_value = (c_hw_fix_64_0_uns_bits_1);
  }
  { // Node ID: 2673 (NodeConstantRawBits)
    id2673out_value = (c_hw_fix_64_0_uns_bits_1);
  }
  { // Node ID: 2672 (NodeConstantRawBits)
    id2672out_value = (c_hw_fix_64_0_uns_bits);
  }
  { // Node ID: 1784 (NodeRAM)
    for(int i=0;i<1250;i++)
      (id1784sta_ram_store[(i)]) = (c_hw_fix_64_0_uns_undef);
  }
  { // Node ID: 2671 (NodeConstantRawBits)
    id2671out_value = (c_hw_fix_64_0_uns_bits);
  }
  { // Node ID: 2670 (NodeConstantRawBits)
    id2670out_value = (c_hw_fix_64_0_uns_bits);
  }
  { // Node ID: 2669 (NodeConstantRawBits)
    id2669out_value = (c_hw_fix_64_0_uns_bits);
  }
  { // Node ID: 2668 (NodeConstantRawBits)
    id2668out_value = (c_hw_fix_64_0_uns_bits);
  }
  { // Node ID: 2667 (NodeConstantRawBits)
    id2667out_value = (c_hw_fix_64_0_uns_bits);
  }
  { // Node ID: 2666 (NodeConstantRawBits)
    id2666out_value = (c_hw_fix_64_0_uns_bits);
  }
  { // Node ID: 2665 (NodeConstantRawBits)
    id2665out_value = (c_hw_fix_64_0_uns_bits);
  }
  { // Node ID: 2664 (NodeConstantRawBits)
    id2664out_value = (c_hw_fix_64_0_uns_bits);
  }
  { // Node ID: 2663 (NodeConstantRawBits)
    id2663out_value = (c_hw_fix_32_0_sgn_bits);
  }
  { // Node ID: 2662 (NodeConstantRawBits)
    id2662out_value = (c_hw_fix_64_0_uns_bits);
  }
  { // Node ID: 2661 (NodeConstantRawBits)
    id2661out_value = (c_hw_fix_64_0_uns_bits);
  }
  { // Node ID: 2660 (NodeConstantRawBits)
    id2660out_value = (c_hw_fix_64_0_uns_bits);
  }
  { // Node ID: 2659 (NodeConstantRawBits)
    id2659out_value = (c_hw_fix_64_0_uns_bits);
  }
  { // Node ID: 2658 (NodeConstantRawBits)
    id2658out_value = (c_hw_fix_64_0_uns_bits);
  }
  { // Node ID: 2657 (NodeConstantRawBits)
    id2657out_value = (c_hw_fix_64_0_uns_bits);
  }
  { // Node ID: 2656 (NodeConstantRawBits)
    id2656out_value = (c_hw_fix_64_0_uns_bits);
  }
  { // Node ID: 2655 (NodeConstantRawBits)
    id2655out_value = (c_hw_fix_64_0_uns_bits);
  }
  { // Node ID: 2654 (NodeConstantRawBits)
    id2654out_value = (c_hw_fix_64_0_uns_bits);
  }
  { // Node ID: 1785 (NodeRAM)
    for(int i=0;i<1250;i++)
      (id1785sta_ram_store[(i)]) = (c_hw_fix_64_0_uns_undef);
  }
  { // Node ID: 2653 (NodeConstantRawBits)
    id2653out_value = (c_hw_fix_64_0_uns_bits_8);
  }
  { // Node ID: 2652 (NodeConstantRawBits)
    id2652out_value = (c_hw_fix_64_0_uns_bits_8);
  }
  { // Node ID: 2651 (NodeConstantRawBits)
    id2651out_value = (c_hw_fix_64_0_uns_bits_8);
  }
  { // Node ID: 2650 (NodeConstantRawBits)
    id2650out_value = (c_hw_fix_64_0_uns_bits_8);
  }
  { // Node ID: 2649 (NodeConstantRawBits)
    id2649out_value = (c_hw_fix_64_0_uns_bits_8);
  }
  { // Node ID: 2648 (NodeConstantRawBits)
    id2648out_value = (c_hw_fix_64_0_uns_bits_8);
  }
  { // Node ID: 2647 (NodeConstantRawBits)
    id2647out_value = (c_hw_fix_64_0_uns_bits_8);
  }
  { // Node ID: 2646 (NodeConstantRawBits)
    id2646out_value = (c_hw_fix_64_0_uns_bits_8);
  }
  { // Node ID: 2645 (NodeConstantRawBits)
    id2645out_value = (c_hw_fix_32_0_sgn_bits);
  }
  { // Node ID: 2644 (NodeConstantRawBits)
    id2644out_value = (c_hw_fix_64_0_uns_bits_8);
  }
  { // Node ID: 2643 (NodeConstantRawBits)
    id2643out_value = (c_hw_fix_64_0_uns_bits_8);
  }
  { // Node ID: 2642 (NodeConstantRawBits)
    id2642out_value = (c_hw_fix_64_0_uns_bits_8);
  }
  { // Node ID: 2641 (NodeConstantRawBits)
    id2641out_value = (c_hw_fix_64_0_uns_bits_8);
  }
  { // Node ID: 2640 (NodeConstantRawBits)
    id2640out_value = (c_hw_fix_64_0_uns_bits_8);
  }
  { // Node ID: 2639 (NodeConstantRawBits)
    id2639out_value = (c_hw_fix_64_0_uns_bits_8);
  }
  { // Node ID: 2638 (NodeConstantRawBits)
    id2638out_value = (c_hw_fix_64_0_uns_bits_8);
  }
  { // Node ID: 2637 (NodeConstantRawBits)
    id2637out_value = (c_hw_fix_64_0_uns_bits_8);
  }
  { // Node ID: 2636 (NodeConstantRawBits)
    id2636out_value = (c_hw_fix_64_0_uns_bits);
  }
  { // Node ID: 1786 (NodeRAM)
    for(int i=0;i<1250;i++)
      (id1786sta_ram_store[(i)]) = (c_hw_fix_64_0_uns_undef);
  }
  { // Node ID: 2635 (NodeConstantRawBits)
    id2635out_value = (c_hw_fix_64_0_uns_bits_6);
  }
  { // Node ID: 2634 (NodeConstantRawBits)
    id2634out_value = (c_hw_fix_64_0_uns_bits_6);
  }
  { // Node ID: 2633 (NodeConstantRawBits)
    id2633out_value = (c_hw_fix_64_0_uns_bits_6);
  }
  { // Node ID: 2632 (NodeConstantRawBits)
    id2632out_value = (c_hw_fix_64_0_uns_bits_6);
  }
  { // Node ID: 2631 (NodeConstantRawBits)
    id2631out_value = (c_hw_fix_64_0_uns_bits_6);
  }
  { // Node ID: 2630 (NodeConstantRawBits)
    id2630out_value = (c_hw_fix_64_0_uns_bits_6);
  }
  { // Node ID: 2629 (NodeConstantRawBits)
    id2629out_value = (c_hw_fix_64_0_uns_bits_6);
  }
  { // Node ID: 2628 (NodeConstantRawBits)
    id2628out_value = (c_hw_fix_64_0_uns_bits_6);
  }
  { // Node ID: 2627 (NodeConstantRawBits)
    id2627out_value = (c_hw_fix_32_0_sgn_bits);
  }
  { // Node ID: 2626 (NodeConstantRawBits)
    id2626out_value = (c_hw_fix_64_0_uns_bits_6);
  }
  { // Node ID: 2625 (NodeConstantRawBits)
    id2625out_value = (c_hw_fix_64_0_uns_bits_6);
  }
  { // Node ID: 2624 (NodeConstantRawBits)
    id2624out_value = (c_hw_fix_64_0_uns_bits_6);
  }
  { // Node ID: 2623 (NodeConstantRawBits)
    id2623out_value = (c_hw_fix_64_0_uns_bits_6);
  }
  { // Node ID: 2622 (NodeConstantRawBits)
    id2622out_value = (c_hw_fix_64_0_uns_bits_6);
  }
  { // Node ID: 2621 (NodeConstantRawBits)
    id2621out_value = (c_hw_fix_64_0_uns_bits_6);
  }
  { // Node ID: 2620 (NodeConstantRawBits)
    id2620out_value = (c_hw_fix_64_0_uns_bits_6);
  }
  { // Node ID: 2619 (NodeConstantRawBits)
    id2619out_value = (c_hw_fix_64_0_uns_bits_6);
  }
  { // Node ID: 2618 (NodeConstantRawBits)
    id2618out_value = (c_hw_fix_64_0_uns_bits);
  }
  { // Node ID: 1787 (NodeRAM)
    for(int i=0;i<1250;i++)
      (id1787sta_ram_store[(i)]) = (c_hw_fix_64_0_uns_undef);
  }
  { // Node ID: 2617 (NodeConstantRawBits)
    id2617out_value = (c_hw_fix_64_0_uns_bits_4);
  }
  { // Node ID: 1744 (NodeOutput)
    m_o_0_0 = registerOutput("o_0_0",0 );
  }
  { // Node ID: 1746 (NodeInputMappedReg)
    registerMappedRegister("io_o_0_1_force_disabled", Data(1));
  }
  { // Node ID: 2616 (NodeConstantRawBits)
    id2616out_value = (c_hw_fix_32_0_sgn_bits_1);
  }
  { // Node ID: 2615 (NodeConstantRawBits)
    id2615out_value = (c_hw_fix_64_0_uns_bits_4);
  }
  { // Node ID: 1749 (NodeOutput)
    m_o_0_1 = registerOutput("o_0_1",1 );
  }
  { // Node ID: 1751 (NodeInputMappedReg)
    registerMappedRegister("io_o_0_2_force_disabled", Data(1));
  }
  { // Node ID: 2614 (NodeConstantRawBits)
    id2614out_value = (c_hw_fix_32_0_sgn_bits_1);
  }
  { // Node ID: 2613 (NodeConstantRawBits)
    id2613out_value = (c_hw_fix_64_0_uns_bits_4);
  }
  { // Node ID: 1754 (NodeOutput)
    m_o_0_2 = registerOutput("o_0_2",2 );
  }
  { // Node ID: 1756 (NodeInputMappedReg)
    registerMappedRegister("io_o_0_3_force_disabled", Data(1));
  }
  { // Node ID: 2612 (NodeConstantRawBits)
    id2612out_value = (c_hw_fix_32_0_sgn_bits_1);
  }
  { // Node ID: 2611 (NodeConstantRawBits)
    id2611out_value = (c_hw_fix_64_0_uns_bits_4);
  }
  { // Node ID: 1759 (NodeOutput)
    m_o_0_3 = registerOutput("o_0_3",3 );
  }
  { // Node ID: 1761 (NodeInputMappedReg)
    registerMappedRegister("io_o_1_0_force_disabled", Data(1));
  }
  { // Node ID: 2610 (NodeConstantRawBits)
    id2610out_value = (c_hw_fix_32_0_sgn_bits_1);
  }
  { // Node ID: 2609 (NodeConstantRawBits)
    id2609out_value = (c_hw_fix_64_0_uns_bits_4);
  }
  { // Node ID: 1764 (NodeOutput)
    m_o_1_0 = registerOutput("o_1_0",4 );
  }
  { // Node ID: 1766 (NodeInputMappedReg)
    registerMappedRegister("io_o_1_1_force_disabled", Data(1));
  }
  { // Node ID: 2608 (NodeConstantRawBits)
    id2608out_value = (c_hw_fix_32_0_sgn_bits_1);
  }
  { // Node ID: 2607 (NodeConstantRawBits)
    id2607out_value = (c_hw_fix_64_0_uns_bits_4);
  }
  { // Node ID: 1769 (NodeOutput)
    m_o_1_1 = registerOutput("o_1_1",5 );
  }
  { // Node ID: 1771 (NodeInputMappedReg)
    registerMappedRegister("io_o_1_2_force_disabled", Data(1));
  }
  { // Node ID: 2606 (NodeConstantRawBits)
    id2606out_value = (c_hw_fix_32_0_sgn_bits_1);
  }
  { // Node ID: 2605 (NodeConstantRawBits)
    id2605out_value = (c_hw_fix_64_0_uns_bits_4);
  }
  { // Node ID: 1774 (NodeOutput)
    m_o_1_2 = registerOutput("o_1_2",6 );
  }
  { // Node ID: 1776 (NodeInputMappedReg)
    registerMappedRegister("io_o_1_3_force_disabled", Data(1));
  }
  { // Node ID: 2604 (NodeConstantRawBits)
    id2604out_value = (c_hw_fix_32_0_sgn_bits_1);
  }
  { // Node ID: 2603 (NodeConstantRawBits)
    id2603out_value = (c_hw_fix_64_0_uns_bits_4);
  }
  { // Node ID: 1779 (NodeOutput)
    m_o_1_3 = registerOutput("o_1_3",7 );
  }
  { // Node ID: 1792 (NodeConstantRawBits)
    id1792out_value = (c_hw_fix_1_0_uns_bits);
  }
  { // Node ID: 2602 (NodeConstantRawBits)
    id2602out_value = (c_hw_fix_1_0_uns_bits);
  }
  { // Node ID: 1789 (NodeConstantRawBits)
    id1789out_value = (c_hw_fix_49_0_uns_bits);
  }
  { // Node ID: 1793 (NodeOutputMappedReg)
    registerMappedRegister("current_run_cycle_count", Data(48), true);
  }
  { // Node ID: 2601 (NodeConstantRawBits)
    id2601out_value = (c_hw_fix_1_0_uns_bits);
  }
  { // Node ID: 1795 (NodeConstantRawBits)
    id1795out_value = (c_hw_fix_49_0_uns_bits);
  }
  { // Node ID: 1798 (NodeInputMappedReg)
    registerMappedRegister("run_cycle_count", Data(48));
  }
}

void prf_v2_Kernel::resetComputation() {
  resetComputationAfterFlush();
}

void prf_v2_Kernel::resetComputationAfterFlush() {
  { // Node ID: 12 (NodeInputMappedReg)
    id12out_compute = getMappedRegValue<HWOffsetFix<32,0,TWOSCOMPLEMENT> >("compute");
  }
  { // Node ID: 1741 (NodeInputMappedReg)
    id1741out_io_o_0_0_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_o_0_0_force_disabled");
  }
  { // Node ID: 6 (NodeInputMappedReg)
    id6out_io_acc_type_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_acc_type_force_disabled");
  }
  { // Node ID: 8 (NodeInput)

    (id8st_read_next_cycle) = (c_hw_fix_1_0_uns_bits_1);
    (id8st_last_read_value) = (c_hw_fix_64_0_uns_undef);
  }
  { // Node ID: 2258 (NodeFIFO)

    for(int i=0; i<5; i++)
    {
      id2258out_output[i] = (c_hw_fix_1_0_uns_undef);
    }
  }
  { // Node ID: 2255 (NodeFIFO)

    for(int i=0; i<4; i++)
    {
      id2255out_output[i] = (c_hw_fix_1_0_uns_undef);
    }
  }
  { // Node ID: 2252 (NodeFIFO)

    for(int i=0; i<3; i++)
    {
      id2252out_output[i] = (c_hw_fix_1_0_uns_undef);
    }
  }
  { // Node ID: 2249 (NodeFIFO)

    for(int i=0; i<2; i++)
    {
      id2249out_output[i] = (c_hw_fix_1_0_uns_undef);
    }
  }
  { // Node ID: 0 (NodeInputMappedReg)
    id0out_io_index_i_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_index_i_force_disabled");
  }
  { // Node ID: 2 (NodeInput)

    (id2st_read_next_cycle) = (c_hw_fix_1_0_uns_bits_1);
    (id2st_last_read_value) = (c_hw_fix_64_0_uns_undef);
  }
  { // Node ID: 3 (NodeInputMappedReg)
    id3out_io_index_j_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_index_j_force_disabled");
  }
  { // Node ID: 5 (NodeInput)

    (id5st_read_next_cycle) = (c_hw_fix_1_0_uns_bits_1);
    (id5st_last_read_value) = (c_hw_fix_64_0_uns_undef);
  }
  { // Node ID: 2245 (NodeFIFO)

    for(int i=0; i<2; i++)
    {
      id2245out_output[i] = (c_hw_fix_64_0_uns_undef);
    }
  }
  { // Node ID: 2247 (NodeFIFO)

    for(int i=0; i<2; i++)
    {
      id2247out_output[i] = (c_hw_fix_64_0_uns_undef);
    }
  }
  { // Node ID: 2595 (NodeFIFO)

    for(int i=0; i<2; i++)
    {
      id2595out_output[i] = (c_hw_fix_64_0_uns_undef);
    }
  }
  { // Node ID: 2592 (NodeFIFO)

    for(int i=0; i<2; i++)
    {
      id2592out_output[i] = (c_hw_fix_64_0_uns_undef);
    }
  }
  { // Node ID: 2596 (NodeFIFO)

    for(int i=0; i<2; i++)
    {
      id2596out_output[i] = (c_hw_fix_64_0_uns_undef);
    }
  }
  { // Node ID: 2593 (NodeFIFO)

    for(int i=0; i<2; i++)
    {
      id2593out_output[i] = (c_hw_fix_64_0_uns_undef);
    }
  }
  { // Node ID: 2597 (NodeFIFO)

    for(int i=0; i<2; i++)
    {
      id2597out_output[i] = (c_hw_fix_64_0_uns_undef);
    }
  }
  { // Node ID: 2594 (NodeFIFO)

    for(int i=0; i<2; i++)
    {
      id2594out_output[i] = (c_hw_fix_64_0_uns_undef);
    }
  }
  { // Node ID: 2598 (NodeFIFO)

    for(int i=0; i<2; i++)
    {
      id2598out_output[i] = (c_hw_fix_64_0_uns_undef);
    }
  }
  { // Node ID: 2401 (NodeFIFO)

    for(int i=0; i<2; i++)
    {
      id2401out_output[i] = (c_hw_fix_64_0_uns_undef);
    }
  }
  { // Node ID: 2600 (NodeFIFO)

    for(int i=0; i<2; i++)
    {
      id2600out_output[i] = (c_hw_fix_64_0_uns_undef);
    }
  }
  { // Node ID: 2538 (NodeFIFO)

    for(int i=0; i<13; i++)
    {
      id2538out_output[i] = (c_hw_fix_1_0_uns_undef);
    }
  }
  { // Node ID: 2478 (NodeFIFO)

    for(int i=0; i<13; i++)
    {
      id2478out_output[i] = (c_hw_fix_1_0_uns_undef);
    }
  }
  { // Node ID: 2448 (NodeFIFO)

    for(int i=0; i<13; i++)
    {
      id2448out_output[i] = (c_hw_fix_1_0_uns_undef);
    }
  }
  { // Node ID: 2588 (NodeFIFO)

    for(int i=0; i<2; i++)
    {
      id2588out_output[i] = (c_hw_fix_1_0_uns_undef);
    }
  }
  { // Node ID: 2589 (NodeFIFO)

    for(int i=0; i<2; i++)
    {
      id2589out_output[i] = (c_hw_fix_1_0_uns_undef);
    }
  }
  { // Node ID: 2590 (NodeFIFO)

    for(int i=0; i<2; i++)
    {
      id2590out_output[i] = (c_hw_fix_1_0_uns_undef);
    }
  }
  { // Node ID: 2591 (NodeFIFO)

    for(int i=0; i<2; i++)
    {
      id2591out_output[i] = (c_hw_fix_1_0_uns_undef);
    }
  }
  { // Node ID: 2262 (NodeFIFO)

    for(int i=0; i<2; i++)
    {
      id2262out_output[i] = (c_hw_fix_1_0_uns_undef);
    }
  }
  { // Node ID: 2274 (NodeFIFO)

    for(int i=0; i<2; i++)
    {
      id2274out_output[i] = (c_hw_fix_64_0_uns_undef);
    }
  }
  { // Node ID: 2275 (NodeFIFO)

    for(int i=0; i<8; i++)
    {
      id2275out_output[i] = (c_hw_bit_1_undef);
    }
  }
  { // Node ID: 2278 (NodeFIFO)

    for(int i=0; i<6; i++)
    {
      id2278out_output[i] = (c_hw_bit_2_undef);
    }
  }
  { // Node ID: 2293 (NodeFIFO)

    for(int i=0; i<2; i++)
    {
      id2293out_output[i] = (c_hw_fix_64_0_uns_undef);
    }
  }
  { // Node ID: 2294 (NodeFIFO)

    for(int i=0; i<7; i++)
    {
      id2294out_output[i] = (c_hw_bit_1_undef);
    }
  }
  { // Node ID: 2297 (NodeFIFO)

    for(int i=0; i<5; i++)
    {
      id2297out_output[i] = (c_hw_bit_2_undef);
    }
  }
  { // Node ID: 2312 (NodeFIFO)

    for(int i=0; i<2; i++)
    {
      id2312out_output[i] = (c_hw_fix_64_0_uns_undef);
    }
  }
  { // Node ID: 2313 (NodeFIFO)

    for(int i=0; i<6; i++)
    {
      id2313out_output[i] = (c_hw_bit_1_undef);
    }
  }
  { // Node ID: 2316 (NodeFIFO)

    for(int i=0; i<4; i++)
    {
      id2316out_output[i] = (c_hw_bit_2_undef);
    }
  }
  { // Node ID: 2331 (NodeFIFO)

    for(int i=0; i<2; i++)
    {
      id2331out_output[i] = (c_hw_bit_64_undef);
    }
  }
  { // Node ID: 2334 (NodeFIFO)

    for(int i=0; i<2; i++)
    {
      id2334out_output[i] = (c_hw_fix_64_0_uns_undef);
    }
  }
  { // Node ID: 2335 (NodeFIFO)

    for(int i=0; i<5; i++)
    {
      id2335out_output[i] = (c_hw_bit_1_undef);
    }
  }
  { // Node ID: 2338 (NodeFIFO)

    for(int i=0; i<3; i++)
    {
      id2338out_output[i] = (c_hw_bit_2_undef);
    }
  }
  { // Node ID: 2599 (NodeFIFO)

    for(int i=0; i<2; i++)
    {
      id2599out_output[i] = (c_hw_fix_64_0_uns_undef);
    }
  }
  { // Node ID: 2356 (NodeFIFO)

    for(int i=0; i<2; i++)
    {
      id2356out_output[i] = (c_hw_fix_64_0_uns_undef);
    }
  }
  { // Node ID: 2357 (NodeFIFO)

    for(int i=0; i<4; i++)
    {
      id2357out_output[i] = (c_hw_bit_1_undef);
    }
  }
  { // Node ID: 2360 (NodeFIFO)

    for(int i=0; i<2; i++)
    {
      id2360out_output[i] = (c_hw_bit_2_undef);
    }
  }
  { // Node ID: 2378 (NodeFIFO)

    for(int i=0; i<2; i++)
    {
      id2378out_output[i] = (c_hw_fix_64_0_uns_undef);
    }
  }
  { // Node ID: 2379 (NodeFIFO)

    for(int i=0; i<3; i++)
    {
      id2379out_output[i] = (c_hw_bit_1_undef);
    }
  }
  { // Node ID: 2399 (NodeFIFO)

    for(int i=0; i<2; i++)
    {
      id2399out_output[i] = (c_hw_fix_64_0_uns_undef);
    }
  }
  { // Node ID: 2400 (NodeFIFO)

    for(int i=0; i<2; i++)
    {
      id2400out_output[i] = (c_hw_bit_1_undef);
    }
  }
  { // Node ID: 2402 (NodeFIFO)

    for(int i=0; i<2; i++)
    {
      id2402out_output[i] = (c_hw_fix_64_4_uns_undef);
    }
  }
  { // Node ID: 2406 (NodeFIFO)

    for(int i=0; i<2; i++)
    {
      id2406out_output[i] = (c_hw_fix_64_0_uns_undef);
    }
  }
  { // Node ID: 2404 (NodeFIFO)

    for(int i=0; i<2; i++)
    {
      id2404out_output[i] = (c_hw_fix_64_4_uns_undef);
    }
  }
  { // Node ID: 2407 (NodeFIFO)

    for(int i=0; i<2; i++)
    {
      id2407out_output[i] = (c_hw_fix_64_0_uns_undef);
    }
  }
  { // Node ID: 2408 (NodeFIFO)

    for(int i=0; i<2; i++)
    {
      id2408out_output[i] = (c_hw_fix_64_4_uns_undef);
    }
  }
  { // Node ID: 2410 (NodeFIFO)

    for(int i=0; i<3; i++)
    {
      id2410out_output[i] = (c_hw_fix_64_0_uns_undef);
    }
  }
  { // Node ID: 2411 (NodeFIFO)

    for(int i=0; i<2; i++)
    {
      id2411out_output[i] = (c_hw_fix_64_4_uns_undef);
    }
  }
  { // Node ID: 2413 (NodeFIFO)

    for(int i=0; i<4; i++)
    {
      id2413out_output[i] = (c_hw_fix_64_0_uns_undef);
    }
  }
  { // Node ID: 2414 (NodeFIFO)

    for(int i=0; i<2; i++)
    {
      id2414out_output[i] = (c_hw_fix_64_4_uns_undef);
    }
  }
  { // Node ID: 2416 (NodeFIFO)

    for(int i=0; i<5; i++)
    {
      id2416out_output[i] = (c_hw_fix_64_0_uns_undef);
    }
  }
  { // Node ID: 2417 (NodeFIFO)

    for(int i=0; i<2; i++)
    {
      id2417out_output[i] = (c_hw_fix_64_4_uns_undef);
    }
  }
  { // Node ID: 2419 (NodeFIFO)

    for(int i=0; i<6; i++)
    {
      id2419out_output[i] = (c_hw_fix_64_0_uns_undef);
    }
  }
  { // Node ID: 2420 (NodeFIFO)

    for(int i=0; i<2; i++)
    {
      id2420out_output[i] = (c_hw_fix_64_4_uns_undef);
    }
  }
  { // Node ID: 2422 (NodeFIFO)

    for(int i=0; i<7; i++)
    {
      id2422out_output[i] = (c_hw_fix_64_0_uns_undef);
    }
  }
  { // Node ID: 2423 (NodeFIFO)

    for(int i=0; i<2; i++)
    {
      id2423out_output[i] = (c_hw_fix_64_0_uns_undef);
    }
  }
  { // Node ID: 2425 (NodeFIFO)

    for(int i=0; i<8; i++)
    {
      id2425out_output[i] = (c_hw_fix_64_0_uns_undef);
    }
  }
  { // Node ID: 14 (NodeInputMappedReg)
    id14out_io_input_data_arr0_0_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_input_data_arr0_0_force_disabled");
  }
  { // Node ID: 16 (NodeInput)

    (id16st_read_next_cycle) = (c_hw_fix_1_0_uns_bits_1);
    (id16st_last_read_value) = (c_hw_fix_64_0_uns_undef);
  }
  { // Node ID: 2426 (NodeFIFO)

    for(int i=0; i<2; i++)
    {
      id2426out_output[i] = (c_hw_fix_64_0_uns_undef);
    }
  }
  { // Node ID: 17 (NodeInputMappedReg)
    id17out_io_input_data_arr0_1_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_input_data_arr0_1_force_disabled");
  }
  { // Node ID: 19 (NodeInput)

    (id19st_read_next_cycle) = (c_hw_fix_1_0_uns_bits_1);
    (id19st_last_read_value) = (c_hw_fix_64_0_uns_undef);
  }
  { // Node ID: 2427 (NodeFIFO)

    for(int i=0; i<2; i++)
    {
      id2427out_output[i] = (c_hw_fix_64_0_uns_undef);
    }
  }
  { // Node ID: 20 (NodeInputMappedReg)
    id20out_io_input_data_arr0_2_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_input_data_arr0_2_force_disabled");
  }
  { // Node ID: 22 (NodeInput)

    (id22st_read_next_cycle) = (c_hw_fix_1_0_uns_bits_1);
    (id22st_last_read_value) = (c_hw_fix_64_0_uns_undef);
  }
  { // Node ID: 2428 (NodeFIFO)

    for(int i=0; i<3; i++)
    {
      id2428out_output[i] = (c_hw_fix_64_0_uns_undef);
    }
  }
  { // Node ID: 23 (NodeInputMappedReg)
    id23out_io_input_data_arr0_3_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_input_data_arr0_3_force_disabled");
  }
  { // Node ID: 25 (NodeInput)

    (id25st_read_next_cycle) = (c_hw_fix_1_0_uns_bits_1);
    (id25st_last_read_value) = (c_hw_fix_64_0_uns_undef);
  }
  { // Node ID: 2429 (NodeFIFO)

    for(int i=0; i<4; i++)
    {
      id2429out_output[i] = (c_hw_fix_64_0_uns_undef);
    }
  }
  { // Node ID: 26 (NodeInputMappedReg)
    id26out_io_input_data_arr1_0_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_input_data_arr1_0_force_disabled");
  }
  { // Node ID: 28 (NodeInput)

    (id28st_read_next_cycle) = (c_hw_fix_1_0_uns_bits_1);
    (id28st_last_read_value) = (c_hw_fix_64_0_uns_undef);
  }
  { // Node ID: 2430 (NodeFIFO)

    for(int i=0; i<5; i++)
    {
      id2430out_output[i] = (c_hw_fix_64_0_uns_undef);
    }
  }
  { // Node ID: 29 (NodeInputMappedReg)
    id29out_io_input_data_arr1_1_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_input_data_arr1_1_force_disabled");
  }
  { // Node ID: 31 (NodeInput)

    (id31st_read_next_cycle) = (c_hw_fix_1_0_uns_bits_1);
    (id31st_last_read_value) = (c_hw_fix_64_0_uns_undef);
  }
  { // Node ID: 2431 (NodeFIFO)

    for(int i=0; i<6; i++)
    {
      id2431out_output[i] = (c_hw_fix_64_0_uns_undef);
    }
  }
  { // Node ID: 32 (NodeInputMappedReg)
    id32out_io_input_data_arr1_2_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_input_data_arr1_2_force_disabled");
  }
  { // Node ID: 34 (NodeInput)

    (id34st_read_next_cycle) = (c_hw_fix_1_0_uns_bits_1);
    (id34st_last_read_value) = (c_hw_fix_64_0_uns_undef);
  }
  { // Node ID: 2432 (NodeFIFO)

    for(int i=0; i<7; i++)
    {
      id2432out_output[i] = (c_hw_fix_64_0_uns_undef);
    }
  }
  { // Node ID: 35 (NodeInputMappedReg)
    id35out_io_input_data_arr1_3_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_input_data_arr1_3_force_disabled");
  }
  { // Node ID: 37 (NodeInput)

    (id37st_read_next_cycle) = (c_hw_fix_1_0_uns_bits_1);
    (id37st_last_read_value) = (c_hw_fix_64_0_uns_undef);
  }
  { // Node ID: 2433 (NodeFIFO)

    for(int i=0; i<8; i++)
    {
      id2433out_output[i] = (c_hw_fix_64_0_uns_undef);
    }
  }
  { // Node ID: 9 (NodeInputMappedReg)
    id9out_io_write_enable_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_write_enable_force_disabled");
  }
  { // Node ID: 11 (NodeInput)

    (id11st_read_next_cycle) = (c_hw_fix_1_0_uns_bits_1);
    (id11st_last_read_value) = (c_hw_fix_64_0_uns_undef);
  }
  { // Node ID: 2477 (NodeFIFO)

    for(int i=0; i<13; i++)
    {
      id2477out_output[i] = (c_hw_fix_1_0_uns_undef);
    }
  }
  { // Node ID: 2537 (NodeFIFO)

    for(int i=0; i<13; i++)
    {
      id2537out_output[i] = (c_hw_fix_1_0_uns_undef);
    }
  }
  { // Node ID: 2507 (NodeFIFO)

    for(int i=0; i<13; i++)
    {
      id2507out_output[i] = (c_hw_fix_1_0_uns_undef);
    }
  }
  { // Node ID: 2536 (NodeFIFO)

    for(int i=0; i<13; i++)
    {
      id2536out_output[i] = (c_hw_fix_1_0_uns_undef);
    }
  }
  { // Node ID: 1746 (NodeInputMappedReg)
    id1746out_io_o_0_1_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_o_0_1_force_disabled");
  }
  { // Node ID: 2545 (NodeFIFO)

    for(int i=0; i<12; i++)
    {
      id2545out_output[i] = (c_hw_fix_1_0_uns_undef);
    }
  }
  { // Node ID: 2541 (NodeFIFO)

    for(int i=0; i<12; i++)
    {
      id2541out_output[i] = (c_hw_fix_1_0_uns_undef);
    }
  }
  { // Node ID: 2539 (NodeFIFO)

    for(int i=0; i<12; i++)
    {
      id2539out_output[i] = (c_hw_fix_1_0_uns_undef);
    }
  }
  { // Node ID: 2540 (NodeFIFO)

    for(int i=0; i<12; i++)
    {
      id2540out_output[i] = (c_hw_fix_1_0_uns_undef);
    }
  }
  { // Node ID: 2544 (NodeFIFO)

    for(int i=0; i<12; i++)
    {
      id2544out_output[i] = (c_hw_fix_1_0_uns_undef);
    }
  }
  { // Node ID: 2542 (NodeFIFO)

    for(int i=0; i<12; i++)
    {
      id2542out_output[i] = (c_hw_fix_1_0_uns_undef);
    }
  }
  { // Node ID: 2543 (NodeFIFO)

    for(int i=0; i<12; i++)
    {
      id2543out_output[i] = (c_hw_fix_1_0_uns_undef);
    }
  }
  { // Node ID: 1751 (NodeInputMappedReg)
    id1751out_io_o_0_2_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_o_0_2_force_disabled");
  }
  { // Node ID: 2552 (NodeFIFO)

    for(int i=0; i<11; i++)
    {
      id2552out_output[i] = (c_hw_fix_1_0_uns_undef);
    }
  }
  { // Node ID: 2548 (NodeFIFO)

    for(int i=0; i<11; i++)
    {
      id2548out_output[i] = (c_hw_fix_1_0_uns_undef);
    }
  }
  { // Node ID: 2546 (NodeFIFO)

    for(int i=0; i<11; i++)
    {
      id2546out_output[i] = (c_hw_fix_1_0_uns_undef);
    }
  }
  { // Node ID: 2547 (NodeFIFO)

    for(int i=0; i<11; i++)
    {
      id2547out_output[i] = (c_hw_fix_1_0_uns_undef);
    }
  }
  { // Node ID: 2551 (NodeFIFO)

    for(int i=0; i<11; i++)
    {
      id2551out_output[i] = (c_hw_fix_1_0_uns_undef);
    }
  }
  { // Node ID: 2549 (NodeFIFO)

    for(int i=0; i<11; i++)
    {
      id2549out_output[i] = (c_hw_fix_1_0_uns_undef);
    }
  }
  { // Node ID: 2550 (NodeFIFO)

    for(int i=0; i<11; i++)
    {
      id2550out_output[i] = (c_hw_fix_1_0_uns_undef);
    }
  }
  { // Node ID: 1756 (NodeInputMappedReg)
    id1756out_io_o_0_3_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_o_0_3_force_disabled");
  }
  { // Node ID: 2559 (NodeFIFO)

    for(int i=0; i<10; i++)
    {
      id2559out_output[i] = (c_hw_fix_1_0_uns_undef);
    }
  }
  { // Node ID: 2555 (NodeFIFO)

    for(int i=0; i<10; i++)
    {
      id2555out_output[i] = (c_hw_fix_1_0_uns_undef);
    }
  }
  { // Node ID: 2553 (NodeFIFO)

    for(int i=0; i<10; i++)
    {
      id2553out_output[i] = (c_hw_fix_1_0_uns_undef);
    }
  }
  { // Node ID: 2554 (NodeFIFO)

    for(int i=0; i<10; i++)
    {
      id2554out_output[i] = (c_hw_fix_1_0_uns_undef);
    }
  }
  { // Node ID: 2558 (NodeFIFO)

    for(int i=0; i<10; i++)
    {
      id2558out_output[i] = (c_hw_fix_1_0_uns_undef);
    }
  }
  { // Node ID: 2556 (NodeFIFO)

    for(int i=0; i<10; i++)
    {
      id2556out_output[i] = (c_hw_fix_1_0_uns_undef);
    }
  }
  { // Node ID: 2557 (NodeFIFO)

    for(int i=0; i<10; i++)
    {
      id2557out_output[i] = (c_hw_fix_1_0_uns_undef);
    }
  }
  { // Node ID: 1761 (NodeInputMappedReg)
    id1761out_io_o_1_0_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_o_1_0_force_disabled");
  }
  { // Node ID: 2566 (NodeFIFO)

    for(int i=0; i<9; i++)
    {
      id2566out_output[i] = (c_hw_fix_1_0_uns_undef);
    }
  }
  { // Node ID: 2562 (NodeFIFO)

    for(int i=0; i<9; i++)
    {
      id2562out_output[i] = (c_hw_fix_1_0_uns_undef);
    }
  }
  { // Node ID: 2560 (NodeFIFO)

    for(int i=0; i<9; i++)
    {
      id2560out_output[i] = (c_hw_fix_1_0_uns_undef);
    }
  }
  { // Node ID: 2561 (NodeFIFO)

    for(int i=0; i<9; i++)
    {
      id2561out_output[i] = (c_hw_fix_1_0_uns_undef);
    }
  }
  { // Node ID: 2565 (NodeFIFO)

    for(int i=0; i<9; i++)
    {
      id2565out_output[i] = (c_hw_fix_1_0_uns_undef);
    }
  }
  { // Node ID: 2563 (NodeFIFO)

    for(int i=0; i<9; i++)
    {
      id2563out_output[i] = (c_hw_fix_1_0_uns_undef);
    }
  }
  { // Node ID: 2564 (NodeFIFO)

    for(int i=0; i<9; i++)
    {
      id2564out_output[i] = (c_hw_fix_1_0_uns_undef);
    }
  }
  { // Node ID: 1766 (NodeInputMappedReg)
    id1766out_io_o_1_1_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_o_1_1_force_disabled");
  }
  { // Node ID: 2573 (NodeFIFO)

    for(int i=0; i<8; i++)
    {
      id2573out_output[i] = (c_hw_fix_1_0_uns_undef);
    }
  }
  { // Node ID: 2569 (NodeFIFO)

    for(int i=0; i<8; i++)
    {
      id2569out_output[i] = (c_hw_fix_1_0_uns_undef);
    }
  }
  { // Node ID: 2567 (NodeFIFO)

    for(int i=0; i<8; i++)
    {
      id2567out_output[i] = (c_hw_fix_1_0_uns_undef);
    }
  }
  { // Node ID: 2568 (NodeFIFO)

    for(int i=0; i<8; i++)
    {
      id2568out_output[i] = (c_hw_fix_1_0_uns_undef);
    }
  }
  { // Node ID: 2572 (NodeFIFO)

    for(int i=0; i<8; i++)
    {
      id2572out_output[i] = (c_hw_fix_1_0_uns_undef);
    }
  }
  { // Node ID: 2570 (NodeFIFO)

    for(int i=0; i<8; i++)
    {
      id2570out_output[i] = (c_hw_fix_1_0_uns_undef);
    }
  }
  { // Node ID: 2571 (NodeFIFO)

    for(int i=0; i<8; i++)
    {
      id2571out_output[i] = (c_hw_fix_1_0_uns_undef);
    }
  }
  { // Node ID: 1771 (NodeInputMappedReg)
    id1771out_io_o_1_2_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_o_1_2_force_disabled");
  }
  { // Node ID: 2580 (NodeFIFO)

    for(int i=0; i<7; i++)
    {
      id2580out_output[i] = (c_hw_fix_1_0_uns_undef);
    }
  }
  { // Node ID: 2576 (NodeFIFO)

    for(int i=0; i<7; i++)
    {
      id2576out_output[i] = (c_hw_fix_1_0_uns_undef);
    }
  }
  { // Node ID: 2574 (NodeFIFO)

    for(int i=0; i<7; i++)
    {
      id2574out_output[i] = (c_hw_fix_1_0_uns_undef);
    }
  }
  { // Node ID: 2575 (NodeFIFO)

    for(int i=0; i<7; i++)
    {
      id2575out_output[i] = (c_hw_fix_1_0_uns_undef);
    }
  }
  { // Node ID: 2579 (NodeFIFO)

    for(int i=0; i<7; i++)
    {
      id2579out_output[i] = (c_hw_fix_1_0_uns_undef);
    }
  }
  { // Node ID: 2577 (NodeFIFO)

    for(int i=0; i<7; i++)
    {
      id2577out_output[i] = (c_hw_fix_1_0_uns_undef);
    }
  }
  { // Node ID: 2578 (NodeFIFO)

    for(int i=0; i<7; i++)
    {
      id2578out_output[i] = (c_hw_fix_1_0_uns_undef);
    }
  }
  { // Node ID: 1776 (NodeInputMappedReg)
    id1776out_io_o_1_3_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_o_1_3_force_disabled");
  }
  { // Node ID: 2587 (NodeFIFO)

    for(int i=0; i<6; i++)
    {
      id2587out_output[i] = (c_hw_fix_1_0_uns_undef);
    }
  }
  { // Node ID: 2583 (NodeFIFO)

    for(int i=0; i<6; i++)
    {
      id2583out_output[i] = (c_hw_fix_1_0_uns_undef);
    }
  }
  { // Node ID: 2581 (NodeFIFO)

    for(int i=0; i<6; i++)
    {
      id2581out_output[i] = (c_hw_fix_1_0_uns_undef);
    }
  }
  { // Node ID: 2582 (NodeFIFO)

    for(int i=0; i<6; i++)
    {
      id2582out_output[i] = (c_hw_fix_1_0_uns_undef);
    }
  }
  { // Node ID: 2586 (NodeFIFO)

    for(int i=0; i<6; i++)
    {
      id2586out_output[i] = (c_hw_fix_1_0_uns_undef);
    }
  }
  { // Node ID: 2584 (NodeFIFO)

    for(int i=0; i<6; i++)
    {
      id2584out_output[i] = (c_hw_fix_1_0_uns_undef);
    }
  }
  { // Node ID: 2585 (NodeFIFO)

    for(int i=0; i<6; i++)
    {
      id2585out_output[i] = (c_hw_fix_1_0_uns_undef);
    }
  }
  { // Node ID: 1790 (NodeCounter)

    (id1790st_count) = (c_hw_fix_49_0_uns_bits_1);
  }
  { // Node ID: 1796 (NodeCounter)

    (id1796st_count) = (c_hw_fix_49_0_uns_bits_1);
  }
  { // Node ID: 1798 (NodeInputMappedReg)
    id1798out_run_cycle_count = getMappedRegValue<HWOffsetFix<48,0,UNSIGNED> >("run_cycle_count");
  }
}

void prf_v2_Kernel::updateState() {
  { // Node ID: 12 (NodeInputMappedReg)
    id12out_compute = getMappedRegValue<HWOffsetFix<32,0,TWOSCOMPLEMENT> >("compute");
  }
  { // Node ID: 1741 (NodeInputMappedReg)
    id1741out_io_o_0_0_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_o_0_0_force_disabled");
  }
  { // Node ID: 6 (NodeInputMappedReg)
    id6out_io_acc_type_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_acc_type_force_disabled");
  }
  { // Node ID: 0 (NodeInputMappedReg)
    id0out_io_index_i_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_index_i_force_disabled");
  }
  { // Node ID: 3 (NodeInputMappedReg)
    id3out_io_index_j_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_index_j_force_disabled");
  }
  { // Node ID: 14 (NodeInputMappedReg)
    id14out_io_input_data_arr0_0_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_input_data_arr0_0_force_disabled");
  }
  { // Node ID: 17 (NodeInputMappedReg)
    id17out_io_input_data_arr0_1_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_input_data_arr0_1_force_disabled");
  }
  { // Node ID: 20 (NodeInputMappedReg)
    id20out_io_input_data_arr0_2_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_input_data_arr0_2_force_disabled");
  }
  { // Node ID: 23 (NodeInputMappedReg)
    id23out_io_input_data_arr0_3_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_input_data_arr0_3_force_disabled");
  }
  { // Node ID: 26 (NodeInputMappedReg)
    id26out_io_input_data_arr1_0_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_input_data_arr1_0_force_disabled");
  }
  { // Node ID: 29 (NodeInputMappedReg)
    id29out_io_input_data_arr1_1_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_input_data_arr1_1_force_disabled");
  }
  { // Node ID: 32 (NodeInputMappedReg)
    id32out_io_input_data_arr1_2_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_input_data_arr1_2_force_disabled");
  }
  { // Node ID: 35 (NodeInputMappedReg)
    id35out_io_input_data_arr1_3_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_input_data_arr1_3_force_disabled");
  }
  { // Node ID: 9 (NodeInputMappedReg)
    id9out_io_write_enable_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_write_enable_force_disabled");
  }
  { // Node ID: 1746 (NodeInputMappedReg)
    id1746out_io_o_0_1_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_o_0_1_force_disabled");
  }
  { // Node ID: 1751 (NodeInputMappedReg)
    id1751out_io_o_0_2_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_o_0_2_force_disabled");
  }
  { // Node ID: 1756 (NodeInputMappedReg)
    id1756out_io_o_0_3_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_o_0_3_force_disabled");
  }
  { // Node ID: 1761 (NodeInputMappedReg)
    id1761out_io_o_1_0_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_o_1_0_force_disabled");
  }
  { // Node ID: 1766 (NodeInputMappedReg)
    id1766out_io_o_1_1_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_o_1_1_force_disabled");
  }
  { // Node ID: 1771 (NodeInputMappedReg)
    id1771out_io_o_1_2_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_o_1_2_force_disabled");
  }
  { // Node ID: 1776 (NodeInputMappedReg)
    id1776out_io_o_1_3_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_o_1_3_force_disabled");
  }
  { // Node ID: 1798 (NodeInputMappedReg)
    id1798out_run_cycle_count = getMappedRegValue<HWOffsetFix<48,0,UNSIGNED> >("run_cycle_count");
  }
}

void prf_v2_Kernel::preExecute() {
  { // Node ID: 8 (NodeInput)
    if(((needsToReadInput(m_acc_type))&(((getFlushLevel())<((5l)+(5)))|(!(isFlushingActive()))))) {
      (id8st_last_read_value) = (readInput<HWOffsetFix<64,0,UNSIGNED> >(m_acc_type));
    }
    id8out_data = (id8st_last_read_value);
  }
  { // Node ID: 2 (NodeInput)
    if(((needsToReadInput(m_index_i))&(((getFlushLevel())<((5l)+(5)))|(!(isFlushingActive()))))) {
      (id2st_last_read_value) = (readInput<HWOffsetFix<64,0,UNSIGNED> >(m_index_i));
    }
    id2out_data = (id2st_last_read_value);
  }
  { // Node ID: 5 (NodeInput)
    if(((needsToReadInput(m_index_j))&(((getFlushLevel())<((4l)+(5)))|(!(isFlushingActive()))))) {
      (id5st_last_read_value) = (readInput<HWOffsetFix<64,0,UNSIGNED> >(m_index_j));
    }
    id5out_data = (id5st_last_read_value);
  }
  { // Node ID: 16 (NodeInput)
    if(((needsToReadInput(m_input_data_arr0_0))&(((getFlushLevel())<((15l)+(5)))|(!(isFlushingActive()))))) {
      (id16st_last_read_value) = (readInput<HWOffsetFix<64,0,UNSIGNED> >(m_input_data_arr0_0));
    }
    id16out_data = (id16st_last_read_value);
  }
  { // Node ID: 19 (NodeInput)
    if(((needsToReadInput(m_input_data_arr0_1))&(((getFlushLevel())<((15l)+(5)))|(!(isFlushingActive()))))) {
      (id19st_last_read_value) = (readInput<HWOffsetFix<64,0,UNSIGNED> >(m_input_data_arr0_1));
    }
    id19out_data = (id19st_last_read_value);
  }
  { // Node ID: 22 (NodeInput)
    if(((needsToReadInput(m_input_data_arr0_2))&(((getFlushLevel())<((15l)+(5)))|(!(isFlushingActive()))))) {
      (id22st_last_read_value) = (readInput<HWOffsetFix<64,0,UNSIGNED> >(m_input_data_arr0_2));
    }
    id22out_data = (id22st_last_read_value);
  }
  { // Node ID: 25 (NodeInput)
    if(((needsToReadInput(m_input_data_arr0_3))&(((getFlushLevel())<((15l)+(5)))|(!(isFlushingActive()))))) {
      (id25st_last_read_value) = (readInput<HWOffsetFix<64,0,UNSIGNED> >(m_input_data_arr0_3));
    }
    id25out_data = (id25st_last_read_value);
  }
  { // Node ID: 28 (NodeInput)
    if(((needsToReadInput(m_input_data_arr1_0))&(((getFlushLevel())<((15l)+(5)))|(!(isFlushingActive()))))) {
      (id28st_last_read_value) = (readInput<HWOffsetFix<64,0,UNSIGNED> >(m_input_data_arr1_0));
    }
    id28out_data = (id28st_last_read_value);
  }
  { // Node ID: 31 (NodeInput)
    if(((needsToReadInput(m_input_data_arr1_1))&(((getFlushLevel())<((15l)+(5)))|(!(isFlushingActive()))))) {
      (id31st_last_read_value) = (readInput<HWOffsetFix<64,0,UNSIGNED> >(m_input_data_arr1_1));
    }
    id31out_data = (id31st_last_read_value);
  }
  { // Node ID: 34 (NodeInput)
    if(((needsToReadInput(m_input_data_arr1_2))&(((getFlushLevel())<((15l)+(5)))|(!(isFlushingActive()))))) {
      (id34st_last_read_value) = (readInput<HWOffsetFix<64,0,UNSIGNED> >(m_input_data_arr1_2));
    }
    id34out_data = (id34st_last_read_value);
  }
  { // Node ID: 37 (NodeInput)
    if(((needsToReadInput(m_input_data_arr1_3))&(((getFlushLevel())<((15l)+(5)))|(!(isFlushingActive()))))) {
      (id37st_last_read_value) = (readInput<HWOffsetFix<64,0,UNSIGNED> >(m_input_data_arr1_3));
    }
    id37out_data = (id37st_last_read_value);
  }
  { // Node ID: 11 (NodeInput)
    if(((needsToReadInput(m_write_enable))&(((getFlushLevel())<((23l)+(5)))|(!(isFlushingActive()))))) {
      (id11st_last_read_value) = (readInput<HWOffsetFix<64,0,UNSIGNED> >(m_write_enable));
    }
    id11out_data = (id11st_last_read_value);
  }
}

void prf_v2_Kernel::runComputationCycle() {
  if (m_mappedElementsChanged) {
    m_mappedElementsChanged = false;
    updateState();
    std::cout << "prf_v2_Kernel: Mapped Elements Changed: Reloaded" << std::endl;
  }
  preExecute();
  execute0();
}

int prf_v2_Kernel::getFlushLevelStart() {
  return ((1l)+(3l));
}

}
