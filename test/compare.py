import subprocess
import os


def compress():
    of = open('tmp', 'r')
    cf = open('tmp1', 'w')

    result = subprocess.run(['../antman/antman'],
                            stdout=subprocess.PIPE)
    cf.write(result.stdout.decode('utf-8'))

    of.close()
    cf.close()


def decompress():
    cf = open('tmp1', 'r')
    df = open('tmp2', 'w')

    result = subprocess.run(['../giantman/giantman', cf.read()],
                            stdout=subprocess.PIPE)
    df.write(result.stdout.decode('utf-8'))

    df.close()
    cf.close()


def compare_content():
    cf = open('tmp1', 'r')
    df = open('tmp2', 'r')

    c = cf.read()
    d = df.read()

    if c == d:
        print("Files are equals.")
    else:
        print("Files are not equals.")

    cf.close()
    df.close()


def compare_size():
    of_size = os.path.getsize('tmp')
    cf_size = os.path.getsize('tmp1')
    percent = round((of_size - cf_size) / of_size, 2)
    print(f'The file was compressed and reduced to {percent}% '
          'of its original size.')


def clean():
    os.remove('tmp1')
    os.remove('tmp2')


compress()
decompress()
compare_content()
compare_size()
clean()
