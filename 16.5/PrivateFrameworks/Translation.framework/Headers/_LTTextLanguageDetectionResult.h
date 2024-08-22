// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _LTTEXTLANGUAGEDETECTIONRESULT_H
#define _LTTEXTLANGUAGEDETECTIONRESULT_H

@class NSLocale, NSCountedSet;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _LTTextLanguageDetectionResult : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSLocale *dominantLocale; // ivar: _dominantLocale
@property (readonly, copy, nonatomic) NSCountedSet *localeDetectionCount; // ivar: _localeDetectionCount
@property (readonly, copy, nonatomic) NSCountedSet *unsupportedLanguageCounts; // ivar: _unsupportedLanguageCounts


+(BOOL)supportsSecureCoding;
+(void)sendAnalytics:(id)arg0 isSupported:(BOOL)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDetectedLocales:(id)arg0 unknownLanguages:(id)arg1 ;
-(id)initWithDetectionCounts:(id)arg0 availableLocales:(id)arg1 ;
-(id)initWithScorer:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif