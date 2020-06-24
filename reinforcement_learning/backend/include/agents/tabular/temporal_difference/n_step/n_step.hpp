#pragma once

#include "../temporal_difference.ipp"

namespace rl {

namespace agents {

class NStep : public TemporalDifference {
   protected:
    size_t n_step;
    size_t T;

    Trajectory trajectory;

   public:
    NStep(size_t states, size_t actions, float alpha, float epsilon, float gamma, size_t n_step, float epsilon_decay);
    NStep(const NStep &other);
    virtual ~NStep();

    void reset(size_t init_state);

    std::string __repr__();
};

}  // namespace agents

}  // namespace rl
