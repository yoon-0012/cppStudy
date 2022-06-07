#include<string>
#include<iostream>

template<typename T>
struct my_map
{
	my_map(T t):data(t){}
	T GetData()
	{
		return data;
	}
private:
	T data;
};

template<typename K,typename V,template<typename A>typename C=my_map>
class Map
{
public:
	Map(K k, V v) :key(k), value(v)
	{
		std::cout << "�⺻ Map Ŭ���� ���ø��� �����ڰ� ȣ��Ǿ����ϴ�." << std::endl;
	}

	K GetKey()
	{
		return key.GetData();
	}

	V GetValue()
	{
		return value.GetData();
	}

private:
	C<K> key;
	C<V> value;
};

template<typename K>
class Map<K, int>
{
public:
	Map(K k, int v) :key(k), value(v)
	{
		std::cout << "Map<K,V> Ŭ���� ���ø��� �����ڰ� ȣ��Ǿ����ϴ�." << std::endl;
	}

	K GetKey()
	{
		return key;
	}

	int Getvalue()
	{
		return value;
	}

private:
	K key;
	int value;
};

int main()
{
	Map<int, int>imap(100, 1000);
	std::cout << "Map(" << imap.GetKey() << ",'" << imap.Getvalue() << "')\n";

	Map<int, std::string, my_map>map(1000, "���ø� ���ø� �μ�");
	std::cout << "Map(" << map.GetKey() << ",'" << map.GetValue().c_str() << "')\n";
}