#include <stdio.h>
#include<time.h>
#include <string.h>
void heart();
void generateQRPattern();
typedef struct {
    int id;
    char name[50];
    float price;
} bil;



void veg_start();
void nonveg_start();
void veg_main();
void nonveg_main();
void bread_rice();
void Accompanies();
void veg_side();
void nonveg_side();
void desserts();
void bewerages();
void upper1bill();
void upper2bill();
float middleBill(bil personArr[], int arrLength, int p,int qty);
void lowerbill(float total);
void page();
void heart();
void lowerbill(float total);
void printselecteditems(bil menu[],int arrLength,int p,int q);
void cat();
int switch1(char a);
int main(void) {
  char k[30];
  page();
  bil menu[100] = {
        {1001,"Paneer Tikka", 200},
        {1002,"Vegetable Samosas", 150},
        {1003,"Aloo Tikki", 120},
        {1004,"Gobi Manchurian", 180},
        {1005,"Palak Pakora", 160},
        {1006,"Hara Bhara Kebab", 190},
        {1007,"Onion Bhaji", 130},
        {1008,"Dahi Puri", 140},
        {1009,"Methi Malai Murg", 220},
        {1010,"Mushroom 65", 200},
        {1011,"Chicken Tikka", 220},
        {1012,"Seekh Kebabs", 250},
        {1013,"Fish Amritsari", 280},
        {1014,"Mutton Kebabs", 300},
        {1015,"Tandoori Prawns", 320},
        {1016,"Chicken Pakora", 200},
        {1017,"Crab Masala", 350},
        {1018,"Chicken Malai Kebab", 230},
        {1019,"Lamb Chops", 320},
        {1020,"Tandoori Salmon", 350},
        {1021,"Paneer Butter Masala", 250},
        {1022,"Vegetable Biryani", 220},
        {1023,"Aloo Gobi", 180},
        {1024,"Palak Paneer", 240},
        {1025,"Baingan Bharta", 200},
        {1026,"Dal Makhani", 260},
        {1027,"Chana Masala", 190},
        {1028,"Shahi Paneer", 270},
        {1029,"Malai Kofta", 280},
        {1030,"Bhindi Masala", 200},
        {1031,"Chicken Curry", 240},
        {1032,"Butter Chicken", 280},
        {1033,"Lamb Rogan Josh", 300},
        {1034,"Fish Curry", 320},
        {1035,"Chicken Biryani", 260},
        {1036,"Mutton Korma", 320},
        {1037,"Prawn Masala", 340},
        {1038,"Chicken Saagwala", 270},
        {1039,"Goan Fish Curry", 300},
        {1040,"Hyderabadi Biryani", 280},
        {1041,"Garlic Naan", 70},
        {1042,"Butter Roti", 60},
        {1043,"Steamed Basmati Rice", 100},
        {1044,"Jeera Rice", 120},
        {1045,"Kashmiri Naan", 80},
        {1046,"Peshawari Naan", 90},
        {1047,"Veg Pulao", 150},
        {1048,"Chicken Biryani", 200},
        {1049,"Keema Naan", 100},
        {1050,"Lemon Rice", 130},
        {1051,"Raita", 50},
        {1052,"Mango Chutney", 40},
        {1053,"Mixed Pickle", 30},
        {1054,"Papad", 20},
        {1055,"Onion Salad", 25},
        {1056,"Mint Chutney", 35},
        {1057,"Tamarind Chutney", 40},
        {1058,"Green Chili Pickle", 30},
        {1059,"Cucumber Raita", 45},
        {1060,"Tomato Onion Chutney", 35},
        {1061,"Bhindi Fry", 180},
        {1062,"Baingan Bhaja", 150},
        {1063,"Tawa Masala Mushrooms", 200},
        {1064,"Rajma", 160},
        {1065,"Aloo Methi", 140},
        {1066,"Cabbage Sabzi", 130},
        {1067,"Mix Veg Dry", 170},
        {1068,"Karela Masala", 160},
        {1069,"Dum Aloo", 190},
        {1070,"Chole", 180},
        {1071,"Chicken Korma", 250},
        {1072,"Keema Matar", 280},
        {1073,"Egg Curry", 220},
        {1074,"Lamb Bhuna", 300},
        {1075,"Prawn Masala", 320},
        {1076,"Chicken Saag", 260},
        {1077,"Fish Kofta Curry", 300},
        {1078,"Chicken Vindaloo", 270},
        {1079,"Mutton Do Pyaza", 320},
        {1080,"Anda Curry", 230},
        {1081,"Gulab Jamun", 80},
        {1082,"Rasgulla", 70},
        {1083,"Kheer", 90},
        {1084,"Jalebi", 100},
        {1085,"Rasmalai", 120},
        {1086,"Gajar Halwa", 110},
        {1087,"Kulfi", 80},
        {1088,"Shahi Tukda", 100},
        {1089,"Malpua", 90},
        {1090,"Phirni", 95},
        {1091,"Masala Chai", 40},
        {1092,"Lassi", 60},
        {1093,"Mango Lassi", 70},
        {1094,"Fresh Lime Soda", 50},
        {1095,"Rose Sherbet", 45},
        {1096,"Mint Cooler", 55},
        {1097,"Buttermilk", 40},
        {1098,"Thandai", 65},
        {1099,"Badam Milk", 75},
        {1100,"Coffee", 50}
    };
  q:
    printf("WELCOME TO CASTLE-INN....:)\n\n");
  printf("Want to self checkout?(y/n)\n");
  scanf("%s",k);
  if((strcmp(k,"n"))==0){
   int p[100],y,qty[100];
    printf("Enter no.of items:\n");
    scanf("%d",&y);
    int arrLength=100;
    for(int i=0;i<y;i++){
    hello:
    printf("Enter itemno %d\n",i+1);
    scanf("%d",&p[i]);
    if((p[i]>=1001)&&(p[i]<=1100)){
    printf("Enter quantity:\n");
    scanf("%d",&qty[i]);
    }
    else{
      printf("Item number doesnt exist:\n");
        goto hello;
        }
    
    }
    float total=0;
    upper1bill();
    time_t currentTime;

    // Get the current time
    time(&currentTime);

    // Convert the current time to a string
    char *timeString = ctime(&currentTime);

    // Print the current time
    printf("              %s\n\n", timeString);
    upper2bill();
    for(int i=0;i<y;i++){
        total+=middleBill(menu,arrLength,p[i],qty[i]);
    }
    lowerbill(total);
   
    return 0;


  }
  else if((strcmp(k,"y")==0)){
    bye:
  page();
  page();
  veg_start();
  page();
  page();
  nonveg_start();
  page();
  page();
  veg_main();
  page();
  page();
  nonveg_main();
  page();
  page();
  bread_rice();
  page();
  page();
  Accompanies();
  page();
  page();
  veg_side();
  page();
  page();
  nonveg_side();
  page();
  page();
  desserts();
  page();
  page();
  bewerages();
  page();
  int ch1, ch2, ch3, ch4, ch5, ch6, ch7, ch8, ch9, ch10;

   
    ch1 = ch2 = ch3 = ch4 = ch5 = ch6 = ch7 = ch8 = ch9 = ch10 = 0;
    char a;
    char d;
    int n,total=0;
    printf("Enter the total number of items you would like to order\n");
    scanf("%d",&n);
    int i=0,c[100]; 
  
  hi:
 
    page();
    cat();  
    hii:
    scanf("%c", &a);
    if ((a>='a')&&(a<='j')){
      page();
      c[i]=switch1(a);
      page();
    }
    else{  
      
      goto hii;}
    while(i<(n-1)) {   
    i++;
    
    goto hi;
    }
    int x;
      int s;
    yes:
    printf("Would you like to confirm your order?(Press 1 to confirm)/(Press 0 to cancel)\n");
    scanf("%d",&x);
    if(x==1){
  
        generateQRPattern();

    }
    else if(x==0){
      printf("Cancelling your order...\n\n");
      zz:
      printf("Would you like to reorder?(Press 1 to reorder)/(Press 0 to exit)\n\n");
      scanf("%d",&s);
      if(s==1){
        goto bye;
      }
      else if(s==0){
        return 0;
      }
      else{
        goto zz;
      }
    }
    else{
      goto yes;
    }
    return 0;

  }
else{
  goto q;
}
}

int printSelectedItems(bil personArr[], int arrLength, int p,int qty) {
    
    int i;
    for ( i = 0; i < arrLength; i++) {
         if (personArr[i].id == p) {
            printf("%-30s\t\t\t%-20.2f\t      %-15d %-15.2f\n",personArr[i].name, personArr[i].price, qty,personArr[i].price*qty);        
    return personArr[i].price*qty;
            break;     
            }
        }

}
void upper1bill(){
         page();
         printf("                                         CASTLE-INN                                        \n\n");
    printf("--------------------------------------------------------------------------------------------------------\n\n\n");
    printf("                                            BILL                  ");}
    void upper2bill(){

    
    printf("--------------------------------------------------------------------------------------------------------\n\n\n");
    printf("Item\t\t\t    %-20sUnit_price\t %-13sQuantity %-7.2sPrice\n\n\n"," "," "," ");
    }        

float  middleBill(bil personArr[], int arrLength, int p,int qty) {
    float total=0; 
   
            for (int i = 0; i < arrLength; ++i) {
                 total += printSelectedItems(personArr, arrLength,  p,qty);
                 break;
            }
    return total;
    }
    void lowerbill(float total){
        float gst=2.6,x=(total*gst)/100;        
        printf("\n\n");
    printf("--------------------------------------------------------------------------------------------------------\n\n\n");
    printf("CGST(2.5%) :\t\t\t                                                              %.2f\n\n", x);
    printf("SGST(2.5%) :\t\t\t                                                              %.2f\n\n", x);
    printf("--------------------------------------------------------------------------------------------------------\n\n\n");
    printf("Total      :\t\t\t                                                              %.2f\n\n", (total+x+x));
    printf("--------------------------------------------------------------------------------------------------------\n\n\n");
    printf("\t\t\t\tThank you! Please visit again..\n\n\n");
    heart();
    page();
}

 
void heart(){
   int i, j, n=4;


    for(i=n/2; i<=n; i+=2)
    {
         printf("\t\t\t\t\t");
        for(j=1; j<n-i; j+=2)
        {
            printf(" ");
        }

        for(j=1; j<=i; j++)
        {
            printf("*");
        }

        for(j=1; j<=n-i; j++)
        {
            printf(" ");
        }

        for(j=1; j<=i; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    for(i=n; i>=1; i--)
    {
       printf("\t\t\t\t\t");
        for(j=i; j<n; j++)
        {
            printf(" ");
        }

        for(j=1; j<=(i*2)-1; j++)
        {
            printf("*");
        }

        printf("\n");
    }
}


void veg_start() {
  printf("\t\t\t\t\t\tA.Vegetarian Starters\n\n\n\n1001.Paneer Tikka - "
         "₹200\n\n1002.Vegetable Samosas - ₹150\n\n1003.Aloo Tikki - ₹120\n\n1004.Gobi "
         "Manchurian - ₹180\n\n1005.Palak Pakora - ₹160\n\n1006.Hara Bhara Kebab - "
         "₹190\n\n1007.Onion Bhaji - ₹130\n\n1008.Dahi Puri - ₹140\n\n1009.Methi Malai "
         "Murg - ₹220\n\n1010.Mushroom 65 - ₹200\n\n");
}
void nonveg_start() {
  printf("\t\t\t\t\t\tB.Non-Vegetarian Starters\n\n\n\n1011.Chicken Tikka - "
         "₹220\n\n1012.Seekh Kebabs - ₹250\n\n1013.Fish Amritsari - ₹280\n\n1014.Mutton "
         "Kebabs - ₹300\n\n1015.Chicken Pakora - ₹200\n\n1016.Tandoori Prawns - "
         "₹320\n\n1017.Crab Masala - ₹350\n\n1018.Chicken Malai Kabab - "
         "₹230\n\n1019.Lamb Chops - ₹320\n\n1020.Tandoori Salmon - ₹350\n\n");
}
void veg_main() {

  printf("\t\t\t\t\t\tC.Vegetarian Main Course\n\n\n\n1021.Paneer Butter Masala - "
         "₹250\n\n1022.Vegetable Biryani - ₹220\n\n1023.Aloo Gobi - ₹180\n\n1024.Palak "
         "Paneer - ₹240\n\n1025.Baingan Bharta - ₹200\n\n1026.Dal Makhani - "
         "₹260\n\n1027.Chana Masala - ₹190\n\n1028.Shahi Paneer - ₹270\n\n1029.Malai "
         "Kofta - ₹280\n\n1030.Bhindi Masala - ₹200\n\n");
}
void nonveg_main() {

  printf(
      "\t\t\t\t\t\tD.Non-Vegetarian Main Course\n\n\n\n1031.Chicken Curry - "
      "₹240\n\n1032.Butter Chicken - ₹280\n\n1033.Lamb Rogan Josh - ₹300\n\n1034.Fish "
      "Curry - ₹320\n\n1035.Chicken Biryani - ₹260\n\n1036.Mutton Korma - "
      "₹320\n\n1037.Prawn Masala - ₹340\n\n1038.Chicken Saagwala - ₹270\n\n1039.Goan "
      "Fish Curry - ₹300\n\n1040.Hyderabadi Biryani - ₹280\n\n");
}
void bread_rice() {

  printf("\t\t\t\t\t\tE.Bread and Rice\n\n\n\n1041.Garlic Naan - ₹70\n\n1042.Butter "
         "Roti - ₹60\n\n1043.Steamed Basmati Rice - ₹100\n\n1044.Jeera Rice - "
         "₹120\n\n1045.Kashmiri Naan - ₹80\n\n1046.Peshawari Naan - ₹90\n\n1047.Veg "
         "Pulao - ₹150\n\n1048.Chicken Biryani - ₹200\n\n1049.Keema Naan - "
         "₹100\n\n1050.Lemon Rice - ₹130\n\n");
}
void Accompanies() {

  printf("\t\t\t\t\t\tF.Accompaniments\n\n\n\n1051.Raita - ₹50\n\n1052.Mango Chutney "
         "- ₹40\n\n1053.Mixed Pickle - ₹30\n\n1054.Papad - ₹20\n\n1055.Onion Salad - "
         "₹25\n\n1056.Mint Chutney - ₹35\n\n1057.Tamarind Chutney - ₹40\n\n1058.Green "
         "Chili Pickle - ₹30\n\n1059.Cucumber Raita - ₹45\n\n1060.Tomato Onion "
         "Chutney - ₹35\n\n");
}
void veg_side() {

  printf("\t\t\t\t\t\tG.Vegetarian Side Dishes\n\n\n\n1061.Bhindi Fry - "
         "₹180\n\n1062.Baingan Bhaja - ₹150\n\n1063.Tawa Masala Mushrooms - "
         "₹200\n\n1064.Rajma - ₹160\n\n1065.Aloo Methi - ₹140\n\n1066.Cabbage Sabzi - "
         "₹130\n\n1067.Mix Veg Dry - ₹170\n\n1068.Karela Masala - ₹160\n\n1069.Dum Aloo "
         "- ₹190\n\n1070.Chole - ₹180\n\n");
}
void nonveg_side() {

  printf("\t\t\t\t\t\tH.Non-Vegetarian Side Dishes\n\n\n\n1071.Chicken Korma - "
         "₹250\n\n1072.Keema Matar - ₹280\n\n1073.Egg Curry - ₹220\n\n1074.Lamb Bhuna - "
         "₹300\n\n1075.Prawn Masala - ₹320\n\n1076.Chicken Saag - ₹260\n\n1077.Fish "
         "Kofta Curry - ₹300\n\n1078.Chicken Vindaloo - ₹270\n\n1079.Mutton Do Pyaza "
         "- ₹320\n\n1080.Anda Curry - ₹230\n\n");
}
void desserts() {

  printf("\t\t\t\t\t\tI.Desserts\n\n\n\n1081.Gulab Jamun - ₹80\n\n1082.Rasgulla - "
         "₹70\n\n1083.Kheer - ₹90\n\n1084.Jalebi - ₹100\n\n1085.Rasmalai - ₹120\n\n1086.Gajar "
         "Halwa - ₹110\n\n1087.Kulfi - ₹80\n\n1088.Shahi Tukda - ₹100\n\n1089.Malpua - "
         "₹90\n\n1090.Phirni - ₹95\n\n");
}
void bewerages() {

  printf("\t\t\t\t\t\tJ.Beverages\n\n\n\n1091.Masala Chai - ₹40\n\n1092.Lassi - "
         "₹60\n\n1093.Mango Lassi - ₹70\n\n1094.Fresh Lime Soda - ₹50\n\n1095.Rose "
         "Sherbet - ₹45\n\n1096.Mint Cooler - ₹55\n\n1097.Buttermilk - "
         "₹40\n\n1098.Thandai - ₹65\n\n1099.Badam Milk - ₹75\n\n1100.Coffee - ₹50\n\n");
}
void page() {

  printf("\n");
  printf("\n");
  printf("\n");
  printf("\n");
  printf("**********************************************************************"
         "**********************************");
  printf("\n");
  printf("\n");
  printf("\n");
  printf("\n");
}
void cat(){
  printf("What category would you like to order?\n\nA.Vegetarian "
         "Starters\n\nB.Non-Vegetarian Starters\n\nC.Vegetarian Main "
         "Course\n\nD.Non-Vegetarian Main Course\n\nE.Bread and "
         "Rice\n\nF.Accompaniments\n\nG.Vegetarian Side "
         "Dishes\n\nH.Non-Vegetarian Side Dishes\n\nI.Desserts\n\nJ.Beverages\n\nEnter the category\n\n");
}
int switch1(char a){
  int ch1,ch2,ch3,ch4,ch5,ch6,ch7,ch8,ch9,ch10;
  int qty;
  int j,i=0;
  switch (a) {
    case 'A':
    case 'a':
      veg_start();
      x1:
      printf("Enter the Item no:\n");
      scanf("%d", &ch1);
      do{
      switch(ch1){
        case 1001:
        printf("Enter quantity:\n");
        scanf("%d",&qty);
        printf("You have ordered %d plates of Paneer Tikka \n",qty);
        return 1001;
        break;
        case 1002:
         printf("Enter quantity:\n");
        scanf("%d",&qty);
        printf("You have ordered %d plates of Vegetable Samosas\n",qty);
        return 1002;
        break;
        case 1003:
         printf("Enter quantity:\n");
        scanf("%d",&qty);
        printf("You have ordered %d plates of Aloo Tikki\n",qty);
   return 1003;
        break;

        case 1004:
         printf("Enter quantity:\n");
        scanf("%d",&qty);
        printf("You have ordered Gobi "
         "Manchurian \n");
        return 1004;
        break;

        case 1005:
         printf("Enter quantity:\n");
        scanf("%d",&qty);
        printf("You have ordered %d plates of Palak Pakora\n",qty);
        return 1005;
        break;

        case 1006:
         printf("Enter quantity:\n");
        scanf("%d",&qty);
        printf("You have ordered %d plates of Hara Bhara Kebab\n",qty);
        return 1006;
        break;

        case 1007:
         printf("Enter quantity:\n");
        scanf("%d",&qty);
        printf("You have ordered %d plates of Onion Bhaji\n",qty);
       return 1007;
        break;

        case 1008:
         printf("Enter quantity:\n");
        scanf("%d",&qty);
        printf("You have ordered %d plates of Dahi Puri  \n",qty);
    return 1008;
        break;

        case 1009:
         printf("Enter quantity:\n");
        scanf("%d",&qty);
        printf("You have ordered %d plates of Methi Malai\n",qty);
       return 1009;
        break;

        case 1010:
         printf("Enter quantity:\n");
        scanf("%d",&qty);
        printf("You have ordered %d plates of Mushroom 65\n",qty);
   return 1010;
        break;
        default:
        goto x1;
      }}while((ch1>='a')&&(ch1<='j')||(ch1>='A')&&(ch1<='J'));      
      break;
  case 'B':
  case 'b':
    nonveg_start();
    x2:
    printf("Enter the Item no:\n");
    scanf("%d", &ch2);
    do{
    switch(ch2){
      case 1011:
       printf("Enter quantity:\n");
      scanf("%d",&qty);
      printf("You have ordered %d plates of Chicken Tikka \n",qty);
      return 1011;
      break;
      case 1012:
       printf("Enter quantity:\n");
      scanf("%d",&qty);
      printf("You have ordered %d plates of Seekh Kebabs\n",qty);
      return 1012;


      break;
      case 1013:
       printf("Enter quantity:\n");
      scanf("%d",&qty);
      printf("You have ordered %d plates of Fish Amritsari\n",qty);
      return 1013;
      break;

      case 1014:
       printf("Enter quantity:\n");
      scanf("%d",&qty);
      printf("You have ordered %d plates ofMutton "
      "Kebabs \n",qty);
      return 1014;
      break;

      case 1015:
       printf("Enter quantity:\n");
      scanf("%d",&qty);
      printf("You have ordered %d plates of Chicken Pakora\n",qty);
      return 1015;
      break;

      case 1016: 
      
      printf("Enter quantity:\n");
      scanf("%d",&qty);
      printf("You have ordered %d plates of Tandoori Prawns\n",qty);
      return 1016;
      break;

      case 1017: printf("Enter quantity:\n");
      scanf("%d",&qty);
      printf("You have ordered %d plates of Crab Masala\n",qty);
      return 1017;
      break;

      case 1018: 
      
      printf("Enter quantity:\n");
      scanf("%d",&qty);
      printf("You have ordered %d plates of Chicken Malai Kabab  \n",qty);
      return 1018;
      break;

      case 1019:
       printf("Enter quantity:\n");

      scanf("%d",&qty);
      printf("You have ordered %d plates of Lamb Chops\n",qty);
  return 1019;
      break;
  return 1019;
      case 1020:
       printf("Enter quantity:\n");
       
       scanf("%d",&qty);
      printf("You have ordered %d plates of Tandoori Salmon\n",qty);
      return 1020;
      break;
      default:
        goto x2;
    }}while((ch2>='a')&&(ch2<='j')||(ch2>='A')&&(ch2<='J'));
    break;
  case 'C':
  case 'c':
    veg_main();
    x3:
    printf("Enter the Item no:\n");
    scanf("%d", &ch3);
    do{
    switch(ch3){
      case 1021:
       printf("Enter quantity:\n");
      scanf("%d",&qty);

      printf("You have ordered %d plates of Paneer Butter Masala \n",qty);
      return 1021;
      break;
      case 1022:
       printf("Enter quantity:\n");
       
       scanf("%d",&qty);
      printf("You have ordered %d plates of Vegetable Biryani\n",qty);
     return 1022;
      break;
      case 1023:
       printf("Enter quantity:\n");
       
       scanf("%d",&qty);
      printf("You have ordered %d plates of Aloo Gobi\n",qty);
return 1023;
      break;

      case 1024:
       printf("Enter quantity:\n");
       
       scanf("%d",&qty);
      printf("You have ordered %d plates of Palak "
      "Paneer \n",qty);
     return 1024;
      break;

      case 1025:
       printf("Enter quantity:\n");
       
       scanf("%d",&qty);
      printf("You have ordered %d plates of Baingan Bharta\n",qty);
      return 1025;
      break;

      case 1026:
       printf("Enter quantity:\n");
      
       scanf("%d",&qty);
      printf("You have ordered %d plates of Dal Makhani\n",qty);
     return 1026;
      break;


      case 1027:
       printf("Enter quantity:\n");
       
       scanf("%d",&qty);
      
      printf("You have ordered %d plates of Chana Masala\n",qty);
     return 1027;
      break;

      case 1028:
       printf("Enter quantity:\n");
       
       scanf("%d",&qty);
      
      printf("You have ordered %d plates of Shahi Paneer  \n",qty);
      return 1028;
      break;

      case 1029:
       printf("Enter quantity:\n");
       
       scanf("%d",&qty);
      
      printf("You have ordered %d plates of Malai "
      "Kofta\n",qty);
     return 1029;
      break;

      case 1030:
       printf("Enter quantity:\n");
       
       scanf("%d",&qty);
      
      
      printf("You have ordered %d plates of Bhindi Masala\n",qty);
      return 1030;
      break;
      default:
        goto x3;
    }}while((ch3>='a')&&(ch3<='j')||(ch3>='A')&&(ch3<='J'));
    break;
  case 'D':
  case 'd':
    nonveg_main();
    x4:
    printf("Enter the Item no:\n");
    scanf("%d", &ch4);
    do{
    switch(ch4){
      case 1031:
       printf("Enter quantity:\n");
       
       scanf("%d",&qty);
      
      printf("You have ordered %d plates of Chicken Curry \n",qty);
      return 1031;
      break;
      case 1032:
       printf("Enter quantity:\n");
       
       scanf("%d",&qty);
      
      printf("You have ordered %d plates of Butter Chicken\n",qty);
     return 1032;
      break;
      case 1033:
       printf("Enter quantity:\n");
       
       scanf("%d",&qty);
      
      printf("You have ordered %d plates of Lamb Rogan Josh\n",qty);
     return 1033;
      break;

      case 1034:
       printf("Enter quantity:\n");
       
       scanf("%d",&qty);
      
      
      printf("You have ordered %d plates of Fish "
         "Curry \n",qty);
     return 1034;
      break;

      case 1035:
       printf("Enter quantity:\n");
       
       scanf("%d",&qty);
      
      
      printf("You have ordered %d plates of Chicken Biryani\n",qty);
    return 1035;
      break;

      case 1036:
       printf("Enter quantity:\n");
       
       scanf("%d",&qty);
      
      printf("You have ordered %d plates of Mutton Korma\n",qty);
      return 1036;
      break;

      case 1037:
       printf("Enter quantity:\n");
       
       scanf("%d",&qty);
      
      printf("You have ordered %d plates of Prawn Masala\n",qty);
     return 1037;
      break;

      case 1038:
       printf("Enter quantity:\n");
       
       scanf("%d",&qty);
      
      printf("You have ordered %d plates of Chicken Saagwala  \n",qty);
     return 1038;
      break;

      case 1039:
       printf("Enter quantity:\n");
       
       scanf("%d",&qty);
        
      printf("You have ordered %d plates of Goan "
         "Fish Curry\n",qty);
     return 1039;
      break;

      case 1040:
       printf("Enter quantity:\n");
       
       scanf("%d",&qty);
      
      printf("You have ordered %d plates of Hyderabadi Biryani\n",qty);
     return 1040;
      break;
      default:
        goto x4;
    }}while((ch4>='a')&&(ch4<='j')||(ch4>='A')&&(ch4<='J'));
    break;
  case 'E':
  case 'e':
    bread_rice();
    x5:
    printf("Enter the choice:\n");
    scanf("%d", &ch5);
    do{
    switch(ch5){
      case 1041:
       printf("Enter quantity:\n");
       
       scanf("%d",&qty);
      
      printf("You have ordered %d plates of Garlic Naan \n",qty);
      return 1041;
      break;
      case 1042:
       printf("Enter quantity:\n");
      
       scanf("%d",&qty);
      
      printf("You have ordered %d plates of Butter "
      "Roti\n",qty);
      return 1042;
      break;
      case 1043:
       printf("Enter quantity:\n");
       
       scanf("%d",&qty);
      
      printf("You have ordered %d plates of Steamed Basmati Rice\n",qty);
     return 1043;
      break;

      case 1044:
       printf("Enter quantity:\n");
       
       scanf("%d",&qty);
      
      printf("You have ordered %d plates of Jeera Rice \n",qty);
   return 1044;
      break;

      case 1045:
       printf("Enter quantity:\n");
       
       scanf("%d",&qty);
      
      printf("You have ordered %d plates of Kashmiri Naan\n",qty);
     return 1045;
      break;

      case 1046:
       printf("Enter quantity:\n");
       
       scanf("%d",&qty);
      
      printf("You have ordered %d plates of Peshawari Naan\n",qty);
      return 1046;
      break;

      case 1047:
       printf("Enter quantity:\n");
       
       scanf("%d",&qty);

      
      printf("You have ordered Veg %d plates of"
      "Pulao\n",qty);
      return 1047;
      break;

      case 1048:
       printf("Enter quantity:\n");
       
       scanf("%d",&qty);
      printf("You have ordered %d plates of Chicken Biryani  \n",qty);
     return 1048;
      break;

      case 1049:
       printf("Enter quantity:\n");
       scanf("%d",&qty);
      
      printf("You have ordered %d plates of Keema Naan\n",qty);  
        return 1049;
      break;

      case 1050:
       printf("Enter quantity:\n");
       
       scanf("%d",&qty);
      printf("You have ordered %d plates of Lemon Rice \n",qty);
      return 1050;
      break;
      default:
        goto x5;
    }}while((ch5>='a')&&(ch5<='j')||(ch5>='A')&&(ch5<='J'));
    break;
  case 'F':
  case 'f':
    Accompanies();
    x6:
    printf("Enter the Item no:\n");
    scanf("%d", &ch6);
    do{
    switch(ch6){
      case 1051:
       printf("Enter quantity:\n");
       
       scanf("%d",&qty);
      
      printf("You have ordered %d cups of Raita\n",qty);
      return 1051;
      break;
      case 1052:
       printf("Enter quantity:\n");
       
       
       scanf("%d",&qty);
      printf("You have ordered %d cups of Mango "
         "Chutney\n",qty);
         return 1052;
      break;
      case 1053:
       printf("Enter quantity:\n");scanf("%d",&qty);


      printf("You have ordered %d cups of Mixed Pickle \n",qty);
      return 1053;
       break;

      case 1054:
       printf("Enter quantity:\n");
       
       scanf("%d",&qty);
      
      printf("You have ordered %d pieces of Papad\n",qty);
     return 1054;
      break;

      case 1055:
       printf("Enter quantity:\n");
       
       scanf("%d",&qty);
      
      printf("You have ordered %d plates of Onion "
         "Salad \n",qty);
      return 1055;
      break;

      case 1056:
       printf("Enter quantity:\n");
       
       scanf("%d",&qty);
      
      printf("You have ordered %d cups of Mint Chutney \n",qty);
      return 1056;
      break;

      case 1057:
       printf("Enter quantity:\n");
       
       scanf("%d",&qty);
      
      printf("You have ordered %d cups of Tamarind Chutney \n",qty);
     return 1057;
      break;

      case 1058:
       printf("Enter quantity:\n");scanf("%d",&qty);


      
      printf("You have ordered %d cups of Green "
         "Chili Pickle  \n",qty);
     return 1058;
      break;

      case 1059:
       printf("Enter quantity:\n");
       
       scanf("%d",&qty);
      printf("You have ordered %d cups of Cucumber Raita\n",qty);
      return 1059;
      break;

      case 1060:
       printf("Enter quantity:\n");scanf("%d",&qty);


      
      printf("You have ordered %d cups of Tomato Onion "
         "Chutney\n",qty);
      return 1060;
      break;
      default:
        goto x6;
    }}while((ch6>='a')&&(ch6<='j')||(ch6>='A')&&(ch6<='J'));
    break;
  case 'G':
  case 'g':
    veg_side();
    x7:
    printf("Enter the Item no:\n");
    scanf("%d", &ch7);
    do{
      switch(ch7){
      case 1061:
       printf("Enter quantity:\n");scanf("%d",&qty);


      
      printf("You have ordered %d plates of Bhindi Fry \n",qty);
     return 1061;
      break;
      case 1062:
       printf("Enter quantity:\n");
       
       
       scanf("%d",&qty);
      
      printf("You have ordered %d plates of Baingan Bhaja\n",qty);
    return 1062;
      break;
      case 1063:
       printf("Enter quantity:\n");
       
       scanf("%d",&qty);
      
      printf("You have ordered %d plates of Tawa Masala Mushrooms\n",qty);
     return 1063;
      break;

      case 1064:
       printf("Enter quantity:\n");
       
       scanf("%d",&qty);
      
      printf("You have ordered %d plates of Rajma \n",qty);
      return 1064;
      break;

      case 1065:
       printf("Enter quantity:\n");
       
       scanf("%d",&qty);
      
      printf("You have ordered %d plates of Aloo Methi\n",qty);
     return 1065;
      break;

      case 1066:
       printf("Enter quantity:\n");
       
       scanf("%d",&qty);
      
      printf("You have ordered %d plates of Cabbage "
         "Sabzi\n",qty);
     return 1066;
      break;

      case 1067:
       printf("Enter quantity:\n");scanf("%d",&qty);


      
      printf("You have ordered %d plates of Mix Veg Dry\n",qty);
     return 1067;
      break;

      case 1068:
       printf("Enter quantity:\n");
       
       scanf("%d",&qty);
      
      printf("You have ordered %d plates of Karela Masala \n",qty);
     return 1068;
      break;

      case 1069:
       printf("Enter quantity:\n");
       
       scanf("%d",&qty);
      
      printf("You have ordered %d plates of Dum Aloo \n",qty);
    return 1069;
      break;

      case 1070:
       printf("Enter quantity:\n");scanf("%d",&qty);


      
      printf("You have ordered %d plates of Chole\n",qty);
     return 1070;
      break;
      default:
        goto x7;
    }}while((ch7>='a')&&(ch7<='j')||(ch7>='A')&&(ch7<='J'));
    break;
  case 'H':
  case 'h':
    nonveg_side();
    x8:
    printf("Enter the Item no:\n");
    scanf("%d", &ch8);
    do{
      switch(ch8){
      case 1071:
       printf("Enter quantity:\n");
       
       scanf("%d",&qty);
      
      printf("You have ordered %d plates of Chicken Korma \n",qty);
      return 1071;
      break;
      case 1072:
       printf("Enter quantity:\n");scanf("%d",&qty);

      
      printf("You have ordered %d plates of Keema Matar\n",qty);
     return 1072;
      break;
      case 1073:
       printf("Enter quantity:\n");
       scanf("%d",&qty);


      
      printf("You have ordered %d plates of Egg Curry \n",qty);
      return 1073;
      break;

      case 1074:
       printf("Enter quantity:\n");
       
       scanf("%d",&qty);
      
      printf("You have ordered %d plates of Lamb Bhuna \n",qty);
     return 1074;
      break;

      case 1075:
       printf("Enter quantity:\n");
       
       scanf("%d",&qty);
      
      printf("You have ordered %d plates of Prawn Masala\n",qty);
     return 1075;
      break;

      case 1076:
       printf("Enter quantity:\n");
       
       scanf("%d",&qty);
      
      printf("You have ordered %d plates of Chicken Saag\n",qty);
     return 1076;
      break;

      case 1077:
       printf("Enter quantity:\n");
       scanf("%d",&qty);
      
      printf("You have ordered %d plates of Fish "
         "Kofta Curry\n",qty);
     return 1077;
      break;

      case 1078:
       printf("Enter quantity:\n");scanf("%d",&qty);


      
      printf("You have ordered %d plates of Chicken Vindaloo  \n",qty);
      return 1078;
      break;

      case 1079:
       printf("Enter quantity:\n");
       scanf("%d",&qty);
      
      printf("You have ordered %d plates of Mutton Do "
         "Pyaza\n",qty);
    return 1079;
      break;

      case 1080:
       printf("Enter quantity:\n");
       
       scanf("%d",&qty);
      
      printf("You have ordered %d plates of Anda Curry\n",qty);
    return 1080;
      break;
      default:
        goto x8;
    }}while((ch8>='a')&&(ch8<='j')||(ch8>='A')&&(ch8<='J'));
    break;
  case 'I':
  case 'i':
    desserts();
    x9:
    printf("Enter the Item no:\n");
    scanf("%d", &ch9);
    do{switch(ch9){
      case 1081:
       printf("Enter quantity:\n");
       
       scanf("%d",&qty);
      
      printf("You have ordered %d cups of Gulab Jamun \n",qty);
     return 1081;
      break;
      case 1082:
       printf("Enter quantity:\n");
       
       scanf("%d",&qty);
      
      printf("You have ordered %d cups of Rasgulla \n",qty);
      return 1082;
      break;
      case 1083:
       printf("Enter quantity:\n");
       
       scanf("%d",&qty);
      
      printf("You have ordered %d cups of Kheer\n",qty);
     return 1083;
      break;

      case 1084:
       printf("Enter quantity:\n");
       
       scanf("%d",&qty);
      
      printf("You have ordered %d cups of Jalebi \n",qty);
     return 1084;
      break;

      case 1085:
       printf("Enter quantity:\n");
       
       scanf("%d",&qty);
      
      printf("You have ordered %d cups of Rasmalai\n",qty);
     return 1085;
      break;

      case 1086:
       printf("Enter quantity:\n");
       
       scanf("%d",&qty);
      
      printf("You have ordered %d cups of Gajar "
      "Halwa\n",qty);
     return 1086;
      break;

      case 1087:
       printf("Enter quantity:\n");
       
       scanf("%d",&qty);
      
      printf("You have ordered %d pieces of Kulfi\n",qty);
     return 1087;
      break;

      case 1088:
       printf("Enter quantity:\n");
       
       scanf("%d",&qty);
      
      printf("You have ordered %d cups of Shahi Tukda  \n",qty);
     return 1088;
      break;

      case 1089:
       printf("Enter quantity:\n");
       
       scanf("%d",&qty);
      
      printf("You have ordered %d cups of Malpua\n",qty);
     return 1089;
      break;

      case 1090:
       printf("Enter quantity:\n");
       
       scanf("%d",&qty);
      
      printf("You have ordered %d cups of Phirni\n",qty);
     return 1090;
      break;
      default:
        goto x9;
    }}while((ch9>='a')&&(ch9<='j')||(ch9>='A')&&(ch9<='J'));
    break;
  case 'J':
  case 'j':
    bewerages();
    x10:
    printf("Enter the Item no:\n");
    scanf("%d", &ch10);
    do{switch(ch10){
      case 1091:
       printf("Enter quantity:\n");
       
       scanf("%d",&qty);
      
      printf("You have ordered %d cups of Masala Chai \n",qty);
     return 1091;
      break;
      case 1092:
       printf("Enter quantity:\n");
       
       scanf("%d",&qty);
      
      printf("You have ordered %d glasses of Lassi\n",qty);
     return 1092;
      break;
      case 1093:
       printf("Enter quantity:\n");
       
       scanf("%d",&qty);
      
      printf("You have ordered %d glasses of Mango Lassi\n",qty);
      return 1093;
      break;

      case 1094:
       printf("Enter quantity:\n");
       
       scanf("%d",&qty);
      
      printf("You have ordered %d glasses of Fresh Lime Soda  \n",qty);
      return 1094;
      break;

      case 1095:
       printf("Enter quantity:\n");
       
       scanf("%d",&qty);
      
      printf("You have ordered %d glasses of Rose "
      "Sherbet\n",qty);
     return 1095;
      break;

      case 1096:
       printf("Enter quantity:\n");
       
       scanf("%d",&qty);
      
      printf("You have ordered %d glasses of Mint Cooler\n",qty);
     return 1096;
      break;

      case 1097:
       printf("Enter quantity:\n");
       
       scanf("%d",&qty);
     
      printf("You have ordered %d glasses of Buttermilk\n",qty);
     return 1097;
      break;

      case 1098:
       printf("Enter quantity:\n");scanf("%d",&qty);



      printf("You have ordered %d glasses of Thandai  \n",qty);
      return 1098;
      break;

      case 1099:
       printf("Enter quantity:\n");
       
       scanf("%d",&qty);
      
      printf("You have ordered %d glasses of Badam Milk\n",qty);
     return 1099;
      break;

      case 1100:
       printf("Enter quantity:\n");
       
       scanf("%d",&qty);
      
      printf("You have ordered %d glasses of Coffee\n",qty);
      return 1100;
      break;
      default:
        goto x10;
    }}while((ch10>='a')&&(ch10<='j')||(ch10>='A')&&(ch10<='J'));
    break;
  }
}
void generateQRPattern() {
  page();
    printf("\tGENERATING QR PLEASE WAIT....!!!\n\n");
    printf("\n");
    printf("\t      ______________\n");
    printf("\t      |############|\n");
    printf("\t      |#          #|\n");
    printf("\t      |#  ######  #|\n");
    printf("\t      |#  #    #  #|\n");
    printf("\t      |#  ######  #|\n");
    printf("\t      |#          #|\n");
    printf("\t      |############|\n");
    printf("\t      ``````````````\n\n\n");
    printf("This is your QR code, please collect it and go to cashier.\n\n\n");
  page();
}