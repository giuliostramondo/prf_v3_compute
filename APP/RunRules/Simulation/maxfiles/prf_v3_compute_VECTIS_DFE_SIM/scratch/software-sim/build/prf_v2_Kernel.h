#ifndef PRF_V2_KERNEL_H_
#define PRF_V2_KERNEL_H_

// #include "KernelManagerBlockSync.h"


namespace maxcompilersim {

class prf_v2_Kernel : public KernelManagerBlockSync {
public:
  prf_v2_Kernel(const std::string &instance_name);

protected:
  virtual void runComputationCycle();
  virtual void resetComputation();
  virtual void resetComputationAfterFlush();
          void updateState();
          void preExecute();
  virtual int  getFlushLevelStart();

private:
  t_port_number m_internal_watch_compute_b_output;
  t_port_number m_internal_watch_compute_bla_output;
  t_port_number m_internal_watch_compute_eq_output;
  t_port_number m_acc_type;
  t_port_number m_index_i;
  t_port_number m_index_j;
  t_port_number m_input_data_arr0_0;
  t_port_number m_input_data_arr0_1;
  t_port_number m_input_data_arr0_2;
  t_port_number m_input_data_arr0_3;
  t_port_number m_input_data_arr1_0;
  t_port_number m_input_data_arr1_1;
  t_port_number m_input_data_arr1_2;
  t_port_number m_input_data_arr1_3;
  t_port_number m_write_enable;
  t_port_number m_o_0_0;
  t_port_number m_o_0_1;
  t_port_number m_o_0_2;
  t_port_number m_o_0_3;
  t_port_number m_o_1_0;
  t_port_number m_o_1_1;
  t_port_number m_o_1_2;
  t_port_number m_o_1_3;
  HWOffsetFix<1,0,UNSIGNED> id2241out_value;

  HWOffsetFix<32,0,TWOSCOMPLEMENT> id12out_compute;

  HWOffsetFix<32,0,TWOSCOMPLEMENT> id2859out_value;

  HWOffsetFix<1,0,UNSIGNED> id1741out_io_o_0_0_force_disabled;

  HWOffsetFix<32,0,TWOSCOMPLEMENT> id2858out_value;

  HWOffsetFix<1,0,UNSIGNED> id6out_io_acc_type_force_disabled;

  HWOffsetFix<64,0,UNSIGNED> id8out_data;

  HWOffsetFix<1,0,UNSIGNED> id8st_read_next_cycle;
  HWOffsetFix<64,0,UNSIGNED> id8st_last_read_value;

  HWOffsetFix<64,0,UNSIGNED> id2857out_value;

  HWOffsetFix<1,0,UNSIGNED> id1802out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id2258out_output[5];

  HWOffsetFix<64,0,UNSIGNED> id2856out_value;

  HWOffsetFix<1,0,UNSIGNED> id1803out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id2255out_output[4];

  HWOffsetFix<64,0,UNSIGNED> id2855out_value;

  HWOffsetFix<1,0,UNSIGNED> id1804out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id2252out_output[3];

  HWOffsetFix<64,0,UNSIGNED> id2854out_value;

  HWOffsetFix<1,0,UNSIGNED> id1805out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id2249out_output[2];

  HWOffsetFix<64,0,UNSIGNED> id2853out_value;

  HWOffsetFix<1,0,UNSIGNED> id1806out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id0out_io_index_i_force_disabled;

  HWOffsetFix<64,0,UNSIGNED> id2out_data;

  HWOffsetFix<1,0,UNSIGNED> id2st_read_next_cycle;
  HWOffsetFix<64,0,UNSIGNED> id2st_last_read_value;

  HWOffsetFix<1,0,UNSIGNED> id3out_io_index_j_force_disabled;

  HWOffsetFix<64,0,UNSIGNED> id5out_data;

  HWOffsetFix<1,0,UNSIGNED> id5st_read_next_cycle;
  HWOffsetFix<64,0,UNSIGNED> id5st_last_read_value;

  HWOffsetFix<64,0,UNSIGNED> id2245out_output[2];

  HWOffsetFix<64,0,UNSIGNED> id45out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id54out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id530out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2247out_output[2];

  HWOffsetFix<64,0,UNSIGNED> id2595out_output[2];

  HWOffsetFix<64,0,UNSIGNED> id63out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id540out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2592out_output[2];

  HWOffsetFix<64,0,UNSIGNED> id2596out_output[2];

  HWOffsetFix<64,0,UNSIGNED> id76out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id550out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2593out_output[2];

  HWOffsetFix<64,0,UNSIGNED> id2597out_output[2];

  HWOffsetFix<64,0,UNSIGNED> id87out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id560out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2594out_output[2];

  HWOffsetFix<64,0,UNSIGNED> id2598out_output[2];

  HWOffsetFix<64,0,UNSIGNED> id96out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id570out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2401out_output[2];

  HWOffsetFix<64,0,UNSIGNED> id2600out_output[2];

  HWOffsetFix<64,0,UNSIGNED> id790out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2852out_value;

  HWOffsetFix<64,0,UNSIGNED> id750out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id791out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id2538out_output[13];

  HWOffsetFix<1,0,UNSIGNED> id2478out_output[13];

  HWOffsetFix<1,0,UNSIGNED> id2448out_output[13];

  HWOffsetFix<1,0,UNSIGNED> id2588out_output[2];

  HWOffsetFix<1,0,UNSIGNED> id2589out_output[2];

  HWOffsetFix<1,0,UNSIGNED> id2590out_output[2];

  HWOffsetFix<1,0,UNSIGNED> id2591out_output[2];

  HWOffsetFix<1,0,UNSIGNED> id2262out_output[2];

  HWOffsetFix<64,0,UNSIGNED> id2851out_value;

  HWOffsetFix<64,0,UNSIGNED> id459out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2850out_value;

  HWOffsetFix<64,0,UNSIGNED> id464out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id465out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2849out_value;

  HWOffsetFix<64,0,UNSIGNED> id471out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2848out_value;

  HWOffsetFix<64,0,UNSIGNED> id473out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id474out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id537out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2847out_value;

  HWOffsetFix<64,0,UNSIGNED> id477out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2846out_value;

  HWOffsetFix<64,0,UNSIGNED> id479out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id483out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id547out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2845out_value;

  HWOffsetFix<64,0,UNSIGNED> id486out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2844out_value;

  HWOffsetFix<64,0,UNSIGNED> id488out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2843out_value;

  HWOffsetFix<64,0,UNSIGNED> id493out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2842out_value;

  HWOffsetFix<64,0,UNSIGNED> id495out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id496out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id557out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2841out_value;

  HWOffsetFix<64,0,UNSIGNED> id499out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2840out_value;

  HWOffsetFix<64,0,UNSIGNED> id501out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2839out_value;

  HWOffsetFix<64,0,UNSIGNED> id506out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id507out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id567out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2838out_value;

  HWOffsetFix<64,0,UNSIGNED> id510out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2837out_value;

  HWOffsetFix<64,0,UNSIGNED> id515out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id516out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id577out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2274out_output[2];

  HWRawBits<1> id2275out_output[8];

  HWOffsetFix<64,0,UNSIGNED> id860out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2836out_value;

  HWOffsetFix<64,0,UNSIGNED> id785out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id861out_result[2];

  HWRawBits<2> id2278out_output[6];

  HWOffsetFix<64,0,UNSIGNED> id889out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2835out_value;

  HWOffsetFix<1,0,UNSIGNED> id1831out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2834out_value;

  HWOffsetFix<64,0,UNSIGNED> id399out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2833out_value;

  HWOffsetFix<64,0,UNSIGNED> id404out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id405out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2832out_value;

  HWOffsetFix<64,0,UNSIGNED> id411out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2831out_value;

  HWOffsetFix<64,0,UNSIGNED> id413out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id414out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id536out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2830out_value;

  HWOffsetFix<64,0,UNSIGNED> id417out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2829out_value;

  HWOffsetFix<64,0,UNSIGNED> id419out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id423out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id546out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2828out_value;

  HWOffsetFix<64,0,UNSIGNED> id426out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2827out_value;

  HWOffsetFix<64,0,UNSIGNED> id428out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2826out_value;

  HWOffsetFix<64,0,UNSIGNED> id433out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2825out_value;

  HWOffsetFix<64,0,UNSIGNED> id435out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id436out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id556out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2824out_value;

  HWOffsetFix<64,0,UNSIGNED> id439out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2823out_value;

  HWOffsetFix<64,0,UNSIGNED> id441out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2822out_value;

  HWOffsetFix<64,0,UNSIGNED> id446out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id447out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id566out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2821out_value;

  HWOffsetFix<64,0,UNSIGNED> id450out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2820out_value;

  HWOffsetFix<64,0,UNSIGNED> id455out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id456out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id576out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2293out_output[2];

  HWRawBits<1> id2294out_output[7];

  HWOffsetFix<64,0,UNSIGNED> id850out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2819out_value;

  HWOffsetFix<64,0,UNSIGNED> id780out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id851out_result[2];

  HWRawBits<2> id2297out_output[5];

  HWOffsetFix<64,0,UNSIGNED> id886out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2818out_value;

  HWOffsetFix<1,0,UNSIGNED> id1842out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2817out_value;

  HWOffsetFix<64,0,UNSIGNED> id339out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2816out_value;

  HWOffsetFix<64,0,UNSIGNED> id344out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id345out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2815out_value;

  HWOffsetFix<64,0,UNSIGNED> id351out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2814out_value;

  HWOffsetFix<64,0,UNSIGNED> id353out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id354out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id535out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2813out_value;

  HWOffsetFix<64,0,UNSIGNED> id357out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2812out_value;

  HWOffsetFix<64,0,UNSIGNED> id359out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id363out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id545out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2811out_value;

  HWOffsetFix<64,0,UNSIGNED> id366out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2810out_value;

  HWOffsetFix<64,0,UNSIGNED> id368out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2809out_value;

  HWOffsetFix<64,0,UNSIGNED> id373out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2808out_value;

  HWOffsetFix<64,0,UNSIGNED> id375out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id376out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id555out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2807out_value;

  HWOffsetFix<64,0,UNSIGNED> id379out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2806out_value;

  HWOffsetFix<64,0,UNSIGNED> id381out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2805out_value;

  HWOffsetFix<64,0,UNSIGNED> id386out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id387out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id565out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2804out_value;

  HWOffsetFix<64,0,UNSIGNED> id390out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2803out_value;

  HWOffsetFix<64,0,UNSIGNED> id395out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id396out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id575out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2312out_output[2];

  HWRawBits<1> id2313out_output[6];

  HWOffsetFix<64,0,UNSIGNED> id840out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2802out_value;

  HWOffsetFix<64,0,UNSIGNED> id775out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id841out_result[2];

  HWRawBits<2> id2316out_output[4];

  HWOffsetFix<64,0,UNSIGNED> id883out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2801out_value;

  HWOffsetFix<1,0,UNSIGNED> id1853out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2800out_value;

  HWOffsetFix<64,0,UNSIGNED> id279out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id285out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2799out_value;

  HWOffsetFix<64,0,UNSIGNED> id291out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id294out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id534out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2798out_value;

  HWOffsetFix<64,0,UNSIGNED> id297out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id303out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id544out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2797out_value;

  HWOffsetFix<64,0,UNSIGNED> id306out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2796out_value;

  HWOffsetFix<64,0,UNSIGNED> id313out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id316out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id554out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2795out_value;

  HWOffsetFix<64,0,UNSIGNED> id319out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2794out_value;

  HWOffsetFix<64,0,UNSIGNED> id326out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id327out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id564out_result[2];

  HWRawBits<64> id2331out_output[2];

  HWOffsetFix<64,0,UNSIGNED> id2793out_value;

  HWOffsetFix<64,0,UNSIGNED> id335out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id336out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id574out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2334out_output[2];

  HWRawBits<1> id2335out_output[5];

  HWOffsetFix<64,0,UNSIGNED> id830out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2792out_value;

  HWOffsetFix<64,0,UNSIGNED> id770out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id831out_result[2];

  HWRawBits<2> id2338out_output[3];

  HWOffsetFix<64,0,UNSIGNED> id880out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2791out_value;

  HWOffsetFix<1,0,UNSIGNED> id1864out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2790out_value;

  HWOffsetFix<64,0,UNSIGNED> id224out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id225out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2789out_value;

  HWOffsetFix<64,0,UNSIGNED> id233out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id234out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id533out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2788out_value;

  HWOffsetFix<64,0,UNSIGNED> id239out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id243out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id543out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2787out_value;

  HWOffsetFix<64,0,UNSIGNED> id248out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2786out_value;

  HWOffsetFix<64,0,UNSIGNED> id255out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id256out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id553out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2785out_value;

  HWOffsetFix<64,0,UNSIGNED> id261out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2784out_value;

  HWOffsetFix<64,0,UNSIGNED> id266out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id267out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id563out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2783out_value;

  HWOffsetFix<64,0,UNSIGNED> id270out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2599out_output[2];

  HWOffsetFix<64,0,UNSIGNED> id276out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id573out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2356out_output[2];

  HWRawBits<1> id2357out_output[4];

  HWOffsetFix<64,0,UNSIGNED> id820out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2782out_value;

  HWOffsetFix<64,0,UNSIGNED> id765out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id821out_result[2];

  HWRawBits<2> id2360out_output[2];

  HWOffsetFix<64,0,UNSIGNED> id877out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2781out_value;

  HWOffsetFix<1,0,UNSIGNED> id1875out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2780out_value;

  HWOffsetFix<64,0,UNSIGNED> id164out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id165out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2779out_value;

  HWOffsetFix<64,0,UNSIGNED> id173out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id174out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id532out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2778out_value;

  HWOffsetFix<64,0,UNSIGNED> id179out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id183out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id542out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2777out_value;

  HWOffsetFix<64,0,UNSIGNED> id188out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2776out_value;

  HWOffsetFix<64,0,UNSIGNED> id195out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id196out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id552out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2775out_value;

  HWOffsetFix<64,0,UNSIGNED> id201out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2774out_value;

  HWOffsetFix<64,0,UNSIGNED> id206out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id207out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id562out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2773out_value;

  HWOffsetFix<64,0,UNSIGNED> id210out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id216out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id572out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2378out_output[2];

  HWRawBits<1> id2379out_output[3];

  HWOffsetFix<64,0,UNSIGNED> id810out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2772out_value;

  HWOffsetFix<64,0,UNSIGNED> id760out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id811out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id874out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2771out_value;

  HWOffsetFix<1,0,UNSIGNED> id1886out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2770out_value;

  HWOffsetFix<64,0,UNSIGNED> id104out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id105out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2769out_value;

  HWOffsetFix<64,0,UNSIGNED> id113out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id114out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id531out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2768out_value;

  HWOffsetFix<64,0,UNSIGNED> id119out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id123out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id541out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2767out_value;

  HWOffsetFix<64,0,UNSIGNED> id128out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2766out_value;

  HWOffsetFix<64,0,UNSIGNED> id135out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id136out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id551out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2765out_value;

  HWOffsetFix<64,0,UNSIGNED> id141out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2764out_value;

  HWOffsetFix<64,0,UNSIGNED> id146out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id147out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id561out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2763out_value;

  HWOffsetFix<64,0,UNSIGNED> id150out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id156out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id571out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2399out_output[2];

  HWRawBits<1> id2400out_output[2];

  HWOffsetFix<64,0,UNSIGNED> id800out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2762out_value;

  HWOffsetFix<64,0,UNSIGNED> id755out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id801out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id871out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2761out_value;

  HWOffsetFix<1,0,UNSIGNED> id1897out_result[2];

  HWOffsetFix<68,0,UNSIGNED> id1906out_result[2];

  HWOffsetFix<64,4,UNSIGNED> id2402out_output[2];

  HWOffsetFix<69,0,UNSIGNED> id1907out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2760out_value;

  HWOffsetFix<64,0,UNSIGNED> id582out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id624out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2406out_output[2];

  HWOffsetFix<68,0,UNSIGNED> id1916out_result[2];

  HWOffsetFix<64,4,UNSIGNED> id2404out_output[2];

  HWOffsetFix<69,0,UNSIGNED> id1917out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2759out_value;

  HWOffsetFix<64,0,UNSIGNED> id587out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id631out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2407out_output[2];

  HWOffsetFix<64,0,UNSIGNED> id895out_result[2];

  HWOffsetFix<68,0,UNSIGNED> id1926out_result[2];

  HWOffsetFix<64,4,UNSIGNED> id2408out_output[2];

  HWOffsetFix<69,0,UNSIGNED> id1927out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2758out_value;

  HWOffsetFix<64,0,UNSIGNED> id592out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id638out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2410out_output[3];

  HWOffsetFix<64,0,UNSIGNED> id898out_result[2];

  HWOffsetFix<68,0,UNSIGNED> id1936out_result[2];

  HWOffsetFix<64,4,UNSIGNED> id2411out_output[2];

  HWOffsetFix<69,0,UNSIGNED> id1937out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2757out_value;

  HWOffsetFix<64,0,UNSIGNED> id597out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id645out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2413out_output[4];

  HWOffsetFix<64,0,UNSIGNED> id901out_result[2];

  HWOffsetFix<68,0,UNSIGNED> id1946out_result[2];

  HWOffsetFix<64,4,UNSIGNED> id2414out_output[2];

  HWOffsetFix<69,0,UNSIGNED> id1947out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2756out_value;

  HWOffsetFix<64,0,UNSIGNED> id602out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id652out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2416out_output[5];

  HWOffsetFix<64,0,UNSIGNED> id904out_result[2];

  HWOffsetFix<68,0,UNSIGNED> id1956out_result[2];

  HWOffsetFix<64,4,UNSIGNED> id2417out_output[2];

  HWOffsetFix<69,0,UNSIGNED> id1957out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2755out_value;

  HWOffsetFix<64,0,UNSIGNED> id607out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id659out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2419out_output[6];

  HWOffsetFix<64,0,UNSIGNED> id907out_result[2];

  HWOffsetFix<68,0,UNSIGNED> id1966out_result[2];

  HWOffsetFix<64,4,UNSIGNED> id2420out_output[2];

  HWOffsetFix<69,0,UNSIGNED> id1967out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2754out_value;

  HWOffsetFix<64,0,UNSIGNED> id612out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id666out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2422out_output[7];

  HWOffsetFix<64,0,UNSIGNED> id910out_result[2];

  HWOffsetFix<68,0,UNSIGNED> id1976out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2423out_output[2];

  HWOffsetFix<69,0,UNSIGNED> id1977out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2753out_value;

  HWOffsetFix<64,0,UNSIGNED> id617out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id673out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2425out_output[8];

  HWOffsetFix<64,0,UNSIGNED> id913out_result[2];

  HWOffsetFix<32,0,TWOSCOMPLEMENT> id2752out_value;

  HWOffsetFix<64,0,UNSIGNED> id1105out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2751out_value;

  HWOffsetFix<1,0,UNSIGNED> id1984out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id1102out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2750out_value;

  HWOffsetFix<1,0,UNSIGNED> id1987out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id1099out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2749out_value;

  HWOffsetFix<1,0,UNSIGNED> id1990out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id1096out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2748out_value;

  HWOffsetFix<1,0,UNSIGNED> id1993out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id1093out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2747out_value;

  HWOffsetFix<1,0,UNSIGNED> id1996out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id1090out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2746out_value;

  HWOffsetFix<1,0,UNSIGNED> id1999out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id1087out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2745out_value;

  HWOffsetFix<1,0,UNSIGNED> id2002out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id14out_io_input_data_arr0_0_force_disabled;

  HWOffsetFix<64,0,UNSIGNED> id16out_data;

  HWOffsetFix<1,0,UNSIGNED> id16st_read_next_cycle;
  HWOffsetFix<64,0,UNSIGNED> id16st_last_read_value;

  HWOffsetFix<64,0,UNSIGNED> id2426out_output[2];

  HWOffsetFix<1,0,UNSIGNED> id17out_io_input_data_arr0_1_force_disabled;

  HWOffsetFix<64,0,UNSIGNED> id19out_data;

  HWOffsetFix<1,0,UNSIGNED> id19st_read_next_cycle;
  HWOffsetFix<64,0,UNSIGNED> id19st_last_read_value;

  HWOffsetFix<64,0,UNSIGNED> id2427out_output[2];

  HWOffsetFix<64,0,UNSIGNED> id1111out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id20out_io_input_data_arr0_2_force_disabled;

  HWOffsetFix<64,0,UNSIGNED> id22out_data;

  HWOffsetFix<1,0,UNSIGNED> id22st_read_next_cycle;
  HWOffsetFix<64,0,UNSIGNED> id22st_last_read_value;

  HWOffsetFix<64,0,UNSIGNED> id2428out_output[3];

  HWOffsetFix<64,0,UNSIGNED> id1114out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id23out_io_input_data_arr0_3_force_disabled;

  HWOffsetFix<64,0,UNSIGNED> id25out_data;

  HWOffsetFix<1,0,UNSIGNED> id25st_read_next_cycle;
  HWOffsetFix<64,0,UNSIGNED> id25st_last_read_value;

  HWOffsetFix<64,0,UNSIGNED> id2429out_output[4];

  HWOffsetFix<64,0,UNSIGNED> id1117out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id26out_io_input_data_arr1_0_force_disabled;

  HWOffsetFix<64,0,UNSIGNED> id28out_data;

  HWOffsetFix<1,0,UNSIGNED> id28st_read_next_cycle;
  HWOffsetFix<64,0,UNSIGNED> id28st_last_read_value;

  HWOffsetFix<64,0,UNSIGNED> id2430out_output[5];

  HWOffsetFix<64,0,UNSIGNED> id1120out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id29out_io_input_data_arr1_1_force_disabled;

  HWOffsetFix<64,0,UNSIGNED> id31out_data;

  HWOffsetFix<1,0,UNSIGNED> id31st_read_next_cycle;
  HWOffsetFix<64,0,UNSIGNED> id31st_last_read_value;

  HWOffsetFix<64,0,UNSIGNED> id2431out_output[6];

  HWOffsetFix<64,0,UNSIGNED> id1123out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id32out_io_input_data_arr1_2_force_disabled;

  HWOffsetFix<64,0,UNSIGNED> id34out_data;

  HWOffsetFix<1,0,UNSIGNED> id34st_read_next_cycle;
  HWOffsetFix<64,0,UNSIGNED> id34st_last_read_value;

  HWOffsetFix<64,0,UNSIGNED> id2432out_output[7];

  HWOffsetFix<64,0,UNSIGNED> id1126out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id35out_io_input_data_arr1_3_force_disabled;

  HWOffsetFix<64,0,UNSIGNED> id37out_data;

  HWOffsetFix<1,0,UNSIGNED> id37st_read_next_cycle;
  HWOffsetFix<64,0,UNSIGNED> id37st_last_read_value;

  HWOffsetFix<64,0,UNSIGNED> id2433out_output[8];

  HWOffsetFix<64,0,UNSIGNED> id1129out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2744out_value;

  HWOffsetFix<1,0,UNSIGNED> id9out_io_write_enable_force_disabled;

  HWOffsetFix<64,0,UNSIGNED> id11out_data;

  HWOffsetFix<1,0,UNSIGNED> id11st_read_next_cycle;
  HWOffsetFix<64,0,UNSIGNED> id11st_last_read_value;

  HWOffsetFix<64,0,UNSIGNED> id1780out_doutb[3];

  HWOffsetFix<64,0,UNSIGNED> id1780sta_ram_store[1250];

  std::string format_string_prf_v2_Kernel_1 (const char* _format_arg_format_string);
  HWOffsetFix<64,0,UNSIGNED> id2743out_value;

  HWOffsetFix<1,0,UNSIGNED> id2007out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2742out_value;

  HWOffsetFix<1,0,UNSIGNED> id2008out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2741out_value;

  HWOffsetFix<1,0,UNSIGNED> id2009out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2740out_value;

  HWOffsetFix<1,0,UNSIGNED> id2010out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2739out_value;

  HWOffsetFix<1,0,UNSIGNED> id2011out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2738out_value;

  HWOffsetFix<1,0,UNSIGNED> id2012out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2737out_value;

  HWOffsetFix<1,0,UNSIGNED> id2013out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id868out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2736out_value;

  HWOffsetFix<1,0,UNSIGNED> id2014out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id916out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id919out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id922out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id925out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id928out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id931out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id934out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id937out_result[2];

  HWOffsetFix<32,0,TWOSCOMPLEMENT> id2735out_value;

  HWOffsetFix<64,0,UNSIGNED> id2734out_value;

  HWOffsetFix<1,0,UNSIGNED> id2016out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2733out_value;

  HWOffsetFix<1,0,UNSIGNED> id2017out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2732out_value;

  HWOffsetFix<1,0,UNSIGNED> id2018out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2731out_value;

  HWOffsetFix<1,0,UNSIGNED> id2019out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2730out_value;

  HWOffsetFix<1,0,UNSIGNED> id2020out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2729out_value;

  HWOffsetFix<1,0,UNSIGNED> id2021out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2728out_value;

  HWOffsetFix<1,0,UNSIGNED> id2022out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id1084out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2727out_value;

  HWOffsetFix<1,0,UNSIGNED> id2023out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id1132out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id1135out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id1138out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id1141out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id1144out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id1147out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id1150out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id1153out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2726out_value;

  HWOffsetFix<64,0,UNSIGNED> id1781out_doutb[3];

  HWOffsetFix<64,0,UNSIGNED> id1781sta_ram_store[1250];

  std::string format_string_prf_v2_Kernel_2 (const char* _format_arg_format_string);
  HWOffsetFix<1,0,UNSIGNED> id2477out_output[13];

  HWOffsetFix<64,0,UNSIGNED> id2725out_value;

  HWOffsetFix<1,0,UNSIGNED> id2026out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2724out_value;

  HWOffsetFix<1,0,UNSIGNED> id2027out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2723out_value;

  HWOffsetFix<1,0,UNSIGNED> id2028out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2722out_value;

  HWOffsetFix<1,0,UNSIGNED> id2029out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2721out_value;

  HWOffsetFix<1,0,UNSIGNED> id2030out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2720out_value;

  HWOffsetFix<1,0,UNSIGNED> id2031out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2719out_value;

  HWOffsetFix<1,0,UNSIGNED> id2032out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2718out_value;

  HWOffsetFix<1,0,UNSIGNED> id2033out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id940out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id943out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id946out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id949out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id952out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id955out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id958out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id961out_result[2];

  HWOffsetFix<32,0,TWOSCOMPLEMENT> id2717out_value;

  HWOffsetFix<64,0,UNSIGNED> id2716out_value;

  HWOffsetFix<1,0,UNSIGNED> id2035out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2715out_value;

  HWOffsetFix<1,0,UNSIGNED> id2036out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2714out_value;

  HWOffsetFix<1,0,UNSIGNED> id2037out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2713out_value;

  HWOffsetFix<1,0,UNSIGNED> id2038out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2712out_value;

  HWOffsetFix<1,0,UNSIGNED> id2039out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2711out_value;

  HWOffsetFix<1,0,UNSIGNED> id2040out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2710out_value;

  HWOffsetFix<1,0,UNSIGNED> id2041out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2709out_value;

  HWOffsetFix<1,0,UNSIGNED> id2042out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id1156out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id1159out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id1162out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id1165out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id1168out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id1171out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id1174out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id1177out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2708out_value;

  HWOffsetFix<64,0,UNSIGNED> id1782out_doutb[3];

  HWOffsetFix<64,0,UNSIGNED> id1782sta_ram_store[1250];

  std::string format_string_prf_v2_Kernel_3 (const char* _format_arg_format_string);
  HWOffsetFix<64,0,UNSIGNED> id2707out_value;

  HWOffsetFix<1,0,UNSIGNED> id2044out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2706out_value;

  HWOffsetFix<1,0,UNSIGNED> id2045out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2705out_value;

  HWOffsetFix<1,0,UNSIGNED> id2046out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2704out_value;

  HWOffsetFix<1,0,UNSIGNED> id2047out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2703out_value;

  HWOffsetFix<1,0,UNSIGNED> id2048out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2702out_value;

  HWOffsetFix<1,0,UNSIGNED> id2049out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2701out_value;

  HWOffsetFix<1,0,UNSIGNED> id2050out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2700out_value;

  HWOffsetFix<1,0,UNSIGNED> id2051out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id964out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id967out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id970out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id973out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id976out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id979out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id982out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id985out_result[2];

  HWOffsetFix<32,0,TWOSCOMPLEMENT> id2699out_value;

  HWOffsetFix<64,0,UNSIGNED> id2698out_value;

  HWOffsetFix<1,0,UNSIGNED> id2053out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2697out_value;

  HWOffsetFix<1,0,UNSIGNED> id2054out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2696out_value;

  HWOffsetFix<1,0,UNSIGNED> id2055out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2695out_value;

  HWOffsetFix<1,0,UNSIGNED> id2056out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2694out_value;

  HWOffsetFix<1,0,UNSIGNED> id2057out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2693out_value;

  HWOffsetFix<1,0,UNSIGNED> id2058out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2692out_value;

  HWOffsetFix<1,0,UNSIGNED> id2059out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2691out_value;

  HWOffsetFix<1,0,UNSIGNED> id2060out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id1180out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id1183out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id1186out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id1189out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id1192out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id1195out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id1198out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id1201out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2690out_value;

  HWOffsetFix<64,0,UNSIGNED> id1783out_doutb[3];

  HWOffsetFix<64,0,UNSIGNED> id1783sta_ram_store[1250];

  std::string format_string_prf_v2_Kernel_4 (const char* _format_arg_format_string);
  HWOffsetFix<1,0,UNSIGNED> id2537out_output[13];

  HWOffsetFix<1,0,UNSIGNED> id2507out_output[13];

  HWOffsetFix<64,0,UNSIGNED> id2689out_value;

  HWOffsetFix<1,0,UNSIGNED> id2064out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2688out_value;

  HWOffsetFix<1,0,UNSIGNED> id2065out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2687out_value;

  HWOffsetFix<1,0,UNSIGNED> id2066out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2686out_value;

  HWOffsetFix<1,0,UNSIGNED> id2067out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2685out_value;

  HWOffsetFix<1,0,UNSIGNED> id2068out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2684out_value;

  HWOffsetFix<1,0,UNSIGNED> id2069out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2683out_value;

  HWOffsetFix<1,0,UNSIGNED> id2070out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2682out_value;

  HWOffsetFix<1,0,UNSIGNED> id2071out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id988out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id991out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id994out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id997out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id1000out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id1003out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id1006out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id1009out_result[2];

  HWOffsetFix<32,0,TWOSCOMPLEMENT> id2681out_value;

  HWOffsetFix<64,0,UNSIGNED> id2680out_value;

  HWOffsetFix<1,0,UNSIGNED> id2073out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2679out_value;

  HWOffsetFix<1,0,UNSIGNED> id2074out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2678out_value;

  HWOffsetFix<1,0,UNSIGNED> id2075out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2677out_value;

  HWOffsetFix<1,0,UNSIGNED> id2076out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2676out_value;

  HWOffsetFix<1,0,UNSIGNED> id2077out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2675out_value;

  HWOffsetFix<1,0,UNSIGNED> id2078out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2674out_value;

  HWOffsetFix<1,0,UNSIGNED> id2079out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2673out_value;

  HWOffsetFix<1,0,UNSIGNED> id2080out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id1204out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id1207out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id1210out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id1213out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id1216out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id1219out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id1222out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id1225out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2672out_value;

  HWOffsetFix<64,0,UNSIGNED> id1784out_doutb[3];

  HWOffsetFix<64,0,UNSIGNED> id1784sta_ram_store[1250];

  std::string format_string_prf_v2_Kernel_5 (const char* _format_arg_format_string);
  HWOffsetFix<64,0,UNSIGNED> id2671out_value;

  HWOffsetFix<1,0,UNSIGNED> id2082out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2670out_value;

  HWOffsetFix<1,0,UNSIGNED> id2083out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2669out_value;

  HWOffsetFix<1,0,UNSIGNED> id2084out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2668out_value;

  HWOffsetFix<1,0,UNSIGNED> id2085out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2667out_value;

  HWOffsetFix<1,0,UNSIGNED> id2086out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2666out_value;

  HWOffsetFix<1,0,UNSIGNED> id2087out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2665out_value;

  HWOffsetFix<1,0,UNSIGNED> id2088out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2664out_value;

  HWOffsetFix<1,0,UNSIGNED> id2089out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id1012out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id1015out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id1018out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id1021out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id1024out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id1027out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id1030out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id1033out_result[2];

  HWOffsetFix<32,0,TWOSCOMPLEMENT> id2663out_value;

  HWOffsetFix<64,0,UNSIGNED> id2662out_value;

  HWOffsetFix<1,0,UNSIGNED> id2091out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2661out_value;

  HWOffsetFix<1,0,UNSIGNED> id2092out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2660out_value;

  HWOffsetFix<1,0,UNSIGNED> id2093out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2659out_value;

  HWOffsetFix<1,0,UNSIGNED> id2094out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2658out_value;

  HWOffsetFix<1,0,UNSIGNED> id2095out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2657out_value;

  HWOffsetFix<1,0,UNSIGNED> id2096out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2656out_value;

  HWOffsetFix<1,0,UNSIGNED> id2097out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2655out_value;

  HWOffsetFix<1,0,UNSIGNED> id2098out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id1228out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id1231out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id1234out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id1237out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id1240out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id1243out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id1246out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id1249out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2654out_value;

  HWOffsetFix<64,0,UNSIGNED> id1785out_doutb[3];

  HWOffsetFix<64,0,UNSIGNED> id1785sta_ram_store[1250];

  std::string format_string_prf_v2_Kernel_6 (const char* _format_arg_format_string);
  HWOffsetFix<1,0,UNSIGNED> id2536out_output[13];

  HWOffsetFix<64,0,UNSIGNED> id2653out_value;

  HWOffsetFix<1,0,UNSIGNED> id2101out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2652out_value;

  HWOffsetFix<1,0,UNSIGNED> id2102out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2651out_value;

  HWOffsetFix<1,0,UNSIGNED> id2103out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2650out_value;

  HWOffsetFix<1,0,UNSIGNED> id2104out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2649out_value;

  HWOffsetFix<1,0,UNSIGNED> id2105out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2648out_value;

  HWOffsetFix<1,0,UNSIGNED> id2106out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2647out_value;

  HWOffsetFix<1,0,UNSIGNED> id2107out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2646out_value;

  HWOffsetFix<1,0,UNSIGNED> id2108out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id1036out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id1039out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id1042out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id1045out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id1048out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id1051out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id1054out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id1057out_result[2];

  HWOffsetFix<32,0,TWOSCOMPLEMENT> id2645out_value;

  HWOffsetFix<64,0,UNSIGNED> id2644out_value;

  HWOffsetFix<1,0,UNSIGNED> id2110out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2643out_value;

  HWOffsetFix<1,0,UNSIGNED> id2111out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2642out_value;

  HWOffsetFix<1,0,UNSIGNED> id2112out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2641out_value;

  HWOffsetFix<1,0,UNSIGNED> id2113out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2640out_value;

  HWOffsetFix<1,0,UNSIGNED> id2114out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2639out_value;

  HWOffsetFix<1,0,UNSIGNED> id2115out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2638out_value;

  HWOffsetFix<1,0,UNSIGNED> id2116out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2637out_value;

  HWOffsetFix<1,0,UNSIGNED> id2117out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id1252out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id1255out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id1258out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id1261out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id1264out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id1267out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id1270out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id1273out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2636out_value;

  HWOffsetFix<64,0,UNSIGNED> id1786out_doutb[3];

  HWOffsetFix<64,0,UNSIGNED> id1786sta_ram_store[1250];

  std::string format_string_prf_v2_Kernel_7 (const char* _format_arg_format_string);
  HWOffsetFix<64,0,UNSIGNED> id2635out_value;

  HWOffsetFix<1,0,UNSIGNED> id2119out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2634out_value;

  HWOffsetFix<1,0,UNSIGNED> id2120out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2633out_value;

  HWOffsetFix<1,0,UNSIGNED> id2121out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2632out_value;

  HWOffsetFix<1,0,UNSIGNED> id2122out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2631out_value;

  HWOffsetFix<1,0,UNSIGNED> id2123out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2630out_value;

  HWOffsetFix<1,0,UNSIGNED> id2124out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2629out_value;

  HWOffsetFix<1,0,UNSIGNED> id2125out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2628out_value;

  HWOffsetFix<1,0,UNSIGNED> id2126out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id1060out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id1063out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id1066out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id1069out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id1072out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id1075out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id1078out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id1081out_result[2];

  HWOffsetFix<32,0,TWOSCOMPLEMENT> id2627out_value;

  HWOffsetFix<64,0,UNSIGNED> id2626out_value;

  HWOffsetFix<1,0,UNSIGNED> id2128out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2625out_value;

  HWOffsetFix<1,0,UNSIGNED> id2129out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2624out_value;

  HWOffsetFix<1,0,UNSIGNED> id2130out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2623out_value;

  HWOffsetFix<1,0,UNSIGNED> id2131out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2622out_value;

  HWOffsetFix<1,0,UNSIGNED> id2132out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2621out_value;

  HWOffsetFix<1,0,UNSIGNED> id2133out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2620out_value;

  HWOffsetFix<1,0,UNSIGNED> id2134out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2619out_value;

  HWOffsetFix<1,0,UNSIGNED> id2135out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id1276out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id1279out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id1282out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id1285out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id1288out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id1291out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id1294out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id1297out_result[2];

  HWOffsetFix<64,0,UNSIGNED> id2618out_value;

  HWOffsetFix<64,0,UNSIGNED> id1787out_doutb[3];

  HWOffsetFix<64,0,UNSIGNED> id1787sta_ram_store[1250];

  std::string format_string_prf_v2_Kernel_8 (const char* _format_arg_format_string);
  HWOffsetFix<64,0,UNSIGNED> id2617out_value;

  HWOffsetFix<1,0,UNSIGNED> id1746out_io_o_0_1_force_disabled;

  HWOffsetFix<32,0,TWOSCOMPLEMENT> id2616out_value;

  HWOffsetFix<1,0,UNSIGNED> id2545out_output[12];

  HWOffsetFix<1,0,UNSIGNED> id2541out_output[12];

  HWOffsetFix<1,0,UNSIGNED> id2539out_output[12];

  HWOffsetFix<1,0,UNSIGNED> id2540out_output[12];

  HWOffsetFix<1,0,UNSIGNED> id2544out_output[12];

  HWOffsetFix<1,0,UNSIGNED> id2542out_output[12];

  HWOffsetFix<1,0,UNSIGNED> id2543out_output[12];

  HWOffsetFix<64,0,UNSIGNED> id2615out_value;

  HWOffsetFix<1,0,UNSIGNED> id1751out_io_o_0_2_force_disabled;

  HWOffsetFix<32,0,TWOSCOMPLEMENT> id2614out_value;

  HWOffsetFix<1,0,UNSIGNED> id2552out_output[11];

  HWOffsetFix<1,0,UNSIGNED> id2548out_output[11];

  HWOffsetFix<1,0,UNSIGNED> id2546out_output[11];

  HWOffsetFix<1,0,UNSIGNED> id2547out_output[11];

  HWOffsetFix<1,0,UNSIGNED> id2551out_output[11];

  HWOffsetFix<1,0,UNSIGNED> id2549out_output[11];

  HWOffsetFix<1,0,UNSIGNED> id2550out_output[11];

  HWOffsetFix<64,0,UNSIGNED> id2613out_value;

  HWOffsetFix<1,0,UNSIGNED> id1756out_io_o_0_3_force_disabled;

  HWOffsetFix<32,0,TWOSCOMPLEMENT> id2612out_value;

  HWOffsetFix<1,0,UNSIGNED> id2559out_output[10];

  HWOffsetFix<1,0,UNSIGNED> id2555out_output[10];

  HWOffsetFix<1,0,UNSIGNED> id2553out_output[10];

  HWOffsetFix<1,0,UNSIGNED> id2554out_output[10];

  HWOffsetFix<1,0,UNSIGNED> id2558out_output[10];

  HWOffsetFix<1,0,UNSIGNED> id2556out_output[10];

  HWOffsetFix<1,0,UNSIGNED> id2557out_output[10];

  HWOffsetFix<64,0,UNSIGNED> id2611out_value;

  HWOffsetFix<1,0,UNSIGNED> id1761out_io_o_1_0_force_disabled;

  HWOffsetFix<32,0,TWOSCOMPLEMENT> id2610out_value;

  HWOffsetFix<1,0,UNSIGNED> id2566out_output[9];

  HWOffsetFix<1,0,UNSIGNED> id2562out_output[9];

  HWOffsetFix<1,0,UNSIGNED> id2560out_output[9];

  HWOffsetFix<1,0,UNSIGNED> id2561out_output[9];

  HWOffsetFix<1,0,UNSIGNED> id2565out_output[9];

  HWOffsetFix<1,0,UNSIGNED> id2563out_output[9];

