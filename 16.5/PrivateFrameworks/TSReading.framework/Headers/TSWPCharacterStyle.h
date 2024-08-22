// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSWPCHARACTERSTYLE_H
#define TSWPCHARACTERSTYLE_H

@class NSString;
@protocol TSSPreset;


#import "TSSStyle.h"

@interface TSWPCharacterStyle : TSSStyle <TSSPreset>



@property (readonly, nonatomic) NSString *presetKind;


+(id)emphasisProperties;
+(id)nonEmphasisCharacterProperties;
+(id)nullStyleName;
+(id)nullStyleWithContext:(id)arg0 ;
+(id)properties;
+(id)propertiesAllowingNSNull;
-(BOOL)transformsFontSizes;
-(int)writingDirection;


@end


#endif