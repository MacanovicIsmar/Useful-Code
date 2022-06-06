  public override IEnumerable<Sport> AddRange(IEnumerable<SportUpsertRequest> insertlist, DbSet<Sport> set)
        {
            int takenumber = insertlist.Count(); //koliko ih treba uzeti
            int addnumber = 0;  //koliko ih treba dodati
            var list = insertlist.ToList(); //konverzija

            if (takenumber > set.Count())
            {
                addnumber = set.Count() - takenumber;
                set.AddRange(Mapper.Map<IEnumerable<Sport>>(list.Skip(takenumber - addnumber)));
                takenumber = set.Count();

            }




            var SetMini = set.Take(takenumber);

            int i = 0;




            foreach (var a in SetMini)
            {

                if (a.name != list[i].name)
                {
                    //a.name = list[i].name;
                    set.Find(a.SportsId).name = list[i].name;
                }
                i++;


            }







            IEnumerable<Sport> entity = Mapper.Map<IEnumerable<Sport>>(SetMini);
            //set.AddRange(entity);

            return entity;

        }
