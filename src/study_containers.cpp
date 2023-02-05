#include "study_containers.h"

void Study_containers::about_containers()
{
    std::cout << "Hello Containers!" << std::endl;
}

void Study_containers::about_array()
{
    auto print = [](const int& n) { std::cout << " " << n; };

    auto const N = 5;
    std::array<int,N> arr{0,1,2,3,4};
    std::cout << "Array{0,1,2,3,4}:" << std::endl;
    std::cout << "It is " << "sequence container - static contiguous array" << std::endl;
    std::cout << "  -Element access: " << "At(2)= " << arr.at(2) << ", front = " << arr.front() << ", back = " << arr.back() << std::endl;
    std::cout << "  -Iterators: " << "Iterator begin = " << arr.begin() << ", Iterator end = " << arr.end() << ", Iterators for_each = " ;
    std::cout << "{";
    std::for_each(arr.begin(),arr.end(),print);
    std::cout << "}";
    std::cout << std::endl;
    std::cout << "  -Capacity: " << " check empty = " << arr.empty() << ", size = " << arr.size() << std::endl;
}

void Study_containers::about_vector()
{
    auto print = [](const int& n) { std::cout << " " << n; };

    std::vector<int> vec{0,1,2,3,4};
    std::cout << "Vector{0,1,2,3,4}:" << std::endl;
    std::cout << "It is " << "sequence container - dynamic contiguous array" << std::endl;

    std::cout << "  -Element access: " << "At(2)= " << vec.at(2) << ", front = " << vec.front() << ", back = " << vec.back() << std::endl;

    std::cout << "  -Iterators: " << "Iterator begin = " << "vec.begin() (Allocator)"  << ", Iterator end = " << "vec.end() (Allocator)" << ", Iterators for_each = " ;
    std::cout << "{";
    std::for_each(vec.begin(),vec.end(),print);
    std::cout << "}";
    std::cout << std::endl;

    std::cout << "  -Capacity: " << " check empty = " << vec.empty() << ", size = " << vec.size() << ", max_size = " << vec.max_size() << ", capasity = " << vec.capacity() << std::endl;

    std::cout << "  -Modifers: " << std::endl;

    std::cout << "      *vector.clear() now vector = ";
    vec.clear();
    std::cout << "{";
    std::for_each(vec.begin(),vec.end(),print);
    std::cout << "}";
    std::cout << std::endl;

    std::cout << "      *vector.insert(vec.end(),5) now vector = ";
    vec.insert(vec.end(),5);
    std::cout << "{";
    std::for_each(vec.begin(),vec.end(),print);
    std::cout << "}";
    std::cout << std::endl;

    std::cout << "      *vector.emplace(vec.end(),6) now vector = ";
    vec.emplace(vec.end(),6);
    std::cout << "{";
    std::for_each(vec.begin(),vec.end(),print);
    std::cout << "}";
    std::cout << std::endl;

    std::cout << "      *vector.erase(vec.begin()) now vector = ";
    vec.erase(vec.begin());
    std::cout << "{";
    std::for_each(vec.begin(),vec.end(),print);
    std::cout << "}";
    std::cout << std::endl;

    std::cout << "      *vector.push_back(7) now vector = ";
    vec.push_back(7);
    std::cout << "{";
    std::for_each(vec.begin(),vec.end(),print);
    std::cout << "}";
    std::cout << std::endl;

    std::cout << "      *vector.emplace_back(8) now vector = ";
    vec.emplace_back(8);
    std::cout << "{";
    std::for_each(vec.begin(),vec.end(),print);
    std::cout << "}";
    std::cout << std::endl;

    std::cout << "      *vector.pop_back() now vector = ";
    vec.pop_back();
    std::cout << "{";
    std::for_each(vec.begin(),vec.end(),print);
    std::cout << "}";
    std::cout << std::endl;

    std::cout << "      *vector.resize(6, 4) (resize up to 6 ,initializer = 4) now vector = ";
    vec.resize(6, 4);
    std::cout << "{";
    std::for_each(vec.begin(),vec.end(),print);
    std::cout << "}";
    std::cout << std::endl;

}

void Study_containers::about_deque()
{
   auto print = [](const int& n) { std::cout << " " << n; };

   std::deque<int> deq{0,1,2,3,4};
   std::cout << "Deque{0,1,2,3,4}:" << std::endl;
   std::cout << "It is " << "sequence container - double-ended queue" << std::endl;

   std::cout << "  -Element access: " << "At(2)= " << deq.at(2) << ", front = " << deq.front() << ", back = " << deq.back() << std::endl;

   std::cout << "  -Iterators: " << "Iterator begin = " << "vec.begin() (Allocator)"  << ", Iterator end = " << "vec.end() (Allocator)" << ", Iterators for_each = " ;
   std::cout << "{";
   std::for_each(deq.begin(),deq.end(),print);
   std::cout << "}";
   std::cout << std::endl;

   std::cout << "  -Capacity: " << " check empty = " << deq.empty() << ", size = " << deq.size() << ", max_size = " << deq.max_size() << std::endl;

   std::cout << "  -Modifers: " << std::endl;

   std::cout << "      *deque.clear() now deque = ";
   deq.clear();
   std::cout << "{";
   std::for_each(deq.begin(),deq.end(),print);
   std::cout << "}";
   std::cout << std::endl;

   std::cout << "      *deque.insert(deque.end(),5) now deque = ";
   deq.insert(deq.end(),5);
   std::cout << "{";
   std::for_each(deq.begin(),deq.end(),print);
   std::cout << "}";
   std::cout << std::endl;

   std::cout << "      *deque.emplace(deque.end(),6) now deque = ";
   deq.emplace(deq.end(),6);
   std::cout << "{";
   std::for_each(deq.begin(),deq.end(),print);
   std::cout << "}";
   std::cout << std::endl;

   std::cout << "      *deque.erase(deque.begin()) now deque = ";
   deq.erase(deq.begin());
   std::cout << "{";
   std::for_each(deq.begin(),deq.end(),print);
   std::cout << "}";
   std::cout << std::endl;

   std::cout << "      *deque.push_back(7) now deque = ";
   deq.push_back(7);
   std::cout << "{";
   std::for_each(deq.begin(),deq.end(),print);
   std::cout << "}";
   std::cout << std::endl;

   std::cout << "      *deque.push_front(5) now deque = ";
   deq.push_front(5);
   std::cout << "{";
   std::for_each(deq.begin(),deq.end(),print);
   std::cout << "}";
   std::cout << std::endl;

   std::cout << "      *deque.emplace_back(8) now deque = ";
   deq.emplace_back(8);
   std::cout << "{";
   std::for_each(deq.begin(),deq.end(),print);
   std::cout << "}";
   std::cout << std::endl;

   std::cout << "      *deque.emplace_front(4) now deque = ";
   deq.emplace_front(4);
   std::cout << "{";
   std::for_each(deq.begin(),deq.end(),print);
   std::cout << "}";
   std::cout << std::endl;

   std::cout << "      *deque.pop_back() now deque = ";
   deq.pop_back();
   std::cout << "{";
   std::for_each(deq.begin(),deq.end(),print);
   std::cout << "}";
   std::cout << std::endl;

   std::cout << "      *deque.pop_front() now deque = ";
   deq.pop_front();
   std::cout << "{";
   std::for_each(deq.begin(),deq.end(),print);
   std::cout << "}";
   std::cout << std::endl;

   std::cout << "      *deque.resize(6, 4) (resize up to 6 ,initializer = 4) now deque = ";
   deq.resize(6, 4);
   std::cout << "{";
   std::for_each(deq.begin(),deq.end(),print);
   std::cout << "}";
   std::cout << std::endl;
}

void Study_containers::about_forward_list()
{
    auto print = [](const int& n) { std::cout << " " << n; };

    std::forward_list<int> flist{0,1,2,3,4};
    std::cout << "forward_list{0,1,2,3,4}:" << std::endl;
    std::cout << "It is " << "sequence container - singly-linked list" << std::endl;
    std::cout <<  "std::forward_list is a container that supports fast insertion and removal of elements from anywhere in the container." << std::endl;
    std::cout <<  "Compared to std::list this container provides more space efficient storage when bidirectional iteration is not needed." << std::endl;

    std::cout << "  -Element access: "  << ", forward_list.front = " << flist.front()  << std::endl;

    std::cout << "  -Iterators: " << "Iterator begin = " << "vec.begin() (Allocator)"  << ", Iterator end = " << "vec.end() (Allocator)" << ", Iterators for_each = " ;
    std::cout << "{";
    std::for_each(flist.begin(),flist.end(),print);
    std::cout << "}";
    std::cout << std::endl;

    std::cout << "  -Capacity: " << " forward_list.empty() = " << flist.empty() << ", forward_list.max_size() = " << flist.max_size() << std::endl;

    std::cout << "  -Modifers: " << std::endl;

    std::cout << "      *forward_list.clear() now forward_list = ";
    flist.clear();
    std::cout << "{";
    std::for_each(flist.begin(),flist.end(),print);
    std::cout << "}";
    std::cout << std::endl;

    std::cout << "      *forward_list.insert_after(forward_list.begin(),0) now forward_list = CRASHED HAHAHA" << std::endl;
    std::cout << "      *forward_list.emplce_after(forward_list.begin(),0) now forward_list = CRASHED HEHEHE" << std::endl;

    std::cout << "      *forward_list.push_front(0) now forward_list = ";
    flist.push_front(0);
    std::cout << "{";
    std::for_each(flist.begin(),flist.end(),print);
    std::cout << "}";
    std::cout << std::endl;

    std::cout << "      *forward_list.insert_after(forward_list.begin(),1) now forward_list = ";
    flist.insert_after(flist.begin(),1);
    std::cout << "{";
    std::for_each(flist.begin(),flist.end(),print);
    std::cout << "}";
    std::cout << std::endl;

    std::cout << "      *forward_list.emplace_after(forward_list.begin(),2) now forward_list = ";
    flist.emplace_after(flist.begin(),2);
    std::cout << "{";
    std::for_each(flist.begin(),flist.end(),print);
    std::cout << "}";
    std::cout << std::endl;

    std::cout << "      *forward_list.erase_after(forward_list.begin()) now forward_list = ";
    flist.erase_after(flist.begin());
    std::cout << "{";
    std::for_each(flist.begin(),flist.end(),print);
    std::cout << "}";
    std::cout << std::endl;

    std::cout << "      *forward_list.pop_front() now forward_list = ";
    flist.pop_front();
    std::cout << "{";
    std::for_each(flist.begin(),flist.end(),print);
    std::cout << "}";
    std::cout << std::endl;

    std::cout << "      *forward_list.resize(6, 4) (resize up to 6 ,initializer = 4) now forward_list = ";
    flist.resize(6, 4);
    std::cout << "{";
    std::for_each(flist.begin(),flist.end(),print);
    std::cout << "}";
    std::cout << std::endl;

    std::cout << "  -Operations: " << std::endl;

    std::cout << "      *forward_list1.merge(forward_list2)" << std::endl;
    std::cout << "      *forward_list2.splice_after(forward_list2.cbegin(), forward_list1, forward_list1.cbegin(), forward_list1.cend());" << std::endl;
    std::cout << "      *forward_list.remove(1) now forward_list = ";
    flist.remove(1);
    std::cout << "{";
    std::for_each(flist.begin(),flist.end(),print);
    std::cout << "}";
    std::cout << std::endl;

    std::cout << "      *forward_list.reverse()" << std::endl;

    std::cout << "      *forward_list.unique() now forward_list = ";
    flist.unique();
    std::cout << "{";
    std::for_each(flist.begin(),flist.end(),print);
    std::cout << "}";
    std::cout << std::endl;

    std::cout << "      *forward_list.sort()" << std::endl;
}

