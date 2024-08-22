// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UICIRCLEPROGRESSLAYER_H
#define _UICIRCLEPROGRESSLAYER_H

@class CALayer;


#import "UIColor.h"

@interface _UICircleProgressLayer : CALayer {
    CGFloat _oneFullRotation;
}


@property (nonatomic) CGFloat progress;
@property (retain, nonatomic) UIColor *progressBackgroundColor; // ivar: _progressBackgroundColor
@property (retain, nonatomic) UIColor *progressColor; // ivar: _progressColor
@property (nonatomic) CGFloat progressLineWidth; // ivar: _progressLineWidth
@property (nonatomic) NSInteger progressStartPoint; // ivar: _progressStartPoint
@property (nonatomic) BOOL showProgressTray; // ivar: _showProgressTray


+(BOOL)needsDisplayForKey:(id)arg0 ;
-(id)init;
-(id)initWithLayer:(id)arg0 ;
-(void)drawInContext:(struct CGContext *)arg0 ;


@end


#endif