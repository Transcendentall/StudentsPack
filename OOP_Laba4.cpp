#include <iostream>
#include <string>
#include <ctime>

using namespace std;


class Student
{
private:
    std::string name = "";
    std::string ocenki = "";

public:


        void setname(std::string iname)
        {
            this->name=iname;
        }
       std::string getname()
        {
            return this->name;
        }

void setocenki(std::string iocenki)
{
    this->ocenki = iocenki;
}
std::string getocenki()
{
    return this->ocenki;
}

bool OtlichnikOrNot()
{
    float summ=0, countb=0, sredniyball = 0;
    for (unsigned short int j=0; j<this->getocenki().length(); ++j)
    {
        summ=summ+((this->getocenki())[j] - 48);
        ++countb;
    }
    sredniyball=summ/countb;
    if (sredniyball>=4.75)
    {
//        cout << "otl";
        return true;
    }
    else
    {
//        cout << "ne otl";
        return false;
    }
}

protected:

};





class Teacher
{
private:

public:

        std::string getname()
        {
            return this->name;
        }
        bool getnastroenie()
        {
            return this->NastroenieIsGood;
        }
        void setname(std::string iname)
        {
            this->name=iname;
        }

void PostavitConcretnuyuOcenkuStudentu(Student* S1, std::string ConcretnayaOcenka)
{
    S1->setocenki(S1->getocenki()+ConcretnayaOcenka);
    ++countocenok;

            unsigned short int ra = 9;
        ra = (((rand() % 2)));
    if ((countocenok % 5) == 0)
    {
        if (ra == 1)
        {
            this->NastroenieIsGood=true;
        }
        else
        {
            this->NastroenieIsGood=false;
        }
    }
}

void PostavitRandomOcenkuStudentu(Student* S1)
{
    if (NastroenieIsGood==true)
    {
        if (S1->OtlichnikOrNot()==true)
        {
            S1->setocenki(S1->getocenki()+"5");
        }
        else
        {
            S1->setocenki(S1->getocenki()+"4");
        }
    }
    else
    {
        if (S1->OtlichnikOrNot()==true)
        {
            if ((rand() % 2)==0)
            {
                    S1->setocenki(S1->getocenki()+"4");
            }
            else
            {
                    S1->setocenki(S1->getocenki()+"5");
            }
        }
        else
        {
            if ((rand() % 2)==0)
            {
                    S1->setocenki(S1->getocenki()+"2");
            }
            else
            {
                    S1->setocenki(S1->getocenki()+"3");
            }
        }
    }

    ++countocenok;

        unsigned short int ra = 9;
        ra = (((rand() % 2)));
    if ((countocenok % 5) == 0)
    {
        if (ra == 1)
        {
            this->NastroenieIsGood=true;
        }
        else
        {
            this->NastroenieIsGood=false;
        }
    }
}

protected:
    std::string name = "";
    bool NastroenieIsGood;
    unsigned short int countocenok = 0;

};


class Fizruk : public Teacher
{
private:

public:

void PostavitRandomOcenkuStudentu(Student* S1)
{
S1->setocenki(S1->getocenki()+"5");
}

protected:

};


class Roditel
{
private:

public:

    Student* child[20];
    unsigned short int countchild = 0;

