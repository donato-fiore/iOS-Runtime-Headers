// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIKEYBOARDCANDIDATEVIEWCONFIGURATIONPHONEBARDOWN_H
#define UIKEYBOARDCANDIDATEVIEWCONFIGURATIONPHONEBARDOWN_H



#import "UIKeyboardCandidateViewConfigurationPhoneBar.h"

@interface UIKeyboardCandidateViewConfigurationPhoneBarDown : UIKeyboardCandidateViewConfigurationPhoneBar



-(BOOL)allowsPullDownGesture;
-(BOOL)shouldResizeKeyboardBackdrop;
-(BOOL)willCoverKeyboardLayout;
-(NSUInteger)rowsToExtend;
-(id)extendedScrolledState;
-(id)extendedState;
-(id)initialState;


@end


#endif