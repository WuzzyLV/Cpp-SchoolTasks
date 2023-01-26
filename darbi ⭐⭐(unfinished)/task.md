

# Uzdevums
Katru dienu pirms došanās uz darbu Mirko pārbauda savu e-pastu. Viņa priekšnieks katru rītu atsūta darbu sarakstu, ko Mirko šajā dienā varētu darīt. Katram darbam ir norādīts sākuma laiks un ilgums.

Mirko darbadiena ilgst N minūtes. Pēc ierašanās darbā, Mirko sāk darbu izpildi pēc priekšnieka atsūtītā saraksta. Ja sarakstā ir vairāki darbi ar vienu un to pašu sākuma laiku, Mirko var izvēlēties, kuru no tiem pildīt. Citus darbus padarīs Mirko kolēģi. Ja Mirko ir pabeidzis vienu darbu un līdz nākošā darba sākumam vēl ir atlicis laiks, tad Mirko var atpūsties un palasīt jaunākās avīzes. Ja Mirko ir brīvs un ir pienācis jauna darba sākuma brīdis, Mirko pienākums ir sākt to pildīt (vai vienu no tiem, ja ir izvēle). Ja pēc saraksta ir pienācis kāda darba sākuma laiks, bet Mirko ir aizņemts ar cita darba izpildi, tad Mirko turpina darīt jau iesākto darbu un viņam nebūs jadara šis darbs pat tad, kad iesāktais būs pabeigts.

Brīžos, kad vairāki darbi sākas vienlaicīgi, Mirko veicamo darbu var izvēlēties tā, ka laikrakstu lasīšanai paliek vairāk laika.

Uzrakstiet programmu, kas nosaka, kādu lielāko kopējo brīvā laika daudzumu Mirko dotajā dienā var sev sagādāt!

 
# Ievaddati
Teksta faila darbi.dat pirmajā rindā dotas divu naturālu skaitļu N(darba dienas ilgums minūtēs, 1≤N≤10000) un K(darbu skaits, 1≤K≤10000) vērtības, kas atdalītas ar tukšumsimbolu.

Katrā no nākošajām K faila rindām dots viena darba apraksts - divu naturālu skaitļu P un T vērtības, kas atdalītas ar tukšumsimbolu. Šie skaitļi norāda, ka darbs sākas P-tajā minūtē un tā ilgums ir T minūtes. Zināms, ka 1≤P≤N, 1≤P+T-1≤N.

 
# Izvaddati
Teksta faila darbi.rez vienīgajā rindā jāizvada Mirko brīvā laika lielākais iespējamais ilgums.

 
# Piemērs
## darbi.dat	darbi.rez
    10 3            5
    1 2
    4 3
    5 1
 	 
## darbi.dat	darbi.rez
    10 6            5
    2 4
    2 2
    2 1
    4 7
    8 3
    8 1
 	 
## darbi.dat	darbi.rez
    15 6            4
    1 2
    1 6
    4 11
    8 5
    8 1
    11 5

# Notes
    You need to calculate the best possible path to get the most possible hours of freetime my idea was to try out all the first job options didint code it out
    edit: works ish but u can skip jobs in some cases? just a bad task description giving up!