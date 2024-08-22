// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUICOMPRESSEDIMAGE_H
#define SKUICOMPRESSEDIMAGE_H

@class UIImage, UIColor;



@interface SKUICompressedImage : UIImage

@property (retain, nonatomic) UIColor *borderColor; // ivar: _borderColor
@property (nonatomic) CGFloat borderWidth; // ivar: _borderWidth
@property (nonatomic) CGFloat cornerRadius; // ivar: _cornerRadius
@property (nonatomic) NSInteger cornerType; // ivar: _cornerType


-(id)description;


@end


#endif