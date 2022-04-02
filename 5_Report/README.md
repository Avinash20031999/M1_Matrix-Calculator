# Project Name : MATRIX CALCULATOR
## From : Avinash



## Folder Structure

|Folder|Description|
|------|-----------|
|0. Certificates|Storing Certificates|
|1. Requirements|Documents detailing requirements and research|
|2. Architecture|Documents specifying design details|
|3. Implementation|All codes and documentations|
|4. TestPlanAndOutput|Documents with test plans and procedures|
|5. Report|Documents with all the reports|
|6. ImagesAndVideos|Pictures and Screenshots|
|7. Other|Other details about the project|

## Features

|Feature Id|Feature|
|----------|-------|
|F_01|Options to select matrix operation|
|F_02|Operations on two matrices such as addition, subtraction and multiplication are included|
|F_03|Single matrix operations such as determinant, transpose and inverse of a matrix|
|F_04|Separate function for each operation|
|F_05|A structure has been implemented for storing the matrices|
|F_06|Dynamic memory allocation and deallocation has been implemented for the matrices|
|F_07|There is no upper limit for the size of the matrix|

## Challenges Faced and How Was It Overcome

|No.|Challenges|Solution|
|---|----------|--------|
|1.|Dynamic memory allocation of 2D arrays created segmentation faults|Running the code in GDB helped find the line where the program crashes|
|2.|Program crashes|Writing clean code with allocating and deallocating memory at all functions as per requirement|