        void setname(std::string iname)
        {
            this->name=iname;
        }
       std::string  getname()
        {
            return this->name;
        }
void addChild(Student* S1)
{
    child[countchild]=S1;
    ++countchild;
}
void RasskazatOKazhdomSvoem()
{

    for (int j=0; j<(countchild); ++j)
    {




    if (NastroenieIsGood==true)
    {
        if (child[j]->OtlichnikOrNot()==true)
        {
            cout << "Родитель " << this->getname() << " говорит: " << child[j]->getname() << " лучший в мире ребёнок!" << endl;
        }
        else
        {
            cout << "Родитель " << this->getname() << " говорит: " << child[j]->getname() << " очень хороший ребёнок, хотя с учёбой у него всё так себе." << endl;
        }
    }
    else
    {
        if (child[j]->OtlichnikOrNot()==true)
        {
            cout << "Родитель " << this->getname() << " говорит: " << child[j]->getname() << " нормальный ребёнок. Учится-то он хорошо, а в остальном... ну, сойдёт, ладно." << endl;
        }
        else
        {
            cout << "Родитель " << this->getname() << " говорит: " << child[j]->getname() << " вообще негодник. Ему ремня дать надо." << endl;
        }
    }






    }
}

void RasskazatOSluchainomSvoem()
{
unsigned short int ran = 0;
        ran = (((rand() % countchild)));




        if (NastroenieIsGood==true)
    {
        if (child[ran]->OtlichnikOrNot()==true)
        {
            cout << "Родитель " << this->getname() << " говорит: " << child[ran]->getname() << " лучший в мире ребёнок!" << endl;
        }
        else
        {
            cout << "Родитель " << this->getname() << " говорит: " << child[ran]->getname() << " очень хороший ребёнок, хотя с учёбой у него всё так себе." << endl;
        }
    }
    else
    {
        if (child[ran]->OtlichnikOrNot()==true)
        {
            cout << "Родитель " << this->getname() << " говорит: " << child[ran]->getname() << " нормальный ребёнок. Учится-то он хорошо, а в остальном... ну, сойдёт, ладно." << endl;
        }
        else
        {
            cout << "Родитель " << this->getname() << " говорит: " << child[ran]->getname() << " вообще негодник. Ему ремня дать надо." << endl;
        }
    }







}
void RasskazatOboVsehSvoihVCelom()
{
    unsigned short int countofotlichnik = 0;
    for (int j=0; j<(countchild); ++j)
    {
        if (child[j]->OtlichnikOrNot()==true)
        {
            ++countofotlichnik;
        }
    }



    if (NastroenieIsGood==true)
    {
        if (countofotlichnik >= (countchild/2))
        {
            cout << "Родитель " << this->getname() << " говорит: " <<  "У меня прекрасные дети!" << endl;
        }
        else
        {
            cout << "Родитель " << this->getname() << " говорит: " << "У меня хорошие дети, хотя им есть, куда стремиться." << endl;
        }
    }
    else
    {
        if (countofotlichnik >= (countchild/2))
        {
            cout << "Родитель " << this->getname() << " говорит: " << "У меня неплохие дети. Но сейчас мне не до них." << endl;
        }
        else
        {
            cout << "Родитель " << this->getname() << " говорит: " << "Мои дети абсолютно бестолковы." << endl;
        }
    }




}
void RasskazatOKonkretnomSvoem(Student* S1)
{
    unsigned short int ji = 0;
    bool childexist = false;

    while ((ji<(countchild)) && (childexist==false))
    {
        if (S1==child[ji])
        {
            childexist=true;






                if (NastroenieIsGood==true)
    {
        if (S1->OtlichnikOrNot()==true)
        {
            cout << "Родитель " << this->getname() << " говорит: " << S1->getname() << " лучший в мире ребёнок!" << endl;
        }
        else
        {
            cout << "Родитель " << this->getname() << " говорит: " << S1->getname() << " очень хороший ребёнок, хотя с учёбой у него всё так себе." << endl;
        }
    }
    else
    {
        if (S1->OtlichnikOrNot()==true)
        {
            cout << "Родитель " << this->getname() << " говорит: " << S1->getname() << " нормальный ребёнок. Учится-то он хорошо, а в остальном... ну, сойдёт, ладно." << endl;
        }
        else
        {
            cout << "Родитель " << this->getname() << " говорит: " << S1->getname() << " вообще негодник. Ему ремня дать надо." << endl;
        }
    }






        }
        ++ji;
    }
    if ((childexist==false))
    {
            cout << "ERROR! Это не тот ребёнок! У родителя " << this->getname() << " нет ребёнка " << S1->getname() << "." << endl;
    }
}

protected:
    std::string name = "";
    bool NastroenieIsGood;

};


