// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIDEBUGGINGINFORMATIONOVERLAYINVOKEGESTUREHANDLER_H
#define UIDEBUGGINGINFORMATIONOVERLAYINVOKEGESTUREHANDLER_H

@class NSString;
@protocol UIGestureRecognizerDelegate;

#import <Foundation/Foundation.h>


@interface UIDebuggingInformationOverlayInvokeGestureHandler : NSObject <UIGestureRecognizerDelegate>

 {
    BOOL _didCreateTools;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)mainHandler;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(void)_handleActivationGesture:(id)arg0 ;


@end


#endif