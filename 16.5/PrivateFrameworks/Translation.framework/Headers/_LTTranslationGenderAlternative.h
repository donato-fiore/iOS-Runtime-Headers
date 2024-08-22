// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _LTTRANSLATIONGENDERALTERNATIVE_H
#define _LTTRANSLATIONGENDERALTERNATIVE_H

@class NSString, NSNumber;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _LTTranslationGenderAlternative : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSString *defaultGender; // ivar: _defaultGender
@property (copy, nonatomic) NSNumber *group; // ivar: _group
@property (nonatomic) _NSRange sourceRange; // ivar: _sourceRange
@property (nonatomic) _NSRange targetRange; // ivar: _targetRange


+(BOOL)supportsSecureCoding;
+(id)genderAlternativeFromDictionary:(id)arg0 withGroup:(id)arg1 ;
+(id)genderAlternativesFromDictionary:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif