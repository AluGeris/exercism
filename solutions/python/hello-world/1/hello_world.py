# _*_ coding:utf-8 _*_

def hello(name=''):
    if name == '':
        return 'Hello, World!'
    name = name.encode('utf-8')
    return 'Hello, {}!'.format(name)