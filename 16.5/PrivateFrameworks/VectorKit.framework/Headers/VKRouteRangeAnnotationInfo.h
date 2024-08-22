// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VKROUTERANGEANNOTATIONINFO_H
#define VKROUTERANGEANNOTATIONINFO_H


#import <Foundation/Foundation.h>

#import "VKRouteEtaDescription.h"

@interface VKRouteRangeAnnotationInfo : NSObject

@property (readonly, nonatomic) PolylineCoordinate end; // ivar: _end
@property (readonly, nonatomic) VKRouteEtaDescription *etaDescription; // ivar: _etaDescription
@property (readonly, nonatomic) PolylineCoordinate start; // ivar: _start


-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(id)initWithEtaDescription:(id)arg0 start:(struct PolylineCoordinate )arg1 end:(struct PolylineCoordinate )arg2 ;


@end


#endif