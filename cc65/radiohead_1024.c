int num_audio_wait = 1;
int num_audio_signal = 800;
unsigned short triangle_signal[800] = {
    123, 156, 135, 155, 279, 154, 154, 154, 151, 151, 139, 150, 231, 232, 231,
    230, 230, 228, 208, 209, 226, 228, 228, 227, 225, 226, 234, 243, 171, 202,
    207, 229, 231, 231, 229, 208, 209, 226, 226, 227, 228, 228, 229, 228, 208,
    226, 227, 226, 211, 209, 228, 229, 228, 227, 227, 226, 224, 210, 225, 228,
    230, 205, 205, 205, 232, 231, 229, 206, 229, 206, 207, 207, 206, 232, 232,
    232, 236, 242, 241, 238, 242, 171, 170, 170, 170, 170, 170, 170, 170, 170,
    170, 170, 171, 171, 172, 170, 154, 153, 153, 150, 138, 151, 174, 154, 155,
    156, 157, 157, 157, 157, 156, 154, 153, 153, 152, 152, 152, 153, 154, 275,
    278, 278, 277, 277, 278, 278, 277, 279, 279, 284, 243, 293, 386, 391, 382,
    398, 378, 272, 276, 276, 274, 273, 244, 245, 275, 274, 274, 247, 246, 248,
    273, 273, 274, 274, 274, 273, 272, 247, 274, 272, 272, 248, 278, 282, 280,
    280, 279, 277, 281, 246, 285, 245, 280, 280, 245, 284, 247, 280, 277, 275,
    281, 274, 277, 279, 274, 279, 280, 282, 387, 394, 398, 390, 393, 388, 500,
    380, 277, 277, 385, 279, 382, 279, 278, 282, 242, 378, 278, 389, 387, 392,
    384, 396, 383, 493, 387, 394, 389, 392, 395, 395, 388, 391, 395, 398, 389,
    391, 394, 399, 391, 508, 502, 501, 383, 385, 497, 495, 393, 496, 393, 396,
    388, 389, 397, 393, 388, 388, 493, 394, 389, 387, 395, 396, 388, 382, 382,
    380, 381, 380, 381, 379, 376, 366, 363, 134, 553, 586, 589, 598, 593, 558,
    352, 830, 299, 294, 244, 281, 817, 276, 273, 273, 274, 273, 273, 273, 274,
    274, 274, 275, 248, 274, 275, 247, 245, 245, 273, 277, 282, 276, 281, 829,
    826, 828, 822, 826, 825, 825, 820, 820, 819, 276, 823, 821, 820, 819, 817,
    821, 824, 821, 278, 276, 276, 815, 805, 601, 598, 597, 594, 593, 584, 239,
    246, 276, 277, 819, 820, 819, 820, 825, 825, 822, 816, 816, 821, 820, 819,
    816, 818, 822, 818, 812, 812, 808, 582, 809, 808, 803, 794, 747, 605, 605,
    594, 577, 156, 586, 584, 582, 743, 580, 582, 585, 588, 583, 583, 587, 588,
    593, 594, 594, 594, 590, 587, 725, 587, 588, 589, 596, 587, 586, 589, 594,
    594, 591, 590, 589, 583, 582, 102, 531, 525, 510, 510, 511, 512, 529, 511,
    510, 509, 508, 510, 531, 531, 511, 510, 509, 510, 513, 530, 509, 509, 510,
    507, 511, 531, 512, 508, 506, 506, 508, 512, 512, 367, 510, 509, 529, 537,
    513, 510, 509, 509, 509, 531, 532, 508, 510, 509, 509, 511, 534, 530, 506,
    507, 506, 508, 511, 529, 508, 506, 508, 506, 528, 530, 509, 511, 512, 509,
    511, 507, 506, 507, 509, 510, 527, 511, 506, 507, 506, 510, 526, 512, 509,
    508, 510, 511, 533, 532, 512, 506, 506, 508, 511, 530, 527, 508, 507, 508,
    511, 537, 509, 511, 511, 510, 507, 511, 510, 535, 530, 511, 509, 509, 512,
    531, 532, 513, 509, 507, 507, 510, 510, 511, 509, 505, 505, 509, 512, 511,
    508, 509, 506, 134, 387, 386, 391, 280, 241, 238, 228, 386, 101, 501, 384,
    195, 390, 399, 399, 397, 174, 172, 173, 176, 175, 175, 177, 192, 388, 393,
    392, 392, 389, 396, 393, 368, 503, 171, 85,  85,  85,  85,  512, 57,  57,
    58,  57,  57,  57,  57,  57,  57,  56,  57,  57,  56,  56,  84,  84,  384,
    397, 393, 395, 384, 500, 171, 173, 171, 170, 169, 171, 175, 174, 171, 381,
    502, 500, 503, 504, 502, 502, 156, 170, 503, 171, 174, 171, 168, 169, 169,
    170, 169, 169, 170, 170, 169, 169, 171, 170, 170, 170, 170, 176, 183, 201,
    205, 230, 203, 203, 199, 200, 203, 205, 502, 205, 202, 197, 201, 203, 203,
    201, 198, 202, 202, 202, 202, 387, 387, 389, 390, 395, 384, 494, 392, 390,
    388, 497, 387, 837, 593, 746, 593, 592, 599, 590, 585, 583, 583, 174, 583,
    582, 580, 577, 81,  80,  79,  77,  77,  77,  76,  76,  76,  76,  76,  76,
    76,  77,  79,  83,  88,  91,  854, 585, 588, 588, 590, 591, 592, 595, 593,
    595, 599, 583, 579, 824, 581, 580, 580, 575, 827, 569, 575, 569, 567, 836,
    203, 201, 565, 204, 202, 196, 197, 201, 202, 855, 172, 835, 833, 830, 570,
    203, 560, 838, 206, 209, 207, 208, 226, 227, 225, 208, 208, 208, 227, 227,
    208, 208, 208, 225, 226, 823, 568, 714, 699, 690, 695, 914, 155, 585, 587,
    583, 579, 581, 583, 584, 584, 590, 586, 586, 587, 591, 591, 589, 590, 589,
    586, 583, 582, 585, 590, 586, 585, 585, 556, 302, 540, 293, 284, 278, 282,
    281, 284, 381, 283, 275,
};
char triangle_vol[800] = {
    6,  1,  5,  10, 15, 2,  3,  6,  7,  2,  3,  7,  15, 15, 15, 5,  15, 15, 9,
    15, 15, 15, 6,  15, 11, 15, 5,  15, 10, 1,  15, 15, 15, 11, 15, 15, 13, 15,
    13, 15, 9,  15, 15, 15, 15, 15, 15, 15, 15, 7,  13, 15, 0,  15, 4,  15, 15,
    15, 15, 3,  15, 11, 14, 6,  0,  15, 11, 14, 15, 15, 7,  15, 1,  15, 9,  2,
    0,  12, 14, 8,  6,  3,  9,  3,  6,  8,  1,  6,  7,  0,  5,  5,  0,  5,  12,
    6,  13, 5,  5,  14, 2,  10, 1,  5,  2,  5,  10, 12, 6,  3,  8,  5,  1,  2,
    4,  5,  4,  2,  0,  15, 4,  15, 1,  15, 15, 13, 15, 2,  15, 10, 7,  15, 13,
    15, 12, 15, 15, 4,  15, 15, 15, 15, 15, 15, 11, 7,  12, 15, 7,  15, 6,  12,
    15, 15, 1,  12, 15, 3,  15, 1,  8,  15, 15, 7,  15, 13, 15, 15, 1,  11, 7,
    15, 15, 9,  15, 15, 10, 5,  15, 15, 2,  15, 15, 10, 14, 7,  15, 2,  11, 6,
    14, 8,  13, 8,  3,  5,  15, 12, 15, 15, 15, 15, 15, 15, 12, 10, 1,  15, 13,
    13, 15, 15, 12, 1,  11, 14, 12, 15, 9,  15, 10, 13, 7,  15, 9,  13, 6,  14,
    6,  3,  10, 4,  13, 15, 12, 4,  6,  3,  5,  15, 8,  15, 1,  15, 6,  15, 8,
    15, 4,  15, 1,  15, 0,  12, 4,  10, 3,  9,  1,  10, 0,  11, 4,  5,  15, 15,
    5,  6,  12, 11, 15, 12, 15, 15, 7,  15, 5,  15, 15, 15, 15, 15, 15, 15, 15,
    14, 4,  11, 4,  15, 3,  15, 15, 15, 15, 15, 3,  15, 15, 9,  15, 15, 15, 15,
    4,  6,  10, 12, 15, 12, 15, 9,  3,  4,  11, 15, 15, 15, 5,  15, 15, 13, 13,
    3,  2,  8,  12, 14, 14, 13, 12, 4,  15, 12, 1,  13, 15, 15, 15, 14, 10, 9,
    0,  13, 15, 15, 15, 14, 7,  1,  9,  14, 11, 15, 15, 11, 5,  1,  12, 8,  3,
    0,  15, 14, 5,  7,  15, 15, 15, 15, 14, 8,  2,  11, 15, 15, 15, 14, 6,  2,
    10, 15, 15, 15, 12, 6,  2,  5,  11, 15, 15, 13, 8,  1,  3,  9,  14, 2,  15,
    15, 15, 15, 9,  1,  12, 15, 15, 15, 13, 9,  4,  15, 15, 15, 14, 7,  2,  13,
    15, 15, 15, 10, 5,  7,  13, 15, 13, 10, 6,  5,  7,  15, 15, 15, 5,  15, 15,
    15, 15, 12, 10, 3,  15, 15, 15, 15, 7,  5,  9,  15, 15, 15, 9,  1,  3,  15,
    15, 15, 11, 9,  1,  11, 13, 8,  3,  15, 15, 15, 15, 13, 2,  3,  15, 15, 15,
    15, 8,  1,  13, 15, 15, 15, 10, 8,  3,  15, 15, 15, 12, 4,  3,  8,  15, 14,
    14, 8,  12, 4,  10, 15, 15, 15, 15, 8,  6,  9,  15, 15, 15, 13, 7,  1,  15,
    15, 15, 14, 5,  5,  11, 15, 15, 14, 8,  1,  8,  14, 15, 15, 13, 15, 11, 15,
    6,  1,  15, 9,  10, 4,  8,  15, 15, 15, 1,  15, 1,  15, 15, 15, 15, 15, 15,
    15, 15, 15, 2,  15, 2,  15, 5,  14, 10, 7,  15, 15, 15, 15, 11, 1,  15, 8,
    15, 10, 15, 15, 15, 4,  15, 15, 15, 15, 1,  15, 13, 2,  14, 12, 11, 12, 13,
    1,  1,  12, 15, 3,  15, 8,  10, 11, 15, 15, 7,  7,  7,  9,  5,  7,  8,  1,
    4,  15, 13, 15, 0,  15, 10, 15, 8,  15, 15, 9,  15, 5,  15, 15, 15, 15, 15,
    15, 15, 15, 15, 15, 3,  15, 15, 15, 15, 15, 4,  15, 15, 15, 15, 15, 15, 15,
    15, 15, 15, 15, 15, 1,  15, 4,  15, 6,  14, 5,  14, 4,  14, 4,  14, 8,  15,
    13, 15, 15, 13, 7,  0,  9,  15, 9,  15, 15, 10, 2,  15, 15, 15, 15, 15, 15,
    15, 15, 15, 15, 5,  15, 15, 15, 15, 15, 7,  15, 3,  15, 15, 6,  5,  15, 15,
    15, 15, 14, 6,  0,  5,  3,  15, 15, 15, 12, 15, 2,  12, 12, 14, 15, 15, 15,
    2,  15, 11, 15, 15, 15, 15, 2,  13, 15, 15, 15, 8,  15, 15, 14, 15, 15, 12,
    15, 15, 12, 6,  10, 9,  15, 14, 15, 15, 15, 14, 15, 15, 10, 6,  12, 8,  2,
    6,  0,  15, 5,  8,  14, 15, 15, 15, 15, 7,  3,  10, 15, 15, 15, 15, 8,  2,
    10, 15, 15, 15, 13, 9,  3,  5,  10, 12, 15, 11, 15, 15, 10, 15, 15, 15, 7,
    15, 11,
};
unsigned short square1_signal[800] = {
    4341, 4347, 4347, 4406, 4594, 4404, 4404, 4402, 4372, 4396, 4372, 4396,
    4553, 4554, 4551, 4552, 4550, 4546, 4515, 4541, 4543, 4546, 4546, 4545,
    4543, 4515, 4559, 4591, 4435, 4500, 4511, 4510, 4508, 4506, 4509, 4513,
    4514, 4512, 4513, 4546, 4512, 4547, 4511, 4548, 4513, 4511, 4513, 4513,
    4517, 4515, 4549, 4547, 4547, 4513, 4547, 4514, 4515, 4516, 4514, 4548,
    4554, 4510, 4510, 4510, 4509, 4511, 4512, 4511, 4510, 4511, 4512, 4512,
    4510, 4506, 4502, 4503, 4500, 4582, 4582, 4496, 2594, 4435, 4433, 4433,
    4433, 4432, 4432, 4433, 4431, 4432, 4432, 4431, 4433, 4433, 4435, 4433,
    4403, 4401, 4400, 4372, 4372, 4397, 4402, 4403, 4406, 4407, 4410, 4411,
    4411, 4410, 4406, 4403, 4402, 4401, 4401, 4399, 4400, 4402, 4402, 4595,
    4645, 4641, 4643, 4645, 4645, 4646, 4591, 4647, 2549, 4673, 4584, 4674,
    4858, 4883, 4859, 4904, 4673, 3055, 4642, 2550, 4638, 4594, 4586, 4586,
    4643, 4638, 4638, 4589, 4590, 4594, 4636, 4638, 4638, 4639, 4638, 4594,
    4635, 4590, 4638, 4636, 4636, 4594, 3058, 4672, 3044, 3053, 3050, 4643,
    4663, 3067, 4672, 4586, 3054, 4589, 3075, 4673, 3070, 3061, 3063, 4643,
    4652, 4638, 4643, 4641, 3067, 4644, 3053, 3024, 3023, 4901, 4895, 4890,
    4906, 5017, 4906, 4879, 2546, 3054, 4878, 3017, 3017, 4586, 3067, 4648,
    4581, 4673, 4585, 3046, 4889, 4889, 3033, 4890, 4857, 3027, 4890, 4901,
    4890, 4901, 4895, 4901, 4890, 4906, 4906, 4890, 4890, 4890, 4895, 5041,
    4895, 5072, 5015, 5000, 5000, 5001, 5005, 5015, 5012, 5012, 5015, 4997,
    5000, 5000, 4921, 4895, 4891, 5023, 5037, 5005, 4921, 4905, 4906, 5015,
    4901, 4895, 4845, 4890, 4839, 4846, 4850, 4839, 4688, 4825, 4858, 4346,
    3283, 5331, 5336, 5346, 5336, 3273, 3268, 3491, 3450, 5539, 3117, 5533,
    5538, 5594, 5606, 4635, 2550, 2550, 2550, 2550, 4640, 4640, 4640, 4591,
    3116, 4640, 4641, 3116, 4588, 4588, 2550, 4641, 4640, 3107, 5604, 5599,
    5601, 5594, 5599, 5565, 5594, 5599, 5594, 5603, 5601, 5603, 5606, 5601,
    5604, 3164, 3159, 5594, 5599, 5604, 5599, 5598, 5594, 5584, 5574, 5467,
    5316, 5321, 5312, 5316, 5311, 4572, 5687, 5624, 5624, 5620, 5615, 5604,
    5597, 5596, 5598, 5593, 5584, 5584, 5636, 5565, 5565, 5584, 5593, 5592,
    5594, 5599, 5589, 5539, 5538, 5518, 5538, 5539, 5544, 5514, 5321, 5331,
    5316, 5301, 4404, 5493, 5488, 5472, 5472, 5483, 5487, 5498, 5483, 5483,
    5488, 5472, 5488, 5488, 5472, 5483, 5472, 5493, 5488, 5492, 5483, 5492,
    5492, 5472, 5498, 5488, 5472, 5472, 5472, 5326, 5326, 5326, 5497, 5498,
    3254, 5093, 3609, 4863, 4871, 4864, 5093, 5093, 5082, 5078, 5064, 5072,
    5078, 5106, 5088, 5078, 5077, 5064, 5078, 5088, 5102, 5083, 5069, 5072,
    5069, 5083, 5093, 5093, 5083, 5064, 5069, 5069, 5088, 3575, 4696, 5069,
    4882, 5093, 3634, 5078, 5069, 5068, 5069, 5078, 5102, 5092, 5074, 5073,
    5069, 5078, 3621, 3611, 3611, 4874, 4876, 4877, 5093, 5093, 5097, 5093,
    5064, 5063, 5068, 5093, 3626, 5069, 4897, 5078, 5088, 5083, 5069, 5068,
    5064, 5078, 5093, 5088, 5078, 4876, 4886, 5069, 5088, 5093, 5088, 5078,
    4874, 4874, 3621, 3630, 3632, 5073, 5067, 5064, 5073, 5083, 5088, 5093,
    5068, 4881, 5064, 5078, 3148, 5093, 5093, 5083, 5078, 4890, 5082, 3592,
    3714, 3714, 5078, 4906, 5069, 5088, 3726, 3714, 3725, 5069, 5068, 5073,
    5088, 5088, 5083, 5072, 4889, 5068, 5074, 5088, 5083, 5069, 5068, 5054,
    4348, 4889, 4890, 4879, 3023, 3013, 2988, 4548, 2875, 2450, 2827, 2821,
    2826, 2858, 4890, 5001, 5002, 5051, 4439, 4439, 2395, 2395, 2395, 4449,
    2811, 4886, 4885, 5011, 5021, 4885, 4895, 4891, 4696, 5012, 2389, 2395,
    4885, 4881, 4886, 4881, 4211, 4211, 4211, 4211, 4211, 4211, 4211, 4211,
    4209, 4207, 4210, 4208, 4888, 2215, 2216, 2216, 4885, 5016, 5011, 5022,
    5042, 5047, 5035, 5039, 4436, 4434, 5050, 2386, 2817, 5041, 5044, 2993,
    5045, 5041, 5041, 5041, 5049, 5049, 5054, 4433, 5055, 4439, 5053, 5055,
    5063, 4432, 4432, 4435, 4433, 4433, 4436, 4435, 4433, 4433, 4437, 4434,
    4434, 4434, 4436, 4444, 4462, 4496, 2952, 4550, 4500, 4497, 4495, 4495,
    4499, 4506, 2881, 4504, 4496, 4493, 4496, 4498, 4500, 4496, 4493, 4496,
    4496, 4495, 4498, 5042, 5006, 5015, 4921, 4996, 5000, 5000, 5000, 5021,
    5000, 5015, 4906, 5464, 5447, 5341, 5341, 5326, 5321, 5336, 5326, 5326,
    5297, 4442, 5326, 5467, 5508, 5280, 4257, 4255, 4253, 4251, 4251, 4251,
    4250, 4249, 4248, 4250, 4248, 4247, 4248, 4251, 4254, 4262, 4271, 5442,
    5601, 5336, 5326, 5488, 5336, 5312, 5316, 5336, 5316, 5326, 5316, 5306,
    5311, 5472, 5331, 5459, 5469, 5472, 5492, 5487, 5469, 5472, 5489, 5487,
    5488, 5474, 5484, 2453, 5471, 2443, 2441, 5474, 4495, 4443, 5477, 5472,
    5472, 5488, 5322, 5457, 5472, 5472, 5341, 4512, 4508, 4510, 5442, 5346,
    5351, 5346, 5346, 5346, 5447, 5452, 5346, 5346, 5442, 5351, 5336, 5341,
    5331, 5326, 5326, 5336, 5331, 3785, 4402, 5488, 5472, 5488, 5488, 5498,
    5498, 5488, 5477, 5483, 5487, 5493, 5488, 5488, 5473, 5483, 5473, 5311,
    5478, 5472, 5482, 5482, 5312, 5472, 5472, 5478, 5528, 4688, 3480, 4678,
    4660, 3088, 4658, 4587, 2549, 4850, 2544, 2547,
};
char square1_vol[800] = {
    2,  11, 1,  1,  9,  6,  4,  1,  1,  5,  3,  4,  15, 3,  15, 15, 7,  15, 15,
    15, 15, 1,  15, 5,  15, 15, 15, 8,  11, 7,  15, 15, 3,  11, 15, 5,  15, 15,
    10, 1,  1,  2,  3,  9,  7,  15, 11, 15, 9,  15, 15, 12, 15, 15, 15, 15, 13,
    11, 15, 15, 14, 12, 9,  15, 5,  11, 10, 9,  14, 6,  15, 3,  15, 5,  2,  6,
    3,  10, 0,  1,  2,  7,  3,  8,  4,  5,  7,  3,  5,  6,  1,  4,  5,  0,  3,
    15, 5,  14, 10, 3,  1,  7,  5,  8,  10, 9,  6,  1,  8,  9,  1,  4,  5,  4,
    2,  2,  3,  4,  5,  15, 15, 9,  15, 3,  15, 15, 14, 15, 10, 15, 13, 12, 15,
    12, 14, 6,  15, 3,  15, 4,  15, 15, 15, 5,  15, 15, 15, 15, 15, 15, 15, 15,
    4,  15, 15, 11, 8,  15, 15, 15, 15, 0,  14, 15, 13, 1,  11, 2,  15, 7,  14,
    4,  8,  15, 5,  4,  9,  8,  15, 2,  15, 15, 7,  8,  5,  15, 11, 0,  7,  14,
    5,  12, 3,  4,  3,  8,  0,  3,  6,  9,  4,  3,  8,  2,  2,  8,  10, 0,  14,
    9,  6,  12, 7,  7,  11, 8,  12, 5,  14, 5,  13, 4,  15, 7,  13, 6,  14, 9,
    12, 5,  10, 11, 7,  12, 6,  15, 9,  11, 4,  12, 5,  15, 15, 3,  15, 11, 2,
    13, 15, 2,  15, 10, 15, 0,  9,  0,  8,  5,  10, 2,  12, 1,  7,  1,  6,  15,
    15, 15, 12, 15, 15, 8,  15, 11, 5,  5,  9,  9,  8,  4,  11, 6,  5,  2,  13,
    15, 15, 15, 2,  14, 15, 5,  15, 10, 15, 9,  15, 15, 13, 14, 15, 15, 12, 3,
    15, 15, 15, 12, 8,  5,  1,  7,  9,  10, 1,  15, 13, 5,  7,  15, 15, 15, 12,
    14, 15, 12, 8,  1,  6,  9,  14, 13, 7,  7,  15, 15, 15, 15, 12, 2,  9,  9,
    11, 15, 15, 15, 11, 2,  6,  13, 15, 15, 12, 9,  5,  2,  7,  12, 8,  13, 14,
    13, 3,  15, 15, 8,  1,  11, 15, 15, 15, 15, 9,  3,  9,  15, 15, 15, 15, 9,
    1,  4,  12, 15, 15, 15, 10, 3,  2,  9,  14, 11, 15, 15, 5,  3,  7,  15, 9,
    7,  4,  4,  15, 15, 13, 1,  9,  15, 15, 15, 14, 5,  5,  11, 15, 15, 15, 9,
    2,  7,  13, 15, 15, 10, 4,  5,  9,  15, 15, 2,  12, 11, 2,  15, 6,  12, 1,
    10, 15, 15, 15, 15, 6,  5,  13, 15, 2,  4,  7,  5,  3,  0,  15, 15, 12, 5,
    5,  11, 15, 15, 5,  5,  8,  15, 15, 11, 2,  12, 15, 15, 15, 15, 5,  6,  5,
    15, 15, 15, 10, 1,  3,  2,  0,  4,  6,  4,  4,  12, 14, 15, 14, 7,  0,  4,
    13, 13, 8,  15, 15, 4,  4,  4,  15, 2,  5,  9,  0,  9,  15, 15, 2,  5,  9,
    4,  12, 15, 15, 15, 9,  1,  4,  14, 15, 15, 10, 1,  6,  13, 10, 5,  15, 9,
    1,  6,  1,  15, 14, 15, 4,  4,  3,  14, 15, 14, 4,  6,  13, 15, 15, 15, 15,
    0,  6,  0,  15, 10, 0,  1,  14, 1,  2,  7,  15, 1,  4,  15, 3,  15, 10, 15,
    15, 15, 15, 15, 6,  15, 15, 7,  2,  15, 10, 12, 11, 3,  11, 6,  8,  6,  6,
    5,  7,  3,  8,  13, 2,  5,  10, 8,  1,  8,  6,  15, 3,  15, 7,  12, 9,  15,
    10, 12, 3,  15, 0,  6,  15, 2,  15, 14, 15, 15, 8,  15, 15, 7,  15, 15, 1,
    13, 5,  8,  6,  6,  15, 15, 15, 15, 14, 10, 9,  15, 14, 15, 15, 15, 4,  3,
    15, 15, 15, 15, 15, 4,  8,  4,  9,  1,  12, 1,  8,  4,  9,  4,  8,  2,  4,
    0,  3,  11, 15, 15, 15, 15, 13, 15, 8,  15, 15, 15, 15, 10, 4,  15, 11, 15,
    15, 15, 2,  5,  15, 12, 10, 15, 15, 3,  15, 8,  14, 15, 15, 15, 15, 15, 8,
    3,  9,  15, 15, 15, 15, 5,  2,  15, 15, 15, 10, 2,  4,  10, 15, 15, 15, 10,
    7,  13, 6,  14, 15, 15, 15, 3,  15, 15, 15, 13, 15, 2,  15, 15, 15, 15, 15,
    7,  5,  6,  9,  10, 13, 15, 13, 1,  4,  7,  15, 15, 15, 14, 7,  4,  2,  10,
    14, 4,  4,  15, 8,  0,  11, 15, 15, 15, 15, 11, 1,  9,  15, 15, 15, 15, 11,
    15, 3,  12, 15, 15, 15, 12, 5,  2,  13, 15, 11, 2,  15, 6,  15, 13, 7,  9,
    6,  8,
};
unsigned short square2_signal[800] = {
    4326, 4411, 4365, 4404, 4637, 4368, 4402, 4439, 4397, 4373, 4394, 4373,
    4509, 4506, 4549, 4509, 4509, 4512, 4542, 4518, 4516, 4514, 4514, 4513,
    4516, 4543, 4508, 4635, 4409, 4442, 4544, 4547, 4548, 4553, 4547, 4543,
    4541, 4544, 4544, 4513, 4546, 4511, 4547, 4511, 4544, 4546, 4546, 4545,
    4539, 4541, 4511, 4511, 4513, 4546, 4513, 4544, 4542, 4540, 4543, 4512,
    4509, 4547, 4546, 4546, 4550, 4546, 4545, 4545, 4546, 4545, 4542, 4542,
    4544, 4552, 4554, 4555, 4560, 4641, 4641, 4578, 4586, 4407, 4408, 4409,
    4409, 4409, 4410, 4409, 4411, 4410, 4410, 4410, 4439, 4409, 4439, 4410,
    4433, 4434, 4372, 4396, 4396, 4372, 4443, 4435, 4431, 4431, 4429, 4429,
    4429, 4429, 4431, 4433, 4435, 4439, 4442, 4373, 4373, 4439, 4436, 4637,
    4591, 4592, 4592, 4590, 4591, 4591, 4641, 4591, 2547, 4664, 4581, 4676,
    4874, 4888, 4873, 4901, 4653, 3053, 4639, 2582, 4594, 4590, 2546, 4589,
    4639, 4641, 4597, 4639, 4594, 4590, 4594, 4597, 4594, 4641, 4597, 4638,
    4638, 4638, 4594, 4597, 4594, 4635, 3053, 4648, 3034, 3051, 3053, 4590,
    4652, 3063, 4653, 4589, 3061, 4586, 3071, 4653, 3074, 3063, 3057, 4639,
    4648, 4594, 4639, 4643, 3063, 4646, 3061, 3027, 3019, 4896, 4899, 4887,
    4901, 5020, 5001, 4881, 4638, 4883, 4874, 3023, 3023, 4643, 3063, 4574,
    4644, 3024, 4643, 3053, 4884, 4884, 3027, 4894, 4853, 3024, 4894, 4895,
    4887, 4899, 4898, 4899, 4895, 4904, 4902, 4895, 4887, 4895, 4899, 4891,
    4892, 5051, 5013, 5005, 4924, 5005, 5010, 5013, 5007, 5005, 5012, 5000,
    4997, 4997, 4916, 5020, 4895, 5021, 5040, 5002, 4917, 4891, 5005, 5013,
    4899, 4890, 4841, 4894, 4874, 4850, 4858, 4845, 4845, 4828, 4854, 4840,
    3280, 5326, 5340, 5341, 5341, 3268, 3272, 3493, 3453, 5543, 3121, 5538,
    5534, 5596, 5611, 4598, 4641, 4635, 4640, 4640, 4593, 4594, 4594, 4641,
    3121, 4592, 4592, 3121, 4641, 4641, 4635, 2550, 4595, 3105, 5600, 5590,
    5606, 5596, 5594, 5550, 5599, 5594, 5598, 5599, 5603, 5606, 5603, 5598,
    5600, 3161, 3161, 5590, 5594, 5600, 5594, 5594, 5598, 5589, 5584, 5472,
    5321, 5316, 5316, 5312, 5307, 4369, 5680, 5621, 5620, 5624, 5609, 5555,
    5601, 5594, 5596, 5596, 5575, 5588, 3136, 5570, 5563, 5589, 5591, 5596,
    5554, 5604, 5594, 5543, 5543, 5523, 5543, 5543, 5548, 5509, 5326, 5336,
    5312, 5297, 4430, 5488, 5492, 5468, 5468, 5487, 5484, 5517, 5487, 5487,
    5483, 5477, 5483, 5492, 5477, 5473, 5483, 5497, 5483, 5488, 5472, 5488,
    5488, 5477, 5502, 5492, 5468, 5467, 5468, 5321, 5321, 5330, 5493, 5502,
    3257, 5100, 3606, 4859, 4874, 4869, 5101, 5101, 5087, 5074, 5068, 5069,
    5074, 5102, 5102, 5074, 5072, 5068, 5074, 5083, 5104, 5088, 5073, 5077,
    5064, 5088, 5096, 5088, 5081, 5068, 5072, 5073, 5092, 3593, 4825, 4891,
    4886, 5088, 3630, 5074, 5072, 5064, 5072, 5074, 5093, 5088, 5078, 5069,
    5064, 5081, 3616, 3616, 3606, 4876, 4874, 4874, 5078, 5083, 5100, 5078,
    5068, 5067, 5064, 5088, 3632, 5073, 4369, 5093, 5083, 5088, 5073, 5072,
    5068, 5081, 5088, 5092, 5082, 4874, 4881, 5073, 5092, 5088, 5083, 5074,
    4876, 4876, 3624, 3626, 3626, 5078, 5064, 5068, 5069, 5078, 5092, 5088,
    5073, 4886, 5068, 5074, 3154, 5083, 5099, 5088, 5074, 4895, 5078, 3582,
    3724, 3724, 5074, 4911, 5073, 5092, 3728, 3710, 3728, 5072, 5072, 5069,
    5092, 5083, 5078, 5069, 4898, 5064, 5078, 5092, 5087, 5073, 5064, 5063,
    4364, 4879, 4894, 4884, 3027, 3008, 2994, 4511, 2877, 6545, 5062, 5010,
    4485, 2861, 4895, 5012, 5006, 5055, 4406, 2394, 2398, 6492, 4444, 2399,
    2813, 4890, 4881, 5007, 5041, 4890, 4892, 4895, 4698, 5015, 4436, 2391,
    4265, 2391, 4881, 4886, 4881, 4881, 4940, 4876, 4207, 4207, 4207, 4208,
    4887, 4210, 4208, 4210, 4208, 6312, 6312, 6312, 4916, 4901, 5007, 5025,
    5036, 5050, 5048, 5048, 5039, 5035, 5052, 4435, 2821, 5050, 5042, 3003,
    5049, 5045, 5045, 5059, 5053, 5053, 5062, 5044, 5062, 5052, 2817, 4441,
    4431, 4410, 4410, 4408, 4408, 4409, 4410, 4408, 4409, 4409, 4408, 4408,
    4410, 4409, 4407, 4484, 4474, 4443, 6977, 4509, 4503, 2965, 4444, 4444,
    4551, 2872, 2878, 4551, 4552, 2445, 2850, 4551, 4551, 2447, 2834, 2447,
    2447, 2447, 2858, 5045, 5011, 5036, 4924, 4926, 5005, 5005, 4997, 5018,
    5005, 5000, 4859, 5469, 5443, 5346, 5345, 5331, 5326, 5331, 5331, 5321,
    5301, 5292, 5330, 5471, 5513, 5255, 4260, 4261, 4246, 4247, 4247, 4247,
    2200, 2200, 4250, 4247, 4250, 4251, 4250, 4247, 4262, 4255, 4267, 5437,
    5599, 5331, 5336, 5483, 5331, 5316, 5326, 5331, 5321, 5331, 5321, 5311,
    5307, 5468, 5457, 5464, 5467, 5477, 5488, 5484, 5467, 5322, 5484, 5483,
    5492, 5477, 5487, 5467, 5474, 5484, 4488, 5472, 5464, 4495, 5483, 5468,
    5477, 5483, 5318, 5462, 5468, 5477, 5346, 4515, 4548, 4544, 5447, 5341,
    5353, 5350, 5341, 5341, 5443, 5448, 5442, 5351, 5437, 5353, 5341, 5336,
    5326, 5321, 5331, 5340, 5335, 3778, 4434, 5492, 5477, 5483, 5492, 5493,
    5493, 5479, 5474, 5477, 5483, 5488, 5493, 5492, 5477, 5487, 5477, 5316,
    5482, 5477, 5478, 5477, 5315, 5477, 5477, 5482, 5523, 4693, 3471, 4673,
    4662, 4652, 4662, 4645, 6682, 4846, 4651, 3078,
};
char square2_vol[800] = {
    4,  8,  4,  2,  12, 2,  4,  7,  5,  1,  6,  4,  14, 11, 15, 4,  15, 8,  1,
    1,  15, 15, 1,  15, 2,  15, 9,  10, 0,  10, 15, 15, 15, 15, 10, 15, 15, 14,
    15, 15, 15, 15, 15, 15, 15, 9,  15, 11, 15, 15, 9,  14, 2,  10, 4,  15, 14,
    15, 8,  1,  13, 15, 15, 13, 15, 15, 15, 15, 12, 15, 6,  15, 2,  15, 15, 15,
    14, 6,  6,  7,  6,  3,  2,  1,  4,  2,  2,  4,  2,  1,  3,  1,  5,  2,  1,
    1,  11, 2,  3,  3,  4,  1,  12, 3,  11, 4,  8,  11, 4,  6,  8,  3,  4,  8,
    7,  0,  2,  3,  6,  12, 5,  15, 2,  15, 8,  10, 15, 3,  8,  15, 11, 11, 15,
    11, 15, 6,  12, 3,  15, 15, 15, 15, 7,  7,  15, 15, 7,  4,  15, 14, 5,  8,
    15, 15, 5,  14, 9,  4,  15, 8,  2,  15, 14, 15, 11, 1,  12, 15, 15, 6,  12,
    6,  8,  15, 5,  3,  8,  8,  15, 0,  15, 12, 8,  9,  6,  15, 12, 0,  7,  14,
    5,  12, 3,  4,  8,  7,  15, 11, 5,  10, 4,  15, 8,  12, 15, 4,  15, 1,  13,
    10, 7,  12, 7,  6,  12, 9,  12, 6,  15, 6,  14, 4,  15, 6,  13, 5,  14, 5,
    12, 6,  11, 10, 15, 12, 5,  15, 10, 12, 5,  12, 5,  15, 15, 13, 15, 11, 3,
    13, 15, 0,  5,  11, 15, 1,  9,  1,  14, 4,  12, 2,  10, 1,  6,  4,  6,  15,
    15, 15, 12, 15, 15, 8,  15, 11, 6,  6,  9,  9,  8,  15, 3,  11, 7,  8,  15,
    15, 5,  14, 1,  14, 1,  4,  12, 15, 7,  15, 8,  15, 13, 14, 15, 15, 12, 4,
    15, 15, 15, 12, 8,  5,  0,  7,  9,  10, 1,  15, 13, 5,  6,  15, 15, 15, 11,
    14, 15, 12, 8,  1,  6,  10, 14, 13, 8,  7,  15, 15, 15, 15, 13, 2,  8,  9,
    14, 15, 15, 15, 11, 2,  3,  13, 15, 15, 11, 8,  4,  2,  7,  12, 8,  13, 14,
    13, 15, 15, 15, 8,  1,  11, 15, 15, 15, 15, 10, 2,  9,  15, 15, 15, 15, 9,
    2,  4,  12, 15, 15, 15, 9,  3,  2,  9,  14, 10, 15, 15, 5,  3,  7,  15, 8,
    7,  4,  3,  15, 15, 14, 2,  9,  15, 15, 15, 15, 4,  6,  11, 15, 15, 15, 9,
    1,  7,  14, 15, 15, 10, 3,  5,  9,  14, 15, 2,  0,  4,  1,  15, 6,  11, 0,
    11, 15, 15, 15, 14, 7,  6,  13, 15, 3,  5,  7,  6,  3,  1,  15, 15, 12, 3,
    5,  10, 15, 15, 5,  5,  9,  15, 15, 11, 3,  11, 15, 15, 15, 15, 6,  6,  4,
    15, 15, 15, 10, 0,  4,  2,  0,  4,  6,  5,  4,  12, 15, 15, 15, 7,  0,  5,
    12, 13, 8,  15, 15, 5,  5,  5,  15, 3,  5,  9,  0,  10, 15, 15, 2,  5,  9,
    4,  11, 15, 15, 15, 8,  2,  5,  14, 15, 15, 11, 2,  6,  13, 1,  5,  15, 8,
    1,  6,  1,  15, 13, 4,  6,  14, 7,  14, 15, 14, 4,  5,  2,  15, 15, 0,  10,
    15, 7,  1,  15, 10, 2,  2,  14, 2,  2,  7,  5,  4,  15, 2,  3,  15, 5,  14,
    14, 15, 7,  5,  5,  8,  6,  15, 15, 15, 15, 4,  15, 5,  12, 9,  9,  6,  6,
    5,  5,  3,  1,  5,  2,  15, 11, 7,  0,  9,  6,  15, 3,  15, 7,  12, 10, 9,
    10, 15, 5,  15, 15, 15, 10, 9,  1,  14, 7,  8,  13, 2,  10, 10, 2,  13, 6,
    1,  15, 0,  15, 15, 15, 4,  1,  3,  11, 5,  10, 15, 8,  15, 15, 10, 11, 15,
    15, 15, 15, 15, 13, 4,  8,  6,  9,  9,  12, 0,  8,  4,  9,  3,  1,  2,  4,
    0,  4,  12, 15, 15, 15, 15, 13, 3,  9,  15, 15, 15, 5,  15, 9,  3,  15, 14,
    1,  1,  15, 15, 15, 15, 12, 11, 0,  4,  5,  8,  14, 15, 15, 15, 15, 15, 6,
    2,  10, 15, 15, 15, 15, 5,  10, 15, 15, 14, 10, 3,  4,  6,  15, 15, 15, 10,
    6,  0,  6,  10, 12, 15, 10, 3,  15, 15, 15, 14, 15, 3,  15, 15, 15, 15, 15,
    15, 5,  5,  9,  10, 13, 15, 14, 0,  12, 8,  15, 15, 15, 15, 8,  4,  2,  10,
    14, 4,  10, 15, 8,  1,  11, 15, 15, 15, 15, 12, 2,  9,  15, 15, 15, 15, 11,
    15, 4,  12, 15, 15, 15, 11, 4,  2,  13, 15, 11, 5,  15, 15, 15, 7,  15, 8,
    9,  15,
};
char noise_vol[800] = {
    0,  0,  0, 0,  0,  0, 0, 0, 0,  0,  0, 0,  0, 5, 0,  4,  4,  0,  0,  0,  0,
    0,  0,  0, 0,  0,  0, 0, 0, 0,  0,  0, 0,  5, 0, 0,  0,  0,  0,  0,  0,  0,
    0,  0,  0, 0,  0,  0, 0, 0, 0,  0,  0, 0,  0, 0, 0,  0,  0,  0,  0,  0,  0,
    0,  5,  0, 0,  0,  0, 0, 0, 0,  0,  0, 0,  0, 0, 0,  0,  0,  0,  0,  0,  0,
    0,  0,  0, 0,  0,  0, 0, 0, 0,  0,  0, 0,  0, 0, 0,  0,  0,  0,  0,  0,  0,
    0,  0,  0, 0,  0,  0, 0, 0, 0,  0,  0, 0,  0, 0, 0,  0,  0,  0,  0,  0,  0,
    0,  4,  5, 7,  9,  4, 9, 7, 4,  7,  0, 9,  5, 6, 6,  6,  5,  6,  6,  6,  5,
    5,  5,  5, 4,  0,  0, 5, 0, 4,  5,  0, 0,  0, 0, 0,  8,  8,  8,  7,  6,  6,
    6,  6,  0, 5,  5,  5, 8, 0, 6,  5,  6, 4,  0, 0, 0,  0,  5,  0,  4,  4,  4,
    0,  0,  0, 0,  0,  0, 0, 6, 7,  4,  8, 6,  6, 6, 5,  6,  5,  4,  6,  0,  0,
    0,  4,  0, 4,  0,  0, 0, 0, 0,  0,  0, 0,  0, 0, 0,  0,  0,  0,  0,  0,  8,
    8,  0,  4, 6,  5,  4, 4, 0, 4,  0,  0, 4,  4, 0, 0,  0,  0,  0,  0,  0,  0,
    0,  4,  6, 4,  7,  5, 7, 6, 4,  6,  4, 7,  8, 7, 7,  6,  6,  8,  9,  14, 14,
    11, 11, 9, 7,  7,  6, 6, 6, 5,  5,  5, 5,  5, 5, 5,  5,  5,  5,  5,  4,  5,
    4,  4,  6, 13, 9,  8, 9, 9, 10, 10, 9, 8,  8, 8, 7,  7,  6,  6,  6,  6,  6,
    6,  5,  6, 5,  5,  4, 4, 0, 0,  0,  0, 0,  0, 0, 6,  14, 8,  8,  8,  8,  8,
    8,  8,  9, 8,  7,  7, 7, 6, 6,  5,  5, 5,  5, 4, 4,  4,  0,  0,  0,  0,  0,
    0,  0,  0, 0,  0,  4, 9, 8, 7,  7,  6, 6,  6, 5, 6,  6,  6,  5,  5,  4,  4,
    4,  4,  0, 0,  0,  0, 0, 0, 0,  0,  0, 0,  0, 0, 0,  0,  0,  0,  4,  8,  10,
    7,  7,  9, 10, 9,  7, 7, 6, 6,  7,  8, 7,  6, 4, 4,  5,  5,  5,  5,  0,  0,
    0,  4,  4, 0,  0,  0, 0, 0, 0,  5,  4, 5,  7, 9, 10, 9,  7,  6,  6,  7,  8,
    8,  6,  5, 5,  6,  6, 7, 6, 4,  0,  4, 5,  5, 4, 4,  0,  0,  0,  0,  0,  0,
    0,  6,  8, 8,  8,  6, 7, 7, 7,  8,  7, 5,  5, 6, 7,  7,  6,  5,  4,  0,  5,
    5,  5,  4, 0,  0,  0, 0, 4, 0,  0,  0, 0,  0, 6, 10, 10, 8,  7,  7,  7,  9,
    8,  8,  6, 5,  6,  6, 6, 6, 6,  4,  0, 5,  5, 5, 4,  0,  0,  0,  4,  4,  0,
    0,  0,  0, 0,  5,  5, 7, 5, 7,  7,  6, 5,  6, 5, 4,  6,  4,  0,  0,  0,  4,
    5,  4,  6, 5,  0,  0, 0, 0, 0,  0,  0, 0,  0, 0, 0,  0,  5,  9,  7,  5,  4,
    5,  0,  5, 0,  5,  0, 4, 0, 4,  0,  0, 0,  4, 0, 4,  0,  0,  0,  0,  0,  0,
    0,  0,  0, 0,  0,  0, 0, 0, 6,  6,  5, 5,  9, 6, 5,  5,  6,  4,  5,  0,  7,
    5,  6,  5, 6,  5,  4, 0, 5, 5,  4,  4, 0,  5, 0, 0,  0,  0,  4,  0,  0,  7,
    8,  7,  6, 11, 10, 7, 5, 7, 6,  5,  6, 10, 8, 4, 5,  6,  7,  5,  5,  10, 6,
    0,  0,  0, 0,  0,  0, 0, 0, 0,  0,  0, 0,  6, 6, 8,  7,  6,  5,  5,  6,  5,
    5,  9,  6, 5,  5,  5, 5, 5, 5,  5,  4, 4,  0, 0, 0,  0,  0,  0,  0,  0,  0,
    0,  0,  0, 12, 5,  5, 5, 6, 6,  6,  6, 5,  5, 5, 6,  5,  6,  5,  5,  4,  5,
    5,  5,  5, 5,  5,  4, 5, 4, 4,  5,  4, 4,  4, 5, 4,  11, 10, 11, 11, 10, 8,
    9,  9,  8, 7,  7,  8, 8, 7, 6,  5,  5, 5,  5, 5, 5,  5,  4,  4,  0,  4,  0,
    0,  0,  0, 0,  0,  0, 0, 9, 8,  8,  7, 6,  6, 6, 5,  6,  6,  5,  6,  5,  5,
    5,  4,  4, 5,  4,  4, 0, 0, 0,  0,  0, 5,  8, 8, 8,  9,  9,  8,  8,  13, 12,
    10, 15,
};
