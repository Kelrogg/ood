#include "pch.h"

#define BOOST_TEST_MODULE Main
#include "boost/test/included/unit_test.hpp"
#include "boost/test/tools/output_test_stream.hpp"

#include "ObserverPriority.h"

BOOST_AUTO_TEST_SUITE(ObserverPriority);

    BOOST_AUTO_TEST_CASE(RegisterObserversInAscendingOrder)
    {
        boost::test_tools::output_test_stream output;
        std::vector<Observer<int>*> stock;

        ObservableSubject obssub;
        for (std::size_t t = 1; t < 7; ++t)
        {
            auto obsver = new Observer([&output, t]{ output << t; });
            obssub.RegisterObserver(*obsver, t);

            stock.push_back(obsver);
        }
        obssub.NotifyObservers();

        BOOST_CHECK(output.is_equal("654321"));

        for (auto& el : stock)
        {
            obssub.RemoveObserver(*el);
            delete el;
        }
    }

    BOOST_AUTO_TEST_CASE(RegisterObserversInDescendingdOrder)
    {
        boost::test_tools::output_test_stream output;
        std::vector<Observer<int>*> stock;

        ObservableSubject obssub;
        for (int t = 6; t > 0; --t)
        {
            auto obsver = new Observer([&output, t]{ output << t; });
            obssub.RegisterObserver(*obsver, t);

            stock.push_back(obsver);
        }
        obssub.NotifyObservers();

        BOOST_CHECK(output.is_equal("654321"));

        for (auto& el : stock)
        {
            obssub.RemoveObserver(*el);
            delete el;
        }
    }

    BOOST_AUTO_TEST_CASE(RegisterObserversSamePriority)
    {
        boost::test_tools::output_test_stream output;
        std::vector<Observer<int>*> stock;

        ObservableSubject obssub;
        for (std::size_t t = 0; t < 6; ++t)
        {
            auto obsver = new Observer([&output, t]{ output << t % 3; });
            obssub.RegisterObserver(*obsver, t % 3);

            stock.push_back(obsver);
        }
        obssub.NotifyObservers();

        BOOST_CHECK(output.is_equal("221100"));

        for (auto& el : stock)
        {
            obssub.RemoveObserver(*el);
            delete el;
        }
    }

BOOST_AUTO_TEST_SUITE_END();