// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSWPEQUATIONLAYOUTCONTEXT_H
#define TSWPEQUATIONLAYOUTCONTEXT_H

@class NSString, TSUColor;
@protocol EQKitLayoutContext;

#import <Foundation/Foundation.h>


@interface TSWPEquationLayoutContext : NSObject <EQKitLayoutContext>



@property (nonatomic) CGSize containerSize; // ivar: _containerSize
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) TSUColor *fontColor; // ivar: _fontColor
@property (copy, nonatomic) NSString *fontName; // ivar: _fontName
@property (nonatomic) CGFloat fontSize; // ivar: _fontSize
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) CGSize targetSize; // ivar: _targetSize
@property (nonatomic) CGFloat textMacroFontSize; // ivar: _textMacroFontSize


-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)baseFontSize;
-(id)init;
-(id)initWithFontName:(id)arg0 fontSize:(CGFloat)arg1 fontColor:(id)arg2 ;
-(id)initWithFontName:(id)arg0 fontSize:(CGFloat)arg1 fontColor:(id)arg2 targetSize:(struct CGSize )arg3 containerSize:(struct CGSize )arg4 textMacroFontSize:(CGFloat)arg5 ;
-(id)initWithTextProperties:(id)arg0 containerSize:(struct CGSize )arg1 ;
-(id)initWithTextProperties:(id)arg0 fontSize:(CGFloat)arg1 containerSize:(struct CGSize )arg2 ;
-(id)initWithTextProperties:(id)arg0 fontSize:(CGFloat)arg1 containerSize:(struct CGSize )arg2 textMacroFontSize:(CGFloat)arg3 ;
-(id)initWithTextProperties:(id)arg0 targetSize:(struct CGSize )arg1 ;
-(struct CGColor *)baseFontColor;
-(struct __CFString *)baseFontName;


@end


#endif