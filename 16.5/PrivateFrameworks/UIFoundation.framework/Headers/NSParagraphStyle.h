// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSPARAGRAPHSTYLE_H
#define NSPARAGRAPHSTYLE_H

@class NSArray, NSString;
@protocol _NSParagraphStyleMarkdownSettings, NSCopying, NSMutableCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NSParagraphStyle : NSObject <_NSParagraphStyleMarkdownSettings, NSCopying, NSMutableCopying, NSSecureCoding>

 {
    CGFloat _lineSpacing;
    CGFloat _paragraphSpacing;
    CGFloat _headIndent;
    CGFloat _tailIndent;
    CGFloat _firstLineHeadIndent;
    CGFloat _minimumLineHeight;
    CGFloat _maximumLineHeight;
    NSArray *_tabStops;
    ? _flags;
    CGFloat _defaultTabInterval;
    id *_extraData;
}


@property (readonly) NSInteger _listIntentOrdinal;
@property (readonly, copy, nonatomic) NSArray *_presentationIntents;
@property (readonly, nonatomic) NSInteger alignment;
@property (readonly, nonatomic) BOOL allowsDefaultTighteningForTruncation;
@property (readonly, nonatomic) NSInteger baseWritingDirection;
@property (readonly, copy, nonatomic) NSString *codeBlockIntentLanguageHint;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) CGFloat defaultTabInterval;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat firstLineHeadIndent;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat headIndent;
@property (readonly) NSInteger headerLevel;
@property (readonly, nonatomic) float hyphenationFactor;
@property (readonly, nonatomic) NSInteger lineBreakMode;
@property (readonly, nonatomic) NSUInteger lineBreakStrategy;
@property (readonly, nonatomic) CGFloat lineHeightMultiple;
@property (readonly, nonatomic) CGFloat lineSpacing;
@property (readonly) NSInteger listIntentOrdinal;
@property (readonly, nonatomic) CGFloat maximumLineHeight;
@property (readonly, nonatomic) CGFloat minimumLineHeight;
@property (readonly, nonatomic) CGFloat paragraphSpacing;
@property (readonly, nonatomic) CGFloat paragraphSpacingBefore;
@property (readonly, copy, nonatomic) NSArray *presentationIntents;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSArray *tabStops;
@property (readonly, nonatomic) CGFloat tailIndent;
@property (readonly, copy, nonatomic) NSArray *textLists;
@property (readonly, nonatomic) BOOL usesDefaultHyphenation;


+(BOOL)supportsSecureCoding;
+(NSInteger)_defaultWritingDirection;
+(NSInteger)defaultWritingDirectionForLanguage:(id)arg0 ;
+(float)_defaultHyphenationFactor;
+(id)defaultParagraphStyle;
+(void)initialize;
-(BOOL)_isSuitableForFastStringDrawingWithAlignment:(*NSInteger)arg0 mirrorsTextAlignment:(BOOL)arg1 lineBreakMode:(*NSInteger)arg2 tighteningFactorForTruncation:(*CGFloat)arg3 ;
-(BOOL)allowsHangingPunctuation;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)usesOpticalAlignment;
-(NSInteger)compositionLanguage;
-(NSUInteger)_lineBoundsOptions;
-(float)tighteningFactorForTruncation;
-(id)_initWithParagraphStyle:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)textBlocks;
-(void)_allocExtraData;
-(void)_deallocExtraData;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif