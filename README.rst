libcli++
========

.. image:: https://travis-ci.org/datagraph/libcli.png?branch=master
   :target: https://travis-ci.org/datagraph/libcli
   :align: right
   :alt: Travis CI build status

Build Prerequisites
-------------------

* Clang_ (>= 3.0) or GCC_ (>= 4.7)
* Autoconf_ (>= 2.68)
* Automake_ (>= 1.11)
* Libtool_ (>= 2.2)

.. _Clang:    http://clang.llvm.org/
.. _GCC:      http://gcc.gnu.org/
.. _Autoconf: http://www.gnu.org/software/autoconf/
.. _Automake: http://www.gnu.org/software/automake/
.. _Libtool:  http://www.gnu.org/software/libtool/

Build Dependencies
------------------

* Boost.Test_ (>= 1.48) for ``make check`` unit tests only

.. _Boost.Test:  http://www.boost.org/libs/test/

Installation on Unix
--------------------

::

   $ ./autogen.sh
   $ ./configure                        # on Linux
   $ ./configure --with-stdlib=libc++   # on FreeBSD / Mac OS X
   $ make
   $ sudo make install
   $ sudo ldconfig                      # on Linux

Elsewhere
---------

Find the project at: GitHub_, Bitbucket_, and `Travis CI`_.

.. _GitHub:      http://github.com/datagraph/libcli
.. _Bitbucket:   http://bitbucket.org/datagraph/libcli
.. _Travis CI:   http://travis-ci.org/datagraph/libcli