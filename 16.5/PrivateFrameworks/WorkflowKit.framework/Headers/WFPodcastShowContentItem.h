// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFPODCASTSHOWCONTENTITEM_H
#define WFPODCASTSHOWCONTENTITEM_H



#import "WFiTunesObjectContentItem.h"

@interface WFPodcastShowContentItem : WFiTunesObjectContentItem



+(BOOL)canLowercaseTypeDescription;
+(id)contentCategories;
+(id)countDescription;
+(id)ownedTypes;
+(id)pluralTypeDescription;
+(id)propertyBuilders;
+(id)typeDescription;
-(BOOL)getListSubtitle:(id)arg0 ;
// -(BOOL)getListThumbnail:(id)arg0 forSize:(unk)arg1  ;
-(id)podcastObject;


@end


#endif