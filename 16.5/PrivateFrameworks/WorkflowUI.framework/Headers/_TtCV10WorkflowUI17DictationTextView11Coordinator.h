// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTCV10WORKFLOWUI17DICTATIONTEXTVIEW11COORDINATOR_H
#define _TTCV10WORKFLOWUI17DICTATIONTEXTVIEW11COORDINATOR_H

@protocol UITextViewDelegate;

#import <Foundation/Foundation.h>


@interface _TtCV10WorkflowUI17DictationTextView11Coordinator : NSObject <UITextViewDelegate>

 {
    ? configuration;
    ? isEditing;
    ? isDictating;
    ? textView;
}




-(BOOL)textView:(id)arg0 shouldChangeTextInRange:(struct _NSRange )arg1 replacementText:(id)arg2 ;
-(id)init;
-(void)textViewDidBeginEditing:(id)arg0 ;
-(void)textViewDidChange:(id)arg0 ;
-(void)textViewDidEndEditing:(id)arg0 ;


@end


#endif