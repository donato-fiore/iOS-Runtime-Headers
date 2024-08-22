// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIPOINTERINTERACTIONPENCILHOVERDRIVER_H
#define _UIPOINTERINTERACTIONPENCILHOVERDRIVER_H

@class NSString;
@protocol _UIPointerInteractionDriver, _UIPointerInteractionDriverSink;

#import <Foundation/Foundation.h>

#import "_UIPointerInteractionHoverGestureRecognizer.h"
#import "UIView.h"

@interface _UIPointerInteractionPencilHoverDriver : NSObject <_UIPointerInteractionDriver>

 {
    id<_UIPointerInteractionDriverSink> *_sink;
    _UIPointerInteractionHoverGestureRecognizer *_hoverGestureRecognizer;
    ? _flags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (weak, nonatomic) UIView *view; // ivar: _view


-(BOOL)isActive;
-(NSInteger)type;
-(id)initWithSink:(id)arg0 ;
-(struct CAPoint3D )locationInView:(id)arg0 ;
-(void)_handleHoverGesture:(id)arg0 ;
-(void)_installToView:(id)arg0 ;
-(void)_uninstallFromView:(id)arg0 ;
-(void)_updateHover:(id)arg0 forced:(BOOL)arg1 ;
-(void)invalidate;


@end


#endif