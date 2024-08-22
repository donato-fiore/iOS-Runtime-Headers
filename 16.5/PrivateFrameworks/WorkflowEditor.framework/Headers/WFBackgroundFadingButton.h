// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFBACKGROUNDFADINGBUTTON_H
#define WFBACKGROUNDFADINGBUTTON_H

@class UIButton, NSMutableDictionary;



@interface WFBackgroundFadingButton : UIButton

@property (retain, nonatomic) NSMutableDictionary *backgroundColorsByState; // ivar: _backgroundColorsByState
@property (nonatomic) BOOL derivesBackgroundColorFromTintColor; // ivar: _derivesBackgroundColorFromTintColor
@property (nonatomic) BOOL derivesTitleColorFromTintColor; // ivar: _derivesTitleColorFromTintColor


-(void)setBackgroundColor:(id)arg0 forState:(NSUInteger)arg1 ;
-(void)setEnabled:(BOOL)arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setSelected:(BOOL)arg0 ;
-(void)tintColorDidChange;
-(void)updateBackgroundColorAnimated:(BOOL)arg0 ;


@end


#endif