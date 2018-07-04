#include <systemc.h>

SC_MODULE(testModule){
    sc_in<bool>  port_a;
    sc_in<bool>  port_b;
    sc_out<bool> port_output;
    sc_in<bool>  clk;

    void func(){
        f.write(a.read() & b.read());
    }

    SC_CTOR(testModule){
        SC_METHOD(func);
        sensitive << clk.pos();
    }
}
