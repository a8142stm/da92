#include "gtk.h"
/* XPM */
static const char *const xpm_icon_0[] = {
/* columns rows colors chars-per-pixel */
"96 96 43 1 ",
"  c #0000FF",
". c #0B0BFC",
"X c #1313FB",
"o c #1B1BF9",
"O c #2525F7",
"+ c #2B2BF6",
"@ c #2121F8",
"# c #3434F4",
"$ c #3B3BF3",
"% c #4D4DEF",
"& c #5353EE",
"* c #5D5DEC",
"= c #4444F1",
"- c #4949F0",
"; c #6464EB",
": c #6A6AEA",
"> c #7575E7",
", c #7D7DE6",
"< c #7272E8",
"1 c #ACACAC",
"2 c #B3B3B3",
"3 c #BBBBBB",
"4 c #A4A4DE",
"5 c #ABABDD",
"6 c #B4B4DB",
"7 c #BBBBDA",
"8 c #8484E4",
"9 c #8A8AE3",
"0 c #9494E1",
"q c #9A9AE0",
"w c #C6C6C6",
"e c #CACACA",
"r c #C6C6D7",
"t c #CCCCD6",
"y c #C2C2D8",
"u c #D5D5D5",
"i c #DCDCD3",
"p c #D4D4D8",
"a c #D8D8D8",
"s c #E3E3D1",
"d c #E2E2E2",
"f c gray94",
"g c #FFFFFF",
/* pixels */
"uuuuuuuuuuuuuauuuuuuuuuuuauuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuaauuuuuuuuuuuuuauuuuuuuuuuuuuuuuuuuuuua",
"uuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuiuuuuuuuuuuuuuuuuuuuuuuuuuuiuuuuuuuuuuuuauuuuuuuuauuuuuauu",
"uuuuuuuuuuuuuuuuuuuuuuuuuuuuuuupuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuauuuuuuuuuuuuuuauuuuuuu",
"uuuuuuuuauuuuauuuuuuauuuuauuuuupuauuuuuuuuuuauauuuuuuuuuuuuuuuuiuuuuuuuuuuuuuuuuuuuauuuuuuuuuuuu",
"uuuugggggggggggggggggggggggggggggggggggggggggggwwauuuuuuuuuuuuuuuuauuuuuuuuuuuuuuuuuuuuuuuuuuuuu",
"uuuudsdddddssddddadddddidsddsddsddddddsddaddddi1wauuuuuuuuuuuuuuuuuuuuuuuuuuuuuuauuuuiuuuuuuuuuu",
"uuuupueuuteuuuutuuuuueuupuueputuueuetttpuueuuue1wauuuuuuuuauuuuuuuuuuuuauuuuuuuuuuuuuuuuuuuuuuuu",
"uuuuppuuuuuuuuuuuuuuuuuuppuuppuupassssupuuuuuuu1wauuuuiuauuuuuuuuuuuauuuuuauiuuuuuuuuuuuuuuuuiau",
"uuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuistq9907siuuuuuu1wauuuuuuuuuuuuuuuiuuuuuuuuuuuuuauuuuuuuuuuauuuuu",
"iuuuuuuuuuuuuaauuuuuuuuuuuuuuuit:@    o*yiuuuuu1wauuuuuuuuuuuuiuuuuuuuuuuuuuuuuuuuauuauuuuuuuuuu",
"uuuuuuuuuuuuewwwuuuuuuuuuuuuti7#        @5iuuue1wauuuuuuuuuauuuuuuuuuuuuuauuuuuuuuuuuuuuuuuuuuuu",
"uuuuuuuuuuu211112wuiuuuuuuuuut+          X6iuuu1wauuuuuuuuuuuuuuuuuuuuuuuuauuuuuuuuuuuuuuuuuauuu",
"uuuuuuuuue21111211wauuuuuuuus;            =iuuu1wauuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuiuuuuuuu",
"uuuuuuuui3111111111euuuuuuuiyX             5iuu1wauuuiuuuuuuuuuuuuuauuuuuuuuuuuuiuuuuuuauuuuuuuu",
"uuuuuuuue21211111113uuuuuuts9              ;stu1wuuuuuuuauuuuuuuuuauuuuuuuuuuuuuuuuuuuuuuuuuuuuu",
"uuuuuuuuw11111211112uuuuuuus:              =suu1wauuuuuuuuuauuuuuuuuuuuuuuuiuuuuuuuuuuuuuuuuuuau",
"uuuauuuaw11111112112uuuuuuts;              =spu1wauuuuuuauuuuuuuuuuuuuuiuuuuuuiuuuuuiuuuuiuuuuuu",
"auuuuuuaw11112111113uuuuuuus>              &seu1eauuuuuuuuuauuuuuuuuauuuuuuuuuuuuuuuuuuuuuuuuuuu",
"uuuuuuuuu2111111111wuuuuuuui4.             9iuu1wauuuuuuuuuuuuiuuauuuuuuuuuuuuuuuuuuuuuuuuuuauuu",
"uuuuuuuuaw111112113uuuuuuuuui#            otuuu1wuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuauuuuuuuuuuuuuuua",
"uuuuuuuuuuw1111112uiuuuuuuuui4.           9suuu1wauuuuuuuuuuuuuuuauuuuuuuuuuuuuuuuuuuuuuuuuuuuuu",
"uuiuuuuuuuue3223wuueuuuuuuuuui8          :iuuue1wauuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuauuuuauuuuuuuuu",
"uuuuuuuuuuuuuuuaauuuuuuuuuuuuui0@      X8uuuuuu1wauuuiuuuauuuuuuuuuuuuiuuuauauuuauuuuuuauuuuuuuu",
"uuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuit9=++$,7suuuuuu1wauuuuuuuuauuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuauu",
"uuuuuuuuuuuuuuuuuuuuuauuuuuuuuuuuiiiiiiiuuuuuuu1wauuuuuuuuuuuuuiauuuuuuuuuuuuuuuuuuuuuuuuiuuuuuu",
"uuuuuuuuauuuuuuuuuuuuuuuuuiuupuupuuuuuuuuuuuuue1wuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuiuuuuuuiuuuuuuuuu",
"uuuuuuuuuauuuauuuuuuuuuuuuuuiuuuuuuuuuuuuuuuuuu1wauuuuuiuuuuuuuuuuuuuuuuauuuuuuuuuuuuuuuuuuuuuuu",
"uuuuauuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuu1wauuuuuuuuauuuuuuuuuuauuuuuuuuuuuuuauuuuuuuuuuuu",
"auuuuuuuuuuuuuuuuiuuuuuuuuuauuuuuuuuuuuuuuuuuuu1wauuuuuuauuuuuuuuuuuuuuauuuuuuuuuuuuuuuuuuuauuuu",
"uuuiuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuu1eauuuuuuuuuuuuuuuuuuuuuuuuuuuauuauuuuuuuuuuuuuau",
"uuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuu1wuuuauuuuuuuauuuuuuiuuuuuuuauuuuuuuuuuuuuuuuuuuu",
"uuuuuuuuuuuuiuauuuuuuuuuuuuuuuuuuuaauuuuuuuuuuu1wuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuauuuuuauuuuu",
"uuuuuuuuuuuuw33wuuuuuuuuuuuuuuuuuuw3wweuuuuuuuu1wuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuu",
"uuuiuuuuuae2111113uuuuuuuuuuuuuuw211112wuuuuuuu1wuuuauuuuuuuiuuuuuauuuuuuuuauuuuiuuuuuuuuuuiuuuu",
"uuuuuuuuue21121111wuuuuuuuuuuuuw11111111wauuuuu1wuuuuuuuuuuuuuuuuuuuuuuuuuuuauuuuuuuuuuuuuuuuuuu",
"uuuuuuuuu3111111111euuuuuuuuuuu1111211111euuuuu1wuuuuuuuauuuuuuuuuuuuuauuuuuuuuuuuuuuuauuuuuuuuu",
"uuuuuuuue11111111113auuuuuuuuuw11111112113auuue1wauuuuuuuuauuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuu",
"uuuuuuuaw11111211112uuuuiuuuuiw11211111113auuuu1wauuuuauuuuuuuuuuuuuuauuuiuuuuuuuuuauuauuuuuuuuu",
"uauuuuuaw12112111112uuuuuuuuuu311111111112uuuuu1wauuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuiuuuuuuu",
"uuuuuuuaw11111121113uuuuuuuuuuw12121112113iuuuu1wiuuuuuuuuuuuuuaiuuuuuuuuuuuuuuauuuuuuuuuuuuuuuu",
"uuuuuuuuu2111111111wauuuuuuuuuu2111111111eauuuu1wuuuuuuuuuuiuuuuuuuuuuuuuuuuuuuuiuuuuuuuuuuuuuuu",
"uuuuuuuuue211111113uiuuuuuuuuuuw11111111wuuueuu1wiuuuuuuuauuuuuuuuuuuuuauuuuuuuuuuuuuuauuuuuuuuu",
"uuuuuuuuuuw1111113uuuuuuauuuuuuuw111111wuuuuuuu1wauuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuauuuu",
"uuiuuuuuuuuuw323eauuuuuuuuuuuuuuuew333euuuuuuuu1wauuuuuuuuuuuuuuuiuuuuuuuuuuiuuuuuuuuuuuuuuuuuuu",
"uuuuuuuuuuuuauaauuuuuuuuuuuuuuuuuuaaaauuuuuuuuu1wuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuu",
"uauuuuuuiuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuiuuuu1eauuuuuuuuuuuuauuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuu",
"uuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuu1wpuuuutpuuututuuututuuuueuuutuupuuutpuutpuuuuuuu",
"uuuuuauuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuue2pdsddddddsdddddsdddddsdddddddddsddsdddsdddduuuuu",
"uuiuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuudggggggggggggggggggggggggggggggggggggggggggf1uuuu",
"uuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuauuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuaw1uuuu",
"uuuuuuuuuuuuutputuuuuuuuuuiuuuuuuuuttuuuuuuuuuuuuuuuuuututueuuuuuuuuuuuuuuuuuttuepuuuuuuuuw1uuuu",
"uuuuuuuuuuuisssssuuuuuuuuuuuuuuuussssssuuuuuuuuuuuuuuuusssssiupuuuuuuuuuuuueusssssuuuuuuuuw1uuuu",
"uuuuuuuutii6;==&9tsuuuuuuuuuuuuiu4*==*0tiuuuuuuuuuuuuitq*==*4uituuuuuuuuuuuit9&==;5iiuuuuaw1euuu",
"uuauuuuus7=      o8uuuuuuuuuuus5#      OqiuuuuuupuuusqO      #5suuuuuuuuuui9o      =7iuuuuw1uuuu",
"uuuuuupi4o         ;iuuuuuuuus0.        .>iuuuuuuuui>.        .0stuuuuuuui;         o4iuuaw1uuuu",
"uuuuuuurO           ,ituuuupi5.           qiuuuuuui0           .6ituuuuui8           @yiuaw1uuuu",
"uuuuuus;            X7iuuuuui=            +uuuuuuut+            =iuuuuuuyX            *suue1uuuu",
"uuuuuuyo             ,iuuuui5X             0iuuupiq             .5iuuuui,             oyuue1euuu",
"uuuuts0              $iuuuus>              &spuuus*              >suuuui$              0spw1uuuu",
"uuuuus9              Oipuups:              =seuuts-              ;stuuuiO              9spw1uuuu",
"uuuuts9              Oiuuuts:              =stuuus%              ;suuuui+              9sue1uuuu",
"uuuuusq              =iuuuus,              ;suuuui;              ,suuuui-              qiue1uuuu",
"uuuuuut+             9iuuuuu7X             4iuuuui4             .7iupuui9             Otuuw1uuuu",
"uauuupi<            @ruuuuuui&            #uuuuuuuu$            %iuuuuuat@            <iuuw1uuuu",
"uuuuuuup#           0stuuuuui7O          .5spuuuuui5X        . oyipuuuuui0           #uuuuw1uuuu",
"uuuuuuui7#        .8iuuuuuuuui5o    .   X0iuiuuuuuui0X        o5suuuuuuuui,.        +7iuuuw1uuuu",
"uuiuuuutit;X    .#4suuuuuuuuuusy%.    X=6iuuuuuuuuuti6=.    X%7ieuuuuuuuuui4#.    o;tiuuuuw1uuuu",
"uuuuuuuuuusr9:;>4ustuuuuuuuuuuuus78:;>6iieuuuuuuuuuuuii6>:;87siuuuuuuuuuuuuii4>;:9ysuuupuue1uuuu",
"uuiuuuuuuuuusssssuuuuuuuuuuuuuuuuussssituuuuuuuuuuuuuuuussssiuuuuuuauuuuuuuuusssssipuuuuuiw1uuuu",
"uuuuuuuuuuuuututtuuuuuuuuuuuuuuuuuututuuuuuuuuauuuuuuuuutuuuuuuuuuuuuuuuuuuuuuuteuuuuuuuuaw1euuu",
"uuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuw1uuuu",
"uuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuw1uuuu",
"uuuuuuuuuuuutuuutuuuuuuuuuuuuuuuupuutuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuiuuuuuuuuuuutuuuuuuuuuuw1uuuu",
"uuuuuuuuuuussiiisiuuuuuuuuuuuuuuiiiiiiisuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuusiiiiiutuuuuaw1uuuu",
"auuuuuuuuit0%OO#:6iuuuuuuuuuuuuir9=OO$>7iuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuui6<#OO%0tstuuuue1uuuu",
"uuuuuuuui4+      .:uuuuuuuuuuui0o      X,iuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuiu:.      +4iuuuue1uuuu",
"uuuuuuti0.         %uuuuuuuuui>          ;iuuuuuuiuuuuue3223euuuuuuuuuuuuu%         .0ipuuw1euuu",
"uuuuuui7X           :iuuuuuui4.           9iuuuuuuuuuu3111111wuuuuuuuuupi:           X7iuiw1uuuu",
"uuuuuui&            .6ituuuui#            Xtuuuuuuuuu311111111wauuuuuuui7.            %iuuw1uuuu",
"uuuaui7X             <iuuuui4.             9iuuuuuuue1111111111euuuuuuui:             o6ipw1uuuu",
"uuuuus0              #suuuus<              &suuuuuua31111111111wauuuuuui#              0spw1uuuu",
"uuuuts9              Oituuus;              =stuuuuua312121121113auuuuutiO              9spw1uuuu",
"uuuuus9              Ostuuts:              -suuuuuuu31111111111wauuuuuus+              9stw1uuuu",
"uuuuts4              %iuuuus9              ;iuuuuuuu31111111111wuuuuuuti%              4spe1uuuu",
"uuuuuuu+             0suuuuuyX             6iuuuuuuuu2111111112uuuuuuuus0             +tuuw1uuuu",
"uuuuuts,            +tuuuuuus;            =uuuuuuuuuue11121112eauuuuuuuup+            ,suaw1euuu",
"uuuauupi%          .5ituuuuuut#          o7iuuuuuuuuuue211113euuuuuuuuuui4.          =iuuuw1uuuu",
"uuuuuuuut%        Xqsuuuuuuuus7#        O5ipuuuuuuuuuuuiewweuuuuuuuuuuuuus0o        %tupuaw1uuuu",
"uuuuuuuuuu8+.   o%7iuuuuuuuuuuit:O    o;ripuuuuuuuuuuuuuaaauuuuuuuuuuuuuuui7%o    +>uiuuuuw1uuuu",
"uuuuuuuuuust49907siuuuuuuuuuuuuust4990ysuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuis70904usuuuuuuw1uuuu",
"uuuuuuuuuuuussssuuuuuuuuuuuuuuuuuussssutuuuuuuiuuauuuuuuuuuuuuuuuuuuuuuuuuupuussssuuuuuuuue1euuu",
"iuuuuuuuuuuptuutuuuuuuuuuuuuuuuuuutpuuuuuuuuuuuuuuuuuuuuuuuuuuuuiuuuuuuuuuuuuututtuuuuuuuie1uuuu",
"uuuuuuuuuuuuuuuuuuuuauuuuuuuuuuuuuuuauuuuuuuuuuuuauuuuuuuuuuuuuuuuuuuuauuuuuuuuuuuuuuuuuuuuuuuuu",
"auuuuuuuuuiuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuiuuuuuuuuuauuuuuuuuuuiuuuuuuuuuuuuuuuuuuuuuu",
"uuuuuuuuuuuauuuuuuuuuuuuuuiuuuuuiuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuu",
"uuuuauuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuauuuuuuuuuuuuuiuuuuuuuuiuuuuuuuuuuuiuuuuuuuuuuuuuuuu"
};

/* XPM */
static const char *const xpm_icon_1[] = {
/* columns rows colors chars-per-pixel */
"88 88 45 1 ",
"  c #0101FF",
". c #0B0BFC",
"X c #1414FA",
"o c #1C1CF9",
"O c #2525F7",
"+ c #2C2CF6",
"@ c #2121F8",
"# c #3434F4",
"$ c #3C3CF2",
"% c #4D4DEF",
"& c #5353EE",
"* c #5B5BEC",
"= c #4343F1",
"- c #4949F0",
"; c #6363EB",
": c #6C6CE9",
"> c #7676E7",
", c #7C7CE6",
"< c #7272E8",
"1 c #ACACAC",
"2 c #B3B3B3",
"3 c #BBBBBB",
"4 c #9E9EDF",
"5 c #A3A3DE",
"6 c #ACACDD",
"7 c #B3B3DB",
"8 c #BCBCD9",
"9 c #8484E4",
"0 c #8A8AE3",
"q c #9393E1",
"w c #9A9AE0",
"e c #C3C3C3",
"r c #CCCCCC",
"t c #C6C6D7",
"y c #CDCDD5",
"u c #C3C3D8",
"i c #D5D5D5",
"p c #DCDCD3",
"a c #D5D5D9",
"s c #D8D8D8",
"d c #E3E3D2",
"f c #E6E6E6",
"g c #ECECEC",
"h c #F1F1F1",
"j c #FAFAFA",
/* pixels */
"iiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiisiiiiiiisiiiiiiiiiiiiiiiiii",
"iiiiiiiiiiiiiiiiiiiiiiipiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiisiiiiiiiisiiiiiisiiisiiiiiiiiiii",
"iiiiiririiriiiiriririiriiiirriiriiriyiiiiriiiiiiiiiiiiiiiiiiiiiiipiiiiiiiiiiiiiiiiiiiiip",
"iiisffffffffdfffffffffffdffffffffffffffdfffiiiiiiiiiiisiiiiiiiiiiiiiiiiiiiiiiiiiiisiiiis",
"iiifjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjh2iiiiiiiiiiiiiiiiiiiiiiiiisiiisiipsiiiiiiiiii",
"iiiiiiiiiiriiiyiiiriiriiiiyiiiiririiiiiriie1riiiiiiiiiiisiiipsiisiiiiiiiiiiiiiiiiiiisiii",
"iiiiiiiiiiiiiiiiiiiiiiiiiiiiiiipppiiiiiiiir1iiiiiiisiipiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiii",
"iiiiiiiiiiiiiiiiiiiiiiiiiiiiipi877tpiiiiiir1iiiiiiiiiisiiiiiiisiiiiiiiiiiiiiiisiiisiiiii",
"iiiiiiiiiiiispsiiiiiiiiiiiiipq=.  o&7diiiir1iiiiiiiiiiiiiiiiiiiiiiisiiiiisiiisiiiiiiiiii",
"iiiiiiiiiiireersiiiiiiiiiiii*       .9piiir1iiiisiiisiisiiiiiiiiiiipiiiiiiiiiiiisiiisiii",
"siiiiiiiii211123iiiiiiiiiii*          4pisr1iiiiiiiiiiipiiisiiiiiiisiiiiiiiiiiiiiiiiiiii",
"iiiiiiiir21111112iiiiiiiid4           otiir1riiiiiiiiiiiiiiiiispiiiiiisiiiiiiiiiiiiiiiii",
"iiisiiii3111111113siiiiiii%            9pir1iiiiiiiiiiiiiiiiisiiiiiiiiiiiiipiiiiisiiiiii",
"iiiiiiii2111111112iiiiiiitX            -dir1iiiiiiiiiiiiiiiiiiiiiiiiiiiiiiissiiiiiisiiii",
"iiiiiisr1111111111iiiiiii8             #pir1iiiiiiiiiiiiiiisiiiiiiisiiiiiiiiiiiiiiipiiii",
"iiiiiiir1121111111riiiiipu.            #dar1iiiiiisiiisiiiiiiiiiiiiiiisiiiiiiiiiiiiiiisi",
"iiiiiiii2111111113iiiiiiiy+            *pir1iiiiiiiiiiiiiipsiiiiiiiiiiiiipsiiipiisiiiiii",
"iiiiiiise11111111ripiiiiid:            6pir1iiiiiiiiiiiiiiiiiiiisiiiiiiiiiiiiisiiiiiiiii",
"iiiiiiiiie111111eiiiiiiiiiuo          &iiir1rpiiiiiiiiiisiiiiiiiiiiiiiiiiiiiiiisiiiiiiii",
"siiiiiiiiir3223ririiiiiiiid5.        #tiiir1iiiiiisiiisiiiiiiisiiiiiiisiiiiiiiiiiiiispsi",
"ipiiiiiiiiiiiiiiiiiiiiiiiiip6+      &ypiisr1iiiiiiiiiiiiiiiiiiiiiiiiisiiisiiisiiiiiiiiii",
"iiiiiiiiiiiiiiiiiiiiiiiiiiirpi4*-=:6piiiiir1iiiiiiiisiiiiiiiiiiisiiiiiiiiiiiiiiiiiiiiiii",
"iiiiiiiiiiiiiiiiiiiiiiiiiiiiiipddddpiiiiisr1riiiiiiiiiiisiiiiiiiiiiiiisiiiiiiiiiiiisiiis",
"isiiiiiiiiiiiiiiiiiiiisiiiiiiiiiiyiiiiiiiir1iiiipsiiiiiiiiiiiisiiiiiiipiiiiiiiiiiiiiiiii",
"iiiiiiiiiiisiiiiiiiiiiiiiiiiiiiiiiiiiiiiiir1iiiiiiiiiiiiiiiiisiiiiiiisiiisiiisiiiiiiiiii",
"iiiiiiiiiiiiiiiiiiiiisiiiispiiiiiiiiiiiiisr1iiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiipi",
"siiiiiiiiiiiiiiipiiiiiiiiiiiiiiiiiiiiiiiiir1iiiisiiisiiiipsiiiiiiiisiiiiiiiiiiiiiiiiiisi",
"iiiiiiiiiiiipriisiiiiiiiiiiiiiiiiiiiiiiiiir1iiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiisiisiiiii",
"iiipsiiiiiiiiiiiiiiiiiiisiiiiiiispiiiiiiisr1iiiiiiiiiisiiiiiiisiiiiiisiiiiiiiiipiiiiiiii",
"iiiiiiiiiiireeriiiiiiiiiiiiiiiire3riiiiiiir1iiiiiiiiiiiiiiisiiiiiiiiipiiiiiiiiiiiiiisiii",
"iiiiiiiiir311113iiiiiiiiiiiiir211113iiiiise1iiiiiiipiiisiiiiiiiiiiisiiiiiiisiiisiiiiiiii",
"iiiiiiisr21111112riiiiiiiiiir21111112iiiisr1iiiiiiisiiipiiiiiiiiiiiiiiiiiiiiiiiiiisiiiii",
"iiiiiiii311111211eiiiiiiiiii312111111esiiir1iiiiiiiiiiiiiiiiiiissiiiiiiiiiiiiiiiiiiiiiii",
"iiiiiiii2111111112iiiiiiiisr1111111112iiiir1iiiiipiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiisiiisii",
"iiiiiiir1111111111riiiiiiiie1111112111iiisr1iiiiiiiiiiiiiiiiiiiiiipiiiiiiiiiiisiiiiispii",
"iiiiiiii1111211111iiiiiiiiir1111111112iiiir1iiiiiiiisiiisiiiiiiiiisiiiisiiisiiiiiiiiiiii",
"iiiiiiii2111111112iiiiiiiiii2111211113siiir1iiiiiiiiiiiiiiiiipsiiiiiiiiiiiiiiiiisiiiiiii",
"iiiiiiiie21111111riiiiiiiiiie11111111riiisr1iiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiii",
"iiiiiiiise111111eiiiiiiiiipiie111112eiiiiir1riiiiiiiiiisisiiisiiiisiiiiiiiiiiiiiiiiiiiii",
"piiiiiiiisr3323iiiiiiiiiiiiiisee223isiiiiir1iiiiiiiiiiipiiiiiiiiiiiiiiiiiiispsiiiiiiiiis",
"iiiiiisiiiiisisipiiiiiiiiiiiiiissssiiiiiiir1iiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiii",
"iiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiisr1iiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiii",
"siiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiisr1ririiiiririririrrriiirriiririiiririririiiiii",
"iiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiisrehhhhhghhhhhhhhhhhhhhhhhhhhhhhghhhhhhhhgriiii",
"iiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiighhhhhhhhhhhhhhhhhhhhghhhhhhhhhhhhhhhhji2siii",
"siisiiiiiiiiiiiiiiiiiiisiiiiiiiiiiyiiiiiiiiiririiryrryirririirriiiirriryryririirri32iiii",
"iiipiiiiiiidddpiiiiiiiiiiiiiiiidddpiiiiiiiiiiiiiiiiddddiiiiiiiiiiiiiiisdddpiiiiiipe2siii",
"iiiiiiiiidt4994idiiiiiiiiiiiipt4906ipiiiiiiiiiiiipuw906idiiiiiiiiiiiip8q007iiiiiiie2iiii",
"iiiiiiiii>@   .O9iiipiiiiiypi;o   .+0piiiiiiiiipy*o   .#4iiiiiiiiiipu&X   .$5diiise2piii",
"iiiiiiit-        &iiiiiiiipu#        ;iiiiiiiii8O        >piiiiiiii6o       .9piip32siii",
"iiiiiii&          ;iiiiiiii$          >diiiiiiy+          0piiiiiiu@          5iise2siii",
"iisiid4            6piiiid9           .8iiiiid<           oyiiiiid*           +iis32siii",
"iiiiii%            ;pyiiii$            >diiiiy+            9piiiiuo            4pae2siii",
"iiiiiio            +iiiiiu.            $piiip7             &diiip4             :dae2iiii",
"iiisii.            oiiiyp8             +piiip6             -diiydw             *dae2siii",
"iiiiiio            +iiiipu.            $dyiip7             &dyiid4             :die2iisi",
"iiiiii%            &piiiii$            <diiiitO            9piiiiuX            4pse2siii",
"iiiiyp4            6piiiid,           .7iiiiid:           Xtiiiiip&           @iis32siii",
"iiiiiii%          &piiiiiiy#          :piiiiiitO          9diiiiii8o          4iise2siii",
"iiiiiiit#        =yiiiiiiip8+        &iiiiiiiip6o        ;iiiiiiiip4X        >pyiie2iiii",
"iiiiiiiii;X    o:ipiiiiiiiypt*.    o,iiiiiiiiiipu%.    @0piiiiiiiiip7$.   .O4piiise2siii",
"iiiiiiiiipu0><0tdiiiiiiiiiiiip89<<4ydiiiiiiiiiiyip79<>4idiiiiiiiiiirpp7,>>4ipiiiise2siii",
"iiisiiiiiiiddddiiiiiiiiiiiiiiiidddpiiiiiiiiiiiiiiipdddpiiiiiiiiiiiiiiiidddpiiiiiise2iiii",
"iiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiyiiiiiiiiiiiiiiiiiiiiiiiiiiis32siii",
"iiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiie2iiii",
"siiisiiiiiiiyiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiipsiiiiiiiiiiiiiiiiiiiiiiiiiiii32siii",
"iiiiiiiiiiiddddiiiiiiiiiiiiiiiiddddiyiiiiiiiiiiiiiiiiiiiiiiisiiisiiiiipdddpiiiiiise2iiii",
"iiiiiiiiipu9<<0tpiiiiiiiiiiiii89::4ypiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiipi6,:>4ipiiiise2siis",
"iiiiiiiiy;X    X:iiiiiiiiiiit&.    o,iiiiiiiiiiiiiissiiiiiiiiiiiiiii7$.    +4piiise2siii",
"iiiiiiiy#        $yiiiiiiip8O        %isiiiisiiiisr333eiiiiiiiiiiip4X        <iiise2iiii",
"iiiiiii%          &piiiiiiy#          ;piiiiiiiii3111112rsiiiiiiii8X          4iise2siii",
"iiiiipq            5diiiid9           .7piiiiiiie11111112iiiiiiiid&           @yii32iiii",
"iiiiii%            *iyiiii#            :piiiiiii211111111eiiiiiip8X            4ps32iiii",
"iiiiiyo            Oiiiiiu.            $diiiiiir1111112112iiiiird4             ;dse2siii",
"iiiiii.            @piiii8             #diiiiise1111111112iiiiiip4             *dse2siii",
"iiiiiio            +iiiiptX            $piiiiise1121111113iiiiiip5             :die2iiii",
"iiiiii&            ;piiiii$            >piiiiiii211111111eiiiiiiito            5die2siii",
"isiiid4            6iiiiid0           X8piiiiiipe11111112iiiiiiiid*           +iise2iiii",
"iiisiii&          :piiiiiii-          >diiiiiiiiie211112iiiiiiiiiiu@          5pise2siii",
"iiiiiiii-        &iiiiiiiysu$        ;iiiiiiiiiiiii3eeriiiiiiiiiiip6o       .9diis32siii",
"siiiiiisi,O    +9iiiiisiiiiii:@   .+qpiiiiiiiiiiiiisspiiiiisiiiiiiiiu&X   .=6diiise2siii",
"iiiiiiiiidy4005idiiiipiiiiiiidt4005ipiiiiiiiiiiiiiiiiiiiiiipiiisiiiiid84007iiiiiiie2iiii",
"iiiiiiiiiiidddpiiiiiiiiiiiiiiiidddpiiiiiiiiiiiisiiiisiiiiiiiiiiiiiiiiiidddpiiiiiise1siii",
"iiiiiiiiiiiyiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiise3sisi",
"iisiiisiiiiiisiiiiiiiiiiiiiiiiiiiiisiiiiiiiiisiiiiiiiiiiiiiiiiiiiiiiiiisiiiiiiiiiiiiiiii",
"iiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiipiiiiisiiiiiiiiiiiiiiiiisiiiiiiiiiiiiiiiiiiiiiiiiiiii",
"iiiiiiiiiiiiiisiiiiiiiisiiiiiiiiiiiiiiisiiiiiiiiiiiisiiiiiiiiiiiiiiisiiiiiiiiiiiiiiiiiii",
"iiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiisiiiiiiiiiiiiiiiiiiiiiiiiiisiiiiiiiiiiiiiiiiiiiiiiiiis"
};

/* XPM */
static const char *const xpm_icon_2[] = {
/* columns rows colors chars-per-pixel */
"48 48 255 2 ",
"   c #D5D5D5",
".  c gray83",
"X  c LightGray",
"o  c #D2D2D2",
"O  c gainsboro",
"+  c #DCDCDD",
"@  c #DDDDDD",
"#  c #DADADA",
"$  c #D7D7D7",
"%  c #E9E9E9",
"&  c #EAEAEA",
"*  c #E7E7EA",
"=  c #E9E9EA",
"-  c #EDEDE9",
";  c #EEEEEE",
":  c #CACACA",
">  c gray82",
",  c #D0D0D2",
"<  c #DCDCD0",
"1  c #D7D7D1",
"2  c #C8C8D4",
"3  c #D4D4D1",
"4  c #DDDDCF",
"5  c #D0D0D1",
"6  c gray75",
"7  c #CBCBCB",
"8  c gray84",
"9  c #D3D3D6",
"0  c #DFDFD3",
"q  c #9D9DE0",
"w  c #3030F6",
"e  c #1313FB",
"r  c #2929F7",
"t  c #8C8CE3",
"y  c #DDDDD3",
"u  c #D7D7D8",
"i  c gray76",
"p  c #D0D0D0",
"a  c #B6B6B6",
"s  c gray68",
"d  c #B2B2B2",
"f  c #D2D2D5",
"g  c #9E9EDF",
"h  c #0101FE",
"j  c blue",
"k  c #0000FE",
"l  c #8686E3",
"z  c #E4E4D5",
"x  c #BFBFC2",
"c  c gray72",
"v  c #A9A9A9",
"b  c #AAAAAA",
"n  c #B1B1B1",
"m  c #D3D3D5",
"M  c #DCDCD3",
"N  c #3A3AF3",
"B  c #0505FE",
"V  c #0404FE",
"C  c #2323F7",
"Z  c #D5D5D8",
"A  c #C3C3C2",
"S  c #CACACB",
"D  c gray69",
"F  c gray67",
"G  c #CDCDCD",
"H  c #D5D5D4",
"J  c #1C1CF9",
"K  c #0A0AFC",
"L  c #C5C5DB",
"P  c #C7C7C1",
"I  c #B7B7B7",
"U  c #3939F3",
"Y  c #0303FE",
"T  c #2222F7",
"R  c gray81",
"E  c gray71",
"W  c #DFDFD2",
"Q  c #9C9CE0",
"!  c #8484E4",
"~  c #DEDED3",
"^  c #9A9AE0",
"/  c #2D2DF5",
"(  c #1010FB",
")  c #2525F7",
"_  c #8989E3",
"`  c #DCDCD2",
"'  c #D6D6D8",
"]  c #D4D4D5",
"[  c #D9D9D4",
"{  c #C8C8D7",
"}  c #D6D6D4",
"|  c #E0E0D2",
" . c #D3D3D4",
".. c #D7D7D4",
"X. c #D8D8D8",
"o. c #D5D5D6",
"O. c #CECECE",
"+. c #B4B4B4",
"@. c #ACACAC",
"#. c #AFAFAF",
"$. c gray85",
"%. c gray66",
"&. c #AEAEAE",
"*. c gray70",
"=. c gray80",
"-. c #C1C1C1",
";. c #C8C8C8",
":. c #D4D4D6",
">. c #C5C5C5",
",. c #E1E1E1",
"<. c #DFDFDE",
"1. c #DEDEDF",
"2. c #DFDFDF",
"3. c gray88",
"4. c #D9D9D3",
"5. c gray91",
"6. c #E5E5E9",
"7. c #E9E9E8",
"8. c #EDEDE7",
"9. c #E7E7E7",
"0. c #ECECEC",
"q. c #C1C1D8",
"w. c #CFCFD5",
"e. c #E1E1D2",
"r. c #D1D1D5",
"t. c #BDBDD5",
"y. c #CECED2",
"u. c #CFCFD2",
"i. c #CFCFD1",
"p. c gray",
"a. c #9494E1",
"s. c #0909FD",
"d. c #1A1AF9",
"f. c #7878E7",
"g. c #DBDBD3",
"h. c #8F8FE2",
"j. c #2222F8",
"k. c #1B1BF9",
"l. c #7D7DE6",
"z. c #8B8BE4",
"x. c #2121F9",
"c. c #1E1EF9",
"v. c #8383E5",
"b. c #DDDDD4",
"n. c #8585E5",
"m. c #1F1FF9",
"M. c #2020F9",
"N. c #8888E4",
"B. c #0202FE",
"V. c #7575E7",
"C. c #CFCFD6",
"Z. c #9595E1",
"A. c #8E8EE2",
"S. c #8787E4",
"D. c #8A8AE2",
"F. c #E3E3D5",
"G. c #BDBDC1",
"H. c #3D3DF2",
"J. c #CCCCD6",
"K. c #DADAD3",
"L. c #3636F4",
"P. c #1F1FF8",
"I. c #D0D0D5",
"U. c #2F2FF5",
"Y. c #2626F7",
"T. c #2828F6",
"R. c #2B2BF5",
"E. c #DADAD7",
"W. c #C0C0C0",
"Q. c #0606FD",
"!. c #BCBCD9",
"~. c #CDCDD6",
"^. c #1717FA",
"/. c #0F0FFB",
"(. c #C6C6D7",
"). c #1111FB",
"_. c #1313FA",
"`. c #CECED9",
"'. c #C3C3C0",
"]. c #CCCCCD",
"[. c #4646F0",
"{. c #0505FD",
"}. c #3F3FF2",
"|. c #2828F7",
" X c #3838F3",
".X c #2E2EF5",
"XX c #D8D8D4",
"oX c #3131F5",
"OX c #3434F3",
"+X c #DCDCD6",
"@X c #BFBFC0",
"#X c #ABABDD",
"$X c #0808FD",
"%X c #A5A5DE",
"&X c #9F9FDF",
"*X c #9696E1",
"=X c #9898E0",
"-X c #9C9CDF",
";X c #E2E2D5",
":X c #BEBEC1",
">X c #AAAADD",
",X c #3E3EF2",
"<X c #9292E2",
"1X c #A6A6DE",
"2X c #3B3BF3",
"3X c #3333F4",
"4X c #9797E1",
"5X c #A2A2DE",
"6X c #3535F4",
"7X c #9D9DDF",
"8X c #A0A0DF",
"9X c #DEDED2",
"0X c #D2D2D4",
"qX c #BBBBDA",
"wX c #CBCBD6",
"eX c #CECED6",
"rX c #BABADA",
"tX c #8D8DE3",
"yX c #1E1EF8",
"uX c #1414FA",
"iX c #7171E8",
"pX c #1616FA",
"aX c #7676E7",
"sX c #7E7EE6",
"dX c #1818FA",
"fX c #1919F9",
"gX c #8080E5",
"hX c #D6D6D7",
"jX c #7070E8",
"kX c #9191E2",
"lX c #8282E5",
"zX c #3434F4",
"xX c #2727F7",
"cX c #2A2AF6",
"vX c #D9D9D7",
"bX c #C2C2D8",
"nX c #C9C9D7",
"mX c #4949F0",
"MX c #2424F7",
"NX c #4242F1",
"BX c #3737F3",
"VX c #DDDDD6",
"CX c #AFAFDC",
"ZX c #0B0BFC",
"AX c #A9A9DD",
"SX c #A0A0DE",
"DX c #E1E1D5",
"FX c #B0B0DC",
"GX c #4646F1",
"HX c #2020F8",
"JX c #9999E0",
"KX c #ACACDC",
"LX c #4343F1",
"PX c #A4A4DE",
"IX c white",
/* pixels */
"                                                                                                ",
"    .                                           .                                               ",
"  .   . X X X X X X X X X X X X X X X X X X o X   .                                             ",
"    .   O O O O O O O O O O O O O O + + O O @ # .   .                                           ",
"    . $ % & & & & & & & & & & & * = - & * % ; o : $ .                                           ",
"  .   . o o > > X o > o o o o , < 1 2 3 4 5   6 7 $ .                                           ",
"    .       8 8 >   $       9 0 q w e r t y u i 7 $ .                                           ",
"        . 8 p a s d 7 8 . f 0 g h j k h j l z x 7 $ .                                           ",
"      . . 8 c v s b n X   m M N j B k V j C Z A S $ .                                           ",
"      .   X D s s s F G 8 H f J j h k k j K L P S $ .                                           ",
"      . . 8 I v s b n X   m M U j V k Y j T Z A S $ .                                           ",
"        . 8 R E s d 7 8 . f W Q k j k h j ! z x 7 $ .                                           ",
"          . 8   p . 8 .   H m ~ ^ / ( ) _ ` ' i 7 $ .                                           ",
"        .   . . 8   .   . ] H m W [ { } |  .u i 7 $ .                                           ",
"          .   . . .   .   ] ] H f ] ... f . X.i 7 $ .                                           ",
"        .   .   8   .   .   .   . ] o.] . . X.i 7 $ .                                           ",
"          . 8   R X 8 .   .   . 8 . R . 8 . X.i 7 $ .                                           ",
"        . 8 R E s n : 8 .   . 8 O.+.s d 7 8 $ i 7 $ .                                           ",
"      . . 8 I v s b D o   . .   E v s b n X X.i 7 $ .                                           ",
"      .   X D @.s s @.G 8 .   o #.s s s @.G $.i 7 $ .                                           ",
"      . . 8 c %.s b n X   . .   I v s v d X X.i 7 $ .                                           ",
"        . 8 p I &.*.=.8 .   . 8 R a &.+.G   $ i 7 $                                     .       ",
"          . 8   > . 8 .   .   . 8   >   8 . X.-.;.. o o o o o o o o o o o o o o o o o X   .     ",
"        .   . . :.] .   .   .   . . :.] . . $ >.8 ,.<.1.1.1.2.2.2.2.2.2.2.1.1.1.2.2.3.# X   .   ",
"      ]   H f H 4.} f ] H ] H H f H 4.} f ] . X.5.5.6.7.8.7.6.5.5.5.5.5.6.7.8.7.6.9.0.G =.$ .   ",
"      ] H m W H q.w.e.] ] H H m | ] q.r.e.] ] . > , 4 , t.y.4 5 > > > , 4 u.t.u.4 i.. p.G 8 .   ",
"    ] H m ~ a.) s.d.f.g.] ] m ~ h.j.s.k.l.M ] ] ] ~ z.x.s.c.v.b.]   ] b.n.m.s.M.N.y u -.G 8 .   ",
"    H f W Q j k k B.j V.e.C.| Z.j k k h j l.e.C.| A.j k k h j ! e.C.e.S.j h k h j D.F.G.G 8 .   ",
"    ] m y H.j V k Y j d.J.} K.L.j V k Y j P.I.H ..U.j V k Y j Y.m H H T.j Y k V j R.E.W.G 8 .   ",
"    ] H H j.j h k k j Q.!.M I.J j h k k j K q.g.~.^.j k k k j /.(.g.{ ).j k k k j _.`.'.].8 .   ",
"    ] f ~ [.j {.h V j j.I.] M }.j {.h V j |.] ] K. Xj {.h V j .X} ] XXoXj V h B j OX+X@XG 8 .   ",
"    H f y #X$Xj h h j N.| I.~ %XV j h k j h.| w.0 &XB.j h k j *X| C.W =Xj k h j h -X;X:XG 8 .   ",
"    ] H f ~ >X,Xk.oX<Xy m H f ~ 1X2Xd.3X4X~ m H m ~ 5XU d.6XQ ~ m H m ~ 7XL.d. X8X9XZ W.G 8 .   ",
"      ] H f y y I.K.| m H   H f ~ y I.g.W m H ] H m ~ y r.M W m H ] H m W M I.M ~ 0X$ W.G 8 .   ",
"      ] ] H I.m M } C.] H ]   H I.] M H C.] H ] ] H f m H m f H ] ] H ] C.H M ] C.. $ W.G 8 .   ",
"        H m | f qXwXe.  ] H   m | r.qXJ.e.] ] H .   .   8   .   . H ] ] e.eXrXC.e. .$ W.G 8 .   ",
"    ] H m ~ tXyXV uXiX[ H ] m y N.J V pXaXg.] ]   . 8 X G o 8 .   ] ] M sXdXV fXgX` hXW.G 8 .   ",
"    H f W 4Xj k k B.j jXe.C.| kXj k k B.j f.e.f . 8 7 n F D : 8 . f e.lXj h k h j l F.G.G 8 .   ",
"    ] m M 2Xj V k B.j dXwX} [ zXj V k Y j c.C.} ] . *.b s b n X ] H ] xXj Y k Y j cXvXW.G 8 .   ",
"    ] H H j.j h k k j Q.!.M I.J j h k k j K bX4.:.> &.s s s s R o...nX).j k k k j _.`.'.].8 .   ",
"    ] f W mXj {.h V j MXr.] y NXj {.h V j cXH H .   I %.@.v E   ] ] [ zXj {.h {.j BXVX@XG 8 .   ",
"    H m M CXZXj h k j tX| I.y AX$Xj h k j a.| f . 8 p c D I R 8 . f W 7XB.j h j V SXDX:XG 8 .   ",
"    ] H f ~ FXGXHX XJX~ m H f ~ KXLXHXN g ~ m H   . 8 8 X 8 8 .   H m ~ PX,XHX}.1X9XZ W.G 8 .   ",
"      ] H f M | H y W m H ] H f y W H ~ 0 m H   .   . .   . .   . ] H f ~ ~ H 0 ~ 0X$ -.G 8 .   ",
"      ] ] H m f H m f H   ] ] H f f H m f H ] ]       . . .       ] ] H f f H f f H   o .   .   ",
"          ] H ] ] ] H ]       ] H ] ] ] H ]                           ] H ] ] ] H   .     .     ",
"                                                                                  .   . .       ",
"                                                                                                "
};

/* XPM */
static const char *const xpm_icon_3[] = {
/* columns rows colors chars-per-pixel */
"44 44 49 1 ",
"  c #0101FE",
". c #0C0CFC",
"X c #1313FB",
"o c #1B1BF9",
"O c #2525F7",
"+ c #2C2CF6",
"@ c #2222F8",
"# c #3434F4",
"$ c #3B3BF3",
"% c #4F4FEF",
"& c #5454EE",
"* c #5D5DEC",
"= c #6363EB",
"- c #6B6BEA",
"; c #7676E7",
": c #7C7CE6",
"> c #7171E8",
", c #ACACAC",
"< c #B3B3B3",
"1 c #BFBFBF",
"2 c #C3C3BF",
"3 c #8E8EDF",
"4 c #9999DD",
"5 c #BFBFC1",
"6 c #A4A4DE",
"7 c #ABABDD",
"8 c #B4B4DB",
"9 c #BCBCDA",
"0 c #8484E4",
"q c #8B8BE3",
"w c #9696E1",
"e c #9D9DE0",
"r c #C2C2C2",
"t c #C8C8C0",
"y c #CDCDCD",
"u c #C4C4D6",
"i c #CBCBD5",
"p c #C4C4D8",
"a c #D5D5D5",
"s c #DCDCD3",
"d c #D7D7D8",
"f c #D9D9D9",
"g c #E1E1D2",
"h c #F0F0DF",
"j c #DFDFE2",
"k c #E2E2E2",
"l c #EFEFE0",
"z c gray91",
"x c #F0F0E2",
/* pixels */
"aaaaaaaaaaaaaaaaaaaaaaaaaaaaadaaaaaadaaaaaaa",
"aaaaaaaaaaaaasaaaaaaaaaaaaaaasaaaaaaaaaasdaa",
"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaadaaaaaaaaaaa",
"aaafjkjgfkfkjjfjjjjgjsaaaaaaaadasaaaaaadaaad",
"aaaskkkkgkzkzkzkllkkzyyaaaadaaaaaafaaaaaaaaa",
"aaaaiaaaaaiaaysy44isa2aaaaaaaaadaaaaadaaaads",
"aaaaaaarraaaas8o  @8sryaaaaadsaaaadaaaaadaaa",
"aaaaaa<,,<aaaa+    #srisaaaaaaaaaaaaaadsaaaa",
"aasady,,,,tds8      p2aaaaaaaaasaaaaaaaaaaaa",
"aaaaay,,,,yds9     .p2yaaaaaaaadaaadaaaaaaas",
"aaaaaar,,5daas&    *gryaaaaadaaadaaaaadaaaaa",
"aaaaaasiiaaaaaa=oo-adraaaaaaaaaasaaaaaaaaaaa",
"daaaaaaaaaaaaaagiagadryaaaaaaaaaaaaadsaaaaaa",
"aaaaaaaaaaaaaaaiaaaaa2aaadaaaaaaaaadaaadasaa",
"aaaaaaassaaaaaaadaaaariaaaaaaadaaaaaaaaaaaaa",
"aaadaaarraaaaaaar1aaa2aaaadsaaaaadaaaaaaaaad",
"aaaaaa<,,<aaaaa<,,<aaraaaaaaaaaaasadaaaaadaa",
"aaaaay,,,,tsaar,,,,yfryaaaasaadaaaaaaaaaasaa",
"aaaaay,,,,yaaay,,,,yfraaaaaaaaaaaaaaaaaaaaad",
"aaaaaar,,5aaaaa2,,raaryaaaaasaaaaaaaaadaaaaa",
"asaaaadaaaaaaaaaaaaaa2yaaaaaaaiaaiaaaaidaaaa",
"aaaaaaaidiaaaaaaaiaadtfkjjfkkkkgjjfkfkzdaaaa",
"adaaaasggaaaaaaaggsaadkkkhhkjkkkfhhhkkktiaaa",
"aaaadsiqqisaaasuqqisdais933usaais933isa5aaaa",
"aaais7o  X7sas7X  X7sis6X  o8sas4.  @9sraaas",
"aaaaa+    OaaaO    #ssi@    #saio    $s5yaaa",
"adas9      8g7      8g7     .9g6     .p2aaaa",
"aaasp.    .9g9.    Xug9     Xug8     od5yaaa",
"aaaag=    *gag*    -gas&    >gis%    ;g5aaaa",
"aaaaas;OO;saaaa>+O:aaaaa-OO:saasa-@+:sariaaa",
"aaaaaasaagaaaaagaasaaaaagsagaaaaagaagaa1aaaa",
"aaaaaaaggaiaaaaaggaaaaaaiaaaaaaaaaggaas2yaaa",
"aaaaasp00psaaasp00usaaaaaaaaaaaas900isaraaaa",
"aaaas6X  X6gas6.  X7saaaa15aaaasw.  X8sriaaa",
"aaaaa+    Oiaa@    #aaai,,,<aaaio    $s5aaaa",
"aaas9      8g7      9sdt,,,,yds6     .p2aaaa",
"aaaap.    .ug9.    Xusdy,,,,aas8     od5yaaa",
"dsaag-    =gas=    -giaar,,taaas&    :g5aaaa",
"aaaaas:++:aaaaa:++:saaaafaaaaaaaa>++qsaryaaa",
"aaaaaasssgaaaaagssgaaaaaaaaaaaaaagssgaaraaaa",
"aaaaaaadaaaaaaaaaaaaaaaaaaaadaaaaiaaaaaaaaaa",
"aaaaaaaaaaaaaaaaaadaaaaaaaadaaaaaaaaaaaaaaaa",
"dadaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaasaaaaaaaa",
"aaaaaaaaaaaaaaadaadaaaadsaaaaaaaaaaaaaaaaaaa"
};

/* XPM */
static const char *const xpm_icon_4[] = {
/* columns rows colors chars-per-pixel */
"32 32 51 1 ",
"  c #0202FE",
". c #0A0AFC",
"X c #1313FB",
"o c #1A1AF9",
"O c #2F2FF5",
"+ c #2222F8",
"@ c #3434F4",
"# c #3D3DF2",
"$ c #4141EF",
"% c #4E4EEF",
"& c #5454ED",
"* c #5B5BEC",
"= c #4141F2",
"- c #4949F0",
"; c #6565EA",
": c #6E6EEB",
"> c #7C7CE6",
", c #7070E8",
"< c #AAAAAA",
"1 c #B3B3B3",
"2 c #BBBBBB",
"3 c #9E9EDF",
"4 c #A4A4DD",
"5 c #ABABDC",
"6 c #BEBED6",
"7 c #B4B4DB",
"8 c #BBBBDA",
"9 c #8282E5",
"0 c #8C8CE3",
"q c #9393E2",
"w c #9A9AE0",
"e c #A1A1E1",
"r c #C5C5C5",
"t c #CDCDC4",
"y c #CDCDCD",
"u c #D4D4C3",
"i c #C7C7D7",
"p c #CDCDD3",
"a c #C2C2D8",
"s c #D4D4D5",
"d c #DCDCD3",
"f c #D4D4D8",
"g c #DCDCDC",
"h c #F2F2CF",
"j c #E2E2D2",
"k c #EAEAD0",
"l c #E5E5DE",
"z c #EAEADD",
"x c #F1F1DF",
"c c #DDDDE0",
"v c #E2E2E2",
/* pixels */
"sssspssysssssysssssssssssgssssss",
"ssgggggggggfggggsssssssdsssssssg",
"ssvlvvlvvvvxzzvpysssssssssssssss",
"sssssyssyda*&5drsssssssgssssssss",
"ssss1<rgsp+  .7utssssssssssssdss",
"sss2<<<sjq .  :upsssssssssssssgs",
"sssr<<2sd5    9upsssssssdgssssss",
"ssssr2psss;  =srysssssssssssssss",
"ssssssssssd75sdrssssssssssgsssss",
"sssssssssssddsgrysssssssssssssss",
"sssssssssssssfftyssssdssssssssss",
"ssss11rssst1<rgrsssssgssssssssss",
"sss2<<1sss2<<<srysssssssssssdsss",
"sssr<<1ssfr<<2grssssssssssssgsss",
"ssssrrsssssr2ssrysssspssssspssss",
"sssssssssssffssyggggclggcgcglsss",
"ssssjjdsssddjdsfgzzzlglgzzzzlyss",
"ssd8%#qdsd7%#wdss5$$3dpd4$$4srys",
"ssi+   wdao   5j8X   7j7.  .8tss",
"sj4    *hq    ;h9 .  ,h> .  >uys",
"ss8.   >k5    9k4    qk3    3tss",
"ssd>. %sss>. &ssd:  ;sss;  ;drss",
"sssda8sssssa8ssssdaadsssda8dsrys",
"ssssjkjsssskkdsssssdssssskkssrss",
"ssd7=O0spd5#@qdssfpssssd3@@4drss",
"ssao   3k8X   4dft<<rss7.   7tps",
"sj4 .  &kq    ;jf1<<1sk>  . >ups",
"ss8.   9k7    0jsr<<2fde    4tss",
"ssd0X.*ssd9X.;sssstrsssd,..,drps",
"sssjiadsssdiajssssffssssjiidstss",
"ssssssssssssssssssssssssssssssss",
"ssssssssssssssssssfsssssssssssss"
};

