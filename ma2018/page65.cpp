class ConstRef
{
  public:
    ConstRef(int &);

  private:
    int mI;
    const int mCi;
    int &mRi;
};

ConstRef::ConstRef( int& inI ): mI( inI ), mCi( inI ), mRi( inI ){}

int main(){
    int a=5;
    ConstRef x(a);
}
