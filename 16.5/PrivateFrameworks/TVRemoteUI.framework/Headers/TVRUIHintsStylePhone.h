// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TVRUIHINTSSTYLEPHONE_H
#define TVRUIHINTSSTYLEPHONE_H

@class NSString;
@protocol TVRUIHintsStyleProvider;


#import "TVRUIHintsStyle.h"

@interface TVRUIHintsStylePhone : TVRUIHintsStyle <TVRUIHintsStyleProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)shouldShowSiriHint;
-(BOOL)shouldShowVolumeHint;
-(CGFloat)activationAnimationDismissalDelay;
-(CGFloat)activationAnimationDuration;
-(CGFloat)animationDuration;
-(CGFloat)animationPresentationDelay;
-(CGFloat)buttonOutlineWidth;
-(CGFloat)imageMargin;
-(CGFloat)maximumSymbolPointSize;
-(CGFloat)preferredTipWidth;
-(CGFloat)siriHintContainerWidth;
-(CGFloat)volumeHintContainerWidth;
-(NSInteger)userInterfaceStyle;
-(id)backgroundColor;
-(id)backgroundFilters;
-(id)primaryTintColor;
-(id)siriHintTipContext;
-(id)siriImage;
-(id)volumeImage;


@end


#endif