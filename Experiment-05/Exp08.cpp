#include &lt;iostream&gt;
#include &lt;cstdlib&gt;
using namespace std;
class Array {
private:
int num[10];
int size;
public:
void setArray()
{
cout&lt;&lt;&quot;enter the no of elements\n&quot;;
cin&gt;&gt;size;
cout&lt;&lt;&quot;enter &quot;&lt;&lt;size&lt;&lt;&quot; elements\n&quot;;
for(int i=0;i&lt;size;i++)
{ cin&gt;&gt;num[i];
}
}
int &amp; operator[](int x)
{ if(x&gt;=size)
{ cout&lt;&lt;&quot;Array out of bounds\n&quot;;

exit(0);
}
else {return num[x];}
}
void display()
{ for(int i=0;i&lt;size;i++)
{ cout&lt;&lt;num[i]&lt;&lt;&quot;\n&quot;; }
}
};
int main()
{ Array a1;
a1.setArray();
int x=a1[3];
cout&lt;&lt;endl&lt;&lt;&quot;x=&quot;&lt;&lt;x&lt;&lt;endl;
return 0;
}
