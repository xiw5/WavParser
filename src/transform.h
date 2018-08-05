#ifndef SAMPLE_TRANSFORM_H
#define SAMPLE_TRANSFORM_H

#include <string>
#include <func.h>

void SoundEffectsTransform1(const std::string &input, const std::string &output, transform_func_t);
void SoundCut(const std::string &input, const std::string &output, int from, int to);
void SoundMerge(const std::string &input1, const std::string &input2, const std::string &output);
void SoundDepart(const std::string &input,const std::string& left,const std::string& right);
void SoundMerge_Complex(const std::string &input1, const std::string &input2, const std::string &output);

#endif
