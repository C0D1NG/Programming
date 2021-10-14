//el main hiya cat
import 'pok.dart';

void main() {
  var p1 =Pokemons(id: 554,nbe: 24,nbs: 5);
  var p2 = Pokemons(id: 1252,nbe: 9,nbs: 11 ,desc: "Pokémon est une franchise créée par Satoshi Tajiri en 1996, ");
  var p3 =Pokemons(id: 521,nbe: 99,nbs: 5);
  print(p2.getnb_ep);

  p1.setnb_saison=2;

  print(p1.getnb_saison);
  print("**************************All Pokémon**************************");
  print(p1.toString());
  print(p2.toString());
  print(p3.toString());
  print("********************Pokémon avec ID paire********************");

  var l=[p1,p2];
/*
  for(var x in l)
     {
       if(x.getId %2==0) print(x.toString());
     }

 */
  l.forEach((p) {
    if(p.getId %2==0) print(p.toString());
  });
}