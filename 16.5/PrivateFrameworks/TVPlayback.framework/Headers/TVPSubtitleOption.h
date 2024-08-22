// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TVPSUBTITLEOPTION_H
#define TVPSUBTITLEOPTION_H

@class AVMediaSelectionOption, NSNumber, NSString;

#import <Foundation/Foundation.h>


@interface TVPSubtitleOption : NSObject

@property (retain, nonatomic) AVMediaSelectionOption *avMediaSelectionOption; // ivar: _avMediaSelectionOption
@property (retain, nonatomic) NSNumber *cachedContainsOnlyForcedSubtitles; // ivar: _cachedContainsOnlyForcedSubtitles
@property (retain, nonatomic) NSNumber *cachedSubtitleType; // ivar: _cachedSubtitleType
@property (readonly, nonatomic) BOOL containsOnlyForcedSubtitles;
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) NSString *languageCodeBCP47; // ivar: _languageCodeBCP47
@property (copy, nonatomic) NSString *languageCodeFromLocale; // ivar: _languageCodeFromLocale
@property (copy, nonatomic) NSString *localizedDisplayString; // ivar: _localizedDisplayString
@property (readonly, nonatomic) NSInteger subtitleType;


+(id)autoSubtitleOption;
+(id)offSubtitleOption;
+(id)offSubtitleOptionWithAVMediaSelectionOption:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithAVMediaSelectionOption:(id)arg0 ;
-(void)_currentLocaleDidChange:(id)arg0 ;
-(void)dealloc;


@end


#endif