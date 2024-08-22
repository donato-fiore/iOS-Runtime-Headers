// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _LTLANGUAGEDETECTIONRESULT_H
#define _LTLANGUAGEDETECTIONRESULT_H

@class NSDictionary, NSLocale;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _LTLanguageDetectionResult : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSDictionary *confidences; // ivar: _confidences
@property (copy, nonatomic) NSLocale *dominantLanguage; // ivar: _dominantLanguage
@property (readonly, nonatomic) BOOL isConfident; // ivar: _isConfident
@property (nonatomic) BOOL isFinal; // ivar: _isFinal


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithConfidences:(id)arg0 isConfident:(BOOL)arg1 dominantLanguage:(id)arg2 isFinal:(BOOL)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif