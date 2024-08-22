// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSMUTABLEPARAGRAPHSTYLE_H
#define NSMUTABLEPARAGRAPHSTYLE_H

@class NSArray, NSString;
@protocol _NSMutableParagraphStyleMarkdownSettings;


#import "NSParagraphStyle.h"

@interface NSMutableParagraphStyle : NSParagraphStyle <_NSMutableParagraphStyleMarkdownSettings>



@property (setter=_setListIntentOrdinal:) NSInteger _listIntentOrdinal;
@property (copy, nonatomic, setter=_setPresentationIntents:) NSArray *_presentationIntents;
@property (nonatomic) NSInteger alignment;
@property (nonatomic) BOOL allowsDefaultTighteningForTruncation;
@property (nonatomic) NSInteger baseWritingDirection;
@property (copy) NSString *codeBlockIntentLanguageHint;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) CGFloat defaultTabInterval;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat firstLineHeadIndent;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat headIndent;
@property NSInteger headerLevel;
@property (nonatomic) float hyphenationFactor;
@property (nonatomic) NSInteger lineBreakMode;
@property (nonatomic) NSUInteger lineBreakStrategy;
@property (nonatomic) CGFloat lineHeightMultiple;
@property (nonatomic) CGFloat lineSpacing;
@property NSInteger listIntentOrdinal;
@property (nonatomic) CGFloat maximumLineHeight;
@property (nonatomic) CGFloat minimumLineHeight;
@property (nonatomic) CGFloat paragraphSpacing;
@property (nonatomic) CGFloat paragraphSpacingBefore;
@property (copy, nonatomic, setter=_setPresentationIntents:) NSArray *presentationIntents;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *tabStops;
@property (nonatomic) CGFloat tailIndent;
@property (copy, nonatomic) NSArray *textLists;
@property (nonatomic) BOOL usesDefaultHyphenation;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)_mutateTabStops;
-(void)_setLineBoundsOptions:(NSUInteger)arg0 ;
-(void)addTabStop:(id)arg0 ;
-(void)removeTabStop:(id)arg0 ;
-(void)setAllowsHangingPunctuation:(BOOL)arg0 ;
-(void)setCompositionLanguage:(NSInteger)arg0 ;
-(void)setParagraphStyle:(id)arg0 ;
-(void)setPresentationIntents:(id)arg0 ;
-(void)setTextBlocks:(id)arg0 ;
-(void)setTighteningFactorForTruncation:(float)arg0 ;
-(void)setUsesOpticalAlignment:(BOOL)arg0 ;


@end


#endif