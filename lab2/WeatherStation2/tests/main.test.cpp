#include "pch.h"

#define BOOST_TEST_MODULE Main
#include "boost/test/included/unit_test.hpp"
#include <boost/test/output_test_stream.hpp>
#include "DangerousObserver.h"

BOOST_AUTO_TEST_SUITE(ObserverSafeUpdate);

BOOST_AUTO_TEST_CASE(UnsafeNotifyTest)
{
    boost::test_tools::output_test_stream output;

    DangerousObservable oAble{};

    DangerousObserver o1{ [&] { output << "F"; oAble.RemoveObserver(o1); } };
    DangerousObserver o2{ [&] { output << "F"; oAble.RemoveObserver(o2); } };

    oAble.RegisterObserver(o1);
    oAble.RegisterObserver(o2);

    oAble.NotifyObservers();
    oAble.NotifyObservers();

    BOOST_CHECK(output.is_equal("FFFF"));

}

BOOST_AUTO_TEST_SUITE_END();