/* XPM */
static const char *const xpm_icon_5[] = {
/* columns rows colors chars-per-pixel */
"16 16 159 2 ",
"   c #D5D5D5",
".  c gray85",
"X  c #DADADA",
"o  c #DADAD9",
"O  c #D8D8DA",
"+  c #E2E2D8",
"@  c #E4E4D8",
"#  c #D7D7D8",
"$  c gray83",
"%  c gray86",
"&  c #DADADB",
"*  c #E1E1D9",
"=  c #B4B4E2",
"-  c #AFAFE5",
";  c #DADAD2",
":  c #D0D0D1",
">  c gray84",
",  c #CBCBCB",
"<  c #A9A9AA",
"1  c #CBCBC4",
"2  c #BDBDDA",
"3  c #0707FC",
"4  c blue",
"5  c #A4A4D5",
"6  c #D9D9CF",
"7  c #D3D3D6",
"8  c gray81",
"9  c #B3B3B4",
"0  c #CECECA",
"q  c #C8C8D9",
"w  c #1D1DF8",
"e  c #1010FC",
"r  c #B4B4D4",
"t  c #D7D7CF",
"y  c #D4D4D6",
"u  c #D6D6D7",
"i  c #DADAD3",
"p  c #CCCCD9",
"a  c #CACADB",
"s  c #D5D5CD",
"d  c #CFCFD1",
"f  c #D6D6D5",
"g  c #D2D2D2",
"h  c #C1C1C1",
"j  c #CACAC7",
"k  c #CACAC6",
"l  c #CECED0",
"z  c gray82",
"x  c #D7D7D7",
"c  c #CACACB",
"v  c #A1A1A5",
"b  c #C3C3C4",
"n  c #AFAFB2",
"m  c #ACACB0",
"M  c #CFCFCE",
"N  c #CFCFD0",
"B  c #D1D1D5",
"V  c #D2D2D3",
"C  c #D4D4D3",
"Z  c #D1D1D4",
"A  c #D4D4D5",
"S  c #D6D6D4",
"D  c #DBDBCA",
"F  c #D7D7D2",
"G  c #D9D9CD",
"H  c #DBDBCD",
"J  c #D9D9D6",
"K  c #E9E9D8",
"L  c #DDDDD9",
"P  c #E5E5D8",
"I  c #D7D7D4",
"U  c #CECED6",
"Y  c #8E8EE5",
"T  c #C2C2D9",
"R  c #DFDFD2",
"E  c #A6A6DF",
"W  c #9E9EE1",
"Q  c #DEDED3",
"!  c #CFCFDC",
"~  c #9191E8",
"^  c #CBCBDD",
"/  c #A6A6E4",
"(  c #A8A8E5",
")  c #D8D8D1",
"_  c #E4E4D1",
"`  c #6464EB",
"'  c #4949F0",
"]  c #C4C4D8",
"[  c #0404FE",
"{  c #B7B7DA",
"}  c #6060EB",
"|  c #5454ED",
" . c #BDBDD8",
".. c #0000FE",
"X. c #ABABD3",
"o. c #E1E1D2",
"O. c #8383E5",
"+. c #6767EA",
"@. c #D2D2D5",
"#. c #2323F8",
"$. c #1414FA",
"%. c #C8C8D7",
"&. c #7F7FE5",
"*. c #7474E8",
"=. c #1B1BF9",
"-. c #1E1EFA",
";. c #BCBCD2",
":. c #D6D6D0",
">. c #D3D3D5",
",. c #E2E2D2",
"<. c #C9C9D7",
"1. c #D5D5D4",
"2. c #D9D9D5",
"3. c #C9C9DA",
"4. c #D8D8D5",
"5. c #DEDED2",
"6. c #D5D5D6",
"7. c #D7D7CC",
"8. c #9797E1",
"9. c #1A1AF9",
"0. c #D8D8D4",
"q. c #4242F1",
"w. c #3636F3",
"e. c #C6C6D8",
"r. c #D3D3D0",
"t. c #C1C1BE",
"y. c #D1D1CF",
"u. c #CBCBD8",
"i. c #3C3CF2",
"p. c #3E3EF4",
"a. c #C4C4D0",
"s. c #D4D4D0",
"d. c #5E5EEC",
"f. c #4444F1",
"g. c #C0C0D9",
"h. c #0202FE",
"j. c #A8A8E0",
"k. c #D3D3C7",
"l. c #A0A0A6",
"z. c #CFCFC5",
"x. c #B1B1DF",
"c. c #A8A8D5",
"v. c #DADACF",
"b. c #D9D9D4",
"n. c #C2C2D8",
"m. c #6B6BE9",
"M. c #B2B2DB",
"N. c #E0E0D2",
"B. c #8A8AE3",
"V. c #8181E5",
"C. c #CECECE",
"Z. c #D3D3D4",
"A. c #8686E4",
"S. c #8787E5",
"D. c #D3D3CE",
"F. c #E7E7D1",
"G. c #DCDCD3",
"H. c #E3E3D2",
"J. c white",
/* pixels */
"  . X o O + @ # $   $           ",
"  % X & * = - ; :   $           ",
"> , < 1 2 3 4 5 6 7 $           ",
"> 8 9 0 q w e r t y $           ",
"$ > X u i p a s d f $           ",
"  g h 8 u j k l z >           $ ",
"x c v b o n m M N B V C Z Z $   ",
"A S D F y G H d J K L O @ P # $ ",
"I U Y T R E W Q ! ~ ^ @ / ( ) : ",
"_ ` 4 ' ] [ 4 { } 4 |  ...4 X.6 ",
"o.O.4 +.@.#.$.%.&.4 *.U =.-.;.:.",
">.,.<.Q Q 1.@.R 2.3.4.5.>.6.7.d ",
"R 8.9.&.0.q.w.e.r.t.y.u.i.p.a.s.",
"_ d.4 f.g.h.4 j.k.l.z.x...4 c.v.",
"b.n.m.M.N.B.V.I $ C.Z.b.A.S.D.z ",
"A b.F.G.>.,.H.1.A >   $ H.H.$ $ "
};

const char *const *const xpm_icons[] = {
    xpm_icon_0,
    xpm_icon_1,
    xpm_icon_2,
    xpm_icon_3,
    xpm_icon_4,
    xpm_icon_5,
};
const int n_xpm_icons = 6;