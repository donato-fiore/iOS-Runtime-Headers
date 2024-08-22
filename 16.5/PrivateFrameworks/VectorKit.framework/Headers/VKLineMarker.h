// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VKLINEMARKER_H
#define VKLINEMARKER_H

@class NSString;


#import "VKMarker.h"

@interface VKLineMarker : VKMarker {
    shared_ptr<md::LabelFeatureMarker> _labelFeatureMarker;
}


@property (readonly, nonatomic) NSString *localizedName;


+(id)markerWithLabelFeatureMarker:(*void)arg0 ;
-(*void)labelFeatureMarkerImpl;
-(id)featureHandles;
-(id)initWithLabelFeatureMarkerPtr:(*void)arg0 ;


@end


#endif