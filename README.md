# C++ Shape Class Hierarchy

An object-oriented shape library in C++ demonstrating inheritance, polymorphism, and abstract classes.

## Class Hierarchy

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

**Base class `CShape`** defines pure virtual methods `calcArea()` and `draw()`, with shared properties for center point (`CPoint`), color (`CColor`), and rotation.

## Supporting Classes

- **CPoint** — 2D coordinate with distance calculation
- **CColor** — RGB color representation

## Features

- Abstract base class with pure virtual functions
- Concrete shape implementations with area calculation and drawing
- Color and position management through composition
- Proper use of header guards, forward declarations, and include organization

## Build & Run

```bash
cd build
make        # or compile manually:
g++ -o shapes ../Hultin_ShapesCPP.cpp ../CShape.cpp ../CPoint.cpp ../CColor.cpp ../CCircle.cpp ../CEllipse.cpp ../CLine.cpp ../CRectangle.cpp ../CSquare.cpp ../CTriangle.cpp ../CPolygon.cpp
./shapes
```

Built for an Object-Oriented Programming course.
