#include <memory>

using std::unique_ptr;

int main()
{
	unique_ptr<int> p1(new int(10));
//	unique_ptr<int> p2(p1);
//	use of deleted function ‘std::unique_ptr<_Tp, _Dp>::unique_ptr(const std::unique_ptr<_Tp, _Dp>&) [with _Tp = int; _Dp = std::default_delete<int>]’
//		  unique_ptr<int> p2(p1);
//	                       ^
	return 0;
}
