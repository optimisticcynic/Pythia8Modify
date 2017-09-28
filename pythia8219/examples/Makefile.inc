# PYTHIA configuration file.
# Generated on Thu Sep 28 11:28:14 CDT 2017 with the user supplied options:
# --enable-shared
# --with-hepmc2=/cvmfs/cms.cern.ch/slc6_amd64_gcc530/external/hepmc/2.06.07
# --with-lhapdf6=/cvmfs/cms.cern.ch/slc6_amd64_gcc530/external/lhapdf/6.1.6-giojec7

# Install directory prefixes.
PREFIX_BIN=/data/cmszfs1/user/lesko/RivetQCDBackground/CMSSW_8_1_0/src/Pythia8/pythia8219/bin
PREFIX_INCLUDE=/data/cmszfs1/user/lesko/RivetQCDBackground/CMSSW_8_1_0/src/Pythia8/pythia8219/include
PREFIX_LIB=/data/cmszfs1/user/lesko/RivetQCDBackground/CMSSW_8_1_0/src/Pythia8/pythia8219/lib
PREFIX_SHARE=/data/cmszfs1/user/lesko/RivetQCDBackground/CMSSW_8_1_0/src/Pythia8/pythia8219/share/Pythia8

# Compilation flags (see ./configure --help for further documentation).
ENABLE_SHARED=true
CXX=g++
CXX_COMMON=-O2 -ansi -pedantic -W -Wall -Wshadow -fPIC
CXX_SHARED=-shared
CXX_SONAME=-Wl,-soname
LIB_SUFFIX=.so

# EVTGEN configuration.
EVTGEN_USE=false
EVTGEN_BIN=
EVTGEN_INCLUDE=./
EVTGEN_LIB=./

# FASTJET3 configuration.
FASTJET3_USE=false
FASTJET3_BIN=
FASTJET3_INCLUDE=./
FASTJET3_LIB=./

# HEPMC2 configuration.
HEPMC2_USE=true
HEPMC2_BIN=/cvmfs/cms.cern.ch/slc6_amd64_gcc530/external/hepmc/2.06.07/bin/
HEPMC2_INCLUDE=/cvmfs/cms.cern.ch/slc6_amd64_gcc530/external/hepmc/2.06.07/include
HEPMC2_LIB=/cvmfs/cms.cern.ch/slc6_amd64_gcc530/external/hepmc/2.06.07/lib

# HEPMC3 configuration.
HEPMC3_USE=false
HEPMC3_BIN=
HEPMC3_INCLUDE=./
HEPMC3_LIB=./

# LHAPDF5 configuration.
LHAPDF5_USE=false
LHAPDF5_BIN=
LHAPDF5_INCLUDE=./
LHAPDF5_LIB=./
LHAPDF5_PLUGIN=LHAPDF5.h

# LHAPDF6 configuration.
LHAPDF6_USE=true
LHAPDF6_BIN=/cvmfs/cms.cern.ch/slc6_amd64_gcc530/external/lhapdf/6.1.6-giojec7/bin/
LHAPDF6_INCLUDE=/cvmfs/cms.cern.ch/slc6_amd64_gcc530/external/lhapdf/6.1.6-giojec7/include
LHAPDF6_LIB=/cvmfs/cms.cern.ch/slc6_amd64_gcc530/external/lhapdf/6.1.6-giojec7/lib
LHAPDF6_PLUGIN=LHAPDF5.h

# POWHEG configuration.
POWHEG_USE=false
POWHEG_BIN=
POWHEG_INCLUDE=./
POWHEG_LIB=./

# PROMC configuration.
PROMC_USE=false
PROMC_BIN=
PROMC_INCLUDE=./
PROMC_LIB=./

# ROOT configuration.
ROOT_USE=false
ROOT_BIN=
ROOT_INCLUDE=./
ROOT_LIB=./

# GZIP configuration.
GZIP_USE=false
GZIP_BIN=
GZIP_INCLUDE=./
GZIP_LIB=./

# BOOST configuration.
BOOST_USE=false
BOOST_BIN=
BOOST_INCLUDE=./
BOOST_LIB=./

# PYTHON configuration.
PYTHON_USE=false
PYTHON_BIN=
PYTHON_INCLUDE=./
PYTHON_LIB=./
