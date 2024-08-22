// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIKEYBOARDFEEDBACKGENERATOR_H
#define _UIKEYBOARDFEEDBACKGENERATOR_H

@class NSString;
@protocol _UIKBFeedbackGenerating;


#import "UIFeedbackGenerator.h"
#import "_UIKeyboardFeedbackGeneratorConfiguration.h"

@interface _UIKeyboardFeedbackGenerator : UIFeedbackGenerator <_UIKBFeedbackGenerating>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=_keyboardConfiguration) _UIKeyboardFeedbackGeneratorConfiguration *keyboardConfiguration;
@property (nonatomic, getter=_lastTypedKeyTimestamp, setter=_setLastTypedKeyTimestamp:) CGFloat lastTypedKeyTimestamp; // ivar: _lastTypedKeyTimestamp
@property (readonly) Class superclass;


+(Class)_configurationClass;
-(CGFloat)_autoDeactivationTimeout;
-(float)scaleVolumeSlow:(float)arg0 fast:(float)arg1 timeSpan:(CGFloat)arg2 ;
-(id)_feedbackWithUpdatedVolume:(id)arg0 ;
-(id)_stats_key;
-(void)_playFeedbackForActionType:(NSInteger)arg0 withCustomization:(id)arg1 ;
-(void)actionOccurred:(NSInteger)arg0 ;
-(void)actionOccurred:(NSInteger)arg0 atLocation:(struct CGPoint )arg1 ;


@end


#endif