// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UITEXTFIELDLABEL_H
#define UITEXTFIELDLABEL_H



#import "UILabel.h"

@interface UITextFieldLabel : UILabel

@property (nonatomic) BOOL shouldRenderWithoutTextField; // ivar: _shouldRenderWithoutTextField


+(id)_defaultAttributes;
+(id)defaultFont;
-(BOOL)_shouldDrawUnderlinesLikeWebKit;
-(void)_defaultDrawTextInRect:(struct CGRect )arg0 ;
-(void)drawTextInRect:(struct CGRect )arg0 ;


@end


#endif