class Babushka : public Roditel
{
private:

public:

void RasskazatOKazhdomSvoem()
{

    for (int j=0; j<(countchild); ++j)
    {
            cout << "Бабушка " << this->getname() << " говорит: " << child[j]->getname() << " лучший в мире внук!" << endl;

    }
}

void RasskazatOSluchainomSvoem()
{
unsigned short int ran = 0;
        ran = (((rand() % countchild)));
            cout << "Бабушка " << this->getname() << " говорит: " << child[ran]->getname() << " лучший в мире внук!" << endl;
}
void RasskazatOboVsehSvoihVCelom()
{

            cout << "Бабушка " << this->getname() << " говорит: " <<  "У меня прекрасные внуки!" << endl;

}
void RasskazatOKonkretnomSvoem(Student* S1)
{
    unsigned short int ji = 0;
    bool childexist = false;

    while ((ji<(countchild)) && (childexist==false))
    {
        if (S1==child[ji])
        {
            childexist=true;
        }
        ++ji;
    }
    if ((childexist==true))
    {
            cout << "Бабушка " << this->getname() << " говорит: " << S1->getname() << " лучший в мире внук!" << endl;
    }

    if ((childexist==false))
    {
                    if (NastroenieIsGood==true)
    {
        if (S1->OtlichnikOrNot()==true)
        {
            cout << "Бабушка " << this->getname() << " говорит: " << S1->getname() << " не мой внук, но он хороший!" << endl;
        }
        else
        {
            cout << "Бабушка " << this->getname() << " говорит: " << S1->getname() << " не мой внук. Он хороший ребёнок, хотя учится так себе." << endl;
        }
    }
    else
    {
        if (S1->OtlichnikOrNot()==true)
        {
            cout << "Бабушка " << this->getname() << " говорит: " << S1->getname() << " не мой внук. Он более-менее неплохой ребёнок." << endl;
        }
        else
        {
            cout << "Бабушка " << this->getname() << " говорит: " << S1->getname() << ", к счастью, не мой внук. Он лентяй и дурак." << endl;
        }
    }

    }



}

protected:

};




class Zanyatie
{

private:
    std::string name = "";
    unsigned short int countstud = 0;
    Teacher* teach;


public:

        void setname(std::string iname)
        {
            this->name=iname;
        }

       std::string getname()
        {
            return this->name;
        }


    Student* stud[40];

void addStud(Student* S1)
{
    stud[countstud]=S1;
    ++countstud;
 }

       void setteach(Teacher* iteach)
        {
            this->teach=iteach;
        }
       Teacher* getteach()
        {
            return this->teach;
        }
        unsigned short int getcountstud()
        {
            return this->countstud;
        }


void ProvestiZanyatie(Fizruk* T1)
    {
        unsigned short int r = 1;
        setteach(T1);

    for (int j=0; j<(countstud); ++j)
    {
        r = (((rand() % 3))+1);
        if ((T1->getnastroenie()==true))
        {
            ++r;
        }
        for (int j=0; j<r; ++j)
        {
        T1->PostavitRandomOcenkuStudentu(stud[j]);
        }
    }
    }

    void ProvestiZanyatie(Teacher* T1)
    {
        unsigned short int r = 1;
        setteach(T1);

    for (int j=0; j<(countstud); ++j)
    {
        r = (((rand() % 3))+1);
        if ((T1->getnastroenie()==true))
        {
            ++r;
        }
        for (int j=0; j<r; ++j)
        {
        T1->PostavitRandomOcenkuStudentu(stud[j]);
        }
    }
    }


protected:


};



class Sobranie
{
    private:

    Teacher*   teach[20];
    Roditel*   rodit[20];
    Zanyatie* zanyat[20];
    Student* studentybezroditeley[20];
    unsigned short int countteach  = 0;
    unsigned short int countrodit  = 0;
    unsigned short int countzanyat = 0;
    unsigned short int countstudentybezroditeley = 0;

