// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UITEXTSELECTIONRECTVIEW_H
#define UITEXTSELECTIONRECTVIEW_H

@class CAShapeLayer;


#import "UIView.h"
#import "UIColor.h"

@interface UITextSelectionRectView : UIView

@property (readonly, nonatomic) BOOL hasPath;
@property (readonly, nonatomic) CAShapeLayer *pathLayer;
@property (retain, nonatomic) UIColor *selectionBorderColor; // ivar: _selectionBorderColor
@property (nonatomic) CGFloat selectionBorderWidth; // ivar: _selectionBorderWidth
@property (retain, nonatomic) UIColor *selectionColor; // ivar: _selectionColor
@property (nonatomic) CGFloat selectionCornerRadius; // ivar: _selectionCornerRadius


+(Class)layerClass;
-(id)path;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)setPath:(id)arg0 ;


@end


#endif