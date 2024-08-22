// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIKEYBOARDCANDIDATEVIEWCONFIGURATION_H
#define UIKEYBOARDCANDIDATEVIEWCONFIGURATION_H


#import <Foundation/Foundation.h>

#import "UIColor.h"

@interface UIKeyboardCandidateViewConfiguration : NSObject

@property (readonly, nonatomic) BOOL allowsPullDownGesture;
@property (nonatomic) BOOL darkKeyboard; // ivar: _darkKeyboard
@property (readonly, nonatomic) UIColor *highlightedBackgroundColor;
@property (readonly, nonatomic) int inlineFloatingViewAdjustMode;
@property (readonly, nonatomic) NSUInteger maxNumberOfProactiveCandidates;
@property (readonly, nonatomic) CGSize preferredInlineFloatingViewSize;
@property (readonly, nonatomic) NSUInteger rowsToExtend;
@property (readonly, nonatomic) BOOL shouldAlwaysShowSortControl; // ivar: _shouldAlwaysShowSortControl
@property (readonly, nonatomic) BOOL shouldAnimateStateTransition;
@property (readonly, nonatomic) BOOL shouldResizeKeyboardBackdrop;
@property (readonly, nonatomic) BOOL shouldUsePredictionViewSecureRenderTraits; // ivar: _shouldUsePredictionViewSecureRenderTraits
@property (readonly, nonatomic) BOOL willCoverKeyboardLayout;


+(id)configuration;
+(id)languagesWithReducedFontSize;
-(BOOL)usesReducedFontSize;
-(CGFloat)candidateDefaultFontSize;
-(id)candidateFontWithSize:(CGFloat)arg0 ;
-(id)candidateFontWithSize:(CGFloat)arg0 language:(id)arg1 ;
-(id)extendedScrolledState;
-(id)extendedState;
-(id)initialState;


@end


#endif