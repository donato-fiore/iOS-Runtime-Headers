// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UITEXTTILEDLAYERMASKEDRECT_H
#define _UITEXTTILEDLAYERMASKEDRECT_H


#import <Foundation/Foundation.h>


@interface _UITextTiledLayerMaskedRect : NSObject

@property (readonly, nonatomic) CGFloat alpha; // ivar: _alpha
@property (readonly, nonatomic) CGRect boundingRect; // ivar: _boundingRect


+(id)ghostedRect:(struct CGRect )arg0 ;
+(id)rect:(struct CGRect )arg0 alpha:(CGFloat)arg1 ;
-(id)description;
-(id)initWithRect:(struct CGRect )arg0 alpha:(CGFloat)arg1 ;


@end


#endif