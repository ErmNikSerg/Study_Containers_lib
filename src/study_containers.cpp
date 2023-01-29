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
