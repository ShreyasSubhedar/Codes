## Important questions related to PHP OOP interviews:-

Functions of array:-
- `array()`
- `array_change_key_case()` 
- `array_chunk()`
- `count()`
- `sort()`
- `array_reverse()`
- `array_search()`
- `array_intersect()`

Functions of Strings:-
There are many array functions in PHP:
- `strtolower()`
- `strtoupper()`
- `ucfirst()`
- `lcfirst()`
- `ucwords()`
- `strrev()`
- `strlen()`
- `explode (break strings to an array)` 

Difference b/w include and require
- Require and include both are used to include a file, but if data is not found include sends warning whereas require sends Fatal error.


To Upload the file
- The move_uploaded_file() function is used to upload file in PHP.
- ```bool move_uploaded_file ( string $filename , string $destination )    ```

What is OpCode caching?
> OPcache is a type of **OPcode caching**. This kind of caching compiles human-readable PHP code to code your server understands which is called opcode. This occurs when the PHP file loads on a web page for the first time. Then, it’s saved to the server’s memory for faster loading at each subsequent page visit.
![](https://v3b4d4f5.rocketcdn.me/wp-content/uploads/1/wp-rocket-opcache-execute-code.png)

