// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIUPDATETARGET_H
#define _UIUPDATETARGET_H


#import <Foundation/Foundation.h>


@interface _UIUpdateTarget : NSObject {
    _UIInstrumentedCADisplay _display;
    _UIInstrumentedCADynamicFrameRateSource _frameSource;
    unsigned int _displayId;
    BOOL _frameSourceActive;
    NSUInteger _epsilonDuration;
    NSUInteger _minFrameDuration;
    NSInteger _presentationLagDuration;
    NSInteger _commitTimeLeadDuration;
}




-(id)init;
-(void)dealloc;


@end


#endif