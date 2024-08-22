// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIWEBFORMROTATINGACCESSORYPOPOVER_H
#define UIWEBFORMROTATINGACCESSORYPOPOVER_H

@protocol UIWebRotatingNodePopoverDelegate;


#import "UIWebRotatingNodePopover.h"

@interface UIWebFormRotatingAccessoryPopover : UIWebRotatingNodePopover <UIWebRotatingNodePopoverDelegate>





-(NSUInteger)popoverArrowDirections;
-(id)initWithDOMNode:(id)arg0 ;
-(void)accessoryDone;
-(void)popoverWasDismissed:(id)arg0 ;


@end


#endif