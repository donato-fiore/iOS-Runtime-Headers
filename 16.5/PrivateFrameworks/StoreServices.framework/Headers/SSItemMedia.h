// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SSITEMMEDIA_H
#define SSITEMMEDIA_H

@class NSURL, NSString;

#import <Foundation/Foundation.h>


@interface SSItemMedia : NSObject

@property (readonly, nonatomic) NSURL *URL; // ivar: _url
@property (readonly, nonatomic) NSInteger durationInMilliseconds; // ivar: _duration
@property (readonly, nonatomic) NSInteger fullDurationInMilliseconds; // ivar: _fullDuration
@property (readonly, nonatomic) NSInteger mediaFileSize; // ivar: _mediaFileSize
@property (copy, nonatomic) NSString *mediaKind; // ivar: _mediaKind
@property (readonly, nonatomic, getter=isProtectedMedia) BOOL protectedMedia; // ivar: _protected


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)init;
-(id)initWithStoreOfferDictionary:(id)arg0 ;
-(void)dealloc;


@end


#endif