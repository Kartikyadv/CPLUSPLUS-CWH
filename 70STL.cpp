/*          STL =    CONTAINERS   +    ALGORITHM   +    ITERATOR
                        ^                  ^                ^
                        |                  |                |
                   OBJECT WHICH       PROCEDURE TO      OBJECT WHICH POINTS TO AN 
                   STORES DATA        PROCESS DATA      ELEMENT OF A CONTAINER


                                    CONTAINERS
                ________________________|_____________________
                >SEQUENCE           >ASSOCIATIVE          > DERIVED
                 CONTAINERS          CONTAINERS             CONTAINERS
                     |                   |                       |
              LINEAR FASHION        DIRECT ACCESS         REAL WORLD MODELING
                     |                   |                       |
                >  VECTOR           > SET/MULTISET          >  STACK
                >  LIST             > MAP/MULTIMAP          >  QUEUE
                >  DEQUEUE                                  >  PRIORITY_QUEUE


                         RANDOM          INSERTION/DEL.        INSERTION/DEL.
                         ACCESS             MIDDLE                AT END
SEQUENCE CONTAINERS

1) VECTOR                 FAST               SLOW                 FAST

2) LIST                   SLOW               FAST                 FAST

ASSOCIATIVE CONTAINERS  -->  ALL OPERATIONS -> FAST 
                             EXCEPT  RANDOM ACCESS

DERIVED CONTAINERS  -->  DEPENDS   --> DATA STRUCTRUES                             
*/