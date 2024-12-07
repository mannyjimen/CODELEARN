#include <iostream>
#include <list>
#include <string>

//used for distance of infinity
int INFINITY = 1000000;

struct Vertex{
    //helper name for debugging
    std::string vertexName = "";

    std::list<Vertex*> adjacenyList; 
    bool known = 0;
    int dist = INFINITY;
    Vertex* path;

    //helper parameterized constructor for Vertex
    Vertex(const std::string& name) : vertexName{name} {}
};

struct Graph{
    Vertex* startVert;

    //helper parameterized constructor Vertex
    Graph(Vertex* currVert) : startVert{currVert} {}
};

void printShortestPath(Vertex* start, Vertex* end){
        
}

int main()
{
    Vertex firstVert("v1");
    Vertex secondVert("v2");
    Graph mainGraph(&firstVert);

    std::cout << mainGraph.startVert->vertexName;
}
