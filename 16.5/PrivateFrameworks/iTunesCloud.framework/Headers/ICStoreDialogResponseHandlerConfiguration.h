// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICSTOREDIALOGRESPONSEHANDLERCONFIGURATION_H
#define ICSTOREDIALOGRESPONSEHANDLERCONFIGURATION_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ICStoreDialogResponseHandlerConfiguration : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) BOOL allowsHandlingNonAuthenticationDialogs; // ivar: _allowsHandlingNonAuthenticationDialogs
@property (nonatomic) BOOL shouldRecordLastAuthenticationDialogResponseTime; // ivar: _shouldRecordLastAuthenticationDialogResponseTime


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif