# _*_ coding:utf-8 _*_

def hello(name=''):
    if name == '':
        return 'Hello, World!'
    return 'Hello, {}!'.format(name)