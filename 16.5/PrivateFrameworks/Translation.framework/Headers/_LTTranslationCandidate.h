// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _LTTRANSLATIONCANDIDATE_H
#define _LTTRANSLATIONCANDIDATE_H

@class NSString, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "_LTTranslationStatistics.h"

@interface _LTTranslationCandidate : NSObject <NSSecureCoding>



@property (nonatomic) CGFloat confidence; // ivar: _confidence
@property (copy, nonatomic) NSString *formattedString; // ivar: _formattedString
@property (copy, nonatomic) NSArray *genderAlternatives; // ivar: _genderAlternatives
@property (nonatomic, getter=isLowConfidence) BOOL lowConfidence; // ivar: _lowConfidence
@property (readonly, nonatomic) NSArray *preToPostITN; // ivar: _preToPostITN
@property (copy, nonatomic) NSArray *proToPostITN; // ivar: _proToPostITN
@property (copy, nonatomic) NSString *romanization; // ivar: _romanization
@property (copy, nonatomic) NSString *sanitizedFormattedString; // ivar: _sanitizedFormattedString
@property (copy, nonatomic) NSArray *senses; // ivar: _senses
@property (copy, nonatomic) _LTTranslationStatistics *statistics; // ivar: _statistics
@property (copy, nonatomic) NSArray *tokens; // ivar: _tokens


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFormattedString:(id)arg0 sanitizedFormattedString:(id)arg1 confidence:(CGFloat)arg2 lowConfidence:(BOOL)arg3 romanization:(id)arg4 tokens:(id)arg5 preToPostITN:(id)arg6 ;
-(id)initWithOspreyMtResponsePhrase:(id)arg0 locale:(id)arg1 ;
-(id)initWithOspreyMtResponsePhrase:(id)arg0 locale:(id)arg1 injectingGenderTranslation:(id)arg2 genderInjectedMetaInfo:(id)arg3 ;
-(id)initWithOspreyPhrase:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateWithEngineMeta:(id)arg0 locale:(id)arg1 ;


@end


#endif