// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TPSNOTIFICATIONCACHE_H
#define TPSNOTIFICATIONCACHE_H

@class NSURL, NSString, TPSDocument, NSDictionary;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface TPSNotificationCache : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) NSURL *attachmentURL; // ivar: _attachmentURL
@property (retain, nonatomic) NSString *collectionIdentifier; // ivar: _collectionIdentifier
@property (retain, nonatomic) TPSDocument *document; // ivar: _document
@property (retain, nonatomic) NSDictionary *extensionPayload; // ivar: _extensionPayload
@property (retain, nonatomic) NSString *locale; // ivar: _locale
@property (nonatomic) NSUInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
+(id)notificationCacheWithCollectionIdentifier:(id)arg0 document:(id)arg1 type:(NSUInteger)arg2 ;
-(BOOL)hasLocaleChanged;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCollectionIdentifier:(id)arg0 document:(id)arg1 type:(NSUInteger)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif