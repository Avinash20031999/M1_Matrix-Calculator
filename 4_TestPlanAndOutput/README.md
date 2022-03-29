# TEST PLAN

## Table no: High Level Test Plan

|TEST ID|Description|Exp I/P|Exp O/P|Actual Out|Type Of Test|
|-------|-----------|-------|-------|----------|------------|
|H_01|Tested addition of two matrices|matrix1, matrix2, n|SUCCESS|SUCCESS|Technical|
|H_02|Tested subtraction of two matrices|matrix1, matrix2, n|SUCCESS|SUCCESS|Technical|
|H_03|Tested multiplication of two matrices|matrix1, matrix2, n|SUCCESS|SUCCESS|Technical|
|H_04|Tested determinant of a matrix|matrix1, n|SUCCESS|SUCCESS|Technical|
|H_05|Tested transpose of a matrix|matrix1, n|SUCCESS|SUCCESS|Technical|
|H_06|Tested inverse of a matrix|matrix1, n|SUCCESS|SUCCESS|Technical|
|H_07|Tested power of -1 function|3|-1|-1|Technical|
|H_08|Tested power of -1 function|2|1|1|Technical|

## Table no: Low level test plan

|TEST ID|HLT ID|Description|Exp IN|Exp OUT|Actual OUT|Type Of Test|
|-------|------|-----------|------|-------|----------|------------|
|L_01|H_01, H_02, H_03|Tested on functions which accept two matrices as input|matrix1, matrix2, n|SUCCESS|SUCCESS|Technical|
|L_02|H_04, H_05, H_06|Tested on functions which accept single matrix as input|matrix1, n|SUCCESS|SUCCESS|Technical|
|L_03|H_07, H_08|Tested on function which returns an integer value|3|-1|-1|Technical|
