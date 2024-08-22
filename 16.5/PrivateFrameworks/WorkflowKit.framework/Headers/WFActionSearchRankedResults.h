// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFACTIONSEARCHRANKEDRESULTS_H
#define WFACTIONSEARCHRANKEDRESULTS_H

@class NSMutableDictionary;


#import "WFActionSearchRankedCollection.h"

@interface WFActionSearchRankedResults : WFActionSearchRankedCollection {
    NSMutableDictionary *_displayNames;
    NSMutableDictionary *_records;
}




-(id)init;
-(id)rankedGroups;
-(void)addAction:(id)arg0 forKey:(id)arg1 type:(NSUInteger)arg2 ;
-(void)addKey:(id)arg0 withDisplayName:(id)arg1 type:(NSUInteger)arg2 ;


@end


#endif