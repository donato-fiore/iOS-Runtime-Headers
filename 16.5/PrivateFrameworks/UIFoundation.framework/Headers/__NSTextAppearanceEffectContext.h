// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef __NSTEXTAPPEARANCEEFFECTCONTEXT_H
#define __NSTEXTAPPEARANCEEFFECTCONTEXT_H

@class NSString, CUICatalog, CUIStyleEffectConfiguration, UIColor;

#import <Foundation/Foundation.h>

#import "UIFont.h"

@interface __NSTextAppearanceEffectContext : NSObject {
    NSString *_effectName;
    CUICatalog *_catalog;
    CUIStyleEffectConfiguration *_effectConfiguration;
    UIFont *_font;
    UIColor *_color;
}




-(id)initWithTextEffectName:(id)arg0 catalog:(id)arg1 styleEffectConfiguration:(id)arg2 font:(id)arg3 color:(id)arg4 applicationFrameworkContext:(NSInteger)arg5 useSimplifiedEffect:(BOOL)arg6 ;
-(void)dealloc;
-(void)drawGlyphs:(*unsigned short)arg0 positions:(struct CGPoint *)arg1 count:(NSInteger)arg2 context:(struct CGContext *)arg3 ;


@end


#endif