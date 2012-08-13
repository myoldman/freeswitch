/ *   
   *   F r e e S W I T C H   M o d u l a r   M e d i a   S w i t c h i n g   S o f t w a r e   L i b r a r y   /   S o f t - S w i t c h   A p p l i c a t i o n 
   *   C o p y r i g h t   ( C )   2 0 0 5 - 2 0 1 2 ,   A n t h o n y   M i n e s s a l e   I I   < a n t h m @ f r e e s w i t c h . o r g > 
   * 
   *   V e r s i o n :   M P L   1 . 1 
   * 
   *   T h e   c o n t e n t s   o f   t h i s   f i l e   a r e   s u b j e c t   t o   t h e   M o z i l l a   P u b l i c   L i c e n s e   V e r s i o n 
   *   1 . 1   ( t h e   " L i c e n s e " ) ;   y o u   m a y   n o t   u s e   t h i s   f i l e   e x c e p t   i n   c o m p l i a n c e   w i t h 
   *   t h e   L i c e n s e .   Y o u   m a y   o b t a i n   a   c o p y   o f   t h e   L i c e n s e   a t 
   *   h t t p : / / w w w . m o z i l l a . o r g / M P L / 
   * 
   *   S o f t w a r e   d i s t r i b u t e d   u n d e r   t h e   L i c e n s e   i s   d i s t r i b u t e d   o n   a n   " A S   I S "   b a s i s , 
   *   W I T H O U T   W A R R A N T Y   O F   A N Y   K I N D ,   e i t h e r   e x p r e s s   o r   i m p l i e d .   S e e   t h e   L i c e n s e 
   *   f o r   t h e   s p e c i f i c   l a n g u a g e   g o v e r n i n g   r i g h t s   a n d   l i m i t a t i o n s   u n d e r   t h e 
   *   L i c e n s e . 
   * 
   *   T h e   O r i g i n a l   C o d e   i s   F r e e S W I T C H   M o d u l a r   M e d i a   S w i t c h i n g   S o f t w a r e   L i b r a r y   /   S o f t - S w i t c h   A p p l i c a t i o n 
   * 
   *   T h e   I n i t i a l   D e v e l o p e r   o f   t h e   O r i g i n a l   C o d e   i s 
   *   A n t h o n y   M i n e s s a l e   I I   < a n t h m @ f r e e s w i t c h . o r g > 
   *   P o r t i o n s   c r e a t e d   b y   t h e   I n i t i a l   D e v e l o p e r   a r e   C o p y r i g h t   ( C ) 
   *   t h e   I n i t i a l   D e v e l o p e r .   A l l   R i g h t s   R e s e r v e d . 
   * 
   *   C o n t r i b u t o r ( s ) : 
   *   
   *   A n t h o n y   M i n e s s a l e   I I   < a n t h m @ f r e e s w i t c h . o r g > 
   *   K e n   R i c e ,   < k r i c e   a t   c o m e t s i g . c o m >     ( w o r k   s p o n s o r e d   b y   C o m e t   S i g n a l i n g   L L C ,   C o p p e r C o m ,   I n c   a n d   A s t e r i a   S o l u t i o n s   G r o u p ,   I n c ) 
   *   P a u l   D .   T i n s l e y   < p d t   a t   j a c k h a m m e r . o r g > 
   *   B r e t   M c D a n e l   < t r i x t e r   A T   0 x d e c a f b a d . c o m > 
   *   M a r c e l   B a r b u l e s c u   < m a r c e l b a r b u l e s c u @ g m a i l . c o m > 
   *   D a v i d   K n e l l   < > 
   *   E l i o t   G a b l e   < e g a b l e   A T . A T   b r o a d v o x . c o m > 
   *   L e o n   d e   R o o i j   < l e o n @ s c a r l e t - i n t e r n e t . n l > 
   * 
   * 
   *   s o f i a _ r e g . c   - -   S O F I A   S I P   E n d p o i n t   ( r e g i s t r a t i o n   c o d e ) 
   * 
   * / 
 # i n c l u d e   " m o d _ s o f i a . h " 
 
 s t a t i c   v o i d   s o f i a _ r e g _ n e w _ h a n d l e ( s o f i a _ g a t e w a y _ t   * g a t e w a y _ p t r ,   i n t   a t t a c h ) 
 { 
 	 i n t   s s _ s t a t e   =   n u a _ c a l l s t a t e _ a u t h e n t i c a t i n g ; 
 
 	 i f   ( g a t e w a y _ p t r - > n h )   { 
 	 	 n u a _ h a n d l e _ b i n d ( g a t e w a y _ p t r - > n h ,   N U L L ) ; 
 	 	 n u a _ h a n d l e _ d e s t r o y ( g a t e w a y _ p t r - > n h ) ; 
 	 	 g a t e w a y _ p t r - > n h   =   N U L L ; 
 	 	 s o f i a _ p r i v a t e _ f r e e ( g a t e w a y _ p t r - > s o f i a _ p r i v a t e ) ; 
 	 } 
 
 	 g a t e w a y _ p t r - > n h   =   n u a _ h a n d l e ( g a t e w a y _ p t r - > p r o f i l e - > n u a ,   N U L L , 
 	 	 	 	 	 	 	 	   S I P T A G _ C A L L _ I D _ S T R ( g a t e w a y _ p t r - > u u i d _ s t r ) , 
 	 	 	 	 	 	 	 	   S I P T A G _ T O _ S T R ( g a t e w a y _ p t r - > r e g i s t e r _ t o ) , 
 	 	 	 	 	 	 	 	   N U T A G _ C A L L S T A T E _ R E F ( s s _ s t a t e ) ,   S I P T A G _ F R O M _ S T R ( g a t e w a y _ p t r - > r e g i s t e r _ f r o m ) ,   T A G _ E N D ( ) ) ; 
 	 i f   ( a t t a c h )   { 
 	 	 i f   ( ! g a t e w a y _ p t r - > s o f i a _ p r i v a t e )   { 
 	 	 	 g a t e w a y _ p t r - > s o f i a _ p r i v a t e   =   m a l l o c ( s i z e o f ( * g a t e w a y _ p t r - > s o f i a _ p r i v a t e ) ) ; 
 	 	 	 s w i t c h _ a s s e r t ( g a t e w a y _ p t r - > s o f i a _ p r i v a t e ) ; 
 	 	 } 
 	 	 m e m s e t ( g a t e w a y _ p t r - > s o f i a _ p r i v a t e ,   0 ,   s i z e o f ( * g a t e w a y _ p t r - > s o f i a _ p r i v a t e ) ) ; 
 
 	 	 g a t e w a y _ p t r - > s o f i a _ p r i v a t e - > g a t e w a y   =   g a t e w a y _ p t r ; 
 	 	 n u a _ h a n d l e _ b i n d ( g a t e w a y _ p t r - > n h ,   g a t e w a y _ p t r - > s o f i a _ p r i v a t e ) ; 
 	 } 
 } 
 
 s t a t i c   v o i d   s o f i a _ r e g _ n e w _ s u b _ h a n d l e ( s o f i a _ g a t e w a y _ s u b s c r i p t i o n _ t   * g w _ s u b _ p t r ,   i n t   a t t a c h ) 
 { 	 
 	 s o f i a _ g a t e w a y _ t   * g a t e w a y _ p t r   =   g w _ s u b _ p t r - > g a t e w a y ; 
 	 c h a r   * u s e r _ v i a   =   N U L L ; 
 	 c h a r   * r e g i s t e r _ h o s t   =   s o f i a _ g l u e _ g e t _ r e g i s t e r _ h o s t ( g a t e w a y _ p t r - > r e g i s t e r _ p r o x y ) ; 
 	 i n t   s s _ s t a t e   =   n u a _ c a l l s t a t e _ a u t h e n t i c a t i n g ; 
 	 
 	 / *   c h e c k   f o r   N A T   a n d   p l a c e   a   V i a   h e a d e r   i f   n e c e s s a r y   ( h o s t n a m e   o r   n o n - l o c a l   I P )   * / 
 	 i f   ( r e g i s t e r _ h o s t   & &   s o f i a _ g l u e _ c h e c k _ n a t ( g a t e w a y _ p t r - > p r o f i l e ,   r e g i s t e r _ h o s t ) )   { 
 	 	 u s e r _ v i a   =   s o f i a _ g l u e _ c r e a t e _ e x t e r n a l _ v i a ( N U L L ,   g a t e w a y _ p t r - > p r o f i l e ,   g a t e w a y _ p t r - > r e g i s t e r _ t r a n s p o r t ) ; 
 	 } 
 	 	 
 	 i f   ( g w _ s u b _ p t r - > n h )   { 
 	 	 n u a _ h a n d l e _ b i n d ( g w _ s u b _ p t r - > n h ,   N U L L ) ; 
 	 	 n u a _ h a n d l e _ d e s t r o y ( g w _ s u b _ p t r - > n h ) ; 
 	 	 g w _ s u b _ p t r - > n h   =   N U L L ; 
 	 	 s o f i a _ p r i v a t e _ f r e e ( g a t e w a y _ p t r - > s o f i a _ p r i v a t e ) ; 
 	 } 
 	 	 
 	 g w _ s u b _ p t r - > n h   =   n u a _ h a n d l e ( g a t e w a y _ p t r - > p r o f i l e - > n u a ,   N U L L , 
 	 	 	 	 	 	 	 	 	   N U T A G _ U R L ( g a t e w a y _ p t r - > r e g i s t e r _ p r o x y ) , 	 	 	 	 	 	 	 	 	   
 	 	 	 	 	 	 	 	 	   T A G _ I F ( u s e r _ v i a ,   S I P T A G _ V I A _ S T R ( u s e r _ v i a ) ) , 
 	 	 	 	 	 	 	 	 	   S I P T A G _ T O _ S T R ( g a t e w a y _ p t r - > r e g i s t e r _ t o ) , 
 	 	 	 	 	 	 	 	 	   N U T A G _ C A L L S T A T E _ R E F ( s s _ s t a t e ) ,   S I P T A G _ F R O M _ S T R ( g a t e w a y _ p t r - > r e g i s t e r _ f r o m ) ,   T A G _ E N D ( ) ) ; 
 	 i f   ( a t t a c h )   { 
 	 	 i f   ( ! g a t e w a y _ p t r - > s o f i a _ p r i v a t e )   { 
 	 	 	 g a t e w a y _ p t r - > s o f i a _ p r i v a t e   =   m a l l o c ( s i z e o f ( * g a t e w a y _ p t r - > s o f i a _ p r i v a t e ) ) ; 
 	 	 	 s w i t c h _ a s s e r t ( g a t e w a y _ p t r - > s o f i a _ p r i v a t e ) ; 
 	 	 } 
 	 	 m e m s e t ( g a t e w a y _ p t r - > s o f i a _ p r i v a t e ,   0 ,   s i z e o f ( * g a t e w a y _ p t r - > s o f i a _ p r i v a t e ) ) ; 
 
 	 	 g a t e w a y _ p t r - > s o f i a _ p r i v a t e - > g a t e w a y   =   g a t e w a y _ p t r ; 
 	 	 n u a _ h a n d l e _ b i n d ( g w _ s u b _ p t r - > n h ,   g a t e w a y _ p t r - > s o f i a _ p r i v a t e ) ; 
 	 } 
 
 	 s w i t c h _ s a f e _ f r e e ( r e g i s t e r _ h o s t ) ; 
 	 s w i t c h _ s a f e _ f r e e ( u s e r _ v i a ) ; 
 } 
 
 s t a t i c   v o i d   s o f i a _ r e g _ k i l l _ s u b ( s o f i a _ g a t e w a y _ s u b s c r i p t i o n _ t   * g w _ s u b _ p t r ) 
 { 	 
 	 s o f i a _ g a t e w a y _ t   * g a t e w a y _ p t r   =   g w _ s u b _ p t r - > g a t e w a y ; 
 
 	 i f   ( g w _ s u b _ p t r - > n h )   { 
 	 	 n u a _ h a n d l e _ b i n d ( g w _ s u b _ p t r - > n h ,   N U L L ) ; 
 	 } 
 	 
 	 i f   ( g w _ s u b _ p t r - > s t a t e   ! =   S U B _ S T A T E _ S U B E D   & &   g w _ s u b _ p t r - > s t a t e   ! =   S U B _ S T A T E _ U N S U B S C R I B E )   { 
 	 	 i f   ( g w _ s u b _ p t r - > n h )   { 
 	 	 	 n u a _ h a n d l e _ d e s t r o y ( g w _ s u b _ p t r - > n h ) ; 
 	 	 	 g w _ s u b _ p t r - > n h   =   N U L L ; 
 	 	 } 
 	 	 r e t u r n ; 
 	 } 
 
 	 i f   ( g w _ s u b _ p t r - > n h )   { 
 	 	 s w i t c h _ l o g _ p r i n t f ( S W I T C H _ C H A N N E L _ L O G ,   S W I T C H _ L O G _ N O T I C E ,   " U N - S u b b i n g   % s   % s \ n " ,   g a t e w a y _ p t r - > n a m e ,   g w _ s u b _ p t r - > e v e n t ) ; 
 	 	 n u a _ u n s u b s c r i b e ( g w _ s u b _ p t r - > n h ,   N U T A G _ U R L ( g w _ s u b _ p t r - > r e q u e s t _ u r i ) ,   T A G _ E N D ( ) ) ; 
 	 } 
 } 
 
 s t a t i c   v o i d   s o f i a _ r e g _ k i l l _ r e g ( s o f i a _ g a t e w a y _ t   * g a t e w a y _ p t r ) 
 { 
 
 	 i f   ( ! g a t e w a y _ p t r - > n h )   { 
 	 	 r e t u r n ; 
 	 } 
 
 	 i f   ( g a t e w a y _ p t r - > s t a t e   = =   R E G _ S T A T E _ R E G E D   | |   g a t e w a y _ p t r - > s t a t e   = =   R E G _ S T A T E _ U N R E G I S T E R )   { 
 	 	 s w i t c h _ l o g _ p r i n t f ( S W I T C H _ C H A N N E L _ L O G ,   S W I T C H _ L O G _ N O T I C E ,   " U N - R e g i s t e r i n g   % s \ n " ,   g a t e w a y _ p t r - > n a m e ) ; 
 	 	 n u a _ u n r e g i s t e r ( g a t e w a y _ p t r - > n h ,   N U T A G _ U R L ( g a t e w a y _ p t r - > r e g i s t e r _ u r l ) ,   N U T A G _ R E G I S T R A R ( g a t e w a y _ p t r - > r e g i s t e r _ p r o x y ) ,   T A G _ E N D ( ) ) ; 
 	 }   e l s e   { 
 	 	 s w i t c h _ l o g _ p r i n t f ( S W I T C H _ C H A N N E L _ L O G ,   S W I T C H _ L O G _ N O T I C E ,   " D e s t r o y i n g   r e g i s t r a t i o n   h a n d l e   f o r   % s \ n " ,   g a t e w a y _ p t r - > n a m e ) ; 
 	 } 
 
 	 n u a _ h a n d l e _ b i n d ( g a t e w a y _ p t r - > n h ,   N U L L ) ; 
 	 n u a _ h a n d l e _ d e s t r o y ( g a t e w a y _ p t r - > n h ) ; 
 	 g a t e w a y _ p t r - > n h   =   N U L L ; 
 } 
 
 v o i d   s o f i a _ r e g _ f i r e _ c u s t o m _ g a t e w a y _ s t a t e _ e v e n t ( s o f i a _ g a t e w a y _ t   * g a t e w a y ,   i n t   s t a t u s ,   c o n s t   c h a r   * p h r a s e ) 
 { 
 	 s w i t c h _ e v e n t _ t   * s _ e v e n t ; 
 	 i f   ( s w i t c h _ e v e n t _ c r e a t e _ s u b c l a s s ( & s _ e v e n t ,   S W I T C H _ E V E N T _ C U S T O M ,   M Y _ E V E N T _ G A T E W A Y _ S T A T E )   = =   S W I T C H _ S T A T U S _ S U C C E S S )   { 
 	 	 s w i t c h _ e v e n t _ a d d _ h e a d e r _ s t r i n g ( s _ e v e n t ,   S W I T C H _ S T A C K _ B O T T O M ,   " G a t e w a y " ,   g a t e w a y - > n a m e ) ; 
 	 	 s w i t c h _ e v e n t _ a d d _ h e a d e r _ s t r i n g ( s _ e v e n t ,   S W I T C H _ S T A C K _ B O T T O M ,   " S t a t e " ,   s o f i a _ s t a t e _ s t r i n g ( g a t e w a y - > s t a t e ) ) ; 
 	 	 s w i t c h _ e v e n t _ a d d _ h e a d e r _ s t r i n g ( s _ e v e n t ,   S W I T C H _ S T A C K _ B O T T O M ,   " P i n g - S t a t u s " ,   s o f i a _ g a t e w a y _ s t a t u s _ n a m e ( g a t e w a y - > s t a t u s ) ) ; 
 	 	 i f   ( ! z s t r ( p h r a s e ) )   { 
 	 	 	 s w i t c h _ e v e n t _ a d d _ h e a d e r _ s t r i n g ( s _ e v e n t ,   S W I T C H _ S T A C K _ B O T T O M ,   " P h r a s e " ,   p h r a s e ) ; 
 	 	 } 
 	 	 i f   ( s t a t u s )   { 
 	 	 	 s w i t c h _ e v e n t _ a d d _ h e a d e r ( s _ e v e n t ,   S W I T C H _ S T A C K _ B O T T O M ,   " S t a t u s " ,   " % d " ,   s t a t u s ) ; 
 	 	 } 
 	 	 s w i t c h _ e v e n t _ f i r e ( & s _ e v e n t ) ; 
 	 } 
 } 
 
 v o i d   s o f i a _ r e g _ u n r e g i s t e r ( s o f i a _ p r o f i l e _ t   * p r o f i l e ) 
 { 
 	 s o f i a _ g a t e w a y _ t   * g a t e w a y _ p t r ; 
 	 s o f i a _ g a t e w a y _ s u b s c r i p t i o n _ t   * g w _ s u b _ p t r ; 
 
 	 s w i t c h _ m u t e x _ l o c k ( m o d _ s o f i a _ g l o b a l s . h a s h _ m u t e x ) ; 
 	 f o r   ( g a t e w a y _ p t r   =   p r o f i l e - > g a t e w a y s ;   g a t e w a y _ p t r ;   g a t e w a y _ p t r   =   g a t e w a y _ p t r - > n e x t )   { 
 
 	 	 i f   ( g a t e w a y _ p t r - > n h )   { 
 	 	 	 n u a _ h a n d l e _ b i n d ( g a t e w a y _ p t r - > n h ,   N U L L ) ; 
 	 	 } 
 
 	 	 i f   ( g a t e w a y _ p t r - > s o f i a _ p r i v a t e )   { 
 	 	 	 s o f i a _ p r i v a t e _ f r e e ( g a t e w a y _ p t r - > s o f i a _ p r i v a t e ) ; 
 	 	 } 
 
 	 	 i f   ( g a t e w a y _ p t r - > s t a t e   = =   R E G _ S T A T E _ R E G E D )   { 
 	 	 	 s o f i a _ r e g _ k i l l _ r e g ( g a t e w a y _ p t r ) ; 
 	 	 } 
 
 	 	 f o r   ( g w _ s u b _ p t r   =   g a t e w a y _ p t r - > s u b s c r i p t i o n s ;   g w _ s u b _ p t r ;   g w _ s u b _ p t r   =   g w _ s u b _ p t r - > n e x t )   { 
 	 	 	 i f   ( g w _ s u b _ p t r - > s t a t e   = =   S U B _ S T A T E _ S U B E D )   { 
 	 	 	 	 s o f i a _ r e g _ k i l l _ s u b ( g w _ s u b _ p t r ) ; 
 	 	 	 } 
 	 	 } 
 
 	 } 
 	 s w i t c h _ m u t e x _ u n l o c k ( m o d _ s o f i a _ g l o b a l s . h a s h _ m u t e x ) ; 
 } 
 
 v o i d   s o f i a _ s u b _ c h e c k _ g a t e w a y ( s o f i a _ p r o f i l e _ t   * p r o f i l e ,   t i m e _ t   n o w ) 
 { 
 	 / *   N O T E :   A   l o t   o f   t h e   m e c h a n i s m   i n   p l a c e   h e r e   f o r   r e f r e s h i n g   s u b s c r i p t i o n s   i s 
 	   *   p r e t t y   m u c h   r e d u n d a n t ,   a s   t h e   s o f i a   s t a c k   t a k e s   i t   u p o n   i t s e l f   t o 
 	   *   r e f r e s h   s u b s c r i p t i o n s   o n   i t s   o w n ,   b a s e d   o n   t h e   v a l u e   o f   t h e   E x p i r e s 
 	   *   h e a d e r   ( w h i c h   w e   c o n t r o l   i n   t h e   o u t g o i n g   s u b s c r i p t i o n   r e q u e s t ) 
 	   * / 
 	 s o f i a _ g a t e w a y _ t   * g a t e w a y _ p t r ; 
 
 	 s w i t c h _ m u t e x _ l o c k ( p r o f i l e - > g w _ m u t e x ) ; 
 	 f o r   ( g a t e w a y _ p t r   =   p r o f i l e - > g a t e w a y s ;   g a t e w a y _ p t r ;   g a t e w a y _ p t r   =   g a t e w a y _ p t r - > n e x t )   { 
 	 	 s o f i a _ g a t e w a y _ s u b s c r i p t i o n _ t   * g w _ s u b _ p t r ; 
 
 	 	 f o r   ( g w _ s u b _ p t r   =   g a t e w a y _ p t r - > s u b s c r i p t i o n s ;   g w _ s u b _ p t r ;   g w _ s u b _ p t r   =   g w _ s u b _ p t r - > n e x t )   { 
 	 	 	 s u b _ s t a t e _ t   o s t a t e   =   g w _ s u b _ p t r - > s t a t e ; 
 
 	 	 	 i f   ( ! n o w )   { 
 	 	 	 	 g w _ s u b _ p t r - > s t a t e   =   o s t a t e   =   S U B _ S T A T E _ U N S U B E D ; 
 	 	 	 	 g w _ s u b _ p t r - > e x p i r e s _ s t r   =   " 0 " ; 
 	 	 	 } 
 
 	 	 	 / / g a t e w a y _ p t r - > s u b _ s t a t e   =   g w _ s u b _ p t r - > s t a t e ; 
 
 	 	 	 s w i t c h   ( o s t a t e )   { 
 	 	 	 c a s e   S U B _ S T A T E _ N O S U B : 
 	 	 	 	 b r e a k ; 
 	 	 	 c a s e   S U B _ S T A T E _ S U B S C R I B E : 
 	 	 	 	 g w _ s u b _ p t r - > e x p i r e s   =   n o w   +   g w _ s u b _ p t r - > f r e q ; 
 	 	 	 	 g w _ s u b _ p t r - > s t a t e   =   S U B _ S T A T E _ S U B E D ; 
 	 	 	 	 b r e a k ; 
 	 	 	 c a s e   S U B _ S T A T E _ U N S U B S C R I B E : 
 	 	 	 	 g w _ s u b _ p t r - > s t a t e   =   S U B _ S T A T E _ N O S U B ; 
 	 	 	 	 s o f i a _ r e g _ k i l l _ s u b ( g w _ s u b _ p t r ) ; 
 	 	 	 	 b r e a k ; 
 	 	 	 c a s e   S U B _ S T A T E _ U N S U B E D : 
 
 	 	 	 	 s o f i a _ r e g _ n e w _ s u b _ h a n d l e ( g w _ s u b _ p t r ,   1 ) ; 
 	 	 	 	 
 	 	 	 	 s w i t c h _ l o g _ p r i n t f ( S W I T C H _ C H A N N E L _ L O G ,   S W I T C H _ L O G _ D E B U G ,   " s u b s c r i b i n g   t o   [ % s ]   o n   g a t e w a y   [ % s ] \ n " ,   g w _ s u b _ p t r - > e v e n t ,   g a t e w a y _ p t r - > n a m e ) ; 
 	 	 	 	 
 	 	 	 	 i f   ( n o w )   { 
 	 	 	 	 	 n u a _ s u b s c r i b e ( g w _ s u b _ p t r - > n h , 
 	 	 	 	 	 	 	 	     N U T A G _ U R L ( g w _ s u b _ p t r - > r e q u e s t _ u r i ) , 	 	 	 	 	 	 	 	     
 	 	 	 	 	 	 	 	     S I P T A G _ E V E N T _ S T R ( g w _ s u b _ p t r - > e v e n t ) , 
 	 	 	 	 	 	 	 	     T A G _ I F ( s t r c m p ( g w _ s u b _ p t r - > c o n t e n t _ t y p e ,   " N O _ C O N T E N T _ T Y P E " ) ,   S I P T A G _ A C C E P T _ S T R ( g w _ s u b _ p t r - > c o n t e n t _ t y p e ) ) , 
 	 	 	 	 	 	 	 	     S I P T A G _ T O _ S T R ( g a t e w a y _ p t r - > r e g i s t e r _ f r o m ) , 
 	 	 	 	 	 	 	 	     S I P T A G _ F R O M _ S T R ( g a t e w a y _ p t r - > r e g i s t e r _ f r o m ) , 
 	 	 	 	 	 	 	 	     S I P T A G _ C O N T A C T _ S T R ( g a t e w a y _ p t r - > r e g i s t e r _ c o n t a c t ) , 
 	 	 	 	 	 	 	 	     S I P T A G _ E X P I R E S _ S T R ( g w _ s u b _ p t r - > e x p i r e s _ s t r ) , 	 / *   s o f i a   s t a c k   b a s e s   i t s   a u t o - r e f r e s h   s t u f f   o n   t h i s   * / 
 	 	 	 	 	 	 	 	     T A G _ N U L L ( ) ) ; 
 	 	 	 	 	 g w _ s u b _ p t r - > r e t r y   =   n o w   +   g w _ s u b _ p t r - > r e t r y _ s e c o n d s ; 
 	 	 	 	 }   e l s e   { 
 	 	 	 	 	 n u a _ u n s u b s c r i b e ( g w _ s u b _ p t r - > n h , 	 	 	 	 	 	 	 	 	 
 	 	 	 	 	 	 	 	 	 N U T A G _ U R L ( g w _ s u b _ p t r - > r e q u e s t _ u r i ) , 
 	 	 	 	 	 	 	 	 	 S I P T A G _ E V E N T _ S T R ( g w _ s u b _ p t r - > e v e n t ) , 
 	 	 	 	 	 	 	 	 	 T A G _ I F ( s t r c m p ( g w _ s u b _ p t r - > c o n t e n t _ t y p e ,   " N O _ C O N T E N T _ T Y P E " ) ,   S I P T A G _ A C C E P T _ S T R ( g w _ s u b _ p t r - > c o n t e n t _ t y p e ) ) , 
 	 	 	 	 	 	 	 	 	 S I P T A G _ F R O M _ S T R ( g a t e w a y _ p t r - > r e g i s t e r _ f r o m ) , 
 	 	 	 	 	 	 	 	 	 S I P T A G _ T O _ S T R ( g a t e w a y _ p t r - > r e g i s t e r _ f r o m ) , 
 	 	 	 	 	 	 	 	 	 S I P T A G _ C O N T A C T _ S T R ( g a t e w a y _ p t r - > r e g i s t e r _ c o n t a c t ) ,   S I P T A G _ E X P I R E S _ S T R ( g w _ s u b _ p t r - > e x p i r e s _ s t r ) ,   T A G _ N U L L ( ) ) ; 
 	 	 	 	 } 
 	 	 	 	 g w _ s u b _ p t r - > s t a t e   =   S U B _ S T A T E _ T R Y I N G ; 
 	 	 	 	 b r e a k ; 
 
 	 	 	 c a s e   S U B _ S T A T E _ F A I L E D : 
 	 	 	 c a s e   S U B _ S T A T E _ T R Y I N G : 
 	 	 	 	 i f   ( g w _ s u b _ p t r - > r e t r y   & &   n o w   > =   g w _ s u b _ p t r - > r e t r y )   { 
 	 	 	 	 	 g w _ s u b _ p t r - > s t a t e   =   S U B _ S T A T E _ U N S U B E D ; 
 	 	 	 	 	 g w _ s u b _ p t r - > r e t r y   =   0 ; 
 	 	 	 	 } 
 	 	 	 	 b r e a k ; 
 	 	 	 d e f a u l t : 
 	 	 	 	 i f   ( n o w   > =   g w _ s u b _ p t r - > e x p i r e s )   { 
 	 	 	 	 	 g w _ s u b _ p t r - > s t a t e   =   S U B _ S T A T E _ U N S U B E D ; 
 	 	 	 	 } 
 	 	 	 	 b r e a k ; 
 	 	 	 } 
 
 	 	 } 
 	 } 
 	 s w i t c h _ m u t e x _ u n l o c k ( p r o f i l e - > g w _ m u t e x ) ; 
 } 
 
 v o i d   s o f i a _ r e g _ c h e c k _ g a t e w a y ( s o f i a _ p r o f i l e _ t   * p r o f i l e ,   t i m e _ t   n o w ) 
 { 
 	 s o f i a _ g a t e w a y _ t   * c h e c k ,   * g a t e w a y _ p t r ,   * l a s t   =   N U L L ; 
 	 s w i t c h _ e v e n t _ t   * e v e n t ; 
 	 i n t   d e l t a   =   0 ; 
 
 	 s w i t c h _ m u t e x _ l o c k ( p r o f i l e - > g w _ m u t e x ) ; 
 	 f o r   ( g a t e w a y _ p t r   =   p r o f i l e - > g a t e w a y s ;   g a t e w a y _ p t r ;   g a t e w a y _ p t r   =   g a t e w a y _ p t r - > n e x t )   { 
 	 	 i f   ( g a t e w a y _ p t r - > d e l e t e d )   { 
 	 	 	 i f   ( ( c h e c k   =   s w i t c h _ c o r e _ h a s h _ f i n d ( m o d _ s o f i a _ g l o b a l s . g a t e w a y _ h a s h ,   g a t e w a y _ p t r - > n a m e ) )   & &   c h e c k   = =   g a t e w a y _ p t r )   { 
 	 	 	 	 c h a r   * p k e y   =   s w i t c h _ m p r i n t f ( " % s : : % s " ,   p r o f i l e - > n a m e ,   g a t e w a y _ p t r - > n a m e ) ; 
 	 	 	 	 s w i t c h _ a s s e r t ( p k e y ) ; 
 	 	 	 	 s w i t c h _ l o g _ p r i n t f ( S W I T C H _ C H A N N E L _ L O G ,   S W I T C H _ L O G _ D E B U G ,   " R e m o v i n g   g a t e w a y   % s   f r o m   h a s h . \ n " ,   p k e y ) ; 
 	 	 	 	 s w i t c h _ c o r e _ h a s h _ d e l e t e ( m o d _ s o f i a _ g l o b a l s . g a t e w a y _ h a s h ,   p k e y ) ; 
 	 	 	 	 s w i t c h _ c o r e _ h a s h _ d e l e t e ( m o d _ s o f i a _ g l o b a l s . g a t e w a y _ h a s h ,   g a t e w a y _ p t r - > n a m e ) ; 
 	 	 	 	 f r e e ( p k e y ) ; 
 	 	 	 } 
 	 	 	 
 	 	 	 i f   ( g a t e w a y _ p t r - > s t a t e   = =   R E G _ S T A T E _ N O R E G )   { 
 
 	 	 	 	 i f   ( l a s t )   { 
 	 	 	 	 	 l a s t - > n e x t   =   g a t e w a y _ p t r - > n e x t ; 
 	 	 	 	 }   e l s e   { 
 	 	 	 	 	 p r o f i l e - > g a t e w a y s   =   g a t e w a y _ p t r - > n e x t ; 
 	 	 	 	 } 
 	 	 	 
 	 	 	 	 s w i t c h _ l o g _ p r i n t f ( S W I T C H _ C H A N N E L _ L O G ,   S W I T C H _ L O G _ N O T I C E ,   " D e l e t e d   g a t e w a y   % s \ n " ,   g a t e w a y _ p t r - > n a m e ) ; 
 	 	 	 	 i f   ( s w i t c h _ e v e n t _ c r e a t e _ s u b c l a s s ( & e v e n t ,   S W I T C H _ E V E N T _ C U S T O M ,   M Y _ E V E N T _ G A T E W A Y _ D E L )   = =   S W I T C H _ S T A T U S _ S U C C E S S )   { 
 	 	 	 	 	 s w i t c h _ e v e n t _ a d d _ h e a d e r _ s t r i n g ( e v e n t ,   S W I T C H _ S T A C K _ B O T T O M ,   " p r o f i l e - n a m e " ,   g a t e w a y _ p t r - > p r o f i l e - > n a m e ) ; 
 	 	 	 	 	 s w i t c h _ e v e n t _ a d d _ h e a d e r _ s t r i n g ( e v e n t ,   S W I T C H _ S T A C K _ B O T T O M ,   " G a t e w a y " ,   g a t e w a y _ p t r - > n a m e ) ; 
 	 	 	 	 	 s w i t c h _ e v e n t _ f i r e ( & e v e n t ) ; 
 	 	 	 	 } 
 	 	 	 	 i f   ( g a t e w a y _ p t r - > o b _ v a r s )   { 
 	 	 	 	 	 s w i t c h _ e v e n t _ d e s t r o y ( & g a t e w a y _ p t r - > o b _ v a r s ) ; 
 	 	 	 	 } 
 	 	 	 	 i f   ( g a t e w a y _ p t r - > i b _ v a r s )   { 
 	 	 	 	 	 s w i t c h _ e v e n t _ d e s t r o y ( & g a t e w a y _ p t r - > i b _ v a r s ) ; 
 	 	 	 	 } 
 	 	 	 } 
 	 	 }   e l s e   { 
 	 	 	 l a s t   =   g a t e w a y _ p t r ; 
 	 	 } 
 	 } 
 
 	 f o r   ( g a t e w a y _ p t r   =   p r o f i l e - > g a t e w a y s ;   g a t e w a y _ p t r ;   g a t e w a y _ p t r   =   g a t e w a y _ p t r - > n e x t )   { 
 	 	 r e g _ s t a t e _ t   o s t a t e   =   g a t e w a y _ p t r - > s t a t e ; 
 	 	 c h a r   * u s e r _ v i a   =   N U L L ; 
 	 	 c h a r   * r e g i s t e r _ h o s t   =   N U L L ; 
 
 	 	 i f   ( ! n o w )   { 
 	 	 	 g a t e w a y _ p t r - > s t a t e   =   o s t a t e   =   R E G _ S T A T E _ U N R E G E D ; 
 	 	 	 g a t e w a y _ p t r - > e x p i r e s _ s t r   =   " 0 " ; 
 	 	 } 
 
 	 	 i f   ( g a t e w a y _ p t r - > p i n g   & &   ! g a t e w a y _ p t r - > p i n g i n g   & &   ( n o w   > =   g a t e w a y _ p t r - > p i n g   & &   ( o s t a t e   = =   R E G _ S T A T E _ N O R E G   | |   o s t a t e   = =   R E G _ S T A T E _ R E G E D ) )   & & 
 	 	 	 ! g a t e w a y _ p t r - > d e l e t e d )   { 
 	 	 	 n u a _ h a n d l e _ t   * n h   =   n u a _ h a n d l e ( p r o f i l e - > n u a ,   N U L L ,   N U T A G _ U R L ( g a t e w a y _ p t r - > r e g i s t e r _ u r l ) ,   T A G _ E N D ( ) ) ; 
 	 	 	 s o f i a _ p r i v a t e _ t   * p v t ; 
 
 	 	 	 r e g i s t e r _ h o s t   =   s o f i a _ g l u e _ g e t _ r e g i s t e r _ h o s t ( g a t e w a y _ p t r - > r e g i s t e r _ p r o x y ) ; 
 
 	 	 	 / *   c h e c k   f o r   N A T   a n d   p l a c e   a   V i a   h e a d e r   i f   n e c e s s a r y   ( h o s t n a m e   o r   n o n - l o c a l   I P )   * / 
 	 	 	 i f   ( r e g i s t e r _ h o s t   & &   s o f i a _ g l u e _ c h e c k _ n a t ( g a t e w a y _ p t r - > p r o f i l e ,   r e g i s t e r _ h o s t ) )   { 
 	 	 	 	 u s e r _ v i a   =   s o f i a _ g l u e _ c r e a t e _ e x t e r n a l _ v i a ( N U L L ,   g a t e w a y _ p t r - > p r o f i l e ,   g a t e w a y _ p t r - > r e g i s t e r _ t r a n s p o r t ) ; 
 	 	 	 } 
 
 	 	 	 s w i t c h _ s a f e _ f r e e ( r e g i s t e r _ h o s t ) ; 
 
 	 	 	 p v t   =   m a l l o c ( s i z e o f ( * p v t ) ) ; 
 	 	 	 s w i t c h _ a s s e r t ( p v t ) ; 
 	 	 	 m e m s e t ( p v t ,   0 ,   s i z e o f ( * p v t ) ) ; 
 	 	 	 p v t - > d e s t r o y _ n h   =   1 ; 
 	 	 	 p v t - > d e s t r o y _ m e   =   1 ; 
 	 	 	 s w i t c h _ c o p y _ s t r i n g ( p v t - > g a t e w a y _ n a m e ,   g a t e w a y _ p t r - > n a m e ,   s i z e o f ( p v t - > g a t e w a y _ n a m e ) ) ; 
 	 	 	 n u a _ h a n d l e _ b i n d ( n h ,   p v t ) ; 
 
 	 	 	 g a t e w a y _ p t r - > p i n g i n g   =   1 ; 
 	 	 	 n u a _ o p t i o n s ( n h , 
 	 	 	 	 	 	 T A G _ I F ( g a t e w a y _ p t r - > r e g i s t e r _ s t i c k y _ p r o x y ,   N U T A G _ P R O X Y ( g a t e w a y _ p t r - > r e g i s t e r _ s t i c k y _ p r o x y ) ) , 
 	 	 	 	 	 	 T A G _ I F ( u s e r _ v i a ,   S I P T A G _ V I A _ S T R ( u s e r _ v i a ) ) , 
 	 	 	 	 	 	 S I P T A G _ T O _ S T R ( g a t e w a y _ p t r - > o p t i o n s _ t o _ u r i ) ,   S I P T A G _ F R O M _ S T R ( g a t e w a y _ p t r - > o p t i o n s _ f r o m _ u r i ) , 
 	 	 	 	 	 	 T A G _ I F ( g a t e w a y _ p t r - > o p t i o n s _ u s e r _ a g e n t ,   S I P T A G _ U S E R _ A G E N T _ S T R ( g a t e w a y _ p t r - > o p t i o n s _ u s e r _ a g e n t ) ) , 
 	 	 	 	 	 	 T A G _ E N D ( ) ) ; 
 
 	 	 	 s w i t c h _ s a f e _ f r e e ( u s e r _ v i a ) ; 
 	 	 	 u s e r _ v i a   =   N U L L ; 
 	 	 } 
 
 	 	 s w i t c h   ( o s t a t e )   { 
 	 	 c a s e   R E G _ S T A T E _ N O R E G : 
 	 	 	 i f   ( ! g a t e w a y _ p t r - > p i n g   & &   ! g a t e w a y _ p t r - > p i n g i n g )   { 
 	 	 	 	 g a t e w a y _ p t r - > s t a t u s   =   S O F I A _ G A T E W A Y _ U P ; 
 	 	 	 } 
 	 	 	 b r e a k ; 
 	 	 c a s e   R E G _ S T A T E _ R E G I S T E R : 
 	 	 	 i f   ( p r o f i l e - > d e b u g )   { 
 	 	 	 	 s w i t c h _ l o g _ p r i n t f ( S W I T C H _ C H A N N E L _ L O G ,   S W I T C H _ L O G _ D E B U G ,   " R e g i s t e r e d   % s \ n " ,   g a t e w a y _ p t r - > n a m e ) ; 
 	 	 	 } 
 
 	 	 	 g a t e w a y _ p t r - > f a i l u r e s   =   0 ; 
 
 	 	 	 i f   ( g a t e w a y _ p t r - > f r e q   >   3 0 )   { 
 	 	 	 	 d e l t a   =   ( g a t e w a y _ p t r - > f r e q   -   1 5 ) ; 
 	 	 	 }   e l s e   { 
 	 	 	 	 d e l t a   =   ( g a t e w a y _ p t r - > f r e q   /   2 ) ; 
 	 	 	 } 
 
 	 	 	 i f   ( d e l t a   <   1 )   { 
 	 	 	 	 d e l t a   =   1 ; 
 	 	 	 } 
 	 	 	 
 	 	 	 g a t e w a y _ p t r - > e x p i r e s   =   n o w   +   d e l t a ; 
 
 	 	 	 g a t e w a y _ p t r - > s t a t e   =   R E G _ S T A T E _ R E G E D ; 
 	 	 	 g a t e w a y _ p t r - > s t a t u s   =   S O F I A _ G A T E W A Y _ U P ; 
 	 	 	 b r e a k ; 
 
 	 	 c a s e   R E G _ S T A T E _ U N R E G I S T E R : 
 	 	 	 s o f i a _ r e g _ k i l l _ r e g ( g a t e w a y _ p t r ) ; 
 	 	 	 g a t e w a y _ p t r - > s t a t e   =   R E G _ S T A T E _ N O R E G ; 
 	 	 	 g a t e w a y _ p t r - > s t a t u s   =   S O F I A _ G A T E W A Y _ D O W N ; 
 	 	 	 b r e a k ; 
 	 	 c a s e   R E G _ S T A T E _ U N R E G E D : 
 	 	 	 g a t e w a y _ p t r - > r e t r y   =   0 ; 
 
 	 	 	 i f   ( ! g a t e w a y _ p t r - > n h )   { 
 	 	 	 	 s o f i a _ r e g _ n e w _ h a n d l e ( g a t e w a y _ p t r ,   n o w   ?   1   :   0 ) ; 
 	 	 	 } 
 
 	 	 	 r e g i s t e r _ h o s t   =   s o f i a _ g l u e _ g e t _ r e g i s t e r _ h o s t ( g a t e w a y _ p t r - > r e g i s t e r _ p r o x y ) ; 
 
 	 	 	 / *   c h e c k   f o r   N A T   a n d   p l a c e   a   V i a   h e a d e r   i f   n e c e s s a r y   ( h o s t n a m e   o r   n o n - l o c a l   I P )   * / 
 	 	 	 i f   ( r e g i s t e r _ h o s t   & &   s o f i a _ g l u e _ c h e c k _ n a t ( g a t e w a y _ p t r - > p r o f i l e ,   r e g i s t e r _ h o s t ) )   { 
 	 	 	 	 u s e r _ v i a   =   s o f i a _ g l u e _ c r e a t e _ e x t e r n a l _ v i a ( N U L L ,   g a t e w a y _ p t r - > p r o f i l e ,   g a t e w a y _ p t r - > r e g i s t e r _ t r a n s p o r t ) ; 
 	 	 	 } 
 
 	 	 	 s w i t c h _ s a f e _ f r e e ( r e g i s t e r _ h o s t ) ; 
 
 	 	 	 s w i t c h _ l o g _ p r i n t f ( S W I T C H _ C H A N N E L _ L O G ,   S W I T C H _ L O G _ N O T I C E ,   " R e g i s t e r i n g   % s \ n " ,   g a t e w a y _ p t r - > n a m e ) ; 
 
 	 	 	 i f   ( n o w )   { 
 	 	 	 	 n u a _ r e g i s t e r ( g a t e w a y _ p t r - > n h , 
 	 	 	 	 	 	 	   N U T A G _ U R L ( g a t e w a y _ p t r - > r e g i s t e r _ u r l ) , 
 	 	 	 	 	 	 	   T A G _ I F ( g a t e w a y _ p t r - > r e g i s t e r _ s t i c k y _ p r o x y ,   N U T A G _ P R O X Y ( g a t e w a y _ p t r - > r e g i s t e r _ s t i c k y _ p r o x y ) ) , 
 	 	 	 	 	 	 	   T A G _ I F ( u s e r _ v i a ,   S I P T A G _ V I A _ S T R ( u s e r _ v i a ) ) , 
 	 	 	 	 	 	 	   S I P T A G _ T O _ S T R ( g a t e w a y _ p t r - > d i s t i n c t _ t o   ?   g a t e w a y _ p t r - > r e g i s t e r _ t o   :   g a t e w a y _ p t r - > r e g i s t e r _ f r o m ) , 
 	 	 	 	 	 	 	   S I P T A G _ C O N T A C T _ S T R ( g a t e w a y _ p t r - > r e g i s t e r _ c o n t a c t ) , 
 	 	 	 	 	 	 	   S I P T A G _ F R O M _ S T R ( g a t e w a y _ p t r - > r e g i s t e r _ f r o m ) , 
 	 	 	 	 	 	 	   S I P T A G _ E X P I R E S _ S T R ( g a t e w a y _ p t r - > e x p i r e s _ s t r ) , 
 	 	 	 	 	 	 	   N U T A G _ R E G I S T R A R ( g a t e w a y _ p t r - > r e g i s t e r _ p r o x y ) , 
 	 	 	 	 	 	 	   N U T A G _ O U T B O U N D ( " n o - o p t i o n s - k e e p a l i v e " ) ,   N U T A G _ O U T B O U N D ( " n o - v a l i d a t e " ) ,   N U T A G _ K E E P A L I V E ( 0 ) ,   T A G _ N U L L ( ) ) ; 
 	 	 	 	 g a t e w a y _ p t r - > r e t r y   =   n o w   +   g a t e w a y _ p t r - > r e t r y _ s e c o n d s ; 
 	 	 	 }   e l s e   { 
 	 	 	 	 g a t e w a y _ p t r - > s t a t u s   =   S O F I A _ G A T E W A Y _ D O W N ; 
 	 	 	 	 n u a _ u n r e g i s t e r ( g a t e w a y _ p t r - > n h , 
 	 	 	 	 	 	 	       N U T A G _ U R L ( g a t e w a y _ p t r - > r e g i s t e r _ u r l ) , 
 	 	 	 	 	 	 	       T A G _ I F ( g a t e w a y _ p t r - > r e g i s t e r _ s t i c k y _ p r o x y ,   N U T A G _ P R O X Y ( g a t e w a y _ p t r - > r e g i s t e r _ s t i c k y _ p r o x y ) ) , 
 	 	 	 	 	 	 	       T A G _ I F ( u s e r _ v i a ,   S I P T A G _ V I A _ S T R ( u s e r _ v i a ) ) , 
 	 	 	 	 	 	 	       S I P T A G _ F R O M _ S T R ( g a t e w a y _ p t r - > r e g i s t e r _ f r o m ) , 
 	 	 	 	 	 	 	       S I P T A G _ T O _ S T R ( g a t e w a y _ p t r - > d i s t i n c t _ t o   ?   g a t e w a y _ p t r - > r e g i s t e r _ t o   :   g a t e w a y _ p t r - > r e g i s t e r _ f r o m ) , 
 	 	 	 	 	 	 	       S I P T A G _ E X P I R E S _ S T R ( g a t e w a y _ p t r - > e x p i r e s _ s t r ) , 
 	 	 	 	 	 	 	       N U T A G _ R E G I S T R A R ( g a t e w a y _ p t r - > r e g i s t e r _ p r o x y ) , 
 	 	 	 	 	 	 	       N U T A G _ O U T B O U N D ( " n o - o p t i o n s - k e e p a l i v e " ) ,   N U T A G _ O U T B O U N D ( " n o - v a l i d a t e " ) ,   N U T A G _ K E E P A L I V E ( 0 ) ,   T A G _ N U L L ( ) ) ; 
 	 	 	 } 
 	 	 	 g a t e w a y _ p t r - > r e g _ t i m e o u t   =   n o w   +   g a t e w a y _ p t r - > r e g _ t i m e o u t _ s e c o n d s ; 
 	 	 	 g a t e w a y _ p t r - > s t a t e   =   R E G _ S T A T E _ T R Y I N G ; 
 	 	 	 s w i t c h _ s a f e _ f r e e ( u s e r _ v i a ) ; 
 	 	 	 u s e r _ v i a   =   N U L L ; 
 	 	 	 b r e a k ; 
 
 	 	 c a s e   R E G _ S T A T E _ T I M E O U T : 
 	 	 	 { 
 	 	 	 	 n u a _ h a n d l e _ t   * n h   =   g a t e w a y _ p t r - > n h ; 
 	 	 	 	 
 	 	 	 	 s w i t c h _ l o g _ p r i n t f ( S W I T C H _ C H A N N E L _ L O G ,   S W I T C H _ L O G _ W A R N I N G ,   " T i m e o u t   R e g i s t e r i n g   % s \ n " ,   g a t e w a y _ p t r - > n a m e ) ; 
 
 	 	 	 	 g a t e w a y _ p t r - > n h   =   N U L L ; 
 	 	 	 	 n u a _ h a n d l e _ d e s t r o y ( n h ) ; 
 	 	 	 	 g a t e w a y _ p t r - > s t a t e   =   R E G _ S T A T E _ F A I L E D ; 
 	 	 	 	 g a t e w a y _ p t r - > f a i l u r e s + + ; 
 	 	 	 	 g a t e w a y _ p t r - > f a i l u r e _ s t a t u s   =   9 0 8 ; 
 	 	 	 } 
 	 	 	 b r e a k ; 
 	 	 c a s e   R E G _ S T A T E _ F A I L E D : 
 	 	 	 { 
 	 	 	 	 i n t   s e c ; 
 
 	 	 	 	 i f   ( g a t e w a y _ p t r - > f a i l u r e _ s t a t u s   = =   5 0 3   | |   g a t e w a y _ p t r - > f a i l u r e _ s t a t u s   = =   9 0 8   | |   g a t e w a y _ p t r - > f a i l u r e s   <   1 )   { 
 	 	 	 	 	 s e c   =   g a t e w a y _ p t r - > r e t r y _ s e c o n d s ; 
 	 	 	 	 }   e l s e   { 
 	 	 	 	 	 s e c   =   g a t e w a y _ p t r - > r e t r y _ s e c o n d s   *   g a t e w a y _ p t r - > f a i l u r e s ; 
 	 	 	 	 } 
 
 	 	 	 	 s w i t c h _ l o g _ p r i n t f ( S W I T C H _ C H A N N E L _ L O G ,   S W I T C H _ L O G _ W A R N I N G ,   " % s   F a i l e d   R e g i s t r a t i o n   [ % d ] ,   s e t t i n g   r e t r y   t o   % d   s e c o n d s . \ n " , 
 	 	 	 	 	 	 	 	     g a t e w a y _ p t r - > n a m e ,   g a t e w a y _ p t r - > f a i l u r e _ s t a t u s ,   s e c ) ; 
 
 	 	 	 	 g a t e w a y _ p t r - > r e t r y   =   s w i t c h _ e p o c h _ t i m e _ n o w ( N U L L )   +   s e c ; 
 	 	 	 	 g a t e w a y _ p t r - > s t a t u s   =   S O F I A _ G A T E W A Y _ D O W N ; 
 	 	 	 	 g a t e w a y _ p t r - > s t a t e   =   R E G _ S T A T E _ F A I L _ W A I T ; 
 	 	 	 	 g a t e w a y _ p t r - > f a i l u r e _ s t a t u s   =   0 ; 
 
 	 	 	 } 
 	 	 	 b r e a k ; 
 	 	 c a s e   R E G _ S T A T E _ F A I L _ W A I T : 
 	 	 	 i f   ( ! g a t e w a y _ p t r - > r e t r y   | |   n o w   > =   g a t e w a y _ p t r - > r e t r y )   { 
 	 	 	 	 g a t e w a y _ p t r - > s t a t e   =   R E G _ S T A T E _ U N R E G E D ; 
 	 	 	 } 
 	 	 	 b r e a k ; 
 	 	 c a s e   R E G _ S T A T E _ T R Y I N G : 
 	 	 	 i f   ( n o w   > =   g a t e w a y _ p t r - > r e g _ t i m e o u t )   { 
 	 	 	 	 g a t e w a y _ p t r - > s t a t e   =   R E G _ S T A T E _ T I M E O U T ; 
 	 	 	 } 
 	 	 	 b r e a k ; 
 	 	 d e f a u l t : 
 	 	 	 i f   ( n o w   > =   g a t e w a y _ p t r - > e x p i r e s )   { 
 	 	 	 	 g a t e w a y _ p t r - > s t a t e   =   R E G _ S T A T E _ U N R E G E D ; 
 	 	 	 } 
 	 	 	 b r e a k ; 
 	 	 } 
 	 	 i f   ( o s t a t e   ! =   g a t e w a y _ p t r - > s t a t e )   { 
 	 	 	 s o f i a _ r e g _ f i r e _ c u s t o m _ g a t e w a y _ s t a t e _ e v e n t ( g a t e w a y _ p t r ,   0 ,   N U L L ) ; 
 	 	 } 
 	 } 
 	 s w i t c h _ m u t e x _ u n l o c k ( p r o f i l e - > g w _ m u t e x ) ; 
 } 
 
 
 i n t   s o f i a _ r e g _ f i n d _ c a l l b a c k ( v o i d   * p A r g ,   i n t   a r g c ,   c h a r   * * a r g v ,   c h a r   * * c o l u m n N a m e s ) 
 { 
 	 s t r u c t   c a l l b a c k _ t   * c b t   =   ( s t r u c t   c a l l b a c k _ t   * )   p A r g ; 
 
 	 i f   ( ! c b t - > l e n )   { 
 	 	 s w i t c h _ c o n s o l e _ p u s h _ m a t c h ( & c b t - > l i s t ,   a r g v [ 0 ] ) ; 
 	 	 c b t - > m a t c h e s + + ; 
 	 	 r e t u r n   0 ; 
 	 } 
 
 	 s w i t c h _ c o p y _ s t r i n g ( c b t - > v a l ,   a r g v [ 0 ] ,   c b t - > l e n ) ; 
 	 c b t - > m a t c h e s + + ; 
 	 r e t u r n   c b t - > m a t c h e s   = =   1   ?   0   :   1 ; 
 } 
 
 
 i n t   s o f i a _ r e g _ f i n d _ r e g _ w i t h _ p o s i t i v e _ e x p i r e s _ c a l l b a c k ( v o i d   * p A r g ,   i n t   a r g c ,   c h a r   * * a r g v ,   c h a r   * * c o l u m n N a m e s ) 
 { 
 	 s t r u c t   c a l l b a c k _ t   * c b t   =   ( s t r u c t   c a l l b a c k _ t   * )   p A r g ; 
 	 s o f i a _ d e s t i n a t i o n _ t   * d s t   =   N U L L ; 
 	 l o n g   i n t   e x p i r e s ; 
 	 c h a r   * c o n t a c t   =   N U L L ; 
 
 	 e x p i r e s   =   a t o l ( a r g v [ 1 ] )   -   6 0   -   ( l o n g )   s w i t c h _ e p o c h _ t i m e _ n o w ( N U L L ) ; 
 
 	 i f   ( e x p i r e s   >   0 )   { 
 	 	 d s t   =   s o f i a _ g l u e _ g e t _ d e s t i n a t i o n ( a r g v [ 0 ] ) ; 
 	 	 c o n t a c t   =   s w i t c h _ m p r i n t f ( " < % s > ; e x p i r e s = % l d " ,   d s t - > c o n t a c t ,   e x p i r e s ) ; 
 
 	 	 i f   ( ! c b t - > l e n )   { 
 	 	 	 s w i t c h _ c o n s o l e _ p u s h _ m a t c h ( & c b t - > l i s t ,   c o n t a c t ) ; 
 	 	 	 s w i t c h _ s a f e _ f r e e ( c o n t a c t ) ; 
 	 	 	 s o f i a _ g l u e _ f r e e _ d e s t i n a t i o n ( d s t ) ; 
 	 	 	 c b t - > m a t c h e s + + ; 
 	 	 	 r e t u r n   0 ; 
 	 	 } 
 
 	 	 s w i t c h _ c o p y _ s t r i n g ( c b t - > v a l ,   c o n t a c t ,   c b t - > l e n ) ; 
 	 	 s w i t c h _ s a f e _ f r e e ( c o n t a c t ) ; 
 	 	 s o f i a _ g l u e _ f r e e _ d e s t i n a t i o n ( d s t ) ; 
 	 	 c b t - > m a t c h e s + + ; 
 	 	 r e t u r n   c b t - > m a t c h e s   = =   1   ?   0   :   1 ; 
 	 } 
 
 	 r e t u r n   0 ; 
 } 
 
 
 i n t   s o f i a _ r e g _ n a t _ c a l l b a c k ( v o i d   * p A r g ,   i n t   a r g c ,   c h a r   * * a r g v ,   c h a r   * * c o l u m n N a m e s ) 
 { 
 	 s o f i a _ p r o f i l e _ t   * p r o f i l e   =   ( s o f i a _ p r o f i l e _ t   * )   p A r g ; 
 	 n u a _ h a n d l e _ t   * n h ; 
 	 c h a r   t o [ 5 1 2 ]   =   " " ; 
 	 s o f i a _ d e s t i n a t i o n _ t   * d s t   =   N U L L ; 
 
 	 s w i t c h _ s n p r i n t f ( t o ,   s i z e o f ( t o ) ,   " s i p : % s @ % s " ,   a r g v [ 1 ] ,   a r g v [ 2 ] ) ; 
 
 	 d s t   =   s o f i a _ g l u e _ g e t _ d e s t i n a t i o n ( a r g v [ 3 ] ) ; 
 	 s w i t c h _ a s s e r t ( d s t ) ; 
 	 
 	 n h   =   n u a _ h a n d l e ( p r o f i l e - > n u a ,   N U L L ,   S I P T A G _ F R O M _ S T R ( p r o f i l e - > u r l ) ,   S I P T A G _ T O _ S T R ( t o ) ,   N U T A G _ U R L ( d s t - > c o n t a c t ) ,   S I P T A G _ C O N T A C T _ S T R ( p r o f i l e - > u r l ) , 
 	 	 	 	 	 S I P T A G _ C A L L _ I D _ S T R ( a r g v [ 0 ] ) ,   T A G _ E N D ( ) ) ; 
 	 n u a _ h a n d l e _ b i n d ( n h ,   & m o d _ s o f i a _ g l o b a l s . d e s t r o y _ p r i v a t e ) ; 
 	 n u a _ o p t i o n s ( n h ,   
 	 	 	 	 N T A T A G _ S I P _ T 2 ( 5 0 0 0 ) , 
 	 	 	 	 N T A T A G _ S I P _ T 4 ( 1 0 0 0 0 ) , 
 	 	 	 	 T A G _ I F ( d s t - > r o u t e _ u r i ,   N U T A G _ P R O X Y ( d s t - > r o u t e _ u r i ) ) ,   T A G _ I F ( d s t - > r o u t e ,   S I P T A G _ R O U T E _ S T R ( d s t - > r o u t e ) ) ,   T A G _ E N D ( ) ) ; 
 
 	 s o f i a _ g l u e _ f r e e _ d e s t i n a t i o n ( d s t ) ; 
 
 	 r e t u r n   0 ; 
 } 
 
 
 v o i d   s o f i a _ r e g _ s e n d _ r e b o o t ( s o f i a _ p r o f i l e _ t   * p r o f i l e ,   c o n s t   c h a r   * c a l l i d ,   c o n s t   c h a r   * u s e r ,   c o n s t   c h a r   * h o s t ,   c o n s t   c h a r   * c o n t a c t ,   c o n s t   c h a r   * u s e r _ a g e n t , 
 	 	 	 	 	 	       c o n s t   c h a r   * n e t w o r k _ i p ) 
 { 
 	 c o n s t   c h a r   * e v e n t   =   " c h e c k - s y n c " ; 
 	 c o n s t   c h a r   * c o n t e n t t y p e   =   " a p p l i c a t i o n / s i m p l e - m e s s a g e - s u m m a r y " ; 
 	 c o n s t   c h a r   * b o d y   =   " " ; 
 
 	 i f   ( s w i t c h _ s t r i s t r ( " s n o m " ,   u s e r _ a g e n t )   | |   s w i t c h _ s t r i s t r ( " y e a l i n k " ,   u s e r _ a g e n t ) )   { 
 	 	 e v e n t   =   " c h e c k - s y n c ; r e b o o t = t r u e " ; 
 	 }   e l s e   i f   ( s w i t c h _ s t r i s t r ( " l i n k s y s " ,   u s e r _ a g e n t ) )   { 
 	 	 e v e n t   =   " r e b o o t _ n o w " ; 
 	 }   e l s e   i f   ( s w i t c h _ s t r i s t r ( " s p a " ,   u s e r _ a g e n t ) )   { 
 	 	 e v e n t   =   " r e b o o t " ; 
 	 } 
 
 	 s o f i a _ g l u e _ s e n d _ n o t i f y ( p r o f i l e ,   u s e r ,   h o s t ,   e v e n t ,   c o n t e n t t y p e ,   b o d y ,   c o n t a c t ,   n e t w o r k _ i p ,   c a l l i d ) ; 
 } 
 
 i n t   s o f i a _ s l a _ d i a l o g _ d e l _ c a l l b a c k ( v o i d   * p A r g ,   i n t   a r g c ,   c h a r   * * a r g v ,   c h a r   * * c o l u m n N a m e s ) 
 { 
 	 s o f i a _ p r o f i l e _ t   * p r o f i l e   =   ( s o f i a _ p r o f i l e _ t   * )   p A r g ; 
 	 n u a _ h a n d l e _ t   * n h   =   N U L L ; 
 
 	 i f   ( ( n h   =   n u a _ h a n d l e _ b y _ c a l l _ i d ( p r o f i l e - > n u a ,   a r g v [ 0 ] ) ) )   { 
 	 	 n u a _ h a n d l e _ d e s t r o y ( n h ) ; 
 	 } 
 
 	 r e t u r n   0 ; 
 } 
 
 i n t   s o f i a _ r e g _ d e l _ c a l l b a c k ( v o i d   * p A r g ,   i n t   a r g c ,   c h a r   * * a r g v ,   c h a r   * * c o l u m n N a m e s ) 
 { 
 	 s w i t c h _ e v e n t _ t   * s _ e v e n t ; 
 	 s o f i a _ p r o f i l e _ t   * p r o f i l e   =   ( s o f i a _ p r o f i l e _ t   * )   p A r g ; 
 
 	 i f   ( a r g c   >   1 2   & &   a t o i ( a r g v [ 1 2 ] )   = =   1 )   { 
 	 	 s o f i a _ r e g _ s e n d _ r e b o o t ( p r o f i l e ,   a r g v [ 0 ] ,   a r g v [ 1 ] ,   a r g v [ 2 ] ,   a r g v [ 3 ] ,   a r g v [ 7 ] ,   a r g v [ 1 1 ] ) ; 
 	 } 
 
 	 i f   ( a r g c   > =   3 )   { 
 	 	 i f   ( s w i t c h _ e v e n t _ c r e a t e _ s u b c l a s s ( & s _ e v e n t ,   S W I T C H _ E V E N T _ C U S T O M ,   M Y _ E V E N T _ E X P I R E )   = =   S W I T C H _ S T A T U S _ S U C C E S S )   { 
 	 	 	 s w i t c h _ e v e n t _ a d d _ h e a d e r _ s t r i n g ( s _ e v e n t ,   S W I T C H _ S T A C K _ B O T T O M ,   " p r o f i l e - n a m e " ,   a r g v [ 1 0 ] ) ; 
 	 	 	 s w i t c h _ e v e n t _ a d d _ h e a d e r _ s t r i n g ( s _ e v e n t ,   S W I T C H _ S T A C K _ B O T T O M ,   " c a l l - i d " ,   a r g v [ 0 ] ) ; 
 	 	 	 s w i t c h _ e v e n t _ a d d _ h e a d e r _ s t r i n g ( s _ e v e n t ,   S W I T C H _ S T A C K _ B O T T O M ,   " u s e r " ,   a r g v [ 1 ] ) ; 
 	 	 	 s w i t c h _ e v e n t _ a d d _ h e a d e r _ s t r i n g ( s _ e v e n t ,   S W I T C H _ S T A C K _ B O T T O M ,   " h o s t " ,   a r g v [ 2 ] ) ; 
 	 	 	 s w i t c h _ e v e n t _ a d d _ h e a d e r _ s t r i n g ( s _ e v e n t ,   S W I T C H _ S T A C K _ B O T T O M ,   " c o n t a c t " ,   a r g v [ 3 ] ) ; 
 	 	 	 s w i t c h _ e v e n t _ a d d _ h e a d e r _ s t r i n g ( s _ e v e n t ,   S W I T C H _ S T A C K _ B O T T O M ,   " e x p i r e s " ,   a r g v [ 6 ] ) ; 
 	 	 	 s w i t c h _ e v e n t _ a d d _ h e a d e r _ s t r i n g ( s _ e v e n t ,   S W I T C H _ S T A C K _ B O T T O M ,   " u s e r - a g e n t " ,   a r g v [ 7 ] ) ; 
 	 	 	 s w i t c h _ e v e n t _ f i r e ( & s _ e v e n t ) ; 
 	 	 } 
 
 	 	 i f   ( s w i t c h _ e v e n t _ c r e a t e ( & s _ e v e n t ,   S W I T C H _ E V E N T _ P R E S E N C E _ I N )   = =   S W I T C H _ S T A T U S _ S U C C E S S )   { 
 	 	 	 s w i t c h _ e v e n t _ a d d _ h e a d e r _ s t r i n g ( s _ e v e n t ,   S W I T C H _ S T A C K _ B O T T O M ,   " p r o t o " ,   S O F I A _ C H A T _ P R O T O ) ; 
 	 	 	 s w i t c h _ e v e n t _ a d d _ h e a d e r _ s t r i n g ( s _ e v e n t ,   S W I T C H _ S T A C K _ B O T T O M ,   " r p i d " ,   " a w a y " ) ; 
 	 	 	 s w i t c h _ e v e n t _ a d d _ h e a d e r _ s t r i n g ( s _ e v e n t ,   S W I T C H _ S T A C K _ B O T T O M ,   " l o g i n " ,   p r o f i l e - > u r l ) ; 
 
 	 	 	 i f   ( a r g v [ 4 ] )   { 
 	 	 	 	 s w i t c h _ e v e n t _ a d d _ h e a d e r _ s t r i n g ( s _ e v e n t ,   S W I T C H _ S T A C K _ B O T T O M ,   " u s e r - a g e n t " ,   a r g v [ 4 ] ) ; 
 	 	 	 } 
 
 	 	 	 i f   ( a r g v [ 1 ]   & &   a r g v [ 2 ] )   { 
 	 	 	 	 s w i t c h _ e v e n t _ a d d _ h e a d e r ( s _ e v e n t ,   S W I T C H _ S T A C K _ B O T T O M ,   " f r o m " ,   " % s @ % s " ,   a r g v [ 1 ] ,   a r g v [ 2 ] ) ; 
 	 	 	 } 
 
 	 	 	 s w i t c h _ e v e n t _ a d d _ h e a d e r _ s t r i n g ( s _ e v e n t ,   S W I T C H _ S T A C K _ B O T T O M ,   " s t a t u s " ,   " U n r e g i s t e r e d " ) ; 
 	 	 	 s w i t c h _ e v e n t _ a d d _ h e a d e r _ s t r i n g ( s _ e v e n t ,   S W I T C H _ S T A C K _ B O T T O M ,   " e v e n t _ t y p e " ,   " p r e s e n c e " ) ; 
 	 	 	 s w i t c h _ e v e n t _ f i r e ( & s _ e v e n t ) ; 
 	 	 } 
 
 	 } 
 	 r e t u r n   0 ; 
 } 
 
 v o i d   s o f i a _ r e g _ e x p i r e _ c a l l _ i d ( s o f i a _ p r o f i l e _ t   * p r o f i l e ,   c o n s t   c h a r   * c a l l _ i d ,   i n t   r e b o o t ) 
 { 
 	 c h a r   * s q l   =   N U L L ; 
 	 c h a r   * s q l e x t r a   =   N U L L ; 
 	 c h a r   * d u p   =   s t r d u p ( c a l l _ i d ) ; 
 	 c h a r   * h o s t   =   N U L L ,   * u s e r   =   N U L L ; 
 
 	 s w i t c h _ a s s e r t ( d u p ) ; 
 
 	 i f   ( ( h o s t   =   s t r c h r ( d u p ,   ' @ ' ) ) )   { 
 	 	 * h o s t + +   =   ' \ 0 ' ; 
 	 	 u s e r   =   d u p ; 
 	 }   e l s e   { 
 	 	 h o s t   =   d u p ; 
 	 } 
 
 	 i f   ( ! h o s t )   { 
 	 	 h o s t   =   " n o n e " ; 
 	 } 
 
 	 i f   ( z s t r ( u s e r ) )   { 
 	 	 s q l e x t r a   =   s w i t c h _ m p r i n t f ( "   o r   ( s i p _ h o s t = ' % q ' ) " ,   h o s t ) ; 
 	 }   e l s e   { 
 	 	 s q l e x t r a   =   s w i t c h _ m p r i n t f ( "   o r   ( s i p _ u s e r = ' % q '   a n d   s i p _ h o s t = ' % q ' ) " ,   u s e r ,   h o s t ) ; 
 	 } 
 
 	 s q l   =   s w i t c h _ m p r i n t f ( " s e l e c t   c a l l _ i d , s i p _ u s e r , s i p _ h o s t , c o n t a c t , s t a t u s , r p i d , e x p i r e s " 
 	 	 	 	 	 	   " , u s e r _ a g e n t , s e r v e r _ u s e r , s e r v e r _ h o s t , p r o f i l e _ n a m e , n e t w o r k _ i p " 
 	 	 	 	 	 	   " , % d   f r o m   s i p _ r e g i s t r a t i o n s   w h e r e   c a l l _ i d = ' % q '   % s " ,   r e b o o t ,   c a l l _ i d ,   s q l e x t r a ) ; 
 
 	 s w i t c h _ m u t e x _ l o c k ( p r o f i l e - > i r e g _ m u t e x ) ; 
 	 s o f i a _ g l u e _ e x e c u t e _ s q l _ c a l l b a c k ( p r o f i l e ,   N U L L ,   s q l ,   s o f i a _ r e g _ d e l _ c a l l b a c k ,   p r o f i l e ) ; 
 	 s w i t c h _ m u t e x _ u n l o c k ( p r o f i l e - > i r e g _ m u t e x ) ; 
 	 s w i t c h _ s a f e _ f r e e ( s q l ) ; 
 
 	 s q l   =   s w i t c h _ m p r i n t f ( " d e l e t e   f r o m   s i p _ r e g i s t r a t i o n s   w h e r e   c a l l _ i d = ' % q '   % s " ,   c a l l _ i d ,   s q l e x t r a ) ; 
 	 s o f i a _ g l u e _ e x e c u t e _ s q l _ n o w ( p r o f i l e ,   & s q l ,   S W I T C H _ F A L S E ) ; 
 
 	 s w i t c h _ s a f e _ f r e e ( s q l e x t r a ) ; 
 	 s w i t c h _ s a f e _ f r e e ( s q l ) ; 
 	 s w i t c h _ s a f e _ f r e e ( d u p ) ; 
 
 } 
 
 v o i d   s o f i a _ r e g _ c h e c k _ e x p i r e ( s o f i a _ p r o f i l e _ t   * p r o f i l e ,   t i m e _ t   n o w ,   i n t   r e b o o t ) 
 { 
 	 c h a r   s q l [ 1 0 2 4 ] ; 
 
 	 s w i t c h _ m u t e x _ l o c k ( p r o f i l e - > i r e g _ m u t e x ) ; 
 
 	 i f   ( n o w )   { 
 	 	 s w i t c h _ s n p r i n t f ( s q l ,   s i z e o f ( s q l ) ,   " s e l e c t   c a l l _ i d , s i p _ u s e r , s i p _ h o s t , c o n t a c t , s t a t u s , r p i d , e x p i r e s " 
 	 	 	 	 	 	 " , u s e r _ a g e n t , s e r v e r _ u s e r , s e r v e r _ h o s t , p r o f i l e _ n a m e , n e t w o r k _ i p " 
 	 	 	 	 	 	 " , % d   f r o m   s i p _ r e g i s t r a t i o n s   w h e r e   e x p i r e s   >   0   a n d   e x p i r e s   < =   % l d " ,   r e b o o t ,   ( l o n g )   n o w ) ; 
 	 }   e l s e   { 
 	 	 s w i t c h _ s n p r i n t f ( s q l ,   s i z e o f ( s q l ) ,   " s e l e c t   c a l l _ i d , s i p _ u s e r , s i p _ h o s t , c o n t a c t , s t a t u s , r p i d , e x p i r e s " 
 	 	 	 	 	 	 " , u s e r _ a g e n t , s e r v e r _ u s e r , s e r v e r _ h o s t , p r o f i l e _ n a m e , n e t w o r k _ i p "   " , % d   f r o m   s i p _ r e g i s t r a t i o n s   w h e r e   e x p i r e s   >   0 " ,   r e b o o t ) ; 
 	 } 
 
 	 s o f i a _ g l u e _ e x e c u t e _ s q l _ c a l l b a c k ( p r o f i l e ,   N U L L ,   s q l ,   s o f i a _ r e g _ d e l _ c a l l b a c k ,   p r o f i l e ) ; 
 	 i f   ( n o w )   { 
 	 	 s w i t c h _ s n p r i n t f v ( s q l ,   s i z e o f ( s q l ) ,   " d e l e t e   f r o m   s i p _ r e g i s t r a t i o n s   w h e r e   e x p i r e s   >   0   a n d   e x p i r e s   < =   % l d   a n d   h o s t n a m e = ' % q ' " , 
 	 	 	 	 	 	 ( l o n g )   n o w ,   m o d _ s o f i a _ g l o b a l s . h o s t n a m e ) ; 
 	 }   e l s e   { 
 	 	 s w i t c h _ s n p r i n t f v ( s q l ,   s i z e o f ( s q l ) ,   " d e l e t e   f r o m   s i p _ r e g i s t r a t i o n s   w h e r e   e x p i r e s   >   0   a n d   h o s t n a m e = ' % q ' " ,   m o d _ s o f i a _ g l o b a l s . h o s t n a m e ) ; 
 	 } 
 
 	 s o f i a _ g l u e _ a c t u a l l y _ e x e c u t e _ s q l ( p r o f i l e ,   s q l ,   N U L L ) ; 
 
 
 
 	 i f   ( n o w )   { 
 	 	 s w i t c h _ s n p r i n t f v ( s q l ,   s i z e o f ( s q l ) ,   " s e l e c t   c a l l _ i d   f r o m   s i p _ s h a r e d _ a p p e a r a n c e _ d i a l o g s   w h e r e   h o s t n a m e = ' % q '   " 
 	 	 	 	 	 	 " a n d   p r o f i l e _ n a m e = ' % s '   a n d   e x p i r e s   < =   % l d " ,   m o d _ s o f i a _ g l o b a l s . h o s t n a m e ,   p r o f i l e - > n a m e ,   ( l o n g )   n o w ) ; 
 
 	 	 s o f i a _ g l u e _ e x e c u t e _ s q l _ c a l l b a c k ( p r o f i l e ,   N U L L ,   s q l ,   s o f i a _ s l a _ d i a l o g _ d e l _ c a l l b a c k ,   p r o f i l e ) ; 
 	 	 s w i t c h _ s n p r i n t f v ( s q l ,   s i z e o f ( s q l ) ,   " d e l e t e   f r o m   s i p _ s h a r e d _ a p p e a r a n c e _ d i a l o g s   w h e r e   e x p i r e s   >   0   a n d   h o s t n a m e = ' % q '   a n d   e x p i r e s   < =   % l d " , 
 	 	 	 	 	 	 m o d _ s o f i a _ g l o b a l s . h o s t n a m e ,   ( l o n g )   n o w ) ; 
 
 
 	 	 s o f i a _ g l u e _ a c t u a l l y _ e x e c u t e _ s q l ( p r o f i l e ,   s q l ,   N U L L ) ; 
 	 } 
 
 
 	 i f   ( n o w )   { 
 	 	 s w i t c h _ s n p r i n t f v ( s q l ,   s i z e o f ( s q l ) ,   " d e l e t e   f r o m   s i p _ p r e s e n c e   w h e r e   e x p i r e s   >   0   a n d   e x p i r e s   < =   % l d   a n d   h o s t n a m e = ' % q ' " , 
 	 	 	 	 	 	 ( l o n g )   n o w ,   m o d _ s o f i a _ g l o b a l s . h o s t n a m e ) ; 
 	 }   e l s e   { 
 	 	 s w i t c h _ s n p r i n t f v ( s q l ,   s i z e o f ( s q l ) ,   " d e l e t e   f r o m   s i p _ p r e s e n c e   w h e r e   e x p i r e s   >   0   a n d   h o s t n a m e = ' % q ' " ,   m o d _ s o f i a _ g l o b a l s . h o s t n a m e ) ; 
 	 } 
 
 	 s o f i a _ g l u e _ a c t u a l l y _ e x e c u t e _ s q l ( p r o f i l e ,   s q l ,   N U L L ) ; 
 
 	 i f   ( n o w )   { 
 	 	 s w i t c h _ s n p r i n t f v ( s q l ,   s i z e o f ( s q l ) ,   " d e l e t e   f r o m   s i p _ a u t h e n t i c a t i o n   w h e r e   e x p i r e s   >   0   a n d   e x p i r e s   < =   % l d   a n d   h o s t n a m e = ' % q ' " , 
 	 	 	 	 	 	 ( l o n g )   n o w ,   m o d _ s o f i a _ g l o b a l s . h o s t n a m e ) ; 
 	 }   e l s e   { 
 	 	 s w i t c h _ s n p r i n t f v ( s q l ,   s i z e o f ( s q l ) ,   " d e l e t e   f r o m   s i p _ a u t h e n t i c a t i o n   w h e r e   e x p i r e s   >   0   a n d   h o s t n a m e = ' % q ' " ,   m o d _ s o f i a _ g l o b a l s . h o s t n a m e ) ; 
 	 } 
 
 	 s o f i a _ g l u e _ a c t u a l l y _ e x e c u t e _ s q l ( p r o f i l e ,   s q l ,   N U L L ) ; 
 	 
 	 s o f i a _ p r e s e n c e _ c h e c k _ s u b s c r i p t i o n s ( p r o f i l e ,   n o w ) ; 
 
 	 i f   ( n o w )   { 
 	 	 s w i t c h _ s n p r i n t f v ( s q l ,   s i z e o f ( s q l ) ,   " d e l e t e   f r o m   s i p _ d i a l o g s   w h e r e   ( e x p i r e s   =   - 1   o r   ( e x p i r e s   >   0   a n d   e x p i r e s   < =   % l d ) )   a n d   h o s t n a m e = ' % q ' " , 
 	 	 	 	 	 	 ( l o n g )   n o w ,   m o d _ s o f i a _ g l o b a l s . h o s t n a m e ) ; 
 	 }   e l s e   { 
 	 	 s w i t c h _ s n p r i n t f v ( s q l ,   s i z e o f ( s q l ) ,   " d e l e t e   f r o m   s i p _ d i a l o g s   w h e r e   e x p i r e s   > =   - 1   a n d   h o s t n a m e = ' % q ' " ,   m o d _ s o f i a _ g l o b a l s . h o s t n a m e ) ; 
 	 } 
 
 	 s o f i a _ g l u e _ a c t u a l l y _ e x e c u t e _ s q l ( p r o f i l e ,   s q l ,   N U L L ) ; 
 
 
 	 i f   ( n o w )   { 
 	 	 i f   ( s o f i a _ t e s t _ p f l a g ( p r o f i l e ,   P F L A G _ A L L _ R E G _ O P T I O N S _ P I N G ) )   { 
 	 	 	 s w i t c h _ s n p r i n t f ( s q l ,   s i z e o f ( s q l ) ,   " s e l e c t   c a l l _ i d , s i p _ u s e r , s i p _ h o s t , c o n t a c t , s t a t u s , r p i d , " 
 	 	 	 	 	 	 	 " e x p i r e s , u s e r _ a g e n t , s e r v e r _ u s e r , s e r v e r _ h o s t , p r o f i l e _ n a m e " 
   "   f r o m   s i p _ r e g i s t r a t i o n s   w h e r e   h o s t n a m e = ' % s '   a n d   "   
   " p r o f i l e _ n a m e = ' % s ' " ,   m o d _ s o f i a _ g l o b a l s . h o s t n a m e ,   p r o f i l e - > n a m e ) ;   
 	 	 	 
 	 	 	 s o f i a _ g l u e _ e x e c u t e _ s q l _ c a l l b a c k ( p r o f i l e ,   N U L L ,   s q l ,   s o f i a _ r e g _ n a t _ c a l l b a c k ,   p r o f i l e ) ; 
 	 	 }   e l s e   i f   ( s o f i a _ t e s t _ p f l a g ( p r o f i l e ,   P F L A G _ N A T _ O P T I O N S _ P I N G ) )   { 
 	 	 	 s w i t c h _ s n p r i n t f ( s q l ,   s i z e o f ( s q l ) ,   " s e l e c t   c a l l _ i d , s i p _ u s e r , s i p _ h o s t , c o n t a c t , s t a t u s , r p i d , " 
 	 	 	 	 	 	 	 " e x p i r e s , u s e r _ a g e n t , s e r v e r _ u s e r , s e r v e r _ h o s t , p r o f i l e _ n a m e " 
 	 	 	 	 	 	 	 "   f r o m   s i p _ r e g i s t r a t i o n s   w h e r e   ( s t a t u s   l i k e   ' % % N A T % % '   " 
   " o r   c o n t a c t   l i k e   ' % % f s _ n a t = y e s % % ' )   a n d   h o s t n a m e = ' % s '   "   
   " a n d   p r o f i l e _ n a m e = ' % s ' " ,   m o d _ s o f i a _ g l o b a l s . h o s t n a m e ,   p r o f i l e - > n a m e ) ;   
 	 	 	 
 	 	 	 s o f i a _ g l u e _ e x e c u t e _ s q l _ c a l l b a c k ( p r o f i l e ,   N U L L ,   s q l ,   s o f i a _ r e g _ n a t _ c a l l b a c k ,   p r o f i l e ) ; 
 	 	 } 
 	 } 
 
 	 s w i t c h _ m u t e x _ u n l o c k ( p r o f i l e - > i r e g _ m u t e x ) ; 
 
 } 
 
 
 i n t   s o f i a _ r e g _ c h e c k _ c a l l b a c k ( v o i d   * p A r g ,   i n t   a r g c ,   c h a r   * * a r g v ,   c h a r   * * c o l u m n N a m e s ) 
 { 
 	 s o f i a _ p r o f i l e _ t   * p r o f i l e   =   ( s o f i a _ p r o f i l e _ t   * )   p A r g ; 
 
 	 s o f i a _ r e g _ s e n d _ r e b o o t ( p r o f i l e ,   a r g v [ 0 ] ,   a r g v [ 1 ] ,   a r g v [ 2 ] ,   a r g v [ 3 ] ,   a r g v [ 7 ] ,   a r g v [ 1 1 ] ) ; 
 
 	 r e t u r n   0 ; 
 } 
 
 v o i d   s o f i a _ r e g _ c h e c k _ c a l l _ i d ( s o f i a _ p r o f i l e _ t   * p r o f i l e ,   c o n s t   c h a r   * c a l l _ i d ) 
 { 
 	 c h a r   * s q l   =   N U L L ; 
 	 c h a r   * s q l e x t r a   =   N U L L ; 
 	 c h a r   * d u p   =   s t r d u p ( c a l l _ i d ) ; 
 	 c h a r   * h o s t   =   N U L L ,   * u s e r   =   N U L L ; 
 
 	 s w i t c h _ a s s e r t ( d u p ) ; 
 
 	 i f   ( ( h o s t   =   s t r c h r ( d u p ,   ' @ ' ) ) )   { 
 	 	 * h o s t + +   =   ' \ 0 ' ; 
 	 	 u s e r   =   d u p ; 
 	 }   e l s e   { 
 	 	 h o s t   =   d u p ; 
 	 } 
 
 	 i f   ( ! h o s t )   { 
 	 	 h o s t   =   " n o n e " ; 
 	 } 
 
 	 i f   ( z s t r ( u s e r ) )   { 
 	 	 s q l e x t r a   =   s w i t c h _ m p r i n t f ( "   o r   ( s i p _ h o s t = ' % q ' ) " ,   h o s t ) ; 
 	 }   e l s e   { 
 	 	 s q l e x t r a   =   s w i t c h _ m p r i n t f ( "   o r   ( s i p _ u s e r = ' % q '   a n d   s i p _ h o s t = ' % q ' ) " ,   u s e r ,   h o s t ) ; 
 	 } 
 
 	 s q l   =   s w i t c h _ m p r i n t f ( " s e l e c t   c a l l _ i d , s i p _ u s e r , s i p _ h o s t , c o n t a c t , s t a t u s , r p i d , e x p i r e s " 
 	 	 	 	 	 	   " , u s e r _ a g e n t , s e r v e r _ u s e r , s e r v e r _ h o s t , p r o f i l e _ n a m e , n e t w o r k _ i p " 
 	 	 	 	 	 	   "   f r o m   s i p _ r e g i s t r a t i o n s   w h e r e   c a l l _ i d = ' % q '   % s " ,   c a l l _ i d ,   s q l e x t r a ) ; 
 
 	 s w i t c h _ m u t e x _ l o c k ( p r o f i l e - > i r e g _ m u t e x ) ; 
 	 s o f i a _ g l u e _ e x e c u t e _ s q l _ c a l l b a c k ( p r o f i l e ,   N U L L ,   s q l ,   s o f i a _ r e g _ c h e c k _ c a l l b a c k ,   p r o f i l e ) ; 
 	 s w i t c h _ m u t e x _ u n l o c k ( p r o f i l e - > i r e g _ m u t e x ) ; 
 
 	 s w i t c h _ s a f e _ f r e e ( s q l ) ; 
 	 s w i t c h _ s a f e _ f r e e ( s q l e x t r a ) ; 
 	 s w i t c h _ s a f e _ f r e e ( d u p ) ; 
 
 } 
 
 v o i d   s o f i a _ r e g _ c h e c k _ s y n c ( s o f i a _ p r o f i l e _ t   * p r o f i l e ) 
 { 
 	 c h a r   s q l [ 1 0 2 4 ] ; 
 
 	 s w i t c h _ m u t e x _ l o c k ( p r o f i l e - > i r e g _ m u t e x ) ; 
 
 	 s w i t c h _ s n p r i n t f ( s q l ,   s i z e o f ( s q l ) ,   " s e l e c t   c a l l _ i d , s i p _ u s e r , s i p _ h o s t , c o n t a c t , s t a t u s , r p i d , e x p i r e s " 
 	 	 	 	 	 " , u s e r _ a g e n t , s e r v e r _ u s e r , s e r v e r _ h o s t , p r o f i l e _ n a m e , n e t w o r k _ i p "   
 	 	 	 	 	 "   f r o m   s i p _ r e g i s t r a t i o n s   w h e r e   e x p i r e s   >   0 " ) ; 
 
 
 	 s o f i a _ g l u e _ e x e c u t e _ s q l _ c a l l b a c k ( p r o f i l e ,   N U L L ,   s q l ,   s o f i a _ r e g _ d e l _ c a l l b a c k ,   p r o f i l e ) ; 
 	 s w i t c h _ s n p r i n t f v ( s q l ,   s i z e o f ( s q l ) ,   " d e l e t e   f r o m   s i p _ r e g i s t r a t i o n s   w h e r e   e x p i r e s   >   0   a n d   h o s t n a m e = ' % q ' " ,   m o d _ s o f i a _ g l o b a l s . h o s t n a m e ) ; 
 	 s o f i a _ g l u e _ a c t u a l l y _ e x e c u t e _ s q l ( p r o f i l e ,   s q l ,   N U L L ) ; 
 
 
 	 s w i t c h _ s n p r i n t f v ( s q l ,   s i z e o f ( s q l ) ,   " d e l e t e   f r o m   s i p _ p r e s e n c e   w h e r e   e x p i r e s   >   0   a n d   h o s t n a m e = ' % q ' " ,   m o d _ s o f i a _ g l o b a l s . h o s t n a m e ) ; 
 	 s o f i a _ g l u e _ a c t u a l l y _ e x e c u t e _ s q l ( p r o f i l e ,   s q l ,   N U L L ) ; 
 
 	 s w i t c h _ s n p r i n t f v ( s q l ,   s i z e o f ( s q l ) ,   " d e l e t e   f r o m   s i p _ a u t h e n t i c a t i o n   w h e r e   e x p i r e s   >   0   a n d   h o s t n a m e = ' % q ' " ,   m o d _ s o f i a _ g l o b a l s . h o s t n a m e ) ; 
 	 s o f i a _ g l u e _ a c t u a l l y _ e x e c u t e _ s q l ( p r o f i l e ,   s q l ,   N U L L ) ; 
 	 
 	 s w i t c h _ s n p r i n t f v ( s q l ,   s i z e o f ( s q l ) ,   " d e l e t e   f r o m   s i p _ s u b s c r i p t i o n s   w h e r e   e x p i r e s   > =   - 1   a n d   h o s t n a m e = ' % q ' " ,   m o d _ s o f i a _ g l o b a l s . h o s t n a m e ) ; 
 	 s o f i a _ g l u e _ a c t u a l l y _ e x e c u t e _ s q l ( p r o f i l e ,   s q l ,   N U L L ) ; 
 
 	 s w i t c h _ s n p r i n t f v ( s q l ,   s i z e o f ( s q l ) ,   " d e l e t e   f r o m   s i p _ d i a l o g s   w h e r e   e x p i r e s   > =   - 1   a n d   h o s t n a m e = ' % q ' " ,   m o d _ s o f i a _ g l o b a l s . h o s t n a m e ) ; 
 	 s o f i a _ g l u e _ a c t u a l l y _ e x e c u t e _ s q l ( p r o f i l e ,   s q l ,   N U L L ) ; 
 
 	 s w i t c h _ m u t e x _ u n l o c k ( p r o f i l e - > i r e g _ m u t e x ) ; 
 
 } 
 
 c h a r   * s o f i a _ r e g _ f i n d _ r e g _ u r l ( s o f i a _ p r o f i l e _ t   * p r o f i l e ,   c o n s t   c h a r   * u s e r ,   c o n s t   c h a r   * h o s t ,   c h a r   * v a l ,   s w i t c h _ s i z e _ t   l e n ) 
 { 
 	 s t r u c t   c a l l b a c k _ t   c b t   =   {   0   } ; 
 	 c h a r   s q l [ 5 1 2 ]   =   " " ; 
 
 	 i f   ( ! u s e r )   { 
 	 	 s w i t c h _ l o g _ p r i n t f ( S W I T C H _ C H A N N E L _ L O G ,   S W I T C H _ L O G _ E R R O R ,   " C a l l e d   w i t h   n u l l   u s e r ! \ n " ) ; 
 	 	 r e t u r n   N U L L ; 
 	 } 
 
 	 c b t . v a l   =   v a l ; 
 	 c b t . l e n   =   l e n ; 
 
 	 i f   ( h o s t )   { 
 	 	 s w i t c h _ s n p r i n t f v ( s q l ,   s i z e o f ( s q l ) ,   " s e l e c t   c o n t a c t   f r o m   s i p _ r e g i s t r a t i o n s   w h e r e   s i p _ u s e r = ' % q '   a n d   ( s i p _ h o s t = ' % q '   o r   p r e s e n c e _ h o s t s   l i k e   ' % % % q % % ' ) " , 
 	 	 	 	 	 	 u s e r ,   h o s t ,   h o s t ) ; 
 	 }   e l s e   { 
 	 	 s w i t c h _ s n p r i n t f v ( s q l ,   s i z e o f ( s q l ) ,   " s e l e c t   c o n t a c t   f r o m   s i p _ r e g i s t r a t i o n s   w h e r e   s i p _ u s e r = ' % q ' " ,   u s e r ) ; 
 	 } 
 
 
 	 s o f i a _ g l u e _ e x e c u t e _ s q l _ c a l l b a c k ( p r o f i l e ,   p r o f i l e - > i r e g _ m u t e x ,   s q l ,   s o f i a _ r e g _ f i n d _ c a l l b a c k ,   & c b t ) ; 
 
 
 	 i f   ( c b t . m a t c h e s )   { 
 	 	 r e t u r n   v a l ; 
 	 }   e l s e   { 
 	 	 r e t u r n   N U L L ; 
 	 } 
 } 
 
 
 s w i t c h _ c o n s o l e _ c a l l b a c k _ m a t c h _ t   * s o f i a _ r e g _ f i n d _ r e g _ u r l _ m u l t i ( s o f i a _ p r o f i l e _ t   * p r o f i l e ,   c o n s t   c h a r   * u s e r ,   c o n s t   c h a r   * h o s t ) 
 { 
 	 s t r u c t   c a l l b a c k _ t   c b t   =   {   0   } ; 
 	 c h a r   s q l [ 5 1 2 ]   =   " " ; 
 
 	 i f   ( ! u s e r )   { 
 	 	 s w i t c h _ l o g _ p r i n t f ( S W I T C H _ C H A N N E L _ L O G ,   S W I T C H _ L O G _ E R R O R ,   " C a l l e d   w i t h   n u l l   u s e r ! \ n " ) ; 
 	 	 r e t u r n   N U L L ; 
 	 } 
 
 	 i f   ( h o s t )   { 
 	 	 s w i t c h _ s n p r i n t f v ( s q l ,   s i z e o f ( s q l ) ,   " s e l e c t   c o n t a c t   f r o m   s i p _ r e g i s t r a t i o n s   w h e r e   s i p _ u s e r = ' % q '   a n d   ( s i p _ h o s t = ' % q '   o r   p r e s e n c e _ h o s t s   l i k e   ' % % % q % % ' ) " , 
 	 	 	 	 	 	 u s e r ,   h o s t ,   h o s t ) ; 
 	 }   e l s e   { 
 	 	 s w i t c h _ s n p r i n t f v ( s q l ,   s i z e o f ( s q l ) ,   " s e l e c t   c o n t a c t   f r o m   s i p _ r e g i s t r a t i o n s   w h e r e   s i p _ u s e r = ' % q ' " ,   u s e r ) ; 
 	 } 
 
 
 	 s o f i a _ g l u e _ e x e c u t e _ s q l _ c a l l b a c k ( p r o f i l e ,   p r o f i l e - > i r e g _ m u t e x ,   s q l ,   s o f i a _ r e g _ f i n d _ c a l l b a c k ,   & c b t ) ; 
 
 	 r e t u r n   c b t . l i s t ; 
 } 
 
 
 s w i t c h _ c o n s o l e _ c a l l b a c k _ m a t c h _ t   * s o f i a _ r e g _ f i n d _ r e g _ u r l _ w i t h _ p o s i t i v e _ e x p i r e s _ m u l t i ( s o f i a _ p r o f i l e _ t   * p r o f i l e ,   c o n s t   c h a r   * u s e r ,   c o n s t   c h a r   * h o s t ) 
 { 
 	 s t r u c t   c a l l b a c k _ t   c b t   =   {   0   } ; 
 	 c h a r   s q l [ 5 1 2 ]   =   " " ; 
 
 	 i f   ( ! u s e r )   { 
 	 	 s w i t c h _ l o g _ p r i n t f ( S W I T C H _ C H A N N E L _ L O G ,   S W I T C H _ L O G _ E R R O R ,   " C a l l e d   w i t h   n u l l   u s e r ! \ n " ) ; 
 	 	 r e t u r n   N U L L ; 
 	 } 
 
 	 i f   ( h o s t )   { 
 	 	 s w i t c h _ s n p r i n t f v ( s q l ,   s i z e o f ( s q l ) ,   " s e l e c t   c o n t a c t , e x p i r e s   f r o m   s i p _ r e g i s t r a t i o n s   w h e r e   s i p _ u s e r = ' % q '   a n d   ( s i p _ h o s t = ' % q '   o r   p r e s e n c e _ h o s t s   l i k e   ' % % % q % % ' ) " , 
 	 	 	 	 	 	 u s e r ,   h o s t ,   h o s t ) ; 
 	 }   e l s e   { 
 	 	 s w i t c h _ s n p r i n t f v ( s q l ,   s i z e o f ( s q l ) ,   " s e l e c t   c o n t a c t , e x p i r e s   f r o m   s i p _ r e g i s t r a t i o n s   w h e r e   s i p _ u s e r = ' % q ' " ,   u s e r ) ; 
 	 } 
 
 	 s o f i a _ g l u e _ e x e c u t e _ s q l _ c a l l b a c k ( p r o f i l e ,   p r o f i l e - > i r e g _ m u t e x ,   s q l ,   s o f i a _ r e g _ f i n d _ r e g _ w i t h _ p o s i t i v e _ e x p i r e s _ c a l l b a c k ,   & c b t ) ; 
 
 	 r e t u r n   c b t . l i s t ; 
 } 
 
 
 v o i d   s o f i a _ r e g _ a u t h _ c h a l l e n g e ( s o f i a _ p r o f i l e _ t   * p r o f i l e ,   n u a _ h a n d l e _ t   * n h ,   s o f i a _ d i s p a t c h _ e v e n t _ t   * d e , 
 	 	 	 	 	 	 	     s o f i a _ r e g t y p e _ t   r e g t y p e ,   c o n s t   c h a r   * r e a l m ,   i n t   s t a l e ) 
 { 
 	 s w i t c h _ u u i d _ t   u u i d ; 
 	 c h a r   u u i d _ s t r [ S W I T C H _ U U I D _ F O R M A T T E D _ L E N G T H   +   1 ] ; 
 	 c h a r   * s q l ,   * a u t h _ s t r ; 
 	 m s g _ t   * m s g   =   N U L L ; 
 
 
 	 i f   ( d e   & &   d e - > d a t a )   { 
 	 	 m s g   =   d e - > d a t a - > e _ m s g ; 
 	 } 
 
 	 s w i t c h _ u u i d _ g e t ( & u u i d ) ; 
 	 s w i t c h _ u u i d _ f o r m a t ( u u i d _ s t r ,   & u u i d ) ; 
 
 	 s q l   =   s w i t c h _ m p r i n t f ( " i n s e r t   i n t o   s i p _ a u t h e n t i c a t i o n   ( n o n c e , e x p i r e s , p r o f i l e _ n a m e , h o s t n a m e ,   l a s t _ n c )   " 
 	 	 	 	 	 	   " v a l u e s ( ' % q ' ,   % l d ,   ' % q ' ,   ' % q ' ,   0 ) " ,   u u i d _ s t r , 
 	 	 	 	 	 	   ( l o n g )   s w i t c h _ e p o c h _ t i m e _ n o w ( N U L L )   +   ( p r o f i l e - > n o n c e _ t t l   ?   p r o f i l e - > n o n c e _ t t l   :   D E F A U L T _ N O N C E _ T T L ) , 
 	 	 	 	 	 	   p r o f i l e - > n a m e ,   m o d _ s o f i a _ g l o b a l s . h o s t n a m e ) ; 
 	 s w i t c h _ a s s e r t ( s q l   ! =   N U L L ) ; 
 	 s o f i a _ g l u e _ a c t u a l l y _ e x e c u t e _ s q l ( p r o f i l e ,   s q l ,   p r o f i l e - > i r e g _ m u t e x ) ; 
 	 s w i t c h _ s a f e _ f r e e ( s q l ) ; 
 
 	 a u t h _ s t r   =   s w i t c h _ m p r i n t f ( " D i g e s t   r e a l m = \ " % q \ " ,   n o n c e = \ " % q \ " , % s   a l g o r i t h m = M D 5 ,   q o p = \ " a u t h \ " " ,   r e a l m ,   u u i d _ s t r ,   s t a l e   ?   "   s t a l e = t r u e , "   :   " " ) ; 
 
 	 i f   ( r e g t y p e   = =   R E G _ R E G I S T E R )   { 
 	 	 n u a _ r e s p o n d ( n h ,   S I P _ 4 0 1 _ U N A U T H O R I Z E D ,   T A G _ I F ( m s g ,   N U T A G _ W I T H _ T H I S _ M S G ( m s g ) ) ,   S I P T A G _ W W W _ A U T H E N T I C A T E _ S T R ( a u t h _ s t r ) ,   T A G _ E N D ( ) ) ; 
 	 }   e l s e   i f   ( r e g t y p e   = =   R E G _ I N V I T E )   { 
 	 	 n u a _ r e s p o n d ( n h ,   S I P _ 4 0 7 _ P R O X Y _ A U T H _ R E Q U I R E D ,   
 	 	 	 	 	 T A G _ I F ( m s g ,   N U T A G _ W I T H _ T H I S _ M S G ( m s g ) ) ,   
 	 	 	 	 	 S I P T A G _ P R O X Y _ A U T H E N T I C A T E _ S T R ( a u t h _ s t r ) ,   T A G _ E N D ( ) ) ; 
 	 } 
 
 	 s w i t c h _ s a f e _ f r e e ( a u t h _ s t r ) ; 
 } 
 
 u i n t 3 2 _ t   s o f i a _ r e g _ r e g _ c o u n t ( s o f i a _ p r o f i l e _ t   * p r o f i l e ,   c o n s t   c h a r   * u s e r ,   c o n s t   c h a r   * h o s t ) 
 { 
 	 c h a r   b u f [ 3 2 ]   =   " " ; 
 	 c h a r   * s q l ; 
 	 
 	 s q l   =   s w i t c h _ m p r i n t f ( " s e l e c t   c o u n t ( * )   f r o m   s i p _ r e g i s t r a t i o n s   w h e r e   p r o f i l e _ n a m e = ' % q '   a n d   " 
 	 	 	 	 	 	   " s i p _ u s e r = ' % q '   a n d   ( s i p _ h o s t = ' % q '   o r   p r e s e n c e _ h o s t s   l i k e   ' % % % q % % ' ) " ,   p r o f i l e - > n a m e ,   u s e r ,   h o s t ,   h o s t ) ; 
 	 
 	 s o f i a _ g l u e _ e x e c u t e _ s q l 2 s t r ( p r o f i l e ,   p r o f i l e - > i r e g _ m u t e x ,   s q l ,   b u f ,   s i z e o f ( b u f ) ) ; 
 	 s w i t c h _ s a f e _ f r e e ( s q l ) ; 
 	 r e t u r n   a t o i ( b u f ) ; 	 	 	 	 	 	 	 	 	 	 	 	 	 
 } 
 
 s t a t i c   i n t   d e b o u n c e _ c h e c k ( s o f i a _ p r o f i l e _ t   * p r o f i l e ,   c o n s t   c h a r   * u s e r ,   c o n s t   c h a r   * h o s t ) 
 { 
 	 c h a r   k e y [ 5 1 2 ]   =   " " ; 
 	 i n t   r   =   0 ; 
 	 t i m e _ t   * l a s t ,   n o w   =   s w i t c h _ e p o c h _ t i m e _ n o w ( N U L L ) ; 
 
 	 s n p r i n t f ( k e y ,   s i z e o f ( k e y ) ,   " % s % s " ,   u s e r ,   h o s t ) ; 
 
 	 i f   ( ( l a s t   =   s w i t c h _ c o r e _ h a s h _ f i n d ( p r o f i l e - > m w i _ d e b o u n c e _ h a s h ,   k e y ) ) )   { 
 	 	 i f   ( n o w   -   * l a s t   >   3 0 )   { 
 	 	 	 * l a s t   =   n o w ; 
 	 	 	 r   =   1 ; 
 	 	 } 
 	 }   e l s e   { 
 	 	 l a s t   =   s w i t c h _ c o r e _ a l l o c ( p r o f i l e - > p o o l ,   s i z e o f ( * l a s t ) ) ; 
 	 	 * l a s t   =   n o w ; 
 	 	 s w i t c h _ c o r e _ h a s h _ i n s e r t ( p r o f i l e - > m w i _ d e b o u n c e _ h a s h ,   k e y ,   l a s t ) ; 
 	 	 r   =   1 ; 
 	 } 
 
 	 r e t u r n   r ; 
 } 
 	 	 	 	 	 	 
 
 u i n t 8 _ t   s o f i a _ r e g _ h a n d l e _ r e g i s t e r ( n u a _ t   * n u a ,   s o f i a _ p r o f i l e _ t   * p r o f i l e ,   n u a _ h a n d l e _ t   * n h ,   s i p _ t   c o n s t   * s i p , 
 	 	 	 	 	 	 	 	 s o f i a _ d i s p a t c h _ e v e n t _ t   * d e ,   s o f i a _ r e g t y p e _ t   r e g t y p e ,   c h a r   * k e y , 
 	 	 	 	 	 	 	 	     u i n t 3 2 _ t   k e y l e n ,   s w i t c h _ e v e n t _ t   * * v _ e v e n t ,   c o n s t   c h a r   * i s _ n a t ) 
 { 
 	 s i p _ t o _ t   c o n s t   * t o   =   N U L L ; 
 	 s i p _ f r o m _ t   c o n s t   * f r o m   =   N U L L ; 
 	 s i p _ e x p i r e s _ t   c o n s t   * e x p i r e s   =   N U L L ; 
 	 s i p _ a u t h o r i z a t i o n _ t   c o n s t   * a u t h o r i z a t i o n   =   N U L L ; 
 	 s i p _ c o n t a c t _ t   c o n s t   * c o n t a c t   =   N U L L ; 
 	 c h a r   * s q l ; 
 	 s w i t c h _ e v e n t _ t   * s _ e v e n t ; 
 	 c o n s t   c h a r   * r e g _ m e t a   =   N U L L ; 
 	 c o n s t   c h a r   * t o _ u s e r   =   N U L L ; 
 	 c o n s t   c h a r   * t o _ h o s t   =   N U L L ; 
 	 c h a r   * m w i _ a c c o u n t   =   N U L L ; 
 	 c h a r   * d u p _ m w i _ a c c o u n t   =   N U L L ; 
 	 c h a r   * m w i _ u s e r   =   N U L L ; 
 	 c h a r   * m w i _ h o s t   =   N U L L ; 
 	 c h a r   * v a r   =   N U L L ; 
 	 c o n s t   c h a r   * f r o m _ u s e r   =   N U L L ; 
 	 c o n s t   c h a r   * f r o m _ h o s t   =   N U L L ; 
 	 c o n s t   c h a r   * r e g _ h o s t   =   p r o f i l e - > r e g _ d b _ d o m a i n ; 
 	 c o n s t   c h a r   * s u b _ h o s t   =   p r o f i l e - > s u b _ d o m a i n ; 
 	 c h a r   c o n t a c t _ s t r [ 1 0 2 4 ]   =   " " ; 
 	 u i n t 8 _ t   m u l t i _ r e g   =   0 ,   m u l t i _ r e g _ c o n t a c t   =   0 ,   a v o i d _ m u l t i _ r e g   =   0 ; 
 	 u i n t 8 _ t   s t a l e   =   0 ,   f o r b i d d e n   =   0 ; 
 	 a u t h _ r e s _ t   a u t h _ r e s   =   A U T H _ O K ; 
 	 l o n g   e x p t i m e   =   3 0 0 ; 
 	 s w i t c h _ e v e n t _ t   * e v e n t ; 
 	 c o n s t   c h a r   * r p i d   =   " u n k n o w n " ; 
 	 c o n s t   c h a r   * d i s p l a y   =   " \ " u s e r \ " " ; 
 	 c h a r   n e t w o r k _ i p [ 8 0 ] ; 
 	 c h a r   n e t w o r k _ p o r t _ c [ 6 ] ; 
 	 c h a r   u r l _ i p [ 8 0 ] ; 
 	 i n t   n e t w o r k _ p o r t ; 
 	 c o n s t   c h a r   * r e g _ d e s c   =   " R e g i s t e r e d " ; 
 	 c o n s t   c h a r   * c a l l _ i d   =   N U L L ; 
 	 c h a r   * f o r c e _ u s e r ; 
 	 c h a r   r e c e i v e d _ d a t a [ 1 2 8 ]   =   " " ; 
 	 c h a r   * p a t h _ v a l   =   N U L L ; 
 	 s w i t c h _ e v e n t _ t   * a u t h _ p a r a m s   =   N U L L ; 
 	 i n t   r   =   0 ; 
 	 l o n g   r e g _ c o u n t   =   0 ; 
 	 c o n s t   c h a r   * a g e n t   =   " u n k n o w n " ; 
 	 c o n s t   c h a r   * p r e s _ o n _ r e g   =   N U L L ; 
 	 i n t   s e n d _ p r e s   =   0 ; 
 	 i n t   i s _ t l s   =   0 ,   i s _ t c p   =   0 ; 
 
 	 i f   ( v _ e v e n t   & &   * v _ e v e n t )   p r e s _ o n _ r e g   =   s w i t c h _ e v e n t _ g e t _ h e a d e r ( * v _ e v e n t ,   " s e n d - p r e s e n c e - o n - r e g i s t e r " ) ; 
 
 	 i f   ( ! ( s e n d _ p r e s   =   s w i t c h _ t r u e ( p r e s _ o n _ r e g ) ) )   { 
 	 	 i f   ( p r e s _ o n _ r e g   & &   ! s t r c a s e c m p ( p r e s _ o n _ r e g ,   " f i r s t - o n l y " ) )   { 
 	 	 	 s e n d _ p r e s   =   2 ; 
 	 	 } 
 	 } 
 
 	 / *   a l l   c a l l e r s   m u s t   c o n f i r m   t h a t   s i p   a n d   s i p - > s i p _ r e q u e s t   a r e   n o t   N U L L   * / 
 	 s w i t c h _ a s s e r t ( s i p   ! =   N U L L   & &   s i p - > s i p _ r e q u e s t   ! =   N U L L ) ; 
 
 	 s o f i a _ g l u e _ g e t _ a d d r ( d e - > d a t a - > e _ m s g ,   n e t w o r k _ i p ,   s i z e o f ( n e t w o r k _ i p ) ,   & n e t w o r k _ p o r t ) ; 
 
 	 s n p r i n t f ( n e t w o r k _ p o r t _ c ,   s i z e o f ( n e t w o r k _ p o r t _ c ) ,   " % d " ,   n e t w o r k _ p o r t ) ; 
 
 	 s n p r i n t f ( u r l _ i p ,   s i z e o f ( u r l _ i p ) ,   ( m s g _ a d d r i n f o ( d e - > d a t a - > e _ m s g ) ) - > a i _ a d d r - > s a _ f a m i l y   = =   A F _ I N E T 6   ?   " [ % s ] "   :   " % s " ,   n e t w o r k _ i p ) ; 
 
 	 e x p i r e s   =   s i p - > s i p _ e x p i r e s ; 
 	 a u t h o r i z a t i o n   =   s i p - > s i p _ a u t h o r i z a t i o n ; 
 	 c o n t a c t   =   s i p - > s i p _ c o n t a c t ; 
 	 t o   =   s i p - > s i p _ t o ; 
 	 f r o m   =   s i p - > s i p _ f r o m ; 
 
 	 i f   ( s i p - > s i p _ u s e r _ a g e n t )   { 
 	 	 a g e n t   =   s i p - > s i p _ u s e r _ a g e n t - > g _ s t r i n g ; 
 	 } 
 
 	 i f   ( f r o m )   { 
 	 	 f r o m _ u s e r   =   f r o m - > a _ u r l - > u r l _ u s e r ; 
 	 	 f r o m _ h o s t   =   f r o m - > a _ u r l - > u r l _ h o s t ; 
 	 } 
 
 	 i f   ( t o )   { 
 	 	 t o _ u s e r   =   t o - > a _ u r l - > u r l _ u s e r ; 
 	 	 t o _ h o s t   =   t o - > a _ u r l - > u r l _ h o s t ; 
 	 } 
 
 	 i f   ( ! t o _ u s e r ) 
 	 	 t o _ u s e r   =   f r o m _ u s e r ; 
 	 i f   ( ! t o _ h o s t ) 
 	 	 t o _ h o s t   =   f r o m _ h o s t ; 
 
 	 i f   ( ! t o _ u s e r   | |   ! t o _ h o s t )   { 
 	 	 s w i t c h _ l o g _ p r i n t f ( S W I T C H _ C H A N N E L _ L O G ,   S W I T C H _ L O G _ E R R O R ,   " C a n   n o t   d o   a u t h o r i z a t i o n   w i t h o u t   a   c o m p l e t e   h e a d e r   i n   R E G I S T E R   r e q u e s t   f r o m   % s : % d \ n " ,   
 	 	 	 	 	 	     n e t w o r k _ i p ,   n e t w o r k _ p o r t ) ; 
 
 	 	 n u a _ r e s p o n d ( n h ,   S I P _ 4 0 1 _ U N A U T H O R I Z E D ,   N U T A G _ W I T H _ T H I S _ M S G ( d e - > d a t a - > e _ m s g ) ,   T A G _ E N D ( ) ) ; 
 	 	 s w i t c h _ g o t o _ i n t ( r ,   1 ,   e n d ) ; 
 	 } 
 
 	 i f   ( z s t r ( r e g _ h o s t ) )   { 
 	 	 r e g _ h o s t   =   t o _ h o s t ; 
 	 } 
 	 i f   ( z s t r ( s u b _ h o s t ) )   { 
 	 	 s u b _ h o s t   =   t o _ h o s t ; 
 	 } 
 
 	 i f   ( c o n t a c t   & &   c o n t a c t - > m _ u r l )   { 
 	 	 c o n s t   c h a r   * p o r t   =   c o n t a c t - > m _ u r l - > u r l _ p o r t ; 
 	 	 c h a r   n e w _ p o r t [ 2 5 ]   =   " " ; 
 	 	 c o n s t   c h a r   * c o n t a c t _ h o s t   =   c o n t a c t - > m _ u r l - > u r l _ h o s t ; 
 	 	 c h a r   * p a t h _ e n c o d e d   =   N U L L ; 
 	 	 i n t   p a t h _ e n c o d e d _ l e n   =   0 ; 
 	 	 c o n s t   c h a r   * p r o t o   =   " s i p " ; 
 
 	 	 i f   ( s w i t c h _ s t r i s t r ( " t r a n s p o r t = t l s " ,   s i p - > s i p _ c o n t a c t - > m _ u r l - > u r l _ p a r a m s ) )   { 
 	 	 	 i s _ t l s   + =   1 ; 
 	 	 } 
 
 	 	 i f   ( s i p - > s i p _ c o n t a c t - > m _ u r l - > u r l _ t y p e   = =   u r l _ s i p s )   { 
 	 	 	 p r o t o   =   " s i p s " ; 
 	 	 	 i s _ t l s   + =   2 ; 
 	 	 } 
 
 	 	 i f   ( s w i t c h _ s t r i s t r ( " t r a n s p o r t = t c p " ,   s i p - > s i p _ c o n t a c t - > m _ u r l - > u r l _ p a r a m s ) )   { 
 	 	 	 i s _ t c p   =   1 ; 
 	 	 } 
 
 	 	 d i s p l a y   =   c o n t a c t - > m _ d i s p l a y ; 
 
 	 	 i f   ( i s _ n a t )   { 
 	 	 	 i f   ( i s _ t l s )   { 
 	 	 	 	 r e g _ d e s c   =   " R e g i s t e r e d ( T L S - N A T ) " ; 
 	 	 	 }   e l s e   i f   ( i s _ t c p )   { 
 	 	 	 	 r e g _ d e s c   =   " R e g i s t e r e d ( T C P - N A T ) " ; 
 	 	 	 }   e l s e   { 
 	 	 	 	 r e g _ d e s c   =   " R e g i s t e r e d ( U D P - N A T ) " ; 
 	 	 	 } 
 	 	 	 / / c o n t a c t _ h o s t   =   u r l _ i p ; 
 	 	 	 / / s w i t c h _ s n p r i n t f ( n e w _ p o r t ,   s i z e o f ( n e w _ p o r t ) ,   " : % d " ,   n e t w o r k _ p o r t ) ; 
 	 	 	 / / p o r t   =   N U L L ; 
 	 	 }   e l s e   { 
 	 	 	 i f   ( i s _ t l s )   { 
 	 	 	 	 r e g _ d e s c   =   " R e g i s t e r e d ( T L S ) " ; 
 	 	 	 }   e l s e   i f   ( i s _ t c p )   { 
 	 	 	 	 r e g _ d e s c   =   " R e g i s t e r e d ( T C P ) " ; 
 	 	 	 }   e l s e   { 
 	 	 	 	 r e g _ d e s c   =   " R e g i s t e r e d ( U D P ) " ; 
 	 	 	 } 
 	 	 } 
 
 	 	 i f   ( z s t r ( d i s p l a y ) )   { 
 	 	 	 i f   ( t o )   { 
 	 	 	 	 d i s p l a y   =   t o - > a _ d i s p l a y ; 
 	 	 	 	 i f   ( z s t r ( d i s p l a y ) )   { 
 	 	 	 	 	 d i s p l a y   =   " \ " u s e r \ " " ; 
 	 	 	 	 } 
 	 	 	 } 
 	 	 } 
 
 	 	 i f   ( s i p - > s i p _ p a t h )   { 
 	 	 	 p a t h _ v a l   =   s i p _ h e a d e r _ a s _ s t r i n g ( n u a _ h a n d l e _ h o m e ( n h ) ,   ( v o i d   * )   s i p - > s i p _ p a t h ) ; 
 	 	 	 p a t h _ e n c o d e d _ l e n   =   ( i n t ) ( s t r l e n ( p a t h _ v a l )   *   3 )   +   1 ; 
 	 	 	 s w i t c h _ z m a l l o c ( p a t h _ e n c o d e d ,   p a t h _ e n c o d e d _ l e n ) ; 
 	 	 	 s w i t c h _ c o p y _ s t r i n g ( p a t h _ e n c o d e d ,   " ; f s _ p a t h = " ,   1 0 ) ; 
 	 	 	 s w i t c h _ u r l _ e n c o d e ( p a t h _ v a l ,   p a t h _ e n c o d e d   +   9 ,   p a t h _ e n c o d e d _ l e n   -   9 ) ; 
 	 	 }   e l s e   i f   ( i s _ n a t )   { 
 	 	 	 c h a r   m y _ c o n t a c t _ s t r [ 1 0 2 4 ] ; 
 	 	 	 i f   ( s i p - > s i p _ c o n t a c t - > m _ u r l - > u r l _ p a r a m s )   { 
 	 	 	 	 s w i t c h _ s n p r i n t f ( m y _ c o n t a c t _ s t r ,   s i z e o f ( m y _ c o n t a c t _ s t r ) ,   " s i p : % s @ % s : % d ; % s " , 
 	 	 	 	 	 	 	 	 c o n t a c t - > m _ u r l - > u r l _ u s e r ,   u r l _ i p ,   n e t w o r k _ p o r t ,   s i p - > s i p _ c o n t a c t - > m _ u r l - > u r l _ p a r a m s ) ; 
 	 	 	 }   e l s e   { 
 	 	 	 	 s w i t c h _ s n p r i n t f ( m y _ c o n t a c t _ s t r ,   s i z e o f ( m y _ c o n t a c t _ s t r ) ,   " s i p : % s @ % s : % d " ,   c o n t a c t - > m _ u r l - > u r l _ u s e r ,   u r l _ i p ,   n e t w o r k _ p o r t ) ; 
 	 	 	 } 
 
 	 	 	 p a t h _ e n c o d e d _ l e n   =   ( i n t ) ( s t r l e n ( m y _ c o n t a c t _ s t r )   *   3 )   +   1 ; 
 
 	 	 	 s w i t c h _ z m a l l o c ( p a t h _ e n c o d e d ,   p a t h _ e n c o d e d _ l e n ) ; 
 	 	 	 s w i t c h _ c o p y _ s t r i n g ( p a t h _ e n c o d e d ,   " ; f s _ p a t h = " ,   1 0 ) ; 
 	 	 	 s w i t c h _ u r l _ e n c o d e ( m y _ c o n t a c t _ s t r ,   p a t h _ e n c o d e d   +   9 ,   p a t h _ e n c o d e d _ l e n   -   9 ) ; 
 	 	 	 e x p t i m e   =   3 0 ; 
 	 	 } 
 
 	 	 i f   ( p o r t )   { 
 	 	 	 s w i t c h _ s n p r i n t f ( n e w _ p o r t ,   s i z e o f ( n e w _ p o r t ) ,   " : % s " ,   p o r t ) ; 
 	 	 } 
 
 	 	 i f   ( i s _ n a t   & &   s o f i a _ t e s t _ p f l a g ( p r o f i l e ,   P F L A G _ R E C I E V E D _ I N _ N A T _ R E G _ C O N T A C T ) )   { 
 	 	 	 s w i t c h _ s n p r i n t f ( r e c e i v e d _ d a t a ,   s i z e o f ( r e c e i v e d _ d a t a ) ,   " ; r e c e i v e d = % s : % d " ,   u r l _ i p ,   n e t w o r k _ p o r t ) ; 
 	 	 } 
 
 	 	 i f   ( c o n t a c t - > m _ u r l - > u r l _ p a r a m s )   { 
 	 	 	 s w i t c h _ s n p r i n t f ( c o n t a c t _ s t r ,   s i z e o f ( c o n t a c t _ s t r ) ,   " % s   < % s : % s @ % s % s ; % s % s % s % s > " , 
 	 	 	 	 	 	 	 d i s p l a y ,   p r o t o ,   c o n t a c t - > m _ u r l - > u r l _ u s e r ,   c o n t a c t _ h o s t ,   n e w _ p o r t , 
 	 	 	 	 	 	 	 c o n t a c t - > m _ u r l - > u r l _ p a r a m s ,   r e c e i v e d _ d a t a ,   i s _ n a t   ?   " ; f s _ n a t = y e s "   :   " " ,   p a t h _ e n c o d e d   ?   p a t h _ e n c o d e d   :   " " ) ; 
 	 	 }   e l s e   { 
 	 	 	 s w i t c h _ s n p r i n t f ( c o n t a c t _ s t r ,   s i z e o f ( c o n t a c t _ s t r ) ,   " % s   < % s : % s @ % s % s % s % s % s > " ,   d i s p l a y ,   p r o t o ,   c o n t a c t - > m _ u r l - > u r l _ u s e r ,   c o n t a c t _ h o s t ,   n e w _ p o r t , 
 	 	 	 	 	 	 	 r e c e i v e d _ d a t a ,   i s _ n a t   ?   " ; f s _ n a t = y e s "   :   " " ,   p a t h _ e n c o d e d   ?   p a t h _ e n c o d e d   :   " " ) ; 
 	 	 } 
 
 	 	 s w i t c h _ s a f e _ f r e e ( p a t h _ e n c o d e d ) ; 
 	 } 
 
 	 i f   ( e x p i r e s )   { 
 	 	 e x p t i m e   =   e x p i r e s - > e x _ d e l t a ; 
 	 }   e l s e   i f   ( c o n t a c t   & &   c o n t a c t - > m _ e x p i r e s )   { 
 	 	 e x p t i m e   =   a t o l ( c o n t a c t - > m _ e x p i r e s ) ; 
 	 } 
 
 	 i f   ( r e g t y p e   = =   R E G _ R E G I S T E R )   { 
 	 	 a u t h o r i z a t i o n   =   s i p - > s i p _ a u t h o r i z a t i o n ; 
 	 }   e l s e   i f   ( r e g t y p e   = =   R E G _ I N V I T E )   { 
 	 	 a u t h o r i z a t i o n   =   s i p - > s i p _ p r o x y _ a u t h o r i z a t i o n ; 
 	 } 
 
 	 i f   ( r e g t y p e   = =   R E G _ A U T O _ R E G I S T E R   | |   ( r e g t y p e   = =   R E G _ R E G I S T E R   & &   s o f i a _ t e s t _ p f l a g ( p r o f i l e ,   P F L A G _ B L I N D _ R E G ) ) )   { 
 	 	 r e g t y p e   =   R E G _ R E G I S T E R ; 
 	 	 g o t o   r e g ; 
 	 } 
 
 	 i f   ( a u t h o r i z a t i o n )   { 
 	 	 c h a r   * v _ c o n t a c t _ s t r   =   N U L L ; 
 	 	 c o n s t   c h a r   * u s e r n a m e   =   " u n k n o w n " ; 
 	 	 c o n s t   c h a r   * r e a l m   =   r e g _ h o s t ; 
 	 	 i f   ( ( a u t h _ r e s   =   s o f i a _ r e g _ p a r s e _ a u t h ( p r o f i l e ,   a u t h o r i z a t i o n ,   s i p ,   d e ,   s i p - > s i p _ r e q u e s t - > r q _ m e t h o d _ n a m e , 
 	 	 	 	 	 	 	 	 	 	 	   k e y ,   k e y l e n ,   n e t w o r k _ i p ,   v _ e v e n t ,   e x p t i m e ,   r e g t y p e ,   t o _ u s e r ,   & a u t h _ p a r a m s ,   & r e g _ c o u n t ) )   = =   A U T H _ S T A L E )   { 
 	 	 	 s t a l e   =   1 ; 
 	 	 } 
 
 
 	 	 i f   ( a u t h _ p a r a m s )   { 
 	 	 	 u s e r n a m e   =   s w i t c h _ e v e n t _ g e t _ h e a d e r ( a u t h _ p a r a m s ,   " s i p _ a u t h _ u s e r n a m e " ) ; 
 	 	 	 r e a l m   =   s w i t c h _ e v e n t _ g e t _ h e a d e r ( a u t h _ p a r a m s ,   " s i p _ a u t h _ r e a l m " ) ; 
 	 	 } 
 	 	 i f   ( s w i t c h _ e v e n t _ c r e a t e _ s u b c l a s s ( & s _ e v e n t ,   S W I T C H _ E V E N T _ C U S T O M ,   M Y _ E V E N T _ R E G I S T E R _ A T T E M P T )   = =   S W I T C H _ S T A T U S _ S U C C E S S )   { 
 	 	 	 s w i t c h _ e v e n t _ a d d _ h e a d e r _ s t r i n g ( s _ e v e n t ,   S W I T C H _ S T A C K _ B O T T O M ,   " p r o f i l e - n a m e " ,   p r o f i l e - > n a m e ) ; 
 	 	 	 s w i t c h _ e v e n t _ a d d _ h e a d e r _ s t r i n g ( s _ e v e n t ,   S W I T C H _ S T A C K _ B O T T O M ,   " f r o m - u s e r " ,   t o _ u s e r ) ; 
 	 	 	 s w i t c h _ e v e n t _ a d d _ h e a d e r _ s t r i n g ( s _ e v e n t ,   S W I T C H _ S T A C K _ B O T T O M ,   " f r o m - h o s t " ,   r e g _ h o s t ) ; 
 	 	 	 i f   ( c o n t a c t ) 
 	 	 	 	 s w i t c h _ e v e n t _ a d d _ h e a d e r _ s t r i n g ( s _ e v e n t ,   S W I T C H _ S T A C K _ B O T T O M ,   " c o n t a c t " ,   c o n t a c t _ s t r ) ; 
 	 	 	 s w i t c h _ e v e n t _ a d d _ h e a d e r _ s t r i n g ( s _ e v e n t ,   S W I T C H _ S T A C K _ B O T T O M ,   " c a l l - i d " ,   c a l l _ i d ) ; 
 	 	 	 s w i t c h _ e v e n t _ a d d _ h e a d e r _ s t r i n g ( s _ e v e n t ,   S W I T C H _ S T A C K _ B O T T O M ,   " r p i d " ,   r p i d ) ; 
 	 	 	 s w i t c h _ e v e n t _ a d d _ h e a d e r _ s t r i n g ( s _ e v e n t ,   S W I T C H _ S T A C K _ B O T T O M ,   " s t a t u s " ,   r e g _ d e s c ) ; 
 	 	 	 i f   ( c o n t a c t ) 
 	 	 	 	 s w i t c h _ e v e n t _ a d d _ h e a d e r ( s _ e v e n t ,   S W I T C H _ S T A C K _ B O T T O M ,   " e x p i r e s " ,   " % l d " ,   ( l o n g )   e x p t i m e ) ; 
 	 	 	 s w i t c h _ e v e n t _ a d d _ h e a d e r _ s t r i n g ( s _ e v e n t ,   S W I T C H _ S T A C K _ B O T T O M ,   " t o - u s e r " ,   f r o m _ u s e r ) ; 
 	 	 	 s w i t c h _ e v e n t _ a d d _ h e a d e r _ s t r i n g ( s _ e v e n t ,   S W I T C H _ S T A C K _ B O T T O M ,   " t o - h o s t " ,   f r o m _ h o s t ) ; 
 	 	 	 s w i t c h _ e v e n t _ a d d _ h e a d e r _ s t r i n g ( s _ e v e n t ,   S W I T C H _ S T A C K _ B O T T O M ,   " n e t w o r k - i p " ,   n e t w o r k _ i p ) ; 
 	 	 	 s w i t c h _ e v e n t _ a d d _ h e a d e r _ s t r i n g ( s _ e v e n t ,   S W I T C H _ S T A C K _ B O T T O M ,   " n e t w o r k - p o r t " ,   n e t w o r k _ p o r t _ c ) ; 
 	 	 	 s w i t c h _ e v e n t _ a d d _ h e a d e r _ s t r i n g ( s _ e v e n t ,   S W I T C H _ S T A C K _ B O T T O M ,   " u s e r n a m e " ,   u s e r n a m e ) ; 
 	 	 	 s w i t c h _ e v e n t _ a d d _ h e a d e r _ s t r i n g ( s _ e v e n t ,   S W I T C H _ S T A C K _ B O T T O M ,   " r e a l m " ,   r e a l m ) ; 
 	 	 	 s w i t c h _ e v e n t _ a d d _ h e a d e r _ s t r i n g ( s _ e v e n t ,   S W I T C H _ S T A C K _ B O T T O M ,   " u s e r - a g e n t " ,   a g e n t ) ; 
                         s w i t c h   ( a u t h _ r e s )   { 
                         c a s e   A U T H _ O K : 
                                 s w i t c h _ e v e n t _ a d d _ h e a d e r _ s t r i n g ( s _ e v e n t ,   S W I T C H _ S T A C K _ B O T T O M ,   " a u t h - r e s u l t " ,   " S U C C E S S " ) ; 
                                 b r e a k ; 
                         c a s e   A U T H _ R E N E W E D : 
                                 s w i t c h _ e v e n t _ a d d _ h e a d e r _ s t r i n g ( s _ e v e n t ,   S W I T C H _ S T A C K _ B O T T O M ,   " a u t h - r e s u l t " ,   " R E N E W E D " ) ; 
                                 b r e a k ; 
                         c a s e   A U T H _ S T A L E : 
                                 s w i t c h _ e v e n t _ a d d _ h e a d e r _ s t r i n g ( s _ e v e n t ,   S W I T C H _ S T A C K _ B O T T O M ,   " a u t h - r e s u l t " ,   " S T A L E " ) ; 
                                 b r e a k ; 
                         c a s e   A U T H _ F O R B I D D E N : 
                                 s w i t c h _ e v e n t _ a d d _ h e a d e r _ s t r i n g ( s _ e v e n t ,   S W I T C H _ S T A C K _ B O T T O M ,   " a u t h - r e s u l t " ,   " F O R B I D D E N " ) ; 
                                 b r e a k ; 
                         } 
 	 	 	 s w i t c h _ e v e n t _ f i r e ( & s _ e v e n t ) ; 
 	 	 } 
 
 	 	 i f   ( c o n t a c t   & &   e x p t i m e   & &   v _ e v e n t   & &   * v _ e v e n t )   { 
 	 	 	 u i n t 3 2 _ t   e x p _ v a r ; 
 	 	 	 u i n t 3 2 _ t   e x p _ m a x _ d e v i a t i o n _ v a r ; 
 	 	 	 c h a r   * a l l o w _ m u l t i r e g   =   N U L L ; 
 	 	 	 i n t   a u t o _ c o n n e c t i l e   =   0 ; 
 
 	 	 	 a l l o w _ m u l t i r e g   =   s w i t c h _ e v e n t _ g e t _ h e a d e r ( * v _ e v e n t ,   " s i p - a l l o w - m u l t i p l e - r e g i s t r a t i o n s " ) ; 
 	 	 	 i f   ( a l l o w _ m u l t i r e g   & &   s w i t c h _ f a l s e ( a l l o w _ m u l t i r e g ) )   { 
 	 	 	 	 a v o i d _ m u l t i _ r e g   =   1 ; 
 	 	 	 } 
 
 	 	 	 / *   A l l o w   u s   t o   f o r c e   t h e   S I P   u s e r   t o   b e   s o m e t h i n g   s p e c i f i c   -   n e e d e d   i f   
 	 	 	   *   w e   -   f o r   e x a m p l e   -   w a n t   t o   b e   a b l e   t o   e n s u r e   t h a t   t h e   u s e r n a m e   a   U A   c a n 
 	 	 	   *   b e   c o n t a c t e d   a t   i s   t h e   s a m e   o n e   t h a t   t h e y   u s e d   f o r   a u t h e n t i c a t i o n . 
 	 	 	   * / 
 	 	 	 i f   ( ( f o r c e _ u s e r   =   s w i t c h _ e v e n t _ g e t _ h e a d e r ( * v _ e v e n t ,   " s i p - f o r c e - u s e r " ) ) )   { 
 	 	 	 	 t o _ u s e r   =   f o r c e _ u s e r ; 
 	 	 	 } 
 
 	 	 	 i f   ( p r o f i l e - > s e r v e r _ r p o r t _ l e v e l   = =   3   & &   s i p - > s i p _ u s e r _ a g e n t   & & 
 	 	 	 	 s i p - > s i p _ u s e r _ a g e n t - > g _ s t r i n g   & &   ! s t r n c a s e c m p ( s i p - > s i p _ u s e r _ a g e n t - > g _ s t r i n g ,   " P o l y c o m " ,   7 ) )   { 
 	 	 	 	 i f   ( s i p   & &   s i p - > s i p _ v i a )   { 
 	 	 	 	 	 c o n s t   c h a r   * h o s t   =   s i p - > s i p _ v i a - > v _ h o s t ; 
 	 	 	 	 	 c o n s t   c h a r   * c _ p o r t   =   s i p - > s i p _ v i a - > v _ p o r t ; 
 	 	 	 	 	 i n t   p o r t   =   0 ; 
 
 	 	 	 	 	 i f   ( c _ p o r t )   p o r t   =   a t o i ( c _ p o r t ) ; 
 	 	 	 	 	 i f   ( ! p o r t )     p o r t   =   5 0 6 0 ; 
 
 	 	 	 	 	 i f   ( h o s t   & &   s t r c m p ( n e t w o r k _ i p ,   h o s t ) )   { 
 	 	 	 	 	 	 a u t o _ c o n n e c t i l e   =   1 ; 
 	 	 	 	 	 }   e l s e   i f   ( p o r t   ! =   n e t w o r k _ p o r t )   { 
 	 	 	 	 	 	 a u t o _ c o n n e c t i l e   =   1 ; 
 	 	 	 	 	 } 
 	 	 	 	 }   e l s e   { 
 	 	 	 	 	 a u t o _ c o n n e c t i l e   =   1 ; 
 	 	 	 	 } 
 	 	 	 } 
 
 	 	 	 i f   ( a u t o _ c o n n e c t i l e   | |   ( v _ c o n t a c t _ s t r   =   s w i t c h _ e v e n t _ g e t _ h e a d e r ( * v _ e v e n t ,   " s i p - f o r c e - c o n t a c t " ) ) )   { 
 	 	 	 	 i f   ( a u t o _ c o n n e c t i l e   | |   ( ! s t r c a s e c m p ( v _ c o n t a c t _ s t r ,   " N D L B - c o n n e c t i l e - d y s f u n c t i o n - 2 . 0 " ) ) )   { 
 	 	 	 	 	 c h a r   * p a t h _ e n c o d e d   =   N U L L ; 
 	 	 	 	 	 s i z e _ t   p a t h _ e n c o d e d _ l e n ; 
 	 	 	 	 	 c h a r   m y _ c o n t a c t _ s t r [ 1 0 2 4 ] ; 
 
 	 	 	 	 	 s w i t c h _ s n p r i n t f ( m y _ c o n t a c t _ s t r ,   s i z e o f ( m y _ c o n t a c t _ s t r ) ,   " s i p : % s @ % s : % d " ,   c o n t a c t - > m _ u r l - > u r l _ u s e r ,   u r l _ i p ,   n e t w o r k _ p o r t ) ; 
 	 	 	 	 	 p a t h _ e n c o d e d _ l e n   =   ( s t r l e n ( m y _ c o n t a c t _ s t r )   *   3 )   +   1 ; 
 
 	 	 	 	 	 i f   ( ! s w i t c h _ s t r i s t r ( " f s _ p a t h = " ,   c o n t a c t _ s t r ) )   { 
 	 	 	 	 	 s w i t c h _ z m a l l o c ( p a t h _ e n c o d e d ,   p a t h _ e n c o d e d _ l e n ) ; 
 	 	 	 	 	 s w i t c h _ c o p y _ s t r i n g ( p a t h _ e n c o d e d ,   " ; f s _ n a t = y e s ; f s _ p a t h = " ,   2 1 ) ; 
 	 	 	 	 	 s w i t c h _ u r l _ e n c o d e ( m y _ c o n t a c t _ s t r ,   p a t h _ e n c o d e d   +   2 0 ,   p a t h _ e n c o d e d _ l e n   -   2 0 ) ; 
 	 	 	 	 	 r e g _ d e s c   =   " R e g i s t e r e d ( A U T O - N A T - 2 . 0 ) " ; 
 	 	 	 	 	 e x p t i m e   =   3 0 ; 
 
 	 	 	 	 	 / *   p l a c e   f s _ p a t h   ( t h e   e n c o d e d   p a t h )   i n s i d e   t h e   < . . . >   o f   t h e   c o n t a c t   s t r i n g ,   i f   p o s s i b l e   * / 
 	 	 	 	 	 i f   ( c o n t a c t _ s t r [ s t r l e n ( c o n t a c t _ s t r )   -   1 ]   = =   ' > ' )   { 
 	 	 	 	 	 	 s w i t c h _ s n p r i n t f ( c o n t a c t _ s t r   +   s t r l e n ( c o n t a c t _ s t r )   -   1 ,   s i z e o f ( c o n t a c t _ s t r )   -   s t r l e n ( c o n t a c t _ s t r )   +   1 ,   " % s > " ,   p a t h _ e n c o d e d ) ; 
 	 	 	 	 	 }   e l s e   { 
 	 	 	 	 	 	 s w i t c h _ s n p r i n t f ( c o n t a c t _ s t r   +   s t r l e n ( c o n t a c t _ s t r ) ,   s i z e o f ( c o n t a c t _ s t r )   -   s t r l e n ( c o n t a c t _ s t r ) ,   " % s " ,   p a t h _ e n c o d e d ) ; 
 	 	 	 	 	 } 
 	 	 	 	 	 	 s w i t c h _ s a f e _ f r e e ( p a t h _ e n c o d e d ) ; 
 	 	 	 	 	 } 
 	 	 	 	 }   e l s e   { 
 	 	 	 	 	 i f   ( * r e c e i v e d _ d a t a   & &   s o f i a _ t e s t _ p f l a g ( p r o f i l e ,   P F L A G _ R E C I E V E D _ I N _ N A T _ R E G _ C O N T A C T ) )   { 
 	 	 	 	 	 	 s w i t c h _ s n p r i n t f ( r e c e i v e d _ d a t a ,   s i z e o f ( r e c e i v e d _ d a t a ) ,   " ; r e c e i v e d = % s : % d " ,   u r l _ i p ,   n e t w o r k _ p o r t ) ; 
 	 	 	 	 	 } 
 
 	 	 	 	 	 i f   ( ! s t r c a s e c m p ( v _ c o n t a c t _ s t r ,   " n a t - c o n n e c t i l e - d y s f u n c t i o n " )   | | 
 	 	 	 	 	 	 ! s t r c a s e c m p ( v _ c o n t a c t _ s t r ,   " N D L B - c o n n e c t i l e - d y s f u n c t i o n " )   | |   ! s t r c a s e c m p ( v _ c o n t a c t _ s t r ,   " N D L B - t l s - c o n n e c t i l e - d y s f u n c t i o n " ) )   { 
 	 	 	 	 	 	 i f   ( c o n t a c t - > m _ u r l - > u r l _ p a r a m s )   { 
 	 	 	 	 	 	 	 s w i t c h _ s n p r i n t f ( c o n t a c t _ s t r ,   s i z e o f ( c o n t a c t _ s t r ) ,   " % s   < s i p : % s @ % s : % d ; % s % s ; f s _ n a t = y e s > " , 
 	 	 	 	 	 	 	 	 	 	 	 d i s p l a y ,   c o n t a c t - > m _ u r l - > u r l _ u s e r ,   u r l _ i p ,   n e t w o r k _ p o r t ,   c o n t a c t - > m _ u r l - > u r l _ p a r a m s ,   r e c e i v e d _ d a t a ) ; 
 	 	 	 	 	 	 }   e l s e   { 
 	 	 	 	 	 	 	 s w i t c h _ s n p r i n t f ( c o n t a c t _ s t r ,   s i z e o f ( c o n t a c t _ s t r ) ,   " % s   < s i p : % s @ % s : % d % s ; f s _ n a t = y e s > " ,   d i s p l a y ,   c o n t a c t - > m _ u r l - > u r l _ u s e r ,   u r l _ i p , 
 	 	 	 	 	 	 	 	 	 	 	 n e t w o r k _ p o r t ,   r e c e i v e d _ d a t a ) ; 
 	 	 	 	 	 	 } 
 	 	 	 	 	 	 i f   ( s w i t c h _ s t r i s t r ( v _ c o n t a c t _ s t r ,   " t r a n s p o r t = t l s " ) )   { 
 	 	 	 	 	 	 	 r e g _ d e s c   =   " R e g i s t e r e d ( T L S H A C K ) " ; 
 	 	 	 	 	 	 }   e l s e   { 
 	 	 	 	 	 	 	 r e g _ d e s c   =   " R e g i s t e r e d ( A U T O - N A T ) " ; 
 	 	 	 	 	 	 	 e x p t i m e   =   3 0 ; 
 	 	 	 	 	 	 } 
 	 	 	 	 	 }   e l s e   { 
 	 	 	 	 	 	 c h a r   * p ; 
 	 	 	 	 	 	 s w i t c h _ c o p y _ s t r i n g ( c o n t a c t _ s t r ,   v _ c o n t a c t _ s t r ,   s i z e o f ( c o n t a c t _ s t r ) ) ; 
 	 	 	 	 	 	 f o r   ( p   =   c o n t a c t _ s t r ;   p   & &   * p ;   p + + )   { 
 	 	 	 	 	 	 	 i f   ( * p   = =   ' \ ' '   | |   * p   = =   ' [ '   | |   * p   = =   ' ] ' )   { 
 	 	 	 	 	 	 	 	 * p   =   ' " ' ; 
 	 	 	 	 	 	 	 } 
 	 	 	 	 	 	 } 
 	 	 	 	 	 } 
 	 	 	 	 } 
 	 	 	 } 
 
 	 	 	 i f   (   ( (   e x p _ v a r   =   a t o i ( s w i t c h _ e v e n t _ g e t _ h e a d e r _ n i l ( * v _ e v e n t ,   " s i p - f o r c e - e x p i r e s " ) )   ) )   | | 
 	 	 	           ( (   e x p _ v a r   =   p r o f i l e - > s i p _ f o r c e _ e x p i r e s   ) )   )   { 
 	 	 	 	 i f   ( e x p _ v a r   >   0 )   { 
 	 	 	 	 	 e x p t i m e   =   e x p _ v a r ; 
 	 	 	 	 } 
 	 	 	 } 
 
 	 	 	 i f   (   ( (   e x p _ m a x _ d e v i a t i o n _ v a r   =   a t o i ( s w i t c h _ e v e n t _ g e t _ h e a d e r _ n i l ( * v _ e v e n t ,   " s i p - e x p i r e s - m a x - d e v i a t i o n " ) )   ) )   | | 
 	 	 	           ( (   e x p _ m a x _ d e v i a t i o n _ v a r   =   p r o f i l e - > s i p _ e x p i r e s _ m a x _ d e v i a t i o n   ) )   )   { 
 	 	 	 	 i f   ( e x p _ m a x _ d e v i a t i o n _ v a r   >   0 )   { 
 	 	 	 	 	 i n t   e x p _ d e v i a t i o n ; 
 	 	 	 	 	 s r a n d (   ( u n s i g n e d )   (   ( u n s i g n e d ) ( i n t p t r _ t ) s w i t c h _ t h r e a d _ s e l f ( )   +   s w i t c h _ m i c r o _ t i m e _ n o w ( )   )   ) ; 
 	 	 	 	 	 / *   r a n d o m   n u m b e r   b e t w e e n   n e g a t i v e   e x p _ m a x _ d e v i a t i o n _ v a r   a n d   p o s i t i v e   e x p _ m a x _ d e v i a t i o n _ v a r :   * / 
 	 	 	 	 	 e x p _ d e v i a t i o n   =   (   r a n d ( )   %   (   e x p _ m a x _ d e v i a t i o n _ v a r   *   2   )   )   -   e x p _ m a x _ d e v i a t i o n _ v a r ; 
 	 	 	 	 	 e x p t i m e   + =   e x p _ d e v i a t i o n ; 
 	 	 	 	 } 
 	 	 	 } 
 
 	 	 } 
 
 	 	 i f   ( a u t h _ r e s   ! =   A U T H _ O K   & &   a u t h _ r e s   ! =   A U T H _ R E N E W E D   & &   ! s t a l e )   { 
 	 	 	 i f   ( a u t h _ r e s   = =   A U T H _ F O R B I D D E N )   { 
 	 	 	 	 n u a _ r e s p o n d ( n h ,   S I P _ 4 0 3 _ F O R B I D D E N ,   N U T A G _ W I T H _ T H I S _ M S G ( d e - > d a t a - > e _ m s g ) ,   T A G _ E N D ( ) ) ; 
 	 	 	 	 f o r b i d d e n   =   1 ; 
 	 	 	 }   e l s e   { 
 	 	 	 	 n u a _ r e s p o n d ( n h ,   S I P _ 4 0 1 _ U N A U T H O R I Z E D ,   N U T A G _ W I T H _ T H I S _ M S G ( d e - > d a t a - > e _ m s g ) ,   T A G _ E N D ( ) ) ; 
 	 	 	 } 
 
 	 	 	 i f   ( p r o f i l e - > d e b u g )   { 
 	 	 	 	 s w i t c h _ l o g _ p r i n t f ( S W I T C H _ C H A N N E L _ L O G ,   S W I T C H _ L O G _ D E B U G ,   " S e n d   % s   f o r   [ % s @ % s ] \ n " , 
 	 	 	 	 	 	 	 	     f o r b i d d e n   ?   " f o r b i d d e n "   :   " c h a l l e n g e " ,   t o _ u s e r ,   t o _ h o s t ) ; 
 	 	 	 } 
 	 	 	 / *   L o g   l i n e   a d d e d   t o   s u p p o r t   F a i l 2 B a n   * / 
 	 	 	 i f   ( s o f i a _ t e s t _ p f l a g ( p r o f i l e ,   P F L A G _ L O G _ A U T H _ F A I L ) )   { 
 	 	 	 	 s w i t c h _ l o g _ p r i n t f ( S W I T C H _ C H A N N E L _ L O G ,   S W I T C H _ L O G _ W A R N I N G ,   " S I P   a u t h   % s   ( % s )   o n   s o f i a   p r o f i l e   ' % s '   " 
 	 	 	 	 	 	 	 	     " f o r   [ % s @ % s ]   f r o m   i p   % s \ n " ,   f o r b i d d e n   ?   " f a i l u r e "   :   " c h a l l e n g e " ,   
 	 	 	 	 	 	 	 	     ( r e g t y p e   = =   R E G _ I N V I T E )   ?   " I N V I T E "   :   " R E G I S T E R " ,   p r o f i l e - > n a m e ,   t o _ u s e r ,   t o _ h o s t ,   n e t w o r k _ i p ) ; 
 	 	 	 } 
 
 	 	 	 i f   ( f o r b i d d e n   & &   s w i t c h _ e v e n t _ c r e a t e _ s u b c l a s s ( & s _ e v e n t ,   S W I T C H _ E V E N T _ C U S T O M ,   M Y _ E V E N T _ R E G I S T E R _ F A I L U R E )   = =   S W I T C H _ S T A T U S _ S U C C E S S )   { 
 	 	 	 	 s w i t c h _ e v e n t _ a d d _ h e a d e r _ s t r i n g ( s _ e v e n t ,   S W I T C H _ S T A C K _ B O T T O M ,   " p r o f i l e - n a m e " ,   p r o f i l e - > n a m e ) ; 
 	 	 	 	 s w i t c h _ e v e n t _ a d d _ h e a d e r _ s t r i n g ( s _ e v e n t ,   S W I T C H _ S T A C K _ B O T T O M ,   " t o - u s e r " ,   t o _ u s e r ) ; 
 	 	 	 	 s w i t c h _ e v e n t _ a d d _ h e a d e r _ s t r i n g ( s _ e v e n t ,   S W I T C H _ S T A C K _ B O T T O M ,   " t o - h o s t " ,   t o _ h o s t ) ; 
 	 	 	 	 s w i t c h _ e v e n t _ a d d _ h e a d e r _ s t r i n g ( s _ e v e n t ,   S W I T C H _ S T A C K _ B O T T O M ,   " n e t w o r k - i p " ,   n e t w o r k _ i p ) ; 
 	 	 	 	 s w i t c h _ e v e n t _ a d d _ h e a d e r _ s t r i n g ( s _ e v e n t ,   S W I T C H _ S T A C K _ B O T T O M ,   " u s e r - a g e n t " ,   a g e n t ) ; 
 	 	 	 	 s w i t c h _ e v e n t _ a d d _ h e a d e r _ s t r i n g ( s _ e v e n t ,   S W I T C H _ S T A C K _ B O T T O M ,   " p r o f i l e - n a m e " ,   p r o f i l e - > n a m e ) ; 
 	 	 	 	 s w i t c h _ e v e n t _ a d d _ h e a d e r _ s t r i n g ( s _ e v e n t ,   S W I T C H _ S T A C K _ B O T T O M ,   " n e t w o r k - p o r t " ,   n e t w o r k _ p o r t _ c ) ; 
 	 	 	 	 s w i t c h _ e v e n t _ a d d _ h e a d e r _ s t r i n g ( s _ e v e n t ,   S W I T C H _ S T A C K _ B O T T O M ,   " r e g i s t r a t i o n - t y p e " ,   ( r e g t y p e   = =   R E G _ I N V I T E )   ?   " I N V I T E "   :   " R E G I S T E R " ) ; 
 	 	 	 	 s w i t c h _ e v e n t _ f i r e ( & s _ e v e n t ) ; 
 	 	 	 } 
 	 	 	 s w i t c h _ g o t o _ i n t ( r ,   1 ,   e n d ) ; 
 	 	 } 
 	 } 
 
 	 i f   ( ! a u t h o r i z a t i o n   | |   s t a l e )   { 
 	 	 c o n s t   c h a r   * r e a l m   =   p r o f i l e - > c h a l l e n g e _ r e a l m ; 
 
 	 	 i f   ( s w i t c h _ e v e n t _ c r e a t e _ s u b c l a s s ( & s _ e v e n t ,   S W I T C H _ E V E N T _ C U S T O M ,   M Y _ E V E N T _ P R E _ R E G I S T E R )   = =   S W I T C H _ S T A T U S _ S U C C E S S )   { 
 	 	 	 s w i t c h _ e v e n t _ a d d _ h e a d e r _ s t r i n g ( s _ e v e n t ,   S W I T C H _ S T A C K _ B O T T O M ,   " p r o f i l e - n a m e " ,   p r o f i l e - > n a m e ) ; 
 	 	 	 s w i t c h _ e v e n t _ a d d _ h e a d e r _ s t r i n g ( s _ e v e n t ,   S W I T C H _ S T A C K _ B O T T O M ,   " f r o m - u s e r " ,   t o _ u s e r ) ; 
 	 	 	 s w i t c h _ e v e n t _ a d d _ h e a d e r _ s t r i n g ( s _ e v e n t ,   S W I T C H _ S T A C K _ B O T T O M ,   " f r o m - h o s t " ,   r e g _ h o s t ) ; 
 	 	 	 i f   ( c o n t a c t ) 
 	 	 	 	 s w i t c h _ e v e n t _ a d d _ h e a d e r _ s t r i n g ( s _ e v e n t ,   S W I T C H _ S T A C K _ B O T T O M ,   " c o n t a c t " ,   c o n t a c t _ s t r ) ; 
 	 	 	 s w i t c h _ e v e n t _ a d d _ h e a d e r _ s t r i n g ( s _ e v e n t ,   S W I T C H _ S T A C K _ B O T T O M ,   " c a l l - i d " ,   c a l l _ i d ) ; 
 	 	 	 s w i t c h _ e v e n t _ a d d _ h e a d e r _ s t r i n g ( s _ e v e n t ,   S W I T C H _ S T A C K _ B O T T O M ,   " r p i d " ,   r p i d ) ; 
 	 	 	 s w i t c h _ e v e n t _ a d d _ h e a d e r _ s t r i n g ( s _ e v e n t ,   S W I T C H _ S T A C K _ B O T T O M ,   " s t a t u s " ,   r e g _ d e s c ) ; 
 	 	 	 i f   ( c o n t a c t ) 
 	 	 	 	 s w i t c h _ e v e n t _ a d d _ h e a d e r ( s _ e v e n t ,   S W I T C H _ S T A C K _ B O T T O M ,   " e x p i r e s " ,   " % l d " ,   ( l o n g )   e x p t i m e ) ; 
 	 	 	 s w i t c h _ e v e n t _ a d d _ h e a d e r _ s t r i n g ( s _ e v e n t ,   S W I T C H _ S T A C K _ B O T T O M ,   " t o - u s e r " ,   f r o m _ u s e r ) ; 
 	 	 	 s w i t c h _ e v e n t _ a d d _ h e a d e r _ s t r i n g ( s _ e v e n t ,   S W I T C H _ S T A C K _ B O T T O M ,   " t o - h o s t " ,   f r o m _ h o s t ) ; 
 	 	 	 s w i t c h _ e v e n t _ a d d _ h e a d e r _ s t r i n g ( s _ e v e n t ,   S W I T C H _ S T A C K _ B O T T O M ,   " n e t w o r k - i p " ,   n e t w o r k _ i p ) ; 
 	 	 	 s w i t c h _ e v e n t _ a d d _ h e a d e r _ s t r i n g ( s _ e v e n t ,   S W I T C H _ S T A C K _ B O T T O M ,   " n e t w o r k - p o r t " ,   n e t w o r k _ p o r t _ c ) ; 
 	 	 	 s w i t c h _ e v e n t _ a d d _ h e a d e r _ s t r i n g ( s _ e v e n t ,   S W I T C H _ S T A C K _ B O T T O M ,   " u s e r - a g e n t " ,   a g e n t ) ; 
 	 	 	 s w i t c h _ e v e n t _ f i r e ( & s _ e v e n t ) ; 
 	 	 } 
 
 	 	 i f   ( z s t r ( r e a l m )   | |   ! s t r c a s e c m p ( r e a l m ,   " a u t o _ t o " ) )   { 
 	 	 	 r e a l m   =   t o _ h o s t ; 
 	 	 }   e l s e   i f   ( ! s t r c a s e c m p ( r e a l m ,   " a u t o _ f r o m " ) )   { 
 	 	 	 r e a l m   =   f r o m _ h o s t ; 
 	 	 } 
 
 	 	 s o f i a _ r e g _ a u t h _ c h a l l e n g e ( p r o f i l e ,   n h ,   d e ,   r e g t y p e ,   r e a l m ,   s t a l e ) ; 
 
 	 	 i f   ( p r o f i l e - > d e b u g )   { 
 	 	 	 s w i t c h _ l o g _ p r i n t f ( S W I T C H _ C H A N N E L _ L O G ,   S W I T C H _ L O G _ D E B U G ,   " S e n d   c h a l l e n g e   f o r   [ % s @ % s ] \ n " ,   t o _ u s e r ,   t o _ h o s t ) ; 
 	 	 } 
 	 	 / *   L o g   l i n e   a d d e d   t o   s u p p o r t   F a i l 2 B a n   * / 
 	 	 i f   ( s o f i a _ t e s t _ p f l a g ( p r o f i l e ,   P F L A G _ L O G _ A U T H _ F A I L ) )   { 
 	 	 	 s w i t c h _ l o g _ p r i n t f ( S W I T C H _ C H A N N E L _ L O G ,   S W I T C H _ L O G _ W A R N I N G ,   " S I P   a u t h   c h a l l e n g e   ( % s )   o n   s o f i a   p r o f i l e   ' % s '   " 
 	 	 	 	 	 	 	     " f o r   [ % s @ % s ]   f r o m   i p   % s \ n " ,   ( r e g t y p e   = =   R E G _ I N V I T E )   ?   " I N V I T E "   :   " R E G I S T E R " ,   
 	 	 	 	 	 	 	     p r o f i l e - > n a m e ,   t o _ u s e r ,   t o _ h o s t ,   n e t w o r k _ i p ) ; 
 	 	 } 
 
 	 	 s w i t c h _ g o t o _ i n t ( r ,   1 ,   e n d ) ; 
 	 } 
 
 	 i f   ( ! c o n t a c t ) 
 	 	 g o t o   r e s p o n d _ 2 0 0 _ o k ; 
 
     r e g : 
 
 
 	 i f   ( v _ e v e n t   & &   * v _ e v e n t   & &   ( v a r   =   s w i t c h _ e v e n t _ g e t _ h e a d e r ( * v _ e v e n t ,   " s i p - f o r c e - e x t e n s i o n " ) ) )   { 
 	 	 t o _ u s e r   =   v a r ; 
 	 } 
 
 	 i f   ( v _ e v e n t   & &   * v _ e v e n t   & &   ( v a r   =   s w i t c h _ e v e n t _ g e t _ h e a d e r ( * v _ e v e n t ,   " r e g i s t r a t i o n _ m e t a d a t a " ) ) )   { 
 	 	 r e g _ m e t a   =   v a r ; 
 	 } 
 
 	 i f   ( v _ e v e n t   & &   * v _ e v e n t   & &   ( m w i _ a c c o u n t   =   s w i t c h _ e v e n t _ g e t _ h e a d e r ( * v _ e v e n t ,   " m w i - a c c o u n t " ) ) )   { 
 	 	 d u p _ m w i _ a c c o u n t   =   s t r d u p ( m w i _ a c c o u n t ) ; 
 	 	 s w i t c h _ a s s e r t ( d u p _ m w i _ a c c o u n t   ! =   N U L L ) ; 
 	 	 s w i t c h _ s p l i t _ u s e r _ d o m a i n ( d u p _ m w i _ a c c o u n t ,   & m w i _ u s e r ,   & m w i _ h o s t ) ; 
 	 } 
 
 	 i f   ( ! m w i _ u s e r )   { 
 	 	 m w i _ u s e r   =   ( c h a r   * )   t o _ u s e r ; 
 	 } 
 	 i f   ( ! m w i _ h o s t )   { 
 	 	 m w i _ h o s t   =   ( c h a r   * )   r e g _ h o s t ; 
 	 } 
 
 	 i f   ( r e g t y p e   ! =   R E G _ R E G I S T E R )   { 
 	 	 s w i t c h _ g o t o _ i n t ( r ,   0 ,   e n d ) ; 
 	 } 
 
 	 c a l l _ i d   =   s i p - > s i p _ c a l l _ i d - > i _ i d ; 
 	 s w i t c h _ a s s e r t ( c a l l _ i d ) ; 
 
 	 / *   D o e s   t h i s   p r o f i l e   s u p p o r t s   m u l t i p l e   r e g i s t r a t i o n s   ?   * / 
 	 m u l t i _ r e g   =   ( s o f i a _ t e s t _ p f l a g ( p r o f i l e ,   P F L A G _ M U L T I R E G ) )   ?   1   :   0 ; 
 	 m u l t i _ r e g _ c o n t a c t   =   ( s o f i a _ t e s t _ p f l a g ( p r o f i l e ,   P F L A G _ M U L T I R E G _ C O N T A C T ) )   ?   1   :   0 ; 
 
 	 i f   ( m u l t i _ r e g   & &   a v o i d _ m u l t i _ r e g )   { 
 	 	 s w i t c h _ l o g _ p r i n t f ( S W I T C H _ C H A N N E L _ L O G ,   S W I T C H _ L O G _ D E B U G , 
 	 	 	 	 	 	     " D i s a b l i n g   m u l t i p l e   r e g i s t r a t i o n s   o n   a   p e r - u s e r   b a s i s   f o r   % s @ % s \ n " ,   s w i t c h _ s t r _ n i l ( t o _ u s e r ) ,   s w i t c h _ s t r _ n i l ( t o _ h o s t ) ) ; 
 	 	 m u l t i _ r e g   =   0 ; 
 	 } 
 
 	 i f   ( e x p t i m e )   { 
 	 	 c h a r   g u e s s _ i p 4 [ 2 5 6 ] ; 
 	 	 c o n s t   c h a r   * u s e r n a m e   =   " u n k n o w n " ; 
 	 	 c o n s t   c h a r   * r e a l m   =   r e g _ h o s t ; 
 	 	 c h a r   * u r l   =   N U L L ; 
 	 	 c h a r   * c o n t a c t   =   N U L L ; 
 	 	 s w i t c h _ b o o l _ t   u p d a t e _ r e g i s t r a t i o n   =   S W I T C H _ F A L S E ; 
 
 	 	 i f   ( a u t h _ p a r a m s )   { 
 	 	 	 u s e r n a m e   =   s w i t c h _ e v e n t _ g e t _ h e a d e r ( a u t h _ p a r a m s ,   " s i p _ a u t h _ u s e r n a m e " ) ; 
 	 	 	 r e a l m   =   s w i t c h _ e v e n t _ g e t _ h e a d e r ( a u t h _ p a r a m s ,   " s i p _ a u t h _ r e a l m " ) ; 
 	 	 } 
 	 	 i f   ( a u t h _ r e s   ! =   A U T H _ R E N E W E D   | |   ! m u l t i _ r e g )   { 
 	 	 	 i f   ( m u l t i _ r e g )   { 
 	 	 	 	 i f   ( m u l t i _ r e g _ c o n t a c t )   { 
 	 	 	 	 	 s q l   = 
 	 	 	 	 	 	 s w i t c h _ m p r i n t f ( " d e l e t e   f r o m   s i p _ r e g i s t r a t i o n s   w h e r e   s i p _ u s e r = ' % q '   a n d   s i p _ h o s t = ' % q '   a n d   c o n t a c t = ' % q ' " ,   t o _ u s e r ,   r e g _ h o s t ,   c o n t a c t _ s t r ) ; 
 	 	 	 	 }   e l s e   { 
 	 	 	 	 	 s q l   =   s w i t c h _ m p r i n t f ( " d e l e t e   f r o m   s i p _ r e g i s t r a t i o n s   w h e r e   c a l l _ i d = ' % q ' " ,   c a l l _ i d ) ; 
 	 	 	 	 } 
 	 	 	 }   e l s e   { 
 	 	 	 	 s q l   =   s w i t c h _ m p r i n t f ( " d e l e t e   f r o m   s i p _ r e g i s t r a t i o n s   w h e r e   s i p _ u s e r = ' % q '   a n d   s i p _ h o s t = ' % q ' " ,   t o _ u s e r ,   r e g _ h o s t ) ; 
 	 	 	 } 
 	 	 	 s w i t c h _ m u t e x _ l o c k ( p r o f i l e - > i r e g _ m u t e x ) ; 
 	 	 	 s o f i a _ g l u e _ e x e c u t e _ s q l _ n o w ( p r o f i l e ,   & s q l ,   S W I T C H _ T R U E ) ; 
 	 	 }   e l s e   { 
 	 	 	 c h a r   b u f [ 3 2 ]   =   " " ; 
 	 	 	 s q l   =   s w i t c h _ m p r i n t f ( " s e l e c t   c o u n t ( * )   f r o m   s i p _ r e g i s t r a t i o n s   w h e r e   s i p _ u s e r = ' % q '   a n d   s i p _ h o s t = ' % q '   a n d   c o n t a c t = ' % q ' " ,   t o _ u s e r ,   r e g _ h o s t ,   c o n t a c t _ s t r ) ; 
 
 	 	 	 s w i t c h _ m u t e x _ l o c k ( p r o f i l e - > i r e g _ m u t e x ) ; 
 
 	 	 	 s o f i a _ g l u e _ e x e c u t e _ s q l 2 s t r ( p r o f i l e ,   p r o f i l e - > i r e g _ m u t e x ,   s q l ,   b u f ,   s i z e o f ( b u f ) ) ; 
 	 	 	 s w i t c h _ s a f e _ f r e e ( s q l ) ; 
 	 	 	 i f   ( a t o i ( b u f )   >   0 )   { 
 	 	 	 	 u p d a t e _ r e g i s t r a t i o n   =   S W I T C H _ T R U E ; 
 	 	 	 } 
 	 	 } 
 
 	 	 s w i t c h _ f i n d _ l o c a l _ i p ( g u e s s _ i p 4 ,   s i z e o f ( g u e s s _ i p 4 ) ,   N U L L ,   A F _ I N E T ) ; 
 
 	 	 c o n t a c t   =   s o f i a _ g l u e _ g e t _ u r l _ f r o m _ c o n t a c t ( c o n t a c t _ s t r ,   1 ) ; 
 	 	 u r l   =   s w i t c h _ m p r i n t f ( " s o f i a / % q / s i p : % q " ,   p r o f i l e - > n a m e ,   s o f i a _ g l u e _ s t r i p _ p r o t o ( c o n t a c t ) ) ; 
 	 	 
 	 	 s w i t c h _ c o r e _ a d d _ r e g i s t r a t i o n ( t o _ u s e r ,   r e g _ h o s t ,   c a l l _ i d ,   u r l ,   ( l o n g )   s w i t c h _ e p o c h _ t i m e _ n o w ( N U L L )   +   ( l o n g )   e x p t i m e   +   6 0 , 
 	 	 	 	 	 	 	 	 	   n e t w o r k _ i p ,   n e t w o r k _ p o r t _ c ,   i s _ t l s   ?   " t l s "   :   i s _ t c p   ?   " t c p "   :   " u d p " ,   r e g _ m e t a ) ; 
 
 	 	 s w i t c h _ s a f e _ f r e e ( u r l ) ; 
 	 	 s w i t c h _ s a f e _ f r e e ( c o n t a c t ) ; 
 
 	 	 i f   ( ! u p d a t e _ r e g i s t r a t i o n )   { 
 	 	 	 s q l   =   s w i t c h _ m p r i n t f ( " i n s e r t   i n t o   s i p _ r e g i s t r a t i o n s   " 
 	 	 	 	 	 " ( c a l l _ i d , s i p _ u s e r , s i p _ h o s t , p r e s e n c e _ h o s t s , c o n t a c t , s t a t u s , r p i d , e x p i r e s , " 
 	 	 	 	 	 " u s e r _ a g e n t , s e r v e r _ u s e r , s e r v e r _ h o s t , p r o f i l e _ n a m e , h o s t n a m e , n e t w o r k _ i p , n e t w o r k _ p o r t , s i p _ u s e r n a m e , s i p _ r e a l m , " 
 	 	 	 	 	 " m w i _ u s e r , m w i _ h o s t ,   o r i g _ s e r v e r _ h o s t ,   o r i g _ h o s t n a m e ,   s u b _ h o s t )   " 
 	 	 	 	 	 " v a l u e s   ( ' % q ' , ' % q ' ,   ' % q ' , ' % q ' , ' % q ' , ' % q ' ,   ' % q ' ,   % l d ,   ' % q ' ,   ' % q ' ,   ' % q ' ,   ' % q ' ,   ' % q ' ,   ' % q ' ,   ' % q ' , ' % q ' , ' % q ' , ' % q ' , ' % q ' , ' % q ' , ' % q ' , ' % q ' ) " ,   
 	 	 	 	 	 c a l l _ i d ,   t o _ u s e r ,   r e g _ h o s t ,   p r o f i l e - > p r e s e n c e _ h o s t s   ?   p r o f i l e - > p r e s e n c e _ h o s t s   :   " " ,   
 	 	 	 	 	 c o n t a c t _ s t r ,   r e g _ d e s c ,   r p i d ,   ( l o n g )   s w i t c h _ e p o c h _ t i m e _ n o w ( N U L L )   +   ( l o n g )   e x p t i m e   +   6 0 ,   
 	 	 	 	 	 a g e n t ,   f r o m _ u s e r ,   g u e s s _ i p 4 ,   p r o f i l e - > n a m e ,   m o d _ s o f i a _ g l o b a l s . h o s t n a m e ,   n e t w o r k _ i p ,   n e t w o r k _ p o r t _ c ,   u s e r n a m e ,   r e a l m ,   
 	 	 	 	 	 	 	 	   m w i _ u s e r ,   m w i _ h o s t ,   g u e s s _ i p 4 ,   m o d _ s o f i a _ g l o b a l s . h o s t n a m e ,   s u b _ h o s t ) ; 
 	 	 }   e l s e   { 
 	 	 	 s q l   =   s w i t c h _ m p r i n t f ( " u p d a t e   s i p _ r e g i s t r a t i o n s   s e t   " 
 	 	 	 	 	 	 	 	   " s u b _ h o s t = ' % q ' ,   n e t w o r k _ i p = ' % q ' , n e t w o r k _ p o r t = ' % q ' , " 
 	 	 	 	 	 	 	 	   " e x p i r e s   =   % l d   w h e r e   s i p _ u s e r = ' % q '   a n d   s i p _ h o s t = ' % q '   a n d   c o n t a c t = ' % q ' " ,   
 	 	 	 	 	 	 	 	   s u b _ h o s t ,   n e t w o r k _ i p ,   n e t w o r k _ p o r t _ c , 
 	 	 	 	 	 	 	 	   ( l o n g )   s w i t c h _ e p o c h _ t i m e _ n o w ( N U L L )   +   ( l o n g )   e x p t i m e   +   6 0 ,   
 	 	 	 	 	 	 	 	   t o _ u s e r ,   r e g _ h o s t ,   c o n t a c t _ s t r ) ; 
 	 	 } 	 	 	 	   
 
 	 	 i f   ( s q l )   { 
 	 	 	 s o f i a _ g l u e _ e x e c u t e _ s q l _ n o w ( p r o f i l e ,   & s q l ,   S W I T C H _ T R U E ) ; 
 	 	 } 
 
 	 	 i f   ( ! u p d a t e _ r e g i s t r a t i o n   & &   s o f i a _ r e g _ r e g _ c o u n t ( p r o f i l e ,   t o _ u s e r ,   r e g _ h o s t )   = =   1 )   { 
 	 	 	 s q l   =   s w i t c h _ m p r i n t f ( " d e l e t e   f r o m   s i p _ p r e s e n c e   w h e r e   s i p _ u s e r = ' % q '   a n d   s i p _ h o s t = ' % q '   a n d   p r o f i l e _ n a m e = ' % q '   a n d   o p e n _ c l o s e d = ' c l o s e d ' " ,   
 	 	 	 	 	 	 	 	   t o _ u s e r ,   r e g _ h o s t ,   p r o f i l e - > n a m e ) ; 
 	 	 	 i f   ( m o d _ s o f i a _ g l o b a l s . d e b u g _ p r e s e n c e   >   0 )   { 
 	 	 	 	 s w i t c h _ l o g _ p r i n t f ( S W I T C H _ C H A N N E L _ L O G ,   S W I T C H _ L O G _ E R R O R ,   " D E L E T E   P R E S E N C E   S Q L :   % s \ n " ,   s q l ) ; 
 	 	 	 } 
 	 	 	 s o f i a _ g l u e _ e x e c u t e _ s q l _ n o w ( p r o f i l e ,   & s q l ,   S W I T C H _ T R U E ) ; 
 	 	 } 
 
 	 	 s w i t c h _ m u t e x _ u n l o c k ( p r o f i l e - > i r e g _ m u t e x ) ; 
 
 	 	 i f   ( s w i t c h _ e v e n t _ c r e a t e _ s u b c l a s s ( & s _ e v e n t ,   S W I T C H _ E V E N T _ C U S T O M ,   M Y _ E V E N T _ R E G I S T E R )   = =   S W I T C H _ S T A T U S _ S U C C E S S )   { 
 	 	 	 s w i t c h _ e v e n t _ a d d _ h e a d e r _ s t r i n g ( s _ e v e n t ,   S W I T C H _ S T A C K _ B O T T O M ,   " p r o f i l e - n a m e " ,   p r o f i l e - > n a m e ) ; 
 	 	 	 s w i t c h _ e v e n t _ a d d _ h e a d e r _ s t r i n g ( s _ e v e n t ,   S W I T C H _ S T A C K _ B O T T O M ,   " f r o m - u s e r " ,   t o _ u s e r ) ; 
 	 	 	 s w i t c h _ e v e n t _ a d d _ h e a d e r _ s t r i n g ( s _ e v e n t ,   S W I T C H _ S T A C K _ B O T T O M ,   " f r o m - h o s t " ,   r e g _ h o s t ) ; 
 	 	 	 s w i t c h _ e v e n t _ a d d _ h e a d e r _ s t r i n g ( s _ e v e n t ,   S W I T C H _ S T A C K _ B O T T O M ,   " p r e s e n c e - h o s t s " ,   p r o f i l e - > p r e s e n c e _ h o s t s   ?   p r o f i l e - > p r e s e n c e _ h o s t s   :   " n / a " ) ; 
 	 	 	 s w i t c h _ e v e n t _ a d d _ h e a d e r _ s t r i n g ( s _ e v e n t ,   S W I T C H _ S T A C K _ B O T T O M ,   " c o n t a c t " ,   c o n t a c t _ s t r ) ; 
 	 	 	 s w i t c h _ e v e n t _ a d d _ h e a d e r _ s t r i n g ( s _ e v e n t ,   S W I T C H _ S T A C K _ B O T T O M ,   " c a l l - i d " ,   c a l l _ i d ) ; 
 	 	 	 s w i t c h _ e v e n t _ a d d _ h e a d e r _ s t r i n g ( s _ e v e n t ,   S W I T C H _ S T A C K _ B O T T O M ,   " r p i d " ,   r p i d ) ; 
 	 	 	 s w i t c h _ e v e n t _ a d d _ h e a d e r _ s t r i n g ( s _ e v e n t ,   S W I T C H _ S T A C K _ B O T T O M ,   " s t a t u s " ,   r e g _ d e s c ) ; 
 	 	 	 s w i t c h _ e v e n t _ a d d _ h e a d e r ( s _ e v e n t ,   S W I T C H _ S T A C K _ B O T T O M ,   " e x p i r e s " ,   " % l d " ,   ( l o n g )   e x p t i m e ) ; 
 	 	 	 s w i t c h _ e v e n t _ a d d _ h e a d e r _ s t r i n g ( s _ e v e n t ,   S W I T C H _ S T A C K _ B O T T O M ,   " t o - u s e r " ,   f r o m _ u s e r ) ; 
 	 	 	 s w i t c h _ e v e n t _ a d d _ h e a d e r _ s t r i n g ( s _ e v e n t ,   S W I T C H _ S T A C K _ B O T T O M ,   " t o - h o s t " ,   f r o m _ h o s t ) ; 
 	 	 	 s w i t c h _ e v e n t _ a d d _ h e a d e r _ s t r i n g ( s _ e v e n t ,   S W I T C H _ S T A C K _ B O T T O M ,   " n e t w o r k - i p " ,   n e t w o r k _ i p ) ; 
 	 	 	 s w i t c h _ e v e n t _ a d d _ h e a d e r _ s t r i n g ( s _ e v e n t ,   S W I T C H _ S T A C K _ B O T T O M ,   " n e t w o r k - p o r t " ,   n e t w o r k _ p o r t _ c ) ; 
 	 	 	 s w i t c h _ e v e n t _ a d d _ h e a d e r _ s t r i n g ( s _ e v e n t ,   S W I T C H _ S T A C K _ B O T T O M ,   " u s e r n a m e " ,   u s e r n a m e ) ; 
 	 	 	 s w i t c h _ e v e n t _ a d d _ h e a d e r _ s t r i n g ( s _ e v e n t ,   S W I T C H _ S T A C K _ B O T T O M ,   " r e a l m " ,   r e a l m ) ; 
 	 	 	 s w i t c h _ e v e n t _ a d d _ h e a d e r _ s t r i n g ( s _ e v e n t ,   S W I T C H _ S T A C K _ B O T T O M ,   " u s e r - a g e n t " ,   a g e n t ) ; 
 	 	 	 s w i t c h _ e v e n t _ f i r e ( & s _ e v e n t ) ; 
 	 	 } 
 
 
 
 	 	 i f   ( p r o f i l e - > d e b u g )   { 
 	 	 	 s w i t c h _ l o g _ p r i n t f ( S W I T C H _ C H A N N E L _ L O G ,   S W I T C H _ L O G _ D E B U G , 
 	 	 	 	 	 	 	     " R e g i s t e r : \ n F r o m :         [ % s @ % s ] \ n C o n t a c t :   [ % s ] \ n E x p i r e s :   [ % l d ] \ n " ,   t o _ u s e r ,   r e g _ h o s t ,   c o n t a c t _ s t r ,   ( l o n g )   e x p t i m e ) ; 
 	 	 } 
 
 	 }   e l s e   { 
 	 	 i n t   s e n d   =   1 ; 
 
 	 	 i f   ( m u l t i _ r e g )   { 
 	 	 	 i f   ( s o f i a _ r e g _ r e g _ c o u n t ( p r o f i l e ,   t o _ u s e r ,   s u b _ h o s t )   >   0 )   { 
 	 	 	 	 s e n d   =   0 ; 
 	 	 	 } 
 	 	 } 
 
 	 	 i f   ( s e n d   & &   s w i t c h _ e v e n t _ c r e a t e ( & e v e n t ,   S W I T C H _ E V E N T _ P R E S E N C E _ I N )   = =   S W I T C H _ S T A T U S _ S U C C E S S )   { 
 	 	 	 s w i t c h _ e v e n t _ a d d _ h e a d e r _ s t r i n g ( e v e n t ,   S W I T C H _ S T A C K _ B O T T O M ,   " p r o t o " ,   S O F I A _ C H A T _ P R O T O ) ; 
 	 	 	 s w i t c h _ e v e n t _ a d d _ h e a d e r _ s t r i n g ( e v e n t ,   S W I T C H _ S T A C K _ B O T T O M ,   " r p i d " ,   r p i d ) ; 
 	 	 	 s w i t c h _ e v e n t _ a d d _ h e a d e r _ s t r i n g ( e v e n t ,   S W I T C H _ S T A C K _ B O T T O M ,   " l o g i n " ,   p r o f i l e - > u r l ) ; 
 	 	 	 s w i t c h _ e v e n t _ a d d _ h e a d e r _ s t r i n g ( e v e n t ,   S W I T C H _ S T A C K _ B O T T O M ,   " u s e r - a g e n t " , 
 	 	 	 	 	 	 	 	 	 	       ( s i p   & &   s i p - > s i p _ u s e r _ a g e n t )   ?   s i p - > s i p _ u s e r _ a g e n t - > g _ s t r i n g   :   " u n k n o w n " ) ; 
 	 	 	 s w i t c h _ e v e n t _ a d d _ h e a d e r ( e v e n t ,   S W I T C H _ S T A C K _ B O T T O M ,   " f r o m " ,   " % s @ % s " ,   t o _ u s e r ,   s u b _ h o s t ) ; 
 	 	 	 s w i t c h _ e v e n t _ a d d _ h e a d e r _ s t r i n g ( e v e n t ,   S W I T C H _ S T A C K _ B O T T O M ,   " s t a t u s " ,   " U n r e g i s t e r e d " ) ; 
 	 	 	 s w i t c h _ e v e n t _ a d d _ h e a d e r _ s t r i n g ( e v e n t ,   S W I T C H _ S T A C K _ B O T T O M ,   " p r e s e n c e - s o u r c e " ,   " r e g i s t e r " ) ; 
 	 	 	 s w i t c h _ e v e n t _ a d d _ h e a d e r _ s t r i n g ( e v e n t ,   S W I T C H _ S T A C K _ B O T T O M ,   " e v e n t _ t y p e " ,   " p r e s e n c e " ) ; 
 	 	 	 s w i t c h _ e v e n t _ f i r e ( & e v e n t ) ; 
 	 	 } 
 	 	 
 
 	 	 i f   ( m u l t i _ r e g )   { 
 	 	 	 c h a r   * i c o n t a c t ,   * p ; 
 	 	 	 i c o n t a c t   =   s o f i a _ g l u e _ g e t _ u r l _ f r o m _ c o n t a c t ( c o n t a c t _ s t r ,   1 ) ; 
 	 	 	 i f   ( ( p   =   s t r c h r ( i c o n t a c t ,   ' ; ' ) ) )   { 
 	 	 	 	 * p   =   ' \ 0 ' ; 
 	 	 	 } 
 	 	 	 i f   ( ( p   =   s t r c h r ( i c o n t a c t   +   4 ,   ' : ' ) ) )   { 
 	 	 	 	 * p   =   ' \ 0 ' ; 
 	 	 	 } 
 
 	 	 	 i f   ( m u l t i _ r e g _ c o n t a c t )   { 
 	 	 	 	 s q l   = 
 	 	 	 	 	 s w i t c h _ m p r i n t f ( " d e l e t e   f r o m   s i p _ r e g i s t r a t i o n s   w h e r e   s i p _ u s e r = ' % q '   a n d   s i p _ h o s t = ' % q '   a n d   c o n t a c t = ' % q ' " ,   t o _ u s e r ,   r e g _ h o s t ,   c o n t a c t _ s t r ) ; 
 	 	 	 }   e l s e   { 
 	 	 	 	 s q l   =   s w i t c h _ m p r i n t f ( " d e l e t e   f r o m   s i p _ r e g i s t r a t i o n s   w h e r e   c a l l _ i d = ' % q ' " ,   c a l l _ i d ) ; 
 	 	 	 } 
 
 	 	 	 s o f i a _ g l u e _ e x e c u t e _ s q l _ n o w ( p r o f i l e ,   & s q l ,   S W I T C H _ T R U E ) ; 
 
 	 	 	 s w i t c h _ s a f e _ f r e e ( i c o n t a c t ) ; 
 	 	 }   e l s e   { 
 
 	 	 	 i f   ( ( s q l   =   s w i t c h _ m p r i n t f ( " d e l e t e   f r o m   s i p _ r e g i s t r a t i o n s   w h e r e   s i p _ u s e r = ' % q '   a n d   s i p _ h o s t = ' % q ' " ,   t o _ u s e r ,   r e g _ h o s t ) ) )   { 
 	 	 	 	 s o f i a _ g l u e _ e x e c u t e _ s q l _ n o w ( p r o f i l e ,   & s q l ,   S W I T C H _ T R U E ) ; 
 	 	 	 } 
 	 	 } 
 	 } 
 
     r e s p o n d _ 2 0 0 _ o k : 
 
 	 i f   ( r e g t y p e   = =   R E G _ R E G I S T E R )   { 
 	 	 c h a r   e x p _ p a r a m [ 1 2 8 ]   =   " " ; 
 	 	 c h a r   d a t e [ 8 0 ]   =   " " ; 
 	 	 c h a r   u s e r n a m e _ h e a d e r [ 6 4 ]   =   " " ; 
 	 	 s w i t c h _ e v e n t _ t   * s _ m w i _ e v e n t   =   N U L L ; 
 
 	 	 s w i t c h _ c o n s o l e _ c a l l b a c k _ m a t c h _ t   * c o n t a c t _ l i s t   =   N U L L ; 
 	 	 t a g i _ t   * c o n t a c t _ t a g s ; 
 	 	 s w i t c h _ c o n s o l e _ c a l l b a c k _ m a t c h _ n o d e _ t   * m ; 
 	 	 i n t   i ; 
 	 	 
 	 	 s w i t c h _ x m l _ t   u s e r ; 
 	 	 i f   ( s w i t c h _ x m l _ l o c a t e _ u s e r _ m e r g e d ( " i d " ,   s i p - > s i p _ f r o m - > a _ u r l - > u r l _ u s e r ,   s i p - > s i p _ c o n t a c t - > m _ u r l - > u r l _ h o s t ,   N U L L ,   & u s e r ,   N U L L )   = =   S W I T C H _ S T A T U S _ S U C C E S S )   { 
 	 	 	 c o n s t   c h a r   * u s e r n a m e   =   s w i t c h _ x m l _ a t t r ( u s e r ,   " u s e r n a m e " ) ; 
 	 	 	 s w i t c h _ s n p r i n t f ( u s e r n a m e _ h e a d e r ,   s i z e o f ( u s e r n a m e _ h e a d e r ) ,   " u s e r n a m e :   % s " ,   u s e r n a m e = = N U L L ?   " ��" : u s e r n a m e ) ; 
 	 	 } 
 
 	 	 s _ e v e n t   =   N U L L ; 
 
 	 	 i f   ( c o n t a c t )   { 
 	 	 	 i f   ( e x p t i m e )   { 
 	 	 	 	 i n t   d e b o u n c e _ o k   =   d e b o u n c e _ c h e c k ( p r o f i l e ,   m w i _ u s e r ,   m w i _ h o s t ) ; 
 
 	 	 	 	 s w i t c h _ s n p r i n t f ( e x p _ p a r a m ,   s i z e o f ( e x p _ p a r a m ) ,   " e x p i r e s = % l d " ,   e x p t i m e ) ; 
 	 	 	 	 s i p _ c o n t a c t _ a d d _ p a r a m ( n u a _ h a n d l e _ h o m e ( n h ) ,   s i p - > s i p _ c o n t a c t ,   e x p _ p a r a m ) ; 
 	 	 	 	 
 	 	 	 	 i f   ( ( s o f i a _ t e s t _ p f l a g ( p r o f i l e ,   P F L A G _ M E S S A G E _ Q U E R Y _ O N _ R E G I S T E R )   | | 
 	 	 	 	 	   ( r e g _ c o u n t   = =   1   & &   s o f i a _ t e s t _ p f l a g ( p r o f i l e ,   P F L A G _ M E S S A G E _ Q U E R Y _ O N _ F I R S T _ R E G I S T E R ) ) )   & &   d e b o u n c e _ o k )   { 
 	 	 	 	 	 
 	 	 	 	 	 i f   ( s w i t c h _ e v e n t _ c r e a t e ( & s _ m w i _ e v e n t ,   S W I T C H _ E V E N T _ M E S S A G E _ Q U E R Y )   = =   S W I T C H _ S T A T U S _ S U C C E S S )   { 
 	 	 	 	 	 	 s w i t c h _ e v e n t _ a d d _ h e a d e r ( s _ m w i _ e v e n t ,   S W I T C H _ S T A C K _ B O T T O M ,   " M e s s a g e - A c c o u n t " ,   " s i p : % s @ % s " ,   m w i _ u s e r ,   m w i _ h o s t ) ; 
 	 	 	 	 	 	 s w i t c h _ e v e n t _ a d d _ h e a d e r _ s t r i n g ( s _ m w i _ e v e n t ,   S W I T C H _ S T A C K _ B O T T O M ,   " V M - S o f i a - P r o f i l e " ,   p r o f i l e - > n a m e ) ; 
 	 	 	 	 	 	 s w i t c h _ e v e n t _ a d d _ h e a d e r _ s t r i n g ( s _ m w i _ e v e n t ,   S W I T C H _ S T A C K _ B O T T O M ,   " V M - C a l l - I D " ,   c a l l _ i d ) ; 
 	 	 	 	 	 } 
 	 	 	 	 } 
 
 	 	 	 	 i f   ( ( s o f i a _ t e s t _ p f l a g ( p r o f i l e ,   P F L A G _ P R E S E N C E _ O N _ R E G I S T E R )   | |   
 	 	 	 	 	 ( r e g _ c o u n t   = =   1   & &   s o f i a _ t e s t _ p f l a g ( p r o f i l e ,   P F L A G _ P R E S E N C E _ O N _ F I R S T _ R E G I S T E R ) )   
 	 	 	 	 	   | |   s e n d _ p r e s   = =   1   | |   ( r e g _ c o u n t   = =   1   & &   s e n d _ p r e s   = =   2 ) )   & &   d e b o u n c e _ o k )   { 
 	 	 	 	 
 	 	 	 	 	 i f   ( s o f i a _ t e s t _ p f l a g ( p r o f i l e ,   P F L A G _ P R E S E N C E _ P R O B E _ O N _ R E G I S T E R ) )   { 
 	 	 	 	 	 	 i f   ( s w i t c h _ e v e n t _ c r e a t e ( & s _ e v e n t ,   S W I T C H _ E V E N T _ P R E S E N C E _ P R O B E )   = =   S W I T C H _ S T A T U S _ S U C C E S S )   { 
 	 	 	 	 	 	 	 s w i t c h _ e v e n t _ a d d _ h e a d e r _ s t r i n g ( s _ e v e n t ,   S W I T C H _ S T A C K _ B O T T O M ,   " p r o t o " ,   S O F I A _ C H A T _ P R O T O ) ; 
 	 	 	 	 	 	 	 s w i t c h _ e v e n t _ a d d _ h e a d e r _ s t r i n g ( s _ e v e n t ,   S W I T C H _ S T A C K _ B O T T O M ,   " l o g i n " ,   p r o f i l e - > n a m e ) ; 
 	 	 	 	 	 	 	 s w i t c h _ e v e n t _ a d d _ h e a d e r ( s _ e v e n t ,   S W I T C H _ S T A C K _ B O T T O M ,   " f r o m " ,   " % s @ % s " ,   t o _ u s e r ,   s u b _ h o s t ) ; 
 	 	 	 	 	 	 	 s w i t c h _ e v e n t _ a d d _ h e a d e r ( s _ e v e n t ,   S W I T C H _ S T A C K _ B O T T O M ,   " t o " ,   " % s @ % s " ,   t o _ u s e r ,   s u b _ h o s t ) ; 
 	 	 	 	 	 	 	 s w i t c h _ e v e n t _ a d d _ h e a d e r _ s t r i n g ( s _ e v e n t ,   S W I T C H _ S T A C K _ B O T T O M ,   " e v e n t _ t y p e " ,   " p r e s e n c e " ) ; 
 	 	 	 	 	 	 	 s w i t c h _ e v e n t _ a d d _ h e a d e r _ s t r i n g ( s _ e v e n t ,   S W I T C H _ S T A C K _ B O T T O M ,   " p r e s e n c e - s o u r c e " ,   " r e g i s t e r " ) ; 
 	 	 	 	 	 	 	 s w i t c h _ e v e n t _ a d d _ h e a d e r _ s t r i n g ( s _ e v e n t ,   S W I T C H _ S T A C K _ B O T T O M ,   " a l t _ e v e n t _ t y p e " ,   " d i a l o g " ) ; 
 	 	 	 	 	 	 	 s w i t c h _ e v e n t _ f i r e ( & s _ e v e n t ) ; 
 	 	 	 	 	 	 } 
 	 	 	 	 	 }   e l s e   { 
 	 	 	 	 	 	 i f   ( s w i t c h _ e v e n t _ c r e a t e ( & s _ e v e n t ,   S W I T C H _ E V E N T _ P R E S E N C E _ I N )   = =   S W I T C H _ S T A T U S _ S U C C E S S )   { 
 	 	 	 	 	 	 	 s w i t c h _ e v e n t _ a d d _ h e a d e r _ s t r i n g ( s _ e v e n t ,   S W I T C H _ S T A C K _ B O T T O M ,   " p r o t o " ,   S O F I A _ C H A T _ P R O T O ) ; 
 	 	 	 	 	 	 	 s w i t c h _ e v e n t _ a d d _ h e a d e r _ s t r i n g ( s _ e v e n t ,   S W I T C H _ S T A C K _ B O T T O M ,   " l o g i n " ,   p r o f i l e - > n a m e ) ; 
 	 	 	 	 	 	 	 s w i t c h _ e v e n t _ a d d _ h e a d e r _ s t r i n g ( s _ e v e n t ,   S W I T C H _ S T A C K _ B O T T O M ,   " p r e s e n c e - s o u r c e " ,   " r e g i s t e r " ) ; 
 	 	 	 	 	 	 	 s w i t c h _ e v e n t _ a d d _ h e a d e r ( s _ e v e n t ,   S W I T C H _ S T A C K _ B O T T O M ,   " f r o m " ,   " % s @ % s " ,   t o _ u s e r ,   s u b _ h o s t ) ; 
 	 	 	 	 	 	 	 s w i t c h _ e v e n t _ a d d _ h e a d e r _ s t r i n g ( s _ e v e n t ,   S W I T C H _ S T A C K _ B O T T O M ,   " r p i d " ,   " u n k n o w n " ) ; 
 	 	 	 	 	 	 	 s w i t c h _ e v e n t _ a d d _ h e a d e r _ s t r i n g ( s _ e v e n t ,   S W I T C H _ S T A C K _ B O T T O M ,   " s t a t u s " ,   " R e g i s t e r e d " ) ; 
 	 	 	 	 	 	 	 s w i t c h _ e v e n t _ f i r e ( & s _ e v e n t ) ; 
 	 	 	 	 	 	 } 	 	 
 	 	 	 	 	 } 
 	 	 	 	 } 
 	 	 	 }   e l s e   { 
 	 	 	 	 c o n s t   c h a r   * u s e r n a m e   =   " u n k n o w n " ; 
 	 	 	 	 i f   ( a u t h _ p a r a m s )   { 
 	 	 	 	 	 u s e r n a m e   =   s w i t c h _ e v e n t _ g e t _ h e a d e r ( a u t h _ p a r a m s ,   " s i p _ a u t h _ u s e r n a m e " ) ; 
 	 	 	 	 } 
 
 	 	 	 	 s w i t c h _ c o r e _ d e l _ r e g i s t r a t i o n ( t o _ u s e r ,   r e g _ h o s t ,   c a l l _ i d ) ; 
 
 	 	 	 	 i f   ( s w i t c h _ e v e n t _ c r e a t e _ s u b c l a s s ( & s _ e v e n t ,   S W I T C H _ E V E N T _ C U S T O M ,   M Y _ E V E N T _ U N R E G I S T E R )   = =   S W I T C H _ S T A T U S _ S U C C E S S )   { 
 	 	 	 	 	 s w i t c h _ e v e n t _ a d d _ h e a d e r _ s t r i n g ( s _ e v e n t ,   S W I T C H _ S T A C K _ B O T T O M ,   " p r o f i l e - n a m e " ,   p r o f i l e - > n a m e ) ; 
 	 	 	 	 	 s w i t c h _ e v e n t _ a d d _ h e a d e r _ s t r i n g ( s _ e v e n t ,   S W I T C H _ S T A C K _ B O T T O M ,   " u s e r n a m e " ,   u s e r n a m e ) ; 
 	 	 	 	 	 s w i t c h _ e v e n t _ a d d _ h e a d e r _ s t r i n g ( s _ e v e n t ,   S W I T C H _ S T A C K _ B O T T O M ,   " f r o m - u s e r " ,   t o _ u s e r ) ; 
 	 	 	 	 	 s w i t c h _ e v e n t _ a d d _ h e a d e r _ s t r i n g ( s _ e v e n t ,   S W I T C H _ S T A C K _ B O T T O M ,   " f r o m - h o s t " ,   r e g _ h o s t ) ; 
 	 	 	 	 	 s w i t c h _ e v e n t _ a d d _ h e a d e r _ s t r i n g ( s _ e v e n t ,   S W I T C H _ S T A C K _ B O T T O M ,   " c o n t a c t " ,   c o n t a c t _ s t r ) ; 
 	 	 	 	 	 s w i t c h _ e v e n t _ a d d _ h e a d e r _ s t r i n g ( s _ e v e n t ,   S W I T C H _ S T A C K _ B O T T O M ,   " c a l l - i d " ,   c a l l _ i d ) ; 
 	 	 	 	 	 s w i t c h _ e v e n t _ a d d _ h e a d e r _ s t r i n g ( s _ e v e n t ,   S W I T C H _ S T A C K _ B O T T O M ,   " r p i d " ,   r p i d ) ; 
 	 	 	 	 	 s w i t c h _ e v e n t _ a d d _ h e a d e r ( s _ e v e n t ,   S W I T C H _ S T A C K _ B O T T O M ,   " e x p i r e s " ,   " % l d " ,   ( l o n g )   e x p t i m e ) ; 
 	 	 	 	 } 
 	 	 	 } 
 	 	 } 
 
 	 	 s w i t c h _ r f c 8 2 2 _ d a t e ( d a t e ,   s w i t c h _ m i c r o _ t i m e _ n o w ( ) ) ; 
 
 	 	 / *   g e n e r a t e   a n d   r e s p o n d   a   2 0 0   O K   * / 
 
 	 	 i f   ( m o d _ s o f i a _ g l o b a l s . r e g _ d e n y _ b i n d i n g _ f e t c h _ a n d _ n o _ l o o k u p )   { 
 	 	 	 / *   h a n d l e   b a c k w a r d s   c o m p a t i b i l i t y   -   c o n t a c t s   w i l l   n o t   b e   l o o k e d   u p   b u t   o n l y   c o p i e d   f r o m   t h e   r e q u e s t   i n t o   t h e   r e s p o n s e 
 	 	 	       r e m o v e   t h i s   c o n d i t i o n   l a t e r   i f   n o b o d y   c o m p l a i n s   a b o u t   t h e   e x t r a   s e l e c t   o f   t h e   b e l o w   n e w   b e h a v i o r 
 	 	 	       a l s o   r e m o v e   t h e   p a r t s   i n   m o d _ s o f i a . h ,   s o f i a . c   a n d   s o f i a _ r e g . c   t h a t   r e f e r   t o   r e g _ d e n y _ b i n d i n g _ f e t c h _ a n d _ n o _ l o o k u p   * / 
 	 	 	 n u a _ r e s p o n d ( n h ,   S I P _ 2 0 0 _ O K ,   T A G _ I F ( c o n t a c t ,   S I P T A G _ C O N T A C T ( s i p - > s i p _ c o n t a c t ) ) ,   T A G _ I F ( p a t h _ v a l ,   S I P T A G _ P A T H _ S T R ( p a t h _ v a l ) ) , 
 	 	 	 	 N U T A G _ W I T H _ T H I S _ M S G ( d e - > d a t a - > e _ m s g ) ,   S I P T A G _ D A T E _ S T R ( d a t e ) ,   T A G _ E N D ( ) ) ; 
   
 	 	 }   e l s e   i f   ( ( c o n t a c t _ l i s t   =   s o f i a _ r e g _ f i n d _ r e g _ u r l _ w i t h _ p o s i t i v e _ e x p i r e s _ m u l t i ( p r o f i l e ,   f r o m _ u s e r ,   r e g _ h o s t ) ) )   { 
 	 	 	 / *   a l l   +   1   t a g _ i   e l e m e n t s   i n i t i a l i z e d   a s   N U L L   -   l a s t   o n e   i m p l i e s   T A G _ E N D ( )   * / 
 	 	 	 s w i t c h _ z m a l l o c ( c o n t a c t _ t a g s ,   s i z e o f ( * c o n t a c t _ t a g s )   *   ( c o n t a c t _ l i s t - > c o u n t   +   1 ) ) ; 
 	 	 	 i   =   0 ; 
 	 	 	 f o r   ( m   =   c o n t a c t _ l i s t - > h e a d ;   m ;   m   =   m - > n e x t )   { 
 	 	 	 	 c o n t a c t _ t a g s [ i ] . t _ t a g   =   s i p t a g _ c o n t a c t _ s t r ; 
 	 	 	 	 c o n t a c t _ t a g s [ i ] . t _ v a l u e   =   ( t a g _ v a l u e _ t )   m - > v a l ; 
 	 	 	 	 + + i ; 
 	 	 	 } 
 
 	 	 	 n u a _ r e s p o n d ( n h ,   S I P _ 2 0 0 _ O K ,   T A G _ I F ( p a t h _ v a l ,   S I P T A G _ P A T H _ S T R ( p a t h _ v a l ) ) , 
 	 	 	                                                         N U T A G _ W I T H _ T H I S _ M S G ( d e - > d a t a - > e _ m s g ) ,   S I P T A G _ D A T E _ S T R ( d a t e ) ,   S I P T A G _ H E A D E R _ S T R ( u s e r n a m e _ h e a d e r ) ,   T A G _ N E X T ( c o n t a c t _ t a g s ) ) ; 
 
 	 	 	 s w i t c h _ s a f e _ f r e e ( c o n t a c t _ t a g s ) ; 
 	 	 	 s w i t c h _ c o n s o l e _ f r e e _ m a t c h e s ( & c o n t a c t _ l i s t ) ; 
 
 	 	 }   e l s e   { 
 	 	 	 / *   r e s p o n d   w i t h o u t   a n y   c o n t a c t s   * / 
 	 	 	 n u a _ r e s p o n d ( n h ,   S I P _ 2 0 0 _ O K ,   T A G _ I F ( p a t h _ v a l ,   S I P T A G _ P A T H _ S T R ( p a t h _ v a l ) ) , 
 	 	 	                                                         N U T A G _ W I T H _ T H I S _ M S G ( d e - > d a t a - > e _ m s g ) ,   S I P T A G _ D A T E _ S T R ( d a t e ) , S I P T A G _ H E A D E R _ S T R ( u s e r n a m e _ h e a d e r ) ,   T A G _ E N D ( ) ) ; 
 	 	 } 
 
 
 	 	 i f   ( s _ e v e n t )   { 
 	 	 	 s w i t c h _ e v e n t _ f i r e ( & s _ e v e n t ) ; 
 	 	 } 
 
 	 	 i f   ( s _ m w i _ e v e n t )   { 
 	 	 	 s w i t c h _ e v e n t _ f i r e ( & s _ m w i _ e v e n t ) ; 
 	 	 } 
 
 	 	 s w i t c h _ g o t o _ i n t ( r ,   1 ,   e n d ) ; 
 	 } 
 
 
     e n d : 
 	 s w i t c h _ s a f e _ f r e e ( d u p _ m w i _ a c c o u n t ) ; 
 
 	 i f   ( a u t h _ p a r a m s )   { 
 	 	 s w i t c h _ e v e n t _ d e s t r o y ( & a u t h _ p a r a m s ) ; 
 	 } 
 
 	 r e t u r n   ( u i n t 8 _ t )   r ; 
 } 
 
 
 
 v o i d   s o f i a _ r e g _ h a n d l e _ s i p _ i _ r e g i s t e r ( n u a _ t   * n u a ,   s o f i a _ p r o f i l e _ t   * p r o f i l e ,   n u a _ h a n d l e _ t   * n h ,   s o f i a _ p r i v a t e _ t   * s o f i a _ p r i v a t e ,   s i p _ t   c o n s t   * s i p , 
 	 	 	 	 	 	 	 	 s o f i a _ d i s p a t c h _ e v e n t _ t   * d e , 
 	 	 	 	 	 	 	 	 	   t a g i _ t   t a g s [ ] ) 
 { 
 	 c h a r   k e y [ 1 2 8 ]   =   " " ; 
 	 s w i t c h _ e v e n t _ t   * v _ e v e n t   =   N U L L ; 
 	 c h a r   n e t w o r k _ i p [ 8 0 ] ; 
 	 s o f i a _ r e g t y p e _ t   t y p e   =   R E G _ R E G I S T E R ; 
 	 i n t   n e t w o r k _ p o r t   =   0 ; 
 	 c h a r   * i s _ n a t   =   N U L L ; 
 
 # i f   0   / *   T h i s   s e e m s   t o   c a u s e   u n d e s i r a b l e   e f f e c t s   s o   n e v e r m i n d   * / 
 	 i f   ( s i p - > s i p _ t o   & &   s i p - > s i p _ t o - > a _ u r l   & &   s i p - > s i p _ t o - > a _ u r l - > u r l _ h o s t )   { 
 	 	 c o n s t   c h a r   * t o _ h o s t   =   s i p - > s i p _ t o - > a _ u r l - > u r l _ h o s t ; 
 	 	 i f   ( p r o f i l e - > r e g _ d b _ d o m a i n )   { 
 	 	 	 i f   ( ! s o f i a _ g l u e _ p r o f i l e _ e x i s t s ( t o _ h o s t ) )   { 	 	 	 	 
 	 	 	 	 i f   ( s o f i a _ g l u e _ a d d _ p r o f i l e ( s w i t c h _ c o r e _ s t r d u p ( p r o f i l e - > p o o l ,   t o _ h o s t ) ,   p r o f i l e )   = =   S W I T C H _ S T A T U S _ S U C C E S S )   { 
 	 	 	 	 	 s w i t c h _ l o g _ p r i n t f ( S W I T C H _ C H A N N E L _ L O G ,   S W I T C H _ L O G _ N O T I C E ,   " A u t o - A d d i n g   A l i a s   [ % s ]   f o r   p r o f i l e   [ % s ] \ n " ,   t o _ h o s t ,   p r o f i l e - > n a m e ) ; 
 	 	 	 	 } 
 	 	 	 } 
 	 	 } 
 	 } 
 # e n d i f 
 
 	 s o f i a _ g l u e _ g e t _ a d d r ( d e - > d a t a - > e _ m s g ,   n e t w o r k _ i p ,   s i z e o f ( n e t w o r k _ i p ) ,   & n e t w o r k _ p o r t ) ; 
 
 	 / *   b a c k w a r d s   c o m p a t i b i l i t y   * / 
 	 i f   ( m o d _ s o f i a _ g l o b a l s . r e g _ d e n y _ b i n d i n g _ f e t c h _ a n d _ n o _ l o o k u p   & &   ! ( s i p - > s i p _ c o n t a c t   & &   s i p - > s i p _ c o n t a c t - > m _ u r l ) )   { 
 	 	 s w i t c h _ l o g _ p r i n t f ( S W I T C H _ C H A N N E L _ L O G ,   S W I T C H _ L O G _ E R R O R ,   " N O   C O N T A C T !   i p :   % s ,   p o r t :   % i \ n " ,   n e t w o r k _ i p ,   n e t w o r k _ p o r t ) ; 
 	 	 n u a _ r e s p o n d ( n h ,   4 0 0 ,   " M i s s i n g   C o n t a c t   H e a d e r " ,   T A G _ E N D ( ) ) ; 
 	 	 g o t o   e n d ; 
 	 } 
 
 	 i f   ( ! ( p r o f i l e - > m f l a g s   &   M F L A G _ R E G I S T E R ) )   { 
 	 	 n u a _ r e s p o n d ( n h ,   S I P _ 4 0 3 _ F O R B I D D E N ,   N U T A G _ W I T H _ T H I S _ M S G ( d e - > d a t a - > e _ m s g ) ,   T A G _ E N D ( ) ) ; 
 	 	 g o t o   e n d ; 
 	 } 
 
 	 i f   ( s o f i a _ t e s t _ p f l a g ( p r o f i l e ,   P F L A G _ A G G R E S S I V E _ N A T _ D E T E C T I O N ) )   { 
 	 	 i f   ( s i p   & &   s i p - > s i p _ v i a )   { 
 	 	 	 c o n s t   c h a r   * p o r t   =   s i p - > s i p _ v i a - > v _ p o r t ; 
 	 	 	 c o n s t   c h a r   * h o s t   =   s i p - > s i p _ v i a - > v _ h o s t ; 
 
 	 	 	 i f   ( h o s t   & &   s i p - > s i p _ v i a - > v _ r e c e i v e d )   { 
 	 	 	 	 i s _ n a t   =   " v i a   r e c e i v e d " ; 
 	 	 	 }   e l s e   i f   ( h o s t   & &   s t r c m p ( n e t w o r k _ i p ,   h o s t ) )   { 
 	 	 	 	 i s _ n a t   =   " v i a   h o s t " ; 
 	 	 	 }   e l s e   i f   ( p o r t   & &   a t o i ( p o r t )   ! =   n e t w o r k _ p o r t )   { 
 	 	 	 	 i s _ n a t   =   " v i a   p o r t " ; 
 	 	 	 } 
 
 	 	 	 i f   ( ! i s _ n a t   & &   s i p - > s i p _ v i a - > v _ p o r t   & & 
 	 	 	 	 a t o i ( s i p - > s i p _ v i a - > v _ p o r t )   = =   5 0 6 0   & &   n e t w o r k _ p o r t   ! =   5 0 6 0   )   { 
 	 	 	 	 i s _ n a t   =   " v i a   p o r t " ; 
 	 	 	 } 
 	 	 } 
 	 } 
 
 	 i f   ( ! i s _ n a t   & &   p r o f i l e - > n a t _ a c l _ c o u n t )   { 
 	 	 u i n t 3 2 _ t   x   =   0 ; 
 	 	 i n t   o k   =   1 ; 
 	 	 c h a r   * l a s t _ a c l   =   N U L L ; 
 	 	 c o n s t   c h a r   * c o n t a c t _ h o s t   =   N U L L ; 
 
 	 	 i f   ( s i p   & &   s i p - > s i p _ c o n t a c t   & &   s i p - > s i p _ c o n t a c t - > m _ u r l )   { 
 	 	 	 c o n t a c t _ h o s t   =   s i p - > s i p _ c o n t a c t - > m _ u r l - > u r l _ h o s t ; 
 	 	 } 
 
 	 	 i f   ( ! z s t r ( c o n t a c t _ h o s t ) )   { 
 	 	 	 f o r   ( x   =   0 ;   x   <   p r o f i l e - > n a t _ a c l _ c o u n t ;   x + + )   { 
 	 	 	 	 l a s t _ a c l   =   p r o f i l e - > n a t _ a c l [ x ] ; 
 	 	 	 	 i f   ( ! ( o k   =   s w i t c h _ c h e c k _ n e t w o r k _ l i s t _ i p ( c o n t a c t _ h o s t ,   l a s t _ a c l ) ) )   { 
 	 	 	 	 	 b r e a k ; 
 	 	 	 	 } 
 	 	 	 } 
 
 	 	 	 i f   ( o k )   { 
 	 	 	 	 i s _ n a t   =   l a s t _ a c l ; 
 	 	 	 } 
 	 	 } 
 	 } 
 
 	 i f   ( p r o f i l e - > r e g _ a c l _ c o u n t )   { 
 	 	 u i n t 3 2 _ t   x   =   0 ; 
 	 	 i n t   o k   =   1 ; 
 	 	 c h a r   * l a s t _ a c l   =   N U L L ; 
 
 	 	 f o r   ( x   =   0 ;   x   <   p r o f i l e - > r e g _ a c l _ c o u n t ;   x + + )   { 
 	 	 	 l a s t _ a c l   =   p r o f i l e - > r e g _ a c l [ x ] ; 
 	 	 	 i f   ( ! ( o k   =   s w i t c h _ c h e c k _ n e t w o r k _ l i s t _ i p ( n e t w o r k _ i p ,   l a s t _ a c l ) ) )   { 
 	 	 	 	 b r e a k ; 
 	 	 	 } 
 	 	 } 
 
 	 	 i f   ( o k   & &   ! s o f i a _ t e s t _ p f l a g ( p r o f i l e ,   P F L A G _ B L I N D _ R E G ) )   { 
 	 	 	 t y p e   =   R E G _ A U T O _ R E G I S T E R ; 
 	 	 }   e l s e   i f   ( ! o k )   { 
 	 	 	 s w i t c h _ l o g _ p r i n t f ( S W I T C H _ C H A N N E L _ L O G ,   S W I T C H _ L O G _ W A R N I N G ,   " I P   % s   R e j e c t e d   b y   r e g i s t e r   a c l   \ " % s \ " \ n " ,   n e t w o r k _ i p ,   p r o f i l e - > r e g _ a c l [ x ] ) ; 
 	 	 	 n u a _ r e s p o n d ( n h ,   S I P _ 4 0 3 _ F O R B I D D E N ,   N U T A G _ W I T H _ T H I S _ M S G ( d e - > d a t a - > e _ m s g ) ,   T A G _ E N D ( ) ) ; 
 	 	 	 g o t o   e n d ; 
 	 	 } 
 	 } 
 
 	 i f   ( ! s i p   | |   ! s i p - > s i p _ r e q u e s t   | |   ! s i p - > s i p _ r e q u e s t - > r q _ m e t h o d _ n a m e )   { 
 	 	 s w i t c h _ l o g _ p r i n t f ( S W I T C H _ C H A N N E L _ L O G ,   S W I T C H _ L O G _ E R R O R ,   " R e c e i v e d   a n   i n v a l i d   p a c k e t ! \ n " ) ; 
 	 	 n u a _ r e s p o n d ( n h ,   S I P _ 5 0 0 _ I N T E R N A L _ S E R V E R _ E R R O R ,   T A G _ E N D ( ) ) ; 
 	 	 g o t o   e n d ; 
 	 } 
 
 	 i f   ( i s _ n a t   & &   p r o f i l e - > l o c a l _ n e t w o r k   & &   s w i t c h _ c h e c k _ n e t w o r k _ l i s t _ i p ( n e t w o r k _ i p ,   p r o f i l e - > l o c a l _ n e t w o r k ) )   { 
 	 	 i f   ( p r o f i l e - > d e b u g )   { 
 	 	 	 s w i t c h _ l o g _ p r i n t f ( S W I T C H _ C H A N N E L _ L O G ,   S W I T C H _ L O G _ D E B U G ,   " I P   % s   i s   o n   l o c a l   n e t w o r k ,   n o t   s e t i n g   N A T   m o d e . \ n " ,   n e t w o r k _ i p ) ; 
 	 	 } 
 	 	 i s _ n a t   =   N U L L ; 
 	 } 
 
 	 s o f i a _ r e g _ h a n d l e _ r e g i s t e r ( n u a ,   p r o f i l e ,   n h ,   s i p ,   d e ,   t y p e ,   k e y ,   s i z e o f ( k e y ) ,   & v _ e v e n t ,   i s _ n a t ) ; 
 
 	 i f   ( v _ e v e n t )   { 
 	 	 s w i t c h _ e v e n t _ d e s t r o y ( & v _ e v e n t ) ; 
 	 } 
 
     e n d : 
 
 	 n u a _ h a n d l e _ d e s t r o y ( n h ) ; 
 
 } 
 
 
 v o i d   s o f i a _ r e g _ h a n d l e _ s i p _ r _ r e g i s t e r ( i n t   s t a t u s , 
 	 	 	 	 	 	 	 	 	   c h a r   c o n s t   * p h r a s e , 
 	 	 	 	 	 	 	 	 	   n u a _ t   * n u a ,   s o f i a _ p r o f i l e _ t   * p r o f i l e ,   n u a _ h a n d l e _ t   * n h ,   s o f i a _ p r i v a t e _ t   * s o f i a _ p r i v a t e ,   s i p _ t   c o n s t   * s i p , 
 	 	 	 	 	 	 	 	 s o f i a _ d i s p a t c h _ e v e n t _ t   * d e , 
 	 	 	 	 	 	 	 	 	   t a g i _ t   t a g s [ ] ) 
 { 
 	 i f   ( s t a t u s   > =   5 0 0 )   { 
 	 	 i f   ( s o f i a _ p r i v a t e   & &   s o f i a _ p r i v a t e - > g a t e w a y )   { 
 	 	 	 n u a _ h a n d l e _ d e s t r o y ( s o f i a _ p r i v a t e - > g a t e w a y - > n h ) ; 
 	 	 	 s o f i a _ p r i v a t e - > g a t e w a y - > n h   =   N U L L ; 
 	 	 }   e l s e   { 
 	 	 	 n u a _ h a n d l e _ d e s t r o y ( n h ) ; 
 	 	 } 
 	 } 
 
 	 i f   ( s o f i a _ p r i v a t e   & &   s o f i a _ p r i v a t e - > g a t e w a y )   { 
 	 	 r e g _ s t a t e _ t   o s t a t e   =   s o f i a _ p r i v a t e - > g a t e w a y - > s t a t e ; 
 	 	 s w i t c h   ( s t a t u s )   { 
 	 	 c a s e   2 0 0 : 
 	 	 	 i f   ( s i p   & &   s i p - > s i p _ c o n t a c t )   { 
 	 	 	 	 s i p _ c o n t a c t _ t   * c o n t a c t   =   s i p - > s i p _ c o n t a c t ; 
 	 	 	 	 c o n s t   c h a r   * n e w _ e x p i r e s ; 
 	 	 	 	 u i n t 3 2 _ t   e x p i ; 
 	 	 	 	 i f   ( c o n t a c t - > m _ n e x t )   { 
 	 	 	 	 	 c h a r   * f u l l ; 
 
 	 	 	 	 	 f o r   ( ;   c o n t a c t ;   c o n t a c t   =   c o n t a c t - > m _ n e x t )   { 
 	 	 	 	 	 	 i f   ( ( f u l l   =   s i p _ h e a d e r _ a s _ s t r i n g ( n h - > n h _ h o m e ,   ( v o i d   * )   c o n t a c t ) ) )   { 
 	 	 	 	 	 	 	 i f   ( s w i t c h _ s t r i s t r ( s o f i a _ p r i v a t e - > g a t e w a y - > r e g i s t e r _ c o n t a c t ,   f u l l ) )   { 
 	 	 	 	 	 	 	 	 b r e a k ; 
 	 	 	 	 	 	 	 } 
 
 	 	 	 	 	 	 	 s u _ f r e e ( n h - > n h _ h o m e ,   f u l l ) ; 
 	 	 	 	 	 	 } 
 	 	 	 	 	 } 
 	 	 	 	 } 
 
 	 	 	 	 i f   ( ! c o n t a c t )   { 
 	 	 	 	 	 c o n t a c t   =   s i p - > s i p _ c o n t a c t ; 
 	 	 	 	 } 
 
 	 	 	 	 i f   ( c o n t a c t - > m _ e x p i r e s )   { 
 	 	 	 	 	 n e w _ e x p i r e s   =   c o n t a c t - > m _ e x p i r e s ; 
 	 	 	 	 	 e x p i   =   ( u i n t 3 2 _ t )   a t o i ( n e w _ e x p i r e s ) ; 
 
 	 	 	 	 	 i f   ( e x p i   >   0   & &   e x p i   ! =   s o f i a _ p r i v a t e - > g a t e w a y - > f r e q )   { 
 	 	 	 	 	 	 s o f i a _ p r i v a t e - > g a t e w a y - > f r e q   =   e x p i ; 
 	 	 	 	 	 	 s o f i a _ p r i v a t e - > g a t e w a y - > e x p i r e s _ s t r   =   s w i t c h _ c o r e _ s p r i n t f ( s o f i a _ p r i v a t e - > g a t e w a y - > p o o l ,   " % d " ,   e x p i ) ; 
 
 	 	 	 	 	 	 i f   ( e x p i   >   6 0 )   { 
 	 	 	 	 	 	 	 s o f i a _ p r i v a t e - > g a t e w a y - > e x p i r e s   =   s w i t c h _ e p o c h _ t i m e _ n o w ( N U L L )   +   ( e x p i   -   1 5 ) ; 
 	 	 	 	 	 	 }   e l s e   { 
 	 	 	 	 	 	 	 s o f i a _ p r i v a t e - > g a t e w a y - > e x p i r e s   =   s w i t c h _ e p o c h _ t i m e _ n o w ( N U L L )   +   ( e x p i   -   2 ) ; 
 	 	 	 	 	 	 } 
 
 
 	 	 	 	 	 	 s w i t c h _ l o g _ p r i n t f ( S W I T C H _ C H A N N E L _ L O G ,   S W I T C H _ L O G _ D E B U G , 
 	 	 	 	 	 	 	 	 	 	     " C h a n g i n g   e x p i r e   t i m e   t o   % d   b y   r e q u e s t   o f   p r o x y   % s \ n " ,   e x p i ,   s o f i a _ p r i v a t e - > g a t e w a y - > r e g i s t e r _ p r o x y ) ; 
 	 	 	 	 	 } 
 	 	 	 	 } 
 	 	 	 } 
 	 	 	 s o f i a _ p r i v a t e - > g a t e w a y - > s t a t e   =   R E G _ S T A T E _ R E G I S T E R ; 
 	 	 	 b r e a k ; 
 	 	 c a s e   1 0 0 : 
 	 	 	 b r e a k ; 
 	 	 d e f a u l t : 
 	 	 	 s o f i a _ p r i v a t e - > g a t e w a y - > s t a t e   =   R E G _ S T A T E _ F A I L E D ; 
 	 	 	 s o f i a _ p r i v a t e - > g a t e w a y - > f a i l u r e _ s t a t u s   =   s t a t u s ; 
 	 	 	 s w i t c h _ l o g _ p r i n t f ( S W I T C H _ C H A N N E L _ L O G ,   S W I T C H _ L O G _ E R R O R ,   " % s   R e g i s t r a t i o n   F a i l e d   w i t h   s t a t u s   % s   [ % d ] .   f a i l u r e   # % d \ n " , 
 	 	 	 	 	 	 	     s o f i a _ p r i v a t e - > g a t e w a y - > n a m e ,   s w i t c h _ s t r _ n i l ( p h r a s e ) ,   s t a t u s ,   + + s o f i a _ p r i v a t e - > g a t e w a y - > f a i l u r e s ) ; 
 	 	 	 b r e a k ; 
 	 	 } 
 	 	 i f   ( o s t a t e   ! =   s o f i a _ p r i v a t e - > g a t e w a y - > s t a t e )   { 
 	 	 	 s o f i a _ r e g _ f i r e _ c u s t o m _ g a t e w a y _ s t a t e _ e v e n t ( s o f i a _ p r i v a t e - > g a t e w a y ,   s t a t u s ,   p h r a s e ) ; 
 	 	 } 
 	 } 
 } 
 
 v o i d   s o f i a _ r e g _ h a n d l e _ s i p _ r _ c h a l l e n g e ( i n t   s t a t u s , 
 	 	 	 	 	 	 	 	 	     c h a r   c o n s t   * p h r a s e , 
 	 	 	 	 	 	 	 	 	     n u a _ t   * n u a ,   s o f i a _ p r o f i l e _ t   * p r o f i l e ,   n u a _ h a n d l e _ t   * n h ,   s o f i a _ p r i v a t e _ t   * s o f i a _ p r i v a t e , 
 	 	 	 	 	 	 	 	 	     s w i t c h _ c o r e _ s e s s i o n _ t   * s e s s i o n ,   s o f i a _ g a t e w a y _ t   * g a t e w a y ,   s i p _ t   c o n s t   * s i p , 
 	 	 	 	 	 	 	 	 s o f i a _ d i s p a t c h _ e v e n t _ t   * d e ,   t a g i _ t   t a g s [ ] ) 
 { 
 	 s i p _ w w w _ a u t h e n t i c a t e _ t   c o n s t   * a u t h e n t i c a t e   =   N U L L ; 
 	 c h a r   c o n s t   * r e a l m   =   N U L L ; 
 	 c h a r   c o n s t   * s c h e m e   =   N U L L ; 
 	 i n t   i n d e x n u m ; 
 	 c h a r   * c u r ; 
 	 c h a r   a u t h e n t i c a t i o n [ 2 5 6 ]   =   " " ; 
 	 i n t   s s _ s t a t e ; 
 	 s o f i a _ g a t e w a y _ t   * v a r _ g a t e w a y   =   N U L L ; 
 	 c o n s t   c h a r   * g w _ n a m e   =   N U L L ; 
 	 s w i t c h _ c h a n n e l _ t   * c h a n n e l   =   N U L L ; 
 	 c o n s t   c h a r   * s i p _ a u t h _ u s e r n a m e   =   N U L L ; 
 	 c o n s t   c h a r   * s i p _ a u t h _ p a s s w o r d   =   N U L L ; 
 	 c h a r   * d u p _ u s e r   =   N U L L ; 
 	 c h a r   * d u p _ p a s s   =   N U L L ; 
 	 
 	 i f   ( s e s s i o n   & &   ( c h a n n e l   =   s w i t c h _ c o r e _ s e s s i o n _ g e t _ c h a n n e l ( s e s s i o n ) ) )   { 
 	 	 s i p _ a u t h _ u s e r n a m e   =   s w i t c h _ c h a n n e l _ g e t _ v a r i a b l e ( c h a n n e l ,   " s i p _ a u t h _ u s e r n a m e " ) ; 
 	 	 s i p _ a u t h _ p a s s w o r d   =   s w i t c h _ c h a n n e l _ g e t _ v a r i a b l e ( c h a n n e l ,   " s i p _ a u t h _ p a s s w o r d " ) ; 
 	 } 
 
 	 i f   ( s o f i a _ p r i v a t e   & &   * s o f i a _ p r i v a t e - > a u t h _ g a t e w a y _ n a m e )   { 
 	 	 g w _ n a m e   =   s o f i a _ p r i v a t e - > a u t h _ g a t e w a y _ n a m e ; 
 	 } 
 
 	 i f   ( s e s s i o n )   { 
 	 	 p r i v a t e _ o b j e c t _ t   * t e c h _ p v t ; 
 
 	 	 i f   ( ( t e c h _ p v t   =   s w i t c h _ c o r e _ s e s s i o n _ g e t _ p r i v a t e ( s e s s i o n ) )   & &   s o f i a _ t e s t _ f l a g ( t e c h _ p v t ,   T F L A G _ R E F E R ) )   { 
 	 	 	 s w i t c h _ l o g _ p r i n t f ( S W I T C H _ C H A N N E L _ S E S S I O N _ L O G ( s e s s i o n ) ,   S W I T C H _ L O G _ D E B U G ,   " R e c e i v e d   r e p l y   f r o m   R E F E R \ n " ) ; 
 	 	 	 g o t o   e n d ; 
 	 	 } 
 
 	 	 g w _ n a m e   =   s w i t c h _ c h a n n e l _ g e t _ v a r i a b l e ( s w i t c h _ c o r e _ s e s s i o n _ g e t _ c h a n n e l ( s e s s i o n ) ,   " s i p _ u s e _ g a t e w a y " ) ; 
 	 } 
 
 
 	 i f   ( s i p - > s i p _ w w w _ a u t h e n t i c a t e )   { 
 	 	 a u t h e n t i c a t e   =   s i p - > s i p _ w w w _ a u t h e n t i c a t e ; 
 	 }   e l s e   i f   ( s i p - > s i p _ p r o x y _ a u t h e n t i c a t e )   { 
 	 	 a u t h e n t i c a t e   =   s i p - > s i p _ p r o x y _ a u t h e n t i c a t e ; 
 	 }   e l s e   { 
 	 	 s w i t c h _ l o g _ p r i n t f ( S W I T C H _ C H A N N E L _ S E S S I O N _ L O G ( s e s s i o n ) ,   S W I T C H _ L O G _ D E B U G ,   " M i s s i n g   A u t h e n t i c a t e   H e a d e r ! \ n " ) ; 
 	 	 g o t o   e n d ; 
 	 } 
 	 s c h e m e   =   ( c h a r   c o n s t   * )   a u t h e n t i c a t e - > a u _ s c h e m e ; 
 	 i f   ( a u t h e n t i c a t e - > a u _ p a r a m s )   { 
 	 	 f o r   ( i n d e x n u m   =   0 ;   ( c u r   =   ( c h a r   * )   a u t h e n t i c a t e - > a u _ p a r a m s [ i n d e x n u m ] ) ;   i n d e x n u m + + )   { 
 	 	 	 i f   ( ( r e a l m   =   s t r s t r ( c u r ,   " r e a l m = " ) ) )   { 
 	 	 	 	 r e a l m   + =   6 ; 
 	 	 	 	 b r e a k ; 
 	 	 	 } 
 	 	 } 
 	 } 
 
 	 i f   ( ! g a t e w a y )   { 
 	 	 i f   ( g w _ n a m e )   { 
 	 	 	 v a r _ g a t e w a y   =   s o f i a _ r e g _ f i n d _ g a t e w a y ( ( c h a r   * )   g w _ n a m e ) ; 
 	 	 } 
 
 
 	 	 i f   ( ! v a r _ g a t e w a y   & &   r e a l m )   { 
 	 	 	 c h a r   r b [ 5 1 2 ]   =   " " ; 
 	 	 	 c h a r   * p   =   ( c h a r   * )   r e a l m ; 
 	 	 	 w h i l e   ( * p   = =   ' " ' )   { 
 	 	 	 	 p + + ; 
 	 	 	 } 
 	 	 	 s w i t c h _ s e t _ s t r i n g ( r b ,   p ) ; 
 	 	 	 i f   ( ( p   =   s t r c h r ( r b ,   ' " ' ) ) )   { 
 	 	 	 	 * p   =   ' \ 0 ' ; 
 	 	 	 } 
 	 	 	 i f   ( ! ( v a r _ g a t e w a y   =   s o f i a _ r e g _ f i n d _ g a t e w a y ( r b ) ) )   { 
 	 	 	 	 v a r _ g a t e w a y   =   s o f i a _ r e g _ f i n d _ g a t e w a y _ b y _ r e a l m ( r b ) ; 
 	 	 	 } 
 	 	 } 
 
 	 	 i f   ( ! v a r _ g a t e w a y   & &   s i p   & &   s i p - > s i p _ t o )   { 
 	 	 	 v a r _ g a t e w a y   =   s o f i a _ r e g _ f i n d _ g a t e w a y ( s i p - > s i p _ t o - > a _ u r l - > u r l _ h o s t ) ; 
 	 	 } 
 
 	 	 i f   ( v a r _ g a t e w a y )   { 
 	 	 	 g a t e w a y   =   v a r _ g a t e w a y ; 
 	 	 } 
 	 } 
 
 	 i f   ( ! g a t e w a y   & &   ! s i p _ a u t h _ u s e r n a m e   & &   s i p   & &   s i p - > s i p _ t o   & &   s i p - > s i p _ t o - > a _ u r l   & &   s i p - > s i p _ t o - > a _ u r l - > u r l _ u s e r   & &   s i p - > s i p _ t o - > a _ u r l - > u r l _ h o s t )   { 
 	 	 s w i t c h _ x m l _ t   x _ u s e r ,   x _ p a r a m ,   x _ p a r a m s ; 
 	 	 s w i t c h _ e v e n t _ t   * l o c a t e _ p a r a m s ; 
 
 	 	 s w i t c h _ e v e n t _ c r e a t e ( & l o c a t e _ p a r a m s ,   S W I T C H _ E V E N T _ R E Q U E S T _ P A R A M S ) ; 
 	 	 s w i t c h _ a s s e r t ( l o c a t e _ p a r a m s ) ; 
 
 	 	 s w i t c h _ e v e n t _ a d d _ h e a d e r _ s t r i n g ( l o c a t e _ p a r a m s ,   S W I T C H _ S T A C K _ B O T T O M ,   " a c t i o n " ,   " r e v e r s e - a u t h - l o o k u p " ) ; 
 
 	 	 i f   (   s i p - > s i p _ c a l l _ i d   )   { 
 	 	 	 s w i t c h _ e v e n t _ a d d _ h e a d e r _ s t r i n g ( l o c a t e _ p a r a m s ,   S W I T C H _ S T A C K _ B O T T O M ,   " s i p _ c a l l _ i d " ,   s i p - > s i p _ c a l l _ i d - > i _ i d ) ; 
 	 	 } 
 
 	 	 i f   ( s w i t c h _ x m l _ l o c a t e _ u s e r _ m e r g e d ( " i d " ,   s i p - > s i p _ t o - > a _ u r l - > u r l _ u s e r ,   s i p - > s i p _ t o - > a _ u r l - > u r l _ h o s t ,   N U L L , 
 	 	 	 	 	 	 	 	 	 	     & x _ u s e r ,   l o c a t e _ p a r a m s )   = =   S W I T C H _ S T A T U S _ S U C C E S S )   { 
 	 	 	 i f   ( ( x _ p a r a m s   =   s w i t c h _ x m l _ c h i l d ( x _ u s e r ,   " p a r a m s " ) ) )   { 
 	 	 	 	 f o r   ( x _ p a r a m   =   s w i t c h _ x m l _ c h i l d ( x _ p a r a m s ,   " p a r a m " ) ;   x _ p a r a m ;   x _ p a r a m   =   x _ p a r a m - > n e x t )   { 
 	 	 	 	 	 c o n s t   c h a r   * v a r   =   s w i t c h _ x m l _ a t t r _ s o f t ( x _ p a r a m ,   " n a m e " ) ; 
 	 	 	 	 	 c o n s t   c h a r   * v a l   =   s w i t c h _ x m l _ a t t r _ s o f t ( x _ p a r a m ,   " v a l u e " ) ; 
 	 	 	 	 	 
 	 	 	 	 	 i f   ( ! s t r c a s e c m p ( v a r ,   " r e v e r s e - a u t h - u s e r " ) )   { 
 	 	 	 	 	 	 d u p _ u s e r   =   s t r d u p ( v a l ) ; 
 	 	 	 	 	 	 s i p _ a u t h _ u s e r n a m e   =   d u p _ u s e r ; 
 	 	 	 	 	 }   e l s e   i f   ( ! s t r c a s e c m p ( v a r ,   " r e v e r s e - a u t h - p a s s " ) )   { 
 	 	 	 	 	 	 d u p _ p a s s   =   s t r d u p ( v a l ) ; 
 	 	 	 	 	 	 s i p _ a u t h _ p a s s w o r d   =   d u p _ p a s s ; 
 	 	 	 	 	 } 
 	 	 	 	 } 
 
 	 	 	 	 s w i t c h _ x m l _ f r e e ( x _ u s e r ) ; 
 	 	 	 } 
 	 	 } 
 
 	 	 s w i t c h _ e v e n t _ d e s t r o y ( & l o c a t e _ p a r a m s ) ; 
 	 } 
 
 	 i f   ( ! ( s c h e m e   & &   r e a l m ) )   { 
 	 	 s w i t c h _ l o g _ p r i n t f ( S W I T C H _ C H A N N E L _ S E S S I O N _ L O G ( s e s s i o n ) ,   S W I T C H _ L O G _ E R R O R ,   " N o   s c h e m e   a n d   r e a l m ! \ n " ) ; 
 	 	 g o t o   e n d ; 
 	 } 
 
 	 i f   ( s i p _ a u t h _ u s e r n a m e   & &   s i p _ a u t h _ p a s s w o r d )   { 
 	 	 s w i t c h _ s n p r i n t f ( a u t h e n t i c a t i o n ,   s i z e o f ( a u t h e n t i c a t i o n ) ,   " % s : % s : % s : % s " ,   s c h e m e ,   r e a l m ,   s i p _ a u t h _ u s e r n a m e ,   s i p _ a u t h _ p a s s w o r d ) ; 
 	 }   e l s e   i f   ( g a t e w a y )   { 
 	 	 s w i t c h _ s n p r i n t f ( a u t h e n t i c a t i o n ,   s i z e o f ( a u t h e n t i c a t i o n ) ,   " % s : % s : % s : % s " ,   s c h e m e ,   r e a l m ,   g a t e w a y - > a u t h _ u s e r n a m e ,   g a t e w a y - > r e g i s t e r _ p a s s w o r d ) ; 
 	 }   e l s e   { 
 	 	 s w i t c h _ l o g _ p r i n t f ( S W I T C H _ C H A N N E L _ S E S S I O N _ L O G ( s e s s i o n ) ,   S W I T C H _ L O G _ E R R O R ,   
 	 	 	 	 	 	     " C a n n o t   l o c a t e   a n y   a u t h e n t i c a t i o n   c r e d e n t i a l s   t o   c o m p l e t e   a n   a u t h e n t i c a t i o n   r e q u e s t   f o r   r e a l m   ' % s ' \ n " ,   r e a l m ) ; 
 	 	 g o t o   c a n c e l ; 
 	 } 
 
 	 i f   ( p r o f i l e - > d e b u g )   { 
 	 	 s w i t c h _ l o g _ p r i n t f ( S W I T C H _ C H A N N E L _ S E S S I O N _ L O G ( s e s s i o n ) ,   S W I T C H _ L O G _ D E B U G ,   " A u t h e n t i c a t i n g   ' % s '   w i t h   ' % s ' . \ n " , 
 	 	 	 	 	 	     ( s i p _ a u t h _ u s e r n a m e   & &   s i p _ a u t h _ p a s s w o r d )   ?   s i p _ a u t h _ u s e r n a m e   :   g a t e w a y - > a u t h _ u s e r n a m e ,   a u t h e n t i c a t i o n ) ; 
 	 } 
 
 	 s s _ s t a t e   =   n u a _ c a l l s t a t e _ a u t h e n t i c a t i n g ; 
 
 	 t l _ g e t s ( t a g s ,   N U T A G _ C A L L S T A T E _ R E F ( s s _ s t a t e ) ,   S I P T A G _ W W W _ A U T H E N T I C A T E _ R E F ( a u t h e n t i c a t e ) ,   T A G _ E N D ( ) ) ; 
 
 	 n u a _ a u t h e n t i c a t e ( n h ,   
 	 	 	 	 	   T A G _ I F ( s o f i a _ p r i v a t e   & &   s o f i a _ p r i v a t e - > g a t e w a y ,   S I P T A G _ E X P I R E S _ S T R ( g a t e w a y   ?   g a t e w a y - > e x p i r e s _ s t r   :   " 3 6 0 0 " ) ) ,   
 	 	 	 	 	   N U T A G _ A U T H ( a u t h e n t i c a t i o n ) ,   T A G _ E N D ( ) ) ; 
 
 	 g o t o   e n d ; 
 
     c a n c e l : 
 
 	 i f   ( s e s s i o n )   { 
 	 	 s w i t c h _ c h a n n e l _ h a n g u p ( s w i t c h _ c o r e _ s e s s i o n _ g e t _ c h a n n e l ( s e s s i o n ) ,   S W I T C H _ C A U S E _ M A N D A T O R Y _ I E _ M I S S I N G ) ; 
 	 }   e l s e   { 
 	 	 n u a _ c a n c e l ( n h ,   T A G _ E N D ( ) ) ; 
 	 } 
 
     e n d : 
 
 
 	 s w i t c h _ s a f e _ f r e e ( d u p _ u s e r ) ; 
 	 s w i t c h _ s a f e _ f r e e ( d u p _ p a s s ) ; 
 
 	 i f   ( v a r _ g a t e w a y )   { 
 	 	 s o f i a _ r e g _ r e l e a s e _ g a t e w a y ( v a r _ g a t e w a y ) ; 
 	 } 
 
 	 r e t u r n ; 
 
 
 
 } 
 
 t y p e d e f   s t r u c t   { 
 	 c h a r   * n o n c e ; 
 	 s w i t c h _ s i z e _ t   n p l e n ; 
 	 i n t   l a s t _ n c ; 
 }   n o n c e _ c b _ t ; 
 
 s t a t i c   i n t   s o f i a _ r e g _ n o n c e _ c a l l b a c k ( v o i d   * p A r g ,   i n t   a r g c ,   c h a r   * * a r g v ,   c h a r   * * c o l u m n N a m e s ) 
 { 
 	 n o n c e _ c b _ t   * c b   =   ( n o n c e _ c b _ t   * )   p A r g ; 
 	 s w i t c h _ c o p y _ s t r i n g ( c b - > n o n c e ,   a r g v [ 0 ] ,   c b - > n p l e n ) ; 
 	 i f   ( a r g c   = =   2 )   { 
 	 	 c b - > l a s t _ n c   =   z s t r ( a r g v [ 1 ] )   ?   0   :   a t o i ( a r g v [ 1 ] ) ; 
 	 }   e l s e   { 
 	 	 c b - > l a s t _ n c   =   0 ; 
 	 } 
 	 r e t u r n   0 ; 
 } 
 
 s t a t i c   i n t   s o f i a _ r e g _ r e g c o u n t _ c a l l b a c k ( v o i d   * p A r g ,   i n t   a r g c ,   c h a r   * * a r g v ,   c h a r   * * c o l u m n N a m e s ) 
 { 
 	 i n t   * r e t   =   ( i n t   * )   p A r g ; 
 	 i f   ( a r g c   = =   1 )   { 
 	 	 * r e t   =   a t o i ( a r g v [ 0 ] ) ; 
 	 } 
 	 r e t u r n   0 ; 
 } 
 
 a u t h _ r e s _ t   s o f i a _ r e g _ p a r s e _ a u t h ( s o f i a _ p r o f i l e _ t   * p r o f i l e , 
 	 	 	 	 	 	 	 	 s i p _ a u t h o r i z a t i o n _ t   c o n s t   * a u t h o r i z a t i o n , 
 	 	 	 	 	 	 	 	 s i p _ t   c o n s t   * s i p , 
 	 	 	 	 	 	 	 	 s o f i a _ d i s p a t c h _ e v e n t _ t   * d e , 
 	 	 	 	 	 	 	 	 c o n s t   c h a r   * r e g s t r , 
 	 	 	 	 	 	 	 	 c h a r   * n p , 
 	 	 	 	 	 	 	 	 s i z e _ t   n p l e n , 
 	 	 	 	 	 	 	 	 c h a r   * i p , 
 	 	 	 	 	 	 	 	 s w i t c h _ e v e n t _ t   * * v _ e v e n t , 
 	 	 	 	 	 	 	 	 l o n g   e x p t i m e ,   s o f i a _ r e g t y p e _ t   r e g t y p e ,   c o n s t   c h a r   * t o _ u s e r ,   s w i t c h _ e v e n t _ t   * * a u t h _ p a r a m s ,   l o n g   * r e g _ c o u n t ) 
 { 
 	 i n t   i n d e x n u m ; 
 	 c o n s t   c h a r   * c u r ; 
 	 s u _ m d 5 _ t   c t x ; 
 	 c h a r   u r i d i g e s t [ 2   *   S U _ M D 5 _ D I G E S T _ S I Z E   +   1 ] ; 
 	 c h a r   b i g d i g e s t [ 2   *   S U _ M D 5 _ D I G E S T _ S I Z E   +   1 ] ; 
 	 c h a r   * u s e r n a m e ,   * r e a l m ,   * n o n c e ,   * u r i ,   * q o p ,   * c n o n c e ,   * n c ,   * r e s p o n s e ,   * i n p u t   =   N U L L ,   * i n p u t 2   =   N U L L ; 
 	 a u t h _ r e s _ t   r e t   =   A U T H _ F O R B I D D E N ; 
 	 i n t   f i r s t   =   0 ; 
 	 c o n s t   c h a r   * p a s s w d   =   N U L L ; 
 	 c o n s t   c h a r   * a 1 _ h a s h   =   N U L L ; 
 	 c o n s t   c h a r   * m w i _ a c c o u n t   =   N U L L ; 
 	 s w i t c h _ b o o l _ t   a l l o w _ e m p t y _ p a s s w o r d   =   S W I T C H _ T R U E ; 
 	 c o n s t   c h a r   * c a l l _ i d   =   N U L L ; 
 	 c h a r   * s q l ; 
 	 c h a r   * n u m b e r _ a l i a s   =   N U L L ; 
 	 s w i t c h _ x m l _ t   u s e r   =   N U L L ,   p a r a m ,   u p a r a m s ; 
 	 c h a r   h e x d i g e s t [ 2   *   S U _ M D 5 _ D I G E S T _ S I Z E   +   1 ]   =   " " ; 
 	 c h a r   * d o m a i n _ n a m e   =   N U L L ; 
 	 s w i t c h _ e v e n t _ t   * p a r a m s   =   N U L L ; 
 	 c o n s t   c h a r   * a u t h _ a c l   =   N U L L ; 
 	 l o n g   n c l   =   0 ; 
 	 s i p _ u n k n o w n _ t   * u n ; 
 	 c o n s t   c h a r   * u s e r _ a g e n t   =   N U L L ; 
 	 c o n s t   c h a r   * u s e r _ a g e n t _ f i l t e r   =   p r o f i l e - > u s e r _ a g e n t _ f i l t e r ; 
 	 u i n t 3 2 _ t   m a x _ r e g i s t r a t i o n s _ p e r e x t   =   p r o f i l e - > m a x _ r e g i s t r a t i o n s _ p e r e x t ; 
 
 	 u s e r n a m e   =   r e a l m   =   n o n c e   =   u r i   =   q o p   =   c n o n c e   =   n c   =   r e s p o n s e   =   N U L L ; 
 
 	 i f   ( a u t h o r i z a t i o n - > a u _ p a r a m s )   { 
 	 	 f o r   ( i n d e x n u m   =   0 ;   ( c u r   =   a u t h o r i z a t i o n - > a u _ p a r a m s [ i n d e x n u m ] ) ;   i n d e x n u m + + )   { 
 	 	 	 c h a r   * v a r ,   * v a l ,   * p ,   * w o r k ; 
 	 	 	 v a r   =   v a l   =   w o r k   =   N U L L ; 
 	 	 	 i f   ( ( w o r k   =   s t r d u p ( c u r ) ) )   { 
 	 	 	 	 v a r   =   w o r k ; 
 	 	 	 	 i f   ( ( v a l   =   s t r c h r ( v a r ,   ' = ' ) ) )   { 
 	 	 	 	 	 * v a l + +   =   ' \ 0 ' ; 
 	 	 	 	 	 w h i l e   ( * v a l   = =   ' " ' )   { 
 	 	 	 	 	 	 * v a l + +   =   ' \ 0 ' ; 
 	 	 	 	 	 } 
 	 	 	 	 	 i f   ( ( p   =   s t r c h r ( v a l ,   ' " ' ) ) )   { 
 	 	 	 	 	 	 * p   =   ' \ 0 ' ; 
 	 	 	 	 	 } 
 
 	 	 	 	 	 i f   ( ! s t r c a s e c m p ( v a r ,   " u s e r n a m e " ) )   { 
 	 	 	 	 	 	 u s e r n a m e   =   s t r d u p ( v a l ) ; 
 	 	 	 	 	 }   e l s e   i f   ( ! s t r c a s e c m p ( v a r ,   " r e a l m " ) )   { 
 	 	 	 	 	 	 r e a l m   =   s t r d u p ( v a l ) ; 
 	 	 	 	 	 }   e l s e   i f   ( ! s t r c a s e c m p ( v a r ,   " n o n c e " ) )   { 
 	 	 	 	 	 	 n o n c e   =   s t r d u p ( v a l ) ; 
 	 	 	 	 	 }   e l s e   i f   ( ! s t r c a s e c m p ( v a r ,   " u r i " ) )   { 
 	 	 	 	 	 	 u r i   =   s t r d u p ( v a l ) ; 
 	 	 	 	 	 }   e l s e   i f   ( ! s t r c a s e c m p ( v a r ,   " q o p " ) )   { 
 	 	 	 	 	 	 q o p   =   s t r d u p ( v a l ) ; 
 	 	 	 	 	 }   e l s e   i f   ( ! s t r c a s e c m p ( v a r ,   " c n o n c e " ) )   { 
 	 	 	 	 	 	 c n o n c e   =   s t r d u p ( v a l ) ; 
 	 	 	 	 	 }   e l s e   i f   ( ! s t r c a s e c m p ( v a r ,   " r e s p o n s e " ) )   { 
 	 	 	 	 	 	 r e s p o n s e   =   s t r d u p ( v a l ) ; 
 	 	 	 	 	 }   e l s e   i f   ( ! s t r c a s e c m p ( v a r ,   " n c " ) )   { 
 	 	 	 	 	 	 n c   =   s t r d u p ( v a l ) ; 
 	 	 	 	 	 } 
 	 	 	 	 } 
 
 	 	 	 	 f r e e ( w o r k ) ; 
 	 	 	 } 
 	 	 } 
 	 } 
 
 	 i f   ( ! ( u s e r n a m e   & &   r e a l m   & &   n o n c e   & &   u r i   & &   r e s p o n s e ) )   { 
 	 	 s w i t c h _ l o g _ p r i n t f ( S W I T C H _ C H A N N E L _ L O G ,   S W I T C H _ L O G _ E R R O R ,   " I n v a l i d   A u t h o r i z a t i o n   h e a d e r ! \ n " ) ; 
 	 	 r e t   =   A U T H _ S T A L E ; 
 	 	 g o t o   e n d ; 
 	 } 
 
 	 / *   O p t i o n a l   c h e c k   t h a t   a u t h   n a m e   = =   S I P   u s e r n a m e   * / 
 	 i f   ( ( r e g t y p e   = =   R E G _ R E G I S T E R )   & &   s o f i a _ t e s t _ p f l a g ( p r o f i l e ,   P F L A G _ C H E C K U S E R ) )   { 
 	 	 i f   ( z s t r ( u s e r n a m e )   | |   z s t r ( t o _ u s e r )   | |   s t r c a s e c m p ( t o _ u s e r ,   u s e r n a m e ) )   { 
 	 	 	 / *   N a m e s   d o n ' t   m a t c h ,   s o   f a i l   * / 
 	 	 	 i f   ( p r o f i l e - > d e b u g )   { 
 	 	 	 	 s w i t c h _ l o g _ p r i n t f ( S W I T C H _ C H A N N E L _ L O G ,   S W I T C H _ L O G _ D E B U G ,   " S I P   u s e r n a m e   % s   d o e s   n o t   m a t c h   a u t h   u s e r n a m e \ n " ,   s w i t c h _ s t r _ n i l ( t o _ u s e r ) ) ; 
 	 	 	 } 
 	 	 	 g o t o   e n d ; 
 	 	 } 
 	 } 
 
 	 u s e r _ a g e n t   =   ( s i p   & &   s i p - > s i p _ u s e r _ a g e n t )   ?   s i p - > s i p _ u s e r _ a g e n t - > g _ s t r i n g   :   " u n k n o w n " ; 
 
 	 i f   ( z s t r ( n p ) )   { 
 	 	 n o n c e _ c b _ t   c b   =   {   0   } ; 
 	 	 l o n g   n c _ l o n g   =   0 ; 
 	 	 f i r s t   =   1 ; 
 
 	 	 i f   ( n c )   { 
 	 	 	 n c _ l o n g   =   s t r t o u l ( n c ,   0 ,   1 6 ) ; 
 	 	 	 s q l   =   s w i t c h _ m p r i n t f ( " s e l e c t   n o n c e , l a s t _ n c   f r o m   s i p _ a u t h e n t i c a t i o n   w h e r e   n o n c e = ' % q '   a n d   l a s t _ n c   <   % l u " ,   n o n c e ,   n c _ l o n g ) ; 
 	 	 }   e l s e   { 
 	 	 	 s q l   =   s w i t c h _ m p r i n t f ( " s e l e c t   n o n c e   f r o m   s i p _ a u t h e n t i c a t i o n   w h e r e   n o n c e = ' % q ' " ,   n o n c e ) ; 
 	 	 } 
 
 	 	 c b . n o n c e   =   n p ; 
 	 	 c b . n p l e n   =   n p l e n ; 
 
 	 	 s w i t c h _ a s s e r t ( s q l   ! =   N U L L ) ; 
 	 	 s o f i a _ g l u e _ e x e c u t e _ s q l _ c a l l b a c k ( p r o f i l e ,   p r o f i l e - > i r e g _ m u t e x ,   s q l ,   s o f i a _ r e g _ n o n c e _ c a l l b a c k ,   & c b ) ; 
 	 	 f r e e ( s q l ) ; 
 
 	 	 / / i f   ( ! s o f i a _ g l u e _ e x e c u t e _ s q l 2 s t r ( p r o f i l e ,   p r o f i l e - > i r e g _ m u t e x ,   s q l ,   n p ,   n p l e n ) )   { 
 	 	 i f   ( z s t r ( n p ) )   { 
 	 	 	 s q l   =   s w i t c h _ m p r i n t f ( " d e l e t e   f r o m   s i p _ a u t h e n t i c a t i o n   w h e r e   n o n c e = ' % q ' " ,   n o n c e ) ; 
 	 	 	 s o f i a _ g l u e _ e x e c u t e _ s q l ( p r o f i l e ,   & s q l ,   S W I T C H _ T R U E ) ; 
 	 	 	 r e t   =   A U T H _ S T A L E ; 
 	 	 	 g o t o   e n d ; 
 	 	 } 
 
 	 	 i f   ( r e g _ c o u n t )   { 
 	 	 	 * r e g _ c o u n t   =   c b . l a s t _ n c   +   1 ; 
 	 	 } 
 	 } 
 
 	 s w i t c h _ e v e n t _ c r e a t e ( & p a r a m s ,   S W I T C H _ E V E N T _ R E Q U E S T _ P A R A M S ) ; 
 	 s w i t c h _ a s s e r t ( p a r a m s ) ; 
 	 s w i t c h _ e v e n t _ a d d _ h e a d e r _ s t r i n g ( p a r a m s ,   S W I T C H _ S T A C K _ B O T T O M ,   " a c t i o n " ,   " s i p _ a u t h " ) ; 
 	 s w i t c h _ e v e n t _ a d d _ h e a d e r _ s t r i n g ( p a r a m s ,   S W I T C H _ S T A C K _ B O T T O M ,   " s i p _ p r o f i l e " ,   p r o f i l e - > n a m e ) ; 
 	 s w i t c h _ e v e n t _ a d d _ h e a d e r _ s t r i n g ( p a r a m s ,   S W I T C H _ S T A C K _ B O T T O M ,   " s i p _ u s e r _ a g e n t " ,   u s e r _ a g e n t ) ; 
 	 s w i t c h _ e v e n t _ a d d _ h e a d e r _ s t r i n g ( p a r a m s ,   S W I T C H _ S T A C K _ B O T T O M ,   " s i p _ a u t h _ u s e r n a m e " ,   u s e r n a m e ) ; 
 	 s w i t c h _ e v e n t _ a d d _ h e a d e r _ s t r i n g ( p a r a m s ,   S W I T C H _ S T A C K _ B O T T O M ,   " s i p _ a u t h _ r e a l m " ,   r e a l m ) ; 
 	 s w i t c h _ e v e n t _ a d d _ h e a d e r _ s t r i n g ( p a r a m s ,   S W I T C H _ S T A C K _ B O T T O M ,   " s i p _ a u t h _ n o n c e " ,   n o n c e ) ; 
 	 s w i t c h _ e v e n t _ a d d _ h e a d e r _ s t r i n g ( p a r a m s ,   S W I T C H _ S T A C K _ B O T T O M ,   " s i p _ a u t h _ u r i " ,   u r i ) ; 
 
 	 i f   ( s i p - > s i p _ c o n t a c t )   { 
 	 	 s w i t c h _ e v e n t _ a d d _ h e a d e r _ s t r i n g ( p a r a m s ,   S W I T C H _ S T A C K _ B O T T O M ,   " s i p _ c o n t a c t _ u s e r " ,   s i p - > s i p _ c o n t a c t - > m _ u r l - > u r l _ u s e r ) ; 
 	 	 s w i t c h _ e v e n t _ a d d _ h e a d e r _ s t r i n g ( p a r a m s ,   S W I T C H _ S T A C K _ B O T T O M ,   " s i p _ c o n t a c t _ h o s t " ,   s i p - > s i p _ c o n t a c t - > m _ u r l - > u r l _ h o s t ) ; 
 	 } 
 
 	 i f   ( s i p - > s i p _ t o )   { 
 	 	 s w i t c h _ e v e n t _ a d d _ h e a d e r _ s t r i n g ( p a r a m s ,   S W I T C H _ S T A C K _ B O T T O M ,   " s i p _ t o _ u s e r " ,   s i p - > s i p _ t o - > a _ u r l - > u r l _ u s e r ) ; 
 	 	 s w i t c h _ e v e n t _ a d d _ h e a d e r _ s t r i n g ( p a r a m s ,   S W I T C H _ S T A C K _ B O T T O M ,   " s i p _ t o _ h o s t " ,   s i p - > s i p _ t o - > a _ u r l - > u r l _ h o s t ) ; 
 	 	 i f   ( s i p - > s i p _ t o - > a _ u r l - > u r l _ p o r t )   { 
 	 	 	 s w i t c h _ e v e n t _ a d d _ h e a d e r _ s t r i n g ( p a r a m s ,   S W I T C H _ S T A C K _ B O T T O M ,   " s i p _ t o _ p o r t " ,   s i p - > s i p _ t o - > a _ u r l - > u r l _ p o r t ) ; 
 	 	 } 
 	 } 
 
 	 i f   ( s i p - > s i p _ f r o m )   { 
 	 	 s w i t c h _ e v e n t _ a d d _ h e a d e r _ s t r i n g ( p a r a m s ,   S W I T C H _ S T A C K _ B O T T O M ,   " s i p _ f r o m _ u s e r " ,   s i p - > s i p _ f r o m - > a _ u r l - > u r l _ u s e r ) ; 
 	 	 s w i t c h _ e v e n t _ a d d _ h e a d e r _ s t r i n g ( p a r a m s ,   S W I T C H _ S T A C K _ B O T T O M ,   " s i p _ f r o m _ h o s t " ,   s i p - > s i p _ f r o m - > a _ u r l - > u r l _ h o s t ) ; 
 	 	 i f   ( s i p - > s i p _ f r o m - > a _ u r l - > u r l _ p o r t )   { 
 	 	 	 s w i t c h _ e v e n t _ a d d _ h e a d e r _ s t r i n g ( p a r a m s ,   S W I T C H _ S T A C K _ B O T T O M ,   " s i p _ f r o m _ p o r t " ,   s i p - > s i p _ f r o m - > a _ u r l - > u r l _ p o r t ) ; 
 	 	 } 
 	 } 
 
 	 i f   ( s i p - > s i p _ r e q u e s t )   { 
 	 	 s w i t c h _ e v e n t _ a d d _ h e a d e r _ s t r i n g ( p a r a m s ,   S W I T C H _ S T A C K _ B O T T O M ,   " s i p _ r e q u e s t _ u s e r " ,   s i p - > s i p _ r e q u e s t - > r q _ u r l - > u r l _ u s e r ) ; 
 	 	 s w i t c h _ e v e n t _ a d d _ h e a d e r _ s t r i n g ( p a r a m s ,   S W I T C H _ S T A C K _ B O T T O M ,   " s i p _ r e q u e s t _ h o s t " ,   s i p - > s i p _ r e q u e s t - > r q _ u r l - > u r l _ h o s t ) ; 
 	 	 i f   ( s i p - > s i p _ r e q u e s t - > r q _ u r l - > u r l _ p o r t )   { 
 	 	 	 s w i t c h _ e v e n t _ a d d _ h e a d e r _ s t r i n g ( p a r a m s ,   S W I T C H _ S T A C K _ B O T T O M ,   " s i p _ r e q u e s t _ p o r t " ,   s i p - > s i p _ r e q u e s t - > r q _ u r l - > u r l _ p o r t ) ; 
 	 	 } 
 	 } 
 
 	 f o r   ( u n   =   s i p - > s i p _ u n k n o w n ;   u n ;   u n   =   u n - > u n _ n e x t )   { 
 	 	 i f   ( ! s t r n c a s e c m p ( u n - > u n _ n a m e ,   " X - " ,   2 ) )   { 
 	 	 	 i f   ( ! z s t r ( u n - > u n _ v a l u e ) )   { 
 	 	 	 	 s w i t c h _ l o g _ p r i n t f ( S W I T C H _ C H A N N E L _ L O G ,   S W I T C H _ L O G _ D E B U G 1 0 ,   " a d d i n g   % s   = >   % s   t o   x m l _ c u r l   r e q u e s t \ n " ,   u n - > u n _ n a m e ,   u n - > u n _ v a l u e ) ; 
 	 	 	 	 s w i t c h _ e v e n t _ a d d _ h e a d e r _ s t r i n g ( p a r a m s ,   S W I T C H _ S T A C K _ B O T T O M ,   u n - > u n _ n a m e ,   u n - > u n _ v a l u e ) ; 
 	 	 	 } 
 	 	 }   e l s e   { 
 	 	 	 s w i t c h _ l o g _ p r i n t f ( S W I T C H _ C H A N N E L _ L O G ,   S W I T C H _ L O G _ D E B U G 1 0 ,   " s k i p p i n g   % s   = >   % s   f r o m   x m l _ c u r l   r e q u e s t \ n " ,   u n - > u n _ n a m e ,   u n - > u n _ v a l u e ) ; 
 	 	 } 
 	 } 
 
 	 i f   ( q o p )   { 
 	 	 s w i t c h _ e v e n t _ a d d _ h e a d e r _ s t r i n g ( p a r a m s ,   S W I T C H _ S T A C K _ B O T T O M ,   " s i p _ a u t h _ q o p " ,   q o p ) ; 
 	 } 
 	 i f   ( c n o n c e )   { 
 	 	 s w i t c h _ e v e n t _ a d d _ h e a d e r _ s t r i n g ( p a r a m s ,   S W I T C H _ S T A C K _ B O T T O M ,   " s i p _ a u t h _ c n o n c e " ,   c n o n c e ) ; 
 	 } 
 	 i f   ( n c )   { 
 	 	 s w i t c h _ e v e n t _ a d d _ h e a d e r _ s t r i n g ( p a r a m s ,   S W I T C H _ S T A C K _ B O T T O M ,   " s i p _ a u t h _ n c " ,   n c ) ; 
 	 } 
 	 s w i t c h _ e v e n t _ a d d _ h e a d e r _ s t r i n g ( p a r a m s ,   S W I T C H _ S T A C K _ B O T T O M ,   " s i p _ a u t h _ r e s p o n s e " ,   r e s p o n s e ) ; 
 
 	 s w i t c h _ e v e n t _ a d d _ h e a d e r _ s t r i n g ( p a r a m s ,   S W I T C H _ S T A C K _ B O T T O M ,   " s i p _ a u t h _ m e t h o d " ,   ( s i p   & &   s i p - > s i p _ r e q u e s t )   ?   s i p - > s i p _ r e q u e s t - > r q _ m e t h o d _ n a m e   :   N U L L ) ; 
 
 	 i f   ( a u t h _ p a r a m s )   { 
 	 	 s w i t c h _ e v e n t _ d u p ( a u t h _ p a r a m s ,   p a r a m s ) ; 
 	 } 
 
 
 	 i f   ( ! z s t r ( p r o f i l e - > r e g _ d o m a i n ) )   { 
 	 	 d o m a i n _ n a m e   =   p r o f i l e - > r e g _ d o m a i n ; 
 	 }   e l s e   { 
 	 	 d o m a i n _ n a m e   =   r e a l m ; 
 	 } 
 
 	 i f   ( s w i t c h _ x m l _ l o c a t e _ u s e r _ m e r g e d ( " i d " ,   z s t r ( u s e r n a m e )   ?   " n o b o d y "   :   u s e r n a m e ,   d o m a i n _ n a m e ,   i p ,   & u s e r ,   p a r a m s )   ! =   S W I T C H _ S T A T U S _ S U C C E S S )   { 
 	 	 s w i t c h _ l o g _ p r i n t f ( S W I T C H _ C H A N N E L _ L O G ,   S W I T C H _ L O G _ W A R N I N G ,   " C a n ' t   f i n d   u s e r   [ % s @ % s ] \ n " 
 	 	 	 	 	 	     " Y o u   m u s t   d e f i n e   a   d o m a i n   c a l l e d   ' % s '   i n   y o u r   d i r e c t o r y   a n d   a d d   a   u s e r   w i t h   t h e   i d = \ " % s \ "   a t t r i b u t e \ n " 
 	 	 	 	 	 	     " a n d   y o u   m u s t   c o n f i g u r e   y o u r   d e v i c e   t o   u s e   t h e   p r o p e r   d o m a i n   i n   i t ' s   a u t h e n t i c a t i o n   c r e d e n t i a l s . \ n " ,   u s e r n a m e ,   d o m a i n _ n a m e , 
 	 	 	 	 	 	     d o m a i n _ n a m e ,   u s e r n a m e ) ; 
 
 	 	 r e t   =   A U T H _ F O R B I D D E N ; 
 	 	 g o t o   e n d ; 
 	 }   e l s e   { 
 	 	 c o n s t   c h a r   * t y p e   =   s w i t c h _ x m l _ a t t r ( u s e r ,   " t y p e " ) ; 
 	 	 i f   ( t y p e   & &   ! s t r c a s e c m p ( t y p e ,   " p o i n t e r " ) )   { 
 	 	 	 s w i t c h _ l o g _ p r i n t f ( S W I T C H _ C H A N N E L _ L O G ,   S W I T C H _ L O G _ W A R N I N G ,   " C a n t   r e g i s t e r   a   p o i n t e r . \ n " ) ; 
 	 	 	 r e t   =   A U T H _ F O R B I D D E N ; 
 	 	 	 g o t o   e n d ; 
 	 	 } 
 	 } 
 
 	 i f   ( ! ( n u m b e r _ a l i a s   =   ( c h a r   * )   s w i t c h _ x m l _ a t t r ( u s e r ,   " n u m b e r - a l i a s " ) ) )   { 
 	 	 n u m b e r _ a l i a s   =   z s t r ( u s e r n a m e )   ?   " n o b o d y "   :   u s e r n a m e ; 
 	 } 
 
 	 i f   ( ! ( u p a r a m s   =   s w i t c h _ x m l _ c h i l d ( u s e r ,   " p a r a m s " ) ) )   { 
 	 	 r e t   =   A U T H _ O K ; 
 	 	 g o t o   s k i p _ a u t h ; 
 	 }   e l s e   { 
 	 	 f o r   ( p a r a m   =   s w i t c h _ x m l _ c h i l d ( u p a r a m s ,   " p a r a m " ) ;   p a r a m ;   p a r a m   =   p a r a m - > n e x t )   { 
 	 	 	 c o n s t   c h a r   * v a r   =   s w i t c h _ x m l _ a t t r _ s o f t ( p a r a m ,   " n a m e " ) ; 
 	 	 	 c o n s t   c h a r   * v a l   =   s w i t c h _ x m l _ a t t r _ s o f t ( p a r a m ,   " v a l u e " ) ; 
 
 	 	 	 i f   ( ! s t r c a s e c m p ( v a r ,   " s i p - f o r b i d - r e g i s t e r " )   & &   s w i t c h _ t r u e ( v a l ) )   { 
 	 	 	 	 r e t   =   A U T H _ F O R B I D D E N ; 
 	 	 	 	 g o t o   e n d ; 
 	 	 	 } 
 
 	 	 	 i f   ( ! s t r c a s e c m p ( v a r ,   " p a s s w o r d " ) )   { 
 	 	 	 	 p a s s w d   =   v a l ; 
 	 	 	 } 
 
 	 	 	 i f   ( ! s t r c a s e c m p ( v a r ,   " a u t h - a c l " ) )   { 
 	 	 	 	 a u t h _ a c l   =   v a l ; 
 	 	 	 } 
 
 	 	 	 i f   ( ! s t r c a s e c m p ( v a r ,   " a 1 - h a s h " ) )   { 
 	 	 	 	 a 1 _ h a s h   =   v a l ; 
 	 	 	 } 
 	 	 	 i f   ( ! s t r c a s e c m p ( v a r ,   " m w i - a c c o u n t " ) )   { 
 	 	 	 	 m w i _ a c c o u n t   =   v a l ; 
 	 	 	 } 
 	 	 	 i f   ( ! s t r c a s e c m p ( v a r ,   " a l l o w - e m p t y - p a s s w o r d " ) )   { 
 	 	 	 	 a l l o w _ e m p t y _ p a s s w o r d   =   s w i t c h _ t r u e ( v a l ) ; 
 	 	 	 } 
 	 	 	 i f   ( ! s t r c a s e c m p ( v a r ,   " u s e r - a g e n t - f i l t e r " ) )   { 
 	 	 	 	 u s e r _ a g e n t _ f i l t e r   =   v a l ; 
 	 	 	 } 
 	 	 	 i f   ( ! s t r c a s e c m p ( v a r ,   " m a x - r e g i s t r a t i o n s - p e r - e x t e n s i o n " ) )   { 
 	 	 	 	 m a x _ r e g i s t r a t i o n s _ p e r e x t   =   a t o i ( v a l ) ; 
 	 	 	 } 
 	 	 } 
 	 } 
 
 	 i f   ( a u t h _ a c l )   { 
 	 	 i f   ( ! s w i t c h _ c h e c k _ n e t w o r k _ l i s t _ i p ( i p ,   a u t h _ a c l ) )   { 
 	 	 	 i n t   n e t w o r k _ i p _ i s _ p r o x y   =   0 ; 
 	 	 	 u i n t 3 2 _ t   x   =   0 ; 
 	 	 	 c h a r   * l a s t _ a c l   =   N U L L ; 
 	 	 	 i f   ( p r o f i l e - > p r o x y _ a c l _ c o u n t   = =   0 )   { 
 	 	 	 	 s w i t c h _ l o g _ p r i n t f ( S W I T C H _ C H A N N E L _ L O G ,   S W I T C H _ L O G _ W A R N I N G ,   " I P   % s   R e j e c t e d   b y   u s e r   a c l   [ % s ]   a n d   n o   p r o x y   a c l   p r e s e n t \ n " ,   i p ,   a u t h _ a c l ) ; 
 	 	 	 	 r e t   =   A U T H _ F O R B I D D E N ; 
 	 	 	 	 g o t o   e n d ; 
 	 	 	 }   e l s e   { 
 	 	 	 	 s w i t c h _ l o g _ p r i n t f ( S W I T C H _ C H A N N E L _ L O G ,   S W I T C H _ L O G _ D E B U G ,   " I P   % s   R e j e c t e d   b y   u s e r   a c l   [ % s ]   c h e c k i n g   p r o x y   A C L s   n o w \ n " ,   i p ,   a u t h _ a c l ) ; 
 	 	 	 } 
 	 	 	 / *   C h e c k   i f   n e t w o r k _ i p   i s   a   p r o x y   a l l o w e d   t o   s e n d   u s   c a l l s   * / 
 	 	 	 s w i t c h _ l o g _ p r i n t f ( S W I T C H _ C H A N N E L _ L O G ,   S W I T C H _ L O G _ D E B U G ,   " % d   a c l s   t o   c h e c k   f o r   p r o x y \ n " ,   p r o f i l e - > p r o x y _ a c l _ c o u n t ) ; 
 
 	 	 	 f o r   ( x   =   0 ;   x   <   p r o f i l e - > p r o x y _ a c l _ c o u n t ;   x + + )   { 
 	 	 	 	 l a s t _ a c l   =   p r o f i l e - > p r o x y _ a c l [ x ] ; 
 	 	 	 	 s w i t c h _ l o g _ p r i n t f ( S W I T C H _ C H A N N E L _ L O G ,   S W I T C H _ L O G _ D E B U G ,   " c h e c k i n g   % s   a g a i n s t   a c l   % s \ n " ,   i p ,   l a s t _ a c l ) ; 
 	 	 	 	 i f   ( s w i t c h _ c h e c k _ n e t w o r k _ l i s t _ i p ( i p ,   l a s t _ a c l ) )   { 
 	 	 	 	 	 s w i t c h _ l o g _ p r i n t f ( S W I T C H _ C H A N N E L _ L O G ,   S W I T C H _ L O G _ D E B U G ,   " % s   i s   a   p r o x y   a c c o r d i n g   t o   t h e   % s   a c l \ n " ,   i p ,   l a s t _ a c l ) ; 
 	 	 	 	 	 n e t w o r k _ i p _ i s _ p r o x y   =   1 ; 
 	 	 	 	 	 b r e a k ; 
 	 	 	 	 } 
 	 	 	 } 
 	 	 	 / * 
 	 	 	   *   i f   n e t w o r k _ i p   i s   a   p r o x y   a l l o w e d   t o   s e n d   t r a f f i c ,   c h e c k   f o r   a u t h 
 	 	 	   *   i p   h e a d e r   a n d   s e e   i f   i t   m a t c h e s   a g a i n s t   t h e   a u t h   a c l 
 	 	 	   * / 
 	 	 	 s w i t c h _ l o g _ p r i n t f ( S W I T C H _ C H A N N E L _ L O G ,   S W I T C H _ L O G _ D E B U G ,   " n e t w o r k   i p   i s   a   p r o x y   [ % d ] \ n " ,   n e t w o r k _ i p _ i s _ p r o x y ) ; 
 	 	 	 i f   ( n e t w o r k _ i p _ i s _ p r o x y )   { 
 	 	 	 	 i n t   x _ a u t h _ i p   =   0 ; 
 	 	 	 	 f o r   ( u n   =   s i p - > s i p _ u n k n o w n ;   u n ;   u n   =   u n - > u n _ n e x t )   { 
 	 	 	 	 	 i f   ( ! s t r c a s e c m p ( u n - > u n _ n a m e ,   " X - A U T H - I P " ) )   { 
 	 	 	 	 	 	 s w i t c h _ l o g _ p r i n t f ( S W I T C H _ C H A N N E L _ L O G ,   S W I T C H _ L O G _ D E B U G ,   " f o u n d   a u t h   i p   [ % s ]   h e a d e r   o f   [ % s ] \ n " ,   u n - > u n _ n a m e ,   u n - > u n _ v a l u e ) ; 
 	 	 	 	 	 	 i f   ( ! z s t r ( u n - > u n _ v a l u e ) )   { 
 	 	 	 	 	 	 	 i f   ( ! s w i t c h _ c h e c k _ n e t w o r k _ l i s t _ i p ( u n - > u n _ v a l u e ,   a u t h _ a c l ) )   { 
 	 	 	 	 	 	 	 	 s w i t c h _ l o g _ p r i n t f ( S W I T C H _ C H A N N E L _ L O G ,   S W I T C H _ L O G _ W A R N I N G ,   " I P   % s   R e j e c t e d   b y   u s e r   a c l   % s \ n " ,   u n - > u n _ v a l u e ,   a u t h _ a c l ) ; 
 	 	 	 	 	 	 	 	 r e t   =   A U T H _ F O R B I D D E N ; 
 	 	 	 	 	 	 	 	 g o t o   e n d ; 
 	 	 	 	 	 	 	 }   e l s e   { 
 	 	 	 	 	 	 	 	 s w i t c h _ l o g _ p r i n t f ( S W I T C H _ C H A N N E L _ L O G ,   S W I T C H _ L O G _ D E B U G , 
 	 	 	 	 	 	 	 	 	 	 	 	     " I P   % s   a l l o w e d   b y   a c l   % s ,   c h e c k i n g   c r e d e n t i a l s \ n " ,   u n - > u n _ v a l u e ,   a u t h _ a c l ) ; 
 	 	 	 	 	 	 	 	 x _ a u t h _ i p   =   1 ; 
 	 	 	 	 	 	 	 	 b r e a k ; 
 	 	 	 	 	 	 	 } 
 	 	 	 	 	 	 } 
 	 	 	 	 	 } 
 	 	 	 	 } 
 	 	 	 	 i f   ( ! x _ a u t h _ i p )   { 
 	 	 	 	 	 r e t   =   A U T H _ F O R B I D D E N ; 
 	 	 	 	 	 g o t o   e n d ; 
 	 	 	 	 } 
 	 	 	 } 
 	 	 }   e l s e   { 
 	 	 	 s w i t c h _ l o g _ p r i n t f ( S W I T C H _ C H A N N E L _ L O G ,   S W I T C H _ L O G _ D E B U G ,   " I P   [ % s ]   p a s s e d   A C L   c h e c k   [ % s ] \ n " ,   i p ,   a u t h _ a c l ) ; 
 	 	 } 
 	 } 
 
 	 i f   ( ! a l l o w _ e m p t y _ p a s s w o r d   & &   z s t r ( p a s s w d )   & &   z s t r ( a 1 _ h a s h ) )   { 
 	 	 s w i t c h _ l o g _ p r i n t f ( S W I T C H _ C H A N N E L _ L O G ,   S W I T C H _ L O G _ W A R N I N G ,   " E m p t y   p a s s w o r d   d e n i e d   f o r   u s e r   % s @ % s \ n " ,   u s e r n a m e ,   d o m a i n _ n a m e ) ; 
 	 	 r e t   =   A U T H _ F O R B I D D E N ; 
 	 	 g o t o   e n d ; 
 	 } 
 	 
 	 i f   ( z s t r ( p a s s w d )   & &   z s t r ( a 1 _ h a s h ) )   { 
 	 	 r e t   =   A U T H _ O K ; 
 	 	 g o t o   s k i p _ a u t h ; 
 	 } 
 
 	 i f   ( ! a 1 _ h a s h )   { 
 	 	 i n p u t   =   s w i t c h _ m p r i n t f ( " % s : % s : % s " ,   u s e r n a m e ,   r e a l m ,   p a s s w d ) ; 
 	 	 s u _ m d 5 _ i n i t ( & c t x ) ; 
 	 	 s u _ m d 5 _ s t r u p d a t e ( & c t x ,   i n p u t ) ; 
 	 	 s u _ m d 5 _ h e x d i g e s t ( & c t x ,   h e x d i g e s t ) ; 
 	 	 s u _ m d 5 _ d e i n i t ( & c t x ) ; 
 	 	 s w i t c h _ s a f e _ f r e e ( i n p u t ) ; 
 	 	 a 1 _ h a s h   =   h e x d i g e s t ; 
 
 	 } 
 
 	 i f   ( u s e r _ a g e n t _ f i l t e r )   { 
 	 	 i f   ( s w i t c h _ r e g e x _ m a t c h ( u s e r _ a g e n t ,   u s e r _ a g e n t _ f i l t e r )   = =   S W I T C H _ S T A T U S _ S U C C E S S )   { 
 	 	 	 i f   ( s o f i a _ t e s t _ p f l a g ( p r o f i l e ,   P F L A G _ L O G _ A U T H _ F A I L ) )   { 
 	 	 	 	 s w i t c h _ l o g _ p r i n t f ( S W I T C H _ C H A N N E L _ L O G ,   S W I T C H _ L O G _ D E B U G , 
 	 	 	 	 	 	 	 	     " S I P   a u t h   O K   ( R E G I S T E R )   d u e   t o   u s e r - a g e n t - f i l t e r .     F i l t e r   \ " % s \ "   U s e r - A g e n t   \ " % s \ " \ n " ,   u s e r _ a g e n t _ f i l t e r ,   u s e r _ a g e n t ) ; 
 	 	 	 } 
 	 	 }   e l s e   { 
 	 	 	 r e t   =   A U T H _ F O R B I D D E N ; 
 	 	 	 i f   ( s o f i a _ t e s t _ p f l a g ( p r o f i l e ,   P F L A G _ L O G _ A U T H _ F A I L ) )   { 
 	 	 	 	 s w i t c h _ l o g _ p r i n t f ( S W I T C H _ C H A N N E L _ L O G ,   S W I T C H _ L O G _ W A R N I N G , 
 	 	 	 	 	 	 	 	     " S I P   a u t h   f a i l u r e   ( R E G I S T E R )   d u e   t o   u s e r - a g e n t - f i l t e r .     F i l t e r   \ " % s \ "   U s e r - A g e n t   \ " % s \ " \ n " ,   u s e r _ a g e n t _ f i l t e r , 
 	 	 	 	 	 	 	 	     u s e r _ a g e n t ) ; 
 	 	 	 } 
 	 	 	 g o t o   e n d ; 
 	 	 } 
 	 } 
 
 	 i f   ( m a x _ r e g i s t r a t i o n s _ p e r e x t   >   0   & &   ( s i p   & &   s i p - > s i p _ c o n t a c t   & &   ( s i p - > s i p _ c o n t a c t - > m _ e x p i r e s   = =   N U L L   | |   a t o l ( s i p - > s i p _ c o n t a c t - > m _ e x p i r e s )   >   0 ) ) )   { 
 	 	 / *   i f   e x p i r e s   i s   n u l l   s t i l l   p r o c e s s   * / 
 	 	 / *   e x p i r e s   = =   0   m e a n s   t h e   p h o n e   i s   g o i n g   t o   u n r e g i s e r ,   s o   d o n ' t   c o u n t   a g a i n s t   m a x   * / 
 	 	 u i n t 3 2 _ t   c o u n t   =   0 ; 
 
 	 	 c a l l _ i d   =   s i p - > s i p _ c a l l _ i d - > i _ i d ; 
 	 	 s w i t c h _ a s s e r t ( c a l l _ i d ) ; 
 
 	 	 s q l   =   s w i t c h _ m p r i n t f ( " s e l e c t   c o u n t ( s i p _ u s e r )   f r o m   s i p _ r e g i s t r a t i o n s   w h e r e   s i p _ u s e r = ' % q '   A N D   c a l l _ i d   < >   ' % q ' " ,   u s e r n a m e ,   c a l l _ i d ) ; 
 	 	 s w i t c h _ a s s e r t ( s q l   ! =   N U L L ) ; 
 	 	 s o f i a _ g l u e _ e x e c u t e _ s q l _ c a l l b a c k ( p r o f i l e ,   N U L L ,   s q l ,   s o f i a _ r e g _ r e g c o u n t _ c a l l b a c k ,   & c o u n t ) ; 
 	 	 f r e e ( s q l ) ; 
 
 	 	 i f   ( c o u n t   +   1   >   m a x _ r e g i s t r a t i o n s _ p e r e x t )   { 
 	 	 	 r e t   =   A U T H _ F O R B I D D E N ; 
 	 	 	 i f   ( s o f i a _ t e s t _ p f l a g ( p r o f i l e ,   P F L A G _ L O G _ A U T H _ F A I L ) )   { 
 	 	 	 	 s w i t c h _ l o g _ p r i n t f ( S W I T C H _ C H A N N E L _ L O G ,   S W I T C H _ L O G _ W A R N I N G , 
 	 	 	 	 	 	 	 	     " S I P   a u t h   f a i l u r e   ( R E G I S T E R )   d u e   t o   r e a c h i n g   m a x   a l l o w e d   r e g i s t r a t i o n s .     C o u n t :   % d \ n " ,   c o u n t ) ; 
 	 	 	 } 
 	 	 	 g o t o   e n d ; 
 	 	 } 
 	 } 
 
     f o r _ t h e _ s a k e _ o f _ i n t e r o p : 
 
 	 i f   ( ( i n p u t   =   s w i t c h _ m p r i n t f ( " % s : % q " ,   r e g s t r ,   u r i ) ) )   { 
 	 	 s u _ m d 5 _ i n i t ( & c t x ) ; 
 	 	 s u _ m d 5 _ s t r u p d a t e ( & c t x ,   i n p u t ) ; 
 	 	 s u _ m d 5 _ h e x d i g e s t ( & c t x ,   u r i d i g e s t ) ; 
 	 	 s u _ m d 5 _ d e i n i t ( & c t x ) ; 
 	 } 
 
 	 i f   ( n c   & &   c n o n c e   & &   q o p )   { 
 	 	 i n p u t 2   =   s w i t c h _ m p r i n t f ( " % s : % s : % s : % s : % s : % s " ,   a 1 _ h a s h ,   n o n c e ,   n c ,   c n o n c e ,   q o p ,   u r i d i g e s t ) ; 
 	 }   e l s e   { 
 	 	 i n p u t 2   =   s w i t c h _ m p r i n t f ( " % s : % s : % s " ,   a 1 _ h a s h ,   n o n c e ,   u r i d i g e s t ) ; 
 	 } 
 
 	 i f   ( i n p u t 2 )   { 
 	 	 m e m s e t ( & c t x ,   0 ,   s i z e o f ( c t x ) ) ; 
 	 	 s u _ m d 5 _ i n i t ( & c t x ) ; 
 	 	 s u _ m d 5 _ s t r u p d a t e ( & c t x ,   i n p u t 2 ) ; 
 	 	 s u _ m d 5 _ h e x d i g e s t ( & c t x ,   b i g d i g e s t ) ; 
 	 	 s u _ m d 5 _ d e i n i t ( & c t x ) ; 
 	 } 
 
 	 i f   ( i n p u t 2   & &   ! s t r c a s e c m p ( b i g d i g e s t ,   r e s p o n s e ) )   { 
 	 	 r e t   =   A U T H _ O K ; 
 	 }   e l s e   { 
 	 	 i f   ( ( p r o f i l e - > n d l b   &   P F L A G _ N D L B _ B R O K E N _ A U T H _ H A S H )   & &   s t r c a s e c m p ( r e g s t r ,   " R E G I S T E R " )   & &   s t r c a s e c m p ( r e g s t r ,   " I N V I T E " ) )   { 
 	 	 	 / *   s o m e   c l i e n t s   s e n d   a n   A C K   w i t h   t h e   m e t h o d   ' I N V I T E '   i n   t h e   h a s h   w h i c h   w i l l   b r e a k   a u t h   s o   w e   w i l l 
 	 	 	       t r y   a g a i n   w i t h   I N V I T E   s o   w e   d o n ' t   g e t   p e o p l e   c o m p l a i n i n g   t o   u s   w h e n   s o m e o n e   e l s e ' s   c l i e n t   h a s   a   b u g . . . . . . 
 	 	 	   * / 
 	 	 	 s w i t c h _ s a f e _ f r e e ( i n p u t ) ; 
 	 	 	 s w i t c h _ s a f e _ f r e e ( i n p u t 2 ) ; 
 	 	 	 r e g s t r   =   " I N V I T E " ; 
 	 	 	 g o t o   f o r _ t h e _ s a k e _ o f _ i n t e r o p ; 
 	 	 } 
 
 	 	 r e t   =   A U T H _ F O R B I D D E N ; 
 	 } 
 
 	 s w i t c h _ s a f e _ f r e e ( i n p u t 2 ) ; 
 
     s k i p _ a u t h : 
 	 i f   ( f i r s t   & &   ( r e t   = =   A U T H _ O K   | |   r e t   = =   A U T H _ R E N E W E D ) )   { 
 	 	 i f   ( v _ e v e n t )   { 
 	 	 	 s w i t c h _ e v e n t _ c r e a t e _ p l a i n ( v _ e v e n t ,   S W I T C H _ E V E N T _ R E Q U E S T _ P A R A M S ) ; 
 	 	 } 
 
 
 	 	 i f   ( v _ e v e n t   & &   * v _ e v e n t )   { 
 	 	 	 s h o r t   i n t   x p a r a m s _ t y p e [ 6 ] ; 
 	 	 	 s w i t c h _ x m l _ t   x p a r a m s [ 6 ] ; 
 	 	 	 i n t   i   =   0 ; 
 
 	 	 	 s w i t c h _ e v e n t _ a d d _ h e a d e r _ s t r i n g ( * v _ e v e n t ,   S W I T C H _ S T A C K _ B O T T O M ,   " s i p _ n u m b e r _ a l i a s " ,   n u m b e r _ a l i a s ) ; 
 	 	 	 s w i t c h _ e v e n t _ a d d _ h e a d e r _ s t r i n g ( * v _ e v e n t ,   S W I T C H _ S T A C K _ B O T T O M ,   " s i p _ a u t h _ u s e r n a m e " ,   u s e r n a m e ) ; 
 	 	 	 s w i t c h _ e v e n t _ a d d _ h e a d e r _ s t r i n g ( * v _ e v e n t ,   S W I T C H _ S T A C K _ B O T T O M ,   " s i p _ a u t h _ r e a l m " ,   r e a l m ) ; 
 	 	 	 s w i t c h _ e v e n t _ a d d _ h e a d e r _ s t r i n g ( * v _ e v e n t ,   S W I T C H _ S T A C K _ B O T T O M ,   " n u m b e r _ a l i a s " ,   n u m b e r _ a l i a s ) ; 
 	 	 	 s w i t c h _ e v e n t _ a d d _ h e a d e r _ s t r i n g ( * v _ e v e n t ,   S W I T C H _ S T A C K _ B O T T O M ,   " u s e r _ n a m e " ,   u s e r n a m e ) ; 
 	 	 	 s w i t c h _ e v e n t _ a d d _ h e a d e r _ s t r i n g ( * v _ e v e n t ,   S W I T C H _ S T A C K _ B O T T O M ,   " d o m a i n _ n a m e " ,   d o m a i n _ n a m e ) ; 
 
 	 	 	 i f   ( m w i _ a c c o u n t )   { 
 	 	 	 	 s w i t c h _ e v e n t _ a d d _ h e a d e r _ s t r i n g ( * v _ e v e n t ,   S W I T C H _ S T A C K _ B O T T O M ,   " m w i - a c c o u n t " ,   m w i _ a c c o u n t ) ; 
 	 	 	 } 
 
 	 	 	 i f   ( ( u p a r a m s   =   s w i t c h _ x m l _ c h i l d ( u s e r ,   " p a r a m s " ) ) )   { 
 	 	 	 	 x p a r a m s _ t y p e [ i ]   =   0 ; 
 	 	 	 	 x p a r a m s [ i + + ]   =   u p a r a m s ; 
 	 	 	 } 
 
 	 	 	 i f   ( ( u p a r a m s   =   s w i t c h _ x m l _ c h i l d ( u s e r ,   " v a r i a b l e s " ) ) )   { 
 	 	 	 	 x p a r a m s _ t y p e [ i ]   =   1 ; 
 	 	 	 	 x p a r a m s [ i + + ]   =   u p a r a m s ; 
 	 	 	 } 
 
 	 	 	 i f   ( i   < =   6 )   { 
 	 	 	 	 i n t   j   =   0 ; 
 	 	 	 	 c o n s t   c h a r   * g w _ v a l   =   N U L L ; 
 
 	 	 	 	 f o r   ( j   =   0 ;   j   <   i ;   j + + )   { 
 	 	 	 	 	 f o r   ( p a r a m   =   s w i t c h _ x m l _ c h i l d ( x p a r a m s [ j ] ,   ( x p a r a m s _ t y p e [ j ]   ?   " v a r i a b l e "   :   " p a r a m " ) ) ;   p a r a m ;   p a r a m   =   p a r a m - > n e x t )   { 
 	 	 	 	 	 	 c o n s t   c h a r   * v a r   =   s w i t c h _ x m l _ a t t r _ s o f t ( p a r a m ,   " n a m e " ) ; 
 	 	 	 	 	 	 c o n s t   c h a r   * v a l   =   s w i t c h _ x m l _ a t t r _ s o f t ( p a r a m ,   " v a l u e " ) ; 
 
 	 	 	 	 	 	 i f   ( ! z s t r ( v a r )   & &   ! z s t r ( v a l )   & &   ( x p a r a m s _ t y p e [ j ]   = =   1   | |   ! s t r n c a s e c m p ( v a r ,   " s i p - " ,   4 )   | |   ! s t r c a s e c m p ( v a r ,   " r e g i s t e r - g a t e w a y " ) ) )   { 
 	 	 	 	 	 	 	 i f   ( p r o f i l e - > d e b u g )   { 
 	 	 	 	 	 	 	 	 s w i t c h _ l o g _ p r i n t f ( S W I T C H _ C H A N N E L _ L O G ,   S W I T C H _ L O G _ D E B U G ,   " e v e n t _ a d d _ h e a d e r   - >   ' % s '   =   ' % s ' \ n " ,   v a r ,   v a l ) ; 
 	 	 	 	 	 	 	 } 
 	 	 	 	 	 	 	 s w i t c h _ e v e n t _ a d d _ h e a d e r _ s t r i n g ( * v _ e v e n t ,   S W I T C H _ S T A C K _ B O T T O M ,   v a r ,   v a l ) ; 
 	 	 	 	 	 	 } 
 	 	 	 	 	 } 
 	 	 	 	 } 
 	 	 	 	 i f   ( ( g w _ v a l   =   s w i t c h _ e v e n t _ g e t _ h e a d e r ( * v _ e v e n t ,   " r e g i s t e r - g a t e w a y " ) ) )   { 
 	 	 	 	 	 s o f i a _ g a t e w a y _ t   * g a t e w a y _ p t r   =   N U L L ; 
 	 	 	 	 	 i f   ( ! s t r c a s e c m p ( g w _ v a l ,   " a l l " ) )   { 
 	 	 	 	 	 	 s w i t c h _ x m l _ t   g a t e w a y s _ t a g ,   g a t e w a y _ t a g ; 
 	 	 	 	 	 	 i f   ( ( g a t e w a y s _ t a g   =   s w i t c h _ x m l _ c h i l d ( u s e r ,   " g a t e w a y s " ) ) )   { 
 	 	 	 	 	 	 	 f o r   ( g a t e w a y _ t a g   =   s w i t c h _ x m l _ c h i l d ( g a t e w a y s _ t a g ,   " g a t e w a y " ) ;   g a t e w a y _ t a g ;   g a t e w a y _ t a g   =   g a t e w a y _ t a g - > n e x t )   { 
 	 	 	 	 	 	 	 	 c h a r   * n a m e   =   ( c h a r   * )   s w i t c h _ x m l _ a t t r _ s o f t ( g a t e w a y _ t a g ,   " n a m e " ) ; 
 	 	 	 	 	 	 	 	 i f   ( z s t r ( n a m e ) )   { 
 	 	 	 	 	 	 	 	 	 n a m e   =   " a n o n y m o u s " ; 
 	 	 	 	 	 	 	 	 } 
 
 	 	 	 	 	 	 	 	 i f   ( ( g a t e w a y _ p t r   =   s o f i a _ r e g _ f i n d _ g a t e w a y ( n a m e ) ) )   { 
 	 	 	 	 	 	 	 	 	 r e g _ s t a t e _ t   o s t a t e   =   g a t e w a y _ p t r - > s t a t e ; 
 	 	 	 	 	 	 	 	 	 g a t e w a y _ p t r - > r e t r y   =   0 ; 
 	 	 	 	 	 	 	 	 	 i f   ( e x p t i m e )   { 
 	 	 	 	 	 	 	 	 	 	 g a t e w a y _ p t r - > s t a t e   =   R E G _ S T A T E _ U N R E G E D ; 
 	 	 	 	 	 	 	 	 	 }   e l s e   { 
 	 	 	 	 	 	 	 	 	 	 g a t e w a y _ p t r - > s t a t e   =   R E G _ S T A T E _ U N R E G I S T E R ; 
 	 	 	 	 	 	 	 	 	 } 
 	 	 	 	 	 	 	 	 	 i f   ( o s t a t e   ! =   g a t e w a y _ p t r - > s t a t e )   { 
 	 	 	 	 	 	 	 	 	 	 s o f i a _ r e g _ f i r e _ c u s t o m _ g a t e w a y _ s t a t e _ e v e n t ( g a t e w a y _ p t r ,   0 ,   N U L L ) ; 
 	 	 	 	 	 	 	 	 	 } 
 	 	 	 	 	 	 	 	 	 s o f i a _ r e g _ r e l e a s e _ g a t e w a y ( g a t e w a y _ p t r ) ; 
 	 	 	 	 	 	 	 	 } 
 
 	 	 	 	 	 	 	 } 
 	 	 	 	 	 	 } 
 	 	 	 	 	 }   e l s e   { 
 	 	 	 	 	 	 i n t   x ,   a r g c ; 
 	 	 	 	 	 	 c h a r   * m y d a t a ,   * a r g v [ 5 0 ] ; 
 
 	 	 	 	 	 	 m y d a t a   =   s t r d u p ( g w _ v a l ) ; 
 	 	 	 	 	 	 s w i t c h _ a s s e r t ( m y d a t a   ! =   N U L L ) ; 
 
 	 	 	 	 	 	 a r g c   =   s w i t c h _ s e p a r a t e _ s t r i n g ( m y d a t a ,   ' , ' ,   a r g v ,   ( s i z e o f ( a r g v )   /   s i z e o f ( a r g v [ 0 ] ) ) ) ; 
 
 	 	 	 	 	 	 f o r   ( x   =   0 ;   x   <   a r g c ;   x + + )   { 
 	 	 	 	 	 	 	 i f   ( ( g a t e w a y _ p t r   =   s o f i a _ r e g _ f i n d _ g a t e w a y ( ( c h a r   * )   a r g v [ x ] ) ) )   { 
 	 	 	 	 	 	 	 	 r e g _ s t a t e _ t   o s t a t e   =   g a t e w a y _ p t r - > s t a t e ; 
 	 	 	 	 	 	 	 	 g a t e w a y _ p t r - > r e t r y   =   0 ; 
 	 	 	 	 	 	 	 	 i f   ( e x p t i m e )   { 
 	 	 	 	 	 	 	 	 	 g a t e w a y _ p t r - > s t a t e   =   R E G _ S T A T E _ U N R E G E D ; 
 	 	 	 	 	 	 	 	 }   e l s e   { 
 	 	 	 	 	 	 	 	 	 g a t e w a y _ p t r - > s t a t e   =   R E G _ S T A T E _ U N R E G I S T E R ; 
 	 	 	 	 	 	 	 	 } 
 	 	 	 	 	 	 	 	 i f   ( o s t a t e   ! =   g a t e w a y _ p t r - > s t a t e )   { 
 	 	 	 	 	 	 	 	 	 s o f i a _ r e g _ f i r e _ c u s t o m _ g a t e w a y _ s t a t e _ e v e n t ( g a t e w a y _ p t r ,   0 ,   N U L L ) ; 
 	 	 	 	 	 	 	 	 } 
 	 	 	 	 	 	 	 	 s o f i a _ r e g _ r e l e a s e _ g a t e w a y ( g a t e w a y _ p t r ) ; 
 	 	 	 	 	 	 	 }   e l s e   { 
 	 	 	 	 	 	 	 	 s w i t c h _ l o g _ p r i n t f ( S W I T C H _ C H A N N E L _ L O G ,   S W I T C H _ L O G _ W A R N I N G ,   " G a t e w a y   ' % s '   n o t   f o u n d . \ n " ,   a r g v [ x ] ) ; 
 	 	 	 	 	 	 	 } 
 	 	 	 	 	 	 } 
 
 	 	 	 	 	 	 f r e e ( m y d a t a ) ; 
 	 	 	 	 	 } 
 	 	 	 	 } 
 	 	 	 } 
 	 	 } 
 	 } 
     e n d : 
 
 
 	 i f   ( n c   & &   c n o n c e   & &   q o p )   { 
 	 	 n c l   =   s t r t o u l ( n c ,   0 ,   1 6 ) ; 
 
 # i f   d e f i n e d ( _ W I N 3 2 )   & &   ! d e f i n e d ( _ W I N 6 4 ) 
 # d e f i n e 	 L L _ F M T   " l l " 
 # e l s e 
 # d e f i n e 	 L L _ F M T   " l " 
 # e n d i f 
 	 	 s q l   =   s w i t c h _ m p r i n t f ( " u p d a t e   s i p _ a u t h e n t i c a t i o n   s e t   e x p i r e s = ' % "   L L _ F M T   " u ' , l a s t _ n c = % l u   w h e r e   n o n c e = ' % s ' " , 
 	 	 	 	 	 	 	   s w i t c h _ e p o c h _ t i m e _ n o w ( N U L L )   +   ( p r o f i l e - > n o n c e _ t t l   ?   p r o f i l e - > n o n c e _ t t l   :   e x p t i m e   +   1 0 ) ,   n c l ,   n o n c e ) ; 
 
 	 	 s w i t c h _ a s s e r t ( s q l   ! =   N U L L ) ; 
 	 	 s o f i a _ g l u e _ a c t u a l l y _ e x e c u t e _ s q l ( p r o f i l e ,   s q l ,   p r o f i l e - > i r e g _ m u t e x ) ; 
 	 	 s w i t c h _ s a f e _ f r e e ( s q l ) ; 
 
 	 	 i f   ( r e t   = =   A U T H _ O K ) 
 	 	 	 r e t   =   A U T H _ R E N E W E D ; 
 	 } 
 
 	 s w i t c h _ e v e n t _ d e s t r o y ( & p a r a m s ) ; 
 
 	 i f   ( u s e r )   { 
 	 	 s w i t c h _ x m l _ f r e e ( u s e r ) ; 
 	 } 
 
 	 s w i t c h _ s a f e _ f r e e ( i n p u t ) ; 
 	 s w i t c h _ s a f e _ f r e e ( u s e r n a m e ) ; 
 	 s w i t c h _ s a f e _ f r e e ( r e a l m ) ; 
 	 s w i t c h _ s a f e _ f r e e ( n o n c e ) ; 
 	 s w i t c h _ s a f e _ f r e e ( u r i ) ; 
 	 s w i t c h _ s a f e _ f r e e ( q o p ) ; 
 	 s w i t c h _ s a f e _ f r e e ( c n o n c e ) ; 
 	 s w i t c h _ s a f e _ f r e e ( n c ) ; 
 	 s w i t c h _ s a f e _ f r e e ( r e s p o n s e ) ; 
 
 	 i f   ( r e g _ c o u n t   & &   ! * r e g _ c o u n t )   { 
 	 	 i f   ( ( r e t   = =   A U T H _ O K   | |   r e t   = =   A U T H _ R E N E W E D ) )   { 
 	 	 	 i f   ( n c l )   { 
 	 	 	 	 * r e g _ c o u n t   =   n c l ; 
 	 	 	 }   e l s e   { 
 	 	 	 	 * r e g _ c o u n t   =   1 ; 
 	 	 	 } 
 	 	 }   e l s e   { 
 	 	 	 * r e g _ c o u n t   =   0 ; 
 	 	 } 
 	 } 
 
 	 r e t u r n   r e t ; 
 
 } 
 
 
 s o f i a _ g a t e w a y _ t   * s o f i a _ r e g _ f i n d _ g a t e w a y _ _ ( c o n s t   c h a r   * f i l e ,   c o n s t   c h a r   * f u n c ,   i n t   l i n e ,   c o n s t   c h a r   * k e y ) 
 { 
 	 s o f i a _ g a t e w a y _ t   * g a t e w a y   =   N U L L ; 
 
 	 s w i t c h _ m u t e x _ l o c k ( m o d _ s o f i a _ g l o b a l s . h a s h _ m u t e x ) ; 
 	 i f   ( ( g a t e w a y   =   ( s o f i a _ g a t e w a y _ t   * )   s w i t c h _ c o r e _ h a s h _ f i n d ( m o d _ s o f i a _ g l o b a l s . g a t e w a y _ h a s h ,   k e y ) ) )   { 
 	 	 i f   ( ! s o f i a _ t e s t _ p f l a g ( g a t e w a y - > p r o f i l e ,   P F L A G _ R U N N I N G )   | |   g a t e w a y - > d e l e t e d )   { 
 	 	 	 g a t e w a y   =   N U L L ; 
 	 	 	 g o t o   d o n e ; 
 	 	 } 
 	 	 i f   ( s o f i a _ r e g _ g a t e w a y _ r d l o c k _ _ ( f i l e ,   f u n c ,   l i n e ,   g a t e w a y )   ! =   S W I T C H _ S T A T U S _ S U C C E S S )   { 
 	 	 	 g a t e w a y   =   N U L L ; 
 	 	 } 
 	 } 
 
     d o n e : 
 	 s w i t c h _ m u t e x _ u n l o c k ( m o d _ s o f i a _ g l o b a l s . h a s h _ m u t e x ) ; 
 	 r e t u r n   g a t e w a y ; 
 } 
 
 
 s o f i a _ g a t e w a y _ t   * s o f i a _ r e g _ f i n d _ g a t e w a y _ b y _ r e a l m _ _ ( c o n s t   c h a r   * f i l e ,   c o n s t   c h a r   * f u n c ,   i n t   l i n e ,   c o n s t   c h a r   * k e y ) 
 { 
 	 s o f i a _ g a t e w a y _ t   * g a t e w a y   =   N U L L ; 
 	 s w i t c h _ h a s h _ i n d e x _ t   * h i ; 
 	 c o n s t   v o i d   * v a r ; 
 	 v o i d   * v a l ; 
 
 	 s w i t c h _ m u t e x _ l o c k ( m o d _ s o f i a _ g l o b a l s . h a s h _ m u t e x ) ; 
 	 f o r   ( h i   =   s w i t c h _ h a s h _ f i r s t ( N U L L ,   m o d _ s o f i a _ g l o b a l s . g a t e w a y _ h a s h ) ;   h i ;   h i   =   s w i t c h _ h a s h _ n e x t ( h i ) )   { 
 	 	 s w i t c h _ h a s h _ t h i s ( h i ,   & v a r ,   N U L L ,   & v a l ) ; 
 	 	 i f   ( k e y   & &   ( g a t e w a y   =   ( s o f i a _ g a t e w a y _ t   * )   v a l )   & &   ! g a t e w a y - > d e l e t e d   & &   g a t e w a y - > r e g i s t e r _ r e a l m   & &   ! s t r c a s e c m p ( g a t e w a y - > r e g i s t e r _ r e a l m ,   k e y ) )   { 
 	 	 	 b r e a k ; 
 	 	 }   e l s e   { 
 	 	 	 g a t e w a y   =   N U L L ; 
 	 	 } 
 	 } 
 
 	 i f   ( g a t e w a y )   { 
 	 	 i f   ( ! s o f i a _ t e s t _ p f l a g ( g a t e w a y - > p r o f i l e ,   P F L A G _ R U N N I N G )   | |   g a t e w a y - > d e l e t e d )   { 
 	 	 	 g a t e w a y   =   N U L L ; 
 	 	 	 g o t o   d o n e ; 
 	 	 } 
 	 	 i f   ( s w i t c h _ t h r e a d _ r w l o c k _ t r y r d l o c k ( g a t e w a y - > p r o f i l e - > r w l o c k )   ! =   S W I T C H _ S T A T U S _ S U C C E S S )   { 
 	 	 	 s w i t c h _ l o g _ p r i n t f ( S W I T C H _ C H A N N E L _ I D _ L O G ,   f i l e ,   f u n c ,   l i n e ,   N U L L ,   S W I T C H _ L O G _ E R R O R ,   " P r o f i l e   % s   i s   l o c k e d \ n " ,   g a t e w a y - > p r o f i l e - > n a m e ) ; 
 	 	 	 g a t e w a y   =   N U L L ; 
 	 	 } 
 	 } 
 	 i f   ( g a t e w a y )   { 
 # i f d e f   S O F I A _ D E B U G _ R W L O C K S 
 	 	 s w i t c h _ l o g _ p r i n t f ( S W I T C H _ C H A N N E L _ I D _ L O G ,   f i l e ,   f u n c ,   l i n e ,   S W I T C H _ L O G _ E R R O R ,   " X X X X X X X X X X X X X X   G W   L O C K   % s \ n " ,   g a t e w a y - > p r o f i l e - > n a m e ) ; 
 # e n d i f 
 	 } 
 
     d o n e : 
 	 s w i t c h _ m u t e x _ u n l o c k ( m o d _ s o f i a _ g l o b a l s . h a s h _ m u t e x ) ; 
 	 r e t u r n   g a t e w a y ; 
 } 
 
 s w i t c h _ s t a t u s _ t   s o f i a _ r e g _ g a t e w a y _ r d l o c k _ _ ( c o n s t   c h a r   * f i l e ,   c o n s t   c h a r   * f u n c ,   i n t   l i n e ,   s o f i a _ g a t e w a y _ t   * g a t e w a y ) 
 { 
 	 s w i t c h _ s t a t u s _ t   s t a t u s   =   s o f i a _ g l u e _ p r o f i l e _ r d l o c k _ _ ( f i l e ,   f u n c ,   l i n e ,   g a t e w a y - > p r o f i l e ) ; 
 
 # i f d e f   S O F I A _ D E B U G _ R W L O C K S 
 	 i f   ( s t a t u s   = =   S W I T C H _ S T A T U S _ S U C C E S S )   { 
 	 	 s w i t c h _ l o g _ p r i n t f ( S W I T C H _ C H A N N E L _ I D _ L O G ,   f i l e ,   f u n c ,   l i n e ,   S W I T C H _ L O G _ E R R O R ,   " X X X X X X X X X X X X X X   G W   L O C K   % s \ n " ,   g a t e w a y - > p r o f i l e - > n a m e ) ; 	 	 
 	 } 
 # e n d i f 
 
 	 r e t u r n   s t a t u s ; 
 } 
 
 
 v o i d   s o f i a _ r e g _ r e l e a s e _ g a t e w a y _ _ ( c o n s t   c h a r   * f i l e ,   c o n s t   c h a r   * f u n c ,   i n t   l i n e ,   s o f i a _ g a t e w a y _ t   * g a t e w a y ) 
 { 
 	 s w i t c h _ t h r e a d _ r w l o c k _ u n l o c k ( g a t e w a y - > p r o f i l e - > r w l o c k ) ; 
 # i f d e f   S O F I A _ D E B U G _ R W L O C K S 
 	 s w i t c h _ l o g _ p r i n t f ( S W I T C H _ C H A N N E L _ I D _ L O G ,   f i l e ,   f u n c ,   l i n e ,   S W I T C H _ L O G _ E R R O R ,   " X X X X X X X X X X X X X X   G W   U N L O C K   % s \ n " ,   g a t e w a y - > p r o f i l e - > n a m e ) ; 
 # e n d i f 
 } 
 
 s w i t c h _ s t a t u s _ t   s o f i a _ r e g _ a d d _ g a t e w a y ( s o f i a _ p r o f i l e _ t   * p r o f i l e ,   c o n s t   c h a r   * k e y ,   s o f i a _ g a t e w a y _ t   * g a t e w a y ) 
 { 
 	 s w i t c h _ s t a t u s _ t   s t a t u s   =   S W I T C H _ S T A T U S _ F A L S E ; 
 	 c h a r   * p k e y   =   s w i t c h _ m p r i n t f ( " % s : : % s " ,   p r o f i l e - > n a m e ,   k e y ) ; 
 	 s o f i a _ g a t e w a y _ t   * g p ; 
 
 	 s w i t c h _ m u t e x _ l o c k ( p r o f i l e - > g w _ m u t e x ) ; 
 
 	 g a t e w a y - > n e x t   =   p r o f i l e - > g a t e w a y s ; 
 	 p r o f i l e - > g a t e w a y s   =   g a t e w a y ; 
 	 
 	 s w i t c h _ m u t e x _ u n l o c k ( p r o f i l e - > g w _ m u t e x ) ; 
 
 	 s w i t c h _ m u t e x _ l o c k ( m o d _ s o f i a _ g l o b a l s . h a s h _ m u t e x ) ; 
 
 	 i f   ( ( g p   =   s w i t c h _ c o r e _ h a s h _ f i n d ( m o d _ s o f i a _ g l o b a l s . g a t e w a y _ h a s h ,   k e y ) ) )   { 
 	 	 i f   ( g p - > d e l e t e d )   { 
 	 	 	 s w i t c h _ l o g _ p r i n t f ( S W I T C H _ C H A N N E L _ L O G ,   S W I T C H _ L O G _ D E B U G ,   " R e m o v i n g   d e l e t e d   g a t e w a y   f r o m   h a s h . \ n " ) ; 
 	 	 	 s w i t c h _ c o r e _ h a s h _ d e l e t e ( m o d _ s o f i a _ g l o b a l s . g a t e w a y _ h a s h ,   g p - > n a m e ) ; 
 	 	 	 s w i t c h _ c o r e _ h a s h _ d e l e t e ( m o d _ s o f i a _ g l o b a l s . g a t e w a y _ h a s h ,   p k e y ) ; 
 	 	 	 s w i t c h _ c o r e _ h a s h _ d e l e t e ( m o d _ s o f i a _ g l o b a l s . g a t e w a y _ h a s h ,   k e y ) ; 
 	 	 } 
 	 } 
 
 	 i f   ( ! s w i t c h _ c o r e _ h a s h _ f i n d ( m o d _ s o f i a _ g l o b a l s . g a t e w a y _ h a s h ,   k e y )   & &   ! s w i t c h _ c o r e _ h a s h _ f i n d ( m o d _ s o f i a _ g l o b a l s . g a t e w a y _ h a s h ,   p k e y ) )   { 
 	 	 s t a t u s   =   s w i t c h _ c o r e _ h a s h _ i n s e r t ( m o d _ s o f i a _ g l o b a l s . g a t e w a y _ h a s h ,   k e y ,   g a t e w a y ) ; 
 	 	 s t a t u s   =   s w i t c h _ c o r e _ h a s h _ i n s e r t ( m o d _ s o f i a _ g l o b a l s . g a t e w a y _ h a s h ,   p k e y ,   g a t e w a y ) ; 
 	 }   e l s e   { 
 	 	 s t a t u s   =   S W I T C H _ S T A T U S _ F A L S E ; 
 	 } 
 	 s w i t c h _ m u t e x _ u n l o c k ( m o d _ s o f i a _ g l o b a l s . h a s h _ m u t e x ) ; 
 
 	 f r e e ( p k e y ) ; 
 
 	 i f   ( s t a t u s   = =   S W I T C H _ S T A T U S _ S U C C E S S )   { 
 	 	 s w i t c h _ e v e n t _ t   * s _ e v e n t ; 
 	 	 s w i t c h _ l o g _ p r i n t f ( S W I T C H _ C H A N N E L _ L O G ,   S W I T C H _ L O G _ N O T I C E ,   " A d d e d   g a t e w a y   ' % s '   t o   p r o f i l e   ' % s ' \ n " ,   g a t e w a y - > n a m e ,   g a t e w a y - > p r o f i l e - > n a m e ) ; 
 	 	 i f   ( s w i t c h _ e v e n t _ c r e a t e _ s u b c l a s s ( & s _ e v e n t ,   S W I T C H _ E V E N T _ C U S T O M ,   M Y _ E V E N T _ G A T E W A Y _ A D D )   = =   S W I T C H _ S T A T U S _ S U C C E S S )   { 
 	 	 	 s w i t c h _ e v e n t _ a d d _ h e a d e r _ s t r i n g ( s _ e v e n t ,   S W I T C H _ S T A C K _ B O T T O M ,   " G a t e w a y " ,   g a t e w a y - > n a m e ) ; 
 	 	 	 s w i t c h _ e v e n t _ a d d _ h e a d e r _ s t r i n g ( s _ e v e n t ,   S W I T C H _ S T A C K _ B O T T O M ,   " p r o f i l e - n a m e " ,   g a t e w a y - > p r o f i l e - > n a m e ) ; 
 	 	 	 s w i t c h _ e v e n t _ f i r e ( & s _ e v e n t ) ; 
 	 	 } 
 	 } 
 
 	 r e t u r n   s t a t u s ; 
 } 
 
 / *   F o r   E m a c s : 
   *   L o c a l   V a r i a b l e s : 
   *   m o d e : c 
   *   i n d e n t - t a b s - m o d e : t 
   *   t a b - w i d t h : 4 
   *   c - b a s i c - o f f s e t : 4 
   *   E n d : 
   *   F o r   V I M : 
   *   v i m : s e t   s o f t t a b s t o p = 4   s h i f t w i d t h = 4   t a b s t o p = 4 : 
   * / 
 