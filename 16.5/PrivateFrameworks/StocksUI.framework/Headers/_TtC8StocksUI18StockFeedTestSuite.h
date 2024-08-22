// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC8STOCKSUI18STOCKFEEDTESTSUITE_H
#define _TTC8STOCKSUI18STOCKFEEDTESTSUITE_H

@class SNTestSuite;
@protocol SNTestSetup;



@interface _TtC8StocksUI18StockFeedTestSuite : SNTestSuite <SNTestSetup>

 {
    ? resolver;
    ? tracker;
}




-(id)init;
-(void)setupTestWithContext:(id)arg0 completion:(id)arg1 ;


@end


#endif