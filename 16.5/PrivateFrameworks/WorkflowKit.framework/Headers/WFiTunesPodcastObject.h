// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFITUNESPODCASTOBJECT_H
#define WFITUNESPODCASTOBJECT_H

@class NSString, NSDictionary, NSURL;
@protocol MTLJSONSerializing;


#import "WFiTunesCollectionObject.h"

@interface WFiTunesPodcastObject : WFiTunesCollectionObject <MTLJSONSerializing>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (retain, nonatomic) NSURL *feedURL; // ivar: _feedURL
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *podcastUUID; // ivar: _podcastUUID
@property (readonly) Class superclass;


+(id)JSONKeyPathsByPropertyKey;
-(id)initWithName:(id)arg0 identifier:(id)arg1 podcastUUID:(id)arg2 feedURL:(id)arg3 kind:(id)arg4 ;


@end


#endif