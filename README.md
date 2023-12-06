# 2.3

```mermaid
classDiagram
class Route{
	-bool status
	-int end
}
class Driver{
	-bool request
	-int id
}
class Disp{
	-int id
	-int status
}
class Avto{
	-bool operability
	-int id
class CarCard{
  -look
  -type
  -mark
}
}

classRoute o-- classDriver
classRoute o-- classDisp
classRoute o-- classAvto
classAvto --> classCarCard
```
