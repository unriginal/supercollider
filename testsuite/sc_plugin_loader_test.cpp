#include <boost/test/unit_test.hpp>

#include <boost/filesystem.hpp>

#include "../source/sc/sc_ugen_factory.hpp"

using namespace nova;
using namespace std;

BOOST_AUTO_TEST_CASE( ugen_factory_test_1 )
{
    boost::filesystem::path base_path ("/home/tim/workspace/nova-server/plugins/");

    ugen_factory.load_ugen(base_path / "BeatTrack2.so");
    ugen_factory.load_ugen(base_path / "BeatTrack.so");
    ugen_factory.load_ugen(base_path / "BinaryOpUGens.so");
    ugen_factory.load_ugen(base_path / "ChaosUGens.so");
    ugen_factory.load_ugen(base_path / "Convolution.so");
    ugen_factory.load_ugen(base_path / "DelayUGens.so");
    ugen_factory.load_ugen(base_path / "DemandUGens.so");
    ugen_factory.load_ugen(base_path / "DiskIO_UGens.so");
    ugen_factory.load_ugen(base_path / "DynNoiseUGens.so");
    ugen_factory.load_ugen(base_path / "FeatureDetection.so");
    ugen_factory.load_ugen(base_path / "FFT2InterfaceTable.so");
    ugen_factory.load_ugen(base_path / "FFTInterfaceTable.so");
    ugen_factory.load_ugen(base_path / "FFT_UGens.so");
    ugen_factory.load_ugen(base_path / "FilterUGens.so");
    ugen_factory.load_ugen(base_path / "GendynUGens.so");
    ugen_factory.load_ugen(base_path / "GrainUGens.so");
    ugen_factory.load_ugen(base_path / "IOUGens.so");
    ugen_factory.load_ugen(base_path / "KeyboardUGens.so");
    ugen_factory.load_ugen(base_path / "KeyTrack.so");
    ugen_factory.load_ugen(base_path / "LFUGens.so");
    ugen_factory.load_ugen(base_path / "Loudness.so");
    ugen_factory.load_ugen(base_path / "MFCC.so");
    ugen_factory.load_ugen(base_path / "ML.so");
    ugen_factory.load_ugen(base_path / "ML_SpecStats.so");
    ugen_factory.load_ugen(base_path / "MouseUGens.so");
    ugen_factory.load_ugen(base_path / "MulAddUGens.so");
    ugen_factory.load_ugen(base_path / "NoiseUGens.so");
    ugen_factory.load_ugen(base_path / "Onsets.so");
    ugen_factory.load_ugen(base_path / "OscUGens.so");
    ugen_factory.load_ugen(base_path / "PanUGens.so");
    ugen_factory.load_ugen(base_path / "PartitionedConvolution.so");
    ugen_factory.load_ugen(base_path / "PhysicalModelingUGens.so");
    ugen_factory.load_ugen(base_path / "PV_ThirdParty.so");
    ugen_factory.load_ugen(base_path / "PV_UGens.so");
    ugen_factory.load_ugen(base_path / "ReverbUGens.so");
    ugen_factory.load_ugen(base_path / "SCComplex.so");
    ugen_factory.load_ugen(base_path / "TestUGens.so");
    ugen_factory.load_ugen(base_path / "TriggerUGens.so");
    ugen_factory.load_ugen(base_path / "UnaryOpUGens.so");
    ugen_factory.load_ugen(base_path / "UnpackFFTUGens.so");
}
