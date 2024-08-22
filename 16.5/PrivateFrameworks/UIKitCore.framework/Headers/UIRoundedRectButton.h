// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIROUNDEDRECTBUTTON_H
#define UIROUNDEDRECTBUTTON_H



#import "UIButton.h"
#import "UIBezierPath.h"
#import "UIColor.h"

@interface UIRoundedRectButton : UIButton {
    UIBezierPath *_fillPath;
    UIColor *_fillColor;
}




+(Class)_visualProviderClass;
-(BOOL)_canDrawContent;
-(NSInteger)buttonType;
-(id)_contentBackgroundColor;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 fillColor:(id)arg1 ;
-(void)_invalidatePaths;
-(void)_updateState;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setTintColor:(id)arg0 ;


@end


#endif