// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIKEYBOARDBASEDNONEDITABLETEXTSELECTIONINTERACTION_H
#define _UIKEYBOARDBASEDNONEDITABLETEXTSELECTIONINTERACTION_H

@class UIKeyboardBasedTextSelectionInteraction;



@interface _UIKeyboardBasedNonEditableTextSelectionInteraction : UIKeyboardBasedTextSelectionInteraction {
    BOOL _isShiftKeyBeingHeld;
}




-(void)_synchronousGranularityExpandingGestureWithTimeInterval:(CGFloat)arg0 timeGranularity:(CGFloat)arg1 isMidPan:(BOOL)arg2 ;
-(void)oneFingerForcePan:(id)arg0 ;
-(void)oneFingerForcePress:(id)arg0 ;
-(void)transitionFromBlockMagnifyToBlockSelectWithLocation:(struct CGPoint )arg0 viaDrag:(BOOL)arg1 ;


@end


#endif