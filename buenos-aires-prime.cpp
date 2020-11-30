/*         _.._      ____  _     _____ _      ____  ____    ____  _  ____  _____ ____    ____  ____  _      ____  _____  ____  _      _____
 *      .' .-'`     /  _ \/ \ /\/  __// \  /|/  _ \/ ___\  /  _ \/ \/  __\/  __// ___\  /   _\/  _ \/ \  /|/ ___\/__ __\/  _ \/ \  /|/__ __\
 *     /  /         | | //| | |||  \  | |\ ||| / \||    \  | / \|| ||  \/||  \  |    \  |  /  | / \|| |\ |||    \  / \  | / \|| |\ ||  / \
 *     |  |         | |_\\| \_/||  /_ | | \||| \_/|\___ |  | |-||| ||    /|  /_ \___ |  |  \_ | \_/|| | \||\___ |  | |  | |-||| | \||  | |
 *     \  '.___.;   \____/\____/\____\\_/  \|\____/\____/  \_/ \|\_/\_/\_\\____\\____/  \____/\____/\_/  \|\____/  \_/  \_/ \|\_/  \|  \_/
 *      '._  _.'
 *         ``       Code Golf First 50 Primes: C++17 in 177 Bytes
 * Alexander
 * Töpfer 2020
 * Inspired by Paper "A Prime-Representing Constant"
 */
#include <boost/math/special_functions/pow.hpp>
#include <boost/multiprecision/cpp_dec_float.hpp>
#include <boost/multiprecision/cpp_int.hpp>
#define f( x ) cpp_dec_float_100( cpp_int( x ) )
#define mp_float cpp_dec_float_100
#define mp_int cpp_int
#define spc ' '
using namespace std;
using namespace boost::multiprecision;
mp_float i=0,p("2.920050977316134712092562917112019468002727899321426719772682533107733772127766124190178112263");int main(){for(;i<50;++i){cout<<f(p)<<spc;p=f(p)*(p-f(p)+1);}}
