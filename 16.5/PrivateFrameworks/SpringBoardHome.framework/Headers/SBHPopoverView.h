// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBHPOPOVERVIEW_H
#define SBHPOPOVERVIEW_H

@class UIView;



@interface SBHPopoverView : UIView

@property (retain, nonatomic) UIView *backgroundView; // ivar: _backgroundView


-(id)_arrowViewForArrowLocation:(NSInteger)arg0 arrowSize:(CGFloat)arg1 ;
-(id)_createBackgroundView;
-(id)initWithArrowLocation:(NSInteger)arg0 ;


@end


#endif