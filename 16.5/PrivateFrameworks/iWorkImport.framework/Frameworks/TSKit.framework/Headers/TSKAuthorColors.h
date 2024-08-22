// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSKAUTHORCOLORS_H
#define TSKAUTHORCOLORS_H

@class TSUColor, NSString;

#import <Foundation/Foundation.h>


@interface TSKAuthorColors : NSObject {
    TSUColor *_storageColor;
}


@property (readonly, nonatomic) NSString *authorColorName;
@property (readonly, nonatomic) TSUColor *cellViolatorColor;
@property (readonly, nonatomic) TSUColor *changeAdornmentsColor;
@property (readonly, nonatomic) TSUColor *flagFillColor;
@property (readonly, nonatomic) TSUColor *flagPressedColor;
@property (readonly, nonatomic) TSUColor *flagStrokeColor;
@property (readonly, nonatomic) TSUColor *gradientEndColor;
@property (readonly, nonatomic) TSUColor *gradientStartColor;
@property (readonly, nonatomic) TSUColor *indicatorDarkColor;
@property (readonly, nonatomic) TSUColor *indicatorLightColor;
@property (readonly, nonatomic) TSUColor *menuSwatchColorForAuthor;
@property (readonly, nonatomic) TSUColor *popoverAuthorLabelColor;
@property (readonly, nonatomic) TSUColor *popoverButtonTintColor;
@property (readonly, nonatomic) TSUColor *popoverColor;
@property (readonly, nonatomic) TSUColor *sidebarChangeBarColor;
@property (readonly, nonatomic) TSUColor *sidebarDecoratorLineColor;
@property (readonly, nonatomic) TSUColor *sidebarHoverColor;
@property (readonly, nonatomic) TSUColor *sidebarSelectedBorderColor;
@property (readonly, nonatomic) TSUColor *sidebarSelectedColor;
@property (readonly, nonatomic) TSUColor *sidebarUsernameColor;
@property (readonly, nonatomic) TSUColor *storageColor;
@property (readonly, nonatomic) TSUColor *textHighlightColor;
@property (readonly, nonatomic) TSUColor *textHighlightOverlappingDuplicateColor;
@property (readonly, nonatomic) TSUColor *textMarkupColor;
@property (readonly, nonatomic) NSString *themeFilenameForAuthor;


+(NSUInteger)authorColorIndexClosestToImportedFloatingCommentColor:(id)arg0 ;
+(NSUInteger)p_authorColorIndexWithColor:(id)arg0 forIndicator:(BOOL)arg1 ;
+(NSUInteger)presetColorCount;
+(id)authorMenuSwatchColorForIndex:(NSUInteger)arg0 ;
+(id)authorStorageColorForIndex:(NSUInteger)arg0 ;
+(id)authorTextMarkupColorForIndex:(NSUInteger)arg0 ;
+(id)indicatorDarkColorByLightColor:(id)arg0 ;
+(id)indicatorDarkColorForIndex:(NSUInteger)arg0 ;
+(id)indicatorLightColorByAuthorColor:(id)arg0 ;
+(id)indicatorLightColorForIndex:(NSUInteger)arg0 ;
+(id)localizedAuthorColorNameForIndex:(NSUInteger)arg0 ;
+(id)p_authorColorDictionaryForAuthorIndex:(NSUInteger)arg0 ;
+(id)p_authorColorForIndex:(NSUInteger)arg0 forKey:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)p_authorColorIndex;
-(id)initWithAuthorStorageColor:(id)arg0 ;


@end


#endif