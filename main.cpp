#include <iostream>
#include "graph.h"
#include <gtest/gtest.h>
/*
void main2() {
    Graph<int> graph;
    graph.insert_ver(1);
    graph.insert_ver(2);
    graph.insert_ver(3);
    graph.insert_ver(4);
    graph.insert_ver(5);
    graph.insert_ver(6);
    graph.insert_ver(7);
    graph.insert_ver(8);
    graph.insert_ver(9);
    //graph.insert_edge(1,3,11);
    graph.insert_edge(1, 2, 3);
    graph.insert_edge(1, 3, 5);
    graph.insert_edge(2, 3, 1);
    graph.insert_edge(2, 4, 5);
    graph.insert_edge(2, 5, 5);
    graph.insert_edge(3, 5, 3);
    graph.insert_edge(3, 6, 6);
    graph.insert_edge(4, 7, 8);
    graph.insert_edge(5, 7, 1);
    graph.insert_edge(6, 8, 10);
    graph.insert_edge(7, 9, 1);
    graph.insert_edge(8, 9, 1);
    //graph.insert_edge(4,2,11);
    //graph.delete_edge(2,3);
    //graph.delete_ver(2);
    graph.print();
    /*vector<int> res = graph.doDFS(1);
    for(int i = 0; i < res.size(); i++){
        cout<< res[i]<<" ";
    }*/
    //bool k = graph.is_cycle_here();
    /*stack<int> res = graph.top_sort();
    while(!res.empty()){
        cout<< res.top()<<" ";
        res.pop();
    }
    //graph.print();
    vector<int> vec = graph.path_finding(3,1);
    //cout<<"\n"<<k;
}*/

int main(int argc, char** argv) {
    //main2();
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
    return 0;
}