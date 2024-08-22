// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WEBVALIDATIONBUBBLETAPRECOGNIZER_H
#define WEBVALIDATIONBUBBLETAPRECOGNIZER_H


#import <Foundation/Foundation.h>


@interface WebValidationBubbleTapRecognizer : NSObject {
    RetainPtr<UIViewController> _popoverController;
    RetainPtr<UITapGestureRecognizer> _tapGestureRecognizer;
}




-(id)initWithPopoverController:(id)arg0 ;
-(void)dealloc;
-(void)dismissPopover;


@end


#endif