void Study_containers::about_list()
{
    auto print = [](const int& n) { std::cout << " " << n; };

    std::list<int> list{0,1,2,3,4};
    std::cout << "list{0,1,2,3,4}:" << std::endl;
    std::cout << "It is " << "sequence container - doubly-linked list list" << std::endl;
    std::cout <<  "std::list is a container that supports fast insertion and removal of elements from anywhere in the container." << std::endl;
    std::cout <<  "Compared to std::forward_list this container provides bidirectional iteration capability while being less space efficient.." << std::endl;

    std::cout << "  -Element access: "  << ", list.front = " << list.front()  << ", list.back = " << list.back() << std::endl;

    std::cout << "  -Iterators: " << "Iterator begin = " << "list.begin() (Allocator)"  << ", Iterator end = " << "list.end() (Allocator)" << ", Iterators for_each = " ;
    std::cout << "{";
    std::for_each(list.begin(),list.end(),print);
    std::cout << "}";
    std::cout << std::endl;

    std::cout << "  -Capacity: " << " list.empty() = " << list.empty() << ", list.max_size() = " << list.max_size() << ", list.size() = " << list.size() << std::endl;

    std::cout << "  -Modifers: " << std::endl;

    std::cout << "      *list.clear() now list = ";
    list.clear();
    std::cout << "{";
    std::for_each(list.begin(),list.end(),print);
    std::cout << "}";
    std::cout << std::endl;

    std::cout << "      *list.insert(list.begin(),1) now list = ";
    list.insert(list.begin(),1);
    std::cout << "{";
    std::for_each(list.begin(),list.end(),print);
    std::cout << "}";
    std::cout << std::endl;

    std::cout << "      *list.emplace(list.begin(),2) now list = ";
    list.emplace(list.begin(),2);
    std::cout << "{";
    std::for_each(list.begin(),list.end(),print);
    std::cout << "}";
    std::cout << std::endl;

    std::cout << "      *list.erase(list.begin()) now list = ";
    list.erase(list.begin());
    std::cout << "{";
    std::for_each(list.begin(),list.end(),print);
    std::cout << "}";
    std::cout << std::endl;

    std::cout << "      *list.push_back(2) now list = ";
    list.push_back(2);
    std::cout << "{";
    std::for_each(list.begin(),list.end(),print);
    std::cout << "}";
    std::cout << std::endl;

    std::cout << "      *list.emplace_back(3) now list = ";
    list.emplace_back(3);
    std::cout << "{";
    std::for_each(list.begin(),list.end(),print);
    std::cout << "}";
    std::cout << std::endl;

    std::cout << "      *list.pop_back() now list = ";
    list.pop_back();
    std::cout << "{";
    std::for_each(list.begin(),list.end(),print);
    std::cout << "}";
    std::cout << std::endl;

    std::cout << "      *list.push_front(0) now list = ";
    list.push_front(0);
    std::cout << "{";
    std::for_each(list.begin(),list.end(),print);
    std::cout << "}";
    std::cout << std::endl;

    std::cout << "      *list.emplace_front(-1) now list = ";
    list.push_front(-1);
    std::cout << "{";
    std::for_each(list.begin(),list.end(),print);
    std::cout << "}";
    std::cout << std::endl;

    std::cout << "      *list.pop_front() now list = ";
    list.pop_front();
    std::cout << "{";
    std::for_each(list.begin(),list.end(),print);
    std::cout << "}";
    std::cout << std::endl;

    std::cout << "      *list.resize(6, 4) (resize up to 6 ,initializer = 4) now list = ";
    list.resize(6, 4);
    std::cout << "{";
    std::for_each(list.begin(),list.end(),print);
    std::cout << "}";
    std::cout << std::endl;

    std::cout << "      *list1.swap(list2)  ";

    std::cout << "  -Operations: " << std::endl;

    std::cout << "      *list1.merge(forward_list2)" << std::endl;
    std::cout << "      *list2.splice_after(list2.cbegin(), list1, list1.cbegin(), list1.cend());" << std::endl;
    std::cout << "      *list.remove(1) now list = ";
    list.remove(1);
    std::cout << "{";
    std::for_each(list.begin(),list.end(),print);
    std::cout << "}";
    std::cout << std::endl;

    std::cout << "      *list.reverse()" << std::endl;

    std::cout << "      *list.unique() now list = ";
    list.unique();
    std::cout << "{";
    std::for_each(list.begin(),list.end(),print);
    std::cout << "}";
    std::cout << std::endl;

    std::cout << "      *list.sort()" << std::endl;
}

void Study_containers::about_set()
{
    auto print = [](const int& n) { std::cout << " " << n; };

    std::set<int> set;
    std::cout << "set - unordered_set" << std::endl;
    std::cout << "It is " << "collection of unique keys" << std::endl;
    std::cout << "set - implement sorted data structures that can be quickly searched (O(log n) complexity. Red-black tree" << std::endl;
    std::cout << "unordered_set -  implement unsorted (hashed) data structures that can be quickly searched (O(1) amortized, O(n) worst-case complexity" << std::endl;

    std::cout << "  -Modifers: " << std::endl;
    std::cout << "      *set.clear() now set = ";
    set.clear();
    std::cout << "{";
    std::for_each(set.begin(),set.end(),print);
    std::cout << "}";
    std::cout << std::endl;

    std::cout << "      *set.insert(0),set.insert(1),set.insert(2),set.insert(1) now set = ";
    set.insert(0);
    set.insert(1);
    set.insert(2);
    set.insert(1);
    std::cout << "{";
    std::for_each(set.begin(),set.end(),print);
    std::cout << "}";
    std::cout << std::endl;

    std::cout << "      *set.emplace(0) now set = ";
    set.emplace(4);
    std::cout << "{";
    std::for_each(set.begin(),set.end(),print);
    std::cout << "}";
    std::cout << std::endl;

    std::cout << "      *set.emplace_hint(set.begin(),3) now set = ";
    set.emplace_hint(set.begin(),3);
    std::cout << "{";
    std::for_each(set.begin(),set.end(),print);
    std::cout << "}";
    std::cout << std::endl;

    std::cout << "      *set.erase(3) now set = ";
    set.erase(3);
    std::cout << "{";
    std::for_each(set.begin(),set.end(),print);
    std::cout << "}";
    std::cout << std::endl;

    std::cout << "      *set.swap(set2) " << std::endl;

    std::cout << "      *node = set.extract(1) now set = ";
    auto n = set.extract(1);
    std::cout << "{";
    std::for_each(set.begin(),set.end(),print);
    std::cout << "}";
    std::cout << ", node = " << n.value();
    std::cout << std::endl;

    std::cout << "      *set.merge(set2) " << std::endl;

    std::cout << "  -Capacity: " << " set.empty() = " << set.empty() << ", set.max_size() = " << set.max_size() << ", set.size() = " << set.size() << std::endl;

    std::cout << "  -Lookup: "  << std::endl;
    std::cout << "      *set.count(0) " << set.count(0) << std::endl;
    std::cout << "      *if (auto search = set.find(2); search != set.end()){..} ";
    if (auto search = set.find(2); search != set.end())
            std::cout << "Found " << (*search);
        else
            std::cout << "Not found";
    std::cout << std::endl;

    std::cout << "      *if (set.contains(x)){..} ";
    for(int x: {0, 3}) {
            if(set.contains(x)) {
                std::cout << " " << x << ": Found";
            } else {
                std::cout << " "<< x << ": Not found";
            }
    }
    std::cout << std::endl;

    std::cout << "      *equal_range" << std::endl;
    std::cout << "      *lower_bound" << std::endl;
    std::cout << "      *upper_bound" << std::endl;

    std::cout << "  -Observers: "  << std::endl;
    std::cout << "      *key_comp" << std::endl;
    std::cout << "      *value_comp" << std::endl;
}

void Study_containers::about_map()
{
    auto print = [](const std::pair<int,std::string>& n) { std::cout << " " << n.first << ":" << n.second ; };


    std::map<int, std::string> map;
    std::cout << "map - unordered_map" << std::endl;
    std::cout << "It is " << "a sorted associative container that contains key-value pairs with unique keys. Keys are sorted by using the comparison function Compare" << std::endl;
    std::cout << "map - implement sorted data structures that can be quickly searched (O(log n) complexity. Red-black tree" << std::endl;
    std::cout << "unordered_map -  implement unsorted (hashed) data structures that can be quickly searched (O(1) amortized, O(n) worst-case complexity" << std::endl;

    std::cout << "  -Modifers: " << std::endl;
    std::cout << "      *map.clear() now map = ";
    map.clear();
    std::cout << "{";
    std::for_each(map.begin(),map.end(),print);
    std::cout << "}";
    std::cout << std::endl;

    std::cout << "      *const auto [it_map, success] = map.insert({0, \"zero\"} now set = ";
    const auto [it_map, success] = map.insert({0, "zero"});
    std::cout << "{";
    std::for_each(map.begin(),map.end(),print);
    std::cout << "}";
    std::cout << std::endl;

    std::cout << "      *const auto [it_map2, success2] = map.insert_or_assign(0, \"zero_two\") now set = ";
    const auto [it_map2, success2] = map.insert_or_assign(0, "zero_two");
    std::cout << "{";
    std::for_each(map.begin(),map.end(),print);
    std::cout << "}";
    std::cout << std::endl;

    std::cout << "      *map.emplace(1, \"one\") now set = ";
    map.emplace(1, "one");
    std::cout << "{";
    std::for_each(map.begin(),map.end(),print);
    std::cout << "}";
    std::cout << std::endl;

    std::cout << "      *map.emplace_hint(map.begin(),2, \"two\") now set = ";
    map.emplace_hint(map.begin(),2, "two");
    std::cout << "{";
    std::for_each(map.begin(),map.end(),print);
    std::cout << "}";
    std::cout << std::endl;

    std::cout << "      *map.try_emplace(2, \"two\") now set = ";
    map.try_emplace(2, "two");
    std::cout << "{";
    std::for_each(map.begin(),map.end(),print);
    std::cout << "}";
    std::cout << std::endl;

    std::cout << "      *map.erase(map.begin()) now set = ";
    map.erase(map.begin());
    std::cout << "{";
    std::for_each(map.begin(),map.end(),print);
    std::cout << "}";
    std::cout << std::endl;

    std::cout << "      *map.swap(map2) " << std::endl;

    std::cout << "      *Extract node handle auto nh = map.extract(1) now set = ";
    auto nh = map.extract(1);
    std::cout << "{";
    std::for_each(map.begin(),map.end(),print);
    std::cout << "}";
    std::cout << " change key, Insert node handle back nh.key() = 4, map.insert(std::move(nh)) now set = ";
    nh.key() = 4;
    map.insert(std::move(nh));
    std::cout << "{";
    std::for_each(map.begin(),map.end(),print);
    std::cout << "}";
    std::cout << std::endl;

    std::cout << "      *map.merge(map2) " << std::endl;

    std::cout << "  -Capacity: " << " map.empty() = " << map.empty() << ", map.max_size() = " << map.max_size() << ", map.size() = " << map.size() << std::endl;

    std::cout << "  -Element access: " << std::endl;
    std::cout << "      *map.at(2) = ";
    std::cout << map.at(2);
    std::cout << std::endl;

    std::cout << "  -Lookup: " << std::endl;
    std::cout << "      *map.count(2) = ";
    std::cout << map.count(2);
    std::cout << std::endl;

    std::cout << "      *auto mf = map.find(4) = ";
    auto mf = map.find(4);
    std::cout << mf->first << " " << mf->second;
    std::cout << std::endl;

    std::cout << "      *map.contains(4) = ";
    std::cout << map.contains(4);
    std::cout << std::endl;

    std::cout << "      *auto p = m.equal_range(1) = ";
    auto p = map.equal_range(4);
    for (auto& q = p.first; q != p.second; ++q) {
        std::cout << "m[" << q->first << "] = " << q->second;
    }
    std::cout << std::endl;

    std::cout << "      *lower_bound" << std::endl;
    std::cout << "      *upper_bound" << std::endl;

    std::cout << "  -Observers: " << std::endl;
    std::cout << "      *key_comp " << std::endl;
    std::cout << "      *value_comp " << std::endl;
}

void Study_containers::about_multiset()
{

}

void Study_containers::about_multimap()
{

}

void Study_containers::about_stack()
{

}

void Study_containers::about_queue()
{

}

void Study_containers::about_priority_queue()
{

}

void Study_containers::about_flat_set()
{

}

void Study_containers::about_flat_map()
{

}
