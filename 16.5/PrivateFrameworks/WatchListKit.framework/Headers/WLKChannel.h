// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WLKCHANNEL_H
#define WLKCHANNEL_H

@class NSString, NSDictionary, NSArray;

#import <Foundation/Foundation.h>

#import "WLKChannelDetails.h"

@interface WLKChannel : NSObject

@property (readonly, copy, nonatomic) NSString *ID; // ivar: _ID
@property (readonly, copy, nonatomic) WLKChannelDetails *details; // ivar: _details
@property (readonly, copy, nonatomic) NSDictionary *punchoutUrls; // ivar: _punchoutUrls
@property (readonly, copy, nonatomic) NSArray *seasonNumbers; // ivar: _seasonNumbers
@property (readonly, copy, nonatomic) NSArray *subscriptionOffers; // ivar: _subscriptionOffers


+(id)channelsWithDictionaries:(id)arg0 context:(id)arg1 ;
+(id)channelsWithDictionaries:(id)arg0 context:(id)arg1 seasons:(id)arg2 ;
-(id)init;
-(id)initWithDictionary:(id)arg0 context:(id)arg1 ;


@end


#endif