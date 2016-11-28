#include <iostream>
#include<stack>
#include<algorithm>
#include <stack>
#include <queue>
#include <ostream>

template <class Container, class Stream>
Stream& printOneValueContainer
    (Stream& outputstream, const Container& container)
{
    typename Container::const_iterator beg = container.begin();

    outputstream << "[";

    while(beg != container.end())
    {
        outputstream << " " << *beg++;
    }

    outputstream << " ]";

    return outputstream;
}

template < class Type, class Container >
const Container& container
    (const std::stack<Type, Container>& stack)
{
    struct HackedStack : private std::stack<Type, Container>
    {
        static const Container& container
            (const std::stack<Type, Container>& stack)
        {
            return stack.*&HackedStack::c;
        }
    };

    return HackedStack::container(stack);
}

template < class Type, class Container >
const Container& container
    (const std::queue<Type, Container>& queue)
{
    struct HackedQueue : private std::queue<Type, Container>
    {
        static const Container& container
            (const std::queue<Type, Container>& queue)
        {
            return queue.*&HackedQueue::c;
        }
    };

    return HackedQueue::container(queue);
}

template
    < class Type
    , template <class Type, class Container = std::deque<Type> > class Adapter
    , class Stream
    >
Stream& operator<<
    (Stream& outputstream, const Adapter<Type>& adapter)
{
    return printOneValueContainer(outputstream, container(adapter));
}
using namespace std;
#define ll long long int
int t,n,c,i,j,k,l,q,x;
int main()
{
	stack<ll> s;
	cin>>n;
	ll a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	cin>>q>>x;
	string a1="Harry",val;
	string a2="Remove";
	i=0;
	ll sval=0;
	for(k=0;k<q;k++)
	{
		cin>>val;
		if(val==a1&&sval!=x)
			{
				sval+=a[i];
				s.push(a[i]);
				i++;cout<<s;
			}
		else if(val==a2&&sval!=x)
			{
				ll p=s.top();
				sval=sval-p;
				s.pop();
				cout<<s;
			}
		else if(sval==x)
			{
			    cout<<s;
				cout<<s.size();
				break;
			}


	}
    return 0;
}
