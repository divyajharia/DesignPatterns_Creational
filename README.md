# DesignPatterns_Creational
 Practicing Creational Design patterns
 Inheritance over composition 
 Inheritance is IS-A relationship 
 For Example->
 I want to open a coffee shop, 
 therefor, if we have a Drinks Base class having attributes like flavour, type , beans, foam etc and 
 Sub Classes like, cappechino, latte, Expresso, Cold Coffee
 cappechino with soya, latte with soya, Expresso with soya, Cold Coffee with soya
 Tea, etc 
 
 All of them inheriting from the base class will be tedious and the class like Tea will have unnecessary data 
 
 Thus to counter this issue 
 We have Composition which means HAS-A relationship
 Where instead of having the inheritance, we can have different classes of specific attributes and then the Specific drinks class can use those 
 attributes, 
 
 
 Drink Classe
 _expresso
 Make()
 
 <<IS-A>>
 
 Latte
 _milk
 _flavor
 
 
 <<HAS-A>>
 
 Milk							Flavour
 _Whole							_None
 _Soya							_Caramel
 _Almond						_Haxelnut
 
 
 ##############
 Factory Method
 1> Provides Interface to create objects but defers the creation to the subclasses
 For Example-
 A coffee machine, it hides the underlying process of creating different coffees , we just give it our input 
 and it create the drink as we have proposed. 
 
 
<What>
 Creator Class :(This defines the blueprint of the coffee machine but is not the actual machine)
 Factory Method()
 AnOperation
 
 <<IS-A>>
 
ConcreteCreator Class : (This is the actual coffee machine it can have different stype brand names etc)
 Factory Method()
 <What/>
 
 <How>
 
 Product Class : (This is the Generic Product like say the cup which will be similar to all )
 
 
 <<IS-A>>

ConcreteProduct Class : (These all comprises of the classes of different types of products like tea, latte, expresso, Americano) 
<How/>
////////////////////////////////////////////////
ConcreteCreator <<CREATES>> ConcreteProduct
 ///////////////////////////////////////////////
 
 ###############################
 Builder Pattern
 
 When complex unrelated objects are needed we use this pattern 
 and also when steps are important 
 
 ##############################
 Prototype pattern

It is use full to clone the objects 
it feels smilar to copy constructur but here we do not know hwich object to clone befor hand 
 the clone function is implemented in the concrete classes it self 
 
 ################################
 Singleton
 
 When we need a Global access to an object 
 But one and only one instance of it. 
 
 is it good or Bad
 Do Lazy initialization - initialize at the start of the program 
 
 Using critical section-> but then its slow
 
 
