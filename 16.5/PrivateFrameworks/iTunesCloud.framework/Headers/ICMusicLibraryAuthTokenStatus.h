// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICMUSICLIBRARYAUTHTOKENSTATUS_H
#define ICMUSICLIBRARYAUTHTOKENSTATUS_H

@class NSString, NSError, NSDate;
@protocol ICMutableMusicLibraryAuthTokenStatus, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "ICMusicLibraryAuthToken.h"

@interface ICMusicLibraryAuthTokenStatus : NSObject <ICMutableMusicLibraryAuthTokenStatus, NSSecureCoding, NSCopying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isFrozen) BOOL frozen; // ivar: _frozen
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSError *lastError; // ivar: _lastError
@property (copy, nonatomic) NSDate *lastUpdatedDate; // ivar: _lastUpdatedDate
@property (nonatomic) BOOL shouldExcludeFromBackgroundRefresh; // ivar: _shouldExcludeFromBackgroundRefresh
@property (readonly) Class superclass;
@property (retain, nonatomic) ICMusicLibraryAuthToken *token; // ivar: _token


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithBlock:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif