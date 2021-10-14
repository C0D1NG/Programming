class CategorieDA
{
  int _id;
  String? _desc;

  CategorieDA({required int id, String? desc}) :
        _id =id
  {
    if(desc!= null) {
      _desc = desc;
    }
  }

  void set setId(int c)=> _id=c;

  int get getId => _id;

  void set setdescription(String? c)=> _desc=c;

  String? get getdescription => _desc;

  @override
  String toString() {
    String infos = 'Categorie Animés Info : id => $_id ';
    if(_desc != null)
      infos +=' description => $_desc';
    return infos;
  }
}


