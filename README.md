# C++ Shape Class Hierarchy

OOP shape library in C++. Abstract `CShape` base class with `calcArea()` and `draw()` as pure virtual methods, then concrete shapes that implement them.

```
CShape (abstract)
├── CCircle
├── CEllipse
├── CLine
├── CRectangle
│   └── CSquare
├── CTriangle
└── CPolygon
```

Each shape has a center point (`CPoint`) and color (`CColor`).

## Build

```bash
g++ -o shapes Hultin_ShapesCPP.cpp CShape.cpp CPoint.cpp CColor.cpp CCircle.cpp CEllipse.cpp CLine.cpp CRectangle.cpp CSquare.cpp CTriangle.cpp CPolygon.cpp
./shapes
```
