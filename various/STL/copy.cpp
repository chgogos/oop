#include <iostream>
#include <vector>

using namespace std;

void print_vector(vector<int> v){
    for_each(begin(v), end(v), [](int x){cout << x << " ";});
    cout << endl;
}

int main()
{
    vector<int> source{1, 2, 3, 4, 5};
    print_vector(source);

    vector<int> dest1 = source;
    print_vector(dest1);
    
    vector<int> dest2(3);
    copy(begin(source), begin(source)+3, begin(dest2));
    print_vector(dest2);

    vector<int> dest3(3);
    copy_n(begin(source), 3, begin(dest3));
    print_vector(dest3);

    vector<int> dest4(source.size());
    copy_if(begin(source),end(source),begin(dest4),[](int elem){return elem%2==0;});
    print_vector(dest4);

}