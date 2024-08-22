// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VGSELECTIONSTATE_H
#define VGSELECTIONSTATE_H


#import <Foundation/Foundation.h>


@interface VGSelectionState : NSObject

@property (nonatomic) BOOL completed; // ivar: _completed
@property (nonatomic) BOOL failed; // ivar: _failed
@property (nonatomic) float progress; // ivar: _progress


+(id)capturedStatesFromCapturedPoses:(id)arg0 ;


@end


#endif