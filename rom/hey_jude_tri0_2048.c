int num_audio_wait = 3;
int num_audio_signal = 800;
unsigned short triangle_signal[800] = {
    1912, 345, 274, 305, 78,  79,  208, 227, 227, 193, 227, 109, 227, 193, 194,
    207,  194, 245, 342, 226, 246, 250, 250, 303, 227, 133, 272, 128, 273, 305,
    306,  306, 306, 305, 305, 306, 308, 307, 226, 301, 226, 227, 227, 308, 228,
    227,  304, 228, 308, 308, 272, 247, 273, 159, 159, 226, 226, 226, 307, 306,
    305,  306, 307, 306, 148, 270, 305, 248, 309, 275, 127, 305, 272, 249, 248,
    249,  249, 250, 249, 226, 272, 273, 208, 208, 309, 272, 272, 344, 308, 343,
    306,  225, 94,  94,  276, 95,  94,  95,  72,  97,  306, 305, 306, 306, 306,
    304,  97,  343, 140, 250, 307, 344, 307, 305, 168, 106, 305, 305, 405, 305,
    304,  305, 305, 168, 247, 306, 344, 305, 306, 248, 306, 306, 225, 305, 305,
    305,  305, 305, 304, 305, 305, 306, 157, 147, 97,  305, 305, 157, 168, 305,
    225,  84,  126, 122, 272, 227, 226, 306, 228, 127, 273, 225, 273, 225, 224,
    274,  227, 120, 273, 274, 228, 120, 82,  120, 303, 274, 248, 273, 245, 247,
    243,  243, 81,  81,  245, 245, 246, 246, 246, 276, 246, 277, 302, 275, 246,
    249,  79,  81,  245, 246, 245, 245, 226, 149, 246, 246, 275, 275, 276, 280,
    304,  193, 93,  245, 243, 245, 86,  276, 276, 276, 247, 275, 247, 247, 245,
    227,  303, 304, 226, 227, 102, 250, 250, 249, 250, 250, 250, 270, 226, 115,
    248,  249, 72,  77,  79,  117, 273, 274, 273, 273, 274, 273, 273, 132, 132,
    126,  126, 274, 128, 272, 345, 159, 309, 307, 272, 274, 308, 227, 305, 304,
    273,  304, 310, 345, 107, 106, 159, 272, 273, 271, 307, 308, 308, 307, 306,
    305,  304, 272, 248, 210, 246, 248, 248, 249, 225, 207, 247, 227, 227, 246,
    228,  228, 208, 208, 227, 227, 229, 305, 38,  226, 272, 272, 226, 273, 226,
    192,  272, 208, 248, 248, 193, 193, 179, 180, 208, 208, 208, 208, 208, 180,
    208,  180, 83,  248, 227, 227, 158, 167, 246, 246, 245, 227, 246, 179, 228,
    180,  158, 158, 247, 226, 226, 272, 166, 192, 227, 244, 179, 228, 228, 48,
    63,   63,  63,  272, 226, 272, 226, 70,  107, 71,  115, 110, 226, 110, 249,
    271,  249, 207, 310, 344, 249, 249, 207, 273, 273, 273, 248, 273, 273, 274,
    273,  306, 308, 248, 345, 345, 345, 345, 271, 306, 251, 271, 250, 271, 109,
    250,  345, 345, 249, 147, 342, 276, 342, 342, 345, 345, 225, 274, 274, 305,
    306,  305, 309, 307, 273, 102, 110, 102, 65,  65,  65,  65,  63,  97,  69,
    108,  110, 72,  107, 110, 247, 248, 344, 249, 404, 306, 304, 305, 305, 305,
    208,  305, 306, 306, 306, 305, 304, 169, 276, 272, 273, 209, 227, 227, 109,
    106,  246, 247, 274, 82,  81,  133, 225, 226, 307, 227, 276, 133, 275, 178,
    275,  276, 277, 140, 226, 148, 149, 106, 210, 210, 224, 224, 168, 274, 170,
    120,  116, 83,  81,  167, 165, 225, 272, 159, 160, 271, 271, 160, 271, 106,
    165,  346, 345, 158, 159, 159, 159, 159, 246, 273, 159, 272, 248, 303, 247,
    178,  250, 274, 251, 345, 159, 724, 271, 107, 346, 274, 308, 273, 273, 273,
    226,  274, 159, 159, 226, 250, 249, 106, 250, 250, 159, 247, 228, 79,  249,
    121,  247, 227, 106, 249, 227, 193, 248, 248, 226, 249, 247, 208, 246, 248,
    305,  306, 301, 303, 303, 132, 273, 272, 272, 274, 274, 274, 128, 127, 127,
    305,  227, 274, 228, 304, 274, 273, 226, 226, 227, 226, 159, 127, 724, 273,
    273,  106, 310, 273, 310, 272, 306, 274, 308, 273, 227, 227, 227, 226, 344,
    344,  94,  248, 274, 307, 307, 249, 398, 208, 249, 226, 226, 208, 207, 226,
    226,  207, 272, 312, 307, 309, 343, 344, 275, 343, 273, 346, 97,  97,  306,
    146,  142, 307, 95,  97,  273, 274, 305, 306, 149, 271, 301, 344, 347, 147,
    139,  274, 347, 305, 305, 169, 305, 305, 306, 305, 405, 169, 110, 111, 192,
    247,  225, 247, 248, 307, 147, 305, 248, 227, 248, 403, 303, 405, 278, 301,
    305,  305, 302, 248, 396, 343, 306, 344, 304, 307, 141, 226, 275, 110, 110,
    251,  84,  275, 273, 272, 272, 81,  81,  81,  80,  272, 274, 133, 228, 303,
    248,  271, 227, 249, 227, 302, 305, 226, 248, 227, 167, 192, 179, 178, 168,
    148,  178, 178, 275, 277, 275, 275, 304, 275, 305, 248, 226, 275, 226, 275,
    304,  272, 226, 226, 276, 245, 244, 275, 246, 281, 279, 276, 276, 275, 84,
    56,   84,  84,  56,  56,  192, 180, 227, 228, 110, 193, 208, 227, 225, 226,
    274,  250, 269, 251, 250, 250, 250, 193, 209, 249, 250, 249, 248, 72,  116,
    117,  78,  272, 273, 227,
};
char triangle_vol[800] = {
    0,  0,  1,  10, 15, 2,  2,  6,  9,  2,  11, 0,  13, 2,  6,  5,  2,  6,  0,
    1,  8,  15, 15, 7,  2,  8,  15, 15, 15, 7,  9,  3,  8,  10, 6,  15, 15, 3,
    9,  6,  3,  2,  1,  0,  0,  2,  7,  1,  3,  3,  1,  7,  3,  5,  9,  1,  1,
    5,  7,  8,  1,  7,  6,  1,  15, 3,  6,  4,  12, 13, 12, 6,  11, 15, 8,  15,
    4,  15, 2,  7,  6,  1,  5,  8,  14, 0,  5,  6,  3,  5,  6,  6,  13, 4,  15,
    15, 6,  15, 15, 14, 10, 14, 7,  8,  2,  12, 15, 3,  10, 3,  10, 1,  1,  4,
    7,  8,  10, 8,  4,  10, 11, 6,  3,  9,  11, 7,  8,  0,  2,  4,  4,  1,  1,
    10, 11, 4,  3,  12, 15, 10, 1,  5,  3,  2,  4,  10, 6,  8,  1,  1,  15, 15,
    1,  15, 14, 2,  6,  3,  1,  12, 6,  3,  9,  15, 1,  11, 6,  11, 3,  2,  11,
    10, 6,  11, 2,  2,  0,  2,  15, 15, 15, 15, 15, 15, 8,  1,  15, 4,  5,  2,
    12, 15, 0,  2,  12, 15, 15, 15, 9,  15, 15, 2,  6,  1,  8,  13, 15, 12, 4,
    1,  12, 9,  15, 15, 15, 7,  15, 9,  4,  6,  12, 8,  9,  12, 15, 15, 10, 2,
    5,  3,  5,  3,  15, 2,  15, 8,  15, 0,  6,  1,  6,  14, 15, 3,  14, 15, 7,
    9,  9,  8,  5,  8,  6,  7,  9,  15, 5,  2,  3,  1,  4,  4,  15, 6,  11, 3,
    5,  1,  2,  8,  8,  4,  5,  4,  10, 10, 5,  2,  3,  6,  3,  3,  3,  2,  5,
    11, 0,  12, 8,  0,  3,  15, 15, 6,  1,  12, 5,  9,  3,  4,  11, 4,  3,  6,
    3,  6,  5,  8,  1,  4,  5,  0,  5,  1,  14, 1,  1,  6,  11, 2,  12, 7,  1,
    3,  2,  1,  1,  2,  0,  3,  0,  7,  12, 2,  8,  5,  15, 3,  6,  10, 14, 14,
    15, 4,  9,  1,  4,  1,  9,  3,  7,  0,  8,  13, 7,  4,  1,  6,  4,  8,  15,
    15, 8,  2,  3,  10, 12, 13, 15, 3,  13, 7,  4,  15, 3,  10, 6,  6,  7,  5,
    6,  5,  6,  4,  11, 5,  11, 9,  3,  6,  2,  8,  10, 6,  4,  3,  6,  5,  7,
    3,  14, 3,  9,  5,  15, 15, 4,  6,  8,  15, 11, 15, 9,  0,  5,  9,  12, 8,
    6,  3,  13, 4,  8,  1,  2,  7,  15, 15, 15, 15, 6,  1,  15, 15, 15, 15, 7,
    13, 15, 8,  7,  11, 5,  8,  1,  5,  5,  2,  1,  5,  2,  3,  0,  3,  3,  0,
    2,  1,  3,  14, 4,  5,  15, 15, 11, 5,  2,  12, 5,  15, 9,  2,  6,  5,  2,
    1,  7,  1,  6,  5,  14, 0,  10, 6,  7,  1,  3,  3,  2,  9,  1,  2,  4,  7,
    5,  12, 13, 11, 15, 8,  4,  15, 1,  2,  14, 9,  5,  1,  11, 3,  1,  7,  9,
    15, 15, 15, 15, 15, 15, 6,  2,  5,  15, 9,  15, 7,  1,  2,  1,  6,  13, 4,
    5,  15, 8,  3,  5,  4,  4,  1,  4,  4,  4,  13, 1,  5,  8,  7,  1,  7,  4,
    8,  15, 7,  9,  1,  11, 2,  15, 6,  6,  1,  5,  11, 8,  11, 8,  6,  6,  4,
    6,  6,  1,  7,  3,  3,  2,  14, 6,  2,  1,  7,  11, 13, 10, 6,  3,  15, 8,
    9,  5,  2,  6,  1,  3,  5,  1,  7,  2,  4,  1,  7,  2,  4,  1,  2,  0,  7,
    0,  3,  2,  6,  1,  6,  10, 1,  9,  15, 15, 10, 4,  15, 0,  2,  4,  10, 7,
    13, 2,  1,  12, 8,  6,  2,  14, 15, 4,  3,  1,  7,  13, 4,  15, 12, 10, 6,
    15, 4,  11, 8,  14, 15, 15, 8,  9,  5,  10, 4,  2,  9,  8,  3,  3,  8,  3,
    0,  4,  3,  1,  4,  5,  1,  4,  0,  1,  2,  4,  0,  7,  4,  1,  6,  8,  3,
    4,  1,  5,  1,  3,  4,  3,  0,  7,  2,  5,  4,  15, 6,  12, 8,  6,  4,  9,
    4,  1,  9,  0,  4,  0,  2,  0,  15, 15, 15, 1,  5,  4,  3,  6,  8,  15, 6,
    1,  10, 1,  8,  8,  0,  15, 0,  3,  5,  1,  8,  14, 8,  9,  5,  15, 15, 7,
    9,  15, 15, 5,  12, 7,  2,  9,  7,  3,  0,  1,  0,  4,  7,  15, 14, 9,  2,
    15, 15, 11, 0,  15, 15, 13, 15, 15, 15, 6,  10, 1,  5,  11, 5,  11, 3,  12,
    15, 0,  11, 14, 15, 6,  10, 12, 3,  5,  13, 15, 2,  10, 12, 5,  15, 15, 1,
    1,  6,
};
unsigned short square1_signal[800] = {
    6142, 4643, 4707, 2554, 4329, 4335, 4324, 2476, 4525, 4515, 2477, 4531,
    4524, 4512, 4520, 4533, 4519, 4544, 4708, 68,   4690, 4644, 4646, 2607,
    2601, 4624, 4596, 4603, 4608, 4604, 4606, 4608, 4603, 4601, 4604, 4605,
    4606, 4607, 4623, 4642, 4602, 4602, 4601, 4603, 4604, 4605, 4604, 4602,
    4602, 4629, 6777, 4630, 4602, 4628, 4627, 4628, 4603, 4626, 4627, 4602,
    4626, 4626, 4625, 4602, 2581, 4290, 2599, 2580, 2573, 2564, 4603, 4602,
    4581, 2487, 2498, 2489, 2469, 2476, 2489, 4518, 4598, 4601, 4480, 4474,
    4473, 4472, 4591, 4728, 4631, 4708, 4629, 4279, 4238, 6705, 4239, 4241,
    4237, 4664, 4665, 4667, 4665, 4664, 4665, 4667, 4665, 4662, 4681, 4702,
    6705, 4642, 4665, 4685, 4656, 4660, 2490, 4660, 4663, 4663, 4661, 4662,
    4664, 4664, 4663, 4662, 4548, 4660, 4661, 4660, 4660, 4660, 4661, 4660,
    4592, 4662, 4663, 4662, 4663, 4664, 4664, 4664, 4663, 4657, 4379, 6718,
    6716, 6707, 2610, 4380, 4392, 4663, 2531, 2552, 2548, 2546, 2547, 6653,
    4599, 4601, 4599, 2491, 4580, 4575, 4575, 4576, 4574, 4577, 4582, 4256,
    4573, 4582, 4590, 4256, 2531, 4451, 2531, 4580, 4557, 4584, 4286, 4186,
    4183, 2216, 2371, 2371, 4257, 4256, 4254, 4254, 4255, 4256, 4256, 4254,
    2360, 2370, 4257, 4563, 2363, 2371, 2368, 2364, 2366, 2367, 4415, 2366,
    4255, 4255, 4255, 4255, 4255, 4256, 4417, 4454, 2423, 4283, 4282, 2403,
    2390, 4437, 4435, 4552, 4560, 4551, 4517, 4547, 4544, 4518, 4654, 4660,
    4690, 4591, 4285, 2432, 2435, 4286, 2431, 4286, 2428, 4291, 2469, 4309,
    4309, 2475, 2477, 2509, 2516, 2516, 4588, 4607, 4603, 4602, 4605, 4604,
    4601, 4270, 4268, 2548, 2548, 4607, 6659, 2543, 2552, 2584, 4629, 4603,
    4601, 4592, 4601, 4600, 4627, 4625, 4603, 4629, 4308, 4308, 4733, 4733,
    6783, 4413, 4413, 4591, 4603, 4603, 4601, 4626, 4627, 4626, 4626, 4599,
    6774, 4556, 4539, 4523, 4532, 4524, 4508, 4534, 4547, 2435, 2437, 4289,
    2431, 2428, 4477, 4475, 4475, 4475, 4285, 4287, 4289, 4579, 4578, 4579,
    4579, 4591, 4580, 4580, 4579, 4556, 4554, 4413, 4414, 4414, 4414, 4484,
    4483, 4481, 4482, 4481, 4482, 4480, 4486, 4481, 4278, 4560, 4241, 4238,
    4389, 4251, 4255, 4256, 4258, 4258, 4256, 2368, 4426, 4433, 6485, 2390,
    2392, 2390, 4431, 4581, 4580, 4432, 4423, 4418, 4425, 2413, 4290, 2240,
    2237, 2238, 4475, 4475, 4431, 4591, 4519, 2472, 4238, 4309, 4245, 4239,
    4508, 2487, 2487, 2467, 2474, 2487, 2476, 4523, 4520, 2473, 4590, 4604,
    4605, 4604, 4625, 4603, 4602, 4604, 4603, 4626, 4627, 4628, 6779, 2683,
    2686, 6782, 6780, 4630, 4317, 4318, 4315, 4756, 6787, 6785, 6782, 4630,
    4643, 4688, 4688, 4688, 4707, 4708, 4734, 4735, 2532, 2557, 4607, 4605,
    4605, 4603, 4602, 4603, 4591, 4316, 2476, 2456, 2438, 4291, 2440, 2436,
    2430, 2432, 2455, 2478, 2474, 2476, 4239, 2475, 2471, 4513, 4689, 4659,
    4689, 4662, 4659, 4663, 4664, 4661, 4548, 4658, 4663, 4664, 4660, 2490,
    6569, 4317, 4317, 4591, 4591, 4556, 4524, 4525, 4532, 4519, 4539, 4556,
    2535, 2536, 4338, 4338, 2531, 4591, 4591, 4660, 4339, 4340, 4349, 4350,
    4352, 4352, 4353, 4352, 6657, 2582, 4300, 4325, 2743, 4435, 4433, 4661,
    4663, 4687, 4325, 4272, 4271, 2726, 4316, 4739, 2693, 4585, 4736, 6783,
    6786, 6786, 6782, 6787, 4733, 6777, 6786, 6786, 6777, 6780, 6782, 6783,
    2688, 2686, 6779, 4413, 4602, 4602, 4627, 4629, 4628, 4413, 6779, 4601,
    4412, 4727, 6782, 3318, 4309, 4732, 4735, 4548, 4602, 4604, 4602, 4602,
    4602, 4602, 4602, 6781, 4601, 4414, 4415, 4414, 6782, 2261, 2261, 4626,
    4591, 2524, 2504, 4318, 2476, 2475, 4519, 4531, 4524, 4515, 4519, 4538,
    4522, 4509, 4537, 4534, 4551, 4643, 4634, 4591, 4643, 4643, 4626, 4622,
    2557, 4603, 2556, 2556, 2554, 2557, 4606, 4606, 4607, 4603, 4603, 4610,
    4601, 4602, 4412, 4602, 4604, 4604, 4603, 4603, 4602, 4412, 5361, 4602,
    4603, 4602, 4628, 4603, 4602, 4591, 4603, 4606, 4602, 4602, 4602, 4603,
    4603, 4625, 2658, 4726, 2611, 2579, 2562, 4604, 4604, 4642, 4734, 4546,
    4523, 4520, 4520, 4538, 4535, 4510, 4519, 4537, 4308, 4308, 6549, 2427,
    4728, 4731, 4727, 4728, 2642, 4388, 2630, 6716, 6712, 6716, 4286, 6710,
    6714, 6716, 2632, 2631, 2616, 2617, 4682, 2634, 4643, 4685, 6774, 4663,
    2593, 4411, 2680, 4661, 4661, 2720, 4662, 4663, 4662, 4660, 4317, 4317,
    4434, 4434, 4435, 4549, 4317, 2491, 4659, 4659, 4433, 4658, 4548, 4452,
    4548, 4659, 2952, 3179, 3188, 4433, 4658, 4659, 4646, 4412, 2729, 4688,
    4665, 4664, 4660, 2613, 4661, 2588, 4350, 4266, 4267, 4266, 4351, 2559,
    4596, 4595, 4580, 2532, 2532, 4337, 4336, 2531, 2529, 4339, 2543, 2531,
    2514, 2537, 2536, 2514, 2546, 4644, 4660, 4580, 4562, 4480, 4454, 4448,
    4433, 4418, 4415, 4414, 4415, 4415, 4414, 4416, 4416, 4415, 4415, 4415,
    4430, 4549, 4579, 4580, 4579, 4576, 4579, 4579, 4578, 4292, 4278, 2222,
    4263, 4260, 4260, 4260, 4260, 4258, 4258, 2213, 2382, 2382, 4207, 2384,
    2383, 2381, 4266, 2456, 2468, 2475, 2476, 4519, 4535, 4524, 4516, 4521,
    2436, 4290, 4289, 4289, 4287, 4287, 4287, 4512, 4549, 2474, 4309, 2477,
    4307, 4310, 6612, 6613, 2516, 4581, 4598, 4599,
};
char square1_vol[800] = {
    0,  0,  0,  15, 12, 15, 15, 6,  15, 8,  15, 15, 15, 15, 8,  15, 15, 6,  0,
    1,  10, 1,  5,  15, 2,  15, 2,  15, 15, 15, 15, 15, 15, 14, 15, 15, 2,  15,
    15, 3,  13, 9,  9,  10, 15, 0,  15, 6,  3,  2,  2,  2,  2,  2,  6,  8,  14,
    9,  4,  8,  8,  10, 14, 15, 12, 2,  5,  2,  1,  9,  13, 15, 15, 15, 8,  15,
    2,  3,  10, 14, 8,  11, 15, 9,  15, 15, 2,  3,  0,  2,  6,  11, 12, 4,  15,
    14, 14, 15, 8,  10, 15, 15, 4,  1,  8,  15, 15, 6,  1,  13, 12, 10, 3,  10,
    2,  9,  8,  0,  11, 14, 8,  1,  10, 12, 2,  6,  2,  2,  6,  5,  0,  2,  3,
    8,  10, 1,  10, 14, 15, 5,  6,  11, 8,  6,  10, 12, 15, 15, 1,  1,  9,  15,
    9,  15, 9,  13, 11, 9,  4,  9,  4,  15, 15, 3,  7,  15, 11, 0,  15, 8,  9,
    15, 7,  3,  2,  3,  5,  10, 14, 15, 15, 3,  15, 15, 15, 15, 15, 15, 15, 15,
    2,  15, 15, 14, 12, 5,  3,  9,  10, 11, 0,  13, 15, 15, 15, 13, 15, 15, 15,
    15, 15, 15, 12, 15, 15, 15, 4,  3,  15, 2,  11, 0,  15, 2,  4,  8,  1,  5,
    0,  15, 15, 6,  14, 15, 15, 15, 3,  15, 0,  15, 2,  15, 9,  15, 15, 9,  12,
    2,  15, 4,  15, 11, 13, 9,  3,  11, 3,  15, 3,  3,  6,  3,  13, 15, 5,  8,
    3,  14, 12, 2,  5,  4,  3,  7,  3,  4,  0,  6,  3,  3,  15, 6,  15, 10, 5,
    12, 10, 13, 15, 2,  15, 15, 15, 11, 8,  3,  2,  15, 8,  2,  10, 2,  7,  7,
    15, 12, 15, 14, 15, 15, 15, 15, 7,  5,  15, 4,  15, 10, 5,  4,  7,  0,  3,
    15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 5,  6,  15, 15, 15, 15, 15, 15, 1,
    2,  6,  7,  15, 15, 15, 11, 15, 2,  15, 7,  8,  11, 15, 15, 5,  15, 8,  13,
    0,  14, 3,  0,  12, 6,  15, 1,  1,  15, 8,  15, 5,  11, 2,  6,  4,  1,  4,
    9,  7,  7,  10, 12, 3,  2,  3,  13, 5,  13, 6,  8,  3,  4,  8,  7,  6,  1,
    9,  15, 3,  15, 13, 8,  8,  1,  9,  8,  15, 15, 10, 1,  5,  5,  15, 4,  6,
    3,  15, 15, 12, 11, 3,  7,  15, 7,  15, 12, 15, 7,  7,  4,  4,  2,  8,  9,
    5,  15, 15, 14, 2,  7,  7,  2,  8,  3,  3,  6,  9,  1,  0,  3,  6,  5,  4,
    1,  1,  1,  8,  9,  15, 15, 11, 15, 15, 8,  5,  9,  15, 15, 15, 15, 7,  7,
    9,  15, 15, 3,  15, 11, 15, 8,  15, 4,  15, 3,  7,  3,  10, 2,  3,  7,  8,
    15, 13, 13, 11, 15, 9,  11, 9,  14, 8,  2,  5,  6,  5,  14, 15, 0,  11, 5,
    2,  4,  3,  5,  2,  14, 4,  3,  15, 10, 8,  1,  5,  5,  3,  1,  7,  4,  4,
    8,  8,  9,  11, 13, 8,  13, 3,  11, 1,  11, 1,  9,  1,  6,  1,  4,  5,  0,
    5,  15, 15, 15, 15, 15, 15, 4,  11, 3,  14, 15, 5,  8,  15, 2,  13, 2,  0,
    11, 3,  15, 1,  1,  10, 13, 15, 5,  13, 11, 2,  0,  15, 14, 6,  15, 15, 15,
    15, 8,  15, 9,  10, 14, 2,  7,  2,  3,  5,  6,  8,  4,  2,  3,  1,  15, 3,
    14, 0,  15, 6,  15, 9,  12, 15, 12, 7,  10, 13, 15, 6,  4,  6,  15, 4,  15,
    3,  8,  15, 5,  12, 15, 15, 15, 3,  1,  9,  12, 2,  4,  10, 13, 3,  7,  5,
    5,  2,  7,  13, 8,  9,  6,  2,  9,  1,  12, 12, 4,  12, 7,  5,  0,  11, 10,
    7,  8,  3,  8,  10, 0,  1,  2,  6,  4,  7,  1,  1,  4,  0,  5,  2,  2,  3,
    1,  6,  1,  3,  3,  0,  1,  5,  7,  3,  4,  15, 6,  1,  15, 5,  0,  9,  15,
    15, 15, 15, 2,  10, 12, 10, 10, 7,  10, 5,  15, 3,  9,  15, 3,  7,  15, 13,
    15, 9,  2,  6,  8,  9,  15, 15, 13, 15, 15, 15, 8,  15, 2,  15, 4,  15, 15,
    15, 6,  15, 15, 10, 3,  15, 3,  3,  15, 6,  15, 13, 8,  15, 15, 9,  15, 8,
    15, 15, 15, 13, 15, 2,  15, 3,  15, 1,  11, 3,  9,  15, 14, 13, 15, 6,  15,
    5,  4,  15, 15, 15, 1,  15, 13, 1,  15, 13, 7,  2,  13, 15, 13, 1,  14, 1,
    15, 8,
};
unsigned short square2_signal[800] = {
    5580, 4707, 4779, 4648, 2516, 2524, 2497, 4310, 4311, 4547, 4310, 7014,
    2902, 4545, 4548, 7019, 4548, 4511, 4643, 2110, 4643, 4691, 4692, 4597,
    4707, 4592, 4412, 4639, 3067, 4642, 4642, 4642, 4641, 4640, 4642, 4643,
    4643, 4643, 4590, 4592, 4639, 4641, 4641, 4641, 4641, 4640, 4641, 4641,
    4643, 4591, 3315, 4413, 4414, 4591, 4591, 4591, 4641, 4591, 4591, 4641,
    4591, 4591, 4591, 4640, 2641, 4680, 4364, 4363, 4359, 4353, 4642, 4642,
    4547, 4315, 4320, 4317, 4308, 4310, 4316, 4598, 4513, 4721, 4455, 4453,
    2803, 2801, 4549, 4630, 4591, 4642, 4590, 4238, 6428, 2328, 2333, 4665,
    4658, 4708, 4286, 4241, 4241, 4285, 3205, 3206, 3206, 3206, 4643, 4543,
    4279, 4699, 3203, 4644, 2726, 3206, 4317, 4708, 3202, 3201, 4707, 3185,
    3205, 3202, 3188, 4706, 4657, 3206, 4711, 4285, 4519, 4452, 4548, 2501,
    4643, 3204, 3202, 3206, 3189, 3206, 3206, 3202, 3205, 4548, 2634, 4290,
    4381, 4377, 4377, 2615, 6709, 4434, 4327, 4349, 4262, 4262, 4347, 4350,
    4641, 4641, 4638, 4327, 4256, 4256, 4256, 4256, 4255, 4256, 4258, 4576,
    4255, 4257, 4261, 2528, 4338, 2581, 4433, 2977, 2994, 4548, 2430, 4556,
    6318, 2383, 4581, 4581, 2370, 2367, 2364, 2364, 6462, 2368, 2369, 2364,
    4252, 4260, 2369, 4252, 4572, 4580, 4256, 4254, 4255, 4256, 4580, 4255,
    2366, 2366, 2366, 2366, 2366, 2368, 4658, 4430, 4578, 6519, 2417, 4273,
    4578, 4580, 4578, 4590, 2998, 4590, 4551, 4512, 4514, 4657, 4591, 4548,
    4646, 4641, 2426, 4289, 4290, 2429, 4289, 2428, 4286, 2439, 4307, 2474,
    2474, 4309, 4310, 4318, 4330, 4255, 4260, 4266, 4265, 4265, 4266, 4266,
    4265, 2571, 6658, 4266, 4263, 4267, 4270, 4728, 4731, 6777, 4592, 4643,
    4727, 4727, 4642, 4641, 4591, 4591, 4413, 4592, 4628, 4731, 3328, 3328,
    4309, 6779, 4602, 4548, 4641, 4641, 4640, 4591, 4591, 4591, 4591, 4548,
    4633, 4591, 4512, 4549, 2925, 4550, 4481, 2932, 4512, 4290, 4291, 2433,
    4287, 4285, 4554, 4555, 4431, 4431, 2427, 2431, 2433, 4284, 4548, 4548,
    2998, 4480, 4480, 4548, 4548, 4591, 4480, 4477, 4457, 4457, 4478, 4511,
    4553, 4454, 4455, 4455, 4553, 4511, 2828, 4512, 2411, 4251, 2334, 2331,
    6731, 2359, 2366, 2369, 2371, 4581, 2367, 2208, 2709, 4578, 4267, 4267,
    4268, 4580, 4580, 4452, 4478, 4410, 4582, 967,  2707, 4284, 2436, 2434,
    4190, 4191, 4581, 4591, 4584, 4548, 4603, 4308, 2474, 2474, 2495, 6583,
    4600, 4242, 4316, 4307, 4308, 4309, 4309, 4727, 4732, 4731, 4548, 4413,
    4413, 4413, 4414, 4413, 4413, 4413, 4414, 4591, 4591, 6779, 4629, 7416,
    4413, 4414, 4414, 4591, 4760, 4764, 6784, 4708, 4415, 4416, 4630, 4726,
    2660, 4643, 4644, 4762, 2609, 4643, 4309, 4309, 4338, 4351, 4351, 4642,
    4641, 4642, 4642, 4643, 6776, 2489, 4239, 4231, 4291, 2438, 4292, 4290,
    4290, 4224, 4300, 4240, 4238, 4310, 6573, 4239, 4308, 2503, 4643, 4706,
    4643, 3202, 3202, 3202, 3194, 3194, 4658, 3210, 4518, 4519, 4520, 2729,
    4433, 2490, 4434, 4552, 4549, 4591, 2904, 2906, 7018, 4549, 4512, 4513,
    4339, 4339, 2532, 2532, 4338, 4643, 4642, 4591, 2548, 2548, 6650, 6654,
    2560, 2560, 2563, 2560, 4352, 4363, 2642, 2496, 4328, 2730, 2729, 4433,
    2490, 3200, 2733, 4801, 2397, 2386, 4753, 4310, 4311, 4315, 4316, 4309,
    4311, 4415, 4414, 4603, 4308, 4413, 4309, 4416, 4412, 4308, 4309, 4309,
    4309, 4308, 4413, 4601, 6778, 4415, 4412, 4591, 4413, 4602, 4412, 4413,
    6775, 4630, 3324, 4629, 4731, 4789, 4309, 4591, 4643, 4727, 6779, 6780,
    6779, 6780, 6780, 4603, 4414, 6782, 6782, 6782, 4414, 6778, 2580, 2261,
    4630, 4330, 4325, 2491, 4310, 4310, 4551, 7021, 4598, 4548, 4549, 4512,
    4598, 4481, 4511, 2926, 4512, 4511, 4590, 4642, 4595, 4600, 4592, 4591,
    4351, 4350, 4350, 4350, 4349, 4350, 4642, 4642, 4643, 4640, 4639, 3071,
    4642, 4646, 4602, 4415, 4640, 4641, 4639, 4640, 4641, 5361, 2555, 5360,
    7416, 4642, 4591, 4728, 7420, 4548, 4642, 3108, 4642, 6777, 4641, 4640,
    4639, 4591, 4642, 4307, 4377, 4362, 4353, 4641, 4640, 4709, 4784, 4595,
    6992, 4598, 4597, 4591, 4597, 4591, 4598, 4600, 2473, 2471, 4293, 4285,
    7418, 7418, 4779, 4631, 4392, 2631, 4388, 4387, 4380, 4287, 6715, 4379,
    4380, 4381, 4389, 4388, 4380, 4380, 4644, 4389, 4594, 4644, 4411, 4707,
    4598, 2654, 4411, 3205, 4451, 2654, 3188, 3202, 3186, 3183, 5008, 4663,
    4661, 2729, 4317, 4512, 4392, 4644, 2491, 4547, 4512, 4591, 4434, 4658,
    4452, 2952, 4548, 5042, 4433, 3184, 3183, 3206, 3208, 4511, 4454, 4643,
    3206, 4708, 3207, 4389, 4703, 4591, 2555, 4350, 4351, 4349, 2557, 4352,
    4552, 4550, 4547, 4338, 4338, 2531, 2527, 4338, 4337, 2534, 4341, 4338,
    4330, 4548, 4643, 2982, 4642, 4590, 4590, 4646, 3003, 4453, 4558, 4578,
    4411, 971,  6781, 6779, 6778, 2642, 2643, 6778, 2642, 2642, 4658, 2642,
    4658, 4510, 4646, 4548, 2998, 2995, 4647, 4548, 2992, 2440, 2412, 6493,
    2382, 4581, 6472, 4581, 4586, 2371, 2371, 4590, 4591, 4657, 2383, 4208,
    2216, 4262, 2389, 4300, 4306, 4309, 2899, 4549, 2927, 6994, 4482, 6992,
    4286, 2435, 2433, 2433, 2431, 2430, 2431, 4548, 4590, 4309, 2474, 4310,
    2469, 6573, 4255, 4254, 4330, 4338, 4549, 4638,
};
char square2_vol[800] = {
    0,  0,  1,  15, 15, 15, 1,  15, 10, 2,  8,  9,  12, 2,  6,  8,  6,  5,  1,
    0,  10, 11, 8,  15, 4,  15, 1,  4,  5,  13, 3,  9,  10, 3,  10, 0,  10, 14,
    8,  9,  2,  3,  1,  6,  0,  8,  4,  1,  2,  4,  1,  5,  3,  8,  1,  8,  4,
    0,  13, 2,  14, 3,  14, 4,  1,  3,  7,  4,  14, 2,  4,  7,  2,  11, 15, 15,
    12, 15, 2,  8,  4,  6,  2,  0,  8,  12, 2,  9,  0,  1,  1,  11, 12, 4,  1,
    9,  12, 4,  12, 11, 3,  12, 8,  8,  3,  6,  2,  1,  2,  3,  7,  1,  1,  2,
    1,  4,  7,  3,  5,  9,  7,  4,  4,  3,  3,  4,  3,  1,  2,  3,  0,  0,  2,
    4,  7,  3,  3,  8,  8,  8,  0,  4,  2,  15, 7,  4,  8,  12, 10, 3,  4,  5,
    11, 15, 0,  0,  1,  4,  1,  10, 15, 15, 13, 15, 3,  8,  6,  8,  15, 8,  15,
    2,  9,  2,  0,  5,  1,  2,  4,  3,  15, 9,  8,  3,  14, 9,  11, 9,  14, 11,
    4,  11, 15, 11, 9,  15, 13, 5,  12, 15, 0,  7,  3,  9,  15, 3,  13, 14, 5,
    13, 15, 1,  15, 15, 1,  5,  12, 3,  12, 3,  6,  14, 1,  11, 14, 11, 3,  1,
    5,  0,  10, 9,  14, 5,  15, 14, 4,  15, 15, 9,  9,  15, 3,  5,  14, 7,  0,
    3,  15, 3,  3,  15, 8,  15, 6,  11, 10, 15, 8,  1,  8,  1,  6,  7,  5,  10,
    2,  0,  10, 9,  5,  7,  2,  5,  1,  2,  5,  1,  2,  9,  4,  2,  4,  1,  13,
    1,  14, 2,  12, 15, 0,  3,  15, 7,  0,  1,  3,  15, 7,  5,  15, 12, 3,  7,
    1,  11, 15, 4,  12, 4,  1,  6,  4,  4,  9,  4,  9,  12, 9,  4,  1,  3,  2,
    8,  7,  2,  1,  2,  7,  0,  8,  3,  11, 15, 15, 8,  8,  15, 9,  15, 1,  15,
    7,  1,  3,  5,  15, 15, 15, 15, 8,  7,  7,  1,  1,  5,  11, 2,  3,  15, 10,
    15, 10, 9,  2,  5,  1,  15, 3,  2,  15, 9,  11, 5,  5,  13, 5,  2,  7,  0,
    4,  9,  5,  9,  7,  6,  7,  8,  7,  8,  4,  3,  8,  7,  2,  6,  6,  0,  10,
    15, 15, 1,  2,  1,  4,  8,  2,  11, 8,  11, 5,  8,  15, 14, 12, 9,  6,  7,
    13, 7,  4,  8,  4,  2,  2,  1,  15, 13, 5,  15, 15, 10, 15, 15, 12, 7,  2,
    15, 4,  10, 12, 4,  4,  6,  5,  2,  6,  0,  1,  5,  3,  4,  5,  1,  5,  1,
    1,  0,  2,  4,  4,  6,  9,  6,  10, 7,  7,  6,  4,  15, 5,  10, 14, 0,  3,
    9,  7,  1,  3,  15, 9,  15, 15, 12, 14, 15, 2,  9,  6,  6,  4,  7,  3,  3,
    0,  10, 1,  5,  12, 11, 15, 1,  1,  15, 15, 4,  15, 9,  9,  10, 9,  14, 5,
    15, 15, 12, 5,  10, 15, 14, 7,  8,  14, 11, 1,  0,  7,  7,  0,  2,  2,  4,
    2,  3,  3,  0,  3,  7,  0,  7,  8,  1,  0,  2,  8,  2,  7,  1,  6,  2,  3,
    1,  1,  15, 15, 15, 15, 14, 0,  9,  9,  1,  5,  8,  5,  2,  6,  7,  2,  1,
    9,  1,  2,  2,  15, 10, 9,  7,  9,  12, 9,  8,  6,  6,  0,  7,  5,  9,  11,
    12, 6,  4,  4,  6,  3,  3,  3,  0,  3,  3,  0,  4,  2,  3,  4,  7,  4,  4,
    3,  1,  3,  7,  10, 5,  3,  13, 15, 11, 15, 9,  8,  4,  5,  15, 12, 1,  8,
    9,  15, 3,  13, 14, 15, 15, 5,  15, 6,  1,  1,  1,  5,  9,  9,  1,  10, 14,
    0,  10, 8,  12, 8,  15, 13, 14, 13, 5,  5,  12, 3,  8,  5,  1,  6,  6,  2,
    6,  3,  3,  4,  4,  1,  2,  1,  4,  2,  4,  2,  2,  1,  1,  3,  2,  6,  4,
    2,  1,  2,  2,  6,  4,  0,  0,  4,  0,  1,  6,  8,  9,  5,  10, 11, 1,  9,
    9,  15, 15, 1,  9,  1,  0,  8,  10, 6,  7,  10, 15, 15, 15, 15, 3,  13, 0,
    3,  5,  5,  12, 1,  2,  12, 14, 4,  7,  1,  11, 0,  15, 5,  9,  8,  15, 0,
    6,  15, 12, 5,  7,  6,  3,  9,  3,  7,  5,  4,  3,  7,  2,  13, 3,  13, 12,
    15, 11, 14, 2,  7,  11, 14, 6,  15, 15, 9,  11, 4,  15, 14, 3,  10, 7,  1,
    5,  8,  4,  15, 3,  12, 10, 7,  4,  7,  15, 2,  15, 0,  15, 13, 5,  15, 11,
    3,  8,
};
char noise_vol[800] = {
    0, 0,  0,  15, 0, 0, 4,  0,  0, 4, 0, 0,  0,  4, 0, 0,  0, 0, 0, 0,  9,  6,
    6, 8,  6,  5,  0, 5, 5,  8,  7, 5, 7, 4,  4,  4, 5, 5,  6, 0, 0, 0,  0,  0,
    0, 0,  0,  0,  0, 0, 0,  0,  0, 0, 0, 0,  0,  0, 0, 0,  0, 0, 0, 0,  8,  7,
    9, 7,  5,  5,  6, 4, 6,  10, 5, 9, 8, 5,  5,  6, 5, 0,  6, 6, 6, 5,  0,  0,
    0, 0,  6,  5,  5, 5, 7,  5,  6, 5, 5, 4,  5,  4, 4, 0,  4, 4, 0, 6,  0,  0,
    0, 0,  0,  0,  0, 0, 0,  0,  0, 0, 0, 0,  0,  0, 0, 0,  0, 0, 0, 0,  0,  0,
    0, 0,  0,  0,  0, 0, 0,  0,  0, 5, 6, 4,  0,  5, 8, 7,  0, 0, 6, 5,  0,  0,
    5, 5,  0,  0,  0, 7, 11, 6,  7, 5, 5, 6,  4,  6, 6, 8,  5, 5, 0, 0,  0,  0,
    0, 10, 14, 6,  5, 4, 4,  4,  5, 6, 5, 5,  6,  6, 6, 6,  5, 4, 6, 5,  5,  4,
    5, 5,  5,  6,  4, 7, 7,  7,  6, 6, 6, 5,  4,  8, 7, 10, 6, 6, 5, 5,  5,  0,
    0, 4,  6,  5,  4, 5, 0,  0,  0, 5, 7, 8,  7,  7, 7, 5,  6, 5, 7, 8,  8,  8,
    5, 7,  5,  4,  7, 7, 7,  6,  6, 5, 6, 0,  0,  4, 0, 4,  0, 0, 0, 0,  0,  4,
    0, 0,  0,  0,  0, 0, 0,  0,  0, 0, 0, 0,  0,  0, 0, 0,  0, 0, 0, 0,  0,  0,
    0, 5,  8,  6,  5, 5, 0,  0,  4, 0, 8, 9,  7,  5, 5, 6,  4, 0, 4, 7,  8,  5,
    0, 6,  0,  0,  0, 0, 5,  5,  0, 4, 0, 0,  0,  0, 0, 8,  7, 6, 9, 12, 9,  6,
    5, 13, 10, 10, 9, 7, 6,  7,  7, 7, 7, 7,  8,  0, 5, 7,  6, 6, 7, 9,  7,  4,
    0, 4,  4,  4,  6, 8, 7,  5,  4, 4, 0, 0,  0,  0, 6, 8,  9, 7, 6, 4,  4,  5,
    5, 5,  4,  0,  0, 0, 0,  0,  0, 0, 0, 0,  0,  0, 0, 0,  0, 0, 0, 0,  0,  0,
    0, 0,  0,  4,  8, 7, 5,  4,  4, 5, 5, 5,  5,  4, 0, 0,  5, 5, 0, 0,  5,  5,
    4, 7,  6,  4,  0, 0, 0,  10, 9, 9, 7, 7,  5,  5, 4, 7,  8, 5, 7, 5,  5,  5,
    5, 0,  0,  0,  0, 0, 0,  0,  0, 0, 0, 0,  0,  0, 0, 0,  0, 0, 0, 0,  6,  4,
    0, 0,  0,  5,  4, 6, 5,  5,  5, 5, 5, 0,  0,  0, 5, 5,  7, 7, 6, 6,  7,  7,
    8, 6,  5,  0,  0, 0, 0,  0,  0, 0, 6, 4,  5,  4, 4, 0,  0, 5, 5, 6,  6,  5,
    6, 4,  5,  5,  7, 5, 6,  7,  6, 5, 4, 5,  9,  6, 0, 0,  0, 0, 0, 0,  0,  0,
    0, 0,  0,  0,  0, 0, 0,  5,  5, 0, 0, 0,  0,  0, 0, 0,  0, 0, 0, 0,  0,  0,
    0, 0,  7,  0,  8, 7, 4,  0,  0, 0, 0, 0,  0,  0, 0, 5,  0, 0, 0, 0,  6,  6,
    7, 5,  5,  0,  0, 0, 0,  4,  0, 0, 0, 0,  0,  0, 0, 0,  7, 5, 4, 0,  0,  0,
    0, 0,  0,  0,  0, 0, 0,  0,  0, 0, 0, 0,  0,  0, 0, 0,  0, 0, 0, 0,  7,  7,
    9, 7,  6,  7,  4, 0, 0,  9,  5, 6, 7, 4,  5,  5, 4, 5,  8, 9, 6, 5,  0,  0,
    0, 0,  5,  5,  6, 4, 5,  4,  5, 4, 4, 0,  4,  5, 5, 5,  0, 0, 0, 4,  6,  4,
    0, 0,  0,  0,  0, 0, 0,  0,  0, 0, 0, 0,  0,  0, 0, 0,  0, 0, 0, 0,  0,  0,
    0, 0,  0,  0,  0, 0, 0,  0,  0, 0, 0, 6,  5,  6, 4, 5,  8, 6, 6, 9,  10, 7,
    5, 4,  4,  0,  0, 0, 6,  6,  6, 6, 4, 5,  6,  4, 5, 5,  6, 8, 8, 0,  0,  0,
    0, 4,  7,  9,  7, 5, 7,  4,  6, 7, 7, 10, 10, 7, 8, 8,  7, 7, 9, 10, 0,  0,
    0, 0,  0,  0,  0, 7, 9,  7,  7, 6, 5, 5,  6,  4, 7, 9,  7, 6, 5, 5,  5,  4,
    5, 7,  6,  7,  5, 6, 5,  4,  5, 0, 6, 5,  7,  6, 5, 5,  4, 5, 5, 7,  7,  5,
    5, 4,  4,  0,  0, 7, 8,  7,
};
