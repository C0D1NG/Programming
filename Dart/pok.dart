import "main.dart";
class Pokemons extends CategorieDA
{
  int _nb_ep;
  int _nb_saison;
  Pokemons({required int nbe ,required int nbs, required int id, String? desc}
      ):
        _nb_ep=nbe,_nb_saison=nbs, super(id: id,desc: desc) ;

  void set setnb_ep(int c)=> _nb_ep=c;
  int get getnb_ep => _nb_ep;

  void set setnb_saison(int c)=> _nb_saison=c;
  int get getnb_saison => _nb_saison;

  @override
  String toString() {
    return super.toString() + 'nombre episodes = $_nb_ep nombre saison = $_nb_saison';
  }
}