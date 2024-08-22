// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIPREVIEWINTERACTIONFORCELEVELCLASSIFIER_H
#define _UIPREVIEWINTERACTIONFORCELEVELCLASSIFIER_H

@class UIForceLevelClassifier;


#import "_UIPreviewInteractionStateRecognizer.h"

@interface _UIPreviewInteractionForceLevelClassifier : UIForceLevelClassifier {
    _UIPreviewInteractionStateRecognizer *_stateRecognizer;
}




-(BOOL)wantsUnclampedForceValues;
-(id)init;
-(id)transformerFromTouchForceMessageToProgressToForceLevel:(NSInteger)arg0 minimumRequiredForceLevel:(NSInteger)arg1 ;
-(void)observeTouchWithForceValue:(CGFloat)arg0 atTimestamp:(CGFloat)arg1 withCentroidAtLocation:(struct CGPoint )arg2 ;
-(void)reset;
-(void)touchForceMultiplierDidChange;


@end


#endif