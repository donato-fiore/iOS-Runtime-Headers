// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TIANALYTICSMETRICSCONTEXT_H
#define TIANALYTICSMETRICSCONTEXT_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface TIAnalyticsMetricsContext : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSString *inputLanguage; // ivar: _inputLanguage
@property (readonly, nonatomic) NSString *inputLanguageAndRegion;
@property (readonly, nonatomic) NSString *inputRegion; // ivar: _inputRegion


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithInputLanguage:(id)arg0 inputRegion:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif