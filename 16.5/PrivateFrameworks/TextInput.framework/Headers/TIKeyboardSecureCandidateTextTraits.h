// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TIKEYBOARDSECURECANDIDATETEXTTRAITS_H
#define TIKEYBOARDSECURECANDIDATETEXTTRAITS_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "TIKeyboardSecureCandidateRGBColor.h"

@interface TIKeyboardSecureCandidateTextTraits : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) CGFloat baselineOffset; // ivar: _baselineOffset
@property (copy, nonatomic) NSString *fontName; // ivar: _fontName
@property (nonatomic) CGFloat maxFontSize; // ivar: _maxFontSize
@property (nonatomic) CGFloat minFontSize; // ivar: _minFontSize
@property (retain, nonatomic) TIKeyboardSecureCandidateRGBColor *textColor; // ivar: _textColor
@property (nonatomic) CGFloat yCoordinate; // ivar: _yCoordinate


+(BOOL)supportsSecureCoding;
+(id)traitsWithFontName:(id)arg0 maxFontSize:(CGFloat)arg1 minFontSize:(CGFloat)arg2 textColor:(id)arg3 yCoordinate:(CGFloat)arg4 baselineOffset:(CGFloat)arg5 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFontName:(id)arg0 fontSize:(CGFloat)arg1 textColor:(id)arg2 ;
-(id)initWithFontName:(id)arg0 maxFontSize:(CGFloat)arg1 minFontSize:(CGFloat)arg2 textColor:(id)arg3 ;
-(id)initWithFontName:(id)arg0 maxFontSize:(CGFloat)arg1 minFontSize:(CGFloat)arg2 textColor:(id)arg3 yCoordinate:(CGFloat)arg4 baselineOffset:(CGFloat)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif