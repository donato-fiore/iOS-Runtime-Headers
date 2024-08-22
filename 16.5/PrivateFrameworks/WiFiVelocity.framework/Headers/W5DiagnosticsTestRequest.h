// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef W5DIAGNOSTICSTESTREQUEST_H
#define W5DIAGNOSTICSTESTREQUEST_H

@class NSDictionary, NSUUID;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface W5DiagnosticsTestRequest : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSDictionary *configuration; // ivar: _configuration
@property (nonatomic) NSInteger testID; // ivar: _testID
@property (copy, nonatomic) NSUUID *uuid; // ivar: _uuid


+(BOOL)supportsSecureCoding;
+(id)requestWithTestID:(NSInteger)arg0 configuration:(id)arg1 ;
-(BOOL)conformsToProtocol:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToDiagnosticsTestRequest:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif