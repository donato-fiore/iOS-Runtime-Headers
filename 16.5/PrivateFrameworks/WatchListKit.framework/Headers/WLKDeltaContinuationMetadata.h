// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WLKDELTACONTINUATIONMETADATA_H
#define WLKDELTACONTINUATIONMETADATA_H

@class NSString, NSURL;


#import "WLKContinuationMetadataBase.h"

@interface WLKDeltaContinuationMetadata : WLKContinuationMetadataBase

@property (readonly, nonatomic) NSString *adamID; // ivar: _adamID
@property (readonly, nonatomic) NSInteger deltaType; // ivar: _deltaType
@property (readonly, nonatomic) NSURL *playbackURL; // ivar: _playbackURL


+(NSInteger)_deltaTypeForString:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 context:(id)arg1 ;


@end


#endif