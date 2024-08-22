// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIINPUTSWITCHERTABLECELLBACKGROUNDVIEW_H
#define UIINPUTSWITCHERTABLECELLBACKGROUNDVIEW_H



#import "UIView.h"

@interface UIInputSwitcherTableCellBackgroundView : UIView

@property (nonatomic) BOOL drawsBorder; // ivar: _drawsBorder
@property (nonatomic) BOOL drawsOpaque; // ivar: _drawsOpaque
@property (nonatomic) NSUInteger roundedCorners; // ivar: _roundedCorners
@property (nonatomic, getter=isSelected) BOOL selected; // ivar: _selected
@property (nonatomic) BOOL usesDarkTheme; // ivar: _usesDarkTheme


-(void)drawRect:(struct CGRect )arg0 ;


@end


#endif