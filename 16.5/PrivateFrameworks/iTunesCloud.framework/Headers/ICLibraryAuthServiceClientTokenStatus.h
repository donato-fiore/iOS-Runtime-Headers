// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICLIBRARYAUTHSERVICECLIENTTOKENSTATUS_H
#define ICLIBRARYAUTHSERVICECLIENTTOKENSTATUS_H

@class NSError, NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "ICLibraryAuthServiceClientTokenResult.h"

@interface ICLibraryAuthServiceClientTokenStatus : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSError *lastError; // ivar: _lastError
@property (nonatomic) CGFloat lastUpdateAttemptTime; // ivar: _lastUpdateAttemptTime
@property (readonly, copy, nonatomic) NSDate *lastUpdatedDate;
@property (nonatomic) BOOL shouldExcludeFromBackgroundRefresh; // ivar: _shouldExcludeFromBackgroundRefresh
@property (copy, nonatomic) ICLibraryAuthServiceClientTokenResult *tokenResult; // ivar: _tokenResult


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif