# [Problēma](https://www.codechef.com/problems/CO92JUDG)

Pavārs ir sacensību tiesnesis. Šajās sacensībās piedalās divi spēlētāji — Alise un Bobs.

Sacensības sastāv no N braucieniem. Katram i (1 ≤ i ≤ N) Alise pabeidza i-to skrējienu Ai minūtēs, bet Bobs to pabeidza Bi minūtēs. Uzvar spēlētājs ar mazāko finiša laiku summu. Ja šis kopējais laiks Alisei un Bobam ir vienāds, tiek pasludināts neizšķirts.

Sacensību noteikumi ļauj katram spēlētājam izvēlēties sacīksti, kas netiks ieskaitīta kopējā laikā. Tas ir, Alise var izvēlēties indeksu x, un viņas finiša laiks sacīkstēs ar šo indeksu tiks uzskatīts par nulli; tāpat Bobs var izvēlēties indeksu y, un viņa finiša laiks sacensībās ar šo indeksu tiks uzskatīts par nulli. Ņemiet vērā, ka x var atšķirties no y; Alises izvēlētais indekss neietekmē Boba kopējo laiku vai otrādi.

Šefpavāram kā tiesnesim jāpaziņo sacensību rezultāts. Viņš zina, ka gan Alise, gan Bobs spēlē optimāli, un vienmēr izvēlēsies labāko variantu. Lūdzu, palīdziet šefpavāram noteikt rezultātu!

## Ievade
- Ievades pirmajā rindā ir viens vesels skaitlis T, kas apzīmē testa gadījumu skaitu. Tālāk sniegts T testa gadījumu apraksts.
- Katra testa gadījuma pirmajā rindā ir viens vesels skaitlis N.
- Otrajā rindā ir N ar atstarpi atdalīti veseli skaitļi A1, A2, ..., AN.
- Trešajā rindā ir N ar atstarpi atdalīti veseli skaitļi B1, B2, ..., BN.

## Izvade
Katram pārbaudes gadījumam izdrukājiet vienu rindiņu, kurā ir virkne “Alise”, ja Alise uzvar, “Bob”, ja Bobs uzvar, vai “Neizšķirts”, ja rezultāts ir neizšķirts (bez pēdiņām).

## Ierobežojumi
- 1 ≤ T ≤ 100
- 2 ≤ N ≤ 100
- 1 ≤ Ai ≤ 1000 katram derīgajam i
- 1 ≤ Bi ≤ 1000 katrai derīgajai i

## 1. paraugs

Ievade | Izvade
-|-
3
5| Alise
3 1 3 3 4
1 6 2 5 3
5|Bobs
1 6 2 5 3
3 1 3 3 4
3|Neizšķirts
4 1 3
2 2 7

## Paskaidrojums:
1.  Alise izvēlēsies pēdējās sacīkstes finiša laiku, lai tas tiktu uzskatīts par nulli, kas nozīmē, ka viņas finiša laiku summa ir 3 + 1 + 3 + 3 + 0 = 10, savukārt Bobs izvēlēsies sava otrā brauciena finiša laiku. skrējienu uzskatīt par nulli, tāpēc viņa finiša laiku kopējā summa ir 1 + 0 + 2 + 5 + 3 = 11. Tā kā Alises summa ir mazāka, viņa tiek uzskatīta par uzvarētāju.

2.  mēs strādājam ar tādu pašu situāciju kā iepriekšējā gadījumā, taču spēlētāju finiša laiki tiek apmainīti, tāpēc šoreiz uzvar Bobs.

3. Alise izvēlēsies pirmā brauciena finiša laiku, lai to uzskatītu par nulli, kas nozīmē, ka viņas kopējais laiks ir 0 + 1 + 3 = 4. Bobs izvēlēsies savas pēdējās sacīkstes finiša laiku, ko uzskatīt par nulli. uzrāda savu kopējo laiku 2 + 2 + 0 = 4. Sacensības tiek uzskatītas par neizšķirtu, jo abiem spēlētājiem ir vienādas finiša laiku summas.