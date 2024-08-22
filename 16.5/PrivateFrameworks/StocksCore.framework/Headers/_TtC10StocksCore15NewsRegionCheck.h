// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC10STOCKSCORE15NEWSREGIONCHECK_H
#define _TTC10STOCKSCORE15NEWSREGIONCHECK_H

@class SwiftObject;
@protocol FCPrivateDataSyncCondition;



@interface _TtC10StocksCore15NewsRegionCheck : SwiftObject <FCPrivateDataSyncCondition>

 {
    ? appConfigurationManager;
}


@property (nonatomic, readonly) BOOL satisfied;


-(BOOL)isSatisfied;


@end


#endif