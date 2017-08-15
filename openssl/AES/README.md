# AES encrypt decrypt demo 

## Ref
http://blog.csdn.net/yasi_xi/article/details/13997337
    
    AES算法的块（block）的长度固定为16字节。假设一个字符串在AES加密前的长度为cleanLen，<br>
    加密后的长度为cipherLen，则二者有下面的关系，其中的“/”是整除 <br>  
    cipherLen = (clearLen/16 + 1) * 16 <br>    
    可见，对于AES算法： <br>
* 加密后的长度>=加密前的长度
* 解密后的长度<=解密前的长度
