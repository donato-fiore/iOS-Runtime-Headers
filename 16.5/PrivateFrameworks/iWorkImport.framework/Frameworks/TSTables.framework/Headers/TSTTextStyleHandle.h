// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSTTEXTSTYLEHANDLE_H
#define TSTTEXTSTYLEHANDLE_H

@class TSWPParagraphStyle;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TSTTextStyleHandle : NSObject <NSCopying>



@property (readonly, nonatomic) int direction; // ivar: _direction
@property (readonly, nonatomic) CGFloat fontSize; // ivar: _fontSize
@property (readonly, nonatomic) BOOL isVariation; // ivar: _isVariation
@property (readonly, nonatomic) BOOL nonDefaultFontName; // ivar: _nonDefaultFontName
@property (readonly, nonatomic) BOOL nonDefaultFontSize; // ivar: _nonDefaultFontSize
@property (readonly, nonatomic) TSWPParagraphStyle *textStyle; // ivar: _textStyle


+(id)handleForTextStyle:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithTextStyle:(id)arg0 ;


@end


#endif