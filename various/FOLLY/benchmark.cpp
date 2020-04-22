#include <folly/Benchmark.h>
#include <folly/container/Foreach.h>
#include <vector>
using namespace std;
using namespace folly;
BENCHMARK(insertFrontVector)
{
    // Let's insert 100 elements at the front of a vector
    vector<int> v;
    FOR_EACH_RANGE(i, 0, 100)
    {
        v.insert(v.begin(), i);
    }
}
BENCHMARK(insertBackVector)
{
    // Let's insert 100 elements at the back of a vector
    vector<int> v;
    FOR_EACH_RANGE(i, 0, 100)
    {
        v.insert(v.end(), i);
    }
}
int main()
{
    runBenchmarks();
}