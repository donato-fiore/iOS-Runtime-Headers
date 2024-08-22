// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VIACACHEHITEVENT_H
#define VIACACHEHITEVENT_H

@class NSString;
@protocol VIAEvent;

#import <Foundation/Foundation.h>


@interface VIACacheHitEvent : NSObject <VIAEvent>



@property (readonly, nonatomic) NSUInteger cachedResultQueryID; // ivar: _cachedResultQueryID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *originatingApplication; // ivar: _originatingApplication
@property (readonly, nonatomic) NSUInteger queryID; // ivar: _queryID
@property (readonly) Class superclass;


-(id)feedback;
-(id)initWithQueryID:(NSUInteger)arg0 cachedResultQueryID:(NSUInteger)arg1 originatingApplication:(id)arg2 ;


@end


#endif