// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UITEXTRENDERINGATTRIBUTES_H
#define UITEXTRENDERINGATTRIBUTES_H

@class UIFont;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface UITextRenderingAttributes : NSObject <NSCopying>

 {
    UIFont *_font;
    CGFloat _minimumFontSize;
    CGFloat _actualFontSize;
    CGFloat _lineSpacing;
    NSInteger _lineBreakMode;
    NSInteger _baselineAdjustment;
    NSInteger _alignment;
    BOOL _includeEmoji;
    CGRect _truncationRect;
    BOOL _drawUnderline;
}




-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif