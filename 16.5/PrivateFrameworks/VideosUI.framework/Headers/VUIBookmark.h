// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUIBOOKMARK_H
#define VUIBOOKMARK_H

@class NSDate;
@protocol NSCopying, NSMutableCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "VUIBookmarkKey.h"

@interface VUIBookmark : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>



@property (readonly, nonatomic) CGFloat bookmarkTime; // ivar: _bookmarkTime
@property (readonly, nonatomic) NSDate *bookmarkTimestamp; // ivar: _bookmarkTimestamp
@property (readonly, nonatomic) BOOL hasBeenPlayed; // ivar: _hasBeenPlayed
@property (readonly, nonatomic) BOOL hasBeenRented; // ivar: _hasBeenRented
@property (nonatomic) BOOL hasFakeTimestamp; // ivar: _hasFakeTimestamp
@property (readonly, nonatomic) BOOL isMarkedAsUnwatched; // ivar: _isMarkedAsUnwatched
@property (readonly, nonatomic) VUIBookmarkKey *key; // ivar: _key
@property (readonly, nonatomic) NSUInteger playCount; // ivar: _playCount


+(BOOL)supportsSecureCoding;
-(BOOL)hasRemoteData;
-(id)_copyWithResultClass:(Class)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithKey:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif