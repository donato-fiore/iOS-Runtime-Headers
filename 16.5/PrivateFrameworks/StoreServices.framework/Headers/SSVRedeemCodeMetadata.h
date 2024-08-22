// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SSVREDEEMCODEMETADATA_H
#define SSVREDEEMCODEMETADATA_H

@class NSString, NSArray, NSDictionary;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SSVRedeemCodeMetadata : NSObject <NSCopying>



@property (readonly, nonatomic) BOOL allowsAutoSubmission;
@property (readonly, nonatomic) NSString *code;
@property (readonly, nonatomic) NSString *codeType;
@property (copy, nonatomic) NSString *inputCode; // ivar: _inputCode
@property (readonly, nonatomic) NSArray *items;
@property (readonly, nonatomic) NSDictionary *redeemCodeDictionary; // ivar: _dictionary


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithRedeemCodeDictionary:(id)arg0 ;


@end


#endif