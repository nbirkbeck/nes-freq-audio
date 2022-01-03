int num_audio_wait = 6;
int num_audio_signal = 800;
unsigned short triangle_signal[800] = {151,820,633,634,811,1129,951,254,668,630,668,666,632,665,664,620,1148,914,940,678,634,632,666,667,665,631,628,803,955,691,254,254,254,254,254,630,671,294,294,696,953,616,622,635,663,635,633,625,254,254,254,1132,937,142,669,667,665,666,634,663,663,630,943,1124,935,143,143,143,254,254,254,254,254,616,953,1502,939,293,293,293,293,293,142,143,624,1533,1591,1597,2042,1539,330,629,331,618,253,254,333,1889,1561,1603,697,689,684,681,625,255,254,254,1505,1882,1562,1528,254,253,254,254,254,255,254,620,1596,1612,1586,1999,254,679,254,255,615,294,294,2046,1848,1584,1542,689,682,668,625,624,614,620,619,1547,1613,1568,2044,1522,682,255,681,623,254,629,1509,1582,1612,1548,2033,254,254,254,254,254,254,254,1533,1560,1561,709,784,770,704,710,697,625,713,928,2006,1580,1538,2029,602,600,615,604,557,283,285,1500,1564,1563,1513,593,563,560,562,605,591,589,550,1583,1592,1974,594,593,586,568,568,561,567,565,2046,1545,1529,791,712,777,787,382,711,689,697,330,1549,1586,1995,556,608,560,318,605,560,552,563,557,1556,1560,1962,1478,1507,293,594,592,564,587,567,1518,1602,1557,559,605,592,561,588,562,565,565,550,1558,1556,1530,778,705,709,712,785,359,622,321,1526,1595,1567,619,670,634,660,638,658,674,622,619,2001,1977,675,629,635,668,669,667,632,255,629,1524,1976,1961,1536,631,669,667,632,629,632,630,619,1566,1873,1893,2020,255,254,253,255,604,284,284,333,1591,1874,1523,2034,319,619,214,621,490,254,680,1555,1596,1900,1539,679,688,254,254,254,254,254,685,1588,1948,1963,685,255,685,681,254,683,771,704,696,1553,1971,808,712,789,708,706,697,797,318,2006,1996,1523,1532,607,616,603,595,605,550,554,563,1467,1580,1559,1537,595,591,587,591,588,588,589,590,1533,1601,1561,559,594,589,567,588,557,544,595,806,1532,1549,787,779,706,381,779,768,616,670,711,1539,1957,1554,602,604,563,556,593,555,609,566,609,1546,1884,1991,590,594,591,566,590,587,590,587,1474,1567,1881,552,592,591,565,553,826,707,708,708,1550,1965,1520,776,702,783,380,381,359,628,629,2046,1573,1585,689,634,664,639,639,637,626,664,668,1540,1989,1984,671,665,637,634,669,633,661,662,625,1971,1974,2004,2034,684,254,254,255,255,255,255,1536,1587,1947,2005,630,671,666,665,634,637,628,608,1599,1571,1555,497,213,214,213,214,212,254,255,1515,1596,1586,1987,623,681,677,628,255,255,254,622,1999,1615,1584,2011,623,670,629,671,623,629,669,1505,1860,1605,2000,2040,615,294,285,293,453,317,447,1557,1592,1584,541,623,630,634,679,691,214,212,213,1541,1884,1532,213,220,221,214,219,214,214,254,1524,1556,1598,1528,620,221,214,254,213,255,628,684,1989,1584,1546,284,294,293,284,292,621,331,330,1531,1599,1557,2019,623,631,669,627,614,493,484,486,1572,1586,1962,241,241,486,240,240,243,486,489,1478,1583,1569,2030,616,622,617,219,623,280,254,254,1585,1865,1592,1992,253,679,254,254,252,254,251,688,1590,1597,1955,254,254,255,255,254,254,254,255,1536,1587,1566,1537,627,684,253,668,604,293,283,283,1566,1616,2019,621,623,686,621,683,609,255,617,1510,1599,1903,1550,254,255,254,254,252,254,251,253,1595,1592,1590,2030,255,255,255,255,254,254,677,1508,1569,1596,1538,294,294,285,293,285,212,686,421,1999,1596,2011,294,293,254,223,213,213,253,254,1478,1977,1588,1982,683,624,214,254,220,220,254,219,1540,1603,1554,2041,619,254,254,254,255,254,254,253,1583,1598,1948,2039,253,254,254,623,689,620,294,1517,1602,1574,2042,621,264,250,624,240,240,240,243,1549,1571,243,1530,490,241,241,240,241,487,486,1474,1580,1561,1545,623,685,622,624,624,549,622,684,1534,1593,1587,1532,254,254,254,254,252,};
char triangle_vol[800] = {1,1,15,15,15,3,4,15,15,4,15,1,15,15,15,15,10,2,3,15,10,15,12,15,15,15,15,15,3,0,15,15,15,15,15,15,5,13,15,2,2,7,15,15,15,13,15,15,15,15,15,9,1,15,15,15,15,15,15,15,15,15,1,4,5,15,15,15,15,15,15,15,15,15,6,4,15,15,15,15,5,15,15,15,15,15,15,15,15,15,15,12,15,15,15,15,15,15,15,15,15,2,5,15,15,15,15,15,15,15,15,15,15,15,15,15,15,7,13,15,15,12,15,13,6,15,8,15,15,15,15,15,15,15,15,15,1,15,10,15,15,15,1,15,15,15,12,15,10,15,15,15,15,15,11,15,15,15,3,15,15,15,15,15,15,15,15,15,12,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,1,12,15,15,15,2,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,11,15,15,15,15,15,15,15,15,15,15,15,3,15,15,6,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,2,5,15,15,10,15,15,15,15,15,15,9,15,15,15,15,15,15,15,15,11,15,15,15,15,15,15,15,7,15,15,15,15,15,15,15,15,4,15,15,15,4,15,15,15,15,15,15,15,15,1,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,8,4,15,15,15,15,15,15,15,15,15,15,15,15,15,0,15,15,5,1,15,15,2,15,15,15,15,15,15,15,15,10,15,15,15,14,15,15,15,1,15,15,15,15,15,15,15,3,15,15,15,4,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,3,15,15,15,15,15,3,15,4,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,2,15,15,15,15,15,15,15,5,15,15,4,15,13,15,15,15,15,15,10,15,15,15,14,15,15,15,15,15,15,15,15,9,15,15,15,15,15,15,2,15,15,5,15,14,15,15,3,15,15,15,15,5,15,15,15,14,15,15,15,15,8,15,15,15,15,13,15,15,15,15,15,15,15,15,15,15,11,15,15,4,14,15,12,15,15,15,15,15,4,15,15,15,15,15,15,15,15,11,15,15,4,15,15,15,15,15,15,15,15,15,8,11,15,15,15,15,8,15,15,15,15,15,15,15,12,15,15,15,15,5,15,7,15,15,15,15,15,11,15,15,15,15,0,15,15,1,15,7,15,15,15,15,15,14,15,15,15,15,15,11,15,15,5,6,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,2,15,15,15,15,15,15,15,15,15,14,15,11,15,15,15,15,15,15,15,6,15,15,15,15,8,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,12,15,15,15,15,6,15,15,15,15,15,15,15,15,15,15,1,15,15,15,10,15,15,15,1,15,15,15,6,15,15,15,15,15,15,8,15,15,3,15,15,15,15,6,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,5,15,15,15,11,15,7,15,15,15,15,9,15,15,15,15,15,12,15,12,15,15,15,5,15,15,15,15,15,15,15,15,15,1,15,9,15,8,15,15,15,11,15,12,15,15,12,15,15,15,15,15,15,15,15,15,3,15,15,15,1,15,15,15,15,15,15,15,15,15,};
unsigned short square1_signal[800] = {4397,5753,5372,5373,5757,6020,5986,5419,5418,5418,5419,5418,5418,5418,5418,5355,6038,5899,5696,5439,5417,5418,5418,5418,5418,5421,5418,5693,5997,5482,4381,4604,4603,4603,4603,5421,5371,4682,4682,5482,5987,5319,5365,5375,5375,5375,3328,5372,4604,4604,4603,6072,5702,4381,3328,5417,5416,5417,5417,5417,5416,5418,5696,6032,5985,4381,4382,4382,4605,4604,4605,4605,4604,5320,5694,5986,8124,4681,4681,4681,4666,4680,4381,4381,5376,3704,4027,5985,5189,4766,7423,3329,4756,5357,4603,4604,2687,5319,5482,3481,5661,5482,5480,5427,5363,4604,4603,4604,5694,5481,5998,5694,4603,4603,4603,4604,4604,4604,4603,5355,5190,5190,5190,2687,4603,5422,4603,4604,5083,4684,4681,5190,5985,5986,5190,2896,5366,5369,5366,5369,5318,5364,5362,4007,5986,5482,4416,2685,5364,4604,5426,5368,4603,5422,5481,5985,5986,5986,4602,4603,4603,2533,5374,5356,4603,5374,5086,5986,5986,5636,5652,5631,5528,5529,5507,5357,5535,5923,5985,5190,5190,5319,5218,5223,5319,5286,5226,4662,3188,5318,5317,5305,5191,5228,5229,3179,3185,3185,3189,3187,5191,5985,5986,5321,5228,5289,5265,5235,5235,5234,5233,5234,5286,5985,5687,5670,3576,3581,3574,3576,3576,3409,5482,4755,5693,5189,5318,5229,5305,5229,4733,5218,5229,5198,5228,5215,5190,5199,4026,7324,6032,2618,3186,3187,5229,5235,5235,5986,4026,5987,5218,5300,5266,5215,5235,5269,5233,5233,5190,3936,5694,5481,5621,3585,3578,3576,3576,3481,5372,3335,5986,5986,5985,5321,5418,5376,5409,5377,5379,5421,5375,5319,5350,5441,5439,5353,5373,5418,5418,5375,5372,5372,5373,5318,5319,5472,5352,5370,5422,5417,5373,5368,5370,5368,5436,5985,5317,5319,4603,4604,4603,4603,4605,5286,4664,4665,4727,5190,5482,5085,5325,2899,5361,4522,5360,3016,4604,3317,5694,5986,5986,4416,3318,5482,4603,4604,4604,4604,4604,4603,5087,5319,5692,5481,4604,5357,5353,5356,5356,5630,5636,5482,5631,5665,5696,5538,5693,5530,5528,5506,5695,3308,5482,5696,5985,5190,4866,5322,5284,5271,5288,5195,3180,5231,5190,5319,5986,5316,5229,5234,5235,5233,5235,5267,5267,5233,5482,5986,5190,5274,5269,5234,5235,5234,5215,5191,5233,5693,5986,5651,5654,3577,3572,3571,5630,5627,3407,3326,5540,5950,5986,5482,5220,4765,5231,5219,5231,5223,5318,5234,5318,5318,5482,5484,5272,5228,5232,5233,5233,5235,5270,5267,5318,5482,5986,5195,5275,5232,5231,5199,5854,5525,5528,5529,5513,5518,5482,5538,3581,3575,4855,3582,4813,3323,3329,7415,5319,5484,5479,5371,5376,5377,5378,5375,5368,5375,5417,5336,5349,5441,5367,5371,5375,5370,5368,5369,5416,5417,5355,5444,5472,5322,4604,3387,4604,4604,4605,4605,4605,4605,5086,5318,5481,5482,5370,5370,5418,5373,5373,5373,5376,5318,5190,5985,5482,2895,4522,4523,4522,4523,4520,4604,4605,5986,5986,5986,5695,3387,5444,5427,5368,4605,4604,5421,5359,5986,5986,5695,5481,5358,5422,5421,5368,5366,5424,5422,5190,5317,5986,5190,2617,5319,5370,4666,4681,4726,4731,4944,5190,5986,5482,5181,5366,5366,5418,5443,5319,4524,4519,4522,5986,2476,4521,4521,4537,4538,4523,4534,4523,4523,4537,5986,6022,4521,5986,5366,4538,4523,5418,4521,5363,5421,5463,5086,5986,5985,4662,4683,4681,4665,4680,3315,4735,4736,5989,2896,2897,5319,5358,5366,5376,5367,5321,5181,5058,5058,3054,4575,4581,3014,3014,3018,4577,4576,4581,3014,3016,4603,4603,4603,5498,5319,7419,5326,5411,5371,4657,4603,4603,5000,5694,5986,4603,4603,5368,4603,4603,4600,4603,4599,5666,5190,5986,5985,5481,4604,4605,4604,4604,4604,4604,4604,5695,5986,5986,5482,5423,5481,5421,5419,5512,4665,4665,4659,5986,5985,5190,5365,5366,5369,5366,3369,3239,4605,5366,4999,5986,5482,5986,4603,4604,4603,4604,4600,4603,4599,4602,5190,5987,4026,4603,4604,4604,4604,4604,4604,4604,5424,5695,5987,5986,5986,2618,2618,4667,4666,4666,4520,3320,2901,5191,5482,3305,4684,4665,4604,4540,4521,2475,6581,4604,6583,2473,2492,2477,5418,5370,2477,2474,6581,4533,2473,2477,5189,4026,5986,7112,5361,4604,4603,4603,4604,4604,4603,4603,5086,5695,5985,5082,4602,4603,4604,5368,5335,3323,4682,5987,5985,5985,4689,3308,4626,4595,5418,4576,4573,3008,3028,6620,4581,4580,5175,7107,4579,3012,4575,4577,5059,5063,5951,4558,4520,4007,5371,5371,5370,5370,5369,4603,5369,5369,5696,5318,5985,4603,4603,5366,4604,4603,4600,};
char square1_vol[800] = {0,15,15,15,15,1,7,15,9,15,15,15,15,4,15,15,2,2,9,5,15,15,15,15,7,15,15,15,2,0,5,15,2,15,15,15,2,15,15,15,4,4,15,15,15,15,6,15,4,9,14,2,0,13,15,0,15,15,15,15,15,4,9,3,1,15,13,15,15,15,0,15,15,13,6,5,15,15,15,15,4,4,15,15,15,15,4,8,15,5,15,15,15,8,9,15,13,1,7,1,15,4,9,15,15,15,15,4,10,12,1,5,15,4,10,15,15,15,15,15,15,15,14,6,15,14,15,15,6,15,8,15,15,11,15,15,12,15,15,15,15,15,15,15,15,15,15,7,4,6,11,15,15,15,15,2,15,15,15,15,15,15,15,15,15,14,4,1,15,15,15,15,15,15,15,15,15,8,15,15,15,5,15,15,15,15,15,15,15,15,3,15,15,15,15,15,15,15,15,15,10,15,2,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,4,4,15,15,15,9,15,15,15,2,15,15,15,15,15,15,15,15,15,13,15,0,15,15,15,15,15,15,2,7,6,15,15,15,15,15,15,15,3,6,15,2,15,15,15,15,15,15,15,15,3,15,15,11,15,15,15,15,15,15,12,15,15,15,15,15,15,15,15,15,15,15,15,6,15,2,15,15,15,15,15,5,15,15,15,15,15,7,5,15,15,15,15,15,15,15,15,15,15,15,10,15,15,15,15,15,15,15,15,15,9,5,15,15,4,15,15,15,1,15,15,11,1,1,15,13,15,15,4,15,15,15,14,15,15,15,15,15,15,15,15,15,15,0,8,4,14,15,15,15,15,15,15,15,15,9,15,11,15,15,15,15,15,15,15,15,15,9,15,8,15,15,15,15,15,15,15,15,15,9,15,15,15,15,15,15,15,15,0,15,15,15,14,15,3,15,15,15,15,8,15,15,8,4,15,15,1,15,15,15,15,15,15,15,2,13,15,15,15,15,15,15,15,15,15,15,15,9,7,15,15,15,8,15,15,15,15,15,15,15,15,15,15,15,15,15,15,13,15,15,15,15,15,4,15,15,15,15,15,15,4,15,15,15,15,14,15,15,15,15,1,15,12,15,15,15,0,15,15,15,15,15,15,15,12,5,8,15,15,8,15,15,15,15,15,15,9,15,15,15,15,15,15,15,15,15,2,15,11,15,15,15,1,15,15,15,15,7,15,15,5,15,15,13,15,1,15,15,15,3,15,15,15,15,15,4,15,15,15,3,15,15,15,15,15,15,15,15,11,0,15,15,15,1,6,15,15,7,15,5,15,15,15,15,15,11,11,15,15,15,15,15,15,15,14,15,15,15,15,9,15,15,15,15,15,15,15,0,2,15,15,15,3,15,15,10,15,15,15,6,15,15,15,13,15,15,15,8,15,15,15,15,4,15,15,15,15,15,2,12,15,5,15,15,15,5,14,15,15,15,15,15,3,15,8,13,1,15,1,15,3,15,15,15,15,5,15,15,15,15,1,15,15,15,15,15,15,11,11,15,15,15,15,0,15,15,15,15,15,6,10,1,15,15,15,15,15,15,15,15,11,15,15,15,15,15,15,15,15,15,15,15,8,13,15,15,15,15,8,15,15,15,10,15,15,15,15,15,15,15,15,15,15,15,15,0,4,6,15,15,15,15,15,15,15,15,5,15,9,6,15,15,15,15,15,15,15,15,15,1,15,15,15,15,2,4,15,15,0,15,15,15,10,15,15,15,15,15,15,15,8,1,8,15,15,15,15,15,15,15,15,14,15,6,13,9,2,15,15,15,15,};
unsigned short square2_signal[800] = {2864,5747,5418,5416,5895,6017,5693,5421,5421,5421,5421,5421,5373,5373,5421,5322,6033,5904,5700,5422,5374,5373,5373,5421,5374,5419,5421,5696,6015,3391,4603,5422,4624,5421,5421,5373,5417,4665,4666,5319,5989,5479,5335,5413,5412,5373,7423,5416,4626,4624,4581,6068,5697,4388,3368,5374,5377,5373,5373,5374,5374,5369,5694,6036,5696,4387,4387,4387,4382,4624,5418,4624,5369,5353,5986,5695,5986,4666,4667,4666,4681,4667,5374,4951,5413,3662,5986,5482,5318,4729,3329,7424,4737,5333,4581,4624,6783,5190,5985,5492,5649,5452,5475,5363,5423,4625,5436,5365,5482,5319,5993,3998,4728,4581,4580,4625,4625,4624,4625,5336,4027,4026,5985,4416,6783,5369,5422,4623,5326,4665,4665,5086,4027,5482,5086,5327,5424,5417,5416,5366,5662,4603,5320,4005,4020,5986,2687,6781,5424,5363,5429,5422,5365,5368,5986,5695,5695,4023,5482,4581,5369,4604,4604,4604,5374,5413,8123,6011,6011,5530,5637,5621,5526,5631,5482,5369,5622,5921,6020,4027,4866,5190,5282,5281,5346,5318,5277,4664,7312,5194,5310,5314,6041,5273,5274,3176,7284,3220,3216,7286,5318,4027,5989,5459,5274,5270,5239,5266,5261,5218,5221,5221,5218,5961,5497,5507,3494,3558,3557,3510,3559,3391,5500,5695,3643,5168,5191,5272,5315,5223,4757,5285,5270,5213,5269,5286,4027,5300,4023,3231,6020,4665,3220,3216,5231,5265,5266,6055,4021,5992,5281,5307,5235,5234,5265,5213,5221,5218,5205,3933,5931,5474,5625,5646,5524,3560,3488,7577,5358,3332,4015,5695,6025,5347,5421,5413,5381,5412,5409,5436,5414,5352,5352,5350,5350,5368,5416,5372,5421,5413,5416,5416,5416,5482,5469,5330,5350,5421,5369,5374,5417,5418,5372,5419,5357,4027,5482,5985,5318,4626,4580,4582,4623,5318,4682,4681,4765,5087,5985,5000,5322,6995,5363,2900,5365,5063,4626,7415,5087,4021,5319,4425,7467,5661,4580,5368,4624,4624,5426,3388,5176,5481,5497,5447,4626,5352,5356,5372,5351,5625,5653,5490,5655,5677,5732,5622,5634,5536,5539,5500,3857,3327,5321,5727,3969,2898,5318,5356,5318,5232,5318,5191,3183,5220,5086,5985,6003,5313,5224,5267,5266,5267,5261,5235,5235,5269,5318,5997,5986,5218,5282,5267,5219,5267,5206,5086,5221,3643,6003,5649,5501,3561,3575,3569,5646,5603,3400,5416,5530,5941,3957,5319,5282,5295,5269,5228,5270,5271,5191,5267,5480,5480,5318,5490,5229,5275,5269,5266,5269,5266,5232,5235,5191,5989,5191,5198,5228,5270,5267,5202,5802,5632,5525,5631,5518,5515,5695,5625,3488,3502,4858,3493,7577,5358,3365,3322,5473,5985,5319,5415,5414,5411,5411,5412,5418,5416,5373,5346,5347,5350,5424,5419,5416,5418,5421,5418,5375,5373,5437,5442,5474,5327,4627,7418,4625,4626,4624,4625,4624,4623,4999,5986,5695,5319,5418,5421,5421,5417,5413,5413,5412,3156,5985,5694,5318,6991,4535,4534,4534,4534,5365,7416,4623,6002,5482,6002,5985,3316,5355,5424,5421,4626,4624,5372,5429,5319,4027,5482,5444,5363,5432,5419,5422,5422,5426,5368,5085,5191,4023,5986,6713,5327,5417,4680,4665,7401,7417,4949,5982,5482,5694,5175,5426,5421,5408,5431,5482,4533,2471,4534,5464,6572,4536,4536,4604,5427,4534,4525,4534,2476,2476,5989,6025,4536,6017,5421,2489,4534,5373,4536,5421,5368,5467,5481,5694,5982,4683,4663,4666,4681,4667,3313,4756,4755,5987,4998,6993,5190,3317,5361,5371,5361,5336,5170,5061,5023,4580,6622,2534,7109,7108,3024,3010,3010,3017,7107,7111,3029,4579,4579,3459,5350,7409,5350,5378,5417,4630,4628,5368,5086,5692,5989,3060,4580,5422,4625,4625,4582,4624,4584,5662,5317,5190,7952,4603,4625,4625,4625,4624,4624,4625,4625,5986,5482,5695,5682,5426,5437,5419,5373,5489,4682,4681,2617,6007,4027,5086,5419,5418,3326,5330,3326,3256,5368,4605,3998,5695,5695,5982,3318,5482,4626,4625,4584,4624,4584,3051,5086,5997,4023,4581,4625,4625,4625,4625,5422,4624,5426,5482,5992,5695,4002,4683,4665,4680,4680,4680,2896,7415,6995,5317,5319,7400,4661,4682,4579,2492,4524,6571,2485,2473,5481,6567,4538,4524,5370,5379,6573,6570,2477,4536,6568,5381,5186,4023,6009,4603,5355,4625,4625,4581,4624,4624,4625,5481,4026,5982,5481,4417,4580,4580,4625,5421,5342,7417,4665,6003,5695,5694,5958,5358,4606,4587,5372,2527,2525,3006,3016,2517,2537,4597,5188,3013,3015,4579,3010,3014,5025,5023,5946,2511,4477,3984,5418,5420,5357,5420,5417,5190,5418,5417,4999,5986,5695,5677,3376,5423,4625,4625,4584,};
char square2_vol[800] = {0,15,15,15,11,1,2,15,11,15,15,15,7,15,15,11,3,2,9,2,15,15,15,15,15,15,15,15,3,0,11,15,11,13,15,15,15,15,15,15,4,3,15,15,15,15,1,15,6,11,15,1,0,8,6,15,15,15,15,8,15,15,8,4,4,13,15,13,15,14,15,7,15,15,6,3,15,15,15,15,15,15,15,15,15,2,14,15,1,15,15,3,15,12,7,9,15,15,3,13,15,7,12,15,15,15,1,15,4,15,1,1,15,0,0,6,4,15,12,3,7,8,14,15,15,15,15,15,15,15,15,15,7,15,15,10,15,9,15,15,15,15,15,15,11,5,12,15,15,15,9,15,0,15,15,11,0,15,7,1,15,0,15,15,15,15,12,1,10,15,15,15,15,15,15,3,15,8,15,15,15,15,15,15,15,15,15,15,13,15,3,15,1,15,15,15,11,15,15,15,15,10,2,15,15,3,15,15,15,15,15,15,15,15,15,0,15,3,15,15,11,15,15,15,15,15,15,15,13,15,5,15,15,15,15,15,9,15,13,13,1,4,15,15,15,15,15,15,8,6,15,15,15,15,15,15,15,15,15,15,8,9,15,15,7,15,15,1,15,6,15,14,13,15,15,15,15,15,6,15,15,15,15,15,15,15,15,15,15,15,15,15,15,14,14,11,15,9,15,15,15,15,15,15,5,15,15,9,7,13,5,4,15,15,15,0,15,14,15,15,15,15,15,15,15,15,4,15,15,11,0,15,15,15,1,15,15,13,15,8,15,15,15,15,4,15,15,15,15,15,15,12,13,15,15,15,15,15,15,15,5,15,15,14,3,15,15,15,15,15,15,15,15,15,15,12,8,15,15,15,15,15,15,15,7,15,13,14,2,15,15,15,15,15,15,15,15,15,12,15,14,11,15,15,15,3,15,15,15,15,15,7,15,15,15,15,15,15,15,15,15,9,15,15,15,15,15,15,15,15,15,15,1,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,12,15,15,15,15,8,3,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,7,15,15,11,9,8,0,11,15,15,15,12,15,4,15,15,15,15,15,15,15,15,13,15,4,15,15,12,15,15,15,6,15,15,15,3,10,6,15,5,15,3,8,15,15,15,7,11,7,15,15,15,4,15,15,15,15,15,15,11,6,4,14,15,15,15,1,15,15,14,4,4,15,15,15,15,15,15,15,15,15,13,15,15,15,15,15,15,15,15,15,15,15,0,15,15,15,15,0,15,4,15,15,15,15,15,11,15,15,15,15,7,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,9,4,0,15,15,15,15,15,15,5,12,15,15,15,15,15,15,14,7,14,15,15,5,11,1,15,3,8,9,6,3,5,15,14,14,15,2,1,12,15,15,11,13,11,9,3,6,15,15,15,15,15,15,15,8,6,3,15,15,15,15,15,15,15,15,15,15,1,12,15,10,1,10,8,15,15,9,15,15,5,10,13,3,4,15,12,15,15,15,15,11,15,3,15,15,6,15,15,15,6,11,15,10,15,15,15,15,15,15,15,11,15,1,9,15,15,15,15,15,2,15,15,15,15,14,1,7,3,15,2,4,2,14,15,11,15,1,12,6,15,1,1,15,15,15,10,15,15,6,5,12,15,15,15,15,15,15,15,5,15,15,15,7,15,15,15,15,5,15,15,8,15,15,15,13,10,15,3,15,6,15,15,15,15,3,15,15,15,2,10,15,};
char noise_vol[800] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,15,12,9,10,4,0,0,0,0,0,0,0,9,8,4,6,0,0,0,0,0,0,0,13,7,7,5,0,0,0,0,0,0,0,0,11,6,4,0,0,0,0,0,0,0,0,8,6,6,7,4,0,0,0,0,0,0,0,11,7,5,4,0,0,0,0,0,0,0,7,8,7,5,0,0,0,0,0,0,0,0,10,8,6,7,6,0,0,0,0,0,0,6,10,10,8,7,5,0,4,0,0,0,0,12,10,8,9,5,0,0,0,0,0,0,0,11,7,6,7,5,0,0,0,0,0,0,9,12,11,8,6,0,0,0,0,0,0,0,13,8,9,7,5,0,0,0,0,0,0,8,11,9,6,5,0,0,0,0,0,0,0,13,8,6,8,5,0,0,0,0,0,0,6,13,10,9,6,6,0,0,0,0,0,0,9,8,6,9,7,0,0,0,0,0,0,4,13,10,7,6,4,0,0,0,0,0,0,11,10,8,5,6,0,0,0,0,0,0,0,12,7,5,4,0,0,0,0,0,0,0,6,7,6,8,0,0,0,0,0,0,0,0,15,6,5,4,0,0,0,0,0,0,0,5,11,7,5,5,0,0,0,0,0,0,0,13,10,9,8,4,0,0,0,4,4,0,14,11,9,5,7,0,0,0,0,0,0,0,9,8,7,10,6,0,0,0,0,0,0,0,13,9,6,7,5,0,0,0,0,0,0,8,14,10,8,5,5,0,0,0,0,0,0,11,10,7,9,5,4,0,0,0,0,0,7,12,7,5,5,4,0,0,0,0,0,0,13,8,6,6,7,0,0,0,0,0,0,7,13,11,8,7,5,4,0,4,0,0,0,8,8,6,11,4,4,0,0,0,0,0,0,13,10,7,7,0,0,0,0,0,0,0,6,11,8,6,0,0,0,0,0,0,0,0,10,8,6,5,4,0,0,0,0,0,0,4,11,7,7,5,0,0,0,0,0,0,0,11,7,6,4,4,0,0,0,0,0,0,0,10,7,5,5,0,0,0,0,0,0,0,10,7,6,4,0,0,0,0,0,0,0,0,13,8,5,7,0,0,0,0,0,0,0,6,10,7,5,4,0,0,0,0,0,0,0,11,8,6,7,4,0,0,0,0,0,0,7,10,7,5,5,0,0,0,0,0,0,0,12,8,8,6,0,0,0,0,0,0,0,0,12,7,6,5,0,0,0,0,0,0,0,7,9,7,8,4,0,0,0,0,0,0,0,10,7,5,5,0,0,0,0,0,0,0,7,9,7,5,5,0,0,0,0,0,0,0,12,7,5,5,4,0,0,0,0,0,0,0,9,7,7,6,0,0,0,0,0,0,0,12,7,6,5,0,0,0,0,0,0,0,0,9,7,5,4,0,0,0,0,0,0,0,10,9,6,6,0,0,0,0,0,0,0,0,12,7,7,7,0,0,0,0,0,0,0,7,7,6,5,4,0,0,0,0,0,0,0,11,7,7,6,0,0,0,0,0,0,0,4,11,6,5,4,0,0,0,0,0,0,0,11,7,6,8,6,4,0,0,0,0,0,4,12,10,7,5,0,0,0,0,0,0,0,10,8,8,6,4,0,0,0,0,0,0,0,12,7,5,4,0,0,0,0,0,};