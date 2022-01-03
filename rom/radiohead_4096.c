int num_audio_wait = 6;
int num_audio_signal = 800;
unsigned short triangle_signal[800] = {126,281,151,231,228,225,230,230,229,224,226,226,224,226,224,228,225,225,231,241,169,169,169,170,151,170,166,166,170,267,275,276,276,394,265,262,256,255,253,254,267,269,270,268,267,267,269,404,409,394,266,394,396,404,402,401,399,406,402,401,401,398,401,301,309,310,677,681,293,264,258,255,253,254,267,680,269,676,678,267,678,675,266,681,678,680,680,679,678,676,700,680,680,679,678,679,679,678,678,500,502,503,502,503,502,502,503,498,502,503,502,503,504,502,504,495,502,503,504,502,503,504,502,504,500,503,502,503,504,502,503,502,413,242,395,397,171,174,403,402,170,402,403,58,56,402,402,402,169,405,403,169,170,168,168,169,170,204,202,203,201,201,198,398,402,392,676,676,682,679,77,76,76,82,685,676,676,677,674,685,201,197,198,685,211,223,221,222,221,677,688,680,680,680,678,679,679,295,282,279,501,266,255,253,255,252,503,253,255,268,267,265,265,265,267,265,265,262,502,502,502,504,503,504,502,505,502,503,503,503,502,501,268,265,262,254,252,254,394,394,413,405,403,403,404,404,266,264,267,266,264,405,396,404,396,396,396,416,403,402,398,402,401,401,401,389,677,676,675,676,675,675,675,676,689,674,675,674,675,675,675,675,687,675,675,675,674,675,675,675,673,680,678,678,676,677,678,677,676,501,503,197,503,176,176,175,170,170,168,169,504,504,502,165,176,171,503,504,503,503,504,503,504,503,501,503,501,169,504,168,213,199,195,395,197,169,156,76,75,75,99,403,198,195,196,197,198,403,196,203,395,396,224,219,229,219,402,413,403,403,402,402,402,403,404,230,688,680,681,685,223,224,223,228,228,689,682,680,679,680,231,228,223,680,678,675,676,674,677,677,671,682,679,679,679,678,679,680,277,263,256,252,252,251,254,253,503,544,501,503,502,500,267,255,269,505,269,266,268,502,502,501,502,501,500,502,503,503,503,504,502,283,295,277,265,254,253,252,254,395,405,407,405,395,405,395,404,405,403,414,392,267,269,263,267,258,394,267,403,403,403,402,402,402,402,402,686,676,679,680,679,677,679,679,697,680,678,677,676,680,678,678,672,677,675,677,676,677,674,678,692,681,681,679,679,679,681,679,679,545,501,231,190,176,170,57,56,56,170,503,503,502,503,175,169,170,498,504,503,502,210,501,502,499,503,501,166,499,501,501,502,197,499,406,396,169,403,151,397,153,404,412,403,404,100,396,100,221,229,113,213,224,404,403,403,403,402,404,404,403,402,403,402,403,403,402,689,678,680,680,230,228,684,679,697,680,682,681,680,681,680,680,686,686,680,679,685,683,240,244,243,688,277,276,277,267,276,269,271,386,392,252,255,251,253,255,251,254,268,268,270,266,270,271,265,406,267,278,406,405,403,403,405,404,409,393,408,393,394,404,402,394,404,687,681,679,679,683,681,680,679,690,683,678,679,677,683,687,682,682,269,682,684,678,683,679,681,683,687,310,299,313,682,680,686,680,495,127,255,256,255,499,502,503,502,503,503,277,266,268,255,501,504,267,268,501,503,503,503,502,296,492,501,501,503,503,502,501,202,197,391,268,202,253,394,202,202,202,412,407,404,405,407,203,203,388,203,198,202,406,202,202,393,281,197,300,300,313,300,299,393,182,176,384,686,685,686,686,619,686,685,688,685,685,685,684,685,687,687,690,688,688,683,683,684,683,681,684,689,684,684,682,681,683,687,618,691,502,502,502,253,254,170,170,169,169,504,505,505,500,500,155,164,500,504,532,535,538,177,177,176,177,499,171,502,503,502,170,541,171,};
char triangle_vol[800] = {10,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,4,15,15,14,15,15,15,5,15,15,15,10,15,15,15,15,15,15,15,15,15,15,2,15,15,15,15,6,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,4,15,15,15,15,15,15,15,15,15,15,15,15,15,15,14,15,15,15,15,4,15,15,13,15,15,15,15,15,15,4,15,15,15,15,15,9,15,15,15,15,15,15,15,15,15,15,14,15,15,15,15,15,6,15,15,15,15,15,15,15,15,15,10,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,10,15,15,15,15,15,15,15,15,15,15,10,15,15,3,15,7,15,15,15,15,15,14,15,15,15,15,15,15,15,15,15,15,15,15,2,15,15,15,15,15,15,15,15,15,6,15,15,15,15,7,15,15,15,13,15,15,15,15,15,15,15,8,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,10,15,0,5,5,15,15,15,15,15,15,15,15,15,15,15,15,15,15,1,15,15,15,15,15,15,8,15,15,15,15,15,15,15,15,15,15,8,15,15,15,15,15,9,15,15,15,15,14,15,15,7,15,15,15,6,9,15,15,15,15,15,5,15,15,15,15,6,15,15,15,15,15,15,15,15,15,15,14,15,15,15,10,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,10,15,15,15,15,15,10,10,2,6,1,6,15,15,15,14,15,4,15,15,15,15,15,15,15,15,15,15,1,11,15,15,15,15,15,15,15,10,15,9,15,15,15,15,15,15,15,15,15,15,15,15,9,15,15,15,9,15,15,15,15,15,6,15,15,15,15,12,15,15,15,15,15,15,15,3,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,5,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,14,5,11,3,2,6,9,15,15,15,15,15,15,9,15,3,15,15,15,15,15,15,8,15,15,15,15,15,15,15,4,15,15,15,15,15,15,12,15,5,15,15,15,15,15,15,15,15,15,14,0,15,15,15,15,15,15,15,15,15,15,15,15,15,15,9,15,15,15,15,15,15,13,9,15,11,15,15,15,15,6,15,12,15,11,15,15,15,15,15,15,14,15,8,9,6,1,2,15,15,15,15,15,15,15,15,15,15,15,15,12,15,6,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,8,15,5,15,15,15,15,15,15,8,1,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,6,15,15,15,15,15,15,15,15,7,15,2,15,15,15,15,15,15,15,12,15,6,15,15,15,15,14,15,15,15,0,15,15,15,15,15,13,15,15,15,15,15,15,15,15,15,15,3,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,4,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,3,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,8,15,15,7,15,3,15,15,15,15,15,15,8,15,15,15,15,15,15,15,15,15,1,15,3,15,15,15,15,15,15,12,15,15,15,15,15,15,15,15,8,15,15,15,15,15,15,15,15,15,15,15,15,};
unsigned short square1_signal[800] = {4348,4427,4397,4558,4544,4545,4541,4541,4553,4544,4546,4546,4544,4547,4544,4544,4545,4545,4558,4577,4435,4434,4434,4436,4397,4436,4428,4428,4435,4630,4646,4648,4638,4886,4626,4620,4607,4605,4602,4605,4631,4636,4637,4632,4630,4629,4634,4902,4910,4886,4902,4904,4888,4903,4900,4899,4899,4904,4902,4900,4900,4900,4900,4699,4701,4714,5361,3307,4664,4606,2565,4606,4602,4604,4630,5423,5436,5433,5431,5433,5436,5438,5636,5441,5433,5441,5437,5439,5438,5433,5641,5446,5368,5447,5444,5446,5441,5443,5442,5103,5105,5105,5105,5104,5104,5104,5105,5102,5104,5104,5104,5104,5104,5104,5105,5086,5105,5105,5105,5104,5104,5104,5103,5104,5110,5111,5109,5108,5107,5107,5102,5110,4864,4580,2839,2855,4438,2395,4888,4899,2387,4899,4901,4211,4891,2216,4891,4890,2385,2855,4902,4429,4435,4433,4433,4435,4437,4505,4500,4502,4499,4498,4492,4901,4902,4883,5361,5361,5364,4258,4251,4248,4248,5363,5448,5439,5433,5433,5433,5433,2446,2443,4492,5432,5364,5438,5424,5428,5425,5439,5327,5447,5447,5447,5443,5446,5444,4686,4659,4633,3115,3109,4606,4602,4605,4600,5109,3051,3067,4631,3114,3065,4627,4625,4629,4625,3064,3076,3110,3066,5107,5106,5111,5108,5111,5113,5112,5110,5110,5110,5110,5096,4631,4625,4612,4603,4601,4603,4888,4888,4628,4903,2854,4901,4904,4902,2854,4622,4630,4628,4622,4902,4888,4903,4902,4902,4902,4927,4902,4901,4900,4900,4900,4901,4900,4912,5359,5359,5359,5436,5435,5436,5434,5435,5458,5434,5436,5434,5436,5436,5436,5436,5458,5434,5434,5435,5436,5438,5436,5435,5355,5451,5364,5441,5438,5439,5439,5438,5438,5105,5108,5108,5110,5153,4448,4446,2390,6482,4433,4434,5104,5112,5109,2377,5155,4437,6483,5105,5106,5108,5109,5110,5107,5106,5113,5112,5113,6482,6480,2384,4521,4493,4486,2836,2855,4434,2360,2351,2347,2348,4294,4901,2842,2834,2441,2840,4499,2855,2836,2856,2855,2496,4545,4534,4542,4901,4900,4919,2854,4902,4902,4901,4902,4902,4903,4554,5446,5442,5442,5464,5441,2497,2495,2497,5445,5453,5433,5446,5442,5438,5433,5441,4553,5433,5439,5428,5439,5433,5441,5439,5425,5448,5446,5446,5447,5445,5443,5441,4650,2561,3069,4601,4599,3049,7156,3061,5110,5097,3068,3066,3062,3066,3063,3068,3128,5110,2587,3069,3116,3069,5105,5105,5106,5105,5095,5110,5111,5111,5110,5110,5110,4662,4688,4648,4622,4603,4603,4600,4604,4888,4903,4904,2855,4889,4902,4887,4903,4904,4901,4921,4905,4903,4636,2854,4629,4612,4887,4629,4902,4902,4902,4901,4900,4902,4902,4901,5368,5360,5447,5441,5441,5364,5448,5437,5515,5443,5442,5443,5439,5442,5441,5449,5417,5439,5438,5441,5439,5441,5437,5442,5467,5444,5448,5443,5444,5444,5446,5442,5443,5092,3062,4558,4475,4449,2387,4210,5110,4209,4437,5110,5105,5107,5113,5119,6482,2388,5095,5108,3059,5108,2467,5104,5107,5098,5112,5105,5109,5093,5109,5110,2450,2444,5107,4904,4903,4434,4902,2351,2354,6451,4889,2861,4901,4902,2450,2842,2449,2459,2504,2498,2857,2855,4901,4900,4901,4902,4900,4901,2855,4902,4900,2853,4901,4901,4901,4901,5357,5442,5361,5438,5440,2496,3394,5437,5484,5439,5442,5441,5444,5441,5440,5437,5442,3394,5442,5440,5441,3395,3391,4585,4581,3159,4648,4639,4648,5439,4648,4635,4639,4866,4883,4887,4887,4888,4884,4605,4596,4603,4631,4902,4636,4628,4636,4638,4623,4906,4629,4904,4903,4902,4901,4902,4904,4903,2856,4905,4906,4903,4903,4903,4901,4902,4902,5438,5439,5440,5438,5441,5441,5441,5441,3400,5438,5360,5439,5436,5451,5436,5442,5438,4632,5437,5451,3392,5442,5436,5443,5438,5457,2652,4693,3391,5439,5452,5438,5442,7155,2554,2561,2560,2560,7163,5103,3069,3067,5110,5110,4648,4603,4631,7159,3124,5109,4629,4635,5110,5110,5111,5113,5109,4689,5021,5113,5110,5110,5110,5103,5102,4493,2444,2855,4904,2854,2856,2854,2853,4499,4498,4906,2854,2854,4902,4903,2856,2855,2855,4501,2854,2855,2855,2855,2854,4903,4658,2840,4698,4904,4698,4699,2858,4886,2857,4448,4859,5437,5441,5441,5441,5359,3392,2722,3391,5433,5436,5433,5450,5443,5447,3389,5454,5444,3395,3392,5438,5438,5447,3400,3405,3307,3301,3307,5439,5452,5449,3391,5430,3436,5114,5112,5111,7159,3068,4436,4436,4435,5106,5110,5108,5108,5117,5109,4406,4425,5108,5118,5153,5162,5165,4451,4450,4447,5163,5110,5115,5110,5110,5110,5118,5110,4447,};
char square1_vol[800] = {15,10,8,15,15,15,15,15,15,10,9,15,15,15,15,15,15,15,15,15,15,12,15,15,6,4,6,15,15,15,15,15,15,15,15,15,15,8,15,15,15,9,15,15,15,15,15,15,15,15,14,15,15,6,7,11,7,10,12,7,13,15,15,5,15,1,15,15,15,15,15,15,15,15,15,15,15,7,15,1,15,15,15,15,15,15,15,15,5,15,5,15,15,15,15,15,15,15,0,11,15,15,15,15,15,15,15,8,15,15,8,15,15,15,15,15,8,15,15,15,15,15,15,15,15,15,2,15,15,15,15,15,15,9,15,7,15,15,7,15,15,15,15,15,15,15,15,15,14,12,15,15,15,15,15,15,15,15,15,15,15,9,15,15,15,15,15,15,5,15,15,15,15,15,15,15,15,15,15,15,15,15,15,8,15,11,15,15,15,15,1,15,15,15,15,15,5,15,10,9,15,15,15,10,15,15,15,7,15,15,15,15,15,15,15,15,15,15,13,15,15,15,15,15,15,15,15,15,12,15,15,12,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,4,15,15,15,15,15,15,15,15,15,15,15,15,15,15,7,15,15,15,15,15,15,8,15,7,15,15,15,15,15,15,15,15,15,15,15,15,15,15,0,15,15,15,15,15,15,6,15,15,15,15,15,15,15,8,15,15,15,15,14,15,15,15,15,15,15,1,15,15,15,15,14,15,15,15,8,15,14,15,8,0,15,9,15,15,15,15,15,15,15,15,15,15,15,13,15,15,15,15,15,15,11,15,15,15,15,15,15,15,15,15,15,15,15,2,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,14,15,15,15,15,15,15,15,15,12,15,15,15,15,15,11,15,15,15,6,15,15,13,15,0,15,10,15,4,15,8,15,15,8,15,15,15,15,15,15,15,6,15,15,2,15,15,15,15,15,8,15,15,15,15,15,15,15,15,14,15,11,15,15,15,15,6,11,15,15,15,15,15,15,15,15,15,15,13,15,15,15,15,15,15,15,12,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,1,11,15,15,15,15,6,15,15,15,14,12,15,15,15,15,15,15,13,15,15,8,15,15,15,15,15,15,15,15,15,15,15,1,4,5,15,15,15,15,15,15,3,15,15,15,12,2,15,15,15,15,15,15,15,15,12,3,15,15,15,15,15,15,15,15,5,0,15,15,15,15,15,15,15,13,15,15,15,15,15,15,15,12,15,12,15,15,15,4,15,15,15,15,15,1,15,15,15,15,15,15,15,15,15,15,14,6,15,15,15,15,11,15,15,15,15,15,15,15,15,8,7,7,10,1,1,8,2,15,15,15,8,15,15,15,15,15,15,15,15,11,15,2,15,10,15,15,15,15,15,9,15,1,15,12,15,11,15,15,4,15,8,15,15,15,15,15,15,15,15,15,15,15,15,10,15,15,15,15,15,2,15,15,15,15,15,15,15,4,15,15,15,15,15,8,15,15,2,15,15,3,15,15,15,9,15,15,15,15,0,15,15,15,15,15,15,15,15,15,10,15,15,15,15,15,15,6,15,1,15,6,15,15,15,6,15,15,15,3,15,15,15,15,15,15,15,15,9,11,15,1,15,6,4,15,3,15,9,15,3,15,15,15,15,15,15,15,4,15,15,12,15,15,15,13,15,12,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,12,15,};
unsigned short square2_signal[800] = {4351,4435,4405,4541,4552,4550,4555,4555,4543,4551,4549,4549,4551,4549,4552,4551,4550,4550,4541,4561,4428,4428,4429,4427,4435,4398,4435,4434,4428,4655,4640,4638,4647,4904,6671,4611,4622,2557,2554,2556,2585,4905,4648,4651,4903,2582,4904,4889,4907,4903,4889,4886,4902,4888,4890,4891,4891,4887,4889,4890,4890,4890,4890,4714,4713,4701,3312,7404,4682,4625,6661,4623,2554,2557,2584,5433,4633,4625,4631,4629,5368,5364,5666,5439,5355,5357,5422,5368,5367,5366,5512,5428,5423,5428,5427,5364,5426,5364,5430,5090,5092,5162,5161,5162,5162,5161,5162,5089,5159,5163,5159,5159,5160,5159,5162,5001,5159,5160,5160,5158,5163,5160,5159,5160,5100,5102,5153,5153,5159,5103,5158,5098,4882,2857,2856,2840,4445,4444,4902,4891,6483,4892,4211,4900,4900,6312,4900,4901,4434,6950,4889,4433,4428,4429,4429,4428,4447,2863,4492,2857,4493,4493,4499,4890,4890,4906,5364,5433,5366,5447,2203,2200,2200,5426,5439,5441,5436,5450,5366,5457,6545,4491,4499,5316,5423,4542,5374,5432,5458,5366,5332,5427,5423,5428,5428,5368,5348,4664,4683,4652,5108,3067,4622,4583,4623,3053,5155,7153,7162,3116,4630,3108,4605,3066,3063,4609,7159,7172,3072,7162,3062,5109,5156,5099,5097,5097,5095,5097,5098,5097,5097,5110,2587,4609,4619,4886,4888,4888,4903,4902,4873,4888,4901,4890,4887,4889,6936,4609,4654,4905,4887,4888,4901,4889,4889,4889,4889,4866,4890,4890,4890,4890,4891,4890,4891,4879,5436,5436,5434,5453,5452,5450,5450,5450,5464,5356,5357,5357,5355,5357,5450,5358,5321,5357,5360,5358,5356,5355,5356,5356,5433,5441,5425,5449,5361,5449,5452,5355,5355,5098,5153,4490,5113,5122,4438,4439,2388,2386,5106,4428,3054,3064,5098,6473,5115,2389,2387,5099,5098,5096,5153,5155,5156,5155,5095,5096,5153,2380,2382,2382,4537,4498,2438,2838,2839,4429,6456,6447,6443,6444,4298,4890,2852,6928,2838,2854,4493,2840,2856,6951,6951,2504,4550,4524,4554,4890,4890,4869,2841,4889,4890,4890,4890,4889,4888,2506,5453,5364,5461,5441,5456,2502,6591,6598,2496,3403,5455,3398,3395,5467,5470,4552,4542,5427,5356,5366,5357,5438,5366,5364,5365,5423,5427,5423,5368,5428,5428,5426,4636,6657,7164,7152,3052,7145,3061,7157,5154,5103,7164,7162,5110,7159,7158,7163,4635,5151,4635,3110,7215,7167,3129,5098,3063,5157,5109,5096,5097,5097,5097,5096,5097,4682,4683,4638,4626,4622,2855,4584,4886,4902,4888,4887,4903,4901,4889,4903,4889,4888,4890,4912,4884,4888,4649,6949,4904,4619,4902,4879,4889,2854,4889,4890,4890,4890,4890,4890,5357,5441,5364,5366,5366,5439,5364,5365,5513,5428,5366,5366,5423,5446,5364,5441,5439,5366,5366,5366,5369,5355,5428,5355,5480,5423,5428,5423,5428,3400,5366,5366,5427,5180,7157,4538,4486,4460,6483,2390,4209,5107,2389,4435,5098,5097,3066,5150,2386,6484,5097,5099,5110,5095,2460,3051,3060,5104,5151,5099,5094,5111,5118,2454,6546,6540,5118,4887,4888,4429,4888,6447,6450,2353,4902,2859,4890,4890,6546,6948,6545,4302,6600,6594,6952,6950,4889,4890,4890,4890,4891,4890,4903,4890,4890,2842,4890,4890,4890,4890,5368,5360,5438,5431,4557,5442,5439,5363,5508,3391,3393,3394,3396,3391,3395,3392,3392,5438,5464,5431,5463,5441,5428,4597,2536,4630,4639,4647,5447,4629,4639,5452,4647,4813,4905,4904,4903,4903,4905,2557,4586,2556,4636,4889,4904,2579,4648,2590,2574,4886,4911,4636,4888,4889,4890,4889,4888,4889,6935,2855,2650,4888,4888,4888,4890,4889,4889,5361,5373,5369,5359,3395,3395,5368,5373,3395,5448,5432,5441,3392,3400,3389,5364,5424,2586,5355,3400,5436,5447,5467,5446,3307,3389,3282,3301,3305,5449,5441,5452,3403,7148,3062,6657,6655,6655,3069,5151,7164,7161,5106,3133,4638,4627,6683,3065,3119,5118,2586,4632,7159,5151,5153,5111,3061,5107,3243,5111,5151,5152,5152,5099,3051,4498,6547,4905,2855,2841,4887,2842,2842,4493,4493,4887,2842,6949,4890,4888,6951,6950,6935,4490,6950,6950,6936,6950,6937,4889,4690,2854,4888,4698,2856,4714,4884,4903,2840,2754,7405,3392,5447,5358,5448,5431,3395,4434,5356,3392,5452,5448,5441,5447,3392,5442,5482,5474,7498,5428,5433,5441,3399,5442,5364,3301,3304,3389,5449,5441,5439,5438,3388,3400,3069,5156,5157,3110,7164,4428,4427,7157,5098,3061,5099,3059,5113,5092,2357,4417,5098,5148,5118,5114,3119,4457,4458,4437,5171,7158,4437,5156,5153,5156,5111,5163,4437,};
char square2_vol[800] = {15,15,3,15,15,15,15,9,12,15,15,15,15,8,15,15,15,15,13,11,2,15,10,11,15,15,15,15,9,2,15,15,15,7,15,15,15,15,15,15,15,15,15,15,15,7,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,12,15,15,15,15,8,15,8,15,15,15,15,15,15,15,15,15,15,15,15,14,15,15,15,15,3,15,12,15,13,15,15,15,15,15,4,12,15,15,15,15,15,15,12,15,15,15,15,15,6,15,15,14,9,15,15,15,15,9,15,15,15,15,15,15,15,15,10,0,15,15,15,15,15,1,15,15,3,10,15,15,15,15,8,15,15,15,15,15,15,15,15,12,15,15,15,15,15,15,15,4,15,15,15,15,15,8,15,15,15,15,15,15,15,15,15,15,15,15,15,13,15,15,15,15,15,13,9,4,15,15,15,15,5,15,15,15,15,5,15,6,13,10,15,15,15,15,15,15,15,15,15,15,15,15,9,15,15,15,15,15,15,15,15,0,15,15,15,15,13,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,8,15,15,15,15,15,15,15,15,15,13,7,1,2,8,10,14,11,15,15,15,15,8,15,9,15,15,15,15,15,15,15,15,15,6,15,15,15,15,15,15,4,8,15,15,15,15,15,15,5,15,15,9,15,15,15,3,15,1,9,6,15,15,15,15,15,15,15,15,15,6,15,15,15,15,15,15,15,15,13,15,15,15,15,15,15,15,15,15,15,15,3,15,15,15,15,15,15,15,15,15,15,3,14,15,15,4,15,15,3,2,15,15,15,15,15,15,14,15,15,15,15,15,15,5,15,15,9,15,15,15,15,15,15,15,15,15,15,15,15,9,15,2,15,6,15,15,15,15,15,15,15,11,15,15,5,4,15,15,15,15,15,10,15,4,15,15,15,15,15,15,15,15,15,15,4,15,5,15,15,15,15,4,15,15,15,15,15,5,13,4,15,4,15,15,15,15,15,15,15,15,13,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,12,15,15,3,15,15,15,15,15,15,15,15,15,15,15,15,15,14,15,15,15,15,15,15,15,15,15,15,15,15,15,15,11,15,15,11,15,15,15,15,15,15,15,9,15,15,15,9,15,15,8,15,6,15,15,15,15,15,15,15,15,15,15,15,15,15,15,1,12,15,15,15,11,15,15,15,15,15,15,15,15,15,15,15,15,15,10,15,15,15,7,1,1,1,15,15,15,15,15,15,10,15,10,15,1,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,6,15,15,15,15,15,15,15,15,15,15,15,15,15,2,1,15,15,15,15,15,15,15,15,15,15,1,15,15,15,15,15,15,15,15,15,15,8,15,15,15,15,15,15,15,15,15,15,15,15,15,4,15,15,11,15,15,13,15,15,15,11,1,15,15,15,9,15,9,15,3,15,7,15,15,7,15,15,7,9,13,15,15,15,4,15,15,15,15,15,15,15,15,5,15,15,15,15,15,15,15,1,15,15,15,15,15,2,15,15,1,12,15,8,0,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,2,15,5,15,0,15,8,11,11,15,15,2,15,15,15,15,15,15,15,11,15,15,15,15,15,15,15,15,15,15,1,15,15,15,1,15,15,15,15,15,15,15,15,15,15,1,15,2,15,15,15,2,15,15,15,15,15,15,15,6,15,15,15,15,12,15,13,15,15,15,15,15,};
char noise_vol[800] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,0,0,0,0,0,0,0,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,9,14,13,10,7,7,7,6,13,11,11,9,9,9,5,0,12,15,12,10,8,7,5,5,11,12,8,9,6,7,5,5,0,7,5,5,0,0,0,0,0,5,5,6,0,5,0,0,0,6,5,5,5,0,0,0,0,0,0,6,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,11,9,9,8,6,6,0,0,12,10,8,8,6,7,6,0,11,11,11,11,8,9,6,0,8,12,8,9,6,7,6,7,9,11,8,7,9,7,0,0,0,7,8,7,11,10,6,7,7,8,9,5,6,5,0,0,0,0,5,7,5,0,0,0,0,0,9,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,9,9,6,7,5,0,0,0,9,7,8,6,5,0,0,0,7,9,7,7,5,5,0,0,0,10,7,8,5,6,5,0,0,5,5,5,0,5,5,0,0,5,6,0,0,0,0,0,0,0,6,5,0,0,0,0,0,0,0,6,0,5,0,0,0,0,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,8,9,10,9,7,5,6,0,0,9,8,9,6,7,6,5,8,9,9,6,6,0,0,0,0,7,8,7,7,5,5,5,5,10,7,6,5,0,0,0,0,5,6,8,9,0,6,5,0,0,6,7,8,6,0,0,0,0,5,5,5,5,0,0,0,0,7,0,0,0,0,0,0,0,0,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,9,7,8,6,6,0,0,0,7,10,7,7,5,6,0,0,0,9,7,7,5,6,0,5,5,7,11,6,7,5,5,0,0,9,9,8,0,0,0,0,0,0,6,6,0,0,0,0,0,0,7,6,6,0,0,0,0,0,0,0,5,6,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,8,8,8,6,6,6,0,8,10,12,9,8,6,0,0,0,15,12,9,9,7,7,5,5,12,9,12,8,10,7,9,5,11,0,0,0,0,0,0,0,0,5,0,0,0,0,0,0,0,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,13,9,9,8,7,6,5,0,10,11,7,7,6,6,7,0,6,15,8,8,6,7,6,0,5,11,10,10,9,6,6,6,0,10,11,0,0,0,0,0,6,5,9,7,0,0,0,0,5,0,7,6,7,8,8,7,7,0,5,11,10,10,7,5,0,0,0,7,0,0,0,0,0,0,0,5,0,0,0,0,0,0,0,9,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,12,10,7,7,7,5,0,8,11,10,9,9,7,7,7,8,13,10,8,8,6,5,7,0,9,10,9,7,6,6,8,6,9,11,9,9,8,6,0,0,0,7,11,8,8,7,5,0,0,10,11,12,7,0,0,0,0,0,6,5,6,5,0,7,6,7,};