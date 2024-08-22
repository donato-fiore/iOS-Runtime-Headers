// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TLKVIBRANTLIGHTAPPEARANCE_H
#define TLKVIBRANTLIGHTAPPEARANCE_H



#import "TLKLightAppearance.h"

@interface TLKVibrantLightAppearance : TLKLightAppearance



-(BOOL)isVibrant;
-(CGFloat)accessibilityContrastColorBoost;
-(NSUInteger)style;
-(id)compositingFilter;
-(id)name;
-(id)primaryColor;
-(id)quaternaryColor;
-(id)secondaryColor;
-(id)tertiaryColor;
-(id)textColorForColor:(NSInteger)arg0 ;


@end


#endif