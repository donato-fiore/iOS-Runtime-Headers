// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NCNOTIFICATIONLISTSTACKBACKGROUNDDIMMINGVIEW_H
#define NCNOTIFICATIONLISTSTACKBACKGROUNDDIMMINGVIEW_H

@class UIView, NSString;
@protocol NCNotificationListDimmable;



@interface NCNotificationListStackBackgroundDimmingView : UIView <NCNotificationListDimmable>

 {
    CGFloat _absoluteStackingBrightnessFilterInput;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_shouldAnimatePropertyWithKey:(id)arg0 ;
-(void)_updateDimming;
-(void)configureStackDimmingForTransform:(struct CGAffineTransform )arg0 ;
-(void)setBackgroundColor:(id)arg0 ;


@end


#endif