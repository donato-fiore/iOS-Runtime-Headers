// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIKBEDITINGGESTURESINTRODUCTION_H
#define UIKBEDITINGGESTURESINTRODUCTION_H

@class NSLayoutConstraint;


#import "UIKBTutorialModalDisplay.h"

@interface UIKBEditingGesturesIntroduction : UIKBTutorialModalDisplay

@property (readonly, nonatomic) NSInteger appearance;
@property (retain, nonatomic) NSLayoutConstraint *topPaddingConstraint; // ivar: _topPaddingConstraint


+(BOOL)shouldShowEditingIntroduction;
-(BOOL)presentsFullScreen;
-(CGFloat)pagingInterval;
-(id)animatedTutorialViewNamed:(id)arg0 ofType:(id)arg1 needsFrame:(BOOL)arg2 ;
-(id)buttonTitle;
-(id)mediaContents;
-(id)textBodyDescriptions;
-(id)textBodyFont;
-(id)textTitleDescriptions;
-(void)extraButtonTapAction;
-(void)updateConstraints;


@end


#endif