// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUIMPSEASONMEDIACOLLECTIONIDENTIFIER_H
#define VUIMPSEASONMEDIACOLLECTIONIDENTIFIER_H

@class NSNumber;


#import "VUIMPMediaEntityIdentifier.h"

@interface VUIMPSeasonMediaCollectionIdentifier : VUIMPMediaEntityIdentifier

@property (copy, nonatomic) NSNumber *seasonNumber; // ivar: _seasonNumber


+(id)requiredMPPropertyNames;
+(id)seasonIdentifierWithMediaItem:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithPersistentID:(id)arg0 mediaEntityType:(id)arg1 ;
-(id)initWithPersistentID:(id)arg0 seasonNumber:(id)arg1 ;


@end


#endif