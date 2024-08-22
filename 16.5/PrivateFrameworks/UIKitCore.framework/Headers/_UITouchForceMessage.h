// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UITOUCHFORCEMESSAGE_H
#define _UITOUCHFORCEMESSAGE_H


#import <Foundation/Foundation.h>

#import "_UITouchForceObservationMessageReader.h"

@interface _UITouchForceMessage : NSObject {
    BOOL _isReset;
    _UITouchForceObservationMessageReader *_observeReader;
}


@property (nonatomic) CGPoint centroid; // ivar: _centroid
@property (nonatomic) CGFloat maximumPossibleForce; // ivar: _maximumPossibleForce
@property (nonatomic) BOOL shouldFilterDueToSystemGestures; // ivar: _shouldFilterDueToSystemGestures
@property (nonatomic) CGFloat timestamp; // ivar: _timestamp
@property (nonatomic) CGFloat unclampedTouchForce; // ivar: _unclampedTouchForce


+(id)observe:(id)arg0 ;
+(id)reset;
// -(void)ifObservation:(id)arg0 ifReset:(unk)arg1  ;
// -(void)ifObservationUnclamped:(id)arg0 ifReset:(unk)arg1  ;


@end


#endif