    public:

    void addTeach(Teacher* T1)
    {
        teach[countteach]=T1;
        ++countteach;
    }
    void addRodit(Roditel* R1)
    {
        rodit[countrodit]=R1;
        ++countrodit;
    }
    void addZanyat(Zanyatie* Z1)
    {
        zanyat[countzanyat]=Z1;
        ++countzanyat;
    }
    void addStudentBezRoditeley(Student* SBR1)
    {
            bool SBRExist = false;
            for (int j5=0; j5<countstudentybezroditeley; ++j5)
            {
                if (SBR1==studentybezroditeley[j5])
                {
                    SBRExist=true;
                }
            }
            if (SBRExist == false)
            {
                 studentybezroditeley[countstudentybezroditeley]=SBR1;
                ++countstudentybezroditeley;
            }

    }






    void ProvestiSobranie()
    {
        cout << endl;
        cout << endl;
        cout << "!==================================================================!" << endl << "     СОБРАНИЕ НАЧАЛОСЬ:   " << endl << endl;
        for (int j=0; j<(countzanyat); ++j)
        {
            bool existTeacher=false;
            unsigned short int j1=0;
            while ((j1<countteach) && (existTeacher==false))
            {
                if (teach[j1]==zanyat[j]->getteach())
                {
                    existTeacher= true;

                }
                ++j1;
            }


            if (existTeacher==1)
            {

                for (int j2=0; j2<(zanyat[j]->getcountstud()); ++j2)
                {

                        bool existRodit=false;
 //                       unsigned short int j3=0;
 //                       unsigned short int j4=0;
                            for (unsigned short int j3=0; j3<countrodit; ++j3)
                            {
                            for (unsigned short int j4=0; j4<rodit[j3]->countchild; ++j4)
                            {
                              if ( (zanyat[j]->stud[j2]) == (rodit[j3]->child[j4]))
                              {
                                 existRodit= true;
                                 cout << "О работе учащегося" << (zanyat[j]->stud[j2]->getname()) << " на занятии '" << zanyat[j]->getname() << "': ";
                                 rodit[j3]->RasskazatOKonkretnomSvoem(zanyat[j]->stud[j2]);
                                // cout << "!!!!!!!!!!" << "!" << (zanyat[j]->stud[j2]->getname()) << "!" << (rodit[j3]->getname()) << "!" << zanyat[j]->getname() << "!" << endl;
                              }
//                              ++j3;
                            }

                            }
                if (existRodit==false)
                {
                                this->addStudentBezRoditeley(zanyat[j]->stud[j2]);

 //                                cout << "?????????" << (zanyat[j]->stud[j2]->getname()) << "?" << zanyat[j]->getname() << "?" << endl;
                }
                }

            }

        }
        cout << endl << endl << endl << "+ + + + + + + + + + + + + +" << endl << endl;
        cout << "СПИСОК УЧАЩИХСЯ, КОТОРЫЕ БЫЛИ НА ЗАНЯТИЯХ И ПОЛУЧИЛИ ОТМЕТКИ, НО ИХ РОДИТЕЛИ НЕ ЯВИЛИСЬ: " << endl << endl;

            for (int j6=0; j6<countstudentybezroditeley; ++j6)
            {
                cout << j6+1 << ") " << studentybezroditeley[j6]->getname() << endl;
            }
            cout << endl << endl << endl << "     ...СОБРАНИЕ ЗАКОНЧИЛОСЬ   " << endl << endl << "!==================================================================!" << endl << endl;
    }




    protected:

};


int main()
{
    srand(time(0));

    Student* Vasya     = new Student();
    Student* Petya     = new Student();
    Student* Dasha     = new Student();
    Student* Misha     = new Student();
    Student* Masha     = new Student();
    Student* Vanya     = new Student();
    Vasya->setname("Vasya");
    Petya->setname("Petya");
    Dasha->setname("Dasha");
    Misha->setname("Misha");
    Masha->setname("Masha");
    Vanya->setname("Vanya");

    Teacher* MarIvanna = new Teacher();
    MarIvanna->setname("MarIvanna");

    Fizruk* Mihalich  = new Fizruk();
    Mihalich->setname("Mihalich");

    Roditel* IvanIvanichIvanov  = new Roditel();
    IvanIvanichIvanov->setname("Ivan Ivanich Ivanov");

    Roditel* VasiliyPetrovichSidorov  = new Roditel();
    VasiliyPetrovichSidorov->setname("Vasiliy Petrovich Sidorov");

    Zanyatie* Matan    = new Zanyatie();
    Zanyatie* Fizra    = new Zanyatie();
    Matan->setname("Matan");
    Fizra->setname("Fizra");

    Babushka* Afdotia  = new Babushka();
    Afdotia->setname("Afdotia");


    Sobranie* RodSobr  = new Sobranie();

    Vasya->setocenki("554");
    Petya->setocenki("5");
    Dasha->setocenki("34543535");
    Misha->setocenki("5454545");
    Masha->setocenki("52345");
    Vanya->setocenki("1");

    MarIvanna->PostavitRandomOcenkuStudentu(Vasya);
    MarIvanna->PostavitRandomOcenkuStudentu(Petya);
    MarIvanna->PostavitRandomOcenkuStudentu(Dasha);
    MarIvanna->PostavitRandomOcenkuStudentu(Misha);
    MarIvanna->PostavitRandomOcenkuStudentu(Masha);
    MarIvanna->PostavitRandomOcenkuStudentu(Vanya);

    Matan->addStud(Vasya);
    Matan->addStud(Petya);
    Matan->addStud(Dasha);
    Matan->addStud(Misha);
    Matan->addStud(Masha);
    Matan->ProvestiZanyatie(MarIvanna);

    Fizra->addStud(Vasya);
    Fizra->addStud(Dasha);
    Fizra->addStud(Vanya);
    Fizra->addStud(Masha);
    Fizra->ProvestiZanyatie(Mihalich);


    Mihalich->PostavitRandomOcenkuStudentu(Vasya);

    cout << Vasya->getocenki() << endl;
    cout << Petya->getocenki() << endl;
    cout << Dasha->getocenki() << endl;

    IvanIvanichIvanov->addChild(Vasya);
    IvanIvanichIvanov->addChild(Petya);
    IvanIvanichIvanov->addChild(Dasha);

    VasiliyPetrovichSidorov->addChild(Misha);

    Afdotia->addChild(Vasya);
    Afdotia->addChild(Petya);
    Afdotia->addChild(Dasha);
    Afdotia->addChild(Vanya);

    IvanIvanichIvanov->RasskazatOKazhdomSvoem();
    IvanIvanichIvanov->RasskazatOSluchainomSvoem();
    IvanIvanichIvanov->RasskazatOboVsehSvoihVCelom();
    IvanIvanichIvanov->RasskazatOKonkretnomSvoem(Vasya);
    IvanIvanichIvanov->RasskazatOKonkretnomSvoem(Misha);

    Afdotia->RasskazatOKazhdomSvoem();
    Afdotia->RasskazatOSluchainomSvoem();
    Afdotia->RasskazatOboVsehSvoihVCelom();
    Afdotia->RasskazatOKonkretnomSvoem(Vanya);
    Afdotia->RasskazatOKonkretnomSvoem(Misha);

    RodSobr->addRodit(IvanIvanichIvanov);
    RodSobr->addRodit(VasiliyPetrovichSidorov);
    RodSobr->addRodit(Afdotia);
    RodSobr->addTeach(Mihalich);
    RodSobr->addTeach(MarIvanna);
    RodSobr->addZanyat(Matan);
    RodSobr->addZanyat(Fizra);
    RodSobr->ProvestiSobranie();

    return 0;
}
