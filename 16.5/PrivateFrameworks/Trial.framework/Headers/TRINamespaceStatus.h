// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRINAMESPACESTATUS_H
#define TRINAMESPACESTATUS_H

@class NSDate, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface TRINamespaceStatus : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) unsigned int compatibilityVersion; // ivar: _compatibilityVersion
@property (readonly, nonatomic) NSDate *lastFetchAttempt; // ivar: _lastFetchAttempt
@property (readonly, nonatomic) BOOL lastFetchWasSuccess; // ivar: _lastFetchWasSuccess
@property (readonly, nonatomic) NSString *namespaceName; // ivar: _namespaceName


+(BOOL)supportsSecureCoding;
+(id)statusFromData:(id)arg0 ;
+(id)statusWithNamespaceName:(id)arg0 compatibilityVersion:(unsigned int)arg1 lastFetchAttempt:(id)arg2 lastFetchWasSuccess:(BOOL)arg3 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToStatus:(id)arg0 ;
-(NSUInteger)hash;
-(id)asData;
-(id)copyWithReplacementCompatibilityVersion:(unsigned int)arg0 ;
-(id)copyWithReplacementLastFetchAttempt:(id)arg0 ;
-(id)copyWithReplacementLastFetchWasSuccess:(BOOL)arg0 ;
-(id)copyWithReplacementNamespaceName:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNamespaceName:(id)arg0 compatibilityVersion:(unsigned int)arg1 lastFetchAttempt:(id)arg2 lastFetchWasSuccess:(BOOL)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif