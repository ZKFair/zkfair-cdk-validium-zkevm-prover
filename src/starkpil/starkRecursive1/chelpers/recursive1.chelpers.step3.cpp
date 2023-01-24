#include "goldilocks_cubic_extension.hpp"
#include "zhInv.hpp"
#include "starks.hpp"
#include "constant_pols_starks.hpp"
#include "recursive1Steps.hpp"

void Recursive1Steps::step3_first(StepsParams &params, uint64_t i) {
     Goldilocks::Element tmp_141;
     Goldilocks::copy(tmp_141, params.pols[0 + i*12]);
     Goldilocks3::Element tmp_81;
     Goldilocks3::mul(tmp_81, (Goldilocks::Element &)*params.x_n[i], (Goldilocks3::Element &)*params.challenges[3]);
     Goldilocks3::Element tmp_82;
     Goldilocks3::add(tmp_82, tmp_141, tmp_81);
     Goldilocks3::Element tmp_142;
     Goldilocks3::add(tmp_142, tmp_82, (Goldilocks3::Element &)*params.challenges[2]);
     Goldilocks::Element tmp_143;
     Goldilocks::copy(tmp_143, params.pols[1 + i*12]);
     Goldilocks3::Element tmp_83;
     Goldilocks3::mul(tmp_83, Goldilocks::fromU64(12275445934081160404ULL), (Goldilocks3::Element &)*params.challenges[3]);
     Goldilocks3::Element tmp_84;
     Goldilocks3::mul(tmp_84, (Goldilocks::Element &)*params.x_n[i], tmp_83);
     Goldilocks3::Element tmp_85;
     Goldilocks3::add(tmp_85, tmp_143, tmp_84);
     Goldilocks3::Element tmp_86;
     Goldilocks3::add(tmp_86, tmp_85, (Goldilocks3::Element &)*params.challenges[2]);
     Goldilocks3::Element tmp_144;
     Goldilocks3::mul(tmp_144, tmp_142, tmp_86);
     Goldilocks::Element tmp_145;
     Goldilocks::copy(tmp_145, params.pols[2 + i*12]);
     Goldilocks3::Element tmp_87;
     Goldilocks3::mul(tmp_87, Goldilocks::fromU64(4756475762779100925ULL), (Goldilocks3::Element &)*params.challenges[3]);
     Goldilocks3::Element tmp_88;
     Goldilocks3::mul(tmp_88, (Goldilocks::Element &)*params.x_n[i], tmp_87);
     Goldilocks3::Element tmp_89;
     Goldilocks3::add(tmp_89, tmp_145, tmp_88);
     Goldilocks3::Element tmp_90;
     Goldilocks3::add(tmp_90, tmp_89, (Goldilocks3::Element &)*params.challenges[2]);
     Goldilocks3::Element tmp_146;
     Goldilocks3::mul(tmp_146, tmp_144, tmp_90);
     Goldilocks::Element tmp_147;
     Goldilocks::copy(tmp_147, params.pols[3 + i*12]);
     Goldilocks3::Element tmp_91;
     Goldilocks3::mul(tmp_91, Goldilocks::fromU64(1279992132519201448ULL), (Goldilocks3::Element &)*params.challenges[3]);
     Goldilocks3::Element tmp_92;
     Goldilocks3::mul(tmp_92, (Goldilocks::Element &)*params.x_n[i], tmp_91);
     Goldilocks3::Element tmp_93;
     Goldilocks3::add(tmp_93, tmp_147, tmp_92);
     Goldilocks3::Element tmp_94;
     Goldilocks3::add(tmp_94, tmp_93, (Goldilocks3::Element &)*params.challenges[2]);
     Goldilocks3::Element tmp_148;
     Goldilocks3::mul(tmp_148, tmp_146, tmp_94);
     Goldilocks::Element tmp_149;
     Goldilocks::copy(tmp_149, params.pols[4 + i*12]);
     Goldilocks3::Element tmp_95;
     Goldilocks3::mul(tmp_95, Goldilocks::fromU64(8312008622371998338ULL), (Goldilocks3::Element &)*params.challenges[3]);
     Goldilocks3::Element tmp_96;
     Goldilocks3::mul(tmp_96, (Goldilocks::Element &)*params.x_n[i], tmp_95);
     Goldilocks3::Element tmp_97;
     Goldilocks3::add(tmp_97, tmp_149, tmp_96);
     Goldilocks3::Element tmp_98;
     Goldilocks3::add(tmp_98, tmp_97, (Goldilocks3::Element &)*params.challenges[2]);
     Goldilocks3::Element tmp_150;
     Goldilocks3::mul(tmp_150, tmp_148, tmp_98);
     Goldilocks::Element tmp_151;
     Goldilocks::copy(tmp_151, params.pols[5 + i*12]);
     Goldilocks3::Element tmp_99;
     Goldilocks3::mul(tmp_99, Goldilocks::fromU64(7781028390488215464ULL), (Goldilocks3::Element &)*params.challenges[3]);
     Goldilocks3::Element tmp_100;
     Goldilocks3::mul(tmp_100, (Goldilocks::Element &)*params.x_n[i], tmp_99);
     Goldilocks3::Element tmp_101;
     Goldilocks3::add(tmp_101, tmp_151, tmp_100);
     Goldilocks3::Element tmp_102;
     Goldilocks3::add(tmp_102, tmp_101, (Goldilocks3::Element &)*params.challenges[2]);
     Goldilocks3::Element tmp_152;
     Goldilocks3::mul(tmp_152, tmp_150, tmp_102);
     Goldilocks::Element tmp_153;
     Goldilocks::copy(tmp_153, params.pols[6 + i*12]);
     Goldilocks3::Element tmp_103;
     Goldilocks3::mul(tmp_103, Goldilocks::fromU64(11302600489504509467ULL), (Goldilocks3::Element &)*params.challenges[3]);
     Goldilocks3::Element tmp_104;
     Goldilocks3::mul(tmp_104, (Goldilocks::Element &)*params.x_n[i], tmp_103);
     Goldilocks3::Element tmp_105;
     Goldilocks3::add(tmp_105, tmp_153, tmp_104);
     Goldilocks3::Element tmp_106;
     Goldilocks3::add(tmp_106, tmp_105, (Goldilocks3::Element &)*params.challenges[2]);
     Goldilocks3::Element tmp_154;
     Goldilocks3::mul(tmp_154, tmp_152, tmp_106);
     Goldilocks::Element tmp_155;
     Goldilocks::copy(tmp_155, params.pols[7 + i*12]);
     Goldilocks3::Element tmp_107;
     Goldilocks3::mul(tmp_107, Goldilocks::fromU64(4549350404001778198ULL), (Goldilocks3::Element &)*params.challenges[3]);
     Goldilocks3::Element tmp_108;
     Goldilocks3::mul(tmp_108, (Goldilocks::Element &)*params.x_n[i], tmp_107);
     Goldilocks3::Element tmp_109;
     Goldilocks3::add(tmp_109, tmp_155, tmp_108);
     Goldilocks3::Element tmp_110;
     Goldilocks3::add(tmp_110, tmp_109, (Goldilocks3::Element &)*params.challenges[2]);
     Goldilocks3::Element tmp_156;
     Goldilocks3::mul(tmp_156, tmp_154, tmp_110);
     Goldilocks::Element tmp_157;
     Goldilocks::copy(tmp_157, params.pols[8 + i*12]);
     Goldilocks3::Element tmp_111;
     Goldilocks3::mul(tmp_111, Goldilocks::fromU64(3688660304411827445ULL), (Goldilocks3::Element &)*params.challenges[3]);
     Goldilocks3::Element tmp_112;
     Goldilocks3::mul(tmp_112, (Goldilocks::Element &)*params.x_n[i], tmp_111);
     Goldilocks3::Element tmp_113;
     Goldilocks3::add(tmp_113, tmp_157, tmp_112);
     Goldilocks3::Element tmp_114;
     Goldilocks3::add(tmp_114, tmp_113, (Goldilocks3::Element &)*params.challenges[2]);
     Goldilocks3::mul((Goldilocks3::Element &)(params.pols[12582915 + i*9]), tmp_156, tmp_114);
     Goldilocks::Element tmp_158;
     Goldilocks::copy(tmp_158,  params.pConstPols->getElement(4,i));
     Goldilocks3::Element tmp_115;
     Goldilocks3::mul(tmp_115, tmp_158, (Goldilocks3::Element &)*params.challenges[3]);
     Goldilocks3::Element tmp_116;
     Goldilocks3::add(tmp_116, tmp_141, tmp_115);
     Goldilocks3::Element tmp_159;
     Goldilocks3::add(tmp_159, tmp_116, (Goldilocks3::Element &)*params.challenges[2]);
     Goldilocks::Element tmp_160;
     Goldilocks::copy(tmp_160,  params.pConstPols->getElement(5,i));
     Goldilocks3::Element tmp_117;
     Goldilocks3::mul(tmp_117, tmp_160, (Goldilocks3::Element &)*params.challenges[3]);
     Goldilocks3::Element tmp_118;
     Goldilocks3::add(tmp_118, tmp_143, tmp_117);
     Goldilocks3::Element tmp_119;
     Goldilocks3::add(tmp_119, tmp_118, (Goldilocks3::Element &)*params.challenges[2]);
     Goldilocks3::Element tmp_161;
     Goldilocks3::mul(tmp_161, tmp_159, tmp_119);
     Goldilocks::Element tmp_162;
     Goldilocks::copy(tmp_162,  params.pConstPols->getElement(6,i));
     Goldilocks3::Element tmp_120;
     Goldilocks3::mul(tmp_120, tmp_162, (Goldilocks3::Element &)*params.challenges[3]);
     Goldilocks3::Element tmp_121;
     Goldilocks3::add(tmp_121, tmp_145, tmp_120);
     Goldilocks3::Element tmp_122;
     Goldilocks3::add(tmp_122, tmp_121, (Goldilocks3::Element &)*params.challenges[2]);
     Goldilocks3::Element tmp_163;
     Goldilocks3::mul(tmp_163, tmp_161, tmp_122);
     Goldilocks::Element tmp_164;
     Goldilocks::copy(tmp_164,  params.pConstPols->getElement(7,i));
     Goldilocks3::Element tmp_123;
     Goldilocks3::mul(tmp_123, tmp_164, (Goldilocks3::Element &)*params.challenges[3]);
     Goldilocks3::Element tmp_124;
     Goldilocks3::add(tmp_124, tmp_147, tmp_123);
     Goldilocks3::Element tmp_125;
     Goldilocks3::add(tmp_125, tmp_124, (Goldilocks3::Element &)*params.challenges[2]);
     Goldilocks3::Element tmp_165;
     Goldilocks3::mul(tmp_165, tmp_163, tmp_125);
     Goldilocks::Element tmp_166;
     Goldilocks::copy(tmp_166,  params.pConstPols->getElement(8,i));
     Goldilocks3::Element tmp_126;
     Goldilocks3::mul(tmp_126, tmp_166, (Goldilocks3::Element &)*params.challenges[3]);
     Goldilocks3::Element tmp_127;
     Goldilocks3::add(tmp_127, tmp_149, tmp_126);
     Goldilocks3::Element tmp_128;
     Goldilocks3::add(tmp_128, tmp_127, (Goldilocks3::Element &)*params.challenges[2]);
     Goldilocks3::Element tmp_167;
     Goldilocks3::mul(tmp_167, tmp_165, tmp_128);
     Goldilocks::Element tmp_168;
     Goldilocks::copy(tmp_168,  params.pConstPols->getElement(9,i));
     Goldilocks3::Element tmp_129;
     Goldilocks3::mul(tmp_129, tmp_168, (Goldilocks3::Element &)*params.challenges[3]);
     Goldilocks3::Element tmp_130;
     Goldilocks3::add(tmp_130, tmp_151, tmp_129);
     Goldilocks3::Element tmp_131;
     Goldilocks3::add(tmp_131, tmp_130, (Goldilocks3::Element &)*params.challenges[2]);
     Goldilocks3::Element tmp_169;
     Goldilocks3::mul(tmp_169, tmp_167, tmp_131);
     Goldilocks::Element tmp_170;
     Goldilocks::copy(tmp_170,  params.pConstPols->getElement(10,i));
     Goldilocks3::Element tmp_132;
     Goldilocks3::mul(tmp_132, tmp_170, (Goldilocks3::Element &)*params.challenges[3]);
     Goldilocks3::Element tmp_133;
     Goldilocks3::add(tmp_133, tmp_153, tmp_132);
     Goldilocks3::Element tmp_134;
     Goldilocks3::add(tmp_134, tmp_133, (Goldilocks3::Element &)*params.challenges[2]);
     Goldilocks3::Element tmp_171;
     Goldilocks3::mul(tmp_171, tmp_169, tmp_134);
     Goldilocks::Element tmp_172;
     Goldilocks::copy(tmp_172,  params.pConstPols->getElement(11,i));
     Goldilocks3::Element tmp_135;
     Goldilocks3::mul(tmp_135, tmp_172, (Goldilocks3::Element &)*params.challenges[3]);
     Goldilocks3::Element tmp_136;
     Goldilocks3::add(tmp_136, tmp_155, tmp_135);
     Goldilocks3::Element tmp_137;
     Goldilocks3::add(tmp_137, tmp_136, (Goldilocks3::Element &)*params.challenges[2]);
     Goldilocks3::Element tmp_173;
     Goldilocks3::mul(tmp_173, tmp_171, tmp_137);
     Goldilocks::Element tmp_174;
     Goldilocks::copy(tmp_174,  params.pConstPols->getElement(12,i));
     Goldilocks3::Element tmp_138;
     Goldilocks3::mul(tmp_138, tmp_174, (Goldilocks3::Element &)*params.challenges[3]);
     Goldilocks3::Element tmp_139;
     Goldilocks3::add(tmp_139, tmp_157, tmp_138);
     Goldilocks3::Element tmp_140;
     Goldilocks3::add(tmp_140, tmp_139, (Goldilocks3::Element &)*params.challenges[2]);
     Goldilocks3::mul((Goldilocks3::Element &)(params.pols[12582918 + i*9]), tmp_173, tmp_140);
}

