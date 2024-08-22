// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _LTTEXTLANGUAGEDETECTORSCORERITEM_H
#define _LTTEXTLANGUAGEDETECTORSCORERITEM_H

@class NSLocale;

#import <Foundation/Foundation.h>


@interface _LTTextLanguageDetectorScorerItem : NSObject

@property (readonly, nonatomic) CGFloat confidence; // ivar: _confidence
@property (readonly, copy, nonatomic) NSLocale *locale; // ivar: _locale
@property (readonly, nonatomic) NSInteger wordCount; // ivar: _wordCount


-(CGFloat)score;
-(id)initWithLocale:(id)arg0 confidence:(CGFloat)arg1 wordCount:(NSInteger)arg2 ;


@end


#endif