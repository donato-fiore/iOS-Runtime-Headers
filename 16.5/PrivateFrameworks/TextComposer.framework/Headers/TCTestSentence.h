// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TCTESTSENTENCE_H
#define TCTESTSENTENCE_H

@class NSString, NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface TCTestSentence : NSObject <NSCopying, NSSecureCoding>

 {
    NSString *_originalString;
    NSArray *_grammarDetails;
}


@property (readonly, copy) NSString *finalString;
@property (readonly, copy) NSArray *grammarDetails;
@property (readonly, copy) NSString *originalString;
@property (readonly, copy) NSString *testString;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOriginalString:(id)arg0 grammarDetails:(id)arg1 ;
-(id)initWithTestString:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif