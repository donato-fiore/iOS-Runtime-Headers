// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIPOINTERINTERACTIONHOVERDRIVER_H
#define _UIPOINTERINTERACTIONHOVERDRIVER_H

@class NSString;
@protocol _UIPointerInteractionDriver, _UIPointerInteractionDriverSink;

#import <Foundation/Foundation.h>

#import "_UIPointerInteractionHoverGestureRecognizer.h"
#import "_UIPointerInteractionPressGestureRecognizer.h"
#import "UIView.h"

@interface _UIPointerInteractionHoverDriver : NSObject <_UIPointerInteractionDriver>

 {
    id<_UIPointerInteractionDriverSink> *_sink;
    _UIPointerInteractionHoverGestureRecognizer *_hoverGestureRecognizer;
    _UIPointerInteractionPressGestureRecognizer *_pressGestureRecognizer;
    ? _flags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (weak, nonatomic) UIView *view; // ivar: _view


-(BOOL)isActive;
-(NSInteger)_currentButtonMask;
-(NSInteger)type;
-(id)initWithSink:(id)arg0 ;
-(struct CAPoint3D )locationInView:(id)arg0 ;
-(void)_handleHoverGesture:(id)arg0 ;
-(void)_handlePressGesture:(id)arg0 ;
-(void)_installToView:(id)arg0 ;
-(void)_pointerStateDidChange:(id)arg0 ;
-(void)_uninstallFromView:(id)arg0 ;
-(void)_updateHover:(id)arg0 forced:(BOOL)arg1 ;
-(void)invalidate;


@end


#endif