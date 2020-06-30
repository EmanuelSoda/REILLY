from abc import ABC, abstractmethod


class Agent(ABC, object):

    __slots__ = ['_alpha', '_gamma', '_epsilon', '_e_decay', '_n_step', '_S', '_episode_ended', '_Q', '_policy']

    @abstractmethod
    def reset(self, env, *args, **kwargs):
        pass

    @abstractmethod
    def run_step(self, env, *args, **kwargs):
        pass