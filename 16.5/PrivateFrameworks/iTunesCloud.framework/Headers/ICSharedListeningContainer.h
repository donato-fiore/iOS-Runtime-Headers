// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICSHAREDLISTENINGCONTAINER_H
#define ICSHAREDLISTENINGCONTAINER_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "ICSharedListeningItem.h"

@interface ICSharedListeningContainer : NSObject <NSCopying>



@property (readonly, copy, nonatomic) NSString *featureName; // ivar: _featureName
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSInteger kind; // ivar: _kind
@property (readonly, copy, nonatomic) NSString *mediaIdentifier; // ivar: _mediaIdentifier
@property (readonly, copy, nonatomic) ICSharedListeningItem *seedItem; // ivar: _seedItem
@property (readonly, copy, nonatomic) NSString *shortDescription;
@property (readonly, copy, nonatomic) NSString *stationHash; // ivar: _stationHash


+(id)albumContainerWithMediaIdentifier:(id)arg0 featureName:(id)arg1 ;
+(id)autoPlayContainerWithMediaIdentifier:(id)arg0 featureName:(id)arg1 ;
+(id)groupWithFeatureName:(id)arg0 ;
+(id)playlistContainerWithMediaIdentifier:(id)arg0 featureName:(id)arg1 ;
+(id)radioContainerWithMediaIdentifier:(id)arg0 featureName:(id)arg1 ;
+(id)radioContainerWithSeedItem:(id)arg0 featureName:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithKind:(NSInteger)arg0 mediaIdentifier:(id)arg1 featureName:(id)arg2 ;
-(id)_initWithKind:(NSInteger)arg0 seedItem:(id)arg1 featureName:(id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithProtobuf:(id)arg0 ;


@end


#endif