
 

 # i n c l u d e   < Q T e x t S t r e a m > 
 
 # i n c l u d e   < Q C o r e A p p l i c a t i o n > 
 
 # i n c l u d e   < Q S t r i n g > 
 
 # i n c l u d e   < Q C h a r > 
 
 
 
 i n t   m a i n ( i n t   a r g c ,   c h a r   * a r g v [ ] ) 
 
 { 
 
         Q _ U N U S E D ( a r g c ) 
 
         Q _ U N U S E D ( a r g v ) 
 
 
 
         Q T e x t S t r e a m   o u t ( s t d o u t ) ; 
 
 
 
         Q S t r i n g   s t r ( " N a   l o u c e   s e o p e t   p a s e   k oH. " ) ; 
 
 
 
 
 
         f o r e a c h   ( Q C h a r   s ,   s t r ) 
 
         { 
 
                 o u t   < <   s   < <   " * " ; 
 
         } 
 
 
 
         o u t < < Q t : : e n d l ; 
 
 
 
         o u t   < <   ( s t r [ s t r . s i z e ( ) - 2 ] ) . u n i c o d e ( ) ; 
 
   o u t < < Q t : : e n d l ; 
 
 
 
         r e t u r n   0 ; 
 
 } 
 
 
 
 
 
 
 
 / * 
 
 # i n c l u d e   < Q T e x t S t r e a m > 
 
 # i n c l u d e   < Q S t r i n g > 
 
 # i n c l u d e   < Q C h a r > 
 
 
 
         i n t   m a i n ( i n t   a r g c ,   c h a r   * a r g v [ ] ) 
 
 { 
 
         Q _ U N U S E D ( a r g c ) 
 
         Q _ U N U S E D ( a r g v ) 
 
 
 
         Q T e x t S t r e a m   o u t ( s t d o u t ) ; 
 
 
 
         Q S t r i n g   s t r ( " N a   l o u c e   s e   o p t   p a s e   k oH. " ) ; 
 
 
 
         f o r e a c h ( Q C h a r   z n a k ,   s t r )   { 
 
                 o u t   < <   z n a k   < <   " * " ; 
 
         } 
 
 
 
         o u t   < <   Q t : : e n d l ; 
 
 
 
         r e t u r n   0 ; 
 
 } 
 
 
 
 * / 
 
 
