# i f n d e f   _ _ K _ S i m D E M _ c u _ _  
 # d e f i n e   _ _ K _ S i m D E M _ c u _ _  
  
 # i n c l u d e   " K _ C o m m o n . c u h "  
  
 # i n c l u d e   " c u t i l _ m a t h . h "  
 # i n c l u d e   " v e c t o r _ t y p e s . h "  
  
 u s i n g   n a m e s p a c e   S i m L i b ;  
 u s i n g   n a m e s p a c e   S i m L i b : : S i m : : D E M ;  
  
  
 # i n c l u d e   " K _ U n i f o r m G r i d _ U t i l s . i n l "  
 # i n c l u d e   " K _ U n i f o r m G r i d _ U p d a t e . i n l "  
  
 c l a s s   D E M S y s t e m  
 {  
 p u b l i c :  
  
 	 s t a t i c   _ _ d e v i c e _ _   v o i d   U p d a t e S o r t e d V a l u e s ( D E M D a t a   & d P a r t i c l e s S o r t e d ,   D E M D a t a   & d P a r t i c l e s ,   u i n t   & i n d e x ,   u i n t   & s o r t e d I n d e x )  
 	 {  
 	 	 d P a r t i c l e s S o r t e d . p o s i t i o n [ i n d e x ] =   F E T C H _ N O T E X ( d P a r t i c l e s , p o s i t i o n , s o r t e d I n d e x ) ;  
 	 	 d P a r t i c l e s S o r t e d . v e l o c i t y [ i n d e x ] =   F E T C H _ N O T E X ( d P a r t i c l e s , v e l o c i t y , s o r t e d I n d e x ) ;  
 	 	 d P a r t i c l e s S o r t e d . v e l e v a l [ i n d e x ] 	 =   F E T C H _ N O T E X ( d P a r t i c l e s , v e l e v a l , s o r t e d I n d e x ) ;  
 	 }  
 } ;  
  
  
  
 c l a s s   D E M C o l l i s i o n C a l c u l a t i o n  
 {  
 p u b l i c :  
  
 	 s t r u c t   D a t a  
 	 {  
 	 	 f l o a t 3   f o r c e ;  
 	 	 f l o a t 3   v e l e v a l _ i ;  
 	 	 f l o a t 3   v e l e v a l _ j ;  
  
 	 	 D E M D a t a   d P a r t i c l e s S o r t e d ;  
 	 } ;  
  
 	 c l a s s   C a l c  
 	 {  
 	 p u b l i c :  
  
 	 	 s t a t i c   _ _ d e v i c e _ _   v o i d   P r e C a l c ( D a t a   & d a t a ,   u i n t   c o n s t   & i n d e x _ i )  
 	 	 {  
 	 	 	 d a t a . v e l e v a l _ i 	 =   m a k e _ f l o a t 3 ( F E T C H ( d a t a . d P a r t i c l e s S o r t e d ,   v e l e v a l ,   i n d e x _ i ) ) ;  
 	 	 }  
  
 	 	 s t a t i c   _ _ d e v i c e _ _   v o i d   F o r P o s s i b l e N e i g h b o r ( D a t a   & d a t a ,   u i n t   c o n s t   & i n d e x _ i ,   u i n t   c o n s t   & i n d e x _ j ,   f l o a t 3   c o n s t   & p o s i t i o n _ i )  
 	 	 {  
 	 	 	 / /   c h e c k   n o t   c o l l i d i n g   w i t h   s e l f  
 	 	 	 i f   ( i n d e x _ j   ! =   i n d e x _ i )   {  
  
 	 	 	 	 / /   g e t   t h e   p a r t i c l e   p o s i t i o n   ( i n   t h e   c u r r e n t   c e l l )   t o   t e s t   a g a i n s t  
 	 	 	 	 f l o a t 3   p o s i t i o n _ j   =   m a k e _ f l o a t 3 ( F E T C H ( d a t a . d P a r t i c l e s S o r t e d ,   p o s i t i o n ,   i n d e x _ j ) ) ;  
  
 	 	 	 	 / /   g e t   t h e   r e l a t i v e   d i s t a n c e   b e t w e e n   t h e   t w o   p a r t i c l e s ,   t r a n s l a t e   t o   s i m u l a t i o n   s p a c e  
 	 	 	 	 f l o a t 3   r   =   ( p o s i t i o n _ j   -   p o s i t i o n _ i )   *   c D E M P a r a m s . s c a l e _ t o _ s i m u l a t i o n ;  
  
 	 	 	 	 f l o a t   r l e n _ s q   =   d o t ( r , r ) ;  
 	 	 	 	 / /   | r |  
 	 	 	 	 f l o a t   r l e n   =   s q r t f ( r l e n _ s q ) ;  
  
 	 	 	 	 / /   i s   t h i s   p a r t i c l e   w i t h i n   c u t o f f ?  
 	 	 	 	 i f   ( r l e n   <   c D E M P a r a m s . c o l l i d e _ d i s t )  
 	 	 	 	 {  
 	 	 	 	 	 F o r N e i g h b o r ( d a t a ,   i n d e x _ i ,   i n d e x _ j ,   r ,   r l e n ,   r l e n _ s q ) ;  
 	 	 	 	 }  
 	 	 	 }  
 	 	 }  
  
 	 	 s t a t i c   _ _ d e v i c e _ _   v o i d   F o r N e i g h b o r ( D a t a   & d a t a ,   u i n t   c o n s t   & i n d e x _ i ,   u i n t   c o n s t   & i n d e x _ j ,   f l o a t 3   c o n s t   & r ,   f l o a t   c o n s t &   r l e n ,   f l o a t   c o n s t   & r l e n _ s q )  
 	 	 {  
 	 	 	 f l o a t 3   v e l e v a l _ j   =   m a k e _ f l o a t 3 ( F E T C H ( d a t a . d P a r t i c l e s S o r t e d ,   v e l e v a l ,   i n d e x _ j ) ) ;  
  
 	 	 	 f l o a t 3   n o r m   =   r   /   r l e n ;  
  
 	 	 	 / /   r e l a t i v e   v e l o c i t y  
 	 	 	 f l o a t 3   r e l V e l   =   v e l e v a l _ j   -   d a t a . v e l e v a l _ i ;  
  
 	 	 	 / /   r e l a t i v e   t a n g e n t i a l   v e l o c i t y  
 	 	 	 f l o a t 3   t a n V e l   =   r e l V e l   -   ( d o t ( r e l V e l ,   n o r m )   *   n o r m ) ;  
  
 	 	 	 / /   s p r i n g   f o r c e  
 	 	 	 d a t a . f o r c e   + =   - c D E M P a r a m s . s p r i n g * ( c D E M P a r a m s . c o l l i d e _ d i s t   -   r l e n )   *   n o r m ;  
  
 	 	 	 / /   d a s h p o t   ( d a m p i n g )   f o r c e  
 	 	 	 d a t a . f o r c e   + =   c D E M P a r a m s . d a m p i n g * r e l V e l ;  
  
 	 	 	 / /   t a n g e n t i a l   s h e a r   f o r c e  
 	 	 	 d a t a . f o r c e   + =   c D E M P a r a m s . s h e a r * t a n V e l ;  
  
 	 	 	 / /   a t t r a c t i o n  
 	 	 	 d a t a . f o r c e   + =   c D E M P a r a m s . a t t r a c t i o n * r ;  
 	 	 }  
  
 	 	 s t a t i c   _ _ d e v i c e _ _   v o i d   P o s t C a l c ( D a t a   & d a t a ,   u i n t   i n d e x _ i )  
 	 	 {  
 	 	 	 d a t a . d P a r t i c l e s S o r t e d . f o r c e [ i n d e x _ i ]   =   m a k e _ v e c ( d a t a . f o r c e ) ;  
 	 	 }  
  
 	 } ;  
 } ;  
  
  
 _ _ g l o b a l _ _   v o i d   c o m p u t e C o l l i s i o n s ( u i n t 	 	 	 n u m P a r t i c l e s ,  
 	 	 	 	 	 	 	       N e i g h b o r L i s t 	 	 d N e i g h b o r L i s t ,  
 	 	 	 	 	 	 	       D E M D a t a 	 	 	 d P a r t i c l e s S o r t e d ,  
 	 	 	 	 	 	 	       G r i d D a t a   c o n s t 	 d G r i d D a t a  
 	 	 	 	 	 	 	       )  
 {  
 	 / /   p a r t i c l e   i n d e x  
 	 u i n t   i n d e x   =   _ _ u m u l 2 4 ( b l o c k I d x . x ,   b l o c k D i m . x )   +   t h r e a d I d x . x ;  
 	 i f   ( i n d e x   > =   n u m P a r t i c l e s )   r e t u r n ;  
  
 	 D E M C o l l i s i o n C a l c u l a t i o n : : D a t a   d a t a ;  
 	 d a t a . d P a r t i c l e s S o r t e d   =   d P a r t i c l e s S o r t e d ;  
  
 	 f l o a t 3   p o s i t i o n _ i   =   m a k e _ f l o a t 3 ( F E T C H ( d P a r t i c l e s S o r t e d ,   p o s i t i o n ,   i n d e x ) ) ;  
  
 	 / /   D o   c a l c u l a t i o n s   o n   p a r t i c l e s   i n   n e i g h b o r i n g   c e l l s  
 # i f d e f   S P H S I M L I B _ U S E _ N E I G H B O R L I S T  
 	 U n i f o r m G r i d U t i l s : : I t e r a t e P a r t i c l e s I n N e a r b y C e l l s < D E M C o l l i s i o n C a l c u l a t i o n : : C a l c ,   D E M C o l l i s i o n C a l c u l a t i o n : : D a t a > ( d a t a ,   i n d e x ,   p o s i t i o n _ i ,   d N e i g h b o r L i s t ) ;  
 # e l s e  
 	 U n i f o r m G r i d U t i l s : : I t e r a t e P a r t i c l e s I n N e a r b y C e l l s < D E M C o l l i s i o n C a l c u l a t i o n : : C a l c ,   D E M C o l l i s i o n C a l c u l a t i o n : : D a t a > ( d a t a ,   i n d e x ,   p o s i t i o n _ i ,   d G r i d D a t a ) ;  
 # e n d i f  
  
 }  
  
  
 # i n c l u d e   " K _ C o l o r i n g . i n l "  
 # i n c l u d e   " K _ B o u n d a r i e s _ T e r r a i n . i n l "  
 # i n c l u d e   " K _ B o u n d a r i e s _ W a l l s . i n l "  
  
 _ _ g l o b a l _ _   v o i d   i n t e g r a t e D E M ( i n t 	 	 	 	 n u m P a r t i c l e s ,  
 	 	 	 	 	 	 	 	 b o o l 	 	 	 g r i d W a l l C o l l i s i o n s ,  
 	 	 	 	 	 	 	 	 b o o l 	 	 	 t e r r a i n C o l l i s i o n s ,  
 	 	 	 	 	 	 	 	 f l o a t 	 	 	 d e l t a _ t i m e ,  
 	 	 	 	 	 	 	 	 b o o l 	 	 	 p r o g r e s s ,  
 	 	 	 	 	 	 	 	 G r i d D a t a 	 	 d G r i d D a t a ,  
 	 	 	 	 	 	 	 	 D E M D a t a 	 	 	 d P a r t i c l e s ,  
 	 	 	 	 	 	 	 	 D E M D a t a 	 	 	 d P a r t i c l e s S o r t e d ,  
 	 	 	 	 	 	 	 	 T e r r a i n D a t a 	 	 d T e r r a i n D a t a  
 	 	 	 	 	 	 	 	 )  
 {  
 	 i n t   i n d e x   =   _ _ u m u l 2 4 ( b l o c k I d x . x ,   b l o c k D i m . x )   +   t h r e a d I d x . x ;  
 	 i f   ( i n d e x   > =   n u m P a r t i c l e s )   r e t u r n ;  
  
 	 f l o a t 3   p o s 	 	 	 =   m a k e _ f l o a t 3 ( F E T C H _ N O T E X ( d P a r t i c l e s S o r t e d ,   p o s i t i o n ,   i n d e x ) ) ;  
 	 f l o a t 3   v e l 	 	 	 =   m a k e _ f l o a t 3 ( F E T C H _ N O T E X ( d P a r t i c l e s S o r t e d ,   v e l o c i t y ,   i n d e x ) ) ;  
 	 f l o a t 3   v e l _ e v a l 	 	 =   m a k e _ f l o a t 3 ( F E T C H _ N O T E X ( d P a r t i c l e s S o r t e d ,   v e l e v a l ,   i n d e x ) ) ;  
 	 f l o a t 3   d e m _ f o r c e 	 =   m a k e _ f l o a t 3 ( F E T C H _ N O T E X ( d P a r t i c l e s S o r t e d ,   f o r c e ,   i n d e x ) ) ;  
  
 	 f l o a t 3   f _ e x t f o r c e   =   m a k e _ f l o a t 3 ( 0 , 0 , 0 ) ;  
  
 	 / /   a d d   g r a v i t y  
 	 f _ e x t f o r c e   + =   c D E M P a r a m s . g r a v i t y ;  
  
 	 / /   a d d   n o - p e n e t r a t i o n   d e m _ f o r c e   d u e   t o   t e r r a i n  
 	 i f ( t e r r a i n C o l l i s i o n s )  
 	 	 f _ e x t f o r c e   + =   c a l c u l a t e T e r r a i n N o P e n e t r a t i o n F o r c e (  
 	 	 p o s ,   v e l _ e v a l ,   d T e r r a i n D a t a ,  
 	 	 c D E M P a r a m s . b o u n d a r y _ d i s t a n c e ,  
 	 	 c D E M P a r a m s . b o u n d a r y _ s t i f f n e s s ,  
 	 	 c D E M P a r a m s . b o u n d a r y _ d a m p e n i n g ,  
 	 	 c D E M P a r a m s . s c a l e _ t o _ s i m u l a t i o n ) ;  
  
 	 / /   t o d o :   a d d   n o - s l i p   d e m _ f o r c e   d u e   t o   t e r r a i n . .  
 	 i f ( t e r r a i n C o l l i s i o n s )  
 	 	 f _ e x t f o r c e   + =   c a l c u l a t e T e r r a i n F r i c t i o n F o r c e (  
 	 	 p o s ,   v e l _ e v a l ,   d T e r r a i n D a t a ,  
 	 	 c D E M P a r a m s . b o u n d a r y _ d i s t a n c e ,  
 	 	 c D E M P a r a m s . b o u n d a r y _ s t i f f n e s s ,  
 	 	 c D E M P a r a m s . b o u n d a r y _ d a m p e n i n g ,  
 	 	 c D E M P a r a m s . s c a l e _ t o _ s i m u l a t i o n ) ;  
  
 	 / /   a d d   n o - p e n e t r a t i o n   d e m _ f o r c e   d u e   t o   " w a l l s "  
 	 i f ( g r i d W a l l C o l l i s i o n s )  
 	 	 f _ e x t f o r c e   + =   c a l c u l a t e W a l l s N o P e n e t r a t i o n F o r c e (  
 	 	 p o s ,   v e l _ e v a l ,  
 	 	 c G r i d P a r a m s . g r i d _ m i n ,  
 	 	 c G r i d P a r a m s . g r i d _ m a x ,  
 	 	 c D E M P a r a m s . b o u n d a r y _ d i s t a n c e ,  
 	 	 c D E M P a r a m s . b o u n d a r y _ s t i f f n e s s ,  
 	 	 c D E M P a r a m s . b o u n d a r y _ d a m p e n i n g ,  
 	 	 c D E M P a r a m s . s c a l e _ t o _ s i m u l a t i o n ) ;  
  
  
 	 f l o a t 3   a c c e l   =   d e m _ f o r c e   +   f _ e x t f o r c e ;  
  
 	 / /   L e a p f r o g   i n t e g r a t i o n  
 	 / /   v ( t + 1 / 2 )   =   v ( t - 1 / 2 )   +   a ( t )   d t  
 	 f l o a t 3   v n e x t   =   v e l   +   a c c e l   *   d e l t a _ t i m e ;  
 	 / /   v ( t + 1 )   =   [ v ( t - 1 / 2 )   +   v ( t + 1 / 2 ) ]   *   0 . 5  
 	 v e l _ e v a l   =   ( v e l   +   v n e x t )   *   0 . 5 ;  
 	 v e l   =   v n e x t ;  
  
 	 / /   u p d a t e   p o s i t i o n   o f   p a r t i c l e  
 	 p o s   + =   v n e x t   *   ( d e l t a _ t i m e   /   c D E M P a r a m s . s c a l e _ t o _ s i m u l a t i o n ) ;  
  
 	 i f ( p r o g r e s s )  
 	 {  
 	 	 u i n t   o r i g i n a l I n d e x   =   d G r i d D a t a . s o r t _ i n d e x e s [ i n d e x ] ;  
  
 	 	 / /   w r i t e b a c k   t o   u n s o r t e d   b u f f e r  
 	 	 d P a r t i c l e s . p o s i t i o n [ o r i g i n a l I n d e x ] 	 =   m a k e _ v e c ( p o s ) ;  
 	 	 d P a r t i c l e s . v e l o c i t y [ o r i g i n a l I n d e x ] 	 =   m a k e _ v e c ( v e l ) ;  
 	 	 d P a r t i c l e s . v e l e v a l [ o r i g i n a l I n d e x ] 	 =   m a k e _ v e c ( v e l _ e v a l ) ;  
  
 	 	 f l o a t   c o l o r S c a l a r   =   f a b s ( v n e x t . x ) + f a b s ( v n e x t . y ) + f a b s ( v n e x t . z )   /   1 0 0 0 0 . 0 ;  
 	 	 c o l o r S c a l a r   =   c l a m p ( c o l o r S c a l a r ,   0 . 0 f ,   1 . 0 f ) ;  
   	 	 f l o a t 3   c o l o r   =   c a l c u l a t e C o l o r ( H S V B l u e T o R e d ,   c o l o r S c a l a r ) ;  
 	 	 d P a r t i c l e s . c o l o r [ o r i g i n a l I n d e x ] 	 =   m a k e _ f l o a t 4 ( c o l o r ,   1 ) ;  
 	 }  
 }  
  
 # e n d i f 