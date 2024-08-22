// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFITUNESPRODUCTCONTENTITEM_H
#define WFITUNESPRODUCTCONTENTITEM_H



#import "WFiTunesObjectContentItem.h"

@interface WFiTunesProductContentItem : WFiTunesObjectContentItem



+(id)outputTypes;
+(id)ownedTypes;
+(id)propertyBuilders;
+(id)stringConversionBehavior;
-(BOOL)getListAltText:(id)arg0 ;
-(BOOL)getListSubtitle:(id)arg0 ;
// -(BOOL)getListThumbnail:(id)arg0 forSize:(unk)arg1  ;
-(id)mediaTrackObject;
-(id)storeObject;


@end


#endif