// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUIJSANALYZEDIMAGECOLORS_H
#define SKUIJSANALYZEDIMAGECOLORS_H

@class IKJSObject;
@protocol SKUIJSAnalyzedImageColors;


#import "SKUIJSColor.h"

@interface SKUIJSAnalyzedImageColors : IKJSObject <SKUIJSAnalyzedImageColors>



@property (readonly, nonatomic) SKUIJSColor *backgroundColor; // ivar: _backgroundColor
@property (readonly, nonatomic) BOOL isBackgroundLight; // ivar: _isBackgroundLight
@property (readonly, nonatomic) SKUIJSColor *textPrimaryColor; // ivar: _textPrimaryColor
@property (readonly, nonatomic) SKUIJSColor *textSecondaryColor; // ivar: _textSecondaryColor


-(id)initWithAppContext:(id)arg0 analyzedImageColors:(id)arg1 ;


@end


#endif