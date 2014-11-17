********************************
libdrycli: CLI library for C++14
********************************

.. image:: https://api.travis-ci.org/dryproject/libdrycli.svg?branch=master
   :target: https://travis-ci.org/dryproject/libdrycli
   :alt: Travis CI build status

Build Prerequisites
===================

* Clang_ (>= 3.0) or GCC_ (>= 4.7)
* Autoconf_ (>= 2.68)
* Automake_ (>= 1.11)
* Libtool_ (>= 2.2)

.. note::

   Older releases may work, but are not actively tested for.

.. _Clang:    http://clang.llvm.org/
.. _GCC:      http://gcc.gnu.org/
.. _Autoconf: http://www.gnu.org/software/autoconf/
.. _Automake: http://www.gnu.org/software/automake/
.. _Libtool:  http://www.gnu.org/software/libtool/

Installation
============

Installation on Unix
--------------------

::

   $ ./autogen.sh
   $ ./configure                        # on Linux
   $ ./configure --with-stdlib=libc++   # on FreeBSD / Mac OS X
   $ make
   $ sudo make install

Elsewhere
=========

Find the project at: GitHub_, Bitbucket_, and `Travis CI`_.

.. _GitHub:      http://github.com/dryproject/libdrycli
.. _Bitbucket:   http://bitbucket.org/dryproject/libdrycli
.. _Travis CI:   http://travis-ci.org/dryproject/libdrycli

Author
======

This project is part of the `DRY <http://dryproject.org/>`_ initiative.

* `Arto Bendiken <https://github.com/bendiken>`_ - http://ar.to/

License
=======

This is free and unencumbered public domain software. For more information,
see http://unlicense.org/ or the accompanying ``UNLICENSE`` file.