void Recursive1Steps::step3_i(StepsParams &params, uint64_t i) {
     Goldilocks::Element tmp_141;
     Goldilocks::copy(tmp_141, params.pols[0 + i*12]);
     Goldilocks3::Element tmp_81;
     Goldilocks3::mul(tmp_81, (Goldilocks::Element &)*params.x_n[i], (Goldilocks3::Element &)*params.challenges[3]);
     Goldilocks3::Element tmp_82;
     Goldilocks3::add(tmp_82, tmp_141, tmp_81);
     Goldilocks3::Element tmp_142;
     Goldilocks3::add(tmp_142, tmp_82, (Goldilocks3::Element &)*params.challenges[2]);
     Goldilocks::Element tmp_143;
     Goldilocks::copy(tmp_143, params.pols[1 + i*12]);
     Goldilocks3::Element tmp_83;
     Goldilocks3::mul(tmp_83, Goldilocks::fromU64(12275445934081160404ULL), (Goldilocks3::Element &)*params.challenges[3]);
     Goldilocks3::Element tmp_84;
     Goldilocks3::mul(tmp_84, (Goldilocks::Element &)*params.x_n[i], tmp_83);
     Goldilocks3::Element tmp_85;
     Goldilocks3::add(tmp_85, tmp_143, tmp_84);
     Goldilocks3::Element tmp_86;
     Goldilocks3::add(tmp_86, tmp_85, (Goldilocks3::Element &)*params.challenges[2]);
     Goldilocks3::Element tmp_144;
     Goldilocks3::mul(tmp_144, tmp_142, tmp_86);
     Goldilocks::Element tmp_145;
     Goldilocks::copy(tmp_145, params.pols[2 + i*12]);
     Goldilocks3::Element tmp_87;
     Goldilocks3::mul(tmp_87, Goldilocks::fromU64(4756475762779100925ULL), (Goldilocks3::Element &)*params.challenges[3]);
     Goldilocks3::Element tmp_88;
     Goldilocks3::mul(tmp_88, (Goldilocks::Element &)*params.x_n[i], tmp_87);
     Goldilocks3::Element tmp_89;
     Goldilocks3::add(tmp_89, tmp_145, tmp_88);
     Goldilocks3::Element tmp_90;
     Goldilocks3::add(tmp_90, tmp_89, (Goldilocks3::Element &)*params.challenges[2]);
     Goldilocks3::Element tmp_146;
     Goldilocks3::mul(tmp_146, tmp_144, tmp_90);
     Goldilocks::Element tmp_147;
     Goldilocks::copy(tmp_147, params.pols[3 + i*12]);
     Goldilocks3::Element tmp_91;
     Goldilocks3::mul(tmp_91, Goldilocks::fromU64(1279992132519201448ULL), (Goldilocks3::Element &)*params.challenges[3]);
     Goldilocks3::Element tmp_92;
     Goldilocks3::mul(tmp_92, (Goldilocks::Element &)*params.x_n[i], tmp_91);
     Goldilocks3::Element tmp_93;
     Goldilocks3::add(tmp_93, tmp_147, tmp_92);
     Goldilocks3::Element tmp_94;
     Goldilocks3::add(tmp_94, tmp_93, (Goldilocks3::Element &)*params.challenges[2]);
     Goldilocks3::Element tmp_148;
     Goldilocks3::mul(tmp_148, tmp_146, tmp_94);
     Goldilocks::Element tmp_149;
     Goldilocks::copy(tmp_149, params.pols[4 + i*12]);
     Goldilocks3::Element tmp_95;
     Goldilocks3::mul(tmp_95, Goldilocks::fromU64(8312008622371998338ULL), (Goldilocks3::Element &)*params.challenges[3]);
     Goldilocks3::Element tmp_96;
     Goldilocks3::mul(tmp_96, (Goldilocks::Element &)*params.x_n[i], tmp_95);
     Goldilocks3::Element tmp_97;
     Goldilocks3::add(tmp_97, tmp_149, tmp_96);
     Goldilocks3::Element tmp_98;
     Goldilocks3::add(tmp_98, tmp_97, (Goldilocks3::Element &)*params.challenges[2]);
     Goldilocks3::Element tmp_150;
     Goldilocks3::mul(tmp_150, tmp_148, tmp_98);
     Goldilocks::Element tmp_151;
     Goldilocks::copy(tmp_151, params.pols[5 + i*12]);
     Goldilocks3::Element tmp_99;
     Goldilocks3::mul(tmp_99, Goldilocks::fromU64(7781028390488215464ULL), (Goldilocks3::Element &)*params.challenges[3]);
     Goldilocks3::Element tmp_100;
     Goldilocks3::mul(tmp_100, (Goldilocks::Element &)*params.x_n[i], tmp_99);
     Goldilocks3::Element tmp_101;
     Goldilocks3::add(tmp_101, tmp_151, tmp_100);
     Goldilocks3::Element tmp_102;
     Goldilocks3::add(tmp_102, tmp_101, (Goldilocks3::Element &)*params.challenges[2]);
     Goldilocks3::Element tmp_152;
     Goldilocks3::mul(tmp_152, tmp_150, tmp_102);
     Goldilocks::Element tmp_153;
     Goldilocks::copy(tmp_153, params.pols[6 + i*12]);
     Goldilocks3::Element tmp_103;
     Goldilocks3::mul(tmp_103, Goldilocks::fromU64(11302600489504509467ULL), (Goldilocks3::Element &)*params.challenges[3]);
     Goldilocks3::Element tmp_104;
     Goldilocks3::mul(tmp_104, (Goldilocks::Element &)*params.x_n[i], tmp_103);
     Goldilocks3::Element tmp_105;
     Goldilocks3::add(tmp_105, tmp_153, tmp_104);
     Goldilocks3::Element tmp_106;
     Goldilocks3::add(tmp_106, tmp_105, (Goldilocks3::Element &)*params.challenges[2]);
     Goldilocks3::Element tmp_154;
     Goldilocks3::mul(tmp_154, tmp_152, tmp_106);
     Goldilocks::Element tmp_155;
     Goldilocks::copy(tmp_155, params.pols[7 + i*12]);
     Goldilocks3::Element tmp_107;
     Goldilocks3::mul(tmp_107, Goldilocks::fromU64(4549350404001778198ULL), (Goldilocks3::Element &)*params.challenges[3]);
     Goldilocks3::Element tmp_108;
     Goldilocks3::mul(tmp_108, (Goldilocks::Element &)*params.x_n[i], tmp_107);
     Goldilocks3::Element tmp_109;
     Goldilocks3::add(tmp_109, tmp_155, tmp_108);
     Goldilocks3::Element tmp_110;
     Goldilocks3::add(tmp_110, tmp_109, (Goldilocks3::Element &)*params.challenges[2]);
     Goldilocks3::Element tmp_156;
     Goldilocks3::mul(tmp_156, tmp_154, tmp_110);
     Goldilocks::Element tmp_157;
     Goldilocks::copy(tmp_157, params.pols[8 + i*12]);
     Goldilocks3::Element tmp_111;
     Goldilocks3::mul(tmp_111, Goldilocks::fromU64(3688660304411827445ULL), (Goldilocks3::Element &)*params.challenges[3]);
     Goldilocks3::Element tmp_112;
     Goldilocks3::mul(tmp_112, (Goldilocks::Element &)*params.x_n[i], tmp_111);
     Goldilocks3::Element tmp_113;
     Goldilocks3::add(tmp_113, tmp_157, tmp_112);
     Goldilocks3::Element tmp_114;
     Goldilocks3::add(tmp_114, tmp_113, (Goldilocks3::Element &)*params.challenges[2]);
     Goldilocks3::mul((Goldilocks3::Element &)(params.pols[12582915 + i*9]), tmp_156, tmp_114);
     Goldilocks::Element tmp_158;
     Goldilocks::copy(tmp_158,  params.pConstPols->getElement(4,i));
     Goldilocks3::Element tmp_115;
     Goldilocks3::mul(tmp_115, tmp_158, (Goldilocks3::Element &)*params.challenges[3]);
     Goldilocks3::Element tmp_116;
     Goldilocks3::add(tmp_116, tmp_141, tmp_115);
     Goldilocks3::Element tmp_159;
     Goldilocks3::add(tmp_159, tmp_116, (Goldilocks3::Element &)*params.challenges[2]);
     Goldilocks::Element tmp_160;
     Goldilocks::copy(tmp_160,  params.pConstPols->getElement(5,i));
     Goldilocks3::Element tmp_117;
     Goldilocks3::mul(tmp_117, tmp_160, (Goldilocks3::Element &)*params.challenges[3]);
     Goldilocks3::Element tmp_118;
     Goldilocks3::add(tmp_118, tmp_143, tmp_117);
     Goldilocks3::Element tmp_119;
     Goldilocks3::add(tmp_119, tmp_118, (Goldilocks3::Element &)*params.challenges[2]);
     Goldilocks3::Element tmp_161;
     Goldilocks3::mul(tmp_161, tmp_159, tmp_119);
     Goldilocks::Element tmp_162;
     Goldilocks::copy(tmp_162,  params.pConstPols->getElement(6,i));
     Goldilocks3::Element tmp_120;
     Goldilocks3::mul(tmp_120, tmp_162, (Goldilocks3::Element &)*params.challenges[3]);
     Goldilocks3::Element tmp_121;
     Goldilocks3::add(tmp_121, tmp_145, tmp_120);
     Goldilocks3::Element tmp_122;
     Goldilocks3::add(tmp_122, tmp_121, (Goldilocks3::Element &)*params.challenges[2]);
     Goldilocks3::Element tmp_163;
     Goldilocks3::mul(tmp_163, tmp_161, tmp_122);
     Goldilocks::Element tmp_164;
     Goldilocks::copy(tmp_164,  params.pConstPols->getElement(7,i));
     Goldilocks3::Element tmp_123;
     Goldilocks3::mul(tmp_123, tmp_164, (Goldilocks3::Element &)*params.challenges[3]);
     Goldilocks3::Element tmp_124;
     Goldilocks3::add(tmp_124, tmp_147, tmp_123);
     Goldilocks3::Element tmp_125;
     Goldilocks3::add(tmp_125, tmp_124, (Goldilocks3::Element &)*params.challenges[2]);
     Goldilocks3::Element tmp_165;
     Goldilocks3::mul(tmp_165, tmp_163, tmp_125);
     Goldilocks::Element tmp_166;
     Goldilocks::copy(tmp_166,  params.pConstPols->getElement(8,i));
     Goldilocks3::Element tmp_126;
     Goldilocks3::mul(tmp_126, tmp_166, (Goldilocks3::Element &)*params.challenges[3]);
     Goldilocks3::Element tmp_127;
     Goldilocks3::add(tmp_127, tmp_149, tmp_126);
     Goldilocks3::Element tmp_128;
     Goldilocks3::add(tmp_128, tmp_127, (Goldilocks3::Element &)*params.challenges[2]);
     Goldilocks3::Element tmp_167;
     Goldilocks3::mul(tmp_167, tmp_165, tmp_128);
     Goldilocks::Element tmp_168;
     Goldilocks::copy(tmp_168,  params.pConstPols->getElement(9,i));
     Goldilocks3::Element tmp_129;
     Goldilocks3::mul(tmp_129, tmp_168, (Goldilocks3::Element &)*params.challenges[3]);
     Goldilocks3::Element tmp_130;
     Goldilocks3::add(tmp_130, tmp_151, tmp_129);
     Goldilocks3::Element tmp_131;
     Goldilocks3::add(tmp_131, tmp_130, (Goldilocks3::Element &)*params.challenges[2]);
     Goldilocks3::Element tmp_169;
     Goldilocks3::mul(tmp_169, tmp_167, tmp_131);
     Goldilocks::Element tmp_170;
     Goldilocks::copy(tmp_170,  params.pConstPols->getElement(10,i));
     Goldilocks3::Element tmp_132;
     Goldilocks3::mul(tmp_132, tmp_170, (Goldilocks3::Element &)*params.challenges[3]);
     Goldilocks3::Element tmp_133;
     Goldilocks3::add(tmp_133, tmp_153, tmp_132);
     Goldilocks3::Element tmp_134;
     Goldilocks3::add(tmp_134, tmp_133, (Goldilocks3::Element &)*params.challenges[2]);
     Goldilocks3::Element tmp_171;
     Goldilocks3::mul(tmp_171, tmp_169, tmp_134);
     Goldilocks::Element tmp_172;
     Goldilocks::copy(tmp_172,  params.pConstPols->getElement(11,i));
     Goldilocks3::Element tmp_135;
     Goldilocks3::mul(tmp_135, tmp_172, (Goldilocks3::Element &)*params.challenges[3]);
     Goldilocks3::Element tmp_136;
     Goldilocks3::add(tmp_136, tmp_155, tmp_135);
     Goldilocks3::Element tmp_137;
     Goldilocks3::add(tmp_137, tmp_136, (Goldilocks3::Element &)*params.challenges[2]);
     Goldilocks3::Element tmp_173;
     Goldilocks3::mul(tmp_173, tmp_171, tmp_137);
     Goldilocks::Element tmp_174;
     Goldilocks::copy(tmp_174,  params.pConstPols->getElement(12,i));
     Goldilocks3::Element tmp_138;
     Goldilocks3::mul(tmp_138, tmp_174, (Goldilocks3::Element &)*params.challenges[3]);
     Goldilocks3::Element tmp_139;
     Goldilocks3::add(tmp_139, tmp_157, tmp_138);
     Goldilocks3::Element tmp_140;
     Goldilocks3::add(tmp_140, tmp_139, (Goldilocks3::Element &)*params.challenges[2]);
     Goldilocks3::mul((Goldilocks3::Element &)(params.pols[12582918 + i*9]), tmp_173, tmp_140);
}

void Recursive1Steps::step3_last(StepsParams &params, uint64_t i) {
     Goldilocks::Element tmp_141;
     Goldilocks::copy(tmp_141, params.pols[0 + i*12]);
     Goldilocks3::Element tmp_81;
     Goldilocks3::mul(tmp_81, (Goldilocks::Element &)*params.x_n[i], (Goldilocks3::Element &)*params.challenges[3]);
     Goldilocks3::Element tmp_82;
     Goldilocks3::add(tmp_82, tmp_141, tmp_81);
     Goldilocks3::Element tmp_142;
     Goldilocks3::add(tmp_142, tmp_82, (Goldilocks3::Element &)*params.challenges[2]);
     Goldilocks::Element tmp_143;
     Goldilocks::copy(tmp_143, params.pols[1 + i*12]);
     Goldilocks3::Element tmp_83;
     Goldilocks3::mul(tmp_83, Goldilocks::fromU64(12275445934081160404ULL), (Goldilocks3::Element &)*params.challenges[3]);
     Goldilocks3::Element tmp_84;
     Goldilocks3::mul(tmp_84, (Goldilocks::Element &)*params.x_n[i], tmp_83);
     Goldilocks3::Element tmp_85;
     Goldilocks3::add(tmp_85, tmp_143, tmp_84);
     Goldilocks3::Element tmp_86;
     Goldilocks3::add(tmp_86, tmp_85, (Goldilocks3::Element &)*params.challenges[2]);
     Goldilocks3::Element tmp_144;
     Goldilocks3::mul(tmp_144, tmp_142, tmp_86);
     Goldilocks::Element tmp_145;
     Goldilocks::copy(tmp_145, params.pols[2 + i*12]);
     Goldilocks3::Element tmp_87;
     Goldilocks3::mul(tmp_87, Goldilocks::fromU64(4756475762779100925ULL), (Goldilocks3::Element &)*params.challenges[3]);
     Goldilocks3::Element tmp_88;
     Goldilocks3::mul(tmp_88, (Goldilocks::Element &)*params.x_n[i], tmp_87);
     Goldilocks3::Element tmp_89;
     Goldilocks3::add(tmp_89, tmp_145, tmp_88);
     Goldilocks3::Element tmp_90;
     Goldilocks3::add(tmp_90, tmp_89, (Goldilocks3::Element &)*params.challenges[2]);
     Goldilocks3::Element tmp_146;
     Goldilocks3::mul(tmp_146, tmp_144, tmp_90);
     Goldilocks::Element tmp_147;
     Goldilocks::copy(tmp_147, params.pols[3 + i*12]);
     Goldilocks3::Element tmp_91;
     Goldilocks3::mul(tmp_91, Goldilocks::fromU64(1279992132519201448ULL), (Goldilocks3::Element &)*params.challenges[3]);
     Goldilocks3::Element tmp_92;
     Goldilocks3::mul(tmp_92, (Goldilocks::Element &)*params.x_n[i], tmp_91);
     Goldilocks3::Element tmp_93;
     Goldilocks3::add(tmp_93, tmp_147, tmp_92);
     Goldilocks3::Element tmp_94;
     Goldilocks3::add(tmp_94, tmp_93, (Goldilocks3::Element &)*params.challenges[2]);
     Goldilocks3::Element tmp_148;
     Goldilocks3::mul(tmp_148, tmp_146, tmp_94);
     Goldilocks::Element tmp_149;
     Goldilocks::copy(tmp_149, params.pols[4 + i*12]);
     Goldilocks3::Element tmp_95;
     Goldilocks3::mul(tmp_95, Goldilocks::fromU64(8312008622371998338ULL), (Goldilocks3::Element &)*params.challenges[3]);
     Goldilocks3::Element tmp_96;
     Goldilocks3::mul(tmp_96, (Goldilocks::Element &)*params.x_n[i], tmp_95);
     Goldilocks3::Element tmp_97;
     Goldilocks3::add(tmp_97, tmp_149, tmp_96);
     Goldilocks3::Element tmp_98;
     Goldilocks3::add(tmp_98, tmp_97, (Goldilocks3::Element &)*params.challenges[2]);
     Goldilocks3::Element tmp_150;
     Goldilocks3::mul(tmp_150, tmp_148, tmp_98);
     Goldilocks::Element tmp_151;
     Goldilocks::copy(tmp_151, params.pols[5 + i*12]);
     Goldilocks3::Element tmp_99;
     Goldilocks3::mul(tmp_99, Goldilocks::fromU64(7781028390488215464ULL), (Goldilocks3::Element &)*params.challenges[3]);
     Goldilocks3::Element tmp_100;
     Goldilocks3::mul(tmp_100, (Goldilocks::Element &)*params.x_n[i], tmp_99);
     Goldilocks3::Element tmp_101;
     Goldilocks3::add(tmp_101, tmp_151, tmp_100);
     Goldilocks3::Element tmp_102;
     Goldilocks3::add(tmp_102, tmp_101, (Goldilocks3::Element &)*params.challenges[2]);
     Goldilocks3::Element tmp_152;
     Goldilocks3::mul(tmp_152, tmp_150, tmp_102);
     Goldilocks::Element tmp_153;
     Goldilocks::copy(tmp_153, params.pols[6 + i*12]);
     Goldilocks3::Element tmp_103;
     Goldilocks3::mul(tmp_103, Goldilocks::fromU64(11302600489504509467ULL), (Goldilocks3::Element &)*params.challenges[3]);
     Goldilocks3::Element tmp_104;
     Goldilocks3::mul(tmp_104, (Goldilocks::Element &)*params.x_n[i], tmp_103);
     Goldilocks3::Element tmp_105;
     Goldilocks3::add(tmp_105, tmp_153, tmp_104);
     Goldilocks3::Element tmp_106;
     Goldilocks3::add(tmp_106, tmp_105, (Goldilocks3::Element &)*params.challenges[2]);
     Goldilocks3::Element tmp_154;
     Goldilocks3::mul(tmp_154, tmp_152, tmp_106);
     Goldilocks::Element tmp_155;
     Goldilocks::copy(tmp_155, params.pols[7 + i*12]);
     Goldilocks3::Element tmp_107;
     Goldilocks3::mul(tmp_107, Goldilocks::fromU64(4549350404001778198ULL), (Goldilocks3::Element &)*params.challenges[3]);
     Goldilocks3::Element tmp_108;
     Goldilocks3::mul(tmp_108, (Goldilocks::Element &)*params.x_n[i], tmp_107);
     Goldilocks3::Element tmp_109;
     Goldilocks3::add(tmp_109, tmp_155, tmp_108);
     Goldilocks3::Element tmp_110;
     Goldilocks3::add(tmp_110, tmp_109, (Goldilocks3::Element &)*params.challenges[2]);
     Goldilocks3::Element tmp_156;
     Goldilocks3::mul(tmp_156, tmp_154, tmp_110);
     Goldilocks::Element tmp_157;
     Goldilocks::copy(tmp_157, params.pols[8 + i*12]);
     Goldilocks3::Element tmp_111;
     Goldilocks3::mul(tmp_111, Goldilocks::fromU64(3688660304411827445ULL), (Goldilocks3::Element &)*params.challenges[3]);
     Goldilocks3::Element tmp_112;
     Goldilocks3::mul(tmp_112, (Goldilocks::Element &)*params.x_n[i], tmp_111);
     Goldilocks3::Element tmp_113;
     Goldilocks3::add(tmp_113, tmp_157, tmp_112);
     Goldilocks3::Element tmp_114;
     Goldilocks3::add(tmp_114, tmp_113, (Goldilocks3::Element &)*params.challenges[2]);
     Goldilocks3::mul((Goldilocks3::Element &)(params.pols[12582915 + i*9]), tmp_156, tmp_114);
     Goldilocks::Element tmp_158;
     Goldilocks::copy(tmp_158,  params.pConstPols->getElement(4,i));
     Goldilocks3::Element tmp_115;
     Goldilocks3::mul(tmp_115, tmp_158, (Goldilocks3::Element &)*params.challenges[3]);
     Goldilocks3::Element tmp_116;
     Goldilocks3::add(tmp_116, tmp_141, tmp_115);
     Goldilocks3::Element tmp_159;
     Goldilocks3::add(tmp_159, tmp_116, (Goldilocks3::Element &)*params.challenges[2]);
     Goldilocks::Element tmp_160;
     Goldilocks::copy(tmp_160,  params.pConstPols->getElement(5,i));
     Goldilocks3::Element tmp_117;
     Goldilocks3::mul(tmp_117, tmp_160, (Goldilocks3::Element &)*params.challenges[3]);
     Goldilocks3::Element tmp_118;
     Goldilocks3::add(tmp_118, tmp_143, tmp_117);
     Goldilocks3::Element tmp_119;
     Goldilocks3::add(tmp_119, tmp_118, (Goldilocks3::Element &)*params.challenges[2]);
     Goldilocks3::Element tmp_161;
     Goldilocks3::mul(tmp_161, tmp_159, tmp_119);
     Goldilocks::Element tmp_162;
     Goldilocks::copy(tmp_162,  params.pConstPols->getElement(6,i));
     Goldilocks3::Element tmp_120;
     Goldilocks3::mul(tmp_120, tmp_162, (Goldilocks3::Element &)*params.challenges[3]);
     Goldilocks3::Element tmp_121;
     Goldilocks3::add(tmp_121, tmp_145, tmp_120);
     Goldilocks3::Element tmp_122;
     Goldilocks3::add(tmp_122, tmp_121, (Goldilocks3::Element &)*params.challenges[2]);
     Goldilocks3::Element tmp_163;
     Goldilocks3::mul(tmp_163, tmp_161, tmp_122);
     Goldilocks::Element tmp_164;
     Goldilocks::copy(tmp_164,  params.pConstPols->getElement(7,i));
     Goldilocks3::Element tmp_123;
     Goldilocks3::mul(tmp_123, tmp_164, (Goldilocks3::Element &)*params.challenges[3]);
     Goldilocks3::Element tmp_124;
     Goldilocks3::add(tmp_124, tmp_147, tmp_123);
     Goldilocks3::Element tmp_125;
     Goldilocks3::add(tmp_125, tmp_124, (Goldilocks3::Element &)*params.challenges[2]);
     Goldilocks3::Element tmp_165;
     Goldilocks3::mul(tmp_165, tmp_163, tmp_125);
     Goldilocks::Element tmp_166;
     Goldilocks::copy(tmp_166,  params.pConstPols->getElement(8,i));
     Goldilocks3::Element tmp_126;
     Goldilocks3::mul(tmp_126, tmp_166, (Goldilocks3::Element &)*params.challenges[3]);
     Goldilocks3::Element tmp_127;
     Goldilocks3::add(tmp_127, tmp_149, tmp_126);
     Goldilocks3::Element tmp_128;
     Goldilocks3::add(tmp_128, tmp_127, (Goldilocks3::Element &)*params.challenges[2]);
     Goldilocks3::Element tmp_167;
     Goldilocks3::mul(tmp_167, tmp_165, tmp_128);
     Goldilocks::Element tmp_168;
     Goldilocks::copy(tmp_168,  params.pConstPols->getElement(9,i));
     Goldilocks3::Element tmp_129;
     Goldilocks3::mul(tmp_129, tmp_168, (Goldilocks3::Element &)*params.challenges[3]);
     Goldilocks3::Element tmp_130;
     Goldilocks3::add(tmp_130, tmp_151, tmp_129);
     Goldilocks3::Element tmp_131;
     Goldilocks3::add(tmp_131, tmp_130, (Goldilocks3::Element &)*params.challenges[2]);
     Goldilocks3::Element tmp_169;
     Goldilocks3::mul(tmp_169, tmp_167, tmp_131);
     Goldilocks::Element tmp_170;
     Goldilocks::copy(tmp_170,  params.pConstPols->getElement(10,i));
     Goldilocks3::Element tmp_132;
     Goldilocks3::mul(tmp_132, tmp_170, (Goldilocks3::Element &)*params.challenges[3]);
     Goldilocks3::Element tmp_133;
     Goldilocks3::add(tmp_133, tmp_153, tmp_132);
     Goldilocks3::Element tmp_134;
     Goldilocks3::add(tmp_134, tmp_133, (Goldilocks3::Element &)*params.challenges[2]);
     Goldilocks3::Element tmp_171;
     Goldilocks3::mul(tmp_171, tmp_169, tmp_134);
     Goldilocks::Element tmp_172;
     Goldilocks::copy(tmp_172,  params.pConstPols->getElement(11,i));
     Goldilocks3::Element tmp_135;
     Goldilocks3::mul(tmp_135, tmp_172, (Goldilocks3::Element &)*params.challenges[3]);
     Goldilocks3::Element tmp_136;
     Goldilocks3::add(tmp_136, tmp_155, tmp_135);
     Goldilocks3::Element tmp_137;
     Goldilocks3::add(tmp_137, tmp_136, (Goldilocks3::Element &)*params.challenges[2]);
     Goldilocks3::Element tmp_173;
     Goldilocks3::mul(tmp_173, tmp_171, tmp_137);
     Goldilocks::Element tmp_174;
     Goldilocks::copy(tmp_174,  params.pConstPols->getElement(12,i));
     Goldilocks3::Element tmp_138;
     Goldilocks3::mul(tmp_138, tmp_174, (Goldilocks3::Element &)*params.challenges[3]);
     Goldilocks3::Element tmp_139;
     Goldilocks3::add(tmp_139, tmp_157, tmp_138);
     Goldilocks3::Element tmp_140;
     Goldilocks3::add(tmp_140, tmp_139, (Goldilocks3::Element &)*params.challenges[2]);
     Goldilocks3::mul((Goldilocks3::Element &)(params.pols[12582918 + i*9]), tmp_173, tmp_140);
}