  HWOffsetFix<1,0,UNSIGNED> id2564out_output[9];

  HWOffsetFix<64,0,UNSIGNED> id2609out_value;

  HWOffsetFix<1,0,UNSIGNED> id1766out_io_o_1_1_force_disabled;

  HWOffsetFix<32,0,TWOSCOMPLEMENT> id2608out_value;

  HWOffsetFix<1,0,UNSIGNED> id2573out_output[8];

  HWOffsetFix<1,0,UNSIGNED> id2569out_output[8];

  HWOffsetFix<1,0,UNSIGNED> id2567out_output[8];

  HWOffsetFix<1,0,UNSIGNED> id2568out_output[8];

  HWOffsetFix<1,0,UNSIGNED> id2572out_output[8];

  HWOffsetFix<1,0,UNSIGNED> id2570out_output[8];

  HWOffsetFix<1,0,UNSIGNED> id2571out_output[8];

  HWOffsetFix<64,0,UNSIGNED> id2607out_value;

  HWOffsetFix<1,0,UNSIGNED> id1771out_io_o_1_2_force_disabled;

  HWOffsetFix<32,0,TWOSCOMPLEMENT> id2606out_value;

  HWOffsetFix<1,0,UNSIGNED> id2580out_output[7];

  HWOffsetFix<1,0,UNSIGNED> id2576out_output[7];

  HWOffsetFix<1,0,UNSIGNED> id2574out_output[7];

  HWOffsetFix<1,0,UNSIGNED> id2575out_output[7];

  HWOffsetFix<1,0,UNSIGNED> id2579out_output[7];

  HWOffsetFix<1,0,UNSIGNED> id2577out_output[7];

  HWOffsetFix<1,0,UNSIGNED> id2578out_output[7];

  HWOffsetFix<64,0,UNSIGNED> id2605out_value;

  HWOffsetFix<1,0,UNSIGNED> id1776out_io_o_1_3_force_disabled;

  HWOffsetFix<32,0,TWOSCOMPLEMENT> id2604out_value;

  HWOffsetFix<1,0,UNSIGNED> id2587out_output[6];

  HWOffsetFix<1,0,UNSIGNED> id2583out_output[6];

  HWOffsetFix<1,0,UNSIGNED> id2581out_output[6];

  HWOffsetFix<1,0,UNSIGNED> id2582out_output[6];

  HWOffsetFix<1,0,UNSIGNED> id2586out_output[6];

  HWOffsetFix<1,0,UNSIGNED> id2584out_output[6];

  HWOffsetFix<1,0,UNSIGNED> id2585out_output[6];

  HWOffsetFix<64,0,UNSIGNED> id2603out_value;

  HWOffsetFix<1,0,UNSIGNED> id1792out_value;

  HWOffsetFix<1,0,UNSIGNED> id2602out_value;

  HWOffsetFix<49,0,UNSIGNED> id1789out_value;

  HWOffsetFix<48,0,UNSIGNED> id1790out_count;
  HWOffsetFix<1,0,UNSIGNED> id1790out_wrap;

  HWOffsetFix<49,0,UNSIGNED> id1790st_count;

  HWOffsetFix<1,0,UNSIGNED> id2601out_value;

  HWOffsetFix<49,0,UNSIGNED> id1795out_value;

  HWOffsetFix<48,0,UNSIGNED> id1796out_count;
  HWOffsetFix<1,0,UNSIGNED> id1796out_wrap;

  HWOffsetFix<49,0,UNSIGNED> id1796st_count;

  HWOffsetFix<48,0,UNSIGNED> id1798out_run_cycle_count;

  HWOffsetFix<1,0,UNSIGNED> id2207out_result[2];

  const HWOffsetFix<1,0,UNSIGNED> c_hw_fix_1_0_uns_bits;
  const HWOffsetFix<32,0,TWOSCOMPLEMENT> c_hw_fix_32_0_sgn_bits;
  const HWOffsetFix<32,0,TWOSCOMPLEMENT> c_hw_fix_32_0_sgn_bits_1;
  const HWOffsetFix<1,0,UNSIGNED> c_hw_fix_1_0_uns_bits_1;
  const HWOffsetFix<64,0,UNSIGNED> c_hw_fix_64_0_uns_undef;
  const HWOffsetFix<64,0,UNSIGNED> c_hw_fix_64_0_uns_bits;
  const HWOffsetFix<1,0,UNSIGNED> c_hw_fix_1_0_uns_undef;
  const HWOffsetFix<64,0,UNSIGNED> c_hw_fix_64_0_uns_bits_1;
  const HWOffsetFix<64,0,UNSIGNED> c_hw_fix_64_0_uns_bits_2;
  const HWOffsetFix<64,0,UNSIGNED> c_hw_fix_64_0_uns_bits_3;
  const HWOffsetFix<64,0,UNSIGNED> c_hw_fix_64_0_uns_bits_4;
  const HWOffsetFix<64,0,UNSIGNED> c_hw_fix_64_0_uns_bits_5;
  const HWOffsetFix<64,0,UNSIGNED> c_hw_fix_64_0_uns_bits_6;
  const HWRawBits<1> c_hw_bit_1_undef;
  const HWRawBits<2> c_hw_bit_2_undef;
  const HWOffsetFix<64,0,UNSIGNED> c_hw_fix_64_0_uns_bits_7;
  const HWOffsetFix<64,0,UNSIGNED> c_hw_fix_64_0_uns_bits_8;
  const HWRawBits<64> c_hw_bit_64_undef;
  const HWOffsetFix<64,4,UNSIGNED> c_hw_fix_64_4_uns_undef;
  const HWOffsetFix<49,0,UNSIGNED> c_hw_fix_49_0_uns_bits;
  const HWOffsetFix<49,0,UNSIGNED> c_hw_fix_49_0_uns_bits_1;
  const HWOffsetFix<49,0,UNSIGNED> c_hw_fix_49_0_uns_bits_2;

  void execute0();
};

}

#endif /* PRF_V2_KERNEL_H_ */
