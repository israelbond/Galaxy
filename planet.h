/* Israel Bond
 * July 7 2017
 * */

class solar_body
{
   public:
      solar_body();
      ~solar_body();
   protected:
      int atmosphere;//ENUM atmosphere names(gases)
      float sd;//distance to sun
      float sa;//surface area

};

class moon: public: solar_body
{
   public:
      moon();
      ~moon();
   protected:
      
};
