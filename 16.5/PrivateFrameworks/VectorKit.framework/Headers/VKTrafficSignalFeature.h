// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VKTRAFFICSIGNALFEATURE_H
#define VKTRAFFICSIGNALFEATURE_H



#import "VKTrafficFeature.h"

@interface VKTrafficSignalFeature : VKTrafficFeature

@property (readonly, nonatomic) unsigned int countryCode; // ivar: _countryCode
@property (readonly, nonatomic) BOOL hasCountryCode; // ivar: _hasCountryCode
@property (readonly, nonatomic) NSInteger type; // ivar: _type


+(id)stringForTrafficSignalType:(NSInteger)arg0 ;
-(id)initWithTrafficSignal:(id)arg0 onRoute:(id)arg1 ;
-(id)initWithTrafficSignalType:(NSInteger)arg0 uniqueIdentifier:(id)arg1 routeOffset:(struct PolylineCoordinate )arg2 onRoute:(id)arg3 ;
-(void)populateDebugNode:(*void)arg0 ;


@end


#endif