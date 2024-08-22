// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFWORKFLOWICONDRAWER_H
#define WFWORKFLOWICONDRAWER_H

@class NSData, NSString;

#import <Foundation/Foundation.h>

#import "WFColor.h"
#import "WFWorkflowIconDrawerContext.h"

@interface WFWorkflowIconDrawer : NSObject

@property (retain, nonatomic) WFColor *backgroundColor; // ivar: _backgroundColor
@property (nonatomic) CGFloat cornerRadius; // ivar: _cornerRadius
@property (copy, nonatomic) NSData *customImageData; // ivar: _customImageData
@property (nonatomic) BOOL dark; // ivar: _dark
@property (nonatomic) BOOL drawBackground; // ivar: _drawBackground
@property (nonatomic) BOOL drawGradient; // ivar: _drawGradient
@property (nonatomic) BOOL drawShadowBehindGlyph; // ivar: _drawShadowBehindGlyph
@property (readonly, nonatomic) WFWorkflowIconDrawerContext *drawerContext; // ivar: _drawerContext
@property (nonatomic) unsigned short glyphCharacter; // ivar: _glyphCharacter
@property (retain, nonatomic) WFColor *glyphColor; // ivar: _glyphColor
@property (nonatomic) CGSize glyphSize; // ivar: _glyphSize
@property (nonatomic) BOOL highContrast; // ivar: _highContrast
@property (nonatomic) BOOL outline; // ivar: _outline
@property (nonatomic) BOOL rounded; // ivar: _rounded
@property (copy, nonatomic) NSString *symbolName; // ivar: _symbolName
@property (nonatomic) BOOL useCustomImage; // ivar: _useCustomImage


-(id)imageWithSize:(struct CGSize )arg0 ;
-(id)imageWithSize:(struct CGSize )arg0 scale:(CGFloat)arg1 ;
-(id)imageWithSize:(struct CGSize )arg0 scale:(CGFloat)arg1 padding:(struct CGSize )arg2 ;
-(id)init;
-(id)initWithDrawerContext:(id)arg0 ;
-(struct CGSize )calculatedSizeForSize:(struct CGSize )arg0 scale:(CGFloat)arg1 ;
-(void)drawInContext:(id)arg0 inRect:(struct CGRect )arg1 ;


@end


#endif