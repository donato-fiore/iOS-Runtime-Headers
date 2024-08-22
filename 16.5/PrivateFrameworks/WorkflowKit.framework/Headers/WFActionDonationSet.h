// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFACTIONDONATIONSET_H
#define WFACTIONDONATIONSET_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface WFActionDonationSet : NSObject

@property (readonly, nonatomic) NSMutableArray *appSuggestedActions; // ivar: _appSuggestedActions
@property (readonly, nonatomic) NSMutableArray *predictedActions; // ivar: _predictedActions
@property (readonly, nonatomic) NSMutableArray *recentActions; // ivar: _recentActions


-(id)init;


@end


#endif