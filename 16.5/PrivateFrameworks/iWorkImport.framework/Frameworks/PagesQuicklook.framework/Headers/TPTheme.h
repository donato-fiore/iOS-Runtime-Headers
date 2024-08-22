// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TPTHEME_H
#define TPTHEME_H

@class TSATheme, TSWPParagraphStyle;



@interface TPTheme : TSATheme

@property (readonly, nonatomic) TSWPParagraphStyle *bodyStyle;
@property (readonly, nonatomic) TSWPParagraphStyle *footnoteStyle;
@property (readonly, nonatomic) TSWPParagraphStyle *headerAndFooterStyle;
@property (readonly, nonatomic) BOOL isBasicTheme;
@property (readonly, nonatomic) BOOL isBookPortraitTemplateTheme;


+(id)themeWithContext:(id)arg0 alternate:(NSUInteger)arg1 withStylesheet:(id)arg2 ;
+(void)initialize;
-(id)_paragraphStylePresetWithName:(id)arg0 orContentTag:(id)arg1 ;
-(id)localizedBodyStyleName;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)p_saveToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg0 ;


@end


#endif