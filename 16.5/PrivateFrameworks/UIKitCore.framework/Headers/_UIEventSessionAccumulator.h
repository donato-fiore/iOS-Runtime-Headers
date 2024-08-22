// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIEVENTSESSIONACCUMULATOR_H
#define _UIEVENTSESSIONACCUMULATOR_H

@class NSMutableOrderedSet, NSDictionary, NSString;

#import <Foundation/Foundation.h>


@interface _UIEventSessionAccumulator : NSObject {
    NSMutableOrderedSet *_recentActions;
}


@property (readonly, nonatomic) NSDictionary *allowedActionSourceTypes; // ivar: _allowedActionSourceTypes
@property (readonly, nonatomic) id *block; // ivar: _block
@property (readonly, nonatomic) _NSRange depthRange; // ivar: _depthRange
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) NSInteger sequenceNumber; // ivar: _sequenceNumber


// +(id)accumulatorWithName:(id)arg0 depthRange:(struct _NSRange )arg1 block:(id)arg2 allowedActionSourceTypes:(unk)arg3  ;
-(BOOL)isActionAllowed:(id)arg0 ;
-(void)enumerateAnalytics:(id)arg0 ;
-(void)flushAccumulator;
-(void)increaseWithAction:(id)arg0 ;
-(void)performIncreaseWithActions:(id)arg0 ;
-(void)reset;


@end